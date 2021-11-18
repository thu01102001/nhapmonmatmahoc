printf("\n\n   ==========BAN CO THE CHON CAC CHUC NANG DUOI DAY=============");
	printf("\n\n   0. KHONG MUON SU DUNG CHUONG TRINH NAY ");
	printf("\n\n   1. CONG 4 SO  ");
	printf("\n\n   2. TRU 4 SO  ");
	printf("\n\n   3. NHAN 4 SO  ");
	printf("\n\n   4. CHIA HET 4 SO \n");
	scanf("%d%d%d%d%d%d", &luaChon, &a, &b, &c, &d, &e);
	
   { 
	if(0){ printf(" OK THOAT CHUONG TRINH!"); }
		
		else if( 1) {
			printf(" \n\n  NHAP 4 SO BAN MUON CONG: ");
			e = a+b+c+d;
			printf(" \nKET QUA LA : %d + %d + %d + %d = %d ", a, b, c, d, e);
		}
		else if( 2) {
		
			printf(" \n\n  NHAP 4 SO BAN MUON TRU: ");
			e = a-b-c-d;
			printf(" \nKET QUA LA : %d - %d - %d - %d = %d ", a, b, c, d, e);
		}
		else if( 3) {
			
			printf(" \n\n  NHAP 4 SO BAN MUON NHAN: ");
			e = a*b*c*d;
			printf(" \nKET QUA LA : %d * %d * %d * %d = %d ", a, b, c, d, a*b*c*d);
		}
		else if( 4) {
			
			printf(" \n\n  NHAP 4 SO BAN MUON CHIA HET CHO NHAU: ");
			e = a/b/c/d;
			printf(" \nKET QUA LA : %d + %d + %d + %d = %d ", a, b, c, d, a/b/c/d);
		}
		
		
	}

	return 0;
}
