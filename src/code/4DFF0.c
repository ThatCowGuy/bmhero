#include "common.h"

extern struct UnkStruct8016E230 {
    u32 unk0;
    u32 unk4;
} UnkStruct8016E230;

extern struct UnkStruct8016E230 D_8016E220[1];
extern struct UnkStruct8016E230 D_8016E230[1];
extern s32 D_8016E23C;
extern s32 D_8016E25C;
extern s32 D_8016E264;

extern Gfx *gMasterDisplayList;
extern s32 D_8016CAA0[][2];

//#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005BAD0.s")
void func_8005BAD0(void) {
    gDPPipeSync(gMasterDisplayList++);
    gSPClearGeometryMode(gMasterDisplayList++,
        G_SHADE | G_SHADING_SMOOTH | G_CULL_FRONT | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD
    );
    gSPSetGeometryMode(gMasterDisplayList++,
        G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK 
    );
    gDPSetCombine(gMasterDisplayList++, -1, 0xFFFDF6FB);
    gDPSetRenderMode(gMasterDisplayList++,
        AA_EN | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | FORCE_BL | 0x500000,
        0
    );
    gDPSetPrimColor(gMasterDisplayList++, 0, 0, 0, 0, 0, 0x50);
    gDPFillRectangle(gMasterDisplayList++, 0x060/4, 0x2D0/4, 0x4A8/4, 0x370/4);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005BC50.s")
void func_8005BC50(void) {
    gDPPipeSync(gMasterDisplayList++);
    gSPClearGeometryMode(gMasterDisplayList++,
        G_SHADE | G_SHADING_SMOOTH | G_CULL_FRONT | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD
    );
    gSPSetGeometryMode(gMasterDisplayList++,
        G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK | G_LIGHTING
    );
    gDPSetTexturePersp(gMasterDisplayList++, G_TP_NONE);
    gDPSetRenderMode(gMasterDisplayList++,
        AA_EN | IM_RD | CVG_X_ALPHA | ALPHA_CVG_SEL | 0x550000,
        0
    );
    gDPSetCombine(gMasterDisplayList++, -1, 0xFFFCF279);
    gDPSetColorDither(gMasterDisplayList++, G_CD_BAYER);
    gDPSetTextureFilter(gMasterDisplayList++, G_TF_BILERP);
    gDPSetTextureLUT(gMasterDisplayList++, G_TT_RGBA16);
    gDPLoadTLUT_pal16(gMasterDisplayList++, 0, D_8016CAA0[3][0] + 0x10);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005BF70.s")
void func_8005BF70(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    gDPLoadMultiTile_4b(gMasterDisplayList++,
        D_8016CAA0[3][0] + 0x30, 0, 0,
        G_IM_FMT_CI,
        256, 256,
        arg2, arg3, (arg2 + 0x08), (arg3 + 0x10),
        0, 0, 0, 0, 0, 0, 0
    );
    gDPSetTileSize(gMasterDisplayList++,  0, 0, 0, 0x40, 0x40);
    gSPTextureRectangle(gMasterDisplayList++,
        (arg0 << 2), (arg1 << 2), ((arg0 + 0x08) << 2), ((arg1 + 0x10) << 2),
        0, 0, 0, 0x400, 0x400);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005C2BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005C438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005C950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005D2D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005DA00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005DD80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005E040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005E230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005E6A0.s")

void func_8005EF30(void) {
    D_8016E23C = 0;
    D_8016E230[0].unk0 = 0;
    D_8016E230[0].unk4 = 0;
    D_8016E220[0].unk0 = 0;
    D_8016E220[0].unk4 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005EF78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005EFE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F0B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F0F4.s")

void func_8005F124(void) {
        D_8016E264 = osGetCount() - D_8016E25C;
}

void func_address() {}


#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F4D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F96C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005F9EC.s")

void func_8005FA90(void) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005FAA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005FAB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/4DFF0/func_8005FAF4.s")
