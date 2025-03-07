/****************************************************************************
*
*    Copyright (c) 2005 - 2020 by Vivante Corp.  All rights reserved.
*
*    The material in this file is confidential and contains trade secrets
*    of Vivante Corporation. This is proprietary information owned by
*    Vivante Corporation. No part of this work may be disclosed,
*    reproduced, copied, transmitted, or used in any way for any purpose,
*    without the express written permission of Vivante Corporation.
*
*****************************************************************************/


/*Auto created on 2020-03-26 14:34*/
#ifndef _gc_feature_database_h_
#define _gc_feature_database_h_

typedef struct
{
    /* Chip ID. */
    gctUINT32 chipID;
    gctUINT32 chipVersion;
    gctUINT32 productID;
    gctUINT32 ecoID;
    gctUINT32 customerID;
    gctUINT32 patchVersion;
    const char *productName;
    gctUINT32 formalRelease;
    gctUINT32 TempRegisters;
    gctUINT32 ThreadCount;
    gctUINT32 NumShaderCores;
    gctUINT32 InstructionCount;
    gctUINT32 NumberOfConstants;
    gctUINT32 CoreCount;
    gctUINT32 LocalStorageSize;
    gctUINT32 L1CacheSize;
    gctUINT32 InstructionMemorySize;
    gctUINT32 ShaderPCLength;
    gctUINT32 USC_MAX_PAGES;
    gctUINT32 NumPixelPipes;
    gctUINT32 USC_CACHE_CONTROLLERS;
    gctUINT32 USC_BANKS;
    gctUINT32 Streams;
    gctUINT32 VaryingCount;
    gctUINT32 VertexOutputBufferSize;
    gctUINT32 BufferSize;
    gctUINT32 VertexCacheSize;
    gctUINT32 NumResolvePipes;
    gctUINT32 RESULT_WINDOW_MAX_SIZE;
    gctUINT32 ClusterAliveMask;
    gctUINT32 NNMadPerCore;
    gctUINT32 NNCoreCount;
    gctUINT32 NNCoreCount_INT8;
    gctUINT32 NNCoreCount_INT16;
    gctUINT32 NNCoreCount_FLOAT16;
    gctUINT32 NNCoreCount_BFLOAT;
    gctUINT32 NNInputBufferDepth;
    gctUINT32 NNAccumBufferDepth;
    gctUINT32 TPEngine_PwlLUTCount;
    gctUINT32 TPEngine_PwlLUTSize;
    gctUINT32 VIP_SRAM_SIZE;
    gctUINT32 TPEngine_CoreCount;
    gctUINT32 AXI_SRAM_SIZE;
    gctUINT32 NN_INIMAGE_OFFSET_BITS;
    gctUINT32 TP_REORDER_INIMAGE_SIZE;
    gctUINT32 TPLite_CoreCount;
    gctUINT32 NNFP16_XYDP_X;
    gctUINT32 NNFP16_XYDP_Y;
    gctUINT32 NNFP16_ZDP;
    gctUINT32 NN_LANES_PER_OUT_CYCLE;
    gctUINT32 MAX_OT_NUMBER;
    gctUINT32 PHYSICAL_VIP_SRAM_WIDTH_IN_BYTE;
    gctUINT32 EQUIVALENT_VIP_SRAM_WIDTH_INBYTE;
    gctUINT32 TP_ZRL_BITS;
    gctUINT32 LATENCY_HIDING_AT_FULL_AXI_BW;
    gctUINT32 AXI_BUS_WIDTH;
    gctUINT32 NN_KERNEL_X_SIZE;
    gctUINT32 NN_KERNEL_Y_SIZE;
    gctUINT32 NN_KERNEL_Z_SIZE;
    gctUINT32 NN_X_OFFSET;
    gctUINT32 NN_Y_OFFSET;
    gctUINT32 DDR_KERNEL_BURST_SIZE;
    gctUINT32 REG_FastClear:1;
    gctUINT32 REG_SpecialAntiAliasing:1;
    gctUINT32 REG_Pipe3D:1;
    gctUINT32 REG_DXTTextureCompression:1;
    gctUINT32 REG_DebugMode:1;
    gctUINT32 REG_ZCompression:1;
    gctUINT32 REG_YUV420Filter:1;
    gctUINT32 REG_MSAA:1;
    gctUINT32 REG_DC:1;
    gctUINT32 REG_Pipe2D:1;
    gctUINT32 REG_ETC1TextureCompression:1;
    gctUINT32 REG_FastScaler:1;
    gctUINT32 REG_HighDynamicRange:1;
    gctUINT32 REG_YUV420Tiler:1;
    gctUINT32 REG_ModuleCG:1;
    gctUINT32 REG_MinArea:1;
    gctUINT32 REG_NoEZ:1;
    gctUINT32 REG_No422Texture:1;
    gctUINT32 REG_BufferInterleaving:1;
    gctUINT32 REG_ByteWrite2D:1;
    gctUINT32 REG_NoScaler:1;
    gctUINT32 REG_YUY2Averaging:1;
    gctUINT32 REG_HalfPECache:1;
    gctUINT32 REG_HalfTXCache:1;
    gctUINT32 REG_YUY2RenderTarget:1;
    gctUINT32 REG_Mem32BitSupport:1;
    gctUINT32 REG_PipeVG:1;
    gctUINT32 REG_VGTS:1;
    gctUINT32 REG_FE20:1;
    gctUINT32 REG_ByteWrite3D:1;
    gctUINT32 REG_RsYuvTarget:1;
    gctUINT32 REG_FE20BitIndex:1;
    gctUINT32 REG_FlipY:1;
    gctUINT32 REG_DualReturnBus:1;
    gctUINT32 REG_EndiannessConfig:1;
    gctUINT32 REG_Texture8K:1;
    gctUINT32 REG_CorrectTextureConverter:1;
    gctUINT32 REG_SpecialMsaaLod:1;
    gctUINT32 REG_FastClearFlush:1;
    gctUINT32 REG_2DPE20:1;
    gctUINT32 REG_CorrectAutoDisable:1;
    gctUINT32 REG_Render8K:1;
    gctUINT32 REG_TileStatus2Bits:1;
    gctUINT32 REG_SeparateTileStatusWhenInterleaved:1;
    gctUINT32 REG_SuperTiled32x32:1;
    gctUINT32 REG_VG20:1;
    gctUINT32 REG_TSExtendedCommands:1;
    gctUINT32 REG_CompressionFifoFixed:1;
    gctUINT32 REG_ExtraShaderInstructions0:1;
    gctUINT32 REG_VGFilter:1;
    gctUINT32 REG_VG21:1;
    gctUINT32 REG_ShaderGetsW:1;
    gctUINT32 REG_ExtraShaderInstructions1:1;
    gctUINT32 REG_DefaultReg0:1;
    gctUINT32 REG_MC20:1;
    gctUINT32 REG_ShaderMSAASideband:1;
    gctUINT32 REG_BugFixes0:1;
    gctUINT32 REG_VAA:1;
    gctUINT32 REG_BypassInMSAA:1;
    gctUINT32 REG_HierarchicalZ:1;
    gctUINT32 REG_NewTexture:1;
    gctUINT32 REG_A8TargetSupport:1;
    gctUINT32 REG_CorrectStencil:1;
    gctUINT32 REG_EnhanceVR:1;
    gctUINT32 REG_RSUVSwizzle:1;
    gctUINT32 REG_V2Compression:1;
    gctUINT32 REG_VGDoubleBuffer:1;
    gctUINT32 REG_BugFixes1:1;
    gctUINT32 REG_BugFixes2:1;
    gctUINT32 REG_TextureStride:1;
    gctUINT32 REG_BugFixes3:1;
    gctUINT32 REG_CorrectAutoDisable1:1;
    gctUINT32 REG_AutoRestartTS:1;
    gctUINT32 REG_BugFixes4:1;
    gctUINT32 REG_L2Windowing:1;
    gctUINT32 REG_HalfFloatPipe:1;
    gctUINT32 REG_PixelDither:1;
    gctUINT32 REG_TwoStencilReference:1;
    gctUINT32 REG_ExtendedPixelFormat:1;
    gctUINT32 REG_CorrectMinMaxDepth:1;
    gctUINT32 REG_DitherAndFilterPlusAlpha2D:1;
    gctUINT32 REG_BugFixes5:1;
    gctUINT32 REG_New2D:1;
    gctUINT32 REG_NewFloatingPointArithmetic:1;
    gctUINT32 REG_TextureHorizontalAlignmentSelect:1;
    gctUINT32 REG_NonPowerOfTwo:1;
    gctUINT32 REG_LinearTextureSupport:1;
    gctUINT32 REG_Halti0:1;
    gctUINT32 REG_CorrectOverflowVG:1;
    gctUINT32 REG_NegativeLogFix:1;
    gctUINT32 REG_ResolveOffset:1;
    gctUINT32 REG_OkToGateAxiClock:1;
    gctUINT32 REG_MMU:1;
    gctUINT32 REG_WideLine:1;
    gctUINT32 REG_BugFixes6:1;
    gctUINT32 REG_FcFlushStall:1;
    gctUINT32 REG_LineLoop:1;
    gctUINT32 REG_LogicOp:1;
    gctUINT32 REG_SeamlessCubeMap:1;
    gctUINT32 REG_SuperTiledTexture:1;
    gctUINT32 REG_LinearPE:1;
    gctUINT32 REG_RectPrimitive:1;
    gctUINT32 REG_Composition:1;
    gctUINT32 REG_CorrectAutoDisableCountWidth:1;
    gctUINT32 REG_PESwizzle:1;
    gctUINT32 REG_EndEvent:1;
    gctUINT32 REG_S1S8:1;
    gctUINT32 REG_Halti1:1;
    gctUINT32 REG_RGB888:1;
    gctUINT32 REG_TX_YUVAssembler:1;
    gctUINT32 REG_DynamicFrequencyScaling:1;
    gctUINT32 REG_TXFilter:1;
    gctUINT32 REG_FullDirectFB:1;
    gctUINT32 REG_OnePass2DFilter:1;
    gctUINT32 REG_ThreadWalkerInPS:1;
    gctUINT32 REG_TileFiller:1;
    gctUINT32 REG_YUVStandard:1;
    gctUINT32 REG_MultiSourceBlt:1;
    gctUINT32 REG_YUVConversion:1;
    gctUINT32 REG_FlushFixed2D:1;
    gctUINT32 REG_Interleaver:1;
    gctUINT32 REG_MixedStreams:1;
    gctUINT32 REG_L2CacheFor2D420:1;
    gctUINT32 REG_BugFixes7:1;
    gctUINT32 REG_NoIndexPattern:1;
    gctUINT32 REG_TextureTileStatus:1;
    gctUINT32 REG_DecompressZ16:1;
    gctUINT32 REG_BugFixes8:1;
    gctUINT32 REG_DERotationStallFix:1;
    gctUINT32 REG_OclOnly:1;
    gctUINT32 REG_NewFeatures0:1;
    gctUINT32 REG_InstructionCache:1;
    gctUINT32 REG_GeometryShader:1;
    gctUINT32 REG_TexCompressionSupertiled:1;
    gctUINT32 REG_Generics:1;
    gctUINT32 REG_BugFixes9:1;
    gctUINT32 REG_FastMSAA:1;
    gctUINT32 REG_WClip:1;
    gctUINT32 REG_BugFixes10:1;
    gctUINT32 REG_UnifiedSamplers:1;
    gctUINT32 REG_BugFixes11:1;
    gctUINT32 REG_PerformanceCounters:1;
    gctUINT32 REG_ExtraShaderInstructions2:1;
    gctUINT32 REG_BugFixes12:1;
    gctUINT32 REG_BugFixes13:1;
    gctUINT32 REG_DEEnhancements1:1;
    gctUINT32 REG_ACE:1;
    gctUINT32 REG_TXEnhancements1:1;
    gctUINT32 REG_SHEnhancements1:1;
    gctUINT32 REG_SHEnhancements2:1;
    gctUINT32 REG_PEEnhancements1:1;
    gctUINT32 REG_DEEnhancements2:1;
    gctUINT32 REG_BugFixes14:1;
    gctUINT32 REG_PowerOptimizations0:1;
    gctUINT32 REG_NewHZ:1;
    gctUINT32 REG_BugFixes15:1;
    gctUINT32 REG_DEEnhancements3:1;
    gctUINT32 REG_SHEnhancements3:1;
    gctUINT32 REG_SHEnhancements4:1;
    gctUINT32 REG_TXEnhancements2:1;
    gctUINT32 REG_FEEnhancements1:1;
    gctUINT32 REG_PEEnhancements2:1;
    gctUINT32 REG_PAEnhancements1:1;
    gctUINT32 REG_DENoGamma:1;
    gctUINT32 REG_PAEnhancements2:1;
    gctUINT32 REG_DEEnhancements4:1;
    gctUINT32 REG_PEEnhancements3:1;
    gctUINT32 REG_HIEnhancements1:1;
    gctUINT32 REG_TXEnhancements3:1;
    gctUINT32 REG_SHEnhancements5:1;
    gctUINT32 REG_FEEnhancements2:1;
    gctUINT32 REG_BugFixes16:1;
    gctUINT32 REG_DEEnhancements5:1;
    gctUINT32 REG_TXEnhancements4:1;
    gctUINT32 REG_PEEnhancements4:1;
    gctUINT32 REG_MCEnhancements1:1;
    gctUINT32 REG_Halti2:1;
    gctUINT32 REG_DEMirrorRotate:1;
    gctUINT32 REG_SmallMSAA:1;
    gctUINT32 REG_BugFixes17:1;
    gctUINT32 REG_Rasterizer2:1;
    gctUINT32 REG_DualPipeOPF:1;
    gctUINT32 REG_MultiSrcV2:1;
    gctUINT32 REG_CSCV2:1;
    gctUINT32 REG_PAEnhancements3:1;
    gctUINT32 REG_BugFixes18:1;
    gctUINT32 REG_Compression2D:1;
    gctUINT32 REG_Probe:1;
    gctUINT32 REG_MediumPrecision:1;
    gctUINT32 REG_DESupertile:1;
    gctUINT32 REG_BugFixes19:1;
    gctUINT32 REG_SHEnhancements6:1;
    gctUINT32 REG_SHEnhancements7:1;
    gctUINT32 REG_BugFixes20:1;
    gctUINT32 REG_DEAddress40:1;
    gctUINT32 REG_MiniMMUFix:1;
    gctUINT32 REG_EEZ:1;
    gctUINT32 REG_BugFixes21:1;
    gctUINT32 REG_ExtraVgCaps:1;
    gctUINT32 REG_MultiSrcV15:1;
    gctUINT32 REG_BugFixes22:1;
    gctUINT32 REG_Halti3:1;
    gctUINT32 REG_TessellationShaders:1;
    gctUINT32 REG_OPF9Tap:1;
    gctUINT32 REG_MultiSrcV2StrQuad:1;
    gctUINT32 REG_SeperateSRCAndDstCache:1;
    gctUINT32 REG_Halti4:1;
    gctUINT32 REG_RAWriteDepth:1;
    gctUINT32 REG_AndroidOnly:1;
    gctUINT32 REG_HasChipProductReg:1;
    gctUINT32 REG_TXSupportDEC:1;
    gctUINT32 REG_S8MSAACompression:1;
    gctUINT32 REG_BugFixesIn544:1;
    gctUINT32 REG_L2CacheRemove:1;
    gctUINT32 REG_FEAllowRndVtxCnt:1;
    gctUINT32 REG_CubeMapFL28:1;
    gctUINT32 REG_TX6bitFrac:1;
    gctUINT32 REG_FEAllowStallPrefetchEng:1;
    gctUINT32 REG_ThirdPartyCompression:1;
    gctUINT32 REG_RSS8:1;
    gctUINT32 REG_MSAACoherencyCheck:1;
    gctUINT32 REG_Halti5:1;
    gctUINT32 REG_Evis:1;
    gctUINT32 REG_BltEngine:1;
    gctUINT32 REG_BugFixes23:1;
    gctUINT32 REG_BugFixes24:1;
    gctUINT32 REG_DEC:1;
    gctUINT32 REG_VSTileNV12:1;
    gctUINT32 REG_VSTileNV12_10BIT:1;
    gctUINT32 REG_DisableVIP:1;
    gctUINT32 RenderTarget8:1;
    gctUINT32 TxLodFlowCorrection:1;
    gctUINT32 FaceLod:1;
    gctUINT32 MultiCoreSemaphoreStallV2:1;
    gctUINT32 VMSAA:1;
    gctUINT32 ChipEnableLink:1;
    gctUINT32 MULTI_SRC_BLT_1_5_ENHANCEMENT:1;
    gctUINT32 MULTI_SRC_BLT_BILINEAR_FILTER:1;
    gctUINT32 RA_HZEZ_CLOCK_CONTROL:1;
    gctUINT32 CACHE128B256BPERLINE:1;
    gctUINT32 V4Compression:1;
    gctUINT32 PE2D_MAJOR_SUPER_TILE:1;
    gctUINT32 PE_32BPC_COLORMASK_FIX:1;
    gctUINT32 ALPHA_BLENDING_OPT:1;
    gctUINT32 NEW_GPIPE:1;
    gctUINT32 PIPELINE_32_ATTRIBUTES:1;
    gctUINT32 MSAA_SHADING:1;
    gctUINT32 NO_ANISTRO_FILTER:1;
    gctUINT32 NO_ASTC:1;
    gctUINT32 NO_DXT:1;
    gctUINT32 HWTFB:1;
    gctUINT32 RA_DEPTH_WRITE_MSAA1X_FIX:1;
    gctUINT32 EZHZ_CLOCKGATE_FIX:1;
    gctUINT32 SH_SNAP2PAGE_FIX:1;
    gctUINT32 SH_HALFDEPENDENCY_FIX:1;
    gctUINT32 USC_MCFILL_FIX:1;
    gctUINT32 TPG_TCPERF_FIX:1;
    gctUINT32 USC_MDFIFO_OVERFLOW_FIX:1;
    gctUINT32 SH_TEXLD_BARRIER_IN_CS_FIX:1;
    gctUINT32 RS_NEW_BASEADDR:1;
    gctUINT32 PE_8bpp_DUALPIPE_FIX:1;
    gctUINT32 SH_ADVANCED_INSTR:1;
    gctUINT32 SH_FLAT_INTERPOLATION_DUAL16_FIX:1;
    gctUINT32 USC_CONTINUOUS_FLUS_FIX:1;
    gctUINT32 SH_SUPPORT_V4:1;
    gctUINT32 SH_SUPPORT_ALPHA_KILL:1;
    gctUINT32 PE_NO_ALPHA_TEST:1;
    gctUINT32 TX_LOD_NEAREST_SELECT:1;
    gctUINT32 SH_FIX_LDEXP:1;
    gctUINT32 SUPPORT_MOVAI:1;
    gctUINT32 SH_SNAP2PAGE_MAXPAGES_FIX:1;
    gctUINT32 PE_RGBA16I_FIX:1;
    gctUINT32 BLT_8bpp_256TILE_FC_FIX:1;
    gctUINT32 PE_64bit_FENCE_FIX:1;
    gctUINT32 USC_FULL_CACHE_FIX:1;
    gctUINT32 TX_YUV_ASSEMBLER_10BIT:1;
    gctUINT32 FE_32bit_INDEX_FIX:1;
    gctUINT32 BLT_64bpp_MASKED_CLEAR_FIX:1;
    gctUINT32 SECURITY:1;
    gctUINT32 ROBUSTNESS:1;
    gctUINT32 USC_ATOMIC_FIX:1;
    gctUINT32 SH_PSO_MSAA1x_FIX:1;
    gctUINT32 USC_VX_PERF_FIX:1;
    gctUINT32 USC_GOS_ADDR_FIX:1;
    gctUINT32 TX_8bit_UVFrac:1;
    gctUINT32 TX_DESC_CACHE_CLOCKGATE_FIX:1;
    gctUINT32 RSBLT_MSAA_DECOMPRESSION:1;
    gctUINT32 TX_INTEGER_COORDINATE:1;
    gctUINT32 DRAWID:1;
    gctUINT32 PSIO_SAMPLEMASK_IN_R0ZW_FIX:1;
    gctUINT32 TX_INTEGER_COORDINATE_V2:1;
    gctUINT32 MULTI_CORE_BLOCK_SET_CONFIG:1;
    gctUINT32 SNAPPAGE_CMD:1;
    gctUINT32 SH_NO_INDEX_CONST_ON_A0:1;
    gctUINT32 SH_NO_ONECONST_LIMIT:1;
    gctUINT32 SH_IMG_LDST_ON_TEMP:1;
    gctUINT32 COMPUTE_ONLY:1;
    gctUINT32 SH_IMG_LDST_CLAMP:1;
    gctUINT32 SH_ICACHE_ALLOC_COUNT_FIX:1;
    gctUINT32 SH_ICACHE_PREFETCH:1;
    gctUINT32 PE2D_SEPARATE_CACHE:1;
    gctUINT32 PE_MSAA_OQ_FIX:1;
    gctUINT32 PSIO_MSAA_CL_FIX:1;
    gctUINT32 USC_DEFER_FILL_FIX:1;
    gctUINT32 SH_CLOCK_GATE_FIX:1;
    gctUINT32 FE_NEED_DUMMYDRAW:1;
    gctUINT32 PE2D_LINEAR_YUV420_OUTPUT:1;
    gctUINT32 PE2D_LINEAR_YUV420_10BIT:1;
    gctUINT32 MULTI_CLUSTER:1;
    gctUINT32 SH_MULTI_WG_PACK:1;
    gctUINT32 SH_DUAL16_SAMPLEMASK_ZW:1;
    gctUINT32 TPG_TRIVIAL_MODE_FIX:1;
    gctUINT32 TX_ASTC_MULTISLICE_FIX:1;
    gctUINT32 FE_ROBUST_FIX:1;
    gctUINT32 SH_GPIPE_ACCESS_FULLTEMPS:1;
    gctUINT32 PSIO_INTERLOCK:1;
    gctUINT32 PA_WIDELINE_FIX:1;
    gctUINT32 WIDELINE_HELPER_FIX:1;
    gctUINT32 G2D_3rd_PARTY_COMPRESSION_1_1:1;
    gctUINT32 TX_FLUSH_L1CACHE:1;
    gctUINT32 PE_DITHER_FIX2:1;
    gctUINT32 SH_TEXLD_U_FIX:1;
    gctUINT32 MC_FCCACHE_BYTEMASK:1;
    gctUINT32 SH_MULTI_WG_PACK_FIX:1;
    gctUINT32 PE_ADVANCE_BLEND_PART0:1;
    gctUINT32 FE_PATCHLIST_FETCH_FIX:1;
    gctUINT32 RA_CG_FIX:1;
    gctUINT32 DEC400:1;
    gctUINT32 LS_SUPPORT_PERCOMP_DEPENDENCY:1;
    gctUINT32 MULTI_CORE_BLOCK_SET_CONFIG2:1;
    gctUINT32 PE_VMSAA_COVERAGE_CACHE_FIX:1;
    gctUINT32 SECURITY_AHB:1;
    gctUINT32 MULTICORE_SEMAPHORESTALL_V3:1;
    gctUINT32 SMALLBATCH:1;
    gctUINT32 SH_CMPLX:1;
    gctUINT32 SH_IDIV0_SWZL_EHS:1;
    gctUINT32 TX_LERP_LESS_BIT:1;
    gctUINT32 SH_GM_ENDIAN:1;
    gctUINT32 SH_GM_USC_UNALLOC:1;
    gctUINT32 SH_END_OF_BB:1;
    gctUINT32 TX_BORDER_CLAMP_FIX:1;
    gctUINT32 SH_IMG_LD_LASTPIXEL_FIX:1;
    gctUINT32 ASYNC_BLT:1;
    gctUINT32 ASYNC_FE_FENCE_FIX:1;
    gctUINT32 PSCS_THROTTLE:1;
    gctUINT32 SEPARATE_LS:1;
    gctUINT32 WIDELINE_TRIANGLE_EMU:1;
    gctUINT32 FENCE_32BIT:1;
    gctUINT32 FENCE_64BIT:1;
    gctUINT32 PE_DEPTH_ONLY_OQFIX:1;
    gctUINT32 TX_SEAMLESS_CUBE:1;
    gctUINT32 TX_SNORM_SUPPORT:1;
    gctUINT32 SH_SCATTER_GATHER:1;
    gctUINT32 HWMANAGED_LS:1;
    gctUINT32 SH_IMAGE_ENABLE_FIX:1;
    gctUINT32 MSAA_FRAGMENT_OPERATION:1;
    gctUINT32 PE_TILE_CACHE_FLUSH_FIX:1;
    gctUINT32 BLT_YUV_OUTPUT:1;
    gctUINT32 SH_IO_CG_FIX:1;
    gctUINT32 PE_SWIZZLE:1;
    gctUINT32 SH_ROBUSTNESS_FIX:1;
    gctUINT32 USC_ATOMIC_FIX2:1;
    gctUINT32 PE_A8B8G8R8:1;
    gctUINT32 MULTIVIEW_RENDER:1;
    gctUINT32 FE_DRAW_DIRECT:1;
    gctUINT32 TX_VKBORDER_MODE:1;
    gctUINT32 TX_UNNORMALIZED_COORD:1;
    gctUINT32 PA_LINECLIP_FIX:1;
    gctUINT32 TX_8bit_UVFrac_ROUNDING_FIX:1;
    gctUINT32 MP_ARCH:1;
    gctUINT32 TX_NO_FIXED_FILTER:1;
    gctUINT32 SHARE_Z:1;
    gctUINT32 DE_2D_FAST_CLEAR:1;
    gctUINT32 TX_CLEAR_PENDING_FIX:1;
    gctUINT32 NO_HI1_L2:1;
    gctUINT32 USC_EVICT_CTRL_FIFO_FLOP_RESET_FIX:1;
    gctUINT32 FORMAT_10BIT_CROSS_4K:1;
    gctUINT32 FORMAT_P010LSB_I010:1;
    gctUINT32 ENDIAN_CONTROL:1;
    gctUINT32 G2D_DEC400EX:1;
    gctUINT32 SH_VX2_FLOATING_MAD_FIX:1;
    gctUINT32 TS_FC_VULKAN_SUPPORT:1;
    gctUINT32 MSAA_FLOAT_64BIT:1;
    gctUINT32 VG_TS_CULLING:1;
    gctUINT32 VG_FP25:1;
    gctUINT32 VG_AYUV_INPUT_OUTPUT:1;
    gctUINT32 VG_DOUBLE_IMAGE:1;
    gctUINT32 VG_RECTANGLE_STRIPE_MODE:1;
    gctUINT32 VG_MMU:1;
    gctUINT32 VG_IM_FILTER:1;
    gctUINT32 VG_IM_YUV_PACKET:1;
    gctUINT32 VG_IM_YUV_PLANAR:1;
    gctUINT32 VG_PE_YUV_PACKET:1;
    gctUINT32 VG_COLOR_PRECISION_8_BIT:1;
    gctUINT32 VG_RESOLVE_ENGINE:1;
    gctUINT32 VG_PE_COLOR_KEY:1;
    gctUINT32 VG_IM_INDEX_FORMAT:1;
    gctUINT32 VG_RESOLUTION_8K:1;
    gctUINT32 VG_IMAGE_16K:1;
    gctUINT32 VG_FORMAT_ARGB2222:1;
    gctUINT32 G2D_DEC400:1;
    gctUINT32 DC_OVERLAY_SCALING:1;
    gctUINT32 DC_SOURCE_ROTATION:1;
    gctUINT32 DC_TILED:1;
    gctUINT32 DC_YUV_L1:1;
    gctUINT32 DC_D30_OUTPUT:1;
    gctUINT32 DC_MMU:1;
    gctUINT32 DC_COMPRESSION:1;
    gctUINT32 DC_QOS:1;
    gctUINT32 AI_GPU:1;
    gctUINT32 EVIS_NO_ABSDIFF:1;
    gctUINT32 EVIS_NO_BITREPLACE:1;
    gctUINT32 EVIS_NO_BOXFILTER:1;
    gctUINT32 EVIS_NO_CORDIAC:1;
    gctUINT32 EVIS_NO_DP32:1;
    gctUINT32 EVIS_NO_FILTER:1;
    gctUINT32 EVIS_NO_IADD:1;
    gctUINT32 EVIS_NO_SELECTADD:1;
    gctUINT32 EVIS_LERP_7OUTPUT:1;
    gctUINT32 EVIS_ACCSQ_8OUTPUT:1;
    gctUINT32 EVIS_VX2:1;
    gctUINT32 NN_FLOAT:1;
    gctUINT32 TP_ENGINE:1;
    gctUINT32 VIP_V7:1;
    gctUINT32 MCFE:1;
    gctUINT32 NN_INTERLEVE8:1;
    gctUINT32 TP_REORDER:1;
    gctUINT32 TP_LRN:1;
    gctUINT32 TP_MAX_POOLING_STRIDE1:1;
    gctUINT32 NN_FP16_ALU:1;
    gctUINT32 NN_INT16_ALU:1;
    gctUINT32 TP_ROI_POOLING:1;
    gctUINT32 NN_ZDP3:1;
    gctUINT32 NN_ZDP6:1;
    gctUINT32 NN_XYDP9:1;
    gctUINT32 NN_INT8_SCALE:1;
    gctUINT32 NN_POWER_ISOLATION:1;
    gctUINT32 SWTILING_PHASE1:1;
    gctUINT32 TF_QUANTIZATION:1;
    gctUINT32 TP_SIMPLE_INT16:1;
    gctUINT32 TP_REAL_INT16:1;
    gctUINT32 TP_BFLOAT16:1;
    gctUINT32 NN_FIRST_PIXEL_POOLING:1;
    gctUINT32 SWTILING_PHASE2:1;
    gctUINT32 NN_STRIDE_SUPPORT:1;
    gctUINT32 NN_XYDP6:1;
    gctUINT32 TP_REORDER_FIX:1;
    gctUINT32 NN_CONV1x1_PERF_FIX:1;
    gctUINT32 NN_CACHELINE_MODE_PERF_FIX:1;
    gctUINT32 NN_PER3DTILE_BUBBLE_FIX:1;
    gctUINT32 NN_CONVOUT_FIFO_DEPTH_FIX:1;
    gctUINT32 SWTILING_PHASE3:1;
    gctUINT32 USC_STAY_LRU:1;
    gctUINT32 NN_NONZERO_MIRROR_BORDER:1;
    gctUINT32 NN_COEF_DECOMPRESS_PERF2X:1;
    gctUINT32 INPUT_4BIT:1;
    gctUINT32 COEF_COMPRESSION_ENHANCEMENT:1;
    gctUINT32 NN_ZXDP3_KERNEL_READ_CONFLICT_FIX:1;
    gctUINT32 NN_ZDP3_NO_COMPRESS_FIX:1;
    gctUINT32 NN_ASYNC_COPY_PERF_FIX:1;
    gctUINT32 OCB_COUNTER:1;
    gctUINT32 NN_XYDP0:1;
    gctUINT32 ZRL_7BIT:1;
    gctUINT32 NN_ASYNC_COPY_MERGE_FIX:1;
    gctUINT32 NN_SMALLBATCH_PHASE1:1;
    gctUINT32 TP_SMALLBATCH_PHASE1:1;
    gctUINT32 SCALER:1;
    gctUINT32 SCALER_4K:1;
    gctUINT32 NN_REQ_SLOWARBITRATION_FIX:1;
    gctUINT32 IMAGE_PARTIAL_CACHE:1;
    gctUINT32 FULLCACHE_KERNELHEAD_FIX:1;
    gctUINT32 NN_SINGLEPORT_ACCUMBUFFER:1;
    gctUINT32 NN_SMALLBATCH:1;
    gctUINT32 TP_SMALLBATCH:1;
    gctUINT32 ZRL_8BIT:1;
    gctUINT32 NN_DEPTHWISE_SUPPORT:1;
    gctUINT32 NN_WRITE_WITHOUT_USC:1;
    gctUINT32 NN_ZDP_INIMAGE_SIZE_FIX:1;
    gctUINT32 HI_REORDER_FIX:1;
    gctUINT32 INCORRECT_WR_REQ_TO_USC_BETWEEN_REORDER_AND_NORMAL_LAYER_FIX:1;
    gctUINT32 TP_COEF_COMPRESSION_ENHANCEMENT:1;
    gctUINT32 VIP_DEC400:1;
    gctUINT32 IMAGE_NOT_PACKED_IN_SRAM_FIX:1;
    gctUINT32 IDLE_BEFORE_FLUSH_COMPLETE_FIX:1;
    gctUINT32 NO_FLUSH_USC_FIX:1;
    gctUINT32 COEF_DELTA_CORD_OVERFLOW_ZRL_8BIT_FIX:1;
    gctUINT32 XY_OFFSET_LIMITATION_FIX:1;
    gctUINT32 USC_INVALIDATE_CACHE_LINE_FIX:1;
    gctUINT32 LOW_EFFICIENCY_OF_ID_WRITE_IMGBUF_FIX:1;
    gctUINT32 KERNEL_PER_CORE_LESS_THAN_THIRD_COEF_BUFF_DEPTH_FIX:1;
    gctUINT32 USC_BOTTLENECK_FIX:1;
    gctUINT32 KERNEL_SIZE_WASTE_IN_PARTIAL_MODE_FIX:1;
    gctUINT32 FULLCACHE_KERNEL_INTERLEAVE_FIX:1;
    gctUINT32 TP_REORDER_LAYER_SUSPEND_FIX:1;
    gctUINT32 KERNEL_VIP_SRAM_READ_BW_LIMITATION_FIX:1;
    gctUINT32 IMG_POP_PIPELINE_PAUSE_FIX:1;
    gctUINT32 DR_JD_DIFF_CONDITION_FOR_CACHELINE_MODE_PRE_FIX:1;
    gctUINT32 OUTIMAGE_X_BITWIDTH_LIMIT_FOR_NN_TRANSPOSE_FIX:1;
    gctUINT32 SMALL_BATCH_FLOPS_RESET_FIX:1;
    gctUINT32 SMALL_BATCH_DISBLE_FIX:1;
    gctUINT32 NEGATIVE_POST_SHIFT_FIX:1;
    gctUINT32 NN_COMMAND_KERNEL_REQUEST_CONFICT_FIX:1;
    gctUINT32 OCB_REMAP_PHYSICAL_ADDRESS:1;
    gctUINT32 NN_NO_Z_LOCATION_OFFSET:1;
    gctUINT32 NN_LEAKY_RELU:1;
    gctUINT32 NN_PRELU:1;
    gctUINT32 NN_PER_CHANNEL_QUANT:1;
    gctUINT32 NN_PER_CHANNEL_QUANT_ASYM:1;
    gctUINT32 NN_NATIVE_STRIDE_TWO:1;
    gctUINT32 NN_TENSOR_ADD:1;
    gctUINT32 NN_FLOAT_POST_MULT:1;
    gctUINT32 NN_SLICE_PADDING_TO_64BYTE_ALIGN:1;
    gctUINT32 NN_DW_1x1_CONV_MERGE:1;
    gctUINT32 NN_SLOW_OUTPUT:1;
    gctUINT32 NO_NARROW_POST_PROCESS_PIPE:1;
    gctUINT32 TP_NN_PROBE:1;
    gctUINT32 TP_23BITS_POST_MULTIPLIER:1;
    gctUINT32 NN_TRANSPOSE:1;
    gctUINT32 EVIS2_FLOP_RESET_FIX:1;
    gctUINT32 USC_ASYNC_CP_RTN_FLOP_RESET_FIX:1;
    gctUINT32 DDR_BURST_LEN_256B:1;
    gctUINT32 IMG_CAHCE_MODE_MUST_0_IN_IMG_DIRECT_MODE_FIX:1;
    gctUINT32 USE_SINGLE_PORT_VIPSRAM:1;
    gctUINT32 NN_ASYMMETRIC_INT8:1;
    gctUINT32 DEPTHWISE_NEIGHBOR_IMG_DATA_TRANSFER_NOT_EFFICIENT_FIX:1;
    gctUINT32 PRELU_LEAKLY_RELU_CLAMP:1;
    gctUINT32 TP_FLOAT32_IO:1;
    gctUINT32 NN_FLOAT32_IO:1;
    gctUINT32 NN_SMALL_BATCH_PHASE2:1;
    gctUINT32 TILE_ACCESS_CAPABILITY:1;
    gctUINT32 FAST_DP3_PREPROCESSOR:1;
    gctUINT32 NN_COMPRESSION_BYPASSS:1;
    gctUINT32 BFLOAT_KERNEL_COMPRESSION_ZERO_SKIP_FIX:1;
    gctUINT32 TP_3_USC:1;
    gctUINT32 TP_KERNEL_1BYTE_ALGIN:1;
    gctUINT32 TPLITE_BFLOAT16:1;
    gctUINT32 PREPROCESS_IMG_BUF_640BYTE_LIMIT:1;
    gctUINT32 V8_ACCUMLATION_READ_OUT_HAS_BUBBLES_PERF_FIX:1;
    gctUINT32 V8_SINGLE_PORT_ACCUMULATION_BUFFER_RW_CONFICT_ZERO_SKIP_PERF_FIX:1;
    gctUINT32 BURST_COLLECT_DUMMY_DATA_WASTE_CYCLES_FIX:1;
    gctUINT32 INIMG_NOT_64BYTE_ALIGN_CACHELINE_MODE_FIX:1;
    gctUINT32 TP_ACCESS_VIPSRAM_OT_IS_ONE_FIX:1;
    gctUINT32 VIP_HW_FINAL_RELEASE:1;
} gcsFEATURE_DATABASE;

#define FEATURE_BIT_START 63
#define FEATURE_BIT_END 605
static gcsFEATURE_DATABASE gChipInfo[] = {
    /* vipnano-qi */
    {
        0x8000, /* ChipID */
        0x7004, /* ChipRevision */
        0x45080009, /* ProductID */
        0x1, /* EcoID */
        0x7d, /* CustomerID */
        0x0, /* PatchVersion */
        "", /* ProductName */
        0x0, /* FormalRelease */
        0x40, /* gcFEATURE_VALUE_TempRegisters */
        0x100, /* gcFEATURE_VALUE_ThreadCount */
        0x1, /* gcFEATURE_VALUE_NumShaderCores */
        0x200, /* gcFEATURE_VALUE_InstructionCount */
        0x140, /* gcFEATURE_VALUE_NumberOfConstants */
        0x1, /* gcFEATURE_VALUE_CoreCount */
        0x10, /* gcFEATURE_VALUE_LocalStorageSize */
        0x10, /* gcFEATURE_VALUE_L1CacheSize */
        0x200, /* gcFEATURE_VALUE_InstructionMemorySize */
        0x14, /* gcFEATURE_VALUE_ShaderPCLength */
        0x10, /* gcFEATURE_VALUE_USC_MAX_PAGES */
        0x1, /* gcFEATURE_VALUE_NumPixelPipes */
        0x2, /* gcFEATURE_VALUE_USC_CACHE_CONTROLLERS */
        0x2, /* gcFEATURE_VALUE_USC_BANKS */
        0x8, /* gcFEATURE_VALUE_Streams */
        0x10, /* gcFEATURE_VALUE_VaryingCount */
        0x400, /* gcFEATURE_VALUE_VertexOutputBufferSize */
        0x0, /* gcFEATURE_VALUE_BufferSize */
        0x10, /* gcFEATURE_VALUE_VertexCacheSize */
        0x0, /* gcFEATURE_VALUE_NumResolvePipes */
        0x100, /* gcFEATURE_VALUE_RESULT_WINDOW_MAX_SIZE */
        0x0, /* gcFEATURE_VALUE_ClusterAliveMask */
        0x40, /* gcFEATURE_VALUE_NNMadPerCore */
        0x8, /* gcFEATURE_VALUE_NNCoreCount */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT8 */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_FLOAT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_BFLOAT */
        0xc, /* gcFEATURE_VALUE_NNInputBufferDepth */
        0x40, /* gcFEATURE_VALUE_NNAccumBufferDepth */
        0x400, /* gcFEATURE_VALUE_TPEngine_PwlLUTCount */
        0x10, /* gcFEATURE_VALUE_TPEngine_PwlLUTSize */
        0x80000, /* gcFEATURE_VALUE_VIP_SRAM_SIZE */
        0x4, /* gcFEATURE_VALUE_TPEngine_CoreCount */
        0x100000, /* gcFEATURE_VALUE_AXI_SRAM_SIZE */
        0x3, /* gcFEATURE_VALUE_NN_INIMAGE_OFFSET_BITS */
        0x180, /* gcFEATURE_VALUE_TP_REORDER_INIMAGE_SIZE */
        0x0, /* gcFEATURE_VALUE_TPLite_CoreCount */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_X */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_Y */
        0x1, /* gcFEATURE_VALUE_NNFP16_ZDP */
        0x8, /* gcFEATURE_VALUE_NN_LANES_PER_OUT_CYCLE */
        0x20, /* gcFEATURE_VALUE_MAX_OT_NUMBER */
        0x20, /* gcFEATURE_VALUE_PHYSICAL_VIP_SRAM_WIDTH_IN_BYTE */
        0x10, /* gcFEATURE_VALUE_EQUIVALENT_VIP_SRAM_WIDTH_INBYTE */
        0x8, /* gcFEATURE_VALUE_TP_ZRL_BITS */
        0x80, /* gcFEATURE_VALUE_LATENCY_HIDING_AT_FULL_AXI_BW */
        0x10, /* gcFEATURE_VALUE_AXI_BUS_WIDTH */
        0xf, /* gcFEATURE_VALUE_NN_KERNEL_X_SIZE */
        0xf, /* gcFEATURE_VALUE_NN_KERNEL_Y_SIZE */
        0xfffff, /* gcFEATURE_VALUE_NN_KERNEL_Z_SIZE */
        0x7, /* gcFEATURE_VALUE_NN_X_OFFSET */
        0x7, /* gcFEATURE_VALUE_NN_Y_OFFSET */
        0x40, /* gcFEATURE_VALUE_DDR_KERNEL_BURST_SIZE */
        0x0, /* gcFEATURE_BIT_REG_FastClear */
        0x0, /* gcFEATURE_BIT_REG_SpecialAntiAliasing */
        0x1, /* gcFEATURE_BIT_REG_Pipe3D */
        0x1, /* gcFEATURE_BIT_REG_DXTTextureCompression */
        0x0, /* gcFEATURE_BIT_REG_DebugMode */
        0x1, /* gcFEATURE_BIT_REG_ZCompression */
        0x0, /* gcFEATURE_BIT_REG_YUV420Filter */
        0x1, /* gcFEATURE_BIT_REG_MSAA */
        0x0, /* gcFEATURE_BIT_REG_DC */
        0x0, /* gcFEATURE_BIT_REG_Pipe2D */
        0x1, /* gcFEATURE_BIT_REG_ETC1TextureCompression */
        0x1, /* gcFEATURE_BIT_REG_FastScaler */
        0x1, /* gcFEATURE_BIT_REG_HighDynamicRange */
        0x1, /* gcFEATURE_BIT_REG_YUV420Tiler */
        0x1, /* gcFEATURE_BIT_REG_ModuleCG */
        0x0, /* gcFEATURE_BIT_REG_MinArea */
        0x0, /* gcFEATURE_BIT_REG_NoEZ */
        0x0, /* gcFEATURE_BIT_REG_No422Texture */
        0x0, /* gcFEATURE_BIT_REG_BufferInterleaving */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite2D */
        0x0, /* gcFEATURE_BIT_REG_NoScaler */
        0x1, /* gcFEATURE_BIT_REG_YUY2Averaging */
        0x0, /* gcFEATURE_BIT_REG_HalfPECache */
        0x0, /* gcFEATURE_BIT_REG_HalfTXCache */
        0x0, /* gcFEATURE_BIT_REG_YUY2RenderTarget */
        0x0, /* gcFEATURE_BIT_REG_Mem32BitSupport */
        0x0, /* gcFEATURE_BIT_REG_PipeVG */
        0x0, /* gcFEATURE_BIT_REG_VGTS */
        0x0, /* gcFEATURE_BIT_REG_FE20 */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite3D */
        0x1, /* gcFEATURE_BIT_REG_RsYuvTarget */
        0x1, /* gcFEATURE_BIT_REG_FE20BitIndex */
        0x1, /* gcFEATURE_BIT_REG_FlipY */
        0x1, /* gcFEATURE_BIT_REG_DualReturnBus */
        0x1, /* gcFEATURE_BIT_REG_EndiannessConfig */
        0x1, /* gcFEATURE_BIT_REG_Texture8K */
        0x1, /* gcFEATURE_BIT_REG_CorrectTextureConverter */
        0x1, /* gcFEATURE_BIT_REG_SpecialMsaaLod */
        0x1, /* gcFEATURE_BIT_REG_FastClearFlush */
        0x1, /* gcFEATURE_BIT_REG_2DPE20 */
        0x0, /* gcFEATURE_BIT_REG_CorrectAutoDisable */
        0x1, /* gcFEATURE_BIT_REG_Render8K */
        0x1, /* gcFEATURE_BIT_REG_TileStatus2Bits */
        0x1, /* gcFEATURE_BIT_REG_SeparateTileStatusWhenInterleaved */
        0x1, /* gcFEATURE_BIT_REG_SuperTiled32x32 */
        0x0, /* gcFEATURE_BIT_REG_VG20 */
        0x0, /* gcFEATURE_BIT_REG_TSExtendedCommands */
        0x1, /* gcFEATURE_BIT_REG_CompressionFifoFixed */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions0 */
        0x0, /* gcFEATURE_BIT_REG_VGFilter */
        0x0, /* gcFEATURE_BIT_REG_VG21 */
        0x1, /* gcFEATURE_BIT_REG_ShaderGetsW */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions1 */
        0x1, /* gcFEATURE_BIT_REG_DefaultReg0 */
        0x1, /* gcFEATURE_BIT_REG_MC20 */
        0x0, /* gcFEATURE_BIT_REG_ShaderMSAASideband */
        0x1, /* gcFEATURE_BIT_REG_BugFixes0 */
        0x0, /* gcFEATURE_BIT_REG_VAA */
        0x0, /* gcFEATURE_BIT_REG_BypassInMSAA */
        0x0, /* gcFEATURE_BIT_REG_HierarchicalZ */
        0x0, /* gcFEATURE_BIT_REG_NewTexture */
        0x0, /* gcFEATURE_BIT_REG_A8TargetSupport */
        0x1, /* gcFEATURE_BIT_REG_CorrectStencil */
        0x1, /* gcFEATURE_BIT_REG_EnhanceVR */
        0x1, /* gcFEATURE_BIT_REG_RSUVSwizzle */
        0x1, /* gcFEATURE_BIT_REG_V2Compression */
        0x0, /* gcFEATURE_BIT_REG_VGDoubleBuffer */
        0x1, /* gcFEATURE_BIT_REG_BugFixes1 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes2 */
        0x0, /* gcFEATURE_BIT_REG_TextureStride */
        0x1, /* gcFEATURE_BIT_REG_BugFixes3 */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisable1 */
        0x0, /* gcFEATURE_BIT_REG_AutoRestartTS */
        0x1, /* gcFEATURE_BIT_REG_BugFixes4 */
        0x0, /* gcFEATURE_BIT_REG_L2Windowing */
        0x1, /* gcFEATURE_BIT_REG_HalfFloatPipe */
        0x1, /* gcFEATURE_BIT_REG_PixelDither */
        0x1, /* gcFEATURE_BIT_REG_TwoStencilReference */
        0x1, /* gcFEATURE_BIT_REG_ExtendedPixelFormat */
        0x1, /* gcFEATURE_BIT_REG_CorrectMinMaxDepth */
        0x1, /* gcFEATURE_BIT_REG_DitherAndFilterPlusAlpha2D */
        0x1, /* gcFEATURE_BIT_REG_BugFixes5 */
        0x0, /* gcFEATURE_BIT_REG_New2D */
        0x1, /* gcFEATURE_BIT_REG_NewFloatingPointArithmetic */
        0x1, /* gcFEATURE_BIT_REG_TextureHorizontalAlignmentSelect */
        0x1, /* gcFEATURE_BIT_REG_NonPowerOfTwo */
        0x1, /* gcFEATURE_BIT_REG_LinearTextureSupport */
        0x1, /* gcFEATURE_BIT_REG_Halti0 */
        0x0, /* gcFEATURE_BIT_REG_CorrectOverflowVG */
        0x1, /* gcFEATURE_BIT_REG_NegativeLogFix */
        0x1, /* gcFEATURE_BIT_REG_ResolveOffset */
        0x1, /* gcFEATURE_BIT_REG_OkToGateAxiClock */
        0x1, /* gcFEATURE_BIT_REG_MMU */
        0x1, /* gcFEATURE_BIT_REG_WideLine */
        0x1, /* gcFEATURE_BIT_REG_BugFixes6 */
        0x1, /* gcFEATURE_BIT_REG_FcFlushStall */
        0x1, /* gcFEATURE_BIT_REG_LineLoop */
        0x1, /* gcFEATURE_BIT_REG_LogicOp */
        0x1, /* gcFEATURE_BIT_REG_SeamlessCubeMap */
        0x1, /* gcFEATURE_BIT_REG_SuperTiledTexture */
        0x1, /* gcFEATURE_BIT_REG_LinearPE */
        0x1, /* gcFEATURE_BIT_REG_RectPrimitive */
        0x0, /* gcFEATURE_BIT_REG_Composition */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisableCountWidth */
        0x1, /* gcFEATURE_BIT_REG_PESwizzle */
        0x1, /* gcFEATURE_BIT_REG_EndEvent */
        0x1, /* gcFEATURE_BIT_REG_S1S8 */
        0x1, /* gcFEATURE_BIT_REG_Halti1 */
        0x0, /* gcFEATURE_BIT_REG_RGB888 */
        0x1, /* gcFEATURE_BIT_REG_TX_YUVAssembler */
        0x1, /* gcFEATURE_BIT_REG_DynamicFrequencyScaling */
        0x0, /* gcFEATURE_BIT_REG_TXFilter */
        0x1, /* gcFEATURE_BIT_REG_FullDirectFB */
        0x0, /* gcFEATURE_BIT_REG_OnePass2DFilter */
        0x1, /* gcFEATURE_BIT_REG_ThreadWalkerInPS */
        0x1, /* gcFEATURE_BIT_REG_TileFiller */
        0x1, /* gcFEATURE_BIT_REG_YUVStandard */
        0x0, /* gcFEATURE_BIT_REG_MultiSourceBlt */
        0x0, /* gcFEATURE_BIT_REG_YUVConversion */
        0x1, /* gcFEATURE_BIT_REG_FlushFixed2D */
        0x1, /* gcFEATURE_BIT_REG_Interleaver */
        0x1, /* gcFEATURE_BIT_REG_MixedStreams */
        0x0, /* gcFEATURE_BIT_REG_L2CacheFor2D420 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes7 */
        0x0, /* gcFEATURE_BIT_REG_NoIndexPattern */
        0x1, /* gcFEATURE_BIT_REG_TextureTileStatus */
        0x1, /* gcFEATURE_BIT_REG_DecompressZ16 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes8 */
        0x1, /* gcFEATURE_BIT_REG_DERotationStallFix */
        0x0, /* gcFEATURE_BIT_REG_OclOnly */
        0x1, /* gcFEATURE_BIT_REG_NewFeatures0 */
        0x1, /* gcFEATURE_BIT_REG_InstructionCache */
        0x0, /* gcFEATURE_BIT_REG_GeometryShader */
        0x1, /* gcFEATURE_BIT_REG_TexCompressionSupertiled */
        0x1, /* gcFEATURE_BIT_REG_Generics */
        0x1, /* gcFEATURE_BIT_REG_BugFixes9 */
        0x0, /* gcFEATURE_BIT_REG_FastMSAA */
        0x0, /* gcFEATURE_BIT_REG_WClip */
        0x1, /* gcFEATURE_BIT_REG_BugFixes10 */
        0x1, /* gcFEATURE_BIT_REG_UnifiedSamplers */
        0x1, /* gcFEATURE_BIT_REG_BugFixes11 */
        0x1, /* gcFEATURE_BIT_REG_PerformanceCounters */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes12 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes13 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_ACE */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes14 */
        0x0, /* gcFEATURE_BIT_REG_PowerOptimizations0 */
        0x1, /* gcFEATURE_BIT_REG_NewHZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes15 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements1 */
        0x0, /* gcFEATURE_BIT_REG_DENoGamma */
        0x0, /* gcFEATURE_BIT_REG_PAEnhancements2 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_HIEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes16 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements4 */
        0x0, /* gcFEATURE_BIT_REG_PEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_MCEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_Halti2 */
        0x0, /* gcFEATURE_BIT_REG_DEMirrorRotate */
        0x1, /* gcFEATURE_BIT_REG_SmallMSAA */
        0x1, /* gcFEATURE_BIT_REG_BugFixes17 */
        0x0, /* gcFEATURE_BIT_REG_Rasterizer2 */
        0x0, /* gcFEATURE_BIT_REG_DualPipeOPF */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2 */
        0x0, /* gcFEATURE_BIT_REG_CSCV2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes18 */
        0x0, /* gcFEATURE_BIT_REG_Compression2D */
        0x0, /* gcFEATURE_BIT_REG_Probe */
        0x1, /* gcFEATURE_BIT_REG_MediumPrecision */
        0x0, /* gcFEATURE_BIT_REG_DESupertile */
        0x1, /* gcFEATURE_BIT_REG_BugFixes19 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements6 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements7 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes20 */
        0x0, /* gcFEATURE_BIT_REG_DEAddress40 */
        0x0, /* gcFEATURE_BIT_REG_MiniMMUFix */
        0x1, /* gcFEATURE_BIT_REG_EEZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes21 */
        0x0, /* gcFEATURE_BIT_REG_ExtraVgCaps */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV15 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes22 */
        0x1, /* gcFEATURE_BIT_REG_Halti3 */
        0x0, /* gcFEATURE_BIT_REG_TessellationShaders */
        0x0, /* gcFEATURE_BIT_REG_OPF9Tap */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2StrQuad */
        0x0, /* gcFEATURE_BIT_REG_SeperateSRCAndDstCache */
        0x1, /* gcFEATURE_BIT_REG_Halti4 */
        0x1, /* gcFEATURE_BIT_REG_RAWriteDepth */
        0x0, /* gcFEATURE_BIT_REG_AndroidOnly */
        0x1, /* gcFEATURE_BIT_REG_HasChipProductReg */
        0x0, /* gcFEATURE_BIT_REG_TXSupportDEC */
        0x1, /* gcFEATURE_BIT_REG_S8MSAACompression */
        0x1, /* gcFEATURE_BIT_REG_BugFixesIn544 */
        0x0, /* gcFEATURE_BIT_REG_L2CacheRemove */
        0x1, /* gcFEATURE_BIT_REG_FEAllowRndVtxCnt */
        0x0, /* gcFEATURE_BIT_REG_CubeMapFL28 */
        0x1, /* gcFEATURE_BIT_REG_TX6bitFrac */
        0x1, /* gcFEATURE_BIT_REG_FEAllowStallPrefetchEng */
        0x0, /* gcFEATURE_BIT_REG_ThirdPartyCompression */
        0x1, /* gcFEATURE_BIT_REG_RSS8 */
        0x1, /* gcFEATURE_BIT_REG_MSAACoherencyCheck */
        0x1, /* gcFEATURE_BIT_REG_Halti5 */
        0x1, /* gcFEATURE_BIT_REG_Evis */
        0x0, /* gcFEATURE_BIT_REG_BltEngine */
        0x0, /* gcFEATURE_BIT_REG_BugFixes23 */
        0x0, /* gcFEATURE_BIT_REG_BugFixes24 */
        0x0, /* gcFEATURE_BIT_REG_DEC */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12 */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12_10BIT */
        0x0, /* gcFEATURE_BIT_REG_DisableVIP */
        0x0, /* gcFEATURE_BIT_RenderTarget8 */
        0x0, /* gcFEATURE_BIT_TxLodFlowCorrection */
        0x0, /* gcFEATURE_BIT_FaceLod */
        0x0, /* gcFEATURE_BIT_MultiCoreSemaphoreStallV2 */
        0x1, /* gcFEATURE_BIT_VMSAA */
        0x0, /* gcFEATURE_BIT_ChipEnableLink */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_1_5_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_BILINEAR_FILTER */
        0x1, /* gcFEATURE_BIT_RA_HZEZ_CLOCK_CONTROL */
        0x1, /* gcFEATURE_BIT_CACHE128B256BPERLINE */
        0x1, /* gcFEATURE_BIT_V4Compression */
        0x0, /* gcFEATURE_BIT_PE2D_MAJOR_SUPER_TILE */
        0x1, /* gcFEATURE_BIT_PE_32BPC_COLORMASK_FIX */
        0x1, /* gcFEATURE_BIT_ALPHA_BLENDING_OPT */
        0x1, /* gcFEATURE_BIT_NEW_GPIPE */
        0x0, /* gcFEATURE_BIT_PIPELINE_32_ATTRIBUTES */
        0x0, /* gcFEATURE_BIT_MSAA_SHADING */
        0x0, /* gcFEATURE_BIT_NO_ANISTRO_FILTER */
        0x1, /* gcFEATURE_BIT_NO_ASTC */
        0x0, /* gcFEATURE_BIT_NO_DXT */
        0x0, /* gcFEATURE_BIT_HWTFB */
        0x1, /* gcFEATURE_BIT_RA_DEPTH_WRITE_MSAA1X_FIX */
        0x1, /* gcFEATURE_BIT_EZHZ_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_FIX */
        0x1, /* gcFEATURE_BIT_SH_HALFDEPENDENCY_FIX */
        0x1, /* gcFEATURE_BIT_USC_MCFILL_FIX */
        0x1, /* gcFEATURE_BIT_TPG_TCPERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_MDFIFO_OVERFLOW_FIX */
        0x1, /* gcFEATURE_BIT_SH_TEXLD_BARRIER_IN_CS_FIX */
        0x1, /* gcFEATURE_BIT_RS_NEW_BASEADDR */
        0x1, /* gcFEATURE_BIT_PE_8bpp_DUALPIPE_FIX */
        0x0, /* gcFEATURE_BIT_SH_ADVANCED_INSTR */
        0x1, /* gcFEATURE_BIT_SH_FLAT_INTERPOLATION_DUAL16_FIX */
        0x1, /* gcFEATURE_BIT_USC_CONTINUOUS_FLUS_FIX */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_V4 */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_ALPHA_KILL */
        0x1, /* gcFEATURE_BIT_PE_NO_ALPHA_TEST */
        0x0, /* gcFEATURE_BIT_TX_LOD_NEAREST_SELECT */
        0x1, /* gcFEATURE_BIT_SH_FIX_LDEXP */
        0x1, /* gcFEATURE_BIT_SUPPORT_MOVAI */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_MAXPAGES_FIX */
        0x1, /* gcFEATURE_BIT_PE_RGBA16I_FIX */
        0x1, /* gcFEATURE_BIT_BLT_8bpp_256TILE_FC_FIX */
        0x1, /* gcFEATURE_BIT_PE_64bit_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_USC_FULL_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_TX_YUV_ASSEMBLER_10BIT */
        0x1, /* gcFEATURE_BIT_FE_32bit_INDEX_FIX */
        0x1, /* gcFEATURE_BIT_BLT_64bpp_MASKED_CLEAR_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY */
        0x1, /* gcFEATURE_BIT_ROBUSTNESS */
        0x1, /* gcFEATURE_BIT_USC_ATOMIC_FIX */
        0x1, /* gcFEATURE_BIT_SH_PSO_MSAA1x_FIX */
        0x1, /* gcFEATURE_BIT_USC_VX_PERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_GOS_ADDR_FIX */
        0x1, /* gcFEATURE_BIT_TX_8bit_UVFrac */
        0x1, /* gcFEATURE_BIT_TX_DESC_CACHE_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_RSBLT_MSAA_DECOMPRESSION */
        0x0, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE */
        0x1, /* gcFEATURE_BIT_DRAWID */
        0x1, /* gcFEATURE_BIT_PSIO_SAMPLEMASK_IN_R0ZW_FIX */
        0x1, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE_V2 */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG */
        0x0, /* gcFEATURE_BIT_SNAPPAGE_CMD */
        0x1, /* gcFEATURE_BIT_SH_NO_INDEX_CONST_ON_A0 */
        0x1, /* gcFEATURE_BIT_SH_NO_ONECONST_LIMIT */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_ON_TEMP */
        0x1, /* gcFEATURE_BIT_COMPUTE_ONLY */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_CLAMP */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_ALLOC_COUNT_FIX */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_PREFETCH */
        0x0, /* gcFEATURE_BIT_PE2D_SEPARATE_CACHE */
        0x1, /* gcFEATURE_BIT_PE_MSAA_OQ_FIX */
        0x1, /* gcFEATURE_BIT_PSIO_MSAA_CL_FIX */
        0x1, /* gcFEATURE_BIT_USC_DEFER_FILL_FIX */
        0x1, /* gcFEATURE_BIT_SH_CLOCK_GATE_FIX */
        0x0, /* gcFEATURE_BIT_FE_NEED_DUMMYDRAW */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_OUTPUT */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_10BIT */
        0x0, /* gcFEATURE_BIT_MULTI_CLUSTER */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK */
        0x0, /* gcFEATURE_BIT_SH_DUAL16_SAMPLEMASK_ZW */
        0x0, /* gcFEATURE_BIT_TPG_TRIVIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TX_ASTC_MULTISLICE_FIX */
        0x0, /* gcFEATURE_BIT_FE_ROBUST_FIX */
        0x0, /* gcFEATURE_BIT_SH_GPIPE_ACCESS_FULLTEMPS */
        0x0, /* gcFEATURE_BIT_PSIO_INTERLOCK */
        0x1, /* gcFEATURE_BIT_PA_WIDELINE_FIX */
        0x0, /* gcFEATURE_BIT_WIDELINE_HELPER_FIX */
        0x0, /* gcFEATURE_BIT_G2D_3rd_PARTY_COMPRESSION_1_1 */
        0x0, /* gcFEATURE_BIT_TX_FLUSH_L1CACHE */
        0x1, /* gcFEATURE_BIT_PE_DITHER_FIX2 */
        0x0, /* gcFEATURE_BIT_SH_TEXLD_U_FIX */
        0x0, /* gcFEATURE_BIT_MC_FCCACHE_BYTEMASK */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK_FIX */
        0x0, /* gcFEATURE_BIT_PE_ADVANCE_BLEND_PART0 */
        0x0, /* gcFEATURE_BIT_FE_PATCHLIST_FETCH_FIX */
        0x1, /* gcFEATURE_BIT_RA_CG_FIX */
        0x0, /* gcFEATURE_BIT_DEC400 */
        0x0, /* gcFEATURE_BIT_LS_SUPPORT_PERCOMP_DEPENDENCY */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG2 */
        0x0, /* gcFEATURE_BIT_PE_VMSAA_COVERAGE_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY_AHB */
        0x0, /* gcFEATURE_BIT_MULTICORE_SEMAPHORESTALL_V3 */
        0x0, /* gcFEATURE_BIT_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_SH_CMPLX */
        0x0, /* gcFEATURE_BIT_SH_IDIV0_SWZL_EHS */
        0x0, /* gcFEATURE_BIT_TX_LERP_LESS_BIT */
        0x0, /* gcFEATURE_BIT_SH_GM_ENDIAN */
        0x0, /* gcFEATURE_BIT_SH_GM_USC_UNALLOC */
        0x0, /* gcFEATURE_BIT_SH_END_OF_BB */
        0x0, /* gcFEATURE_BIT_TX_BORDER_CLAMP_FIX */
        0x0, /* gcFEATURE_BIT_SH_IMG_LD_LASTPIXEL_FIX */
        0x0, /* gcFEATURE_BIT_ASYNC_BLT */
        0x0, /* gcFEATURE_BIT_ASYNC_FE_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_PSCS_THROTTLE */
        0x0, /* gcFEATURE_BIT_SEPARATE_LS */
        0x0, /* gcFEATURE_BIT_WIDELINE_TRIANGLE_EMU */
        0x0, /* gcFEATURE_BIT_FENCE_32BIT */
        0x0, /* gcFEATURE_BIT_FENCE_64BIT */
        0x0, /* gcFEATURE_BIT_PE_DEPTH_ONLY_OQFIX */
        0x0, /* gcFEATURE_BIT_TX_SEAMLESS_CUBE */
        0x0, /* gcFEATURE_BIT_TX_SNORM_SUPPORT */
        0x0, /* gcFEATURE_BIT_SH_SCATTER_GATHER */
        0x0, /* gcFEATURE_BIT_HWMANAGED_LS */
        0x0, /* gcFEATURE_BIT_SH_IMAGE_ENABLE_FIX */
        0x1, /* gcFEATURE_BIT_MSAA_FRAGMENT_OPERATION */
        0x0, /* gcFEATURE_BIT_PE_TILE_CACHE_FLUSH_FIX */
        0x0, /* gcFEATURE_BIT_BLT_YUV_OUTPUT */
        0x1, /* gcFEATURE_BIT_SH_IO_CG_FIX */
        0x0, /* gcFEATURE_BIT_PE_SWIZZLE */
        0x0, /* gcFEATURE_BIT_SH_ROBUSTNESS_FIX */
        0x0, /* gcFEATURE_BIT_USC_ATOMIC_FIX2 */
        0x0, /* gcFEATURE_BIT_PE_A8B8G8R8 */
        0x0, /* gcFEATURE_BIT_MULTIVIEW_RENDER */
        0x0, /* gcFEATURE_BIT_FE_DRAW_DIRECT */
        0x0, /* gcFEATURE_BIT_TX_VKBORDER_MODE */
        0x0, /* gcFEATURE_BIT_TX_UNNORMALIZED_COORD */
        0x0, /* gcFEATURE_BIT_PA_LINECLIP_FIX */
        0x0, /* gcFEATURE_BIT_TX_8bit_UVFrac_ROUNDING_FIX */
        0x0, /* gcFEATURE_BIT_MP_ARCH */
        0x0, /* gcFEATURE_BIT_TX_NO_FIXED_FILTER */
        0x0, /* gcFEATURE_BIT_SHARE_Z */
        0x0, /* gcFEATURE_BIT_DE_2D_FAST_CLEAR */
        0x0, /* gcFEATURE_BIT_TX_CLEAR_PENDING_FIX */
        0x0, /* gcFEATURE_BIT_NO_HI1_L2 */
        0x0, /* gcFEATURE_BIT_USC_EVICT_CTRL_FIFO_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_FORMAT_10BIT_CROSS_4K */
        0x0, /* gcFEATURE_BIT_FORMAT_P010LSB_I010 */
        0x0, /* gcFEATURE_BIT_ENDIAN_CONTROL */
        0x0, /* gcFEATURE_BIT_G2D_DEC400EX */
        0x0, /* gcFEATURE_BIT_SH_VX2_FLOATING_MAD_FIX */
        0x0, /* gcFEATURE_BIT_TS_FC_VULKAN_SUPPORT */
        0x0, /* gcFEATURE_BIT_MSAA_FLOAT_64BIT */
        0x0, /* gcFEATURE_BIT_VG_TS_CULLING */
        0x0, /* gcFEATURE_BIT_VG_FP25 */
        0x0, /* gcFEATURE_BIT_VG_AYUV_INPUT_OUTPUT */
        0x0, /* gcFEATURE_BIT_VG_DOUBLE_IMAGE */
        0x0, /* gcFEATURE_BIT_VG_RECTANGLE_STRIPE_MODE */
        0x0, /* gcFEATURE_BIT_VG_MMU */
        0x0, /* gcFEATURE_BIT_VG_IM_FILTER */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PLANAR */
        0x0, /* gcFEATURE_BIT_VG_PE_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_COLOR_PRECISION_8_BIT */
        0x0, /* gcFEATURE_BIT_VG_RESOLVE_ENGINE */
        0x0, /* gcFEATURE_BIT_VG_PE_COLOR_KEY */
        0x0, /* gcFEATURE_BIT_VG_IM_INDEX_FORMAT */
        0x0, /* gcFEATURE_BIT_VG_RESOLUTION_8K */
        0x0, /* gcFEATURE_BIT_VG_IMAGE_16K */
        0x0, /* gcFEATURE_BIT_VG_FORMAT_ARGB2222 */
        0x0, /* gcFEATURE_BIT_G2D_DEC400 */
        0x0, /* gcFEATURE_BIT_DC_OVERLAY_SCALING */
        0x0, /* gcFEATURE_BIT_DC_SOURCE_ROTATION */
        0x0, /* gcFEATURE_BIT_DC_TILED */
        0x0, /* gcFEATURE_BIT_DC_YUV_L1 */
        0x0, /* gcFEATURE_BIT_DC_D30_OUTPUT */
        0x0, /* gcFEATURE_BIT_DC_MMU */
        0x0, /* gcFEATURE_BIT_DC_COMPRESSION */
        0x0, /* gcFEATURE_BIT_DC_QOS */
        0x0, /* gcFEATURE_BIT_AI_GPU */
        0x0, /* gcFEATURE_BIT_EVIS_NO_ABSDIFF */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BITREPLACE */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BOXFILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_CORDIAC */
        0x0, /* gcFEATURE_BIT_EVIS_NO_DP32 */
        0x0, /* gcFEATURE_BIT_EVIS_NO_FILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_IADD */
        0x0, /* gcFEATURE_BIT_EVIS_NO_SELECTADD */
        0x0, /* gcFEATURE_BIT_EVIS_LERP_7OUTPUT */
        0x0, /* gcFEATURE_BIT_EVIS_ACCSQ_8OUTPUT */
        0x1, /* gcFEATURE_BIT_EVIS_VX2 */
        0x1, /* gcFEATURE_BIT_NN_FLOAT */
        0x1, /* gcFEATURE_BIT_TP_ENGINE */
        0x1, /* gcFEATURE_BIT_VIP_V7 */
        0x0, /* gcFEATURE_BIT_MCFE */
        0x0, /* gcFEATURE_BIT_NN_INTERLEVE8 */
        0x1, /* gcFEATURE_BIT_TP_REORDER */
        0x1, /* gcFEATURE_BIT_TP_LRN */
        0x1, /* gcFEATURE_BIT_TP_MAX_POOLING_STRIDE1 */
        0x0, /* gcFEATURE_BIT_NN_FP16_ALU */
        0x1, /* gcFEATURE_BIT_NN_INT16_ALU */
        0x1, /* gcFEATURE_BIT_TP_ROI_POOLING */
        0x0, /* gcFEATURE_BIT_NN_ZDP3 */
        0x0, /* gcFEATURE_BIT_NN_ZDP6 */
        0x0, /* gcFEATURE_BIT_NN_XYDP9 */
        0x1, /* gcFEATURE_BIT_NN_INT8_SCALE */
        0x1, /* gcFEATURE_BIT_NN_POWER_ISOLATION */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE1 */
        0x1, /* gcFEATURE_BIT_TF_QUANTIZATION */
        0x1, /* gcFEATURE_BIT_TP_SIMPLE_INT16 */
        0x0, /* gcFEATURE_BIT_TP_REAL_INT16 */
        0x0, /* gcFEATURE_BIT_TP_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_NN_FIRST_PIXEL_POOLING */
        0x0, /* gcFEATURE_BIT_SWTILING_PHASE2 */
        0x1, /* gcFEATURE_BIT_NN_STRIDE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_XYDP6 */
        0x1, /* gcFEATURE_BIT_TP_REORDER_FIX */
        0x0, /* gcFEATURE_BIT_NN_CONV1x1_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_CACHELINE_MODE_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_PER3DTILE_BUBBLE_FIX */
        0x0, /* gcFEATURE_BIT_NN_CONVOUT_FIFO_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_SWTILING_PHASE3 */
        0x0, /* gcFEATURE_BIT_USC_STAY_LRU */
        0x0, /* gcFEATURE_BIT_NN_NONZERO_MIRROR_BORDER */
        0x0, /* gcFEATURE_BIT_NN_COEF_DECOMPRESS_PERF2X */
        0x0, /* gcFEATURE_BIT_INPUT_4BIT */
        0x0, /* gcFEATURE_BIT_COEF_COMPRESSION_ENHANCEMENT */
        0x1, /* gcFEATURE_BIT_NN_ZXDP3_KERNEL_READ_CONFLICT_FIX */
        0x0, /* gcFEATURE_BIT_NN_ZDP3_NO_COMPRESS_FIX */
        0x0, /* gcFEATURE_BIT_NN_ASYNC_COPY_PERF_FIX */
        0x1, /* gcFEATURE_BIT_OCB_COUNTER */
        0x0, /* gcFEATURE_BIT_NN_XYDP0 */
        0x0, /* gcFEATURE_BIT_ZRL_7BIT */
        0x0, /* gcFEATURE_BIT_NN_ASYNC_COPY_MERGE_FIX */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_SCALER */
        0x0, /* gcFEATURE_BIT_SCALER_4K */
        0x0, /* gcFEATURE_BIT_NN_REQ_SLOWARBITRATION_FIX */
        0x0, /* gcFEATURE_BIT_IMAGE_PARTIAL_CACHE */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNELHEAD_FIX */
        0x1, /* gcFEATURE_BIT_NN_SINGLEPORT_ACCUMBUFFER */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_ZRL_8BIT */
        0x0, /* gcFEATURE_BIT_NN_DEPTHWISE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_WRITE_WITHOUT_USC */
        0x0, /* gcFEATURE_BIT_NN_ZDP_INIMAGE_SIZE_FIX */
        0x0, /* gcFEATURE_BIT_HI_REORDER_FIX */
        0x0, /* gcFEATURE_BIT_INCORRECT_WR_REQ_TO_USC_BETWEEN_REORDER_AND_NORMAL_LAYER_FIX */
        0x0, /* gcFEATURE_BIT_TP_COEF_COMPRESSION_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_VIP_DEC400 */
        0x0, /* gcFEATURE_BIT_IMAGE_NOT_PACKED_IN_SRAM_FIX */
        0x0, /* gcFEATURE_BIT_IDLE_BEFORE_FLUSH_COMPLETE_FIX */
        0x1, /* gcFEATURE_BIT_NO_FLUSH_USC_FIX */
        0x1, /* gcFEATURE_BIT_COEF_DELTA_CORD_OVERFLOW_ZRL_8BIT_FIX */
        0x0, /* gcFEATURE_BIT_XY_OFFSET_LIMITATION_FIX */
        0x0, /* gcFEATURE_BIT_USC_INVALIDATE_CACHE_LINE_FIX */
        0x0, /* gcFEATURE_BIT_LOW_EFFICIENCY_OF_ID_WRITE_IMGBUF_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_PER_CORE_LESS_THAN_THIRD_COEF_BUFF_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_USC_BOTTLENECK_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_SIZE_WASTE_IN_PARTIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNEL_INTERLEAVE_FIX */
        0x0, /* gcFEATURE_BIT_TP_REORDER_LAYER_SUSPEND_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_VIP_SRAM_READ_BW_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_IMG_POP_PIPELINE_PAUSE_FIX */
        0x0, /* gcFEATURE_BIT_DR_JD_DIFF_CONDITION_FOR_CACHELINE_MODE_PRE_FIX */
        0x1, /* gcFEATURE_BIT_OUTIMAGE_X_BITWIDTH_LIMIT_FOR_NN_TRANSPOSE_FIX */
        0x1, /* gcFEATURE_BIT_SMALL_BATCH_FLOPS_RESET_FIX */
        0x0, /* gcFEATURE_BIT_SMALL_BATCH_DISBLE_FIX */
        0x1, /* gcFEATURE_BIT_NEGATIVE_POST_SHIFT_FIX */
        0x0, /* gcFEATURE_BIT_NN_COMMAND_KERNEL_REQUEST_CONFICT_FIX */
        0x1, /* gcFEATURE_BIT_OCB_REMAP_PHYSICAL_ADDRESS */
        0x0, /* gcFEATURE_BIT_NN_NO_Z_LOCATION_OFFSET */
        0x0, /* gcFEATURE_BIT_NN_LEAKY_RELU */
        0x0, /* gcFEATURE_BIT_NN_PRELU */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT_ASYM */
        0x0, /* gcFEATURE_BIT_NN_NATIVE_STRIDE_TWO */
        0x0, /* gcFEATURE_BIT_NN_TENSOR_ADD */
        0x0, /* gcFEATURE_BIT_NN_FLOAT_POST_MULT */
        0x0, /* gcFEATURE_BIT_NN_SLICE_PADDING_TO_64BYTE_ALIGN */
        0x0, /* gcFEATURE_BIT_NN_DW_1x1_CONV_MERGE */
        0x0, /* gcFEATURE_BIT_NN_SLOW_OUTPUT */
        0x1, /* gcFEATURE_BIT_NO_NARROW_POST_PROCESS_PIPE */
        0x0, /* gcFEATURE_BIT_TP_NN_PROBE */
        0x0, /* gcFEATURE_BIT_TP_23BITS_POST_MULTIPLIER */
        0x0, /* gcFEATURE_BIT_NN_TRANSPOSE */
        0x0, /* gcFEATURE_BIT_EVIS2_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_USC_ASYNC_CP_RTN_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_DDR_BURST_LEN_256B */
        0x1, /* gcFEATURE_BIT_IMG_CAHCE_MODE_MUST_0_IN_IMG_DIRECT_MODE_FIX */
        0x0, /* gcFEATURE_BIT_USE_SINGLE_PORT_VIPSRAM */
        0x0, /* gcFEATURE_BIT_NN_ASYMMETRIC_INT8 */
        0x1, /* gcFEATURE_BIT_DEPTHWISE_NEIGHBOR_IMG_DATA_TRANSFER_NOT_EFFICIENT_FIX */
        0x0, /* gcFEATURE_BIT_PRELU_LEAKLY_RELU_CLAMP */
        0x0, /* gcFEATURE_BIT_TP_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_SMALL_BATCH_PHASE2 */
        0x0, /* gcFEATURE_BIT_TILE_ACCESS_CAPABILITY */
        0x0, /* gcFEATURE_BIT_FAST_DP3_PREPROCESSOR */
        0x0, /* gcFEATURE_BIT_NN_COMPRESSION_BYPASSS */
        0x0, /* gcFEATURE_BIT_BFLOAT_KERNEL_COMPRESSION_ZERO_SKIP_FIX */
        0x0, /* gcFEATURE_BIT_TP_3_USC */
        0x0, /* gcFEATURE_BIT_TP_KERNEL_1BYTE_ALGIN */
        0x0, /* gcFEATURE_BIT_TPLITE_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_PREPROCESS_IMG_BUF_640BYTE_LIMIT */
        0x0, /* gcFEATURE_BIT_V8_ACCUMLATION_READ_OUT_HAS_BUBBLES_PERF_FIX */
        0x0, /* gcFEATURE_BIT_V8_SINGLE_PORT_ACCUMULATION_BUFFER_RW_CONFICT_ZERO_SKIP_PERF_FIX */
        0x0, /* gcFEATURE_BIT_BURST_COLLECT_DUMMY_DATA_WASTE_CYCLES_FIX */
        0x0, /* gcFEATURE_BIT_INIMG_NOT_64BYTE_ALIGN_CACHELINE_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TP_ACCESS_VIPSRAM_OT_IS_ONE_FIX */
        0x1, /* gcFEATURE_BIT_VIP_HW_FINAL_RELEASE */
    },
    /* vipnano-qi */
    {
        0x8000, /* ChipID */
        0x7004, /* ChipRevision */
        0x45080009, /* ProductID */
        0x0, /* EcoID */
        0x7d, /* CustomerID */
        0x0, /* PatchVersion */
        "", /* ProductName */
        0x0, /* FormalRelease */
        0x40, /* gcFEATURE_VALUE_TempRegisters */
        0x100, /* gcFEATURE_VALUE_ThreadCount */
        0x1, /* gcFEATURE_VALUE_NumShaderCores */
        0x200, /* gcFEATURE_VALUE_InstructionCount */
        0x140, /* gcFEATURE_VALUE_NumberOfConstants */
        0x1, /* gcFEATURE_VALUE_CoreCount */
        0x10, /* gcFEATURE_VALUE_LocalStorageSize */
        0x10, /* gcFEATURE_VALUE_L1CacheSize */
        0x200, /* gcFEATURE_VALUE_InstructionMemorySize */
        0x14, /* gcFEATURE_VALUE_ShaderPCLength */
        0x10, /* gcFEATURE_VALUE_USC_MAX_PAGES */
        0x1, /* gcFEATURE_VALUE_NumPixelPipes */
        0x2, /* gcFEATURE_VALUE_USC_CACHE_CONTROLLERS */
        0x2, /* gcFEATURE_VALUE_USC_BANKS */
        0x8, /* gcFEATURE_VALUE_Streams */
        0x10, /* gcFEATURE_VALUE_VaryingCount */
        0x400, /* gcFEATURE_VALUE_VertexOutputBufferSize */
        0x0, /* gcFEATURE_VALUE_BufferSize */
        0x10, /* gcFEATURE_VALUE_VertexCacheSize */
        0x0, /* gcFEATURE_VALUE_NumResolvePipes */
        0x100, /* gcFEATURE_VALUE_RESULT_WINDOW_MAX_SIZE */
        0x0, /* gcFEATURE_VALUE_ClusterAliveMask */
        0x40, /* gcFEATURE_VALUE_NNMadPerCore */
        0x8, /* gcFEATURE_VALUE_NNCoreCount */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT8 */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_FLOAT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_BFLOAT */
        0xc, /* gcFEATURE_VALUE_NNInputBufferDepth */
        0x40, /* gcFEATURE_VALUE_NNAccumBufferDepth */
        0x400, /* gcFEATURE_VALUE_TPEngine_PwlLUTCount */
        0x10, /* gcFEATURE_VALUE_TPEngine_PwlLUTSize */
        0x80000, /* gcFEATURE_VALUE_VIP_SRAM_SIZE */
        0x4, /* gcFEATURE_VALUE_TPEngine_CoreCount */
        0x100000, /* gcFEATURE_VALUE_AXI_SRAM_SIZE */
        0x3, /* gcFEATURE_VALUE_NN_INIMAGE_OFFSET_BITS */
        0x180, /* gcFEATURE_VALUE_TP_REORDER_INIMAGE_SIZE */
        0x0, /* gcFEATURE_VALUE_TPLite_CoreCount */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_X */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_Y */
        0x1, /* gcFEATURE_VALUE_NNFP16_ZDP */
        0x8, /* gcFEATURE_VALUE_NN_LANES_PER_OUT_CYCLE */
        0x20, /* gcFEATURE_VALUE_MAX_OT_NUMBER */
        0x20, /* gcFEATURE_VALUE_PHYSICAL_VIP_SRAM_WIDTH_IN_BYTE */
        0x10, /* gcFEATURE_VALUE_EQUIVALENT_VIP_SRAM_WIDTH_INBYTE */
        0x8, /* gcFEATURE_VALUE_TP_ZRL_BITS */
        0x80, /* gcFEATURE_VALUE_LATENCY_HIDING_AT_FULL_AXI_BW */
        0x10, /* gcFEATURE_VALUE_AXI_BUS_WIDTH */
        0xb, /* gcFEATURE_VALUE_NN_KERNEL_X_SIZE */
        0xb, /* gcFEATURE_VALUE_NN_KERNEL_Y_SIZE */
        0xfffff, /* gcFEATURE_VALUE_NN_KERNEL_Z_SIZE */
        0x7, /* gcFEATURE_VALUE_NN_X_OFFSET */
        0x7, /* gcFEATURE_VALUE_NN_Y_OFFSET */
        0x40, /* gcFEATURE_VALUE_DDR_KERNEL_BURST_SIZE */
        0x0, /* gcFEATURE_BIT_REG_FastClear */
        0x0, /* gcFEATURE_BIT_REG_SpecialAntiAliasing */
        0x1, /* gcFEATURE_BIT_REG_Pipe3D */
        0x1, /* gcFEATURE_BIT_REG_DXTTextureCompression */
        0x0, /* gcFEATURE_BIT_REG_DebugMode */
        0x1, /* gcFEATURE_BIT_REG_ZCompression */
        0x0, /* gcFEATURE_BIT_REG_YUV420Filter */
        0x1, /* gcFEATURE_BIT_REG_MSAA */
        0x0, /* gcFEATURE_BIT_REG_DC */
        0x0, /* gcFEATURE_BIT_REG_Pipe2D */
        0x1, /* gcFEATURE_BIT_REG_ETC1TextureCompression */
        0x1, /* gcFEATURE_BIT_REG_FastScaler */
        0x1, /* gcFEATURE_BIT_REG_HighDynamicRange */
        0x1, /* gcFEATURE_BIT_REG_YUV420Tiler */
        0x1, /* gcFEATURE_BIT_REG_ModuleCG */
        0x0, /* gcFEATURE_BIT_REG_MinArea */
        0x0, /* gcFEATURE_BIT_REG_NoEZ */
        0x0, /* gcFEATURE_BIT_REG_No422Texture */
        0x0, /* gcFEATURE_BIT_REG_BufferInterleaving */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite2D */
        0x0, /* gcFEATURE_BIT_REG_NoScaler */
        0x1, /* gcFEATURE_BIT_REG_YUY2Averaging */
        0x0, /* gcFEATURE_BIT_REG_HalfPECache */
        0x0, /* gcFEATURE_BIT_REG_HalfTXCache */
        0x0, /* gcFEATURE_BIT_REG_YUY2RenderTarget */
        0x0, /* gcFEATURE_BIT_REG_Mem32BitSupport */
        0x0, /* gcFEATURE_BIT_REG_PipeVG */
        0x0, /* gcFEATURE_BIT_REG_VGTS */
        0x0, /* gcFEATURE_BIT_REG_FE20 */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite3D */
        0x1, /* gcFEATURE_BIT_REG_RsYuvTarget */
        0x1, /* gcFEATURE_BIT_REG_FE20BitIndex */
        0x1, /* gcFEATURE_BIT_REG_FlipY */
        0x1, /* gcFEATURE_BIT_REG_DualReturnBus */
        0x1, /* gcFEATURE_BIT_REG_EndiannessConfig */
        0x1, /* gcFEATURE_BIT_REG_Texture8K */
        0x1, /* gcFEATURE_BIT_REG_CorrectTextureConverter */
        0x1, /* gcFEATURE_BIT_REG_SpecialMsaaLod */
        0x1, /* gcFEATURE_BIT_REG_FastClearFlush */
        0x1, /* gcFEATURE_BIT_REG_2DPE20 */
        0x0, /* gcFEATURE_BIT_REG_CorrectAutoDisable */
        0x1, /* gcFEATURE_BIT_REG_Render8K */
        0x1, /* gcFEATURE_BIT_REG_TileStatus2Bits */
        0x1, /* gcFEATURE_BIT_REG_SeparateTileStatusWhenInterleaved */
        0x1, /* gcFEATURE_BIT_REG_SuperTiled32x32 */
        0x0, /* gcFEATURE_BIT_REG_VG20 */
        0x0, /* gcFEATURE_BIT_REG_TSExtendedCommands */
        0x1, /* gcFEATURE_BIT_REG_CompressionFifoFixed */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions0 */
        0x0, /* gcFEATURE_BIT_REG_VGFilter */
        0x0, /* gcFEATURE_BIT_REG_VG21 */
        0x1, /* gcFEATURE_BIT_REG_ShaderGetsW */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions1 */
        0x1, /* gcFEATURE_BIT_REG_DefaultReg0 */
        0x1, /* gcFEATURE_BIT_REG_MC20 */
        0x0, /* gcFEATURE_BIT_REG_ShaderMSAASideband */
        0x1, /* gcFEATURE_BIT_REG_BugFixes0 */
        0x0, /* gcFEATURE_BIT_REG_VAA */
        0x0, /* gcFEATURE_BIT_REG_BypassInMSAA */
        0x0, /* gcFEATURE_BIT_REG_HierarchicalZ */
        0x0, /* gcFEATURE_BIT_REG_NewTexture */
        0x0, /* gcFEATURE_BIT_REG_A8TargetSupport */
        0x1, /* gcFEATURE_BIT_REG_CorrectStencil */
        0x1, /* gcFEATURE_BIT_REG_EnhanceVR */
        0x1, /* gcFEATURE_BIT_REG_RSUVSwizzle */
        0x1, /* gcFEATURE_BIT_REG_V2Compression */
        0x0, /* gcFEATURE_BIT_REG_VGDoubleBuffer */
        0x1, /* gcFEATURE_BIT_REG_BugFixes1 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes2 */
        0x0, /* gcFEATURE_BIT_REG_TextureStride */
        0x1, /* gcFEATURE_BIT_REG_BugFixes3 */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisable1 */
        0x0, /* gcFEATURE_BIT_REG_AutoRestartTS */
        0x1, /* gcFEATURE_BIT_REG_BugFixes4 */
        0x0, /* gcFEATURE_BIT_REG_L2Windowing */
        0x1, /* gcFEATURE_BIT_REG_HalfFloatPipe */
        0x1, /* gcFEATURE_BIT_REG_PixelDither */
        0x1, /* gcFEATURE_BIT_REG_TwoStencilReference */
        0x1, /* gcFEATURE_BIT_REG_ExtendedPixelFormat */
        0x1, /* gcFEATURE_BIT_REG_CorrectMinMaxDepth */
        0x1, /* gcFEATURE_BIT_REG_DitherAndFilterPlusAlpha2D */
        0x1, /* gcFEATURE_BIT_REG_BugFixes5 */
        0x0, /* gcFEATURE_BIT_REG_New2D */
        0x1, /* gcFEATURE_BIT_REG_NewFloatingPointArithmetic */
        0x1, /* gcFEATURE_BIT_REG_TextureHorizontalAlignmentSelect */
        0x1, /* gcFEATURE_BIT_REG_NonPowerOfTwo */
        0x1, /* gcFEATURE_BIT_REG_LinearTextureSupport */
        0x1, /* gcFEATURE_BIT_REG_Halti0 */
        0x0, /* gcFEATURE_BIT_REG_CorrectOverflowVG */
        0x1, /* gcFEATURE_BIT_REG_NegativeLogFix */
        0x1, /* gcFEATURE_BIT_REG_ResolveOffset */
        0x1, /* gcFEATURE_BIT_REG_OkToGateAxiClock */
        0x1, /* gcFEATURE_BIT_REG_MMU */
        0x1, /* gcFEATURE_BIT_REG_WideLine */
        0x1, /* gcFEATURE_BIT_REG_BugFixes6 */
        0x1, /* gcFEATURE_BIT_REG_FcFlushStall */
        0x1, /* gcFEATURE_BIT_REG_LineLoop */
        0x1, /* gcFEATURE_BIT_REG_LogicOp */
        0x1, /* gcFEATURE_BIT_REG_SeamlessCubeMap */
        0x1, /* gcFEATURE_BIT_REG_SuperTiledTexture */
        0x1, /* gcFEATURE_BIT_REG_LinearPE */
        0x1, /* gcFEATURE_BIT_REG_RectPrimitive */
        0x0, /* gcFEATURE_BIT_REG_Composition */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisableCountWidth */
        0x1, /* gcFEATURE_BIT_REG_PESwizzle */
        0x1, /* gcFEATURE_BIT_REG_EndEvent */
        0x1, /* gcFEATURE_BIT_REG_S1S8 */
        0x1, /* gcFEATURE_BIT_REG_Halti1 */
        0x0, /* gcFEATURE_BIT_REG_RGB888 */
        0x1, /* gcFEATURE_BIT_REG_TX_YUVAssembler */
        0x1, /* gcFEATURE_BIT_REG_DynamicFrequencyScaling */
        0x0, /* gcFEATURE_BIT_REG_TXFilter */
        0x1, /* gcFEATURE_BIT_REG_FullDirectFB */
        0x0, /* gcFEATURE_BIT_REG_OnePass2DFilter */
        0x1, /* gcFEATURE_BIT_REG_ThreadWalkerInPS */
        0x1, /* gcFEATURE_BIT_REG_TileFiller */
        0x1, /* gcFEATURE_BIT_REG_YUVStandard */
        0x0, /* gcFEATURE_BIT_REG_MultiSourceBlt */
        0x0, /* gcFEATURE_BIT_REG_YUVConversion */
        0x1, /* gcFEATURE_BIT_REG_FlushFixed2D */
        0x1, /* gcFEATURE_BIT_REG_Interleaver */
        0x1, /* gcFEATURE_BIT_REG_MixedStreams */
        0x0, /* gcFEATURE_BIT_REG_L2CacheFor2D420 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes7 */
        0x0, /* gcFEATURE_BIT_REG_NoIndexPattern */
        0x1, /* gcFEATURE_BIT_REG_TextureTileStatus */
        0x1, /* gcFEATURE_BIT_REG_DecompressZ16 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes8 */
        0x1, /* gcFEATURE_BIT_REG_DERotationStallFix */
        0x0, /* gcFEATURE_BIT_REG_OclOnly */
        0x1, /* gcFEATURE_BIT_REG_NewFeatures0 */
        0x1, /* gcFEATURE_BIT_REG_InstructionCache */
        0x0, /* gcFEATURE_BIT_REG_GeometryShader */
        0x1, /* gcFEATURE_BIT_REG_TexCompressionSupertiled */
        0x1, /* gcFEATURE_BIT_REG_Generics */
        0x1, /* gcFEATURE_BIT_REG_BugFixes9 */
        0x0, /* gcFEATURE_BIT_REG_FastMSAA */
        0x0, /* gcFEATURE_BIT_REG_WClip */
        0x1, /* gcFEATURE_BIT_REG_BugFixes10 */
        0x1, /* gcFEATURE_BIT_REG_UnifiedSamplers */
        0x1, /* gcFEATURE_BIT_REG_BugFixes11 */
        0x1, /* gcFEATURE_BIT_REG_PerformanceCounters */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes12 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes13 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_ACE */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes14 */
        0x0, /* gcFEATURE_BIT_REG_PowerOptimizations0 */
        0x1, /* gcFEATURE_BIT_REG_NewHZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes15 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements1 */
        0x0, /* gcFEATURE_BIT_REG_DENoGamma */
        0x0, /* gcFEATURE_BIT_REG_PAEnhancements2 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_HIEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes16 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements4 */
        0x0, /* gcFEATURE_BIT_REG_PEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_MCEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_Halti2 */
        0x0, /* gcFEATURE_BIT_REG_DEMirrorRotate */
        0x1, /* gcFEATURE_BIT_REG_SmallMSAA */
        0x1, /* gcFEATURE_BIT_REG_BugFixes17 */
        0x0, /* gcFEATURE_BIT_REG_Rasterizer2 */
        0x0, /* gcFEATURE_BIT_REG_DualPipeOPF */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2 */
        0x0, /* gcFEATURE_BIT_REG_CSCV2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes18 */
        0x0, /* gcFEATURE_BIT_REG_Compression2D */
        0x0, /* gcFEATURE_BIT_REG_Probe */
        0x1, /* gcFEATURE_BIT_REG_MediumPrecision */
        0x0, /* gcFEATURE_BIT_REG_DESupertile */
        0x1, /* gcFEATURE_BIT_REG_BugFixes19 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements6 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements7 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes20 */
        0x0, /* gcFEATURE_BIT_REG_DEAddress40 */
        0x0, /* gcFEATURE_BIT_REG_MiniMMUFix */
        0x1, /* gcFEATURE_BIT_REG_EEZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes21 */
        0x0, /* gcFEATURE_BIT_REG_ExtraVgCaps */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV15 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes22 */
        0x1, /* gcFEATURE_BIT_REG_Halti3 */
        0x0, /* gcFEATURE_BIT_REG_TessellationShaders */
        0x0, /* gcFEATURE_BIT_REG_OPF9Tap */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2StrQuad */
        0x0, /* gcFEATURE_BIT_REG_SeperateSRCAndDstCache */
        0x1, /* gcFEATURE_BIT_REG_Halti4 */
        0x1, /* gcFEATURE_BIT_REG_RAWriteDepth */
        0x0, /* gcFEATURE_BIT_REG_AndroidOnly */
        0x1, /* gcFEATURE_BIT_REG_HasChipProductReg */
        0x0, /* gcFEATURE_BIT_REG_TXSupportDEC */
        0x1, /* gcFEATURE_BIT_REG_S8MSAACompression */
        0x1, /* gcFEATURE_BIT_REG_BugFixesIn544 */
        0x0, /* gcFEATURE_BIT_REG_L2CacheRemove */
        0x1, /* gcFEATURE_BIT_REG_FEAllowRndVtxCnt */
        0x0, /* gcFEATURE_BIT_REG_CubeMapFL28 */
        0x1, /* gcFEATURE_BIT_REG_TX6bitFrac */
        0x1, /* gcFEATURE_BIT_REG_FEAllowStallPrefetchEng */
        0x0, /* gcFEATURE_BIT_REG_ThirdPartyCompression */
        0x1, /* gcFEATURE_BIT_REG_RSS8 */
        0x1, /* gcFEATURE_BIT_REG_MSAACoherencyCheck */
        0x1, /* gcFEATURE_BIT_REG_Halti5 */
        0x1, /* gcFEATURE_BIT_REG_Evis */
        0x0, /* gcFEATURE_BIT_REG_BltEngine */
        0x0, /* gcFEATURE_BIT_REG_BugFixes23 */
        0x0, /* gcFEATURE_BIT_REG_BugFixes24 */
        0x0, /* gcFEATURE_BIT_REG_DEC */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12 */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12_10BIT */
        0x0, /* gcFEATURE_BIT_REG_DisableVIP */
        0x0, /* gcFEATURE_BIT_RenderTarget8 */
        0x0, /* gcFEATURE_BIT_TxLodFlowCorrection */
        0x0, /* gcFEATURE_BIT_FaceLod */
        0x0, /* gcFEATURE_BIT_MultiCoreSemaphoreStallV2 */
        0x1, /* gcFEATURE_BIT_VMSAA */
        0x0, /* gcFEATURE_BIT_ChipEnableLink */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_1_5_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_BILINEAR_FILTER */
        0x1, /* gcFEATURE_BIT_RA_HZEZ_CLOCK_CONTROL */
        0x1, /* gcFEATURE_BIT_CACHE128B256BPERLINE */
        0x1, /* gcFEATURE_BIT_V4Compression */
        0x0, /* gcFEATURE_BIT_PE2D_MAJOR_SUPER_TILE */
        0x1, /* gcFEATURE_BIT_PE_32BPC_COLORMASK_FIX */
        0x1, /* gcFEATURE_BIT_ALPHA_BLENDING_OPT */
        0x1, /* gcFEATURE_BIT_NEW_GPIPE */
        0x0, /* gcFEATURE_BIT_PIPELINE_32_ATTRIBUTES */
        0x0, /* gcFEATURE_BIT_MSAA_SHADING */
        0x0, /* gcFEATURE_BIT_NO_ANISTRO_FILTER */
        0x1, /* gcFEATURE_BIT_NO_ASTC */
        0x0, /* gcFEATURE_BIT_NO_DXT */
        0x0, /* gcFEATURE_BIT_HWTFB */
        0x1, /* gcFEATURE_BIT_RA_DEPTH_WRITE_MSAA1X_FIX */
        0x1, /* gcFEATURE_BIT_EZHZ_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_FIX */
        0x1, /* gcFEATURE_BIT_SH_HALFDEPENDENCY_FIX */
        0x1, /* gcFEATURE_BIT_USC_MCFILL_FIX */
        0x1, /* gcFEATURE_BIT_TPG_TCPERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_MDFIFO_OVERFLOW_FIX */
        0x1, /* gcFEATURE_BIT_SH_TEXLD_BARRIER_IN_CS_FIX */
        0x1, /* gcFEATURE_BIT_RS_NEW_BASEADDR */
        0x1, /* gcFEATURE_BIT_PE_8bpp_DUALPIPE_FIX */
        0x0, /* gcFEATURE_BIT_SH_ADVANCED_INSTR */
        0x1, /* gcFEATURE_BIT_SH_FLAT_INTERPOLATION_DUAL16_FIX */
        0x1, /* gcFEATURE_BIT_USC_CONTINUOUS_FLUS_FIX */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_V4 */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_ALPHA_KILL */
        0x1, /* gcFEATURE_BIT_PE_NO_ALPHA_TEST */
        0x0, /* gcFEATURE_BIT_TX_LOD_NEAREST_SELECT */
        0x1, /* gcFEATURE_BIT_SH_FIX_LDEXP */
        0x1, /* gcFEATURE_BIT_SUPPORT_MOVAI */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_MAXPAGES_FIX */
        0x1, /* gcFEATURE_BIT_PE_RGBA16I_FIX */
        0x1, /* gcFEATURE_BIT_BLT_8bpp_256TILE_FC_FIX */
        0x1, /* gcFEATURE_BIT_PE_64bit_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_USC_FULL_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_TX_YUV_ASSEMBLER_10BIT */
        0x1, /* gcFEATURE_BIT_FE_32bit_INDEX_FIX */
        0x1, /* gcFEATURE_BIT_BLT_64bpp_MASKED_CLEAR_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY */
        0x1, /* gcFEATURE_BIT_ROBUSTNESS */
        0x1, /* gcFEATURE_BIT_USC_ATOMIC_FIX */
        0x1, /* gcFEATURE_BIT_SH_PSO_MSAA1x_FIX */
        0x1, /* gcFEATURE_BIT_USC_VX_PERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_GOS_ADDR_FIX */
        0x1, /* gcFEATURE_BIT_TX_8bit_UVFrac */
        0x1, /* gcFEATURE_BIT_TX_DESC_CACHE_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_RSBLT_MSAA_DECOMPRESSION */
        0x0, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE */
        0x1, /* gcFEATURE_BIT_DRAWID */
        0x1, /* gcFEATURE_BIT_PSIO_SAMPLEMASK_IN_R0ZW_FIX */
        0x1, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE_V2 */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG */
        0x0, /* gcFEATURE_BIT_SNAPPAGE_CMD */
        0x1, /* gcFEATURE_BIT_SH_NO_INDEX_CONST_ON_A0 */
        0x1, /* gcFEATURE_BIT_SH_NO_ONECONST_LIMIT */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_ON_TEMP */
        0x1, /* gcFEATURE_BIT_COMPUTE_ONLY */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_CLAMP */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_ALLOC_COUNT_FIX */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_PREFETCH */
        0x0, /* gcFEATURE_BIT_PE2D_SEPARATE_CACHE */
        0x1, /* gcFEATURE_BIT_PE_MSAA_OQ_FIX */
        0x1, /* gcFEATURE_BIT_PSIO_MSAA_CL_FIX */
        0x1, /* gcFEATURE_BIT_USC_DEFER_FILL_FIX */
        0x1, /* gcFEATURE_BIT_SH_CLOCK_GATE_FIX */
        0x0, /* gcFEATURE_BIT_FE_NEED_DUMMYDRAW */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_OUTPUT */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_10BIT */
        0x0, /* gcFEATURE_BIT_MULTI_CLUSTER */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK */
        0x0, /* gcFEATURE_BIT_SH_DUAL16_SAMPLEMASK_ZW */
        0x0, /* gcFEATURE_BIT_TPG_TRIVIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TX_ASTC_MULTISLICE_FIX */
        0x0, /* gcFEATURE_BIT_FE_ROBUST_FIX */
        0x0, /* gcFEATURE_BIT_SH_GPIPE_ACCESS_FULLTEMPS */
        0x0, /* gcFEATURE_BIT_PSIO_INTERLOCK */
        0x1, /* gcFEATURE_BIT_PA_WIDELINE_FIX */
        0x0, /* gcFEATURE_BIT_WIDELINE_HELPER_FIX */
        0x0, /* gcFEATURE_BIT_G2D_3rd_PARTY_COMPRESSION_1_1 */
        0x0, /* gcFEATURE_BIT_TX_FLUSH_L1CACHE */
        0x1, /* gcFEATURE_BIT_PE_DITHER_FIX2 */
        0x0, /* gcFEATURE_BIT_SH_TEXLD_U_FIX */
        0x0, /* gcFEATURE_BIT_MC_FCCACHE_BYTEMASK */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK_FIX */
        0x0, /* gcFEATURE_BIT_PE_ADVANCE_BLEND_PART0 */
        0x0, /* gcFEATURE_BIT_FE_PATCHLIST_FETCH_FIX */
        0x1, /* gcFEATURE_BIT_RA_CG_FIX */
        0x0, /* gcFEATURE_BIT_DEC400 */
        0x0, /* gcFEATURE_BIT_LS_SUPPORT_PERCOMP_DEPENDENCY */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG2 */
        0x0, /* gcFEATURE_BIT_PE_VMSAA_COVERAGE_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY_AHB */
        0x0, /* gcFEATURE_BIT_MULTICORE_SEMAPHORESTALL_V3 */
        0x0, /* gcFEATURE_BIT_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_SH_CMPLX */
        0x0, /* gcFEATURE_BIT_SH_IDIV0_SWZL_EHS */
        0x0, /* gcFEATURE_BIT_TX_LERP_LESS_BIT */
        0x0, /* gcFEATURE_BIT_SH_GM_ENDIAN */
        0x0, /* gcFEATURE_BIT_SH_GM_USC_UNALLOC */
        0x0, /* gcFEATURE_BIT_SH_END_OF_BB */
        0x0, /* gcFEATURE_BIT_TX_BORDER_CLAMP_FIX */
        0x0, /* gcFEATURE_BIT_SH_IMG_LD_LASTPIXEL_FIX */
        0x0, /* gcFEATURE_BIT_ASYNC_BLT */
        0x0, /* gcFEATURE_BIT_ASYNC_FE_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_PSCS_THROTTLE */
        0x0, /* gcFEATURE_BIT_SEPARATE_LS */
        0x0, /* gcFEATURE_BIT_WIDELINE_TRIANGLE_EMU */
        0x0, /* gcFEATURE_BIT_FENCE_32BIT */
        0x0, /* gcFEATURE_BIT_FENCE_64BIT */
        0x0, /* gcFEATURE_BIT_PE_DEPTH_ONLY_OQFIX */
        0x0, /* gcFEATURE_BIT_TX_SEAMLESS_CUBE */
        0x0, /* gcFEATURE_BIT_TX_SNORM_SUPPORT */
        0x0, /* gcFEATURE_BIT_SH_SCATTER_GATHER */
        0x0, /* gcFEATURE_BIT_HWMANAGED_LS */
        0x0, /* gcFEATURE_BIT_SH_IMAGE_ENABLE_FIX */
        0x1, /* gcFEATURE_BIT_MSAA_FRAGMENT_OPERATION */
        0x0, /* gcFEATURE_BIT_PE_TILE_CACHE_FLUSH_FIX */
        0x0, /* gcFEATURE_BIT_BLT_YUV_OUTPUT */
        0x1, /* gcFEATURE_BIT_SH_IO_CG_FIX */
        0x0, /* gcFEATURE_BIT_PE_SWIZZLE */
        0x0, /* gcFEATURE_BIT_SH_ROBUSTNESS_FIX */
        0x0, /* gcFEATURE_BIT_USC_ATOMIC_FIX2 */
        0x0, /* gcFEATURE_BIT_PE_A8B8G8R8 */
        0x0, /* gcFEATURE_BIT_MULTIVIEW_RENDER */
        0x0, /* gcFEATURE_BIT_FE_DRAW_DIRECT */
        0x0, /* gcFEATURE_BIT_TX_VKBORDER_MODE */
        0x0, /* gcFEATURE_BIT_TX_UNNORMALIZED_COORD */
        0x0, /* gcFEATURE_BIT_PA_LINECLIP_FIX */
        0x0, /* gcFEATURE_BIT_TX_8bit_UVFrac_ROUNDING_FIX */
        0x0, /* gcFEATURE_BIT_MP_ARCH */
        0x0, /* gcFEATURE_BIT_TX_NO_FIXED_FILTER */
        0x0, /* gcFEATURE_BIT_SHARE_Z */
        0x0, /* gcFEATURE_BIT_DE_2D_FAST_CLEAR */
        0x0, /* gcFEATURE_BIT_TX_CLEAR_PENDING_FIX */
        0x0, /* gcFEATURE_BIT_NO_HI1_L2 */
        0x0, /* gcFEATURE_BIT_USC_EVICT_CTRL_FIFO_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_FORMAT_10BIT_CROSS_4K */
        0x0, /* gcFEATURE_BIT_FORMAT_P010LSB_I010 */
        0x0, /* gcFEATURE_BIT_ENDIAN_CONTROL */
        0x0, /* gcFEATURE_BIT_G2D_DEC400EX */
        0x0, /* gcFEATURE_BIT_SH_VX2_FLOATING_MAD_FIX */
        0x0, /* gcFEATURE_BIT_TS_FC_VULKAN_SUPPORT */
        0x0, /* gcFEATURE_BIT_MSAA_FLOAT_64BIT */
        0x0, /* gcFEATURE_BIT_VG_TS_CULLING */
        0x0, /* gcFEATURE_BIT_VG_FP25 */
        0x0, /* gcFEATURE_BIT_VG_AYUV_INPUT_OUTPUT */
        0x0, /* gcFEATURE_BIT_VG_DOUBLE_IMAGE */
        0x0, /* gcFEATURE_BIT_VG_RECTANGLE_STRIPE_MODE */
        0x0, /* gcFEATURE_BIT_VG_MMU */
        0x0, /* gcFEATURE_BIT_VG_IM_FILTER */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PLANAR */
        0x0, /* gcFEATURE_BIT_VG_PE_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_COLOR_PRECISION_8_BIT */
        0x0, /* gcFEATURE_BIT_VG_RESOLVE_ENGINE */
        0x0, /* gcFEATURE_BIT_VG_PE_COLOR_KEY */
        0x0, /* gcFEATURE_BIT_VG_IM_INDEX_FORMAT */
        0x0, /* gcFEATURE_BIT_VG_RESOLUTION_8K */
        0x0, /* gcFEATURE_BIT_VG_IMAGE_16K */
        0x0, /* gcFEATURE_BIT_VG_FORMAT_ARGB2222 */
        0x0, /* gcFEATURE_BIT_G2D_DEC400 */
        0x0, /* gcFEATURE_BIT_DC_OVERLAY_SCALING */
        0x0, /* gcFEATURE_BIT_DC_SOURCE_ROTATION */
        0x0, /* gcFEATURE_BIT_DC_TILED */
        0x0, /* gcFEATURE_BIT_DC_YUV_L1 */
        0x0, /* gcFEATURE_BIT_DC_D30_OUTPUT */
        0x0, /* gcFEATURE_BIT_DC_MMU */
        0x0, /* gcFEATURE_BIT_DC_COMPRESSION */
        0x0, /* gcFEATURE_BIT_DC_QOS */
        0x0, /* gcFEATURE_BIT_AI_GPU */
        0x0, /* gcFEATURE_BIT_EVIS_NO_ABSDIFF */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BITREPLACE */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BOXFILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_CORDIAC */
        0x0, /* gcFEATURE_BIT_EVIS_NO_DP32 */
        0x0, /* gcFEATURE_BIT_EVIS_NO_FILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_IADD */
        0x0, /* gcFEATURE_BIT_EVIS_NO_SELECTADD */
        0x0, /* gcFEATURE_BIT_EVIS_LERP_7OUTPUT */
        0x0, /* gcFEATURE_BIT_EVIS_ACCSQ_8OUTPUT */
        0x1, /* gcFEATURE_BIT_EVIS_VX2 */
        0x1, /* gcFEATURE_BIT_NN_FLOAT */
        0x1, /* gcFEATURE_BIT_TP_ENGINE */
        0x1, /* gcFEATURE_BIT_VIP_V7 */
        0x0, /* gcFEATURE_BIT_MCFE */
        0x0, /* gcFEATURE_BIT_NN_INTERLEVE8 */
        0x0, /* gcFEATURE_BIT_TP_REORDER */
        0x1, /* gcFEATURE_BIT_TP_LRN */
        0x1, /* gcFEATURE_BIT_TP_MAX_POOLING_STRIDE1 */
        0x0, /* gcFEATURE_BIT_NN_FP16_ALU */
        0x1, /* gcFEATURE_BIT_NN_INT16_ALU */
        0x1, /* gcFEATURE_BIT_TP_ROI_POOLING */
        0x0, /* gcFEATURE_BIT_NN_ZDP3 */
        0x0, /* gcFEATURE_BIT_NN_ZDP6 */
        0x0, /* gcFEATURE_BIT_NN_XYDP9 */
        0x1, /* gcFEATURE_BIT_NN_INT8_SCALE */
        0x1, /* gcFEATURE_BIT_NN_POWER_ISOLATION */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE1 */
        0x1, /* gcFEATURE_BIT_TF_QUANTIZATION */
        0x1, /* gcFEATURE_BIT_TP_SIMPLE_INT16 */
        0x0, /* gcFEATURE_BIT_TP_REAL_INT16 */
        0x0, /* gcFEATURE_BIT_TP_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_NN_FIRST_PIXEL_POOLING */
        0x0, /* gcFEATURE_BIT_SWTILING_PHASE2 */
        0x1, /* gcFEATURE_BIT_NN_STRIDE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_XYDP6 */
        0x0, /* gcFEATURE_BIT_TP_REORDER_FIX */
        0x0, /* gcFEATURE_BIT_NN_CONV1x1_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_CACHELINE_MODE_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_PER3DTILE_BUBBLE_FIX */
        0x0, /* gcFEATURE_BIT_NN_CONVOUT_FIFO_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_SWTILING_PHASE3 */
        0x0, /* gcFEATURE_BIT_USC_STAY_LRU */
        0x0, /* gcFEATURE_BIT_NN_NONZERO_MIRROR_BORDER */
        0x0, /* gcFEATURE_BIT_NN_COEF_DECOMPRESS_PERF2X */
        0x0, /* gcFEATURE_BIT_INPUT_4BIT */
        0x0, /* gcFEATURE_BIT_COEF_COMPRESSION_ENHANCEMENT */
        0x1, /* gcFEATURE_BIT_NN_ZXDP3_KERNEL_READ_CONFLICT_FIX */
        0x0, /* gcFEATURE_BIT_NN_ZDP3_NO_COMPRESS_FIX */
        0x0, /* gcFEATURE_BIT_NN_ASYNC_COPY_PERF_FIX */
        0x1, /* gcFEATURE_BIT_OCB_COUNTER */
        0x0, /* gcFEATURE_BIT_NN_XYDP0 */
        0x0, /* gcFEATURE_BIT_ZRL_7BIT */
        0x0, /* gcFEATURE_BIT_NN_ASYNC_COPY_MERGE_FIX */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_SCALER */
        0x0, /* gcFEATURE_BIT_SCALER_4K */
        0x0, /* gcFEATURE_BIT_NN_REQ_SLOWARBITRATION_FIX */
        0x0, /* gcFEATURE_BIT_IMAGE_PARTIAL_CACHE */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNELHEAD_FIX */
        0x1, /* gcFEATURE_BIT_NN_SINGLEPORT_ACCUMBUFFER */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_ZRL_8BIT */
        0x0, /* gcFEATURE_BIT_NN_DEPTHWISE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_WRITE_WITHOUT_USC */
        0x0, /* gcFEATURE_BIT_NN_ZDP_INIMAGE_SIZE_FIX */
        0x1, /* gcFEATURE_BIT_HI_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_INCORRECT_WR_REQ_TO_USC_BETWEEN_REORDER_AND_NORMAL_LAYER_FIX */
        0x0, /* gcFEATURE_BIT_TP_COEF_COMPRESSION_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_VIP_DEC400 */
        0x0, /* gcFEATURE_BIT_IMAGE_NOT_PACKED_IN_SRAM_FIX */
        0x0, /* gcFEATURE_BIT_IDLE_BEFORE_FLUSH_COMPLETE_FIX */
        0x1, /* gcFEATURE_BIT_NO_FLUSH_USC_FIX */
        0x1, /* gcFEATURE_BIT_COEF_DELTA_CORD_OVERFLOW_ZRL_8BIT_FIX */
        0x0, /* gcFEATURE_BIT_XY_OFFSET_LIMITATION_FIX */
        0x0, /* gcFEATURE_BIT_USC_INVALIDATE_CACHE_LINE_FIX */
        0x0, /* gcFEATURE_BIT_LOW_EFFICIENCY_OF_ID_WRITE_IMGBUF_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_PER_CORE_LESS_THAN_THIRD_COEF_BUFF_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_USC_BOTTLENECK_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_SIZE_WASTE_IN_PARTIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNEL_INTERLEAVE_FIX */
        0x0, /* gcFEATURE_BIT_TP_REORDER_LAYER_SUSPEND_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_VIP_SRAM_READ_BW_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_IMG_POP_PIPELINE_PAUSE_FIX */
        0x0, /* gcFEATURE_BIT_DR_JD_DIFF_CONDITION_FOR_CACHELINE_MODE_PRE_FIX */
        0x1, /* gcFEATURE_BIT_OUTIMAGE_X_BITWIDTH_LIMIT_FOR_NN_TRANSPOSE_FIX */
        0x0, /* gcFEATURE_BIT_SMALL_BATCH_FLOPS_RESET_FIX */
        0x0, /* gcFEATURE_BIT_SMALL_BATCH_DISBLE_FIX */
        0x1, /* gcFEATURE_BIT_NEGATIVE_POST_SHIFT_FIX */
        0x0, /* gcFEATURE_BIT_NN_COMMAND_KERNEL_REQUEST_CONFICT_FIX */
        0x1, /* gcFEATURE_BIT_OCB_REMAP_PHYSICAL_ADDRESS */
        0x0, /* gcFEATURE_BIT_NN_NO_Z_LOCATION_OFFSET */
        0x0, /* gcFEATURE_BIT_NN_LEAKY_RELU */
        0x0, /* gcFEATURE_BIT_NN_PRELU */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT_ASYM */
        0x0, /* gcFEATURE_BIT_NN_NATIVE_STRIDE_TWO */
        0x0, /* gcFEATURE_BIT_NN_TENSOR_ADD */
        0x0, /* gcFEATURE_BIT_NN_FLOAT_POST_MULT */
        0x0, /* gcFEATURE_BIT_NN_SLICE_PADDING_TO_64BYTE_ALIGN */
        0x0, /* gcFEATURE_BIT_NN_DW_1x1_CONV_MERGE */
        0x0, /* gcFEATURE_BIT_NN_SLOW_OUTPUT */
        0x1, /* gcFEATURE_BIT_NO_NARROW_POST_PROCESS_PIPE */
        0x0, /* gcFEATURE_BIT_TP_NN_PROBE */
        0x0, /* gcFEATURE_BIT_TP_23BITS_POST_MULTIPLIER */
        0x0, /* gcFEATURE_BIT_NN_TRANSPOSE */
        0x0, /* gcFEATURE_BIT_EVIS2_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_USC_ASYNC_CP_RTN_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_DDR_BURST_LEN_256B */
        0x1, /* gcFEATURE_BIT_IMG_CAHCE_MODE_MUST_0_IN_IMG_DIRECT_MODE_FIX */
        0x0, /* gcFEATURE_BIT_USE_SINGLE_PORT_VIPSRAM */
        0x0, /* gcFEATURE_BIT_NN_ASYMMETRIC_INT8 */
        0x1, /* gcFEATURE_BIT_DEPTHWISE_NEIGHBOR_IMG_DATA_TRANSFER_NOT_EFFICIENT_FIX */
        0x0, /* gcFEATURE_BIT_PRELU_LEAKLY_RELU_CLAMP */
        0x0, /* gcFEATURE_BIT_TP_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_SMALL_BATCH_PHASE2 */
        0x0, /* gcFEATURE_BIT_TILE_ACCESS_CAPABILITY */
        0x0, /* gcFEATURE_BIT_FAST_DP3_PREPROCESSOR */
        0x0, /* gcFEATURE_BIT_NN_COMPRESSION_BYPASSS */
        0x0, /* gcFEATURE_BIT_BFLOAT_KERNEL_COMPRESSION_ZERO_SKIP_FIX */
        0x0, /* gcFEATURE_BIT_TP_3_USC */
        0x0, /* gcFEATURE_BIT_TP_KERNEL_1BYTE_ALGIN */
        0x0, /* gcFEATURE_BIT_TPLITE_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_PREPROCESS_IMG_BUF_640BYTE_LIMIT */
        0x0, /* gcFEATURE_BIT_V8_ACCUMLATION_READ_OUT_HAS_BUBBLES_PERF_FIX */
        0x0, /* gcFEATURE_BIT_V8_SINGLE_PORT_ACCUMULATION_BUFFER_RW_CONFICT_ZERO_SKIP_PERF_FIX */
        0x0, /* gcFEATURE_BIT_BURST_COLLECT_DUMMY_DATA_WASTE_CYCLES_FIX */
        0x0, /* gcFEATURE_BIT_INIMG_NOT_64BYTE_ALIGN_CACHELINE_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TP_ACCESS_VIPSRAM_OT_IS_ONE_FIX */
        0x1, /* gcFEATURE_BIT_VIP_HW_FINAL_RELEASE */
    },
    /* vipnano-qi */
    {
        0x8000, /* ChipID */
        0x7120, /* ChipRevision */
        0x45080009, /* ProductID */
        0x0, /* EcoID */
        0x88, /* CustomerID */
        0x0, /* PatchVersion */
        "", /* ProductName */
        0x0, /* FormalRelease */
        0x40, /* gcFEATURE_VALUE_TempRegisters */
        0x100, /* gcFEATURE_VALUE_ThreadCount */
        0x1, /* gcFEATURE_VALUE_NumShaderCores */
        0x200, /* gcFEATURE_VALUE_InstructionCount */
        0x140, /* gcFEATURE_VALUE_NumberOfConstants */
        0x1, /* gcFEATURE_VALUE_CoreCount */
        0x10, /* gcFEATURE_VALUE_LocalStorageSize */
        0x10, /* gcFEATURE_VALUE_L1CacheSize */
        0x200, /* gcFEATURE_VALUE_InstructionMemorySize */
        0x14, /* gcFEATURE_VALUE_ShaderPCLength */
        0x10, /* gcFEATURE_VALUE_USC_MAX_PAGES */
        0x1, /* gcFEATURE_VALUE_NumPixelPipes */
        0x2, /* gcFEATURE_VALUE_USC_CACHE_CONTROLLERS */
        0x2, /* gcFEATURE_VALUE_USC_BANKS */
        0x8, /* gcFEATURE_VALUE_Streams */
        0x10, /* gcFEATURE_VALUE_VaryingCount */
        0x400, /* gcFEATURE_VALUE_VertexOutputBufferSize */
        0x0, /* gcFEATURE_VALUE_BufferSize */
        0x10, /* gcFEATURE_VALUE_VertexCacheSize */
        0x0, /* gcFEATURE_VALUE_NumResolvePipes */
        0x100, /* gcFEATURE_VALUE_RESULT_WINDOW_MAX_SIZE */
        0x0, /* gcFEATURE_VALUE_ClusterAliveMask */
        0x40, /* gcFEATURE_VALUE_NNMadPerCore */
        0x8, /* gcFEATURE_VALUE_NNCoreCount */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT8 */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_FLOAT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_BFLOAT */
        0xc, /* gcFEATURE_VALUE_NNInputBufferDepth */
        0x40, /* gcFEATURE_VALUE_NNAccumBufferDepth */
        0x400, /* gcFEATURE_VALUE_TPEngine_PwlLUTCount */
        0x10, /* gcFEATURE_VALUE_TPEngine_PwlLUTSize */
        0x80000, /* gcFEATURE_VALUE_VIP_SRAM_SIZE */
        0x4, /* gcFEATURE_VALUE_TPEngine_CoreCount */
        0x100000, /* gcFEATURE_VALUE_AXI_SRAM_SIZE */
        0x4, /* gcFEATURE_VALUE_NN_INIMAGE_OFFSET_BITS */
        0x180, /* gcFEATURE_VALUE_TP_REORDER_INIMAGE_SIZE */
        0x0, /* gcFEATURE_VALUE_TPLite_CoreCount */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_X */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_Y */
        0x1, /* gcFEATURE_VALUE_NNFP16_ZDP */
        0x8, /* gcFEATURE_VALUE_NN_LANES_PER_OUT_CYCLE */
        0x20, /* gcFEATURE_VALUE_MAX_OT_NUMBER */
        0x20, /* gcFEATURE_VALUE_PHYSICAL_VIP_SRAM_WIDTH_IN_BYTE */
        0x10, /* gcFEATURE_VALUE_EQUIVALENT_VIP_SRAM_WIDTH_INBYTE */
        0x8, /* gcFEATURE_VALUE_TP_ZRL_BITS */
        0x80, /* gcFEATURE_VALUE_LATENCY_HIDING_AT_FULL_AXI_BW */
        0x10, /* gcFEATURE_VALUE_AXI_BUS_WIDTH */
        0xf, /* gcFEATURE_VALUE_NN_KERNEL_X_SIZE */
        0xf, /* gcFEATURE_VALUE_NN_KERNEL_Y_SIZE */
        0xfffff, /* gcFEATURE_VALUE_NN_KERNEL_Z_SIZE */
        0xf, /* gcFEATURE_VALUE_NN_X_OFFSET */
        0xf, /* gcFEATURE_VALUE_NN_Y_OFFSET */
        0x40, /* gcFEATURE_VALUE_DDR_KERNEL_BURST_SIZE */
        0x0, /* gcFEATURE_BIT_REG_FastClear */
        0x0, /* gcFEATURE_BIT_REG_SpecialAntiAliasing */
        0x1, /* gcFEATURE_BIT_REG_Pipe3D */
        0x1, /* gcFEATURE_BIT_REG_DXTTextureCompression */
        0x0, /* gcFEATURE_BIT_REG_DebugMode */
        0x1, /* gcFEATURE_BIT_REG_ZCompression */
        0x0, /* gcFEATURE_BIT_REG_YUV420Filter */
        0x1, /* gcFEATURE_BIT_REG_MSAA */
        0x0, /* gcFEATURE_BIT_REG_DC */
        0x0, /* gcFEATURE_BIT_REG_Pipe2D */
        0x1, /* gcFEATURE_BIT_REG_ETC1TextureCompression */
        0x1, /* gcFEATURE_BIT_REG_FastScaler */
        0x1, /* gcFEATURE_BIT_REG_HighDynamicRange */
        0x1, /* gcFEATURE_BIT_REG_YUV420Tiler */
        0x1, /* gcFEATURE_BIT_REG_ModuleCG */
        0x0, /* gcFEATURE_BIT_REG_MinArea */
        0x0, /* gcFEATURE_BIT_REG_NoEZ */
        0x0, /* gcFEATURE_BIT_REG_No422Texture */
        0x0, /* gcFEATURE_BIT_REG_BufferInterleaving */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite2D */
        0x0, /* gcFEATURE_BIT_REG_NoScaler */
        0x1, /* gcFEATURE_BIT_REG_YUY2Averaging */
        0x0, /* gcFEATURE_BIT_REG_HalfPECache */
        0x0, /* gcFEATURE_BIT_REG_HalfTXCache */
        0x0, /* gcFEATURE_BIT_REG_YUY2RenderTarget */
        0x0, /* gcFEATURE_BIT_REG_Mem32BitSupport */
        0x0, /* gcFEATURE_BIT_REG_PipeVG */
        0x0, /* gcFEATURE_BIT_REG_VGTS */
        0x0, /* gcFEATURE_BIT_REG_FE20 */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite3D */
        0x1, /* gcFEATURE_BIT_REG_RsYuvTarget */
        0x1, /* gcFEATURE_BIT_REG_FE20BitIndex */
        0x1, /* gcFEATURE_BIT_REG_FlipY */
        0x1, /* gcFEATURE_BIT_REG_DualReturnBus */
        0x1, /* gcFEATURE_BIT_REG_EndiannessConfig */
        0x1, /* gcFEATURE_BIT_REG_Texture8K */
        0x1, /* gcFEATURE_BIT_REG_CorrectTextureConverter */
        0x1, /* gcFEATURE_BIT_REG_SpecialMsaaLod */
        0x1, /* gcFEATURE_BIT_REG_FastClearFlush */
        0x1, /* gcFEATURE_BIT_REG_2DPE20 */
        0x0, /* gcFEATURE_BIT_REG_CorrectAutoDisable */
        0x1, /* gcFEATURE_BIT_REG_Render8K */
        0x1, /* gcFEATURE_BIT_REG_TileStatus2Bits */
        0x1, /* gcFEATURE_BIT_REG_SeparateTileStatusWhenInterleaved */
        0x1, /* gcFEATURE_BIT_REG_SuperTiled32x32 */
        0x0, /* gcFEATURE_BIT_REG_VG20 */
        0x0, /* gcFEATURE_BIT_REG_TSExtendedCommands */
        0x1, /* gcFEATURE_BIT_REG_CompressionFifoFixed */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions0 */
        0x0, /* gcFEATURE_BIT_REG_VGFilter */
        0x0, /* gcFEATURE_BIT_REG_VG21 */
        0x1, /* gcFEATURE_BIT_REG_ShaderGetsW */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions1 */
        0x1, /* gcFEATURE_BIT_REG_DefaultReg0 */
        0x1, /* gcFEATURE_BIT_REG_MC20 */
        0x0, /* gcFEATURE_BIT_REG_ShaderMSAASideband */
        0x1, /* gcFEATURE_BIT_REG_BugFixes0 */
        0x0, /* gcFEATURE_BIT_REG_VAA */
        0x0, /* gcFEATURE_BIT_REG_BypassInMSAA */
        0x0, /* gcFEATURE_BIT_REG_HierarchicalZ */
        0x0, /* gcFEATURE_BIT_REG_NewTexture */
        0x0, /* gcFEATURE_BIT_REG_A8TargetSupport */
        0x1, /* gcFEATURE_BIT_REG_CorrectStencil */
        0x1, /* gcFEATURE_BIT_REG_EnhanceVR */
        0x1, /* gcFEATURE_BIT_REG_RSUVSwizzle */
        0x1, /* gcFEATURE_BIT_REG_V2Compression */
        0x0, /* gcFEATURE_BIT_REG_VGDoubleBuffer */
        0x1, /* gcFEATURE_BIT_REG_BugFixes1 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes2 */
        0x0, /* gcFEATURE_BIT_REG_TextureStride */
        0x1, /* gcFEATURE_BIT_REG_BugFixes3 */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisable1 */
        0x0, /* gcFEATURE_BIT_REG_AutoRestartTS */
        0x1, /* gcFEATURE_BIT_REG_BugFixes4 */
        0x0, /* gcFEATURE_BIT_REG_L2Windowing */
        0x1, /* gcFEATURE_BIT_REG_HalfFloatPipe */
        0x1, /* gcFEATURE_BIT_REG_PixelDither */
        0x1, /* gcFEATURE_BIT_REG_TwoStencilReference */
        0x1, /* gcFEATURE_BIT_REG_ExtendedPixelFormat */
        0x1, /* gcFEATURE_BIT_REG_CorrectMinMaxDepth */
        0x1, /* gcFEATURE_BIT_REG_DitherAndFilterPlusAlpha2D */
        0x1, /* gcFEATURE_BIT_REG_BugFixes5 */
        0x0, /* gcFEATURE_BIT_REG_New2D */
        0x1, /* gcFEATURE_BIT_REG_NewFloatingPointArithmetic */
        0x1, /* gcFEATURE_BIT_REG_TextureHorizontalAlignmentSelect */
        0x1, /* gcFEATURE_BIT_REG_NonPowerOfTwo */
        0x1, /* gcFEATURE_BIT_REG_LinearTextureSupport */
        0x1, /* gcFEATURE_BIT_REG_Halti0 */
        0x0, /* gcFEATURE_BIT_REG_CorrectOverflowVG */
        0x1, /* gcFEATURE_BIT_REG_NegativeLogFix */
        0x1, /* gcFEATURE_BIT_REG_ResolveOffset */
        0x1, /* gcFEATURE_BIT_REG_OkToGateAxiClock */
        0x1, /* gcFEATURE_BIT_REG_MMU */
        0x1, /* gcFEATURE_BIT_REG_WideLine */
        0x1, /* gcFEATURE_BIT_REG_BugFixes6 */
        0x1, /* gcFEATURE_BIT_REG_FcFlushStall */
        0x1, /* gcFEATURE_BIT_REG_LineLoop */
        0x1, /* gcFEATURE_BIT_REG_LogicOp */
        0x1, /* gcFEATURE_BIT_REG_SeamlessCubeMap */
        0x1, /* gcFEATURE_BIT_REG_SuperTiledTexture */
        0x1, /* gcFEATURE_BIT_REG_LinearPE */
        0x1, /* gcFEATURE_BIT_REG_RectPrimitive */
        0x0, /* gcFEATURE_BIT_REG_Composition */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisableCountWidth */
        0x1, /* gcFEATURE_BIT_REG_PESwizzle */
        0x1, /* gcFEATURE_BIT_REG_EndEvent */
        0x1, /* gcFEATURE_BIT_REG_S1S8 */
        0x1, /* gcFEATURE_BIT_REG_Halti1 */
        0x0, /* gcFEATURE_BIT_REG_RGB888 */
        0x1, /* gcFEATURE_BIT_REG_TX_YUVAssembler */
        0x1, /* gcFEATURE_BIT_REG_DynamicFrequencyScaling */
        0x0, /* gcFEATURE_BIT_REG_TXFilter */
        0x1, /* gcFEATURE_BIT_REG_FullDirectFB */
        0x0, /* gcFEATURE_BIT_REG_OnePass2DFilter */
        0x1, /* gcFEATURE_BIT_REG_ThreadWalkerInPS */
        0x1, /* gcFEATURE_BIT_REG_TileFiller */
        0x1, /* gcFEATURE_BIT_REG_YUVStandard */
        0x0, /* gcFEATURE_BIT_REG_MultiSourceBlt */
        0x0, /* gcFEATURE_BIT_REG_YUVConversion */
        0x1, /* gcFEATURE_BIT_REG_FlushFixed2D */
        0x1, /* gcFEATURE_BIT_REG_Interleaver */
        0x1, /* gcFEATURE_BIT_REG_MixedStreams */
        0x0, /* gcFEATURE_BIT_REG_L2CacheFor2D420 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes7 */
        0x0, /* gcFEATURE_BIT_REG_NoIndexPattern */
        0x1, /* gcFEATURE_BIT_REG_TextureTileStatus */
        0x1, /* gcFEATURE_BIT_REG_DecompressZ16 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes8 */
        0x1, /* gcFEATURE_BIT_REG_DERotationStallFix */
        0x0, /* gcFEATURE_BIT_REG_OclOnly */
        0x1, /* gcFEATURE_BIT_REG_NewFeatures0 */
        0x1, /* gcFEATURE_BIT_REG_InstructionCache */
        0x0, /* gcFEATURE_BIT_REG_GeometryShader */
        0x1, /* gcFEATURE_BIT_REG_TexCompressionSupertiled */
        0x1, /* gcFEATURE_BIT_REG_Generics */
        0x1, /* gcFEATURE_BIT_REG_BugFixes9 */
        0x0, /* gcFEATURE_BIT_REG_FastMSAA */
        0x0, /* gcFEATURE_BIT_REG_WClip */
        0x1, /* gcFEATURE_BIT_REG_BugFixes10 */
        0x1, /* gcFEATURE_BIT_REG_UnifiedSamplers */
        0x1, /* gcFEATURE_BIT_REG_BugFixes11 */
        0x1, /* gcFEATURE_BIT_REG_PerformanceCounters */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes12 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes13 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_ACE */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes14 */
        0x0, /* gcFEATURE_BIT_REG_PowerOptimizations0 */
        0x1, /* gcFEATURE_BIT_REG_NewHZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes15 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements1 */
        0x0, /* gcFEATURE_BIT_REG_DENoGamma */
        0x0, /* gcFEATURE_BIT_REG_PAEnhancements2 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_HIEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes16 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements4 */
        0x0, /* gcFEATURE_BIT_REG_PEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_MCEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_Halti2 */
        0x0, /* gcFEATURE_BIT_REG_DEMirrorRotate */
        0x1, /* gcFEATURE_BIT_REG_SmallMSAA */
        0x1, /* gcFEATURE_BIT_REG_BugFixes17 */
        0x0, /* gcFEATURE_BIT_REG_Rasterizer2 */
        0x0, /* gcFEATURE_BIT_REG_DualPipeOPF */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2 */
        0x0, /* gcFEATURE_BIT_REG_CSCV2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes18 */
        0x0, /* gcFEATURE_BIT_REG_Compression2D */
        0x0, /* gcFEATURE_BIT_REG_Probe */
        0x1, /* gcFEATURE_BIT_REG_MediumPrecision */
        0x0, /* gcFEATURE_BIT_REG_DESupertile */
        0x1, /* gcFEATURE_BIT_REG_BugFixes19 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements6 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements7 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes20 */
        0x0, /* gcFEATURE_BIT_REG_DEAddress40 */
        0x0, /* gcFEATURE_BIT_REG_MiniMMUFix */
        0x1, /* gcFEATURE_BIT_REG_EEZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes21 */
        0x0, /* gcFEATURE_BIT_REG_ExtraVgCaps */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV15 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes22 */
        0x1, /* gcFEATURE_BIT_REG_Halti3 */
        0x0, /* gcFEATURE_BIT_REG_TessellationShaders */
        0x0, /* gcFEATURE_BIT_REG_OPF9Tap */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2StrQuad */
        0x0, /* gcFEATURE_BIT_REG_SeperateSRCAndDstCache */
        0x1, /* gcFEATURE_BIT_REG_Halti4 */
        0x1, /* gcFEATURE_BIT_REG_RAWriteDepth */
        0x0, /* gcFEATURE_BIT_REG_AndroidOnly */
        0x1, /* gcFEATURE_BIT_REG_HasChipProductReg */
        0x0, /* gcFEATURE_BIT_REG_TXSupportDEC */
        0x1, /* gcFEATURE_BIT_REG_S8MSAACompression */
        0x1, /* gcFEATURE_BIT_REG_BugFixesIn544 */
        0x0, /* gcFEATURE_BIT_REG_L2CacheRemove */
        0x1, /* gcFEATURE_BIT_REG_FEAllowRndVtxCnt */
        0x0, /* gcFEATURE_BIT_REG_CubeMapFL28 */
        0x1, /* gcFEATURE_BIT_REG_TX6bitFrac */
        0x1, /* gcFEATURE_BIT_REG_FEAllowStallPrefetchEng */
        0x0, /* gcFEATURE_BIT_REG_ThirdPartyCompression */
        0x1, /* gcFEATURE_BIT_REG_RSS8 */
        0x1, /* gcFEATURE_BIT_REG_MSAACoherencyCheck */
        0x1, /* gcFEATURE_BIT_REG_Halti5 */
        0x1, /* gcFEATURE_BIT_REG_Evis */
        0x0, /* gcFEATURE_BIT_REG_BltEngine */
        0x0, /* gcFEATURE_BIT_REG_BugFixes23 */
        0x0, /* gcFEATURE_BIT_REG_BugFixes24 */
        0x0, /* gcFEATURE_BIT_REG_DEC */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12 */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12_10BIT */
        0x0, /* gcFEATURE_BIT_REG_DisableVIP */
        0x0, /* gcFEATURE_BIT_RenderTarget8 */
        0x0, /* gcFEATURE_BIT_TxLodFlowCorrection */
        0x0, /* gcFEATURE_BIT_FaceLod */
        0x0, /* gcFEATURE_BIT_MultiCoreSemaphoreStallV2 */
        0x1, /* gcFEATURE_BIT_VMSAA */
        0x0, /* gcFEATURE_BIT_ChipEnableLink */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_1_5_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_BILINEAR_FILTER */
        0x1, /* gcFEATURE_BIT_RA_HZEZ_CLOCK_CONTROL */
        0x1, /* gcFEATURE_BIT_CACHE128B256BPERLINE */
        0x1, /* gcFEATURE_BIT_V4Compression */
        0x0, /* gcFEATURE_BIT_PE2D_MAJOR_SUPER_TILE */
        0x1, /* gcFEATURE_BIT_PE_32BPC_COLORMASK_FIX */
        0x1, /* gcFEATURE_BIT_ALPHA_BLENDING_OPT */
        0x1, /* gcFEATURE_BIT_NEW_GPIPE */
        0x0, /* gcFEATURE_BIT_PIPELINE_32_ATTRIBUTES */
        0x0, /* gcFEATURE_BIT_MSAA_SHADING */
        0x0, /* gcFEATURE_BIT_NO_ANISTRO_FILTER */
        0x1, /* gcFEATURE_BIT_NO_ASTC */
        0x0, /* gcFEATURE_BIT_NO_DXT */
        0x0, /* gcFEATURE_BIT_HWTFB */
        0x1, /* gcFEATURE_BIT_RA_DEPTH_WRITE_MSAA1X_FIX */
        0x1, /* gcFEATURE_BIT_EZHZ_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_FIX */
        0x1, /* gcFEATURE_BIT_SH_HALFDEPENDENCY_FIX */
        0x1, /* gcFEATURE_BIT_USC_MCFILL_FIX */
        0x1, /* gcFEATURE_BIT_TPG_TCPERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_MDFIFO_OVERFLOW_FIX */
        0x1, /* gcFEATURE_BIT_SH_TEXLD_BARRIER_IN_CS_FIX */
        0x1, /* gcFEATURE_BIT_RS_NEW_BASEADDR */
        0x1, /* gcFEATURE_BIT_PE_8bpp_DUALPIPE_FIX */
        0x0, /* gcFEATURE_BIT_SH_ADVANCED_INSTR */
        0x1, /* gcFEATURE_BIT_SH_FLAT_INTERPOLATION_DUAL16_FIX */
        0x1, /* gcFEATURE_BIT_USC_CONTINUOUS_FLUS_FIX */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_V4 */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_ALPHA_KILL */
        0x1, /* gcFEATURE_BIT_PE_NO_ALPHA_TEST */
        0x0, /* gcFEATURE_BIT_TX_LOD_NEAREST_SELECT */
        0x1, /* gcFEATURE_BIT_SH_FIX_LDEXP */
        0x1, /* gcFEATURE_BIT_SUPPORT_MOVAI */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_MAXPAGES_FIX */
        0x1, /* gcFEATURE_BIT_PE_RGBA16I_FIX */
        0x1, /* gcFEATURE_BIT_BLT_8bpp_256TILE_FC_FIX */
        0x1, /* gcFEATURE_BIT_PE_64bit_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_USC_FULL_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_TX_YUV_ASSEMBLER_10BIT */
        0x1, /* gcFEATURE_BIT_FE_32bit_INDEX_FIX */
        0x1, /* gcFEATURE_BIT_BLT_64bpp_MASKED_CLEAR_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY */
        0x1, /* gcFEATURE_BIT_ROBUSTNESS */
        0x1, /* gcFEATURE_BIT_USC_ATOMIC_FIX */
        0x1, /* gcFEATURE_BIT_SH_PSO_MSAA1x_FIX */
        0x1, /* gcFEATURE_BIT_USC_VX_PERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_GOS_ADDR_FIX */
        0x1, /* gcFEATURE_BIT_TX_8bit_UVFrac */
        0x1, /* gcFEATURE_BIT_TX_DESC_CACHE_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_RSBLT_MSAA_DECOMPRESSION */
        0x0, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE */
        0x1, /* gcFEATURE_BIT_DRAWID */
        0x1, /* gcFEATURE_BIT_PSIO_SAMPLEMASK_IN_R0ZW_FIX */
        0x1, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE_V2 */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG */
        0x0, /* gcFEATURE_BIT_SNAPPAGE_CMD */
        0x1, /* gcFEATURE_BIT_SH_NO_INDEX_CONST_ON_A0 */
        0x1, /* gcFEATURE_BIT_SH_NO_ONECONST_LIMIT */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_ON_TEMP */
        0x1, /* gcFEATURE_BIT_COMPUTE_ONLY */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_CLAMP */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_ALLOC_COUNT_FIX */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_PREFETCH */
        0x0, /* gcFEATURE_BIT_PE2D_SEPARATE_CACHE */
        0x1, /* gcFEATURE_BIT_PE_MSAA_OQ_FIX */
        0x1, /* gcFEATURE_BIT_PSIO_MSAA_CL_FIX */
        0x1, /* gcFEATURE_BIT_USC_DEFER_FILL_FIX */
        0x1, /* gcFEATURE_BIT_SH_CLOCK_GATE_FIX */
        0x0, /* gcFEATURE_BIT_FE_NEED_DUMMYDRAW */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_OUTPUT */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_10BIT */
        0x0, /* gcFEATURE_BIT_MULTI_CLUSTER */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK */
        0x0, /* gcFEATURE_BIT_SH_DUAL16_SAMPLEMASK_ZW */
        0x0, /* gcFEATURE_BIT_TPG_TRIVIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TX_ASTC_MULTISLICE_FIX */
        0x0, /* gcFEATURE_BIT_FE_ROBUST_FIX */
        0x0, /* gcFEATURE_BIT_SH_GPIPE_ACCESS_FULLTEMPS */
        0x0, /* gcFEATURE_BIT_PSIO_INTERLOCK */
        0x1, /* gcFEATURE_BIT_PA_WIDELINE_FIX */
        0x0, /* gcFEATURE_BIT_WIDELINE_HELPER_FIX */
        0x0, /* gcFEATURE_BIT_G2D_3rd_PARTY_COMPRESSION_1_1 */
        0x0, /* gcFEATURE_BIT_TX_FLUSH_L1CACHE */
        0x1, /* gcFEATURE_BIT_PE_DITHER_FIX2 */
        0x0, /* gcFEATURE_BIT_SH_TEXLD_U_FIX */
        0x0, /* gcFEATURE_BIT_MC_FCCACHE_BYTEMASK */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK_FIX */
        0x0, /* gcFEATURE_BIT_PE_ADVANCE_BLEND_PART0 */
        0x0, /* gcFEATURE_BIT_FE_PATCHLIST_FETCH_FIX */
        0x1, /* gcFEATURE_BIT_RA_CG_FIX */
        0x0, /* gcFEATURE_BIT_DEC400 */
        0x0, /* gcFEATURE_BIT_LS_SUPPORT_PERCOMP_DEPENDENCY */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG2 */
        0x0, /* gcFEATURE_BIT_PE_VMSAA_COVERAGE_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY_AHB */
        0x0, /* gcFEATURE_BIT_MULTICORE_SEMAPHORESTALL_V3 */
        0x0, /* gcFEATURE_BIT_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_SH_CMPLX */
        0x0, /* gcFEATURE_BIT_SH_IDIV0_SWZL_EHS */
        0x0, /* gcFEATURE_BIT_TX_LERP_LESS_BIT */
        0x0, /* gcFEATURE_BIT_SH_GM_ENDIAN */
        0x0, /* gcFEATURE_BIT_SH_GM_USC_UNALLOC */
        0x0, /* gcFEATURE_BIT_SH_END_OF_BB */
        0x0, /* gcFEATURE_BIT_TX_BORDER_CLAMP_FIX */
        0x0, /* gcFEATURE_BIT_SH_IMG_LD_LASTPIXEL_FIX */
        0x0, /* gcFEATURE_BIT_ASYNC_BLT */
        0x0, /* gcFEATURE_BIT_ASYNC_FE_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_PSCS_THROTTLE */
        0x0, /* gcFEATURE_BIT_SEPARATE_LS */
        0x0, /* gcFEATURE_BIT_WIDELINE_TRIANGLE_EMU */
        0x0, /* gcFEATURE_BIT_FENCE_32BIT */
        0x0, /* gcFEATURE_BIT_FENCE_64BIT */
        0x0, /* gcFEATURE_BIT_PE_DEPTH_ONLY_OQFIX */
        0x0, /* gcFEATURE_BIT_TX_SEAMLESS_CUBE */
        0x0, /* gcFEATURE_BIT_TX_SNORM_SUPPORT */
        0x0, /* gcFEATURE_BIT_SH_SCATTER_GATHER */
        0x0, /* gcFEATURE_BIT_HWMANAGED_LS */
        0x0, /* gcFEATURE_BIT_SH_IMAGE_ENABLE_FIX */
        0x1, /* gcFEATURE_BIT_MSAA_FRAGMENT_OPERATION */
        0x0, /* gcFEATURE_BIT_PE_TILE_CACHE_FLUSH_FIX */
        0x0, /* gcFEATURE_BIT_BLT_YUV_OUTPUT */
        0x1, /* gcFEATURE_BIT_SH_IO_CG_FIX */
        0x0, /* gcFEATURE_BIT_PE_SWIZZLE */
        0x0, /* gcFEATURE_BIT_SH_ROBUSTNESS_FIX */
        0x0, /* gcFEATURE_BIT_USC_ATOMIC_FIX2 */
        0x0, /* gcFEATURE_BIT_PE_A8B8G8R8 */
        0x0, /* gcFEATURE_BIT_MULTIVIEW_RENDER */
        0x0, /* gcFEATURE_BIT_FE_DRAW_DIRECT */
        0x0, /* gcFEATURE_BIT_TX_VKBORDER_MODE */
        0x0, /* gcFEATURE_BIT_TX_UNNORMALIZED_COORD */
        0x0, /* gcFEATURE_BIT_PA_LINECLIP_FIX */
        0x0, /* gcFEATURE_BIT_TX_8bit_UVFrac_ROUNDING_FIX */
        0x0, /* gcFEATURE_BIT_MP_ARCH */
        0x0, /* gcFEATURE_BIT_TX_NO_FIXED_FILTER */
        0x0, /* gcFEATURE_BIT_SHARE_Z */
        0x0, /* gcFEATURE_BIT_DE_2D_FAST_CLEAR */
        0x0, /* gcFEATURE_BIT_TX_CLEAR_PENDING_FIX */
        0x0, /* gcFEATURE_BIT_NO_HI1_L2 */
        0x0, /* gcFEATURE_BIT_USC_EVICT_CTRL_FIFO_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_FORMAT_10BIT_CROSS_4K */
        0x0, /* gcFEATURE_BIT_FORMAT_P010LSB_I010 */
        0x0, /* gcFEATURE_BIT_ENDIAN_CONTROL */
        0x0, /* gcFEATURE_BIT_G2D_DEC400EX */
        0x0, /* gcFEATURE_BIT_SH_VX2_FLOATING_MAD_FIX */
        0x0, /* gcFEATURE_BIT_TS_FC_VULKAN_SUPPORT */
        0x0, /* gcFEATURE_BIT_MSAA_FLOAT_64BIT */
        0x0, /* gcFEATURE_BIT_VG_TS_CULLING */
        0x0, /* gcFEATURE_BIT_VG_FP25 */
        0x0, /* gcFEATURE_BIT_VG_AYUV_INPUT_OUTPUT */
        0x0, /* gcFEATURE_BIT_VG_DOUBLE_IMAGE */
        0x0, /* gcFEATURE_BIT_VG_RECTANGLE_STRIPE_MODE */
        0x0, /* gcFEATURE_BIT_VG_MMU */
        0x0, /* gcFEATURE_BIT_VG_IM_FILTER */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PLANAR */
        0x0, /* gcFEATURE_BIT_VG_PE_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_COLOR_PRECISION_8_BIT */
        0x0, /* gcFEATURE_BIT_VG_RESOLVE_ENGINE */
        0x0, /* gcFEATURE_BIT_VG_PE_COLOR_KEY */
        0x0, /* gcFEATURE_BIT_VG_IM_INDEX_FORMAT */
        0x0, /* gcFEATURE_BIT_VG_RESOLUTION_8K */
        0x0, /* gcFEATURE_BIT_VG_IMAGE_16K */
        0x0, /* gcFEATURE_BIT_VG_FORMAT_ARGB2222 */
        0x0, /* gcFEATURE_BIT_G2D_DEC400 */
        0x0, /* gcFEATURE_BIT_DC_OVERLAY_SCALING */
        0x0, /* gcFEATURE_BIT_DC_SOURCE_ROTATION */
        0x0, /* gcFEATURE_BIT_DC_TILED */
        0x0, /* gcFEATURE_BIT_DC_YUV_L1 */
        0x0, /* gcFEATURE_BIT_DC_D30_OUTPUT */
        0x0, /* gcFEATURE_BIT_DC_MMU */
        0x0, /* gcFEATURE_BIT_DC_COMPRESSION */
        0x0, /* gcFEATURE_BIT_DC_QOS */
        0x0, /* gcFEATURE_BIT_AI_GPU */
        0x0, /* gcFEATURE_BIT_EVIS_NO_ABSDIFF */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BITREPLACE */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BOXFILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_CORDIAC */
        0x0, /* gcFEATURE_BIT_EVIS_NO_DP32 */
        0x0, /* gcFEATURE_BIT_EVIS_NO_FILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_IADD */
        0x0, /* gcFEATURE_BIT_EVIS_NO_SELECTADD */
        0x0, /* gcFEATURE_BIT_EVIS_LERP_7OUTPUT */
        0x0, /* gcFEATURE_BIT_EVIS_ACCSQ_8OUTPUT */
        0x1, /* gcFEATURE_BIT_EVIS_VX2 */
        0x1, /* gcFEATURE_BIT_NN_FLOAT */
        0x1, /* gcFEATURE_BIT_TP_ENGINE */
        0x1, /* gcFEATURE_BIT_VIP_V7 */
        0x0, /* gcFEATURE_BIT_MCFE */
        0x0, /* gcFEATURE_BIT_NN_INTERLEVE8 */
        0x1, /* gcFEATURE_BIT_TP_REORDER */
        0x1, /* gcFEATURE_BIT_TP_LRN */
        0x1, /* gcFEATURE_BIT_TP_MAX_POOLING_STRIDE1 */
        0x0, /* gcFEATURE_BIT_NN_FP16_ALU */
        0x1, /* gcFEATURE_BIT_NN_INT16_ALU */
        0x1, /* gcFEATURE_BIT_TP_ROI_POOLING */
        0x1, /* gcFEATURE_BIT_NN_ZDP3 */
        0x0, /* gcFEATURE_BIT_NN_ZDP6 */
        0x0, /* gcFEATURE_BIT_NN_XYDP9 */
        0x1, /* gcFEATURE_BIT_NN_INT8_SCALE */
        0x1, /* gcFEATURE_BIT_NN_POWER_ISOLATION */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE1 */
        0x1, /* gcFEATURE_BIT_TF_QUANTIZATION */
        0x0, /* gcFEATURE_BIT_TP_SIMPLE_INT16 */
        0x1, /* gcFEATURE_BIT_TP_REAL_INT16 */
        0x0, /* gcFEATURE_BIT_TP_BFLOAT16 */
        0x1, /* gcFEATURE_BIT_NN_FIRST_PIXEL_POOLING */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE2 */
        0x1, /* gcFEATURE_BIT_NN_STRIDE_SUPPORT */
        0x1, /* gcFEATURE_BIT_NN_XYDP6 */
        0x1, /* gcFEATURE_BIT_TP_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONV1x1_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_CACHELINE_MODE_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_PER3DTILE_BUBBLE_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONVOUT_FIFO_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_SWTILING_PHASE3 */
        0x0, /* gcFEATURE_BIT_USC_STAY_LRU */
        0x0, /* gcFEATURE_BIT_NN_NONZERO_MIRROR_BORDER */
        0x0, /* gcFEATURE_BIT_NN_COEF_DECOMPRESS_PERF2X */
        0x0, /* gcFEATURE_BIT_INPUT_4BIT */
        0x0, /* gcFEATURE_BIT_COEF_COMPRESSION_ENHANCEMENT */
        0x1, /* gcFEATURE_BIT_NN_ZXDP3_KERNEL_READ_CONFLICT_FIX */
        0x0, /* gcFEATURE_BIT_NN_ZDP3_NO_COMPRESS_FIX */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_PERF_FIX */
        0x1, /* gcFEATURE_BIT_OCB_COUNTER */
        0x0, /* gcFEATURE_BIT_NN_XYDP0 */
        0x0, /* gcFEATURE_BIT_ZRL_7BIT */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_MERGE_FIX */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_SCALER */
        0x0, /* gcFEATURE_BIT_SCALER_4K */
        0x0, /* gcFEATURE_BIT_NN_REQ_SLOWARBITRATION_FIX */
        0x0, /* gcFEATURE_BIT_IMAGE_PARTIAL_CACHE */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNELHEAD_FIX */
        0x1, /* gcFEATURE_BIT_NN_SINGLEPORT_ACCUMBUFFER */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_ZRL_8BIT */
        0x0, /* gcFEATURE_BIT_NN_DEPTHWISE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_WRITE_WITHOUT_USC */
        0x0, /* gcFEATURE_BIT_NN_ZDP_INIMAGE_SIZE_FIX */
        0x1, /* gcFEATURE_BIT_HI_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_INCORRECT_WR_REQ_TO_USC_BETWEEN_REORDER_AND_NORMAL_LAYER_FIX */
        0x0, /* gcFEATURE_BIT_TP_COEF_COMPRESSION_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_VIP_DEC400 */
        0x0, /* gcFEATURE_BIT_IMAGE_NOT_PACKED_IN_SRAM_FIX */
        0x0, /* gcFEATURE_BIT_IDLE_BEFORE_FLUSH_COMPLETE_FIX */
        0x1, /* gcFEATURE_BIT_NO_FLUSH_USC_FIX */
        0x1, /* gcFEATURE_BIT_COEF_DELTA_CORD_OVERFLOW_ZRL_8BIT_FIX */
        0x0, /* gcFEATURE_BIT_XY_OFFSET_LIMITATION_FIX */
        0x0, /* gcFEATURE_BIT_USC_INVALIDATE_CACHE_LINE_FIX */
        0x0, /* gcFEATURE_BIT_LOW_EFFICIENCY_OF_ID_WRITE_IMGBUF_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_PER_CORE_LESS_THAN_THIRD_COEF_BUFF_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_USC_BOTTLENECK_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_SIZE_WASTE_IN_PARTIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNEL_INTERLEAVE_FIX */
        0x0, /* gcFEATURE_BIT_TP_REORDER_LAYER_SUSPEND_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_VIP_SRAM_READ_BW_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_IMG_POP_PIPELINE_PAUSE_FIX */
        0x0, /* gcFEATURE_BIT_DR_JD_DIFF_CONDITION_FOR_CACHELINE_MODE_PRE_FIX */
        0x1, /* gcFEATURE_BIT_OUTIMAGE_X_BITWIDTH_LIMIT_FOR_NN_TRANSPOSE_FIX */
        0x1, /* gcFEATURE_BIT_SMALL_BATCH_FLOPS_RESET_FIX */
        0x0, /* gcFEATURE_BIT_SMALL_BATCH_DISBLE_FIX */
        0x1, /* gcFEATURE_BIT_NEGATIVE_POST_SHIFT_FIX */
        0x0, /* gcFEATURE_BIT_NN_COMMAND_KERNEL_REQUEST_CONFICT_FIX */
        0x1, /* gcFEATURE_BIT_OCB_REMAP_PHYSICAL_ADDRESS */
        0x0, /* gcFEATURE_BIT_NN_NO_Z_LOCATION_OFFSET */
        0x0, /* gcFEATURE_BIT_NN_LEAKY_RELU */
        0x0, /* gcFEATURE_BIT_NN_PRELU */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT_ASYM */
        0x0, /* gcFEATURE_BIT_NN_NATIVE_STRIDE_TWO */
        0x0, /* gcFEATURE_BIT_NN_TENSOR_ADD */
        0x0, /* gcFEATURE_BIT_NN_FLOAT_POST_MULT */
        0x0, /* gcFEATURE_BIT_NN_SLICE_PADDING_TO_64BYTE_ALIGN */
        0x0, /* gcFEATURE_BIT_NN_DW_1x1_CONV_MERGE */
        0x0, /* gcFEATURE_BIT_NN_SLOW_OUTPUT */
        0x1, /* gcFEATURE_BIT_NO_NARROW_POST_PROCESS_PIPE */
        0x0, /* gcFEATURE_BIT_TP_NN_PROBE */
        0x0, /* gcFEATURE_BIT_TP_23BITS_POST_MULTIPLIER */
        0x0, /* gcFEATURE_BIT_NN_TRANSPOSE */
        0x0, /* gcFEATURE_BIT_EVIS2_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_USC_ASYNC_CP_RTN_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_DDR_BURST_LEN_256B */
        0x1, /* gcFEATURE_BIT_IMG_CAHCE_MODE_MUST_0_IN_IMG_DIRECT_MODE_FIX */
        0x0, /* gcFEATURE_BIT_USE_SINGLE_PORT_VIPSRAM */
        0x0, /* gcFEATURE_BIT_NN_ASYMMETRIC_INT8 */
        0x1, /* gcFEATURE_BIT_DEPTHWISE_NEIGHBOR_IMG_DATA_TRANSFER_NOT_EFFICIENT_FIX */
        0x0, /* gcFEATURE_BIT_PRELU_LEAKLY_RELU_CLAMP */
        0x0, /* gcFEATURE_BIT_TP_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_SMALL_BATCH_PHASE2 */
        0x0, /* gcFEATURE_BIT_TILE_ACCESS_CAPABILITY */
        0x0, /* gcFEATURE_BIT_FAST_DP3_PREPROCESSOR */
        0x0, /* gcFEATURE_BIT_NN_COMPRESSION_BYPASSS */
        0x0, /* gcFEATURE_BIT_BFLOAT_KERNEL_COMPRESSION_ZERO_SKIP_FIX */
        0x0, /* gcFEATURE_BIT_TP_3_USC */
        0x0, /* gcFEATURE_BIT_TP_KERNEL_1BYTE_ALGIN */
        0x0, /* gcFEATURE_BIT_TPLITE_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_PREPROCESS_IMG_BUF_640BYTE_LIMIT */
        0x0, /* gcFEATURE_BIT_V8_ACCUMLATION_READ_OUT_HAS_BUBBLES_PERF_FIX */
        0x0, /* gcFEATURE_BIT_V8_SINGLE_PORT_ACCUMULATION_BUFFER_RW_CONFICT_ZERO_SKIP_PERF_FIX */
        0x0, /* gcFEATURE_BIT_BURST_COLLECT_DUMMY_DATA_WASTE_CYCLES_FIX */
        0x0, /* gcFEATURE_BIT_INIMG_NOT_64BYTE_ALIGN_CACHELINE_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TP_ACCESS_VIPSRAM_OT_IS_ONE_FIX */
        0x1, /* gcFEATURE_BIT_VIP_HW_FINAL_RELEASE */
    },
    /* vip9000nano-si */
    {
        0x9000, /* ChipID */
        0x8101, /* ChipRevision */
        0x5090009, /* ProductID */
        0x4000000, /* EcoID */
        0xb9, /* CustomerID */
        0x0, /* PatchVersion */
        "", /* ProductName */
        0x0, /* FormalRelease */
        0x40, /* gcFEATURE_VALUE_TempRegisters */
        0x100, /* gcFEATURE_VALUE_ThreadCount */
        0x1, /* gcFEATURE_VALUE_NumShaderCores */
        0x200, /* gcFEATURE_VALUE_InstructionCount */
        0x140, /* gcFEATURE_VALUE_NumberOfConstants */
        0x1, /* gcFEATURE_VALUE_CoreCount */
        0x10, /* gcFEATURE_VALUE_LocalStorageSize */
        0x10, /* gcFEATURE_VALUE_L1CacheSize */
        0x200, /* gcFEATURE_VALUE_InstructionMemorySize */
        0x14, /* gcFEATURE_VALUE_ShaderPCLength */
        0x10, /* gcFEATURE_VALUE_USC_MAX_PAGES */
        0x1, /* gcFEATURE_VALUE_NumPixelPipes */
        0x1, /* gcFEATURE_VALUE_USC_CACHE_CONTROLLERS */
        0x2, /* gcFEATURE_VALUE_USC_BANKS */
        0x8, /* gcFEATURE_VALUE_Streams */
        0x10, /* gcFEATURE_VALUE_VaryingCount */
        0x400, /* gcFEATURE_VALUE_VertexOutputBufferSize */
        0x0, /* gcFEATURE_VALUE_BufferSize */
        0x10, /* gcFEATURE_VALUE_VertexCacheSize */
        0x0, /* gcFEATURE_VALUE_NumResolvePipes */
        0x100, /* gcFEATURE_VALUE_RESULT_WINDOW_MAX_SIZE */
        0x0, /* gcFEATURE_VALUE_ClusterAliveMask */
        0x40, /* gcFEATURE_VALUE_NNMadPerCore */
        0x4, /* gcFEATURE_VALUE_NNCoreCount */
        0x4, /* gcFEATURE_VALUE_NNCoreCount_INT8 */
        0x4, /* gcFEATURE_VALUE_NNCoreCount_INT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_FLOAT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_BFLOAT */
        0x9, /* gcFEATURE_VALUE_NNInputBufferDepth */
        0x20, /* gcFEATURE_VALUE_NNAccumBufferDepth */
        0x400, /* gcFEATURE_VALUE_TPEngine_PwlLUTCount */
        0x10, /* gcFEATURE_VALUE_TPEngine_PwlLUTSize */
        0x80000, /* gcFEATURE_VALUE_VIP_SRAM_SIZE */
        0x1, /* gcFEATURE_VALUE_TPEngine_CoreCount */
        0x0, /* gcFEATURE_VALUE_AXI_SRAM_SIZE */
        0x5, /* gcFEATURE_VALUE_NN_INIMAGE_OFFSET_BITS */
        0x200, /* gcFEATURE_VALUE_TP_REORDER_INIMAGE_SIZE */
        0x7, /* gcFEATURE_VALUE_TPLite_CoreCount */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_X */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_Y */
        0x1, /* gcFEATURE_VALUE_NNFP16_ZDP */
        0x10, /* gcFEATURE_VALUE_NN_LANES_PER_OUT_CYCLE */
        0x40, /* gcFEATURE_VALUE_MAX_OT_NUMBER */
        0x40, /* gcFEATURE_VALUE_PHYSICAL_VIP_SRAM_WIDTH_IN_BYTE */
        0x10, /* gcFEATURE_VALUE_EQUIVALENT_VIP_SRAM_WIDTH_INBYTE */
        0x8, /* gcFEATURE_VALUE_TP_ZRL_BITS */
        0x80, /* gcFEATURE_VALUE_LATENCY_HIDING_AT_FULL_AXI_BW */
        0x10, /* gcFEATURE_VALUE_AXI_BUS_WIDTH */
        0xf, /* gcFEATURE_VALUE_NN_KERNEL_X_SIZE */
        0xf, /* gcFEATURE_VALUE_NN_KERNEL_Y_SIZE */
        0xfffff, /* gcFEATURE_VALUE_NN_KERNEL_Z_SIZE */
        0x1f, /* gcFEATURE_VALUE_NN_X_OFFSET */
        0x1f, /* gcFEATURE_VALUE_NN_Y_OFFSET */
        0x100, /* gcFEATURE_VALUE_DDR_KERNEL_BURST_SIZE */
        0x0, /* gcFEATURE_BIT_REG_FastClear */
        0x0, /* gcFEATURE_BIT_REG_SpecialAntiAliasing */
        0x1, /* gcFEATURE_BIT_REG_Pipe3D */
        0x1, /* gcFEATURE_BIT_REG_DXTTextureCompression */
        0x0, /* gcFEATURE_BIT_REG_DebugMode */
        0x1, /* gcFEATURE_BIT_REG_ZCompression */
        0x0, /* gcFEATURE_BIT_REG_YUV420Filter */
        0x1, /* gcFEATURE_BIT_REG_MSAA */
        0x0, /* gcFEATURE_BIT_REG_DC */
        0x0, /* gcFEATURE_BIT_REG_Pipe2D */
        0x1, /* gcFEATURE_BIT_REG_ETC1TextureCompression */
        0x1, /* gcFEATURE_BIT_REG_FastScaler */
        0x1, /* gcFEATURE_BIT_REG_HighDynamicRange */
        0x1, /* gcFEATURE_BIT_REG_YUV420Tiler */
        0x1, /* gcFEATURE_BIT_REG_ModuleCG */
        0x0, /* gcFEATURE_BIT_REG_MinArea */
        0x0, /* gcFEATURE_BIT_REG_NoEZ */
        0x0, /* gcFEATURE_BIT_REG_No422Texture */
        0x0, /* gcFEATURE_BIT_REG_BufferInterleaving */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite2D */
        0x0, /* gcFEATURE_BIT_REG_NoScaler */
        0x1, /* gcFEATURE_BIT_REG_YUY2Averaging */
        0x0, /* gcFEATURE_BIT_REG_HalfPECache */
        0x0, /* gcFEATURE_BIT_REG_HalfTXCache */
        0x0, /* gcFEATURE_BIT_REG_YUY2RenderTarget */
        0x0, /* gcFEATURE_BIT_REG_Mem32BitSupport */
        0x0, /* gcFEATURE_BIT_REG_PipeVG */
        0x0, /* gcFEATURE_BIT_REG_VGTS */
        0x0, /* gcFEATURE_BIT_REG_FE20 */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite3D */
        0x1, /* gcFEATURE_BIT_REG_RsYuvTarget */
        0x1, /* gcFEATURE_BIT_REG_FE20BitIndex */
        0x1, /* gcFEATURE_BIT_REG_FlipY */
        0x1, /* gcFEATURE_BIT_REG_DualReturnBus */
        0x1, /* gcFEATURE_BIT_REG_EndiannessConfig */
        0x1, /* gcFEATURE_BIT_REG_Texture8K */
        0x1, /* gcFEATURE_BIT_REG_CorrectTextureConverter */
        0x1, /* gcFEATURE_BIT_REG_SpecialMsaaLod */
        0x1, /* gcFEATURE_BIT_REG_FastClearFlush */
        0x1, /* gcFEATURE_BIT_REG_2DPE20 */
        0x0, /* gcFEATURE_BIT_REG_CorrectAutoDisable */
        0x1, /* gcFEATURE_BIT_REG_Render8K */
        0x1, /* gcFEATURE_BIT_REG_TileStatus2Bits */
        0x1, /* gcFEATURE_BIT_REG_SeparateTileStatusWhenInterleaved */
        0x1, /* gcFEATURE_BIT_REG_SuperTiled32x32 */
        0x0, /* gcFEATURE_BIT_REG_VG20 */
        0x0, /* gcFEATURE_BIT_REG_TSExtendedCommands */
        0x1, /* gcFEATURE_BIT_REG_CompressionFifoFixed */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions0 */
        0x0, /* gcFEATURE_BIT_REG_VGFilter */
        0x0, /* gcFEATURE_BIT_REG_VG21 */
        0x1, /* gcFEATURE_BIT_REG_ShaderGetsW */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions1 */
        0x1, /* gcFEATURE_BIT_REG_DefaultReg0 */
        0x1, /* gcFEATURE_BIT_REG_MC20 */
        0x0, /* gcFEATURE_BIT_REG_ShaderMSAASideband */
        0x1, /* gcFEATURE_BIT_REG_BugFixes0 */
        0x0, /* gcFEATURE_BIT_REG_VAA */
        0x0, /* gcFEATURE_BIT_REG_BypassInMSAA */
        0x0, /* gcFEATURE_BIT_REG_HierarchicalZ */
        0x0, /* gcFEATURE_BIT_REG_NewTexture */
        0x0, /* gcFEATURE_BIT_REG_A8TargetSupport */
        0x1, /* gcFEATURE_BIT_REG_CorrectStencil */
        0x1, /* gcFEATURE_BIT_REG_EnhanceVR */
        0x1, /* gcFEATURE_BIT_REG_RSUVSwizzle */
        0x1, /* gcFEATURE_BIT_REG_V2Compression */
        0x0, /* gcFEATURE_BIT_REG_VGDoubleBuffer */
        0x1, /* gcFEATURE_BIT_REG_BugFixes1 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes2 */
        0x0, /* gcFEATURE_BIT_REG_TextureStride */
        0x1, /* gcFEATURE_BIT_REG_BugFixes3 */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisable1 */
        0x0, /* gcFEATURE_BIT_REG_AutoRestartTS */
        0x1, /* gcFEATURE_BIT_REG_BugFixes4 */
        0x0, /* gcFEATURE_BIT_REG_L2Windowing */
        0x1, /* gcFEATURE_BIT_REG_HalfFloatPipe */
        0x1, /* gcFEATURE_BIT_REG_PixelDither */
        0x1, /* gcFEATURE_BIT_REG_TwoStencilReference */
        0x1, /* gcFEATURE_BIT_REG_ExtendedPixelFormat */
        0x1, /* gcFEATURE_BIT_REG_CorrectMinMaxDepth */
        0x1, /* gcFEATURE_BIT_REG_DitherAndFilterPlusAlpha2D */
        0x1, /* gcFEATURE_BIT_REG_BugFixes5 */
        0x0, /* gcFEATURE_BIT_REG_New2D */
        0x1, /* gcFEATURE_BIT_REG_NewFloatingPointArithmetic */
        0x1, /* gcFEATURE_BIT_REG_TextureHorizontalAlignmentSelect */
        0x1, /* gcFEATURE_BIT_REG_NonPowerOfTwo */
        0x1, /* gcFEATURE_BIT_REG_LinearTextureSupport */
        0x1, /* gcFEATURE_BIT_REG_Halti0 */
        0x0, /* gcFEATURE_BIT_REG_CorrectOverflowVG */
        0x1, /* gcFEATURE_BIT_REG_NegativeLogFix */
        0x1, /* gcFEATURE_BIT_REG_ResolveOffset */
        0x1, /* gcFEATURE_BIT_REG_OkToGateAxiClock */
        0x1, /* gcFEATURE_BIT_REG_MMU */
        0x1, /* gcFEATURE_BIT_REG_WideLine */
        0x1, /* gcFEATURE_BIT_REG_BugFixes6 */
        0x1, /* gcFEATURE_BIT_REG_FcFlushStall */
        0x1, /* gcFEATURE_BIT_REG_LineLoop */
        0x1, /* gcFEATURE_BIT_REG_LogicOp */
        0x1, /* gcFEATURE_BIT_REG_SeamlessCubeMap */
        0x1, /* gcFEATURE_BIT_REG_SuperTiledTexture */
        0x1, /* gcFEATURE_BIT_REG_LinearPE */
        0x1, /* gcFEATURE_BIT_REG_RectPrimitive */
        0x0, /* gcFEATURE_BIT_REG_Composition */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisableCountWidth */
        0x1, /* gcFEATURE_BIT_REG_PESwizzle */
        0x1, /* gcFEATURE_BIT_REG_EndEvent */
        0x1, /* gcFEATURE_BIT_REG_S1S8 */
        0x1, /* gcFEATURE_BIT_REG_Halti1 */
        0x0, /* gcFEATURE_BIT_REG_RGB888 */
        0x1, /* gcFEATURE_BIT_REG_TX_YUVAssembler */
        0x1, /* gcFEATURE_BIT_REG_DynamicFrequencyScaling */
        0x0, /* gcFEATURE_BIT_REG_TXFilter */
        0x1, /* gcFEATURE_BIT_REG_FullDirectFB */
        0x0, /* gcFEATURE_BIT_REG_OnePass2DFilter */
        0x1, /* gcFEATURE_BIT_REG_ThreadWalkerInPS */
        0x1, /* gcFEATURE_BIT_REG_TileFiller */
        0x1, /* gcFEATURE_BIT_REG_YUVStandard */
        0x0, /* gcFEATURE_BIT_REG_MultiSourceBlt */
        0x0, /* gcFEATURE_BIT_REG_YUVConversion */
        0x1, /* gcFEATURE_BIT_REG_FlushFixed2D */
        0x1, /* gcFEATURE_BIT_REG_Interleaver */
        0x1, /* gcFEATURE_BIT_REG_MixedStreams */
        0x0, /* gcFEATURE_BIT_REG_L2CacheFor2D420 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes7 */
        0x0, /* gcFEATURE_BIT_REG_NoIndexPattern */
        0x1, /* gcFEATURE_BIT_REG_TextureTileStatus */
        0x1, /* gcFEATURE_BIT_REG_DecompressZ16 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes8 */
        0x1, /* gcFEATURE_BIT_REG_DERotationStallFix */
        0x0, /* gcFEATURE_BIT_REG_OclOnly */
        0x1, /* gcFEATURE_BIT_REG_NewFeatures0 */
        0x1, /* gcFEATURE_BIT_REG_InstructionCache */
        0x0, /* gcFEATURE_BIT_REG_GeometryShader */
        0x1, /* gcFEATURE_BIT_REG_TexCompressionSupertiled */
        0x1, /* gcFEATURE_BIT_REG_Generics */
        0x1, /* gcFEATURE_BIT_REG_BugFixes9 */
        0x0, /* gcFEATURE_BIT_REG_FastMSAA */
        0x0, /* gcFEATURE_BIT_REG_WClip */
        0x1, /* gcFEATURE_BIT_REG_BugFixes10 */
        0x1, /* gcFEATURE_BIT_REG_UnifiedSamplers */
        0x1, /* gcFEATURE_BIT_REG_BugFixes11 */
        0x1, /* gcFEATURE_BIT_REG_PerformanceCounters */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes12 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes13 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_ACE */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes14 */
        0x0, /* gcFEATURE_BIT_REG_PowerOptimizations0 */
        0x1, /* gcFEATURE_BIT_REG_NewHZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes15 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements1 */
        0x0, /* gcFEATURE_BIT_REG_DENoGamma */
        0x0, /* gcFEATURE_BIT_REG_PAEnhancements2 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_HIEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes16 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements4 */
        0x0, /* gcFEATURE_BIT_REG_PEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_MCEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_Halti2 */
        0x0, /* gcFEATURE_BIT_REG_DEMirrorRotate */
        0x1, /* gcFEATURE_BIT_REG_SmallMSAA */
        0x1, /* gcFEATURE_BIT_REG_BugFixes17 */
        0x0, /* gcFEATURE_BIT_REG_Rasterizer2 */
        0x0, /* gcFEATURE_BIT_REG_DualPipeOPF */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2 */
        0x0, /* gcFEATURE_BIT_REG_CSCV2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes18 */
        0x0, /* gcFEATURE_BIT_REG_Compression2D */
        0x0, /* gcFEATURE_BIT_REG_Probe */
        0x1, /* gcFEATURE_BIT_REG_MediumPrecision */
        0x0, /* gcFEATURE_BIT_REG_DESupertile */
        0x1, /* gcFEATURE_BIT_REG_BugFixes19 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements6 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements7 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes20 */
        0x0, /* gcFEATURE_BIT_REG_DEAddress40 */
        0x0, /* gcFEATURE_BIT_REG_MiniMMUFix */
        0x1, /* gcFEATURE_BIT_REG_EEZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes21 */
        0x0, /* gcFEATURE_BIT_REG_ExtraVgCaps */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV15 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes22 */
        0x1, /* gcFEATURE_BIT_REG_Halti3 */
        0x0, /* gcFEATURE_BIT_REG_TessellationShaders */
        0x0, /* gcFEATURE_BIT_REG_OPF9Tap */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2StrQuad */
        0x0, /* gcFEATURE_BIT_REG_SeperateSRCAndDstCache */
        0x1, /* gcFEATURE_BIT_REG_Halti4 */
        0x1, /* gcFEATURE_BIT_REG_RAWriteDepth */
        0x0, /* gcFEATURE_BIT_REG_AndroidOnly */
        0x1, /* gcFEATURE_BIT_REG_HasChipProductReg */
        0x0, /* gcFEATURE_BIT_REG_TXSupportDEC */
        0x1, /* gcFEATURE_BIT_REG_S8MSAACompression */
        0x1, /* gcFEATURE_BIT_REG_BugFixesIn544 */
        0x0, /* gcFEATURE_BIT_REG_L2CacheRemove */
        0x1, /* gcFEATURE_BIT_REG_FEAllowRndVtxCnt */
        0x0, /* gcFEATURE_BIT_REG_CubeMapFL28 */
        0x1, /* gcFEATURE_BIT_REG_TX6bitFrac */
        0x1, /* gcFEATURE_BIT_REG_FEAllowStallPrefetchEng */
        0x0, /* gcFEATURE_BIT_REG_ThirdPartyCompression */
        0x1, /* gcFEATURE_BIT_REG_RSS8 */
        0x1, /* gcFEATURE_BIT_REG_MSAACoherencyCheck */
        0x1, /* gcFEATURE_BIT_REG_Halti5 */
        0x1, /* gcFEATURE_BIT_REG_Evis */
        0x0, /* gcFEATURE_BIT_REG_BltEngine */
        0x0, /* gcFEATURE_BIT_REG_BugFixes23 */
        0x0, /* gcFEATURE_BIT_REG_BugFixes24 */
        0x0, /* gcFEATURE_BIT_REG_DEC */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12 */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12_10BIT */
        0x0, /* gcFEATURE_BIT_REG_DisableVIP */
        0x0, /* gcFEATURE_BIT_RenderTarget8 */
        0x0, /* gcFEATURE_BIT_TxLodFlowCorrection */
        0x0, /* gcFEATURE_BIT_FaceLod */
        0x0, /* gcFEATURE_BIT_MultiCoreSemaphoreStallV2 */
        0x1, /* gcFEATURE_BIT_VMSAA */
        0x0, /* gcFEATURE_BIT_ChipEnableLink */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_1_5_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_BILINEAR_FILTER */
        0x1, /* gcFEATURE_BIT_RA_HZEZ_CLOCK_CONTROL */
        0x1, /* gcFEATURE_BIT_CACHE128B256BPERLINE */
        0x1, /* gcFEATURE_BIT_V4Compression */
        0x0, /* gcFEATURE_BIT_PE2D_MAJOR_SUPER_TILE */
        0x1, /* gcFEATURE_BIT_PE_32BPC_COLORMASK_FIX */
        0x1, /* gcFEATURE_BIT_ALPHA_BLENDING_OPT */
        0x1, /* gcFEATURE_BIT_NEW_GPIPE */
        0x0, /* gcFEATURE_BIT_PIPELINE_32_ATTRIBUTES */
        0x0, /* gcFEATURE_BIT_MSAA_SHADING */
        0x0, /* gcFEATURE_BIT_NO_ANISTRO_FILTER */
        0x1, /* gcFEATURE_BIT_NO_ASTC */
        0x0, /* gcFEATURE_BIT_NO_DXT */
        0x0, /* gcFEATURE_BIT_HWTFB */
        0x1, /* gcFEATURE_BIT_RA_DEPTH_WRITE_MSAA1X_FIX */
        0x1, /* gcFEATURE_BIT_EZHZ_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_FIX */
        0x1, /* gcFEATURE_BIT_SH_HALFDEPENDENCY_FIX */
        0x1, /* gcFEATURE_BIT_USC_MCFILL_FIX */
        0x1, /* gcFEATURE_BIT_TPG_TCPERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_MDFIFO_OVERFLOW_FIX */
        0x1, /* gcFEATURE_BIT_SH_TEXLD_BARRIER_IN_CS_FIX */
        0x1, /* gcFEATURE_BIT_RS_NEW_BASEADDR */
        0x1, /* gcFEATURE_BIT_PE_8bpp_DUALPIPE_FIX */
        0x0, /* gcFEATURE_BIT_SH_ADVANCED_INSTR */
        0x1, /* gcFEATURE_BIT_SH_FLAT_INTERPOLATION_DUAL16_FIX */
        0x1, /* gcFEATURE_BIT_USC_CONTINUOUS_FLUS_FIX */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_V4 */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_ALPHA_KILL */
        0x1, /* gcFEATURE_BIT_PE_NO_ALPHA_TEST */
        0x0, /* gcFEATURE_BIT_TX_LOD_NEAREST_SELECT */
        0x1, /* gcFEATURE_BIT_SH_FIX_LDEXP */
        0x1, /* gcFEATURE_BIT_SUPPORT_MOVAI */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_MAXPAGES_FIX */
        0x1, /* gcFEATURE_BIT_PE_RGBA16I_FIX */
        0x1, /* gcFEATURE_BIT_BLT_8bpp_256TILE_FC_FIX */
        0x1, /* gcFEATURE_BIT_PE_64bit_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_USC_FULL_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_TX_YUV_ASSEMBLER_10BIT */
        0x1, /* gcFEATURE_BIT_FE_32bit_INDEX_FIX */
        0x1, /* gcFEATURE_BIT_BLT_64bpp_MASKED_CLEAR_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY */
        0x1, /* gcFEATURE_BIT_ROBUSTNESS */
        0x1, /* gcFEATURE_BIT_USC_ATOMIC_FIX */
        0x1, /* gcFEATURE_BIT_SH_PSO_MSAA1x_FIX */
        0x1, /* gcFEATURE_BIT_USC_VX_PERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_GOS_ADDR_FIX */
        0x1, /* gcFEATURE_BIT_TX_8bit_UVFrac */
        0x1, /* gcFEATURE_BIT_TX_DESC_CACHE_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_RSBLT_MSAA_DECOMPRESSION */
        0x0, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE */
        0x1, /* gcFEATURE_BIT_DRAWID */
        0x1, /* gcFEATURE_BIT_PSIO_SAMPLEMASK_IN_R0ZW_FIX */
        0x1, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE_V2 */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG */
        0x0, /* gcFEATURE_BIT_SNAPPAGE_CMD */
        0x1, /* gcFEATURE_BIT_SH_NO_INDEX_CONST_ON_A0 */
        0x1, /* gcFEATURE_BIT_SH_NO_ONECONST_LIMIT */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_ON_TEMP */
        0x1, /* gcFEATURE_BIT_COMPUTE_ONLY */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_CLAMP */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_ALLOC_COUNT_FIX */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_PREFETCH */
        0x0, /* gcFEATURE_BIT_PE2D_SEPARATE_CACHE */
        0x1, /* gcFEATURE_BIT_PE_MSAA_OQ_FIX */
        0x1, /* gcFEATURE_BIT_PSIO_MSAA_CL_FIX */
        0x1, /* gcFEATURE_BIT_USC_DEFER_FILL_FIX */
        0x1, /* gcFEATURE_BIT_SH_CLOCK_GATE_FIX */
        0x0, /* gcFEATURE_BIT_FE_NEED_DUMMYDRAW */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_OUTPUT */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_10BIT */
        0x0, /* gcFEATURE_BIT_MULTI_CLUSTER */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK */
        0x0, /* gcFEATURE_BIT_SH_DUAL16_SAMPLEMASK_ZW */
        0x0, /* gcFEATURE_BIT_TPG_TRIVIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TX_ASTC_MULTISLICE_FIX */
        0x0, /* gcFEATURE_BIT_FE_ROBUST_FIX */
        0x0, /* gcFEATURE_BIT_SH_GPIPE_ACCESS_FULLTEMPS */
        0x0, /* gcFEATURE_BIT_PSIO_INTERLOCK */
        0x1, /* gcFEATURE_BIT_PA_WIDELINE_FIX */
        0x0, /* gcFEATURE_BIT_WIDELINE_HELPER_FIX */
        0x0, /* gcFEATURE_BIT_G2D_3rd_PARTY_COMPRESSION_1_1 */
        0x0, /* gcFEATURE_BIT_TX_FLUSH_L1CACHE */
        0x1, /* gcFEATURE_BIT_PE_DITHER_FIX2 */
        0x0, /* gcFEATURE_BIT_SH_TEXLD_U_FIX */
        0x0, /* gcFEATURE_BIT_MC_FCCACHE_BYTEMASK */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK_FIX */
        0x0, /* gcFEATURE_BIT_PE_ADVANCE_BLEND_PART0 */
        0x0, /* gcFEATURE_BIT_FE_PATCHLIST_FETCH_FIX */
        0x1, /* gcFEATURE_BIT_RA_CG_FIX */
        0x0, /* gcFEATURE_BIT_DEC400 */
        0x0, /* gcFEATURE_BIT_LS_SUPPORT_PERCOMP_DEPENDENCY */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG2 */
        0x0, /* gcFEATURE_BIT_PE_VMSAA_COVERAGE_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY_AHB */
        0x0, /* gcFEATURE_BIT_MULTICORE_SEMAPHORESTALL_V3 */
        0x0, /* gcFEATURE_BIT_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_SH_CMPLX */
        0x0, /* gcFEATURE_BIT_SH_IDIV0_SWZL_EHS */
        0x0, /* gcFEATURE_BIT_TX_LERP_LESS_BIT */
        0x0, /* gcFEATURE_BIT_SH_GM_ENDIAN */
        0x0, /* gcFEATURE_BIT_SH_GM_USC_UNALLOC */
        0x0, /* gcFEATURE_BIT_SH_END_OF_BB */
        0x0, /* gcFEATURE_BIT_TX_BORDER_CLAMP_FIX */
        0x0, /* gcFEATURE_BIT_SH_IMG_LD_LASTPIXEL_FIX */
        0x0, /* gcFEATURE_BIT_ASYNC_BLT */
        0x0, /* gcFEATURE_BIT_ASYNC_FE_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_PSCS_THROTTLE */
        0x0, /* gcFEATURE_BIT_SEPARATE_LS */
        0x0, /* gcFEATURE_BIT_WIDELINE_TRIANGLE_EMU */
        0x0, /* gcFEATURE_BIT_FENCE_32BIT */
        0x0, /* gcFEATURE_BIT_FENCE_64BIT */
        0x0, /* gcFEATURE_BIT_PE_DEPTH_ONLY_OQFIX */
        0x0, /* gcFEATURE_BIT_TX_SEAMLESS_CUBE */
        0x0, /* gcFEATURE_BIT_TX_SNORM_SUPPORT */
        0x0, /* gcFEATURE_BIT_SH_SCATTER_GATHER */
        0x0, /* gcFEATURE_BIT_HWMANAGED_LS */
        0x0, /* gcFEATURE_BIT_SH_IMAGE_ENABLE_FIX */
        0x1, /* gcFEATURE_BIT_MSAA_FRAGMENT_OPERATION */
        0x0, /* gcFEATURE_BIT_PE_TILE_CACHE_FLUSH_FIX */
        0x0, /* gcFEATURE_BIT_BLT_YUV_OUTPUT */
        0x1, /* gcFEATURE_BIT_SH_IO_CG_FIX */
        0x0, /* gcFEATURE_BIT_PE_SWIZZLE */
        0x0, /* gcFEATURE_BIT_SH_ROBUSTNESS_FIX */
        0x0, /* gcFEATURE_BIT_USC_ATOMIC_FIX2 */
        0x0, /* gcFEATURE_BIT_PE_A8B8G8R8 */
        0x0, /* gcFEATURE_BIT_MULTIVIEW_RENDER */
        0x0, /* gcFEATURE_BIT_FE_DRAW_DIRECT */
        0x0, /* gcFEATURE_BIT_TX_VKBORDER_MODE */
        0x0, /* gcFEATURE_BIT_TX_UNNORMALIZED_COORD */
        0x0, /* gcFEATURE_BIT_PA_LINECLIP_FIX */
        0x0, /* gcFEATURE_BIT_TX_8bit_UVFrac_ROUNDING_FIX */
        0x0, /* gcFEATURE_BIT_MP_ARCH */
        0x0, /* gcFEATURE_BIT_TX_NO_FIXED_FILTER */
        0x0, /* gcFEATURE_BIT_SHARE_Z */
        0x0, /* gcFEATURE_BIT_DE_2D_FAST_CLEAR */
        0x0, /* gcFEATURE_BIT_TX_CLEAR_PENDING_FIX */
        0x0, /* gcFEATURE_BIT_NO_HI1_L2 */
        0x0, /* gcFEATURE_BIT_USC_EVICT_CTRL_FIFO_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_FORMAT_10BIT_CROSS_4K */
        0x0, /* gcFEATURE_BIT_FORMAT_P010LSB_I010 */
        0x0, /* gcFEATURE_BIT_ENDIAN_CONTROL */
        0x0, /* gcFEATURE_BIT_G2D_DEC400EX */
        0x0, /* gcFEATURE_BIT_SH_VX2_FLOATING_MAD_FIX */
        0x0, /* gcFEATURE_BIT_TS_FC_VULKAN_SUPPORT */
        0x0, /* gcFEATURE_BIT_MSAA_FLOAT_64BIT */
        0x0, /* gcFEATURE_BIT_VG_TS_CULLING */
        0x0, /* gcFEATURE_BIT_VG_FP25 */
        0x0, /* gcFEATURE_BIT_VG_AYUV_INPUT_OUTPUT */
        0x0, /* gcFEATURE_BIT_VG_DOUBLE_IMAGE */
        0x0, /* gcFEATURE_BIT_VG_RECTANGLE_STRIPE_MODE */
        0x0, /* gcFEATURE_BIT_VG_MMU */
        0x0, /* gcFEATURE_BIT_VG_IM_FILTER */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PLANAR */
        0x0, /* gcFEATURE_BIT_VG_PE_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_COLOR_PRECISION_8_BIT */
        0x0, /* gcFEATURE_BIT_VG_RESOLVE_ENGINE */
        0x0, /* gcFEATURE_BIT_VG_PE_COLOR_KEY */
        0x0, /* gcFEATURE_BIT_VG_IM_INDEX_FORMAT */
        0x0, /* gcFEATURE_BIT_VG_RESOLUTION_8K */
        0x0, /* gcFEATURE_BIT_VG_IMAGE_16K */
        0x0, /* gcFEATURE_BIT_VG_FORMAT_ARGB2222 */
        0x0, /* gcFEATURE_BIT_G2D_DEC400 */
        0x0, /* gcFEATURE_BIT_DC_OVERLAY_SCALING */
        0x0, /* gcFEATURE_BIT_DC_SOURCE_ROTATION */
        0x0, /* gcFEATURE_BIT_DC_TILED */
        0x0, /* gcFEATURE_BIT_DC_YUV_L1 */
        0x0, /* gcFEATURE_BIT_DC_D30_OUTPUT */
        0x0, /* gcFEATURE_BIT_DC_MMU */
        0x0, /* gcFEATURE_BIT_DC_COMPRESSION */
        0x0, /* gcFEATURE_BIT_DC_QOS */
        0x0, /* gcFEATURE_BIT_AI_GPU */
        0x0, /* gcFEATURE_BIT_EVIS_NO_ABSDIFF */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BITREPLACE */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BOXFILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_CORDIAC */
        0x0, /* gcFEATURE_BIT_EVIS_NO_DP32 */
        0x0, /* gcFEATURE_BIT_EVIS_NO_FILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_IADD */
        0x0, /* gcFEATURE_BIT_EVIS_NO_SELECTADD */
        0x0, /* gcFEATURE_BIT_EVIS_LERP_7OUTPUT */
        0x0, /* gcFEATURE_BIT_EVIS_ACCSQ_8OUTPUT */
        0x1, /* gcFEATURE_BIT_EVIS_VX2 */
        0x1, /* gcFEATURE_BIT_NN_FLOAT */
        0x1, /* gcFEATURE_BIT_TP_ENGINE */
        0x1, /* gcFEATURE_BIT_VIP_V7 */
        0x0, /* gcFEATURE_BIT_MCFE */
        0x0, /* gcFEATURE_BIT_NN_INTERLEVE8 */
        0x1, /* gcFEATURE_BIT_TP_REORDER */
        0x1, /* gcFEATURE_BIT_TP_LRN */
        0x1, /* gcFEATURE_BIT_TP_MAX_POOLING_STRIDE1 */
        0x0, /* gcFEATURE_BIT_NN_FP16_ALU */
        0x1, /* gcFEATURE_BIT_NN_INT16_ALU */
        0x1, /* gcFEATURE_BIT_TP_ROI_POOLING */
        0x1, /* gcFEATURE_BIT_NN_ZDP3 */
        0x0, /* gcFEATURE_BIT_NN_ZDP6 */
        0x0, /* gcFEATURE_BIT_NN_XYDP9 */
        0x1, /* gcFEATURE_BIT_NN_INT8_SCALE */
        0x1, /* gcFEATURE_BIT_NN_POWER_ISOLATION */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE1 */
        0x1, /* gcFEATURE_BIT_TF_QUANTIZATION */
        0x0, /* gcFEATURE_BIT_TP_SIMPLE_INT16 */
        0x1, /* gcFEATURE_BIT_TP_REAL_INT16 */
        0x0, /* gcFEATURE_BIT_TP_BFLOAT16 */
        0x1, /* gcFEATURE_BIT_NN_FIRST_PIXEL_POOLING */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE2 */
        0x1, /* gcFEATURE_BIT_NN_STRIDE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_XYDP6 */
        0x1, /* gcFEATURE_BIT_TP_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONV1x1_PERF_FIX */
        0x1, /* gcFEATURE_BIT_NN_CACHELINE_MODE_PERF_FIX */
        0x1, /* gcFEATURE_BIT_NN_PER3DTILE_BUBBLE_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONVOUT_FIFO_DEPTH_FIX */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE3 */
        0x0, /* gcFEATURE_BIT_USC_STAY_LRU */
        0x1, /* gcFEATURE_BIT_NN_NONZERO_MIRROR_BORDER */
        0x1, /* gcFEATURE_BIT_NN_COEF_DECOMPRESS_PERF2X */
        0x0, /* gcFEATURE_BIT_INPUT_4BIT */
        0x1, /* gcFEATURE_BIT_COEF_COMPRESSION_ENHANCEMENT */
        0x1, /* gcFEATURE_BIT_NN_ZXDP3_KERNEL_READ_CONFLICT_FIX */
        0x1, /* gcFEATURE_BIT_NN_ZDP3_NO_COMPRESS_FIX */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_PERF_FIX */
        0x1, /* gcFEATURE_BIT_OCB_COUNTER */
        0x1, /* gcFEATURE_BIT_NN_XYDP0 */
        0x0, /* gcFEATURE_BIT_ZRL_7BIT */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_MERGE_FIX */
        0x1, /* gcFEATURE_BIT_NN_SMALLBATCH_PHASE1 */
        0x1, /* gcFEATURE_BIT_TP_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_SCALER */
        0x0, /* gcFEATURE_BIT_SCALER_4K */
        0x0, /* gcFEATURE_BIT_NN_REQ_SLOWARBITRATION_FIX */
        0x0, /* gcFEATURE_BIT_IMAGE_PARTIAL_CACHE */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNELHEAD_FIX */
        0x1, /* gcFEATURE_BIT_NN_SINGLEPORT_ACCUMBUFFER */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH */
        0x1, /* gcFEATURE_BIT_ZRL_8BIT */
        0x1, /* gcFEATURE_BIT_NN_DEPTHWISE_SUPPORT */
        0x1, /* gcFEATURE_BIT_NN_WRITE_WITHOUT_USC */
        0x1, /* gcFEATURE_BIT_NN_ZDP_INIMAGE_SIZE_FIX */
        0x1, /* gcFEATURE_BIT_HI_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_INCORRECT_WR_REQ_TO_USC_BETWEEN_REORDER_AND_NORMAL_LAYER_FIX */
        0x1, /* gcFEATURE_BIT_TP_COEF_COMPRESSION_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_VIP_DEC400 */
        0x1, /* gcFEATURE_BIT_IMAGE_NOT_PACKED_IN_SRAM_FIX */
        0x1, /* gcFEATURE_BIT_IDLE_BEFORE_FLUSH_COMPLETE_FIX */
        0x1, /* gcFEATURE_BIT_NO_FLUSH_USC_FIX */
        0x1, /* gcFEATURE_BIT_COEF_DELTA_CORD_OVERFLOW_ZRL_8BIT_FIX */
        0x1, /* gcFEATURE_BIT_XY_OFFSET_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_USC_INVALIDATE_CACHE_LINE_FIX */
        0x0, /* gcFEATURE_BIT_LOW_EFFICIENCY_OF_ID_WRITE_IMGBUF_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_PER_CORE_LESS_THAN_THIRD_COEF_BUFF_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_USC_BOTTLENECK_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_SIZE_WASTE_IN_PARTIAL_MODE_FIX */
        0x1, /* gcFEATURE_BIT_FULLCACHE_KERNEL_INTERLEAVE_FIX */
        0x1, /* gcFEATURE_BIT_TP_REORDER_LAYER_SUSPEND_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_VIP_SRAM_READ_BW_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_IMG_POP_PIPELINE_PAUSE_FIX */
        0x1, /* gcFEATURE_BIT_DR_JD_DIFF_CONDITION_FOR_CACHELINE_MODE_PRE_FIX */
        0x1, /* gcFEATURE_BIT_OUTIMAGE_X_BITWIDTH_LIMIT_FOR_NN_TRANSPOSE_FIX */
        0x1, /* gcFEATURE_BIT_SMALL_BATCH_FLOPS_RESET_FIX */
        0x0, /* gcFEATURE_BIT_SMALL_BATCH_DISBLE_FIX */
        0x1, /* gcFEATURE_BIT_NEGATIVE_POST_SHIFT_FIX */
        0x1, /* gcFEATURE_BIT_NN_COMMAND_KERNEL_REQUEST_CONFICT_FIX */
        0x1, /* gcFEATURE_BIT_OCB_REMAP_PHYSICAL_ADDRESS */
        0x1, /* gcFEATURE_BIT_NN_NO_Z_LOCATION_OFFSET */
        0x0, /* gcFEATURE_BIT_NN_LEAKY_RELU */
        0x0, /* gcFEATURE_BIT_NN_PRELU */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT_ASYM */
        0x0, /* gcFEATURE_BIT_NN_NATIVE_STRIDE_TWO */
        0x0, /* gcFEATURE_BIT_NN_TENSOR_ADD */
        0x0, /* gcFEATURE_BIT_NN_FLOAT_POST_MULT */
        0x1, /* gcFEATURE_BIT_NN_SLICE_PADDING_TO_64BYTE_ALIGN */
        0x0, /* gcFEATURE_BIT_NN_DW_1x1_CONV_MERGE */
        0x1, /* gcFEATURE_BIT_NN_SLOW_OUTPUT */
        0x1, /* gcFEATURE_BIT_NO_NARROW_POST_PROCESS_PIPE */
        0x1, /* gcFEATURE_BIT_TP_NN_PROBE */
        0x0, /* gcFEATURE_BIT_TP_23BITS_POST_MULTIPLIER */
        0x1, /* gcFEATURE_BIT_NN_TRANSPOSE */
        0x0, /* gcFEATURE_BIT_EVIS2_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_USC_ASYNC_CP_RTN_FLOP_RESET_FIX */
        0x1, /* gcFEATURE_BIT_DDR_BURST_LEN_256B */
        0x0, /* gcFEATURE_BIT_IMG_CAHCE_MODE_MUST_0_IN_IMG_DIRECT_MODE_FIX */
        0x1, /* gcFEATURE_BIT_USE_SINGLE_PORT_VIPSRAM */
        0x0, /* gcFEATURE_BIT_NN_ASYMMETRIC_INT8 */
        0x1, /* gcFEATURE_BIT_DEPTHWISE_NEIGHBOR_IMG_DATA_TRANSFER_NOT_EFFICIENT_FIX */
        0x0, /* gcFEATURE_BIT_PRELU_LEAKLY_RELU_CLAMP */
        0x0, /* gcFEATURE_BIT_TP_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_SMALL_BATCH_PHASE2 */
        0x0, /* gcFEATURE_BIT_TILE_ACCESS_CAPABILITY */
        0x0, /* gcFEATURE_BIT_FAST_DP3_PREPROCESSOR */
        0x0, /* gcFEATURE_BIT_NN_COMPRESSION_BYPASSS */
        0x0, /* gcFEATURE_BIT_BFLOAT_KERNEL_COMPRESSION_ZERO_SKIP_FIX */
        0x0, /* gcFEATURE_BIT_TP_3_USC */
        0x0, /* gcFEATURE_BIT_TP_KERNEL_1BYTE_ALGIN */
        0x0, /* gcFEATURE_BIT_TPLITE_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_PREPROCESS_IMG_BUF_640BYTE_LIMIT */
        0x0, /* gcFEATURE_BIT_V8_ACCUMLATION_READ_OUT_HAS_BUBBLES_PERF_FIX */
        0x0, /* gcFEATURE_BIT_V8_SINGLE_PORT_ACCUMULATION_BUFFER_RW_CONFICT_ZERO_SKIP_PERF_FIX */
        0x0, /* gcFEATURE_BIT_BURST_COLLECT_DUMMY_DATA_WASTE_CYCLES_FIX */
        0x1, /* gcFEATURE_BIT_INIMG_NOT_64BYTE_ALIGN_CACHELINE_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TP_ACCESS_VIPSRAM_OT_IS_ONE_FIX */
        0x1, /* gcFEATURE_BIT_VIP_HW_FINAL_RELEASE */
    },
    /* vip9000nano-di */
    {
        0x9000, /* ChipID */
        0x8102, /* ChipRevision */
        0x5090009, /* ProductID */
        0x8000000, /* EcoID */
        0xbe, /* CustomerID */
        0x0, /* PatchVersion */
        "", /* ProductName */
        0x0, /* FormalRelease */
        0x40, /* gcFEATURE_VALUE_TempRegisters */
        0x100, /* gcFEATURE_VALUE_ThreadCount */
        0x1, /* gcFEATURE_VALUE_NumShaderCores */
        0x200, /* gcFEATURE_VALUE_InstructionCount */
        0x140, /* gcFEATURE_VALUE_NumberOfConstants */
        0x1, /* gcFEATURE_VALUE_CoreCount */
        0x10, /* gcFEATURE_VALUE_LocalStorageSize */
        0x10, /* gcFEATURE_VALUE_L1CacheSize */
        0x200, /* gcFEATURE_VALUE_InstructionMemorySize */
        0x14, /* gcFEATURE_VALUE_ShaderPCLength */
        0x10, /* gcFEATURE_VALUE_USC_MAX_PAGES */
        0x1, /* gcFEATURE_VALUE_NumPixelPipes */
        0x1, /* gcFEATURE_VALUE_USC_CACHE_CONTROLLERS */
        0x2, /* gcFEATURE_VALUE_USC_BANKS */
        0x8, /* gcFEATURE_VALUE_Streams */
        0x10, /* gcFEATURE_VALUE_VaryingCount */
        0x400, /* gcFEATURE_VALUE_VertexOutputBufferSize */
        0x0, /* gcFEATURE_VALUE_BufferSize */
        0x10, /* gcFEATURE_VALUE_VertexCacheSize */
        0x0, /* gcFEATURE_VALUE_NumResolvePipes */
        0x100, /* gcFEATURE_VALUE_RESULT_WINDOW_MAX_SIZE */
        0x0, /* gcFEATURE_VALUE_ClusterAliveMask */
        0x40, /* gcFEATURE_VALUE_NNMadPerCore */
        0x8, /* gcFEATURE_VALUE_NNCoreCount */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT8 */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_FLOAT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_BFLOAT */
        0x9, /* gcFEATURE_VALUE_NNInputBufferDepth */
        0x20, /* gcFEATURE_VALUE_NNAccumBufferDepth */
        0x400, /* gcFEATURE_VALUE_TPEngine_PwlLUTCount */
        0x10, /* gcFEATURE_VALUE_TPEngine_PwlLUTSize */
        0x100000, /* gcFEATURE_VALUE_VIP_SRAM_SIZE */
        0x3, /* gcFEATURE_VALUE_TPEngine_CoreCount */
        0x0, /* gcFEATURE_VALUE_AXI_SRAM_SIZE */
        0x5, /* gcFEATURE_VALUE_NN_INIMAGE_OFFSET_BITS */
        0x200, /* gcFEATURE_VALUE_TP_REORDER_INIMAGE_SIZE */
        0x0, /* gcFEATURE_VALUE_TPLite_CoreCount */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_X */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_Y */
        0x1, /* gcFEATURE_VALUE_NNFP16_ZDP */
        0x10, /* gcFEATURE_VALUE_NN_LANES_PER_OUT_CYCLE */
        0x40, /* gcFEATURE_VALUE_MAX_OT_NUMBER */
        0x40, /* gcFEATURE_VALUE_PHYSICAL_VIP_SRAM_WIDTH_IN_BYTE */
        0x10, /* gcFEATURE_VALUE_EQUIVALENT_VIP_SRAM_WIDTH_INBYTE */
        0x8, /* gcFEATURE_VALUE_TP_ZRL_BITS */
        0x80, /* gcFEATURE_VALUE_LATENCY_HIDING_AT_FULL_AXI_BW */
        0x10, /* gcFEATURE_VALUE_AXI_BUS_WIDTH */
        0xf, /* gcFEATURE_VALUE_NN_KERNEL_X_SIZE */
        0xf, /* gcFEATURE_VALUE_NN_KERNEL_Y_SIZE */
        0xfffff, /* gcFEATURE_VALUE_NN_KERNEL_Z_SIZE */
        0x1f, /* gcFEATURE_VALUE_NN_X_OFFSET */
        0x1f, /* gcFEATURE_VALUE_NN_Y_OFFSET */
        0x100, /* gcFEATURE_VALUE_DDR_KERNEL_BURST_SIZE */
        0x0, /* gcFEATURE_BIT_REG_FastClear */
        0x0, /* gcFEATURE_BIT_REG_SpecialAntiAliasing */
        0x1, /* gcFEATURE_BIT_REG_Pipe3D */
        0x1, /* gcFEATURE_BIT_REG_DXTTextureCompression */
        0x0, /* gcFEATURE_BIT_REG_DebugMode */
        0x1, /* gcFEATURE_BIT_REG_ZCompression */
        0x0, /* gcFEATURE_BIT_REG_YUV420Filter */
        0x1, /* gcFEATURE_BIT_REG_MSAA */
        0x0, /* gcFEATURE_BIT_REG_DC */
        0x0, /* gcFEATURE_BIT_REG_Pipe2D */
        0x1, /* gcFEATURE_BIT_REG_ETC1TextureCompression */
        0x1, /* gcFEATURE_BIT_REG_FastScaler */
        0x1, /* gcFEATURE_BIT_REG_HighDynamicRange */
        0x1, /* gcFEATURE_BIT_REG_YUV420Tiler */
        0x1, /* gcFEATURE_BIT_REG_ModuleCG */
        0x0, /* gcFEATURE_BIT_REG_MinArea */
        0x0, /* gcFEATURE_BIT_REG_NoEZ */
        0x0, /* gcFEATURE_BIT_REG_No422Texture */
        0x0, /* gcFEATURE_BIT_REG_BufferInterleaving */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite2D */
        0x0, /* gcFEATURE_BIT_REG_NoScaler */
        0x1, /* gcFEATURE_BIT_REG_YUY2Averaging */
        0x0, /* gcFEATURE_BIT_REG_HalfPECache */
        0x0, /* gcFEATURE_BIT_REG_HalfTXCache */
        0x0, /* gcFEATURE_BIT_REG_YUY2RenderTarget */
        0x0, /* gcFEATURE_BIT_REG_Mem32BitSupport */
        0x0, /* gcFEATURE_BIT_REG_PipeVG */
        0x0, /* gcFEATURE_BIT_REG_VGTS */
        0x0, /* gcFEATURE_BIT_REG_FE20 */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite3D */
        0x1, /* gcFEATURE_BIT_REG_RsYuvTarget */
        0x1, /* gcFEATURE_BIT_REG_FE20BitIndex */
        0x1, /* gcFEATURE_BIT_REG_FlipY */
        0x1, /* gcFEATURE_BIT_REG_DualReturnBus */
        0x1, /* gcFEATURE_BIT_REG_EndiannessConfig */
        0x1, /* gcFEATURE_BIT_REG_Texture8K */
        0x1, /* gcFEATURE_BIT_REG_CorrectTextureConverter */
        0x1, /* gcFEATURE_BIT_REG_SpecialMsaaLod */
        0x1, /* gcFEATURE_BIT_REG_FastClearFlush */
        0x1, /* gcFEATURE_BIT_REG_2DPE20 */
        0x0, /* gcFEATURE_BIT_REG_CorrectAutoDisable */
        0x1, /* gcFEATURE_BIT_REG_Render8K */
        0x1, /* gcFEATURE_BIT_REG_TileStatus2Bits */
        0x1, /* gcFEATURE_BIT_REG_SeparateTileStatusWhenInterleaved */
        0x1, /* gcFEATURE_BIT_REG_SuperTiled32x32 */
        0x0, /* gcFEATURE_BIT_REG_VG20 */
        0x0, /* gcFEATURE_BIT_REG_TSExtendedCommands */
        0x1, /* gcFEATURE_BIT_REG_CompressionFifoFixed */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions0 */
        0x0, /* gcFEATURE_BIT_REG_VGFilter */
        0x0, /* gcFEATURE_BIT_REG_VG21 */
        0x1, /* gcFEATURE_BIT_REG_ShaderGetsW */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions1 */
        0x1, /* gcFEATURE_BIT_REG_DefaultReg0 */
        0x1, /* gcFEATURE_BIT_REG_MC20 */
        0x0, /* gcFEATURE_BIT_REG_ShaderMSAASideband */
        0x1, /* gcFEATURE_BIT_REG_BugFixes0 */
        0x0, /* gcFEATURE_BIT_REG_VAA */
        0x0, /* gcFEATURE_BIT_REG_BypassInMSAA */
        0x0, /* gcFEATURE_BIT_REG_HierarchicalZ */
        0x0, /* gcFEATURE_BIT_REG_NewTexture */
        0x0, /* gcFEATURE_BIT_REG_A8TargetSupport */
        0x1, /* gcFEATURE_BIT_REG_CorrectStencil */
        0x1, /* gcFEATURE_BIT_REG_EnhanceVR */
        0x1, /* gcFEATURE_BIT_REG_RSUVSwizzle */
        0x1, /* gcFEATURE_BIT_REG_V2Compression */
        0x0, /* gcFEATURE_BIT_REG_VGDoubleBuffer */
        0x1, /* gcFEATURE_BIT_REG_BugFixes1 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes2 */
        0x0, /* gcFEATURE_BIT_REG_TextureStride */
        0x1, /* gcFEATURE_BIT_REG_BugFixes3 */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisable1 */
        0x0, /* gcFEATURE_BIT_REG_AutoRestartTS */
        0x1, /* gcFEATURE_BIT_REG_BugFixes4 */
        0x0, /* gcFEATURE_BIT_REG_L2Windowing */
        0x1, /* gcFEATURE_BIT_REG_HalfFloatPipe */
        0x1, /* gcFEATURE_BIT_REG_PixelDither */
        0x1, /* gcFEATURE_BIT_REG_TwoStencilReference */
        0x1, /* gcFEATURE_BIT_REG_ExtendedPixelFormat */
        0x1, /* gcFEATURE_BIT_REG_CorrectMinMaxDepth */
        0x1, /* gcFEATURE_BIT_REG_DitherAndFilterPlusAlpha2D */
        0x1, /* gcFEATURE_BIT_REG_BugFixes5 */
        0x0, /* gcFEATURE_BIT_REG_New2D */
        0x1, /* gcFEATURE_BIT_REG_NewFloatingPointArithmetic */
        0x1, /* gcFEATURE_BIT_REG_TextureHorizontalAlignmentSelect */
        0x1, /* gcFEATURE_BIT_REG_NonPowerOfTwo */
        0x1, /* gcFEATURE_BIT_REG_LinearTextureSupport */
        0x1, /* gcFEATURE_BIT_REG_Halti0 */
        0x0, /* gcFEATURE_BIT_REG_CorrectOverflowVG */
        0x1, /* gcFEATURE_BIT_REG_NegativeLogFix */
        0x1, /* gcFEATURE_BIT_REG_ResolveOffset */
        0x1, /* gcFEATURE_BIT_REG_OkToGateAxiClock */
        0x1, /* gcFEATURE_BIT_REG_MMU */
        0x1, /* gcFEATURE_BIT_REG_WideLine */
        0x1, /* gcFEATURE_BIT_REG_BugFixes6 */
        0x1, /* gcFEATURE_BIT_REG_FcFlushStall */
        0x1, /* gcFEATURE_BIT_REG_LineLoop */
        0x1, /* gcFEATURE_BIT_REG_LogicOp */
        0x1, /* gcFEATURE_BIT_REG_SeamlessCubeMap */
        0x1, /* gcFEATURE_BIT_REG_SuperTiledTexture */
        0x1, /* gcFEATURE_BIT_REG_LinearPE */
        0x1, /* gcFEATURE_BIT_REG_RectPrimitive */
        0x0, /* gcFEATURE_BIT_REG_Composition */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisableCountWidth */
        0x1, /* gcFEATURE_BIT_REG_PESwizzle */
        0x1, /* gcFEATURE_BIT_REG_EndEvent */
        0x1, /* gcFEATURE_BIT_REG_S1S8 */
        0x1, /* gcFEATURE_BIT_REG_Halti1 */
        0x0, /* gcFEATURE_BIT_REG_RGB888 */
        0x1, /* gcFEATURE_BIT_REG_TX_YUVAssembler */
        0x1, /* gcFEATURE_BIT_REG_DynamicFrequencyScaling */
        0x0, /* gcFEATURE_BIT_REG_TXFilter */
        0x1, /* gcFEATURE_BIT_REG_FullDirectFB */
        0x0, /* gcFEATURE_BIT_REG_OnePass2DFilter */
        0x1, /* gcFEATURE_BIT_REG_ThreadWalkerInPS */
        0x1, /* gcFEATURE_BIT_REG_TileFiller */
        0x1, /* gcFEATURE_BIT_REG_YUVStandard */
        0x0, /* gcFEATURE_BIT_REG_MultiSourceBlt */
        0x0, /* gcFEATURE_BIT_REG_YUVConversion */
        0x1, /* gcFEATURE_BIT_REG_FlushFixed2D */
        0x1, /* gcFEATURE_BIT_REG_Interleaver */
        0x1, /* gcFEATURE_BIT_REG_MixedStreams */
        0x0, /* gcFEATURE_BIT_REG_L2CacheFor2D420 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes7 */
        0x0, /* gcFEATURE_BIT_REG_NoIndexPattern */
        0x1, /* gcFEATURE_BIT_REG_TextureTileStatus */
        0x1, /* gcFEATURE_BIT_REG_DecompressZ16 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes8 */
        0x1, /* gcFEATURE_BIT_REG_DERotationStallFix */
        0x0, /* gcFEATURE_BIT_REG_OclOnly */
        0x1, /* gcFEATURE_BIT_REG_NewFeatures0 */
        0x1, /* gcFEATURE_BIT_REG_InstructionCache */
        0x0, /* gcFEATURE_BIT_REG_GeometryShader */
        0x1, /* gcFEATURE_BIT_REG_TexCompressionSupertiled */
        0x1, /* gcFEATURE_BIT_REG_Generics */
        0x1, /* gcFEATURE_BIT_REG_BugFixes9 */
        0x0, /* gcFEATURE_BIT_REG_FastMSAA */
        0x0, /* gcFEATURE_BIT_REG_WClip */
        0x1, /* gcFEATURE_BIT_REG_BugFixes10 */
        0x1, /* gcFEATURE_BIT_REG_UnifiedSamplers */
        0x1, /* gcFEATURE_BIT_REG_BugFixes11 */
        0x1, /* gcFEATURE_BIT_REG_PerformanceCounters */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes12 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes13 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_ACE */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes14 */
        0x0, /* gcFEATURE_BIT_REG_PowerOptimizations0 */
        0x1, /* gcFEATURE_BIT_REG_NewHZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes15 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements1 */
        0x0, /* gcFEATURE_BIT_REG_DENoGamma */
        0x0, /* gcFEATURE_BIT_REG_PAEnhancements2 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_HIEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes16 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements4 */
        0x0, /* gcFEATURE_BIT_REG_PEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_MCEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_Halti2 */
        0x0, /* gcFEATURE_BIT_REG_DEMirrorRotate */
        0x1, /* gcFEATURE_BIT_REG_SmallMSAA */
        0x1, /* gcFEATURE_BIT_REG_BugFixes17 */
        0x0, /* gcFEATURE_BIT_REG_Rasterizer2 */
        0x0, /* gcFEATURE_BIT_REG_DualPipeOPF */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2 */
        0x0, /* gcFEATURE_BIT_REG_CSCV2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes18 */
        0x0, /* gcFEATURE_BIT_REG_Compression2D */
        0x0, /* gcFEATURE_BIT_REG_Probe */
        0x1, /* gcFEATURE_BIT_REG_MediumPrecision */
        0x0, /* gcFEATURE_BIT_REG_DESupertile */
        0x1, /* gcFEATURE_BIT_REG_BugFixes19 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements6 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements7 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes20 */
        0x0, /* gcFEATURE_BIT_REG_DEAddress40 */
        0x0, /* gcFEATURE_BIT_REG_MiniMMUFix */
        0x1, /* gcFEATURE_BIT_REG_EEZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes21 */
        0x0, /* gcFEATURE_BIT_REG_ExtraVgCaps */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV15 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes22 */
        0x1, /* gcFEATURE_BIT_REG_Halti3 */
        0x0, /* gcFEATURE_BIT_REG_TessellationShaders */
        0x0, /* gcFEATURE_BIT_REG_OPF9Tap */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2StrQuad */
        0x0, /* gcFEATURE_BIT_REG_SeperateSRCAndDstCache */
        0x1, /* gcFEATURE_BIT_REG_Halti4 */
        0x1, /* gcFEATURE_BIT_REG_RAWriteDepth */
        0x0, /* gcFEATURE_BIT_REG_AndroidOnly */
        0x1, /* gcFEATURE_BIT_REG_HasChipProductReg */
        0x0, /* gcFEATURE_BIT_REG_TXSupportDEC */
        0x1, /* gcFEATURE_BIT_REG_S8MSAACompression */
        0x1, /* gcFEATURE_BIT_REG_BugFixesIn544 */
        0x0, /* gcFEATURE_BIT_REG_L2CacheRemove */
        0x1, /* gcFEATURE_BIT_REG_FEAllowRndVtxCnt */
        0x0, /* gcFEATURE_BIT_REG_CubeMapFL28 */
        0x1, /* gcFEATURE_BIT_REG_TX6bitFrac */
        0x1, /* gcFEATURE_BIT_REG_FEAllowStallPrefetchEng */
        0x0, /* gcFEATURE_BIT_REG_ThirdPartyCompression */
        0x1, /* gcFEATURE_BIT_REG_RSS8 */
        0x1, /* gcFEATURE_BIT_REG_MSAACoherencyCheck */
        0x1, /* gcFEATURE_BIT_REG_Halti5 */
        0x1, /* gcFEATURE_BIT_REG_Evis */
        0x0, /* gcFEATURE_BIT_REG_BltEngine */
        0x0, /* gcFEATURE_BIT_REG_BugFixes23 */
        0x0, /* gcFEATURE_BIT_REG_BugFixes24 */
        0x0, /* gcFEATURE_BIT_REG_DEC */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12 */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12_10BIT */
        0x0, /* gcFEATURE_BIT_REG_DisableVIP */
        0x0, /* gcFEATURE_BIT_RenderTarget8 */
        0x0, /* gcFEATURE_BIT_TxLodFlowCorrection */
        0x0, /* gcFEATURE_BIT_FaceLod */
        0x0, /* gcFEATURE_BIT_MultiCoreSemaphoreStallV2 */
        0x1, /* gcFEATURE_BIT_VMSAA */
        0x0, /* gcFEATURE_BIT_ChipEnableLink */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_1_5_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_BILINEAR_FILTER */
        0x1, /* gcFEATURE_BIT_RA_HZEZ_CLOCK_CONTROL */
        0x1, /* gcFEATURE_BIT_CACHE128B256BPERLINE */
        0x1, /* gcFEATURE_BIT_V4Compression */
        0x0, /* gcFEATURE_BIT_PE2D_MAJOR_SUPER_TILE */
        0x1, /* gcFEATURE_BIT_PE_32BPC_COLORMASK_FIX */
        0x1, /* gcFEATURE_BIT_ALPHA_BLENDING_OPT */
        0x1, /* gcFEATURE_BIT_NEW_GPIPE */
        0x0, /* gcFEATURE_BIT_PIPELINE_32_ATTRIBUTES */
        0x0, /* gcFEATURE_BIT_MSAA_SHADING */
        0x0, /* gcFEATURE_BIT_NO_ANISTRO_FILTER */
        0x1, /* gcFEATURE_BIT_NO_ASTC */
        0x0, /* gcFEATURE_BIT_NO_DXT */
        0x0, /* gcFEATURE_BIT_HWTFB */
        0x1, /* gcFEATURE_BIT_RA_DEPTH_WRITE_MSAA1X_FIX */
        0x1, /* gcFEATURE_BIT_EZHZ_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_FIX */
        0x1, /* gcFEATURE_BIT_SH_HALFDEPENDENCY_FIX */
        0x1, /* gcFEATURE_BIT_USC_MCFILL_FIX */
        0x1, /* gcFEATURE_BIT_TPG_TCPERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_MDFIFO_OVERFLOW_FIX */
        0x1, /* gcFEATURE_BIT_SH_TEXLD_BARRIER_IN_CS_FIX */
        0x1, /* gcFEATURE_BIT_RS_NEW_BASEADDR */
        0x1, /* gcFEATURE_BIT_PE_8bpp_DUALPIPE_FIX */
        0x0, /* gcFEATURE_BIT_SH_ADVANCED_INSTR */
        0x1, /* gcFEATURE_BIT_SH_FLAT_INTERPOLATION_DUAL16_FIX */
        0x1, /* gcFEATURE_BIT_USC_CONTINUOUS_FLUS_FIX */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_V4 */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_ALPHA_KILL */
        0x1, /* gcFEATURE_BIT_PE_NO_ALPHA_TEST */
        0x0, /* gcFEATURE_BIT_TX_LOD_NEAREST_SELECT */
        0x1, /* gcFEATURE_BIT_SH_FIX_LDEXP */
        0x1, /* gcFEATURE_BIT_SUPPORT_MOVAI */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_MAXPAGES_FIX */
        0x1, /* gcFEATURE_BIT_PE_RGBA16I_FIX */
        0x1, /* gcFEATURE_BIT_BLT_8bpp_256TILE_FC_FIX */
        0x1, /* gcFEATURE_BIT_PE_64bit_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_USC_FULL_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_TX_YUV_ASSEMBLER_10BIT */
        0x1, /* gcFEATURE_BIT_FE_32bit_INDEX_FIX */
        0x1, /* gcFEATURE_BIT_BLT_64bpp_MASKED_CLEAR_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY */
        0x1, /* gcFEATURE_BIT_ROBUSTNESS */
        0x1, /* gcFEATURE_BIT_USC_ATOMIC_FIX */
        0x1, /* gcFEATURE_BIT_SH_PSO_MSAA1x_FIX */
        0x1, /* gcFEATURE_BIT_USC_VX_PERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_GOS_ADDR_FIX */
        0x1, /* gcFEATURE_BIT_TX_8bit_UVFrac */
        0x1, /* gcFEATURE_BIT_TX_DESC_CACHE_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_RSBLT_MSAA_DECOMPRESSION */
        0x0, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE */
        0x1, /* gcFEATURE_BIT_DRAWID */
        0x1, /* gcFEATURE_BIT_PSIO_SAMPLEMASK_IN_R0ZW_FIX */
        0x1, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE_V2 */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG */
        0x0, /* gcFEATURE_BIT_SNAPPAGE_CMD */
        0x1, /* gcFEATURE_BIT_SH_NO_INDEX_CONST_ON_A0 */
        0x1, /* gcFEATURE_BIT_SH_NO_ONECONST_LIMIT */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_ON_TEMP */
        0x1, /* gcFEATURE_BIT_COMPUTE_ONLY */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_CLAMP */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_ALLOC_COUNT_FIX */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_PREFETCH */
        0x0, /* gcFEATURE_BIT_PE2D_SEPARATE_CACHE */
        0x1, /* gcFEATURE_BIT_PE_MSAA_OQ_FIX */
        0x1, /* gcFEATURE_BIT_PSIO_MSAA_CL_FIX */
        0x1, /* gcFEATURE_BIT_USC_DEFER_FILL_FIX */
        0x1, /* gcFEATURE_BIT_SH_CLOCK_GATE_FIX */
        0x0, /* gcFEATURE_BIT_FE_NEED_DUMMYDRAW */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_OUTPUT */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_10BIT */
        0x0, /* gcFEATURE_BIT_MULTI_CLUSTER */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK */
        0x0, /* gcFEATURE_BIT_SH_DUAL16_SAMPLEMASK_ZW */
        0x0, /* gcFEATURE_BIT_TPG_TRIVIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TX_ASTC_MULTISLICE_FIX */
        0x0, /* gcFEATURE_BIT_FE_ROBUST_FIX */
        0x0, /* gcFEATURE_BIT_SH_GPIPE_ACCESS_FULLTEMPS */
        0x0, /* gcFEATURE_BIT_PSIO_INTERLOCK */
        0x1, /* gcFEATURE_BIT_PA_WIDELINE_FIX */
        0x0, /* gcFEATURE_BIT_WIDELINE_HELPER_FIX */
        0x0, /* gcFEATURE_BIT_G2D_3rd_PARTY_COMPRESSION_1_1 */
        0x0, /* gcFEATURE_BIT_TX_FLUSH_L1CACHE */
        0x1, /* gcFEATURE_BIT_PE_DITHER_FIX2 */
        0x0, /* gcFEATURE_BIT_SH_TEXLD_U_FIX */
        0x0, /* gcFEATURE_BIT_MC_FCCACHE_BYTEMASK */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK_FIX */
        0x0, /* gcFEATURE_BIT_PE_ADVANCE_BLEND_PART0 */
        0x0, /* gcFEATURE_BIT_FE_PATCHLIST_FETCH_FIX */
        0x1, /* gcFEATURE_BIT_RA_CG_FIX */
        0x0, /* gcFEATURE_BIT_DEC400 */
        0x0, /* gcFEATURE_BIT_LS_SUPPORT_PERCOMP_DEPENDENCY */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG2 */
        0x0, /* gcFEATURE_BIT_PE_VMSAA_COVERAGE_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY_AHB */
        0x0, /* gcFEATURE_BIT_MULTICORE_SEMAPHORESTALL_V3 */
        0x0, /* gcFEATURE_BIT_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_SH_CMPLX */
        0x0, /* gcFEATURE_BIT_SH_IDIV0_SWZL_EHS */
        0x0, /* gcFEATURE_BIT_TX_LERP_LESS_BIT */
        0x0, /* gcFEATURE_BIT_SH_GM_ENDIAN */
        0x0, /* gcFEATURE_BIT_SH_GM_USC_UNALLOC */
        0x0, /* gcFEATURE_BIT_SH_END_OF_BB */
        0x0, /* gcFEATURE_BIT_TX_BORDER_CLAMP_FIX */
        0x0, /* gcFEATURE_BIT_SH_IMG_LD_LASTPIXEL_FIX */
        0x0, /* gcFEATURE_BIT_ASYNC_BLT */
        0x0, /* gcFEATURE_BIT_ASYNC_FE_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_PSCS_THROTTLE */
        0x0, /* gcFEATURE_BIT_SEPARATE_LS */
        0x0, /* gcFEATURE_BIT_WIDELINE_TRIANGLE_EMU */
        0x0, /* gcFEATURE_BIT_FENCE_32BIT */
        0x0, /* gcFEATURE_BIT_FENCE_64BIT */
        0x0, /* gcFEATURE_BIT_PE_DEPTH_ONLY_OQFIX */
        0x0, /* gcFEATURE_BIT_TX_SEAMLESS_CUBE */
        0x0, /* gcFEATURE_BIT_TX_SNORM_SUPPORT */
        0x0, /* gcFEATURE_BIT_SH_SCATTER_GATHER */
        0x0, /* gcFEATURE_BIT_HWMANAGED_LS */
        0x0, /* gcFEATURE_BIT_SH_IMAGE_ENABLE_FIX */
        0x1, /* gcFEATURE_BIT_MSAA_FRAGMENT_OPERATION */
        0x0, /* gcFEATURE_BIT_PE_TILE_CACHE_FLUSH_FIX */
        0x0, /* gcFEATURE_BIT_BLT_YUV_OUTPUT */
        0x1, /* gcFEATURE_BIT_SH_IO_CG_FIX */
        0x0, /* gcFEATURE_BIT_PE_SWIZZLE */
        0x0, /* gcFEATURE_BIT_SH_ROBUSTNESS_FIX */
        0x0, /* gcFEATURE_BIT_USC_ATOMIC_FIX2 */
        0x0, /* gcFEATURE_BIT_PE_A8B8G8R8 */
        0x0, /* gcFEATURE_BIT_MULTIVIEW_RENDER */
        0x0, /* gcFEATURE_BIT_FE_DRAW_DIRECT */
        0x0, /* gcFEATURE_BIT_TX_VKBORDER_MODE */
        0x0, /* gcFEATURE_BIT_TX_UNNORMALIZED_COORD */
        0x0, /* gcFEATURE_BIT_PA_LINECLIP_FIX */
        0x0, /* gcFEATURE_BIT_TX_8bit_UVFrac_ROUNDING_FIX */
        0x0, /* gcFEATURE_BIT_MP_ARCH */
        0x0, /* gcFEATURE_BIT_TX_NO_FIXED_FILTER */
        0x0, /* gcFEATURE_BIT_SHARE_Z */
        0x0, /* gcFEATURE_BIT_DE_2D_FAST_CLEAR */
        0x0, /* gcFEATURE_BIT_TX_CLEAR_PENDING_FIX */
        0x0, /* gcFEATURE_BIT_NO_HI1_L2 */
        0x0, /* gcFEATURE_BIT_USC_EVICT_CTRL_FIFO_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_FORMAT_10BIT_CROSS_4K */
        0x0, /* gcFEATURE_BIT_FORMAT_P010LSB_I010 */
        0x0, /* gcFEATURE_BIT_ENDIAN_CONTROL */
        0x0, /* gcFEATURE_BIT_G2D_DEC400EX */
        0x0, /* gcFEATURE_BIT_SH_VX2_FLOATING_MAD_FIX */
        0x0, /* gcFEATURE_BIT_TS_FC_VULKAN_SUPPORT */
        0x0, /* gcFEATURE_BIT_MSAA_FLOAT_64BIT */
        0x0, /* gcFEATURE_BIT_VG_TS_CULLING */
        0x0, /* gcFEATURE_BIT_VG_FP25 */
        0x0, /* gcFEATURE_BIT_VG_AYUV_INPUT_OUTPUT */
        0x0, /* gcFEATURE_BIT_VG_DOUBLE_IMAGE */
        0x0, /* gcFEATURE_BIT_VG_RECTANGLE_STRIPE_MODE */
        0x0, /* gcFEATURE_BIT_VG_MMU */
        0x0, /* gcFEATURE_BIT_VG_IM_FILTER */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PLANAR */
        0x0, /* gcFEATURE_BIT_VG_PE_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_COLOR_PRECISION_8_BIT */
        0x0, /* gcFEATURE_BIT_VG_RESOLVE_ENGINE */
        0x0, /* gcFEATURE_BIT_VG_PE_COLOR_KEY */
        0x0, /* gcFEATURE_BIT_VG_IM_INDEX_FORMAT */
        0x0, /* gcFEATURE_BIT_VG_RESOLUTION_8K */
        0x0, /* gcFEATURE_BIT_VG_IMAGE_16K */
        0x0, /* gcFEATURE_BIT_VG_FORMAT_ARGB2222 */
        0x0, /* gcFEATURE_BIT_G2D_DEC400 */
        0x0, /* gcFEATURE_BIT_DC_OVERLAY_SCALING */
        0x0, /* gcFEATURE_BIT_DC_SOURCE_ROTATION */
        0x0, /* gcFEATURE_BIT_DC_TILED */
        0x0, /* gcFEATURE_BIT_DC_YUV_L1 */
        0x0, /* gcFEATURE_BIT_DC_D30_OUTPUT */
        0x0, /* gcFEATURE_BIT_DC_MMU */
        0x0, /* gcFEATURE_BIT_DC_COMPRESSION */
        0x0, /* gcFEATURE_BIT_DC_QOS */
        0x0, /* gcFEATURE_BIT_AI_GPU */
        0x0, /* gcFEATURE_BIT_EVIS_NO_ABSDIFF */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BITREPLACE */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BOXFILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_CORDIAC */
        0x0, /* gcFEATURE_BIT_EVIS_NO_DP32 */
        0x0, /* gcFEATURE_BIT_EVIS_NO_FILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_IADD */
        0x0, /* gcFEATURE_BIT_EVIS_NO_SELECTADD */
        0x0, /* gcFEATURE_BIT_EVIS_LERP_7OUTPUT */
        0x0, /* gcFEATURE_BIT_EVIS_ACCSQ_8OUTPUT */
        0x1, /* gcFEATURE_BIT_EVIS_VX2 */
        0x1, /* gcFEATURE_BIT_NN_FLOAT */
        0x1, /* gcFEATURE_BIT_TP_ENGINE */
        0x1, /* gcFEATURE_BIT_VIP_V7 */
        0x0, /* gcFEATURE_BIT_MCFE */
        0x0, /* gcFEATURE_BIT_NN_INTERLEVE8 */
        0x1, /* gcFEATURE_BIT_TP_REORDER */
        0x1, /* gcFEATURE_BIT_TP_LRN */
        0x1, /* gcFEATURE_BIT_TP_MAX_POOLING_STRIDE1 */
        0x0, /* gcFEATURE_BIT_NN_FP16_ALU */
        0x1, /* gcFEATURE_BIT_NN_INT16_ALU */
        0x1, /* gcFEATURE_BIT_TP_ROI_POOLING */
        0x1, /* gcFEATURE_BIT_NN_ZDP3 */
        0x0, /* gcFEATURE_BIT_NN_ZDP6 */
        0x0, /* gcFEATURE_BIT_NN_XYDP9 */
        0x1, /* gcFEATURE_BIT_NN_INT8_SCALE */
        0x1, /* gcFEATURE_BIT_NN_POWER_ISOLATION */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE1 */
        0x1, /* gcFEATURE_BIT_TF_QUANTIZATION */
        0x0, /* gcFEATURE_BIT_TP_SIMPLE_INT16 */
        0x1, /* gcFEATURE_BIT_TP_REAL_INT16 */
        0x0, /* gcFEATURE_BIT_TP_BFLOAT16 */
        0x1, /* gcFEATURE_BIT_NN_FIRST_PIXEL_POOLING */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE2 */
        0x1, /* gcFEATURE_BIT_NN_STRIDE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_XYDP6 */
        0x1, /* gcFEATURE_BIT_TP_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONV1x1_PERF_FIX */
        0x1, /* gcFEATURE_BIT_NN_CACHELINE_MODE_PERF_FIX */
        0x1, /* gcFEATURE_BIT_NN_PER3DTILE_BUBBLE_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONVOUT_FIFO_DEPTH_FIX */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE3 */
        0x0, /* gcFEATURE_BIT_USC_STAY_LRU */
        0x1, /* gcFEATURE_BIT_NN_NONZERO_MIRROR_BORDER */
        0x1, /* gcFEATURE_BIT_NN_COEF_DECOMPRESS_PERF2X */
        0x0, /* gcFEATURE_BIT_INPUT_4BIT */
        0x1, /* gcFEATURE_BIT_COEF_COMPRESSION_ENHANCEMENT */
        0x1, /* gcFEATURE_BIT_NN_ZXDP3_KERNEL_READ_CONFLICT_FIX */
        0x1, /* gcFEATURE_BIT_NN_ZDP3_NO_COMPRESS_FIX */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_PERF_FIX */
        0x1, /* gcFEATURE_BIT_OCB_COUNTER */
        0x1, /* gcFEATURE_BIT_NN_XYDP0 */
        0x0, /* gcFEATURE_BIT_ZRL_7BIT */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_MERGE_FIX */
        0x1, /* gcFEATURE_BIT_NN_SMALLBATCH_PHASE1 */
        0x1, /* gcFEATURE_BIT_TP_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_SCALER */
        0x0, /* gcFEATURE_BIT_SCALER_4K */
        0x0, /* gcFEATURE_BIT_NN_REQ_SLOWARBITRATION_FIX */
        0x0, /* gcFEATURE_BIT_IMAGE_PARTIAL_CACHE */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNELHEAD_FIX */
        0x1, /* gcFEATURE_BIT_NN_SINGLEPORT_ACCUMBUFFER */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH */
        0x1, /* gcFEATURE_BIT_ZRL_8BIT */
        0x1, /* gcFEATURE_BIT_NN_DEPTHWISE_SUPPORT */
        0x1, /* gcFEATURE_BIT_NN_WRITE_WITHOUT_USC */
        0x1, /* gcFEATURE_BIT_NN_ZDP_INIMAGE_SIZE_FIX */
        0x1, /* gcFEATURE_BIT_HI_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_INCORRECT_WR_REQ_TO_USC_BETWEEN_REORDER_AND_NORMAL_LAYER_FIX */
        0x1, /* gcFEATURE_BIT_TP_COEF_COMPRESSION_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_VIP_DEC400 */
        0x1, /* gcFEATURE_BIT_IMAGE_NOT_PACKED_IN_SRAM_FIX */
        0x1, /* gcFEATURE_BIT_IDLE_BEFORE_FLUSH_COMPLETE_FIX */
        0x1, /* gcFEATURE_BIT_NO_FLUSH_USC_FIX */
        0x1, /* gcFEATURE_BIT_COEF_DELTA_CORD_OVERFLOW_ZRL_8BIT_FIX */
        0x1, /* gcFEATURE_BIT_XY_OFFSET_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_USC_INVALIDATE_CACHE_LINE_FIX */
        0x0, /* gcFEATURE_BIT_LOW_EFFICIENCY_OF_ID_WRITE_IMGBUF_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_PER_CORE_LESS_THAN_THIRD_COEF_BUFF_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_USC_BOTTLENECK_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_SIZE_WASTE_IN_PARTIAL_MODE_FIX */
        0x1, /* gcFEATURE_BIT_FULLCACHE_KERNEL_INTERLEAVE_FIX */
        0x1, /* gcFEATURE_BIT_TP_REORDER_LAYER_SUSPEND_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_VIP_SRAM_READ_BW_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_IMG_POP_PIPELINE_PAUSE_FIX */
        0x1, /* gcFEATURE_BIT_DR_JD_DIFF_CONDITION_FOR_CACHELINE_MODE_PRE_FIX */
        0x1, /* gcFEATURE_BIT_OUTIMAGE_X_BITWIDTH_LIMIT_FOR_NN_TRANSPOSE_FIX */
        0x1, /* gcFEATURE_BIT_SMALL_BATCH_FLOPS_RESET_FIX */
        0x0, /* gcFEATURE_BIT_SMALL_BATCH_DISBLE_FIX */
        0x1, /* gcFEATURE_BIT_NEGATIVE_POST_SHIFT_FIX */
        0x1, /* gcFEATURE_BIT_NN_COMMAND_KERNEL_REQUEST_CONFICT_FIX */
        0x1, /* gcFEATURE_BIT_OCB_REMAP_PHYSICAL_ADDRESS */
        0x1, /* gcFEATURE_BIT_NN_NO_Z_LOCATION_OFFSET */
        0x0, /* gcFEATURE_BIT_NN_LEAKY_RELU */
        0x0, /* gcFEATURE_BIT_NN_PRELU */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT_ASYM */
        0x0, /* gcFEATURE_BIT_NN_NATIVE_STRIDE_TWO */
        0x0, /* gcFEATURE_BIT_NN_TENSOR_ADD */
        0x0, /* gcFEATURE_BIT_NN_FLOAT_POST_MULT */
        0x1, /* gcFEATURE_BIT_NN_SLICE_PADDING_TO_64BYTE_ALIGN */
        0x0, /* gcFEATURE_BIT_NN_DW_1x1_CONV_MERGE */
        0x1, /* gcFEATURE_BIT_NN_SLOW_OUTPUT */
        0x1, /* gcFEATURE_BIT_NO_NARROW_POST_PROCESS_PIPE */
        0x1, /* gcFEATURE_BIT_TP_NN_PROBE */
        0x0, /* gcFEATURE_BIT_TP_23BITS_POST_MULTIPLIER */
        0x1, /* gcFEATURE_BIT_NN_TRANSPOSE */
        0x0, /* gcFEATURE_BIT_EVIS2_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_USC_ASYNC_CP_RTN_FLOP_RESET_FIX */
        0x1, /* gcFEATURE_BIT_DDR_BURST_LEN_256B */
        0x0, /* gcFEATURE_BIT_IMG_CAHCE_MODE_MUST_0_IN_IMG_DIRECT_MODE_FIX */
        0x1, /* gcFEATURE_BIT_USE_SINGLE_PORT_VIPSRAM */
        0x0, /* gcFEATURE_BIT_NN_ASYMMETRIC_INT8 */
        0x1, /* gcFEATURE_BIT_DEPTHWISE_NEIGHBOR_IMG_DATA_TRANSFER_NOT_EFFICIENT_FIX */
        0x0, /* gcFEATURE_BIT_PRELU_LEAKLY_RELU_CLAMP */
        0x0, /* gcFEATURE_BIT_TP_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_SMALL_BATCH_PHASE2 */
        0x0, /* gcFEATURE_BIT_TILE_ACCESS_CAPABILITY */
        0x0, /* gcFEATURE_BIT_FAST_DP3_PREPROCESSOR */
        0x0, /* gcFEATURE_BIT_NN_COMPRESSION_BYPASSS */
        0x0, /* gcFEATURE_BIT_BFLOAT_KERNEL_COMPRESSION_ZERO_SKIP_FIX */
        0x0, /* gcFEATURE_BIT_TP_3_USC */
        0x0, /* gcFEATURE_BIT_TP_KERNEL_1BYTE_ALGIN */
        0x0, /* gcFEATURE_BIT_TPLITE_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_PREPROCESS_IMG_BUF_640BYTE_LIMIT */
        0x0, /* gcFEATURE_BIT_V8_ACCUMLATION_READ_OUT_HAS_BUBBLES_PERF_FIX */
        0x0, /* gcFEATURE_BIT_V8_SINGLE_PORT_ACCUMULATION_BUFFER_RW_CONFICT_ZERO_SKIP_PERF_FIX */
        0x0, /* gcFEATURE_BIT_BURST_COLLECT_DUMMY_DATA_WASTE_CYCLES_FIX */
        0x1, /* gcFEATURE_BIT_INIMG_NOT_64BYTE_ALIGN_CACHELINE_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TP_ACCESS_VIPSRAM_OT_IS_ONE_FIX */
        0x0, /* gcFEATURE_BIT_VIP_HW_FINAL_RELEASE */
    },
    /* vipnano-qi */
    {
        0x8000, /* ChipID */
        0x7131, /* ChipRevision */
        0x5000009, /* ProductID */
        0x8000000, /* EcoID */
        0xa1, /* CustomerID */
        0x0, /* PatchVersion */
        "", /* ProductName */
        0x0, /* FormalRelease */
        0x40, /* gcFEATURE_VALUE_TempRegisters */
        0x100, /* gcFEATURE_VALUE_ThreadCount */
        0x1, /* gcFEATURE_VALUE_NumShaderCores */
        0x200, /* gcFEATURE_VALUE_InstructionCount */
        0x140, /* gcFEATURE_VALUE_NumberOfConstants */
        0x1, /* gcFEATURE_VALUE_CoreCount */
        0x10, /* gcFEATURE_VALUE_LocalStorageSize */
        0x10, /* gcFEATURE_VALUE_L1CacheSize */
        0x200, /* gcFEATURE_VALUE_InstructionMemorySize */
        0x14, /* gcFEATURE_VALUE_ShaderPCLength */
        0x10, /* gcFEATURE_VALUE_USC_MAX_PAGES */
        0x1, /* gcFEATURE_VALUE_NumPixelPipes */
        0x2, /* gcFEATURE_VALUE_USC_CACHE_CONTROLLERS */
        0x2, /* gcFEATURE_VALUE_USC_BANKS */
        0x8, /* gcFEATURE_VALUE_Streams */
        0x10, /* gcFEATURE_VALUE_VaryingCount */
        0x400, /* gcFEATURE_VALUE_VertexOutputBufferSize */
        0x0, /* gcFEATURE_VALUE_BufferSize */
        0x10, /* gcFEATURE_VALUE_VertexCacheSize */
        0x0, /* gcFEATURE_VALUE_NumResolvePipes */
        0x100, /* gcFEATURE_VALUE_RESULT_WINDOW_MAX_SIZE */
        0x0, /* gcFEATURE_VALUE_ClusterAliveMask */
        0x40, /* gcFEATURE_VALUE_NNMadPerCore */
        0x8, /* gcFEATURE_VALUE_NNCoreCount */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT8 */
        0x8, /* gcFEATURE_VALUE_NNCoreCount_INT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_FLOAT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_BFLOAT */
        0xc, /* gcFEATURE_VALUE_NNInputBufferDepth */
        0x40, /* gcFEATURE_VALUE_NNAccumBufferDepth */
        0x400, /* gcFEATURE_VALUE_TPEngine_PwlLUTCount */
        0x10, /* gcFEATURE_VALUE_TPEngine_PwlLUTSize */
        0x100000, /* gcFEATURE_VALUE_VIP_SRAM_SIZE */
        0x6, /* gcFEATURE_VALUE_TPEngine_CoreCount */
        0x0, /* gcFEATURE_VALUE_AXI_SRAM_SIZE */
        0x4, /* gcFEATURE_VALUE_NN_INIMAGE_OFFSET_BITS */
        0x180, /* gcFEATURE_VALUE_TP_REORDER_INIMAGE_SIZE */
        0x0, /* gcFEATURE_VALUE_TPLite_CoreCount */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_X */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_Y */
        0x1, /* gcFEATURE_VALUE_NNFP16_ZDP */
        0x8, /* gcFEATURE_VALUE_NN_LANES_PER_OUT_CYCLE */
        0x20, /* gcFEATURE_VALUE_MAX_OT_NUMBER */
        0x40, /* gcFEATURE_VALUE_PHYSICAL_VIP_SRAM_WIDTH_IN_BYTE */
        0x20, /* gcFEATURE_VALUE_EQUIVALENT_VIP_SRAM_WIDTH_INBYTE */
        0x8, /* gcFEATURE_VALUE_TP_ZRL_BITS */
        0x80, /* gcFEATURE_VALUE_LATENCY_HIDING_AT_FULL_AXI_BW */
        0x10, /* gcFEATURE_VALUE_AXI_BUS_WIDTH */
        0xb, /* gcFEATURE_VALUE_NN_KERNEL_X_SIZE */
        0xb, /* gcFEATURE_VALUE_NN_KERNEL_Y_SIZE */
        0xfffff, /* gcFEATURE_VALUE_NN_KERNEL_Z_SIZE */
        0xf, /* gcFEATURE_VALUE_NN_X_OFFSET */
        0xf, /* gcFEATURE_VALUE_NN_Y_OFFSET */
        0x40, /* gcFEATURE_VALUE_DDR_KERNEL_BURST_SIZE */
        0x0, /* gcFEATURE_BIT_REG_FastClear */
        0x0, /* gcFEATURE_BIT_REG_SpecialAntiAliasing */
        0x1, /* gcFEATURE_BIT_REG_Pipe3D */
        0x1, /* gcFEATURE_BIT_REG_DXTTextureCompression */
        0x0, /* gcFEATURE_BIT_REG_DebugMode */
        0x1, /* gcFEATURE_BIT_REG_ZCompression */
        0x0, /* gcFEATURE_BIT_REG_YUV420Filter */
        0x1, /* gcFEATURE_BIT_REG_MSAA */
        0x0, /* gcFEATURE_BIT_REG_DC */
        0x0, /* gcFEATURE_BIT_REG_Pipe2D */
        0x1, /* gcFEATURE_BIT_REG_ETC1TextureCompression */
        0x1, /* gcFEATURE_BIT_REG_FastScaler */
        0x1, /* gcFEATURE_BIT_REG_HighDynamicRange */
        0x1, /* gcFEATURE_BIT_REG_YUV420Tiler */
        0x1, /* gcFEATURE_BIT_REG_ModuleCG */
        0x0, /* gcFEATURE_BIT_REG_MinArea */
        0x0, /* gcFEATURE_BIT_REG_NoEZ */
        0x0, /* gcFEATURE_BIT_REG_No422Texture */
        0x0, /* gcFEATURE_BIT_REG_BufferInterleaving */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite2D */
        0x0, /* gcFEATURE_BIT_REG_NoScaler */
        0x1, /* gcFEATURE_BIT_REG_YUY2Averaging */
        0x0, /* gcFEATURE_BIT_REG_HalfPECache */
        0x0, /* gcFEATURE_BIT_REG_HalfTXCache */
        0x0, /* gcFEATURE_BIT_REG_YUY2RenderTarget */
        0x0, /* gcFEATURE_BIT_REG_Mem32BitSupport */
        0x0, /* gcFEATURE_BIT_REG_PipeVG */
        0x0, /* gcFEATURE_BIT_REG_VGTS */
        0x0, /* gcFEATURE_BIT_REG_FE20 */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite3D */
        0x1, /* gcFEATURE_BIT_REG_RsYuvTarget */
        0x1, /* gcFEATURE_BIT_REG_FE20BitIndex */
        0x1, /* gcFEATURE_BIT_REG_FlipY */
        0x1, /* gcFEATURE_BIT_REG_DualReturnBus */
        0x1, /* gcFEATURE_BIT_REG_EndiannessConfig */
        0x1, /* gcFEATURE_BIT_REG_Texture8K */
        0x1, /* gcFEATURE_BIT_REG_CorrectTextureConverter */
        0x1, /* gcFEATURE_BIT_REG_SpecialMsaaLod */
        0x1, /* gcFEATURE_BIT_REG_FastClearFlush */
        0x1, /* gcFEATURE_BIT_REG_2DPE20 */
        0x0, /* gcFEATURE_BIT_REG_CorrectAutoDisable */
        0x1, /* gcFEATURE_BIT_REG_Render8K */
        0x1, /* gcFEATURE_BIT_REG_TileStatus2Bits */
        0x1, /* gcFEATURE_BIT_REG_SeparateTileStatusWhenInterleaved */
        0x1, /* gcFEATURE_BIT_REG_SuperTiled32x32 */
        0x0, /* gcFEATURE_BIT_REG_VG20 */
        0x0, /* gcFEATURE_BIT_REG_TSExtendedCommands */
        0x1, /* gcFEATURE_BIT_REG_CompressionFifoFixed */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions0 */
        0x0, /* gcFEATURE_BIT_REG_VGFilter */
        0x0, /* gcFEATURE_BIT_REG_VG21 */
        0x1, /* gcFEATURE_BIT_REG_ShaderGetsW */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions1 */
        0x1, /* gcFEATURE_BIT_REG_DefaultReg0 */
        0x1, /* gcFEATURE_BIT_REG_MC20 */
        0x0, /* gcFEATURE_BIT_REG_ShaderMSAASideband */
        0x1, /* gcFEATURE_BIT_REG_BugFixes0 */
        0x0, /* gcFEATURE_BIT_REG_VAA */
        0x0, /* gcFEATURE_BIT_REG_BypassInMSAA */
        0x0, /* gcFEATURE_BIT_REG_HierarchicalZ */
        0x0, /* gcFEATURE_BIT_REG_NewTexture */
        0x0, /* gcFEATURE_BIT_REG_A8TargetSupport */
        0x1, /* gcFEATURE_BIT_REG_CorrectStencil */
        0x1, /* gcFEATURE_BIT_REG_EnhanceVR */
        0x1, /* gcFEATURE_BIT_REG_RSUVSwizzle */
        0x1, /* gcFEATURE_BIT_REG_V2Compression */
        0x0, /* gcFEATURE_BIT_REG_VGDoubleBuffer */
        0x1, /* gcFEATURE_BIT_REG_BugFixes1 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes2 */
        0x0, /* gcFEATURE_BIT_REG_TextureStride */
        0x1, /* gcFEATURE_BIT_REG_BugFixes3 */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisable1 */
        0x0, /* gcFEATURE_BIT_REG_AutoRestartTS */
        0x1, /* gcFEATURE_BIT_REG_BugFixes4 */
        0x0, /* gcFEATURE_BIT_REG_L2Windowing */
        0x1, /* gcFEATURE_BIT_REG_HalfFloatPipe */
        0x1, /* gcFEATURE_BIT_REG_PixelDither */
        0x1, /* gcFEATURE_BIT_REG_TwoStencilReference */
        0x1, /* gcFEATURE_BIT_REG_ExtendedPixelFormat */
        0x1, /* gcFEATURE_BIT_REG_CorrectMinMaxDepth */
        0x1, /* gcFEATURE_BIT_REG_DitherAndFilterPlusAlpha2D */
        0x1, /* gcFEATURE_BIT_REG_BugFixes5 */
        0x0, /* gcFEATURE_BIT_REG_New2D */
        0x1, /* gcFEATURE_BIT_REG_NewFloatingPointArithmetic */
        0x1, /* gcFEATURE_BIT_REG_TextureHorizontalAlignmentSelect */
        0x1, /* gcFEATURE_BIT_REG_NonPowerOfTwo */
        0x1, /* gcFEATURE_BIT_REG_LinearTextureSupport */
        0x1, /* gcFEATURE_BIT_REG_Halti0 */
        0x0, /* gcFEATURE_BIT_REG_CorrectOverflowVG */
        0x1, /* gcFEATURE_BIT_REG_NegativeLogFix */
        0x1, /* gcFEATURE_BIT_REG_ResolveOffset */
        0x1, /* gcFEATURE_BIT_REG_OkToGateAxiClock */
        0x1, /* gcFEATURE_BIT_REG_MMU */
        0x1, /* gcFEATURE_BIT_REG_WideLine */
        0x1, /* gcFEATURE_BIT_REG_BugFixes6 */
        0x1, /* gcFEATURE_BIT_REG_FcFlushStall */
        0x1, /* gcFEATURE_BIT_REG_LineLoop */
        0x1, /* gcFEATURE_BIT_REG_LogicOp */
        0x1, /* gcFEATURE_BIT_REG_SeamlessCubeMap */
        0x1, /* gcFEATURE_BIT_REG_SuperTiledTexture */
        0x1, /* gcFEATURE_BIT_REG_LinearPE */
        0x1, /* gcFEATURE_BIT_REG_RectPrimitive */
        0x0, /* gcFEATURE_BIT_REG_Composition */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisableCountWidth */
        0x1, /* gcFEATURE_BIT_REG_PESwizzle */
        0x1, /* gcFEATURE_BIT_REG_EndEvent */
        0x1, /* gcFEATURE_BIT_REG_S1S8 */
        0x1, /* gcFEATURE_BIT_REG_Halti1 */
        0x0, /* gcFEATURE_BIT_REG_RGB888 */
        0x1, /* gcFEATURE_BIT_REG_TX_YUVAssembler */
        0x1, /* gcFEATURE_BIT_REG_DynamicFrequencyScaling */
        0x0, /* gcFEATURE_BIT_REG_TXFilter */
        0x1, /* gcFEATURE_BIT_REG_FullDirectFB */
        0x0, /* gcFEATURE_BIT_REG_OnePass2DFilter */
        0x1, /* gcFEATURE_BIT_REG_ThreadWalkerInPS */
        0x1, /* gcFEATURE_BIT_REG_TileFiller */
        0x1, /* gcFEATURE_BIT_REG_YUVStandard */
        0x0, /* gcFEATURE_BIT_REG_MultiSourceBlt */
        0x0, /* gcFEATURE_BIT_REG_YUVConversion */
        0x1, /* gcFEATURE_BIT_REG_FlushFixed2D */
        0x1, /* gcFEATURE_BIT_REG_Interleaver */
        0x1, /* gcFEATURE_BIT_REG_MixedStreams */
        0x0, /* gcFEATURE_BIT_REG_L2CacheFor2D420 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes7 */
        0x0, /* gcFEATURE_BIT_REG_NoIndexPattern */
        0x1, /* gcFEATURE_BIT_REG_TextureTileStatus */
        0x1, /* gcFEATURE_BIT_REG_DecompressZ16 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes8 */
        0x1, /* gcFEATURE_BIT_REG_DERotationStallFix */
        0x0, /* gcFEATURE_BIT_REG_OclOnly */
        0x1, /* gcFEATURE_BIT_REG_NewFeatures0 */
        0x1, /* gcFEATURE_BIT_REG_InstructionCache */
        0x0, /* gcFEATURE_BIT_REG_GeometryShader */
        0x1, /* gcFEATURE_BIT_REG_TexCompressionSupertiled */
        0x1, /* gcFEATURE_BIT_REG_Generics */
        0x1, /* gcFEATURE_BIT_REG_BugFixes9 */
        0x0, /* gcFEATURE_BIT_REG_FastMSAA */
        0x0, /* gcFEATURE_BIT_REG_WClip */
        0x1, /* gcFEATURE_BIT_REG_BugFixes10 */
        0x1, /* gcFEATURE_BIT_REG_UnifiedSamplers */
        0x1, /* gcFEATURE_BIT_REG_BugFixes11 */
        0x1, /* gcFEATURE_BIT_REG_PerformanceCounters */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes12 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes13 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_ACE */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes14 */
        0x0, /* gcFEATURE_BIT_REG_PowerOptimizations0 */
        0x1, /* gcFEATURE_BIT_REG_NewHZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes15 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements1 */
        0x0, /* gcFEATURE_BIT_REG_DENoGamma */
        0x0, /* gcFEATURE_BIT_REG_PAEnhancements2 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_HIEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes16 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements4 */
        0x0, /* gcFEATURE_BIT_REG_PEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_MCEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_Halti2 */
        0x0, /* gcFEATURE_BIT_REG_DEMirrorRotate */
        0x1, /* gcFEATURE_BIT_REG_SmallMSAA */
        0x1, /* gcFEATURE_BIT_REG_BugFixes17 */
        0x0, /* gcFEATURE_BIT_REG_Rasterizer2 */
        0x0, /* gcFEATURE_BIT_REG_DualPipeOPF */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2 */
        0x0, /* gcFEATURE_BIT_REG_CSCV2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes18 */
        0x0, /* gcFEATURE_BIT_REG_Compression2D */
        0x0, /* gcFEATURE_BIT_REG_Probe */
        0x1, /* gcFEATURE_BIT_REG_MediumPrecision */
        0x0, /* gcFEATURE_BIT_REG_DESupertile */
        0x1, /* gcFEATURE_BIT_REG_BugFixes19 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements6 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements7 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes20 */
        0x0, /* gcFEATURE_BIT_REG_DEAddress40 */
        0x0, /* gcFEATURE_BIT_REG_MiniMMUFix */
        0x1, /* gcFEATURE_BIT_REG_EEZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes21 */
        0x0, /* gcFEATURE_BIT_REG_ExtraVgCaps */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV15 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes22 */
        0x1, /* gcFEATURE_BIT_REG_Halti3 */
        0x0, /* gcFEATURE_BIT_REG_TessellationShaders */
        0x0, /* gcFEATURE_BIT_REG_OPF9Tap */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2StrQuad */
        0x0, /* gcFEATURE_BIT_REG_SeperateSRCAndDstCache */
        0x1, /* gcFEATURE_BIT_REG_Halti4 */
        0x1, /* gcFEATURE_BIT_REG_RAWriteDepth */
        0x0, /* gcFEATURE_BIT_REG_AndroidOnly */
        0x1, /* gcFEATURE_BIT_REG_HasChipProductReg */
        0x0, /* gcFEATURE_BIT_REG_TXSupportDEC */
        0x1, /* gcFEATURE_BIT_REG_S8MSAACompression */
        0x1, /* gcFEATURE_BIT_REG_BugFixesIn544 */
        0x0, /* gcFEATURE_BIT_REG_L2CacheRemove */
        0x1, /* gcFEATURE_BIT_REG_FEAllowRndVtxCnt */
        0x0, /* gcFEATURE_BIT_REG_CubeMapFL28 */
        0x1, /* gcFEATURE_BIT_REG_TX6bitFrac */
        0x1, /* gcFEATURE_BIT_REG_FEAllowStallPrefetchEng */
        0x0, /* gcFEATURE_BIT_REG_ThirdPartyCompression */
        0x1, /* gcFEATURE_BIT_REG_RSS8 */
        0x1, /* gcFEATURE_BIT_REG_MSAACoherencyCheck */
        0x1, /* gcFEATURE_BIT_REG_Halti5 */
        0x1, /* gcFEATURE_BIT_REG_Evis */
        0x0, /* gcFEATURE_BIT_REG_BltEngine */
        0x0, /* gcFEATURE_BIT_REG_BugFixes23 */
        0x0, /* gcFEATURE_BIT_REG_BugFixes24 */
        0x0, /* gcFEATURE_BIT_REG_DEC */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12 */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12_10BIT */
        0x0, /* gcFEATURE_BIT_REG_DisableVIP */
        0x0, /* gcFEATURE_BIT_RenderTarget8 */
        0x0, /* gcFEATURE_BIT_TxLodFlowCorrection */
        0x0, /* gcFEATURE_BIT_FaceLod */
        0x0, /* gcFEATURE_BIT_MultiCoreSemaphoreStallV2 */
        0x1, /* gcFEATURE_BIT_VMSAA */
        0x0, /* gcFEATURE_BIT_ChipEnableLink */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_1_5_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_BILINEAR_FILTER */
        0x1, /* gcFEATURE_BIT_RA_HZEZ_CLOCK_CONTROL */
        0x1, /* gcFEATURE_BIT_CACHE128B256BPERLINE */
        0x1, /* gcFEATURE_BIT_V4Compression */
        0x0, /* gcFEATURE_BIT_PE2D_MAJOR_SUPER_TILE */
        0x1, /* gcFEATURE_BIT_PE_32BPC_COLORMASK_FIX */
        0x1, /* gcFEATURE_BIT_ALPHA_BLENDING_OPT */
        0x1, /* gcFEATURE_BIT_NEW_GPIPE */
        0x0, /* gcFEATURE_BIT_PIPELINE_32_ATTRIBUTES */
        0x0, /* gcFEATURE_BIT_MSAA_SHADING */
        0x0, /* gcFEATURE_BIT_NO_ANISTRO_FILTER */
        0x1, /* gcFEATURE_BIT_NO_ASTC */
        0x0, /* gcFEATURE_BIT_NO_DXT */
        0x0, /* gcFEATURE_BIT_HWTFB */
        0x1, /* gcFEATURE_BIT_RA_DEPTH_WRITE_MSAA1X_FIX */
        0x1, /* gcFEATURE_BIT_EZHZ_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_FIX */
        0x1, /* gcFEATURE_BIT_SH_HALFDEPENDENCY_FIX */
        0x1, /* gcFEATURE_BIT_USC_MCFILL_FIX */
        0x1, /* gcFEATURE_BIT_TPG_TCPERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_MDFIFO_OVERFLOW_FIX */
        0x1, /* gcFEATURE_BIT_SH_TEXLD_BARRIER_IN_CS_FIX */
        0x1, /* gcFEATURE_BIT_RS_NEW_BASEADDR */
        0x1, /* gcFEATURE_BIT_PE_8bpp_DUALPIPE_FIX */
        0x0, /* gcFEATURE_BIT_SH_ADVANCED_INSTR */
        0x1, /* gcFEATURE_BIT_SH_FLAT_INTERPOLATION_DUAL16_FIX */
        0x1, /* gcFEATURE_BIT_USC_CONTINUOUS_FLUS_FIX */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_V4 */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_ALPHA_KILL */
        0x1, /* gcFEATURE_BIT_PE_NO_ALPHA_TEST */
        0x0, /* gcFEATURE_BIT_TX_LOD_NEAREST_SELECT */
        0x1, /* gcFEATURE_BIT_SH_FIX_LDEXP */
        0x1, /* gcFEATURE_BIT_SUPPORT_MOVAI */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_MAXPAGES_FIX */
        0x1, /* gcFEATURE_BIT_PE_RGBA16I_FIX */
        0x1, /* gcFEATURE_BIT_BLT_8bpp_256TILE_FC_FIX */
        0x1, /* gcFEATURE_BIT_PE_64bit_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_USC_FULL_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_TX_YUV_ASSEMBLER_10BIT */
        0x1, /* gcFEATURE_BIT_FE_32bit_INDEX_FIX */
        0x1, /* gcFEATURE_BIT_BLT_64bpp_MASKED_CLEAR_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY */
        0x1, /* gcFEATURE_BIT_ROBUSTNESS */
        0x1, /* gcFEATURE_BIT_USC_ATOMIC_FIX */
        0x1, /* gcFEATURE_BIT_SH_PSO_MSAA1x_FIX */
        0x1, /* gcFEATURE_BIT_USC_VX_PERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_GOS_ADDR_FIX */
        0x1, /* gcFEATURE_BIT_TX_8bit_UVFrac */
        0x1, /* gcFEATURE_BIT_TX_DESC_CACHE_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_RSBLT_MSAA_DECOMPRESSION */
        0x0, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE */
        0x1, /* gcFEATURE_BIT_DRAWID */
        0x1, /* gcFEATURE_BIT_PSIO_SAMPLEMASK_IN_R0ZW_FIX */
        0x1, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE_V2 */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG */
        0x0, /* gcFEATURE_BIT_SNAPPAGE_CMD */
        0x1, /* gcFEATURE_BIT_SH_NO_INDEX_CONST_ON_A0 */
        0x1, /* gcFEATURE_BIT_SH_NO_ONECONST_LIMIT */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_ON_TEMP */
        0x1, /* gcFEATURE_BIT_COMPUTE_ONLY */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_CLAMP */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_ALLOC_COUNT_FIX */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_PREFETCH */
        0x0, /* gcFEATURE_BIT_PE2D_SEPARATE_CACHE */
        0x1, /* gcFEATURE_BIT_PE_MSAA_OQ_FIX */
        0x1, /* gcFEATURE_BIT_PSIO_MSAA_CL_FIX */
        0x1, /* gcFEATURE_BIT_USC_DEFER_FILL_FIX */
        0x1, /* gcFEATURE_BIT_SH_CLOCK_GATE_FIX */
        0x0, /* gcFEATURE_BIT_FE_NEED_DUMMYDRAW */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_OUTPUT */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_10BIT */
        0x0, /* gcFEATURE_BIT_MULTI_CLUSTER */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK */
        0x0, /* gcFEATURE_BIT_SH_DUAL16_SAMPLEMASK_ZW */
        0x0, /* gcFEATURE_BIT_TPG_TRIVIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TX_ASTC_MULTISLICE_FIX */
        0x0, /* gcFEATURE_BIT_FE_ROBUST_FIX */
        0x0, /* gcFEATURE_BIT_SH_GPIPE_ACCESS_FULLTEMPS */
        0x0, /* gcFEATURE_BIT_PSIO_INTERLOCK */
        0x1, /* gcFEATURE_BIT_PA_WIDELINE_FIX */
        0x0, /* gcFEATURE_BIT_WIDELINE_HELPER_FIX */
        0x0, /* gcFEATURE_BIT_G2D_3rd_PARTY_COMPRESSION_1_1 */
        0x0, /* gcFEATURE_BIT_TX_FLUSH_L1CACHE */
        0x1, /* gcFEATURE_BIT_PE_DITHER_FIX2 */
        0x0, /* gcFEATURE_BIT_SH_TEXLD_U_FIX */
        0x0, /* gcFEATURE_BIT_MC_FCCACHE_BYTEMASK */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK_FIX */
        0x0, /* gcFEATURE_BIT_PE_ADVANCE_BLEND_PART0 */
        0x0, /* gcFEATURE_BIT_FE_PATCHLIST_FETCH_FIX */
        0x1, /* gcFEATURE_BIT_RA_CG_FIX */
        0x0, /* gcFEATURE_BIT_DEC400 */
        0x0, /* gcFEATURE_BIT_LS_SUPPORT_PERCOMP_DEPENDENCY */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG2 */
        0x0, /* gcFEATURE_BIT_PE_VMSAA_COVERAGE_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY_AHB */
        0x0, /* gcFEATURE_BIT_MULTICORE_SEMAPHORESTALL_V3 */
        0x0, /* gcFEATURE_BIT_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_SH_CMPLX */
        0x0, /* gcFEATURE_BIT_SH_IDIV0_SWZL_EHS */
        0x0, /* gcFEATURE_BIT_TX_LERP_LESS_BIT */
        0x0, /* gcFEATURE_BIT_SH_GM_ENDIAN */
        0x0, /* gcFEATURE_BIT_SH_GM_USC_UNALLOC */
        0x0, /* gcFEATURE_BIT_SH_END_OF_BB */
        0x0, /* gcFEATURE_BIT_TX_BORDER_CLAMP_FIX */
        0x0, /* gcFEATURE_BIT_SH_IMG_LD_LASTPIXEL_FIX */
        0x0, /* gcFEATURE_BIT_ASYNC_BLT */
        0x0, /* gcFEATURE_BIT_ASYNC_FE_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_PSCS_THROTTLE */
        0x0, /* gcFEATURE_BIT_SEPARATE_LS */
        0x0, /* gcFEATURE_BIT_WIDELINE_TRIANGLE_EMU */
        0x0, /* gcFEATURE_BIT_FENCE_32BIT */
        0x0, /* gcFEATURE_BIT_FENCE_64BIT */
        0x0, /* gcFEATURE_BIT_PE_DEPTH_ONLY_OQFIX */
        0x0, /* gcFEATURE_BIT_TX_SEAMLESS_CUBE */
        0x0, /* gcFEATURE_BIT_TX_SNORM_SUPPORT */
        0x0, /* gcFEATURE_BIT_SH_SCATTER_GATHER */
        0x0, /* gcFEATURE_BIT_HWMANAGED_LS */
        0x0, /* gcFEATURE_BIT_SH_IMAGE_ENABLE_FIX */
        0x1, /* gcFEATURE_BIT_MSAA_FRAGMENT_OPERATION */
        0x0, /* gcFEATURE_BIT_PE_TILE_CACHE_FLUSH_FIX */
        0x0, /* gcFEATURE_BIT_BLT_YUV_OUTPUT */
        0x1, /* gcFEATURE_BIT_SH_IO_CG_FIX */
        0x0, /* gcFEATURE_BIT_PE_SWIZZLE */
        0x0, /* gcFEATURE_BIT_SH_ROBUSTNESS_FIX */
        0x0, /* gcFEATURE_BIT_USC_ATOMIC_FIX2 */
        0x0, /* gcFEATURE_BIT_PE_A8B8G8R8 */
        0x0, /* gcFEATURE_BIT_MULTIVIEW_RENDER */
        0x0, /* gcFEATURE_BIT_FE_DRAW_DIRECT */
        0x0, /* gcFEATURE_BIT_TX_VKBORDER_MODE */
        0x0, /* gcFEATURE_BIT_TX_UNNORMALIZED_COORD */
        0x0, /* gcFEATURE_BIT_PA_LINECLIP_FIX */
        0x0, /* gcFEATURE_BIT_TX_8bit_UVFrac_ROUNDING_FIX */
        0x0, /* gcFEATURE_BIT_MP_ARCH */
        0x0, /* gcFEATURE_BIT_TX_NO_FIXED_FILTER */
        0x0, /* gcFEATURE_BIT_SHARE_Z */
        0x0, /* gcFEATURE_BIT_DE_2D_FAST_CLEAR */
        0x0, /* gcFEATURE_BIT_TX_CLEAR_PENDING_FIX */
        0x0, /* gcFEATURE_BIT_NO_HI1_L2 */
        0x0, /* gcFEATURE_BIT_USC_EVICT_CTRL_FIFO_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_FORMAT_10BIT_CROSS_4K */
        0x0, /* gcFEATURE_BIT_FORMAT_P010LSB_I010 */
        0x0, /* gcFEATURE_BIT_ENDIAN_CONTROL */
        0x0, /* gcFEATURE_BIT_G2D_DEC400EX */
        0x0, /* gcFEATURE_BIT_SH_VX2_FLOATING_MAD_FIX */
        0x0, /* gcFEATURE_BIT_TS_FC_VULKAN_SUPPORT */
        0x0, /* gcFEATURE_BIT_MSAA_FLOAT_64BIT */
        0x0, /* gcFEATURE_BIT_VG_TS_CULLING */
        0x0, /* gcFEATURE_BIT_VG_FP25 */
        0x0, /* gcFEATURE_BIT_VG_AYUV_INPUT_OUTPUT */
        0x0, /* gcFEATURE_BIT_VG_DOUBLE_IMAGE */
        0x0, /* gcFEATURE_BIT_VG_RECTANGLE_STRIPE_MODE */
        0x0, /* gcFEATURE_BIT_VG_MMU */
        0x0, /* gcFEATURE_BIT_VG_IM_FILTER */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PLANAR */
        0x0, /* gcFEATURE_BIT_VG_PE_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_COLOR_PRECISION_8_BIT */
        0x0, /* gcFEATURE_BIT_VG_RESOLVE_ENGINE */
        0x0, /* gcFEATURE_BIT_VG_PE_COLOR_KEY */
        0x0, /* gcFEATURE_BIT_VG_IM_INDEX_FORMAT */
        0x0, /* gcFEATURE_BIT_VG_RESOLUTION_8K */
        0x0, /* gcFEATURE_BIT_VG_IMAGE_16K */
        0x0, /* gcFEATURE_BIT_VG_FORMAT_ARGB2222 */
        0x0, /* gcFEATURE_BIT_G2D_DEC400 */
        0x0, /* gcFEATURE_BIT_DC_OVERLAY_SCALING */
        0x0, /* gcFEATURE_BIT_DC_SOURCE_ROTATION */
        0x0, /* gcFEATURE_BIT_DC_TILED */
        0x0, /* gcFEATURE_BIT_DC_YUV_L1 */
        0x0, /* gcFEATURE_BIT_DC_D30_OUTPUT */
        0x0, /* gcFEATURE_BIT_DC_MMU */
        0x0, /* gcFEATURE_BIT_DC_COMPRESSION */
        0x0, /* gcFEATURE_BIT_DC_QOS */
        0x0, /* gcFEATURE_BIT_AI_GPU */
        0x0, /* gcFEATURE_BIT_EVIS_NO_ABSDIFF */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BITREPLACE */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BOXFILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_CORDIAC */
        0x0, /* gcFEATURE_BIT_EVIS_NO_DP32 */
        0x0, /* gcFEATURE_BIT_EVIS_NO_FILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_IADD */
        0x0, /* gcFEATURE_BIT_EVIS_NO_SELECTADD */
        0x0, /* gcFEATURE_BIT_EVIS_LERP_7OUTPUT */
        0x0, /* gcFEATURE_BIT_EVIS_ACCSQ_8OUTPUT */
        0x1, /* gcFEATURE_BIT_EVIS_VX2 */
        0x1, /* gcFEATURE_BIT_NN_FLOAT */
        0x1, /* gcFEATURE_BIT_TP_ENGINE */
        0x1, /* gcFEATURE_BIT_VIP_V7 */
        0x0, /* gcFEATURE_BIT_MCFE */
        0x0, /* gcFEATURE_BIT_NN_INTERLEVE8 */
        0x1, /* gcFEATURE_BIT_TP_REORDER */
        0x1, /* gcFEATURE_BIT_TP_LRN */
        0x1, /* gcFEATURE_BIT_TP_MAX_POOLING_STRIDE1 */
        0x0, /* gcFEATURE_BIT_NN_FP16_ALU */
        0x1, /* gcFEATURE_BIT_NN_INT16_ALU */
        0x1, /* gcFEATURE_BIT_TP_ROI_POOLING */
        0x1, /* gcFEATURE_BIT_NN_ZDP3 */
        0x0, /* gcFEATURE_BIT_NN_ZDP6 */
        0x0, /* gcFEATURE_BIT_NN_XYDP9 */
        0x1, /* gcFEATURE_BIT_NN_INT8_SCALE */
        0x1, /* gcFEATURE_BIT_NN_POWER_ISOLATION */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE1 */
        0x1, /* gcFEATURE_BIT_TF_QUANTIZATION */
        0x0, /* gcFEATURE_BIT_TP_SIMPLE_INT16 */
        0x1, /* gcFEATURE_BIT_TP_REAL_INT16 */
        0x0, /* gcFEATURE_BIT_TP_BFLOAT16 */
        0x1, /* gcFEATURE_BIT_NN_FIRST_PIXEL_POOLING */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE2 */
        0x1, /* gcFEATURE_BIT_NN_STRIDE_SUPPORT */
        0x1, /* gcFEATURE_BIT_NN_XYDP6 */
        0x1, /* gcFEATURE_BIT_TP_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONV1x1_PERF_FIX */
        0x1, /* gcFEATURE_BIT_NN_CACHELINE_MODE_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_PER3DTILE_BUBBLE_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONVOUT_FIFO_DEPTH_FIX */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE3 */
        0x0, /* gcFEATURE_BIT_USC_STAY_LRU */
        0x1, /* gcFEATURE_BIT_NN_NONZERO_MIRROR_BORDER */
        0x1, /* gcFEATURE_BIT_NN_COEF_DECOMPRESS_PERF2X */
        0x0, /* gcFEATURE_BIT_INPUT_4BIT */
        0x1, /* gcFEATURE_BIT_COEF_COMPRESSION_ENHANCEMENT */
        0x1, /* gcFEATURE_BIT_NN_ZXDP3_KERNEL_READ_CONFLICT_FIX */
        0x1, /* gcFEATURE_BIT_NN_ZDP3_NO_COMPRESS_FIX */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_PERF_FIX */
        0x1, /* gcFEATURE_BIT_OCB_COUNTER */
        0x0, /* gcFEATURE_BIT_NN_XYDP0 */
        0x0, /* gcFEATURE_BIT_ZRL_7BIT */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_MERGE_FIX */
        0x1, /* gcFEATURE_BIT_NN_SMALLBATCH_PHASE1 */
        0x1, /* gcFEATURE_BIT_TP_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_SCALER */
        0x0, /* gcFEATURE_BIT_SCALER_4K */
        0x0, /* gcFEATURE_BIT_NN_REQ_SLOWARBITRATION_FIX */
        0x0, /* gcFEATURE_BIT_IMAGE_PARTIAL_CACHE */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNELHEAD_FIX */
        0x1, /* gcFEATURE_BIT_NN_SINGLEPORT_ACCUMBUFFER */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH */
        0x1, /* gcFEATURE_BIT_ZRL_8BIT */
        0x0, /* gcFEATURE_BIT_NN_DEPTHWISE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_WRITE_WITHOUT_USC */
        0x0, /* gcFEATURE_BIT_NN_ZDP_INIMAGE_SIZE_FIX */
        0x1, /* gcFEATURE_BIT_HI_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_INCORRECT_WR_REQ_TO_USC_BETWEEN_REORDER_AND_NORMAL_LAYER_FIX */
        0x0, /* gcFEATURE_BIT_TP_COEF_COMPRESSION_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_VIP_DEC400 */
        0x0, /* gcFEATURE_BIT_IMAGE_NOT_PACKED_IN_SRAM_FIX */
        0x0, /* gcFEATURE_BIT_IDLE_BEFORE_FLUSH_COMPLETE_FIX */
        0x1, /* gcFEATURE_BIT_NO_FLUSH_USC_FIX */
        0x1, /* gcFEATURE_BIT_COEF_DELTA_CORD_OVERFLOW_ZRL_8BIT_FIX */
        0x0, /* gcFEATURE_BIT_XY_OFFSET_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_USC_INVALIDATE_CACHE_LINE_FIX */
        0x0, /* gcFEATURE_BIT_LOW_EFFICIENCY_OF_ID_WRITE_IMGBUF_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_PER_CORE_LESS_THAN_THIRD_COEF_BUFF_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_USC_BOTTLENECK_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_SIZE_WASTE_IN_PARTIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNEL_INTERLEAVE_FIX */
        0x0, /* gcFEATURE_BIT_TP_REORDER_LAYER_SUSPEND_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_VIP_SRAM_READ_BW_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_IMG_POP_PIPELINE_PAUSE_FIX */
        0x1, /* gcFEATURE_BIT_DR_JD_DIFF_CONDITION_FOR_CACHELINE_MODE_PRE_FIX */
        0x1, /* gcFEATURE_BIT_OUTIMAGE_X_BITWIDTH_LIMIT_FOR_NN_TRANSPOSE_FIX */
        0x1, /* gcFEATURE_BIT_SMALL_BATCH_FLOPS_RESET_FIX */
        0x0, /* gcFEATURE_BIT_SMALL_BATCH_DISBLE_FIX */
        0x1, /* gcFEATURE_BIT_NEGATIVE_POST_SHIFT_FIX */
        0x0, /* gcFEATURE_BIT_NN_COMMAND_KERNEL_REQUEST_CONFICT_FIX */
        0x1, /* gcFEATURE_BIT_OCB_REMAP_PHYSICAL_ADDRESS */
        0x0, /* gcFEATURE_BIT_NN_NO_Z_LOCATION_OFFSET */
        0x0, /* gcFEATURE_BIT_NN_LEAKY_RELU */
        0x0, /* gcFEATURE_BIT_NN_PRELU */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT_ASYM */
        0x0, /* gcFEATURE_BIT_NN_NATIVE_STRIDE_TWO */
        0x0, /* gcFEATURE_BIT_NN_TENSOR_ADD */
        0x0, /* gcFEATURE_BIT_NN_FLOAT_POST_MULT */
        0x0, /* gcFEATURE_BIT_NN_SLICE_PADDING_TO_64BYTE_ALIGN */
        0x0, /* gcFEATURE_BIT_NN_DW_1x1_CONV_MERGE */
        0x0, /* gcFEATURE_BIT_NN_SLOW_OUTPUT */
        0x1, /* gcFEATURE_BIT_NO_NARROW_POST_PROCESS_PIPE */
        0x0, /* gcFEATURE_BIT_TP_NN_PROBE */
        0x0, /* gcFEATURE_BIT_TP_23BITS_POST_MULTIPLIER */
        0x0, /* gcFEATURE_BIT_NN_TRANSPOSE */
        0x0, /* gcFEATURE_BIT_EVIS2_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_USC_ASYNC_CP_RTN_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_DDR_BURST_LEN_256B */
        0x0, /* gcFEATURE_BIT_IMG_CAHCE_MODE_MUST_0_IN_IMG_DIRECT_MODE_FIX */
        0x0, /* gcFEATURE_BIT_USE_SINGLE_PORT_VIPSRAM */
        0x0, /* gcFEATURE_BIT_NN_ASYMMETRIC_INT8 */
        0x1, /* gcFEATURE_BIT_DEPTHWISE_NEIGHBOR_IMG_DATA_TRANSFER_NOT_EFFICIENT_FIX */
        0x0, /* gcFEATURE_BIT_PRELU_LEAKLY_RELU_CLAMP */
        0x0, /* gcFEATURE_BIT_TP_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_SMALL_BATCH_PHASE2 */
        0x0, /* gcFEATURE_BIT_TILE_ACCESS_CAPABILITY */
        0x0, /* gcFEATURE_BIT_FAST_DP3_PREPROCESSOR */
        0x0, /* gcFEATURE_BIT_NN_COMPRESSION_BYPASSS */
        0x0, /* gcFEATURE_BIT_BFLOAT_KERNEL_COMPRESSION_ZERO_SKIP_FIX */
        0x0, /* gcFEATURE_BIT_TP_3_USC */
        0x0, /* gcFEATURE_BIT_TP_KERNEL_1BYTE_ALGIN */
        0x0, /* gcFEATURE_BIT_TPLITE_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_PREPROCESS_IMG_BUF_640BYTE_LIMIT */
        0x0, /* gcFEATURE_BIT_V8_ACCUMLATION_READ_OUT_HAS_BUBBLES_PERF_FIX */
        0x0, /* gcFEATURE_BIT_V8_SINGLE_PORT_ACCUMULATION_BUFFER_RW_CONFICT_ZERO_SKIP_PERF_FIX */
        0x0, /* gcFEATURE_BIT_BURST_COLLECT_DUMMY_DATA_WASTE_CYCLES_FIX */
        0x1, /* gcFEATURE_BIT_INIMG_NOT_64BYTE_ALIGN_CACHELINE_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TP_ACCESS_VIPSRAM_OT_IS_ONE_FIX */
        0x1, /* gcFEATURE_BIT_VIP_HW_FINAL_RELEASE */
    },
    /* vippico_v3 */
    {
        0x8000, /* ChipID */
        0x7131, /* ChipRevision */
        0x8000001, /* ProductID */
        0x2000000, /* EcoID */
        0x99, /* CustomerID */
        0x0, /* PatchVersion */
        "", /* ProductName */
        0x0, /* FormalRelease */
        0x40, /* gcFEATURE_VALUE_TempRegisters */
        0x100, /* gcFEATURE_VALUE_ThreadCount */
        0x1, /* gcFEATURE_VALUE_NumShaderCores */
        0x200, /* gcFEATURE_VALUE_InstructionCount */
        0x140, /* gcFEATURE_VALUE_NumberOfConstants */
        0x1, /* gcFEATURE_VALUE_CoreCount */
        0x10, /* gcFEATURE_VALUE_LocalStorageSize */
        0x10, /* gcFEATURE_VALUE_L1CacheSize */
        0x200, /* gcFEATURE_VALUE_InstructionMemorySize */
        0x14, /* gcFEATURE_VALUE_ShaderPCLength */
        0x10, /* gcFEATURE_VALUE_USC_MAX_PAGES */
        0x1, /* gcFEATURE_VALUE_NumPixelPipes */
        0x2, /* gcFEATURE_VALUE_USC_CACHE_CONTROLLERS */
        0x2, /* gcFEATURE_VALUE_USC_BANKS */
        0x8, /* gcFEATURE_VALUE_Streams */
        0x10, /* gcFEATURE_VALUE_VaryingCount */
        0x400, /* gcFEATURE_VALUE_VertexOutputBufferSize */
        0x0, /* gcFEATURE_VALUE_BufferSize */
        0x10, /* gcFEATURE_VALUE_VertexCacheSize */
        0x0, /* gcFEATURE_VALUE_NumResolvePipes */
        0x100, /* gcFEATURE_VALUE_RESULT_WINDOW_MAX_SIZE */
        0x0, /* gcFEATURE_VALUE_ClusterAliveMask */
        0x40, /* gcFEATURE_VALUE_NNMadPerCore */
        0x2, /* gcFEATURE_VALUE_NNCoreCount */
        0x2, /* gcFEATURE_VALUE_NNCoreCount_INT8 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_INT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_FLOAT16 */
        0x0, /* gcFEATURE_VALUE_NNCoreCount_BFLOAT */
        0x6, /* gcFEATURE_VALUE_NNInputBufferDepth */
        0x40, /* gcFEATURE_VALUE_NNAccumBufferDepth */
        0x400, /* gcFEATURE_VALUE_TPEngine_PwlLUTCount */
        0x10, /* gcFEATURE_VALUE_TPEngine_PwlLUTSize */
        0x80000, /* gcFEATURE_VALUE_VIP_SRAM_SIZE */
        0x1, /* gcFEATURE_VALUE_TPEngine_CoreCount */
        0x0, /* gcFEATURE_VALUE_AXI_SRAM_SIZE */
        0x4, /* gcFEATURE_VALUE_NN_INIMAGE_OFFSET_BITS */
        0x180, /* gcFEATURE_VALUE_TP_REORDER_INIMAGE_SIZE */
        0x7, /* gcFEATURE_VALUE_TPLite_CoreCount */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_X */
        0x1, /* gcFEATURE_VALUE_NNFP16_XYDP_Y */
        0x1, /* gcFEATURE_VALUE_NNFP16_ZDP */
        0x8, /* gcFEATURE_VALUE_NN_LANES_PER_OUT_CYCLE */
        0x20, /* gcFEATURE_VALUE_MAX_OT_NUMBER */
        0x40, /* gcFEATURE_VALUE_PHYSICAL_VIP_SRAM_WIDTH_IN_BYTE */
        0x20, /* gcFEATURE_VALUE_EQUIVALENT_VIP_SRAM_WIDTH_INBYTE */
        0x8, /* gcFEATURE_VALUE_TP_ZRL_BITS */
        0x80, /* gcFEATURE_VALUE_LATENCY_HIDING_AT_FULL_AXI_BW */
        0x10, /* gcFEATURE_VALUE_AXI_BUS_WIDTH */
        0xb, /* gcFEATURE_VALUE_NN_KERNEL_X_SIZE */
        0xb, /* gcFEATURE_VALUE_NN_KERNEL_Y_SIZE */
        0xfffff, /* gcFEATURE_VALUE_NN_KERNEL_Z_SIZE */
        0xf, /* gcFEATURE_VALUE_NN_X_OFFSET */
        0xf, /* gcFEATURE_VALUE_NN_Y_OFFSET */
        0x40, /* gcFEATURE_VALUE_DDR_KERNEL_BURST_SIZE */
        0x0, /* gcFEATURE_BIT_REG_FastClear */
        0x0, /* gcFEATURE_BIT_REG_SpecialAntiAliasing */
        0x1, /* gcFEATURE_BIT_REG_Pipe3D */
        0x1, /* gcFEATURE_BIT_REG_DXTTextureCompression */
        0x0, /* gcFEATURE_BIT_REG_DebugMode */
        0x1, /* gcFEATURE_BIT_REG_ZCompression */
        0x0, /* gcFEATURE_BIT_REG_YUV420Filter */
        0x1, /* gcFEATURE_BIT_REG_MSAA */
        0x0, /* gcFEATURE_BIT_REG_DC */
        0x0, /* gcFEATURE_BIT_REG_Pipe2D */
        0x1, /* gcFEATURE_BIT_REG_ETC1TextureCompression */
        0x1, /* gcFEATURE_BIT_REG_FastScaler */
        0x1, /* gcFEATURE_BIT_REG_HighDynamicRange */
        0x1, /* gcFEATURE_BIT_REG_YUV420Tiler */
        0x1, /* gcFEATURE_BIT_REG_ModuleCG */
        0x0, /* gcFEATURE_BIT_REG_MinArea */
        0x0, /* gcFEATURE_BIT_REG_NoEZ */
        0x0, /* gcFEATURE_BIT_REG_No422Texture */
        0x0, /* gcFEATURE_BIT_REG_BufferInterleaving */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite2D */
        0x0, /* gcFEATURE_BIT_REG_NoScaler */
        0x1, /* gcFEATURE_BIT_REG_YUY2Averaging */
        0x0, /* gcFEATURE_BIT_REG_HalfPECache */
        0x0, /* gcFEATURE_BIT_REG_HalfTXCache */
        0x0, /* gcFEATURE_BIT_REG_YUY2RenderTarget */
        0x0, /* gcFEATURE_BIT_REG_Mem32BitSupport */
        0x0, /* gcFEATURE_BIT_REG_PipeVG */
        0x0, /* gcFEATURE_BIT_REG_VGTS */
        0x0, /* gcFEATURE_BIT_REG_FE20 */
        0x1, /* gcFEATURE_BIT_REG_ByteWrite3D */
        0x1, /* gcFEATURE_BIT_REG_RsYuvTarget */
        0x1, /* gcFEATURE_BIT_REG_FE20BitIndex */
        0x1, /* gcFEATURE_BIT_REG_FlipY */
        0x1, /* gcFEATURE_BIT_REG_DualReturnBus */
        0x1, /* gcFEATURE_BIT_REG_EndiannessConfig */
        0x1, /* gcFEATURE_BIT_REG_Texture8K */
        0x1, /* gcFEATURE_BIT_REG_CorrectTextureConverter */
        0x1, /* gcFEATURE_BIT_REG_SpecialMsaaLod */
        0x1, /* gcFEATURE_BIT_REG_FastClearFlush */
        0x1, /* gcFEATURE_BIT_REG_2DPE20 */
        0x0, /* gcFEATURE_BIT_REG_CorrectAutoDisable */
        0x1, /* gcFEATURE_BIT_REG_Render8K */
        0x1, /* gcFEATURE_BIT_REG_TileStatus2Bits */
        0x1, /* gcFEATURE_BIT_REG_SeparateTileStatusWhenInterleaved */
        0x1, /* gcFEATURE_BIT_REG_SuperTiled32x32 */
        0x0, /* gcFEATURE_BIT_REG_VG20 */
        0x0, /* gcFEATURE_BIT_REG_TSExtendedCommands */
        0x1, /* gcFEATURE_BIT_REG_CompressionFifoFixed */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions0 */
        0x0, /* gcFEATURE_BIT_REG_VGFilter */
        0x0, /* gcFEATURE_BIT_REG_VG21 */
        0x1, /* gcFEATURE_BIT_REG_ShaderGetsW */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions1 */
        0x1, /* gcFEATURE_BIT_REG_DefaultReg0 */
        0x1, /* gcFEATURE_BIT_REG_MC20 */
        0x0, /* gcFEATURE_BIT_REG_ShaderMSAASideband */
        0x1, /* gcFEATURE_BIT_REG_BugFixes0 */
        0x0, /* gcFEATURE_BIT_REG_VAA */
        0x0, /* gcFEATURE_BIT_REG_BypassInMSAA */
        0x0, /* gcFEATURE_BIT_REG_HierarchicalZ */
        0x0, /* gcFEATURE_BIT_REG_NewTexture */
        0x0, /* gcFEATURE_BIT_REG_A8TargetSupport */
        0x1, /* gcFEATURE_BIT_REG_CorrectStencil */
        0x1, /* gcFEATURE_BIT_REG_EnhanceVR */
        0x1, /* gcFEATURE_BIT_REG_RSUVSwizzle */
        0x1, /* gcFEATURE_BIT_REG_V2Compression */
        0x0, /* gcFEATURE_BIT_REG_VGDoubleBuffer */
        0x1, /* gcFEATURE_BIT_REG_BugFixes1 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes2 */
        0x0, /* gcFEATURE_BIT_REG_TextureStride */
        0x1, /* gcFEATURE_BIT_REG_BugFixes3 */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisable1 */
        0x0, /* gcFEATURE_BIT_REG_AutoRestartTS */
        0x1, /* gcFEATURE_BIT_REG_BugFixes4 */
        0x0, /* gcFEATURE_BIT_REG_L2Windowing */
        0x1, /* gcFEATURE_BIT_REG_HalfFloatPipe */
        0x1, /* gcFEATURE_BIT_REG_PixelDither */
        0x1, /* gcFEATURE_BIT_REG_TwoStencilReference */
        0x1, /* gcFEATURE_BIT_REG_ExtendedPixelFormat */
        0x1, /* gcFEATURE_BIT_REG_CorrectMinMaxDepth */
        0x1, /* gcFEATURE_BIT_REG_DitherAndFilterPlusAlpha2D */
        0x1, /* gcFEATURE_BIT_REG_BugFixes5 */
        0x0, /* gcFEATURE_BIT_REG_New2D */
        0x1, /* gcFEATURE_BIT_REG_NewFloatingPointArithmetic */
        0x1, /* gcFEATURE_BIT_REG_TextureHorizontalAlignmentSelect */
        0x1, /* gcFEATURE_BIT_REG_NonPowerOfTwo */
        0x1, /* gcFEATURE_BIT_REG_LinearTextureSupport */
        0x1, /* gcFEATURE_BIT_REG_Halti0 */
        0x0, /* gcFEATURE_BIT_REG_CorrectOverflowVG */
        0x1, /* gcFEATURE_BIT_REG_NegativeLogFix */
        0x1, /* gcFEATURE_BIT_REG_ResolveOffset */
        0x1, /* gcFEATURE_BIT_REG_OkToGateAxiClock */
        0x1, /* gcFEATURE_BIT_REG_MMU */
        0x1, /* gcFEATURE_BIT_REG_WideLine */
        0x1, /* gcFEATURE_BIT_REG_BugFixes6 */
        0x1, /* gcFEATURE_BIT_REG_FcFlushStall */
        0x1, /* gcFEATURE_BIT_REG_LineLoop */
        0x1, /* gcFEATURE_BIT_REG_LogicOp */
        0x1, /* gcFEATURE_BIT_REG_SeamlessCubeMap */
        0x1, /* gcFEATURE_BIT_REG_SuperTiledTexture */
        0x1, /* gcFEATURE_BIT_REG_LinearPE */
        0x1, /* gcFEATURE_BIT_REG_RectPrimitive */
        0x0, /* gcFEATURE_BIT_REG_Composition */
        0x1, /* gcFEATURE_BIT_REG_CorrectAutoDisableCountWidth */
        0x1, /* gcFEATURE_BIT_REG_PESwizzle */
        0x1, /* gcFEATURE_BIT_REG_EndEvent */
        0x1, /* gcFEATURE_BIT_REG_S1S8 */
        0x1, /* gcFEATURE_BIT_REG_Halti1 */
        0x0, /* gcFEATURE_BIT_REG_RGB888 */
        0x1, /* gcFEATURE_BIT_REG_TX_YUVAssembler */
        0x1, /* gcFEATURE_BIT_REG_DynamicFrequencyScaling */
        0x0, /* gcFEATURE_BIT_REG_TXFilter */
        0x1, /* gcFEATURE_BIT_REG_FullDirectFB */
        0x0, /* gcFEATURE_BIT_REG_OnePass2DFilter */
        0x1, /* gcFEATURE_BIT_REG_ThreadWalkerInPS */
        0x1, /* gcFEATURE_BIT_REG_TileFiller */
        0x1, /* gcFEATURE_BIT_REG_YUVStandard */
        0x0, /* gcFEATURE_BIT_REG_MultiSourceBlt */
        0x0, /* gcFEATURE_BIT_REG_YUVConversion */
        0x1, /* gcFEATURE_BIT_REG_FlushFixed2D */
        0x1, /* gcFEATURE_BIT_REG_Interleaver */
        0x1, /* gcFEATURE_BIT_REG_MixedStreams */
        0x0, /* gcFEATURE_BIT_REG_L2CacheFor2D420 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes7 */
        0x0, /* gcFEATURE_BIT_REG_NoIndexPattern */
        0x1, /* gcFEATURE_BIT_REG_TextureTileStatus */
        0x1, /* gcFEATURE_BIT_REG_DecompressZ16 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes8 */
        0x1, /* gcFEATURE_BIT_REG_DERotationStallFix */
        0x0, /* gcFEATURE_BIT_REG_OclOnly */
        0x1, /* gcFEATURE_BIT_REG_NewFeatures0 */
        0x1, /* gcFEATURE_BIT_REG_InstructionCache */
        0x0, /* gcFEATURE_BIT_REG_GeometryShader */
        0x1, /* gcFEATURE_BIT_REG_TexCompressionSupertiled */
        0x1, /* gcFEATURE_BIT_REG_Generics */
        0x1, /* gcFEATURE_BIT_REG_BugFixes9 */
        0x0, /* gcFEATURE_BIT_REG_FastMSAA */
        0x0, /* gcFEATURE_BIT_REG_WClip */
        0x1, /* gcFEATURE_BIT_REG_BugFixes10 */
        0x1, /* gcFEATURE_BIT_REG_UnifiedSamplers */
        0x1, /* gcFEATURE_BIT_REG_BugFixes11 */
        0x1, /* gcFEATURE_BIT_REG_PerformanceCounters */
        0x1, /* gcFEATURE_BIT_REG_ExtraShaderInstructions2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes12 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes13 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_ACE */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_DEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes14 */
        0x0, /* gcFEATURE_BIT_REG_PowerOptimizations0 */
        0x1, /* gcFEATURE_BIT_REG_NewHZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes15 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements1 */
        0x0, /* gcFEATURE_BIT_REG_DENoGamma */
        0x0, /* gcFEATURE_BIT_REG_PAEnhancements2 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_PEEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_HIEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_FEEnhancements2 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes16 */
        0x0, /* gcFEATURE_BIT_REG_DEEnhancements5 */
        0x1, /* gcFEATURE_BIT_REG_TXEnhancements4 */
        0x0, /* gcFEATURE_BIT_REG_PEEnhancements4 */
        0x1, /* gcFEATURE_BIT_REG_MCEnhancements1 */
        0x1, /* gcFEATURE_BIT_REG_Halti2 */
        0x0, /* gcFEATURE_BIT_REG_DEMirrorRotate */
        0x1, /* gcFEATURE_BIT_REG_SmallMSAA */
        0x1, /* gcFEATURE_BIT_REG_BugFixes17 */
        0x0, /* gcFEATURE_BIT_REG_Rasterizer2 */
        0x0, /* gcFEATURE_BIT_REG_DualPipeOPF */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2 */
        0x0, /* gcFEATURE_BIT_REG_CSCV2 */
        0x1, /* gcFEATURE_BIT_REG_PAEnhancements3 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes18 */
        0x0, /* gcFEATURE_BIT_REG_Compression2D */
        0x0, /* gcFEATURE_BIT_REG_Probe */
        0x1, /* gcFEATURE_BIT_REG_MediumPrecision */
        0x0, /* gcFEATURE_BIT_REG_DESupertile */
        0x1, /* gcFEATURE_BIT_REG_BugFixes19 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements6 */
        0x1, /* gcFEATURE_BIT_REG_SHEnhancements7 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes20 */
        0x0, /* gcFEATURE_BIT_REG_DEAddress40 */
        0x0, /* gcFEATURE_BIT_REG_MiniMMUFix */
        0x1, /* gcFEATURE_BIT_REG_EEZ */
        0x1, /* gcFEATURE_BIT_REG_BugFixes21 */
        0x0, /* gcFEATURE_BIT_REG_ExtraVgCaps */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV15 */
        0x1, /* gcFEATURE_BIT_REG_BugFixes22 */
        0x1, /* gcFEATURE_BIT_REG_Halti3 */
        0x0, /* gcFEATURE_BIT_REG_TessellationShaders */
        0x0, /* gcFEATURE_BIT_REG_OPF9Tap */
        0x0, /* gcFEATURE_BIT_REG_MultiSrcV2StrQuad */
        0x0, /* gcFEATURE_BIT_REG_SeperateSRCAndDstCache */
        0x1, /* gcFEATURE_BIT_REG_Halti4 */
        0x1, /* gcFEATURE_BIT_REG_RAWriteDepth */
        0x0, /* gcFEATURE_BIT_REG_AndroidOnly */
        0x1, /* gcFEATURE_BIT_REG_HasChipProductReg */
        0x0, /* gcFEATURE_BIT_REG_TXSupportDEC */
        0x1, /* gcFEATURE_BIT_REG_S8MSAACompression */
        0x1, /* gcFEATURE_BIT_REG_BugFixesIn544 */
        0x0, /* gcFEATURE_BIT_REG_L2CacheRemove */
        0x1, /* gcFEATURE_BIT_REG_FEAllowRndVtxCnt */
        0x0, /* gcFEATURE_BIT_REG_CubeMapFL28 */
        0x1, /* gcFEATURE_BIT_REG_TX6bitFrac */
        0x1, /* gcFEATURE_BIT_REG_FEAllowStallPrefetchEng */
        0x0, /* gcFEATURE_BIT_REG_ThirdPartyCompression */
        0x1, /* gcFEATURE_BIT_REG_RSS8 */
        0x1, /* gcFEATURE_BIT_REG_MSAACoherencyCheck */
        0x1, /* gcFEATURE_BIT_REG_Halti5 */
        0x1, /* gcFEATURE_BIT_REG_Evis */
        0x0, /* gcFEATURE_BIT_REG_BltEngine */
        0x0, /* gcFEATURE_BIT_REG_BugFixes23 */
        0x0, /* gcFEATURE_BIT_REG_BugFixes24 */
        0x0, /* gcFEATURE_BIT_REG_DEC */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12 */
        0x0, /* gcFEATURE_BIT_REG_VSTileNV12_10BIT */
        0x0, /* gcFEATURE_BIT_REG_DisableVIP */
        0x0, /* gcFEATURE_BIT_RenderTarget8 */
        0x0, /* gcFEATURE_BIT_TxLodFlowCorrection */
        0x0, /* gcFEATURE_BIT_FaceLod */
        0x0, /* gcFEATURE_BIT_MultiCoreSemaphoreStallV2 */
        0x1, /* gcFEATURE_BIT_VMSAA */
        0x0, /* gcFEATURE_BIT_ChipEnableLink */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_1_5_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_MULTI_SRC_BLT_BILINEAR_FILTER */
        0x1, /* gcFEATURE_BIT_RA_HZEZ_CLOCK_CONTROL */
        0x1, /* gcFEATURE_BIT_CACHE128B256BPERLINE */
        0x1, /* gcFEATURE_BIT_V4Compression */
        0x0, /* gcFEATURE_BIT_PE2D_MAJOR_SUPER_TILE */
        0x1, /* gcFEATURE_BIT_PE_32BPC_COLORMASK_FIX */
        0x1, /* gcFEATURE_BIT_ALPHA_BLENDING_OPT */
        0x1, /* gcFEATURE_BIT_NEW_GPIPE */
        0x0, /* gcFEATURE_BIT_PIPELINE_32_ATTRIBUTES */
        0x0, /* gcFEATURE_BIT_MSAA_SHADING */
        0x0, /* gcFEATURE_BIT_NO_ANISTRO_FILTER */
        0x1, /* gcFEATURE_BIT_NO_ASTC */
        0x0, /* gcFEATURE_BIT_NO_DXT */
        0x0, /* gcFEATURE_BIT_HWTFB */
        0x1, /* gcFEATURE_BIT_RA_DEPTH_WRITE_MSAA1X_FIX */
        0x1, /* gcFEATURE_BIT_EZHZ_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_FIX */
        0x1, /* gcFEATURE_BIT_SH_HALFDEPENDENCY_FIX */
        0x1, /* gcFEATURE_BIT_USC_MCFILL_FIX */
        0x1, /* gcFEATURE_BIT_TPG_TCPERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_MDFIFO_OVERFLOW_FIX */
        0x1, /* gcFEATURE_BIT_SH_TEXLD_BARRIER_IN_CS_FIX */
        0x1, /* gcFEATURE_BIT_RS_NEW_BASEADDR */
        0x1, /* gcFEATURE_BIT_PE_8bpp_DUALPIPE_FIX */
        0x0, /* gcFEATURE_BIT_SH_ADVANCED_INSTR */
        0x1, /* gcFEATURE_BIT_SH_FLAT_INTERPOLATION_DUAL16_FIX */
        0x1, /* gcFEATURE_BIT_USC_CONTINUOUS_FLUS_FIX */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_V4 */
        0x0, /* gcFEATURE_BIT_SH_SUPPORT_ALPHA_KILL */
        0x1, /* gcFEATURE_BIT_PE_NO_ALPHA_TEST */
        0x0, /* gcFEATURE_BIT_TX_LOD_NEAREST_SELECT */
        0x1, /* gcFEATURE_BIT_SH_FIX_LDEXP */
        0x1, /* gcFEATURE_BIT_SUPPORT_MOVAI */
        0x1, /* gcFEATURE_BIT_SH_SNAP2PAGE_MAXPAGES_FIX */
        0x1, /* gcFEATURE_BIT_PE_RGBA16I_FIX */
        0x1, /* gcFEATURE_BIT_BLT_8bpp_256TILE_FC_FIX */
        0x1, /* gcFEATURE_BIT_PE_64bit_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_USC_FULL_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_TX_YUV_ASSEMBLER_10BIT */
        0x1, /* gcFEATURE_BIT_FE_32bit_INDEX_FIX */
        0x1, /* gcFEATURE_BIT_BLT_64bpp_MASKED_CLEAR_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY */
        0x1, /* gcFEATURE_BIT_ROBUSTNESS */
        0x1, /* gcFEATURE_BIT_USC_ATOMIC_FIX */
        0x1, /* gcFEATURE_BIT_SH_PSO_MSAA1x_FIX */
        0x1, /* gcFEATURE_BIT_USC_VX_PERF_FIX */
        0x1, /* gcFEATURE_BIT_USC_GOS_ADDR_FIX */
        0x1, /* gcFEATURE_BIT_TX_8bit_UVFrac */
        0x1, /* gcFEATURE_BIT_TX_DESC_CACHE_CLOCKGATE_FIX */
        0x1, /* gcFEATURE_BIT_RSBLT_MSAA_DECOMPRESSION */
        0x0, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE */
        0x1, /* gcFEATURE_BIT_DRAWID */
        0x1, /* gcFEATURE_BIT_PSIO_SAMPLEMASK_IN_R0ZW_FIX */
        0x1, /* gcFEATURE_BIT_TX_INTEGER_COORDINATE_V2 */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG */
        0x0, /* gcFEATURE_BIT_SNAPPAGE_CMD */
        0x1, /* gcFEATURE_BIT_SH_NO_INDEX_CONST_ON_A0 */
        0x1, /* gcFEATURE_BIT_SH_NO_ONECONST_LIMIT */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_ON_TEMP */
        0x1, /* gcFEATURE_BIT_COMPUTE_ONLY */
        0x1, /* gcFEATURE_BIT_SH_IMG_LDST_CLAMP */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_ALLOC_COUNT_FIX */
        0x1, /* gcFEATURE_BIT_SH_ICACHE_PREFETCH */
        0x0, /* gcFEATURE_BIT_PE2D_SEPARATE_CACHE */
        0x1, /* gcFEATURE_BIT_PE_MSAA_OQ_FIX */
        0x1, /* gcFEATURE_BIT_PSIO_MSAA_CL_FIX */
        0x1, /* gcFEATURE_BIT_USC_DEFER_FILL_FIX */
        0x1, /* gcFEATURE_BIT_SH_CLOCK_GATE_FIX */
        0x0, /* gcFEATURE_BIT_FE_NEED_DUMMYDRAW */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_OUTPUT */
        0x0, /* gcFEATURE_BIT_PE2D_LINEAR_YUV420_10BIT */
        0x0, /* gcFEATURE_BIT_MULTI_CLUSTER */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK */
        0x0, /* gcFEATURE_BIT_SH_DUAL16_SAMPLEMASK_ZW */
        0x0, /* gcFEATURE_BIT_TPG_TRIVIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TX_ASTC_MULTISLICE_FIX */
        0x0, /* gcFEATURE_BIT_FE_ROBUST_FIX */
        0x0, /* gcFEATURE_BIT_SH_GPIPE_ACCESS_FULLTEMPS */
        0x0, /* gcFEATURE_BIT_PSIO_INTERLOCK */
        0x1, /* gcFEATURE_BIT_PA_WIDELINE_FIX */
        0x0, /* gcFEATURE_BIT_WIDELINE_HELPER_FIX */
        0x0, /* gcFEATURE_BIT_G2D_3rd_PARTY_COMPRESSION_1_1 */
        0x0, /* gcFEATURE_BIT_TX_FLUSH_L1CACHE */
        0x1, /* gcFEATURE_BIT_PE_DITHER_FIX2 */
        0x0, /* gcFEATURE_BIT_SH_TEXLD_U_FIX */
        0x0, /* gcFEATURE_BIT_MC_FCCACHE_BYTEMASK */
        0x0, /* gcFEATURE_BIT_SH_MULTI_WG_PACK_FIX */
        0x0, /* gcFEATURE_BIT_PE_ADVANCE_BLEND_PART0 */
        0x0, /* gcFEATURE_BIT_FE_PATCHLIST_FETCH_FIX */
        0x1, /* gcFEATURE_BIT_RA_CG_FIX */
        0x0, /* gcFEATURE_BIT_DEC400 */
        0x0, /* gcFEATURE_BIT_LS_SUPPORT_PERCOMP_DEPENDENCY */
        0x0, /* gcFEATURE_BIT_MULTI_CORE_BLOCK_SET_CONFIG2 */
        0x0, /* gcFEATURE_BIT_PE_VMSAA_COVERAGE_CACHE_FIX */
        0x1, /* gcFEATURE_BIT_SECURITY_AHB */
        0x0, /* gcFEATURE_BIT_MULTICORE_SEMAPHORESTALL_V3 */
        0x0, /* gcFEATURE_BIT_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_SH_CMPLX */
        0x0, /* gcFEATURE_BIT_SH_IDIV0_SWZL_EHS */
        0x0, /* gcFEATURE_BIT_TX_LERP_LESS_BIT */
        0x0, /* gcFEATURE_BIT_SH_GM_ENDIAN */
        0x0, /* gcFEATURE_BIT_SH_GM_USC_UNALLOC */
        0x0, /* gcFEATURE_BIT_SH_END_OF_BB */
        0x0, /* gcFEATURE_BIT_TX_BORDER_CLAMP_FIX */
        0x0, /* gcFEATURE_BIT_SH_IMG_LD_LASTPIXEL_FIX */
        0x0, /* gcFEATURE_BIT_ASYNC_BLT */
        0x0, /* gcFEATURE_BIT_ASYNC_FE_FENCE_FIX */
        0x1, /* gcFEATURE_BIT_PSCS_THROTTLE */
        0x0, /* gcFEATURE_BIT_SEPARATE_LS */
        0x0, /* gcFEATURE_BIT_WIDELINE_TRIANGLE_EMU */
        0x0, /* gcFEATURE_BIT_FENCE_32BIT */
        0x0, /* gcFEATURE_BIT_FENCE_64BIT */
        0x0, /* gcFEATURE_BIT_PE_DEPTH_ONLY_OQFIX */
        0x0, /* gcFEATURE_BIT_TX_SEAMLESS_CUBE */
        0x0, /* gcFEATURE_BIT_TX_SNORM_SUPPORT */
        0x0, /* gcFEATURE_BIT_SH_SCATTER_GATHER */
        0x0, /* gcFEATURE_BIT_HWMANAGED_LS */
        0x0, /* gcFEATURE_BIT_SH_IMAGE_ENABLE_FIX */
        0x1, /* gcFEATURE_BIT_MSAA_FRAGMENT_OPERATION */
        0x0, /* gcFEATURE_BIT_PE_TILE_CACHE_FLUSH_FIX */
        0x0, /* gcFEATURE_BIT_BLT_YUV_OUTPUT */
        0x1, /* gcFEATURE_BIT_SH_IO_CG_FIX */
        0x0, /* gcFEATURE_BIT_PE_SWIZZLE */
        0x0, /* gcFEATURE_BIT_SH_ROBUSTNESS_FIX */
        0x0, /* gcFEATURE_BIT_USC_ATOMIC_FIX2 */
        0x0, /* gcFEATURE_BIT_PE_A8B8G8R8 */
        0x0, /* gcFEATURE_BIT_MULTIVIEW_RENDER */
        0x0, /* gcFEATURE_BIT_FE_DRAW_DIRECT */
        0x0, /* gcFEATURE_BIT_TX_VKBORDER_MODE */
        0x0, /* gcFEATURE_BIT_TX_UNNORMALIZED_COORD */
        0x0, /* gcFEATURE_BIT_PA_LINECLIP_FIX */
        0x0, /* gcFEATURE_BIT_TX_8bit_UVFrac_ROUNDING_FIX */
        0x0, /* gcFEATURE_BIT_MP_ARCH */
        0x0, /* gcFEATURE_BIT_TX_NO_FIXED_FILTER */
        0x0, /* gcFEATURE_BIT_SHARE_Z */
        0x0, /* gcFEATURE_BIT_DE_2D_FAST_CLEAR */
        0x0, /* gcFEATURE_BIT_TX_CLEAR_PENDING_FIX */
        0x0, /* gcFEATURE_BIT_NO_HI1_L2 */
        0x0, /* gcFEATURE_BIT_USC_EVICT_CTRL_FIFO_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_FORMAT_10BIT_CROSS_4K */
        0x0, /* gcFEATURE_BIT_FORMAT_P010LSB_I010 */
        0x0, /* gcFEATURE_BIT_ENDIAN_CONTROL */
        0x0, /* gcFEATURE_BIT_G2D_DEC400EX */
        0x0, /* gcFEATURE_BIT_SH_VX2_FLOATING_MAD_FIX */
        0x0, /* gcFEATURE_BIT_TS_FC_VULKAN_SUPPORT */
        0x0, /* gcFEATURE_BIT_MSAA_FLOAT_64BIT */
        0x0, /* gcFEATURE_BIT_VG_TS_CULLING */
        0x0, /* gcFEATURE_BIT_VG_FP25 */
        0x0, /* gcFEATURE_BIT_VG_AYUV_INPUT_OUTPUT */
        0x0, /* gcFEATURE_BIT_VG_DOUBLE_IMAGE */
        0x0, /* gcFEATURE_BIT_VG_RECTANGLE_STRIPE_MODE */
        0x0, /* gcFEATURE_BIT_VG_MMU */
        0x0, /* gcFEATURE_BIT_VG_IM_FILTER */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_IM_YUV_PLANAR */
        0x0, /* gcFEATURE_BIT_VG_PE_YUV_PACKET */
        0x0, /* gcFEATURE_BIT_VG_COLOR_PRECISION_8_BIT */
        0x0, /* gcFEATURE_BIT_VG_RESOLVE_ENGINE */
        0x0, /* gcFEATURE_BIT_VG_PE_COLOR_KEY */
        0x0, /* gcFEATURE_BIT_VG_IM_INDEX_FORMAT */
        0x0, /* gcFEATURE_BIT_VG_RESOLUTION_8K */
        0x0, /* gcFEATURE_BIT_VG_IMAGE_16K */
        0x0, /* gcFEATURE_BIT_VG_FORMAT_ARGB2222 */
        0x0, /* gcFEATURE_BIT_G2D_DEC400 */
        0x0, /* gcFEATURE_BIT_DC_OVERLAY_SCALING */
        0x0, /* gcFEATURE_BIT_DC_SOURCE_ROTATION */
        0x0, /* gcFEATURE_BIT_DC_TILED */
        0x0, /* gcFEATURE_BIT_DC_YUV_L1 */
        0x0, /* gcFEATURE_BIT_DC_D30_OUTPUT */
        0x0, /* gcFEATURE_BIT_DC_MMU */
        0x0, /* gcFEATURE_BIT_DC_COMPRESSION */
        0x0, /* gcFEATURE_BIT_DC_QOS */
        0x0, /* gcFEATURE_BIT_AI_GPU */
        0x0, /* gcFEATURE_BIT_EVIS_NO_ABSDIFF */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BITREPLACE */
        0x0, /* gcFEATURE_BIT_EVIS_NO_BOXFILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_CORDIAC */
        0x0, /* gcFEATURE_BIT_EVIS_NO_DP32 */
        0x0, /* gcFEATURE_BIT_EVIS_NO_FILTER */
        0x0, /* gcFEATURE_BIT_EVIS_NO_IADD */
        0x0, /* gcFEATURE_BIT_EVIS_NO_SELECTADD */
        0x0, /* gcFEATURE_BIT_EVIS_LERP_7OUTPUT */
        0x0, /* gcFEATURE_BIT_EVIS_ACCSQ_8OUTPUT */
        0x1, /* gcFEATURE_BIT_EVIS_VX2 */
        0x1, /* gcFEATURE_BIT_NN_FLOAT */
        0x1, /* gcFEATURE_BIT_TP_ENGINE */
        0x1, /* gcFEATURE_BIT_VIP_V7 */
        0x0, /* gcFEATURE_BIT_MCFE */
        0x0, /* gcFEATURE_BIT_NN_INTERLEVE8 */
        0x1, /* gcFEATURE_BIT_TP_REORDER */
        0x1, /* gcFEATURE_BIT_TP_LRN */
        0x1, /* gcFEATURE_BIT_TP_MAX_POOLING_STRIDE1 */
        0x0, /* gcFEATURE_BIT_NN_FP16_ALU */
        0x0, /* gcFEATURE_BIT_NN_INT16_ALU */
        0x1, /* gcFEATURE_BIT_TP_ROI_POOLING */
        0x1, /* gcFEATURE_BIT_NN_ZDP3 */
        0x0, /* gcFEATURE_BIT_NN_ZDP6 */
        0x0, /* gcFEATURE_BIT_NN_XYDP9 */
        0x1, /* gcFEATURE_BIT_NN_INT8_SCALE */
        0x1, /* gcFEATURE_BIT_NN_POWER_ISOLATION */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE1 */
        0x1, /* gcFEATURE_BIT_TF_QUANTIZATION */
        0x0, /* gcFEATURE_BIT_TP_SIMPLE_INT16 */
        0x1, /* gcFEATURE_BIT_TP_REAL_INT16 */
        0x0, /* gcFEATURE_BIT_TP_BFLOAT16 */
        0x1, /* gcFEATURE_BIT_NN_FIRST_PIXEL_POOLING */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE2 */
        0x1, /* gcFEATURE_BIT_NN_STRIDE_SUPPORT */
        0x1, /* gcFEATURE_BIT_NN_XYDP6 */
        0x1, /* gcFEATURE_BIT_TP_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONV1x1_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_CACHELINE_MODE_PERF_FIX */
        0x0, /* gcFEATURE_BIT_NN_PER3DTILE_BUBBLE_FIX */
        0x1, /* gcFEATURE_BIT_NN_CONVOUT_FIFO_DEPTH_FIX */
        0x1, /* gcFEATURE_BIT_SWTILING_PHASE3 */
        0x0, /* gcFEATURE_BIT_USC_STAY_LRU */
        0x0, /* gcFEATURE_BIT_NN_NONZERO_MIRROR_BORDER */
        0x0, /* gcFEATURE_BIT_NN_COEF_DECOMPRESS_PERF2X */
        0x0, /* gcFEATURE_BIT_INPUT_4BIT */
        0x1, /* gcFEATURE_BIT_COEF_COMPRESSION_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_NN_ZXDP3_KERNEL_READ_CONFLICT_FIX */
        0x1, /* gcFEATURE_BIT_NN_ZDP3_NO_COMPRESS_FIX */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_PERF_FIX */
        0x1, /* gcFEATURE_BIT_OCB_COUNTER */
        0x0, /* gcFEATURE_BIT_NN_XYDP0 */
        0x1, /* gcFEATURE_BIT_ZRL_7BIT */
        0x1, /* gcFEATURE_BIT_NN_ASYNC_COPY_MERGE_FIX */
        0x1, /* gcFEATURE_BIT_NN_SMALLBATCH_PHASE1 */
        0x1, /* gcFEATURE_BIT_TP_SMALLBATCH_PHASE1 */
        0x0, /* gcFEATURE_BIT_SCALER */
        0x0, /* gcFEATURE_BIT_SCALER_4K */
        0x0, /* gcFEATURE_BIT_NN_REQ_SLOWARBITRATION_FIX */
        0x0, /* gcFEATURE_BIT_IMAGE_PARTIAL_CACHE */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNELHEAD_FIX */
        0x1, /* gcFEATURE_BIT_NN_SINGLEPORT_ACCUMBUFFER */
        0x0, /* gcFEATURE_BIT_NN_SMALLBATCH */
        0x0, /* gcFEATURE_BIT_TP_SMALLBATCH */
        0x1, /* gcFEATURE_BIT_ZRL_8BIT */
        0x0, /* gcFEATURE_BIT_NN_DEPTHWISE_SUPPORT */
        0x0, /* gcFEATURE_BIT_NN_WRITE_WITHOUT_USC */
        0x0, /* gcFEATURE_BIT_NN_ZDP_INIMAGE_SIZE_FIX */
        0x1, /* gcFEATURE_BIT_HI_REORDER_FIX */
        0x1, /* gcFEATURE_BIT_INCORRECT_WR_REQ_TO_USC_BETWEEN_REORDER_AND_NORMAL_LAYER_FIX */
        0x0, /* gcFEATURE_BIT_TP_COEF_COMPRESSION_ENHANCEMENT */
        0x0, /* gcFEATURE_BIT_VIP_DEC400 */
        0x0, /* gcFEATURE_BIT_IMAGE_NOT_PACKED_IN_SRAM_FIX */
        0x0, /* gcFEATURE_BIT_IDLE_BEFORE_FLUSH_COMPLETE_FIX */
        0x1, /* gcFEATURE_BIT_NO_FLUSH_USC_FIX */
        0x0, /* gcFEATURE_BIT_COEF_DELTA_CORD_OVERFLOW_ZRL_8BIT_FIX */
        0x0, /* gcFEATURE_BIT_XY_OFFSET_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_USC_INVALIDATE_CACHE_LINE_FIX */
        0x0, /* gcFEATURE_BIT_LOW_EFFICIENCY_OF_ID_WRITE_IMGBUF_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_PER_CORE_LESS_THAN_THIRD_COEF_BUFF_DEPTH_FIX */
        0x0, /* gcFEATURE_BIT_USC_BOTTLENECK_FIX */
        0x0, /* gcFEATURE_BIT_KERNEL_SIZE_WASTE_IN_PARTIAL_MODE_FIX */
        0x0, /* gcFEATURE_BIT_FULLCACHE_KERNEL_INTERLEAVE_FIX */
        0x0, /* gcFEATURE_BIT_TP_REORDER_LAYER_SUSPEND_FIX */
        0x1, /* gcFEATURE_BIT_KERNEL_VIP_SRAM_READ_BW_LIMITATION_FIX */
        0x1, /* gcFEATURE_BIT_IMG_POP_PIPELINE_PAUSE_FIX */
        0x1, /* gcFEATURE_BIT_DR_JD_DIFF_CONDITION_FOR_CACHELINE_MODE_PRE_FIX */
        0x1, /* gcFEATURE_BIT_OUTIMAGE_X_BITWIDTH_LIMIT_FOR_NN_TRANSPOSE_FIX */
        0x1, /* gcFEATURE_BIT_SMALL_BATCH_FLOPS_RESET_FIX */
        0x0, /* gcFEATURE_BIT_SMALL_BATCH_DISBLE_FIX */
        0x1, /* gcFEATURE_BIT_NEGATIVE_POST_SHIFT_FIX */
        0x0, /* gcFEATURE_BIT_NN_COMMAND_KERNEL_REQUEST_CONFICT_FIX */
        0x1, /* gcFEATURE_BIT_OCB_REMAP_PHYSICAL_ADDRESS */
        0x0, /* gcFEATURE_BIT_NN_NO_Z_LOCATION_OFFSET */
        0x0, /* gcFEATURE_BIT_NN_LEAKY_RELU */
        0x0, /* gcFEATURE_BIT_NN_PRELU */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT */
        0x0, /* gcFEATURE_BIT_NN_PER_CHANNEL_QUANT_ASYM */
        0x0, /* gcFEATURE_BIT_NN_NATIVE_STRIDE_TWO */
        0x0, /* gcFEATURE_BIT_NN_TENSOR_ADD */
        0x0, /* gcFEATURE_BIT_NN_FLOAT_POST_MULT */
        0x0, /* gcFEATURE_BIT_NN_SLICE_PADDING_TO_64BYTE_ALIGN */
        0x0, /* gcFEATURE_BIT_NN_DW_1x1_CONV_MERGE */
        0x0, /* gcFEATURE_BIT_NN_SLOW_OUTPUT */
        0x1, /* gcFEATURE_BIT_NO_NARROW_POST_PROCESS_PIPE */
        0x0, /* gcFEATURE_BIT_TP_NN_PROBE */
        0x0, /* gcFEATURE_BIT_TP_23BITS_POST_MULTIPLIER */
        0x0, /* gcFEATURE_BIT_NN_TRANSPOSE */
        0x0, /* gcFEATURE_BIT_EVIS2_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_USC_ASYNC_CP_RTN_FLOP_RESET_FIX */
        0x0, /* gcFEATURE_BIT_DDR_BURST_LEN_256B */
        0x0, /* gcFEATURE_BIT_IMG_CAHCE_MODE_MUST_0_IN_IMG_DIRECT_MODE_FIX */
        0x0, /* gcFEATURE_BIT_USE_SINGLE_PORT_VIPSRAM */
        0x0, /* gcFEATURE_BIT_NN_ASYMMETRIC_INT8 */
        0x1, /* gcFEATURE_BIT_DEPTHWISE_NEIGHBOR_IMG_DATA_TRANSFER_NOT_EFFICIENT_FIX */
        0x0, /* gcFEATURE_BIT_PRELU_LEAKLY_RELU_CLAMP */
        0x0, /* gcFEATURE_BIT_TP_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_FLOAT32_IO */
        0x0, /* gcFEATURE_BIT_NN_SMALL_BATCH_PHASE2 */
        0x0, /* gcFEATURE_BIT_TILE_ACCESS_CAPABILITY */
        0x0, /* gcFEATURE_BIT_FAST_DP3_PREPROCESSOR */
        0x0, /* gcFEATURE_BIT_NN_COMPRESSION_BYPASSS */
        0x0, /* gcFEATURE_BIT_BFLOAT_KERNEL_COMPRESSION_ZERO_SKIP_FIX */
        0x0, /* gcFEATURE_BIT_TP_3_USC */
        0x0, /* gcFEATURE_BIT_TP_KERNEL_1BYTE_ALGIN */
        0x0, /* gcFEATURE_BIT_TPLITE_BFLOAT16 */
        0x0, /* gcFEATURE_BIT_PREPROCESS_IMG_BUF_640BYTE_LIMIT */
        0x0, /* gcFEATURE_BIT_V8_ACCUMLATION_READ_OUT_HAS_BUBBLES_PERF_FIX */
        0x0, /* gcFEATURE_BIT_V8_SINGLE_PORT_ACCUMULATION_BUFFER_RW_CONFICT_ZERO_SKIP_PERF_FIX */
        0x0, /* gcFEATURE_BIT_BURST_COLLECT_DUMMY_DATA_WASTE_CYCLES_FIX */
        0x1, /* gcFEATURE_BIT_INIMG_NOT_64BYTE_ALIGN_CACHELINE_MODE_FIX */
        0x0, /* gcFEATURE_BIT_TP_ACCESS_VIPSRAM_OT_IS_ONE_FIX */
        0x1, /* gcFEATURE_BIT_VIP_HW_FINAL_RELEASE */
    },
};

static gcsFEATURE_DATABASE*
gcQueryFeatureDB(
    gctUINT32 ChipID,
    gctUINT32 ChipVersion,
    gctUINT32 ProductID,
    gctUINT32 EcoID,
    gctUINT32 CustomerID
    )
{
    gctINT entryNum = sizeof(gChipInfo) / sizeof(gChipInfo[0]);
    gctINT i;

    /* check formal release entries first */
    for (i = 0; i < entryNum; ++i)
    {

        if ((gChipInfo[i].chipID == ChipID)
            && (gChipInfo[i].chipVersion == ChipVersion)
            && (gChipInfo[i].productID == ProductID)
            && (gChipInfo[i].ecoID == EcoID)
            && (gChipInfo[i].customerID == CustomerID)
            && (gChipInfo[i].formalRelease)
           )
        {
            return &gChipInfo[i];
        }
    }

    /* check informal release entries if we dont find in formal entries */
    for (i = 0; i < entryNum; ++i)
    {

        if ((gChipInfo[i].chipID == ChipID)
            && ((gChipInfo[i].chipVersion & 0xFFF0) == (ChipVersion & 0xFFF0))
            && (gChipInfo[i].productID == ProductID)
            && (gChipInfo[i].ecoID == EcoID)
            && (gChipInfo[i].customerID == CustomerID)
            && (!gChipInfo[i].formalRelease)
           )
        {
            return &gChipInfo[i];
        }
    }

    return gcvNULL;
}
#endif /* _gc_feature_database_h_ */


