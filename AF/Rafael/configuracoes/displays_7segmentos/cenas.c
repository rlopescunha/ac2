/*
Aulas resolvidas por Rafael Ferreira e Rodrigo Cunha.
https://github.com/gipmon/ac2
*/
void send2displays(unsigned char value){
	static const unsigned char codes[] = {0x77, 0x41, 0x3B, 0x6B, 0x4D, 0x6E, 0x7E, 0x43,
		0x7F, 0x6F, 0x5F, 0x7C, 0x36, 0x79, 0x3E, 0x1E};
	static unsigned int flag = 1;

	unsigned int first = codes[value&0x0F];
	unsigned int first = codes[value>>4];

	if(flag){

	}else{

	}

	flag = !flag;
}
