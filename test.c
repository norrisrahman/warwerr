#include <stdio.h>
#include <stdlib.h>

struct {
	char *nama ;
	long int ktp;
	char *alamat;
	long int telp;
}pmnjm1,pmnjm2,pmnjm3;

struct penyewa1{
	char *nama;
	long int ktp;
	char *alamat;
	long int telp;
};


int main () {
    
    int pilihan, pilih;
    char *mobil[100];
    char nama_peminjam[100];
    int tgl, bln, thn;
	int a,lama;
	void avanza(int a);
	void sigra(int a);
	void brio(int a);
	void ayla(int a);
	void mobilio(int a);
	
	{
	ulang :
	printf("Pilih Menu   \n");
	printf("1. Informasi penyewaan  \n");
	printf("2. Registrasi peminjam   \n");
	printf("3. Data peminjam  \n");
	printf("4. cari data peminjam \n");
	printf("5. data mobil \n");
	printf("6. peminjaman\n");
	printf("7. Exit");
	printf("\n");
	printf("Pilih = ");
	scanf("%d", & pilih);
	
	switch(pilih)
	{
			case 1 :
			printf("\n");
			printf("=== TATA CARA PENYEWAAN === \n");
			printf("1. Mengisi data diri terlebih dahulu \n");
			printf("2. Memilih jenis mobil yang akan di sewa \n");
			printf("3. Menentukan lama peminjaman \n\n");
			printf("=== KETENTUAN PEMINJAMAN MOBIL === \n");
			printf("1. 1 hari peminjaman terhitung mulai dari 12.00 pm - 12.00 am \n");
			printf("2. Pengembalian melebihi batas waktu yang ditentukan akan terkena denda Rp. 50.000/jam \n");
			printf("3. Penyewa datang ke tempat untuk mengambil mobil \n\n");
			printf("======JENIS MOBIL YANG DISEWAKAN ======= \n");
			printf("|Daftar Mobil      Harga Sewa Perhari  |\n");
			printf("|1. Avanza           Rp. 170.000       |\n");
			printf("|2. Sigra            RP. 150.000       |\n");
			printf("|3. Brio             Rp. 130.000       |\n");
			printf("|4. Ayla             Rp. 110.000       |\n");
			printf("|5. Mobilio          Rp. 140.000       |\n");
			printf("\n\n");
			goto ulang;
			break;
			
		
		case 2 :
			printf("REGISTRASI PEMINJAM \n");
			struct penyewa1 p1;
			printf("Nama     : ");
			scanf("%s",p1.nama);
			printf("No.KTP   : ");
			scanf("%ld",&p1.ktp);
			printf("Alamat   : ");
			scanf("%s",p1.alamat);
			printf("No. telp : ");
			scanf("%ld",&p1.telp);
			printf("Registrasi berhasil");
			goto ulang;
			break;
			
		case 3 :
			printf("Data peminjam \n");
			pmnjm1.nama = "Tiya";
			pmnjm1.ktp = (long)20081010056;
			pmnjm1.alamat = "Surabaya";
			pmnjm1.telp = (long)625269574274;
			printf("Nama: %s \n No. KTP : %ld \n Alamat : %s \n No. Telp : %ld \n",pmnjm1.nama,pmnjm1.ktp,pmnjm1.alamat,pmnjm1.telp);
			pmnjm2.nama = "Novi";
			pmnjm2.ktp = (long)20081010075;
			pmnjm2.alamat = "Mojokerto";
			pmnjm2.telp = (long)628236149555;
			printf("Nama: %s \n No. KTP : %ld \n Alamat : %s \n No. Telp : %ld \n",pmnjm2.nama,pmnjm2.ktp,pmnjm2.alamat,pmnjm2.telp);
			pmnjm3.nama = "Aisyah";
			pmnjm3.ktp = (long)20081010083;
			pmnjm3.alamat = "Sidoarjo";
			pmnjm3.telp = (long)6282635148963;
			printf("Nama: %s \n No. KTP : %ld \n Alamat : %s \n No. Telp : %ld \n",pmnjm3.nama,pmnjm3.ktp,pmnjm3.alamat,pmnjm3.telp);
			printf("Nama : %s \n",p1.nama);
			printf("KTP : %ld \n",p1.ktp);
			printf("Nama : %s \n",p1.alamat);
			printf("Nama : %ld \n",p1.telp);
			goto ulang;
			break;
			
		case 4 : 
		printf("daftar mobil : \n\n");
		printf("Nama Mobil\tmerk\tNo.plat\tWarna\tHarga\t \n");
	
    	for(int i=0; i<5; i++)
	    {
	        ++i; 
        {
        	
            printf("%s \t \n",  mobil[i]);  
        }
        printf("\n");
    	}	
		goto ulang;
		break;
    	
    	case 5 :
    	printf ("peminjaman");
		awal :
		printf("===================================================\n");
 		printf("= Nota peminjaman mobil =\n");
 		printf("===================================================\n");
 		printf("\n");
 		printf("nama peminjam :");
 		scanf("%s", & nama_peminjam[20]);
 		printf("tanggal peminjaman :");
 		scanf("%d",&tgl);
 		printf("bulan peminjaman :");
 		scanf("%d",&bln);
 		printf("tahun peminjaman :");
 		scanf("%d",&thn);
 		printf(" Masukkan Pilihan mobil (1/2/3/4/5): ");
 		scanf("%i", &pilihan);
 
		if(pilihan==1)
 		{
 		avanza(a);
 		}
 		else if(pilihan==2)
 		{
 		sigra(a);
 		}
 		else if(pilihan==3)
 		{
 		brio(a);
 		}
 		else if(pilihan==4)
 		{
 		ayla(a);
 		}
 		else if(pilihan==5)
 		{
 		mobilio(a);
 		}
		return 0;
        		void avanza(int a); {
            int lama, hasil;
            printf("Anda memilih mobil Avanza   \n");
            printf ("Plat nomor : W 1534 VC \n Warna : Hitam\n");
            printf("Masukkan lama sewa : ");
            scanf("%i",&lama);
            hasil=lama*170000;
            printf("Total harga sewa adalah %i \n", hasil);
		}
 
		void sigra(int a); {
            int lama, hasil;
            printf("Anda memilih mobil sigra  \n");
            printf ("Plat Nomor : W 1635 NM\n Warna : Silver\n");
            printf("Masukkan lama sewa : ");
            scanf("%i",&lama);
            hasil=lama*150000;
            printf("Total harga sewa adalah %i \n", hasil);
 
		}

		void brio(int a); {
            int lama, hasil;
            printf("Anda memilih mobil brio   \n");
            printf("Plat Nomor : W 6383 ON\n Warna : Silver\n");
            printf("Masukkan lama sewa  : ");
            scanf("%i",&lama);
            hasil=lama*130000;
            printf("Total harga sewa adalah %i \n", hasil);
    
		}		

		void ayla(int a); {
            int lama, hasil;
            printf("Anda memilih mobil ayla   \n");
            printf("Plat Nomor : W 1808 HG\n Warna : Merah\n");
            printf("Masukkan lama sewa : ");
            scanf("%i",&lama);
            hasil=lama*110000;
            printf("Total harga sewa adalah %i \n", hasil);
		}

		void mobilio (int a);   {
            int lama, hasil;
            printf("Anda memilih mobil mobilio   \n");
            printf("Plat Nomor : W 0101 KU\n Warna : Putih\n");
            printf("Masukkan lama sewa : ");
            scanf("%i",&lama);
            hasil=lama*140000;
            printf("Total harga sewa adalah %i \n", hasil);
		}
	}
}
}
