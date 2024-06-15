
#define SYSCTL_RCGC2_R (*((volatile unsigned long*)0x400FE108))
#define GPIO_PORTF_DATA_R (*((volatile unsigned long*)0x400253FC))
#define GPIO_PORTF_DIR_R (*((volatile unsigned long*)0x40025400))
#define GPIO_PORTF_DEN_R (*((volatile unsigned long*)0x4002551C))

int main()
{
	volatile unsigned long count;
	SYSCTL_RCGC2_R= 0X20;
	for(count=0;count<200;count++);
	GPIO_PORTF_DIR_R |= (1<<3);
	GPIO_PORTF_DEN_R |= (1<<3);
	while(1)
	{
		GPIO_PORTF_DATA_R |= (1<<3);
		for(count=0;count<200000;count++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(count=0;count<200000;count++);
	}
	return 0;
}