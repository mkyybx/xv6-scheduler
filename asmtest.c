int main() {
	int cycle;
	asm("push %edx;\npush %eax;\nrdtsc;");
	asm volatile ("mov %%eax,%0;":"=r"(cycle));
	printf("%d\n",cycle);
	asm("pop %eax;\npop %edx;\n");
	return 0;
}
