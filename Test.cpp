//
//  Test.cpp
//  ancestor-tree-a
//
//  Created by Lee Fingerhut on 10/04/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//
#include "doctest.h"
#include "FamilyTree.hpp"
#include <string>
using namespace std;
using namespace family;

TEST_CASE("addMother and addFather")
{
    Tree T1("Yossi");
    T1.addFather("Yossi", "Yakov");
    T1.addMother("Yossi", "Sara");
    T1.addFather("Yakov", "Yaron");
    T1.addMother("Yaron", "Tamar");
    T1.addFather("Yaron", "Tom");
    T1.addMother("Tamar", "Rinat");
    T1.addFather("Tamar", "Asaf");
    T1.addMother("Rinat", "Lin");
    T1.addFather("Asaf", "Amir");
    T1.addMother("Asaf", "Shir");
    T1.addMother("Lin", "Limor");
}

TEST_CASE("relation")
{
    Tree T2("Yosef");
    T2.addFather("Yosef", "Yaakov");
    T2.addMother("Yosef", "Rachel") ;
    T2.addFather("Yaakov", "Isaac");
    T2.addFather("Isaac", "Avraham");
    T2.addMother("Isaac", "Sara");
    T2.addMother("Yaakov", "Rivka");
    T2.addFather("Rivka", "Shalom");
    T2.addFather("Rivka", "Tamar");
    T2.addFather("Isaac", "Avraham");
    T2.addFather("Avraham", "Terah");
    T2.addMother("Avraham", "Tom");
    T2.addFather("Rachel", "Avi");
    T2.addMother("Rachel", "Gal");
    
    
    CHECK(T2.relation("Yaakov") == string("father"));
    CHECK(T2.relation("Rachel") == string("mother"));
    CHECK(T2.relation("Isaac") == string("grandfather"));
    CHECK(T2.relation("Rivka") == string("grandmother"));
    CHECK(T2.relation("Avraham") == string("great-grandfather"));
    CHECK(T2.relation("Sara") == string("great-grandmother"));
    CHECK(T2.relation("Terah") == string("great-great-grandfather"));
    CHECK(T2.relation("Shalom") == string("great-grandmother"));
    CHECK(T2.relation("Avi") == string("grandfather"));
    CHECK(T2.relation("Gal") == string("grandmother"));
    CHECK(T2.relation("Yotam") == string("unrelated"));
    CHECK(T2.relation("Saar") == string("unrelated"));
    CHECK(T2.relation("Sapir") == string("unrelated"));
    CHECK(T2.relation("Mor") == string("grandmother"));
    CHECK(T2.relation("Asaf") == string("unrelated"));
    CHECK(T2.relation("Sami") == string("unrelated"));
    CHECK(T2.relation("Shai") == string("unrelated"));
    CHECK(T2.relation("Eli") == string("unrelated"));
    CHECK(T2.relation("Ohad") == string("unrelated"));
    CHECK(T2.relation("Anat") == string("unrelated"));
    CHECK(T2.relation("Yotam") == string("unrelated"));
    CHECK(T2.relation("Zoi") == string("unrelated"));
    CHECK(T2.relation("x") == string("unrelated"));
    CHECK(T2.relation("y") == string("grandmother"));
    CHECK(T2.relation("z") == string("unrelated"));
    CHECK(T2.relation("a") == string("unrelated"));
    CHECK(T2.relation("b") == string("unrelated"));
    CHECK(T2.relation("vv") == string("unrelated"));
    CHECK(T2.relation("Ohffad") == string("unrelated"));
    CHECK(T2.relation("Anrrtat") == string("unrelated"));
    CHECK(T2.relation("Assaf") == string("unrelated"));
    CHECK(T2.relation("Saami") == string("unrelated"));
    CHECK(T2.relation("Shaai") == string("unrelated"));
    CHECK(T2.relation("Elsi") == string("unrelated"));
    CHECK(T2.relation("Ohsad") == string("unrelated"));
    CHECK(T2.relation("Ansat") == string("unrelated"));
    CHECK(T2.relation("Yotsam") == string("unrelated"));
    CHECK(T2.relation("Zoi") == string("unrelated"));
    CHECK(T2.relation("xe") == string("unrelated"));
    CHECK(T2.relation("ye") == string("grandmother"));
    CHECK(T2.relation("zee") == string("unrelated"));
    CHECK(T2.relation("as") == string("unrelated"));
    CHECK(T2.relation("sb") == string("unrelated"));
    CHECK(T2.relation("vve") == string("unrelated"));
    CHECK(T2.relation("Ohfefad") == string("unrelated"));
    CHECK(T2.relation("Anrrteat") == string("unrelated"));
    CHECK(T2.relation("Zdoi") == string("unrelated"));
    CHECK(T2.relation("dx") == string("unrelated"));
    CHECK(T2.relation("dy") == string("grandmother"));
    CHECK(T2.relation("zd") == string("unrelated"));
    CHECK(T2.relation("da") == string("unrelated"));
    CHECK(T2.relation("bd") == string("unrelated"));
    CHECK(T2.relation("vdv") == string("unrelated"));
    CHECK(T2.relation("Odhffad") == string("unrelated"));
    CHECK(T2.relation("Adnrrtat") == string("unrelated"));
    CHECK(T2.relation("Assdaf") == string("unrelated"));
    CHECK(T2.relation("dSaami") == string("unrelated"));
    CHECK(T2.relation("Sdhaai") == string("unrelated"));
    CHECK(T2.relation("Eldsi") == string("unrelated"));
    CHECK(T2.relation("Odhsad") == string("unrelated"));
    CHECK(T2.relation("Adnsat") == string("unrelated"));
    CHECK(T2.relation("Ydotsam") == string("unrelated"));
    CHECK(T2.relation("Zdoi") == string("unrelated"));
    CHECK(T2.relation("dxe") == string("unrelated"));
    CHECK(T2.relation("yde") == string("grandmother"));
    CHECK(T2.relation("zdee") == string("unrelated"));
    CHECK(T2.relation("adds") == string("unrelated"));
    CHECK(T2.relation("sdb") == string("unrelated"));
    CHECK(T2.relation("vvde") == string("unrelated"));
    CHECK(T2.relation("Odhfefad") == string("unrelated"));
    CHECK(T2.relation("Andrrteat") == string("unrelated"));
    CHECK(T2.relation("Yotyam") == string("unrelated"));
    CHECK(T2.relation("Syaar") == string("unrelated"));
    CHECK(T2.relation("Sapyir") == string("unrelated"));
    CHECK(T2.relation("Moyr") == string("grandmother"));
    CHECK(T2.relation("Asyaf") == string("unrelated"));
    CHECK(T2.relation("Saymi") == string("unrelated"));
    CHECK(T2.relation("Shyai") == string("unrelated"));
    CHECK(T2.relation("Eyli") == string("unrelated"));
    CHECK(T2.relation("Oyhad") == string("unrelated"));
    CHECK(T2.relation("Anyat") == string("unrelated"));
    CHECK(T2.relation("Yoytam") == string("unrelated"));
    CHECK(T2.relation("Zyoi") == string("unrelated"));
    CHECK(T2.relation("xy") == string("unrelated"));
    CHECK(T2.relation("yy") == string("grandmother"));
    CHECK(T2.relation("zy") == string("unrelated"));
    CHECK(T2.relation("yyy") == string("unrelated"));
    CHECK(T2.relation("by") == string("unrelated"));
    CHECK(T2.relation("vyv") == string("unrelated"));
    CHECK(T2.relation("Ohfyfad") == string("unrelated"));
    CHECK(T2.relation("Anyrrtat") == string("unrelated"));
    CHECK(T2.relation("Assayf") == string("unrelated"));
    CHECK(T2.relation("Saaymi") == string("unrelated"));
    CHECK(T2.relation("Shyaai") == string("unrelated"));
    CHECK(T2.relation("Elsyi") == string("unrelated"));
    CHECK(T2.relation("Ohysad") == string("unrelated"));
    CHECK(T2.relation("Anysat") == string("unrelated"));
    CHECK(T2.relation("Yoytsam") == string("unrelated"));
    CHECK(T2.relation("yZoi") == string("unrelated"));
    CHECK(T2.relation("xye") == string("unrelated"));
    CHECK(T2.relation("yye") == string("grandmother"));
    CHECK(T2.relation("zyee") == string("unrelated"));
    CHECK(T2.relation("ays") == string("unrelated"));
    CHECK(T2.relation("syb") == string("unrelated"));
    CHECK(T2.relation("vyyve") == string("unrelated"));
    CHECK(T2.relation("Ohyyfefad") == string("unrelated"));
    CHECK(T2.relation("Anyyrrteat") == string("unrelated"));
    CHECK(T2.relation("Zdyyoi") == string("unrelated"));
    CHECK(T2.relation("dyyx") == string("unrelated"));
    CHECK(T2.relation("dyy") == string("grandmother"));
    CHECK(T2.relation("zyd") == string("unrelated"));
    CHECK(T2.relation("dya") == string("unrelated"));
    CHECK(T2.relation("byd") == string("unrelated"));
    CHECK(T2.relation("vydv") == string("unrelated"));
    CHECK(T2.relation("Odyhffad") == string("unrelated"));
    CHECK(T2.relation("Adynrrtat") == string("unrelated"));
    CHECK(T2.relation("Assdyaf") == string("unrelated"));
    CHECK(T2.relation("dSyaami") == string("unrelated"));
    CHECK(T2.relation("Sdyhaai") == string("unrelated"));
    CHECK(T2.relation("Elydsi") == string("unrelated"));
    CHECK(T2.relation("Odyhsad") == string("unrelated"));
    CHECK(T2.relation("Adnysat") == string("unrelated"));
    CHECK(T2.relation("Ydotysam") == string("unrelated"));
    CHECK(T2.relation("Zdyoi") == string("unrelated"));
    CHECK(T2.relation("dyxe") == string("unrelated"));
    CHECK(T2.relation("yyde") == string("grandmother"));
    CHECK(T2.relation("zydee") == string("unrelated"));
    CHECK(T2.relation("addys") == string("unrelated"));
    CHECK(T2.relation("sdyb") == string("unrelated"));
    CHECK(T2.relation("vvdye") == string("unrelated"));
    CHECK(T2.relation("Odhfyefad") == string("unrelated"));
    CHECK(T2.relation("Andryrteat") == string("unrelated"));
}

