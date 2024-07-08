/**
* \mainpage Mata Kuliah Pemrograman dan Jaringan.
 *
 * \section intro_sen Pengantar
 * pemilihan program Mata Kuliah.
 * sistem ini dirancang untuk memilih Mata Kuliah dan mencari tau nilai dari presensi, activity, exercise, dan nilai tugas akhir.
 *
 * \section struktur_sec Struktur Kode
*untuk Mata Kuliah nya ada 2 yaitu
*-\b Pemrograman dan Jaringan.
*
*
*\section setup_sec Setup dan konfigurasi
*Untuk menjalankan sistem ini, Pastikan memiliki compiler yang mendukung.
*Kompilasi dan jalankan file ini menggunakan compiler pilihan.
*
*\section author_sec Tentang Pengembang
*Sistem ini dikembangkan oleh muhammadaqilfirdaus145.id sebagai pemilik dari perusahaan.

*\section note_sec Catatan
* Dokumentasi ini dihasilkan menggunakan Doxygen.

*@file UjianAkhirSemesterPemdas.cpp
* @brief The MataKuliah class represents an employee.
 */

#include <iostream>
using namespace std;

class MataKuliah {
public:
    float presensi;
    float activity;
    float exercise;
    float tugasakhir; ///< Employee's name

    /**
     * @brief The Proyek class represents a project.
     */


public:
    MataKuliah()
    {
        presensi = 0.0;
        activity = 0.0; exercise(0.0), tugasakhir(0.0) {}
    }
    virtual void namaMataKuliah() { return; }

    void setpresensi, activity, exercise, tugasakhir(float nilai)
    {
        this->presensi = nilai;
        this->activity = nilai;
        this->exercise = nilai;
        this->tugasakhir = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }

};

class Pemrograman : public MataKuliah
{
    class()
};
class Jaringan : public MataKuliah
{

};
int main()
{
    char pilih;
    MataKuliah mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;

}