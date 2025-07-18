/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Jun 24 00:33:21 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[1290] = {
  0xefc7e1e3e6948e81U, 0x34ea427fdf4e7bf6U, 0xe4def7feed81092aU, 0xe984594affbc0111U,
  0x570844ffe28acd7fU, 0xb02a572b4349337fU, 0xd02881a0ff83f557U, 0x54901d6281e768d9U,
  0x2972781ef6cb466U, 0x634eee3c7fedff57U, 0x644c6a546c7f348bU, 0x7f3c1460522a2b07U,
  0xe86716575b2bf604U, 0xa535b7fd681e8b9U, 0xb2f32aa4969207e8U, 0x454a3bf381f892eeU,
  0xe294d2d3b7f5d18U, 0xfcb28aad8fb681aaU, 0x3d295000103a1U, 0x17effff9452U,
  0x2fd0001056bU, 0x31390000014fU, 0x131c500008c99U, 0x727000127ceU,
  0xffffe4c6000037b8U, 0xffffb180000142a7U, 0x6a0215fb3f81467fU, 0xbe17e4d65b1b6ab4U,
  0x24f930c970e2264fU, 0xf41eedb105d34d1aU, 0x1c02233b7f042e7fU, 0x62272adfc185320cU,
  0x341036ecfbf721f7U, 0xd693d7a57f456681U, 0x81044d86451532b2U, 0x8e8146aa35254d12U,
  0x2c092a7f591d36dfU, 0xd9838b69f818131U, 0xc52fad9090c810bU, 0x50747f817e00e7beU,
  0x2e3dda02981b89efU, 0xf74454cf1635c09bU, 0x281814ae219cefeU, 0x8157eabfcdb9edbcU,
  0x55effffde41U, 0xffffee05000001d5U, 0xfffff00e000002b1U, 0xfffff584fffffbd2U,
  0xfffff86900000e9aU, 0xc41000001491U, 0xffffec97000052aeU, 0x53300000085U,
  0xd13aca0d28b53604U, 0x3f1e81f2626c69bU, 0x15f30013e2f7d0adU, 0xebfe39f9e6230af7U,
  0x39063614cd059c10U, 0x15e6d90ce1f6292fU, 0xf0fce9bfff113815U, 0xfdbe5eb0fd80e84U,
  0x1afaf42221e081c1U, 0xe21654eed6cad30aU, 0x11160e0421ff1940U, 0xfdd506220108d513U,
  0x12f02c0cf74eb60bU, 0x18e4c51405fd2037U, 0x8fbf7e8d3a6fe1bU, 0x51c0e070f0b0e16U,
  0x28f7fd1b1643dc32U, 0x22f0040cf92938bbU, 0x55fcfce9483d51d7U, 0x5b36d1e77fda85e3U,
  0x7ccbfddc2115f3c7U, 0x15d31cd9f3bafb14U, 0x4d0df80bc8f4e6ceU, 0xc634f1fb2bf0ca1cU,
  0xe00e03cce8f7dcd9U, 0xfe2ed012dc2a1d01U, 0x7e7f31e0606d9f5U, 0x100426fbeaf3dc31U,
  0x8ec1407e72906cbU, 0x2e12f21ce60f0b12U, 0xde9e5f62fdf1fecU, 0x5a26e9fd05f6f3e6U,
  0xfee8040902e80700U, 0xfc14240b07d9f1d5U, 0xadb080dc539010aU, 0xbc0231d812f953a8U,
  0x22c062de3c519ebU, 0x17ebea130b20da40U, 0x3596df2d3d1133ceU, 0xcd5fb1b041115e3U,
  0xeb430ece6511621U, 0x113101b7fce8f8fbU, 0xe45b84b7d6f8f6d5U, 0x43642ed8b00bef22U,
  0xd2d612efe1fff9bdU, 0xd80c1c8b9ab92cfaU, 0xeda30107e2c4f806U, 0x6fdd2b616fffb23U,
  0xbbedbeed662f35f0U, 0xe049f20318e1073eU, 0xc404c4e8f7de8156U, 0x36013d173edbe9afU,
  0x6143e0adff6e904U, 0xd9055107f5e915e1U, 0xebe6e9010efe1ffeU, 0xd1502ea1afffcefU,
  0xf814180ef600f0f9U, 0x2effd07faf90efcU, 0xff07f60009170816U, 0x1fefcf014ee07ffU,
  0xfd1a1007fcfff504U, 0xfff609010eedf4U, 0xfbf6f7f400fbef0eU, 0x7e9030df809000eU,
  0x10203e608fa05fcU, 0x1f9f20c02fdfcf4U, 0xfef31b030906f914U, 0x9edeff3dff70217U,
  0x7fffd05f9051081U, 0xed09151009fe0104U, 0x2feff1a00faf9fcU, 0xe7e911f6f611f60bU,
  0xdf5b5cd4f9b112b5U, 0x24e7bd1dc22dd3f7U, 0x8de0a10f8eee8U, 0x4605aff4bc21f0d2U,
  0xf4e9a71caef7f2f9U, 0xd0c8ec181334f081U, 0xcfa63709081c38e9U, 0x4d4e26c22fd3b7d5U,
  0xf525caa6d54dea03U, 0xf8eeb9ebe7ddeebdU, 0x2b2af2da3e230920U, 0xd1a20aea1cf92ff0U,
  0xfce8ef1310d30315U, 0x30945162fbb25e2U, 0xfbfd4806b508e9c1U, 0x500181b20d616d4U,
  0x30c850ae3392af8U, 0xfcf60fd0ff4fbb0cU, 0xf5e909cac7ea0f03U, 0xf22002eff9f9eae5U,
  0xe4f916bccb09fe2bU, 0xfcfe11e305fdd1faU, 0xe705ce8139f81604U, 0xc9f80a12fe51cc16U,
  0x709fd192ffe0504U, 0x1afffbfe16e92507U, 0x806d7410b0ef215U, 0x150fec02050b04f4U,
  0x1b01f91f080c0ff0U, 0xfaf4e0fe0524f1d0U, 0xcf5f7fbd8fee008U, 0x1602fbfb08f20de8U,
  0x13f3f7cb12031009U, 0xf91f0b07f5f214fcU, 0xf1f6379fcdf71bf9U, 0xb3dd33dcffe4f113U,
  0x416f2dee0e21c0c3U, 0xe0e5025abedc4b2aU, 0x35c70bdde82cc214U, 0x5d7dcd6db9914ccU,
  0xe4ffe1e4eb5fd803U, 0x3d62f8d00981e7bdU, 0xf232ec076e194bf9U, 0x1dd7e40d172308e5U,
  0x110d23c109dbd828U, 0xe311f525082416dbU, 0x1e09e8030feea5d1U, 0xf23e10dfe7f44acfU,
  0xdb28070c33dd65b5U, 0xf407fdfc8d4dab4cU, 0xd814280a0ee72f11U, 0xd61817f50524d827U,
  0xe908fa05d8382de0U, 0xf4fd05c8b6eefb3fU, 0x11dac7061e2c1b10U, 0x301fe8ced1d0edf1U,
  0xf8071d01f7d420e7U, 0xed1de005fb1ce4eaU, 0xf518e1f548f4282eU, 0x30d8d901e4f9021cU,
  0x5a711f1f13818deU, 0xf31f46ccf51df018U, 0x2af2fff6c20ff309U, 0xd61303ecf91212f6U,
  0xf225cad625232031U, 0x4694e4e4e5f61d17U, 0x2e10b413f6e6e00cU, 0xfc1c7a084edad1d5U,
  0x4527c12fc011b926U, 0xfbee3cf22f0d1db0U, 0x3701e17f1902e2c8U, 0x6da8e03925fe449fU,
  0x16181100d7dff7U, 0xf4f7f9141308091dU, 0xffea030af30205fbU, 0xf800040900fa00f0U,
  0x1402fd0002eefaf2U, 0xe305101027f8f10fU, 0xf002ff0919f90ef6U, 0xf812090bd5040631U,
  0x8f40f0f040fe503U, 0xcf9020fe1eafae8U, 0xf4fd02fa04030f01U, 0xfe02f5f0e5090315U,
  0xef8115ea09fd55eeU, 0xea1b0a9ed71ff73aU, 0xacd10f2f0ecfa09U, 0xe71b24101afcfdd9U,
  0x4e8eb02f9dd0e02U, 0xdd0017d61001f00fU, 0x904e433c5f20eefU, 0xc1c93bdc06feea29U,
  0x270718eeffbc1cU, 0xf10e18eb4e13180eU, 0x80cff2806fe1ff5U, 0xb8210ef114f52828U,
  0x61e122d0303f144U, 0xd8834a42facbd7e8U, 0xeb47fb19f8ee0cf9U, 0xe30ff0184be937e0U,
  0xf71bfd3206f4c3e1U, 0xf41ff9d605db1b02U, 0xf7f3a13db4231d24U, 0xf1945cbfe20bc248U,
  0xc953290f0b0e1102U, 0xf02833edd50a350dU, 0x710a2bcf4040f81U, 0xbe1c0ff5c5fc3e65U,
  0x81f31ee30981e632U, 0xc600f5fcd5f1ebf4U, 0xc60c03ee191ebae7U, 0x11fbf8f00211bd1dU,
  0xebf0f4f1f2ad2c25U, 0x6170310e222c506U, 0x36001200f83119eaU, 0xfcfcfb1322f33008U,
  0xfe0404fd0ff5e3e4U, 0x2111f0f619f6e1f2U, 0xfdfc040c042e1d23U, 0x70a0dfc0af80bf3U,
  0xb08f312040107f1U, 0xe7ef0af7edeafa0aU, 0x508f505040cf0d5U, 0xf02f3fdf210031aU,
  0x20a1afd09050c1bU, 0x1f1bef0500fc07ffU, 0xe9471bc8f9121021U, 0x601cff637009f2f8U,
  0x15fcfd4f30f3b9d6U, 0x1420fb2629b9e509U, 0x6e50927bf34bdf7U, 0xdeea2a076e574831U,
  0xd91502d20cf82e03U, 0x5915d507eddc23b3U, 0xebf40eeb3c0fed1aU, 0xc05dbf0e5c5fd0cU,
  0xf5f01c0ec9fff904U, 0xdbf5ffd5d2cf15f4U, 0xb42a16cf4acd44c5U, 0x182ed1b95ad2d8b0U,
  0xc7d6f9f31ccdc93dU, 0x518e41507f2d23aU, 0x2bfcd34e8e20b60aU, 0xc3db7f4321572ecbU,
  0xc5ccebe1f9bb7fd2U, 0xff2af81dda0cf0dfU, 0xd815cec9fcc9fbe7U, 0xdf5d23de00ce007U,
  0xf80af2eef0fabeebU, 0x1a090401e8fdd90dU, 0xccd80c190e1d1a21U, 0xf3282bab661615dcU,
  0xc611d30809fe2efdU, 0x1b04eeef1a17010fU, 0xfc0ff9ed19ee23e7U, 0x23d3d9dd030afd19U,
  0x1b0a1cdfe4129935U, 0xd20d15200fcb08d0U, 0x8ed040d11e2ef04U, 0xeffc112d2340dad9U,
  0xfeec52bf3e5e11bU, 0x2c928e80f2d1f9dU, 0xf0ed2904e02bcf16U, 0xd8e316f80b0ef581U,
  0xbefedf40aeb200eU, 0xf202e9f512e8e51cU, 0x27020bf9e614eef8U, 0xfbf3fcf40b0526edU,
  0xf9031e020919d514U, 0xf607fb2900d10cedU, 0x9f20014fe0cee17U, 0xf6f40bf918fcda24U,
  0x1903fe0f06f6e9e6U, 0x9090726e5f4fa04U, 0xfddef2df05fd37deU, 0x303d4dc0a030c01U,
  0x507f9f4f62ce6f9U, 0x908deefe3ec0a92U, 0xcf71e21feecddddU, 0x20edb05f1e904bcU,
  0xbd1e41df77d1211U, 0xff0925ff39a1e681U, 0xf020e2fa05fd1bf0U, 0x7e5e9eb1e3410ecU,
  0xde22da024bed2ad8U, 0x30d5cbef0a0cec02U, 0xeffb18fdf9ece33eU, 0xe518fef505fac8U,
  0x1b160001d908f10aU, 0x32ebedd604d90a07U, 0x1b1ae61804e60ea7U, 0xcbaeb09f2fa29f5U,
  0x1cfa1525d3f102d6U, 0xffd2242612f2d9edU, 0x3206f711f802f912U, 0xff1510fcf6e1120aU,
  0x2000f602eb1e0caeU, 0xf1f00eeae113f151U, 0x39780357f010cbc6U, 0x3aa62317095408f8U,
  0x1dc4c0c7100f49f2U, 0x1d22cd0604e40105U, 0x72ee3726f0f3a281U, 0x30a1a0bfad50fc0U,
  0xef0a34ce03089933U, 0xfd84ec2d03edf302U, 0x6eb00d3efe53a04U, 0xe03a17ec38d831d4U,
  0x4efc0614de0e0605U, 0x140c2a00f9ac0227U, 0x100cc52cf54d16fdU, 0xc5c7de26c31bce1cU,
  0xed0bdf14e8b5080dU, 0xf9100fda15fafc10U, 0xc32d22f52d370820U, 0x2b3af1aac81b0321U,
  0xf9cc1614dfcfaf03U, 0xc6f32cefad09131dU, 0xcf2d9d1ca2f062bU, 0xe51605db14fe24ffU,
  0xeb2bb1d87ffd6646U, 0x3c05eae809e1c71cU, 0x35f7eaf9fe0cebfeU, 0xd7dd331725f0d5f7U,
  0xe1e8062dd8f304d5U, 0x2f110a023ceb15edU, 0xecffd60f4c08fc17U, 0x5c1bd5d90013df03U,
  0x17f4e31a0203150fU, 0xe6c9fc09df0ede35U, 0x2f06e8f1e511f5d6U, 0x90a061510f60de0U,
  0xde14792d25dbe9e8U, 0x4417dc06fbb71ad6U, 0x10f309120fe61630U, 0xbeb11d8eefaebdeU,
  0x18f7df2af2dffff0U, 0x724fa1fe725d3f1U, 0xd2218410ff6f681U, 0x12f332f5e0fd2cfcU,
  0x1b04f4e1de08f239U, 0xe8e619d5e9031107U, 0x2601f0ea030df814U, 0xff1a120b04fffbdcU,
  0xfc020a01e106fff6U, 0x10e218111ce53ceeU, 0x1337d60c09ce07fcU, 0xde319fdfd0ce502U,
  0x1e1feef708120823U, 0x1406e40af4f6f60fU, 0xc0b0f00040be924U, 0x26fee5fde7da0412U,
  0x5c61817fd1ffb06U, 0xe618de1116fd1713U, 0x9ebf8ffeff9fe0cU, 0x1eeff21724daedf4U,
  0x18fc00f70208e6f6U, 0x300df1d9faf310f1U, 0xead7f6c712ee1808U, 0x2bf315ec0bd1f6f1U,
  0xe428f8f2140af8faU, 0x310309faeef7e2edU, 0xd933230bf0032dfbU, 0x8101d1607f9f800U,
  0xdb9e2c0ed6fc1e0dU, 0x9e4dee7eae41f06U, 0xefe212ea0e0904f3U, 0x1eedecfff025f134U,
  0xeb81faaafdff3efcU, 0xe611e0280f1cc004U, 0x16ec19e6d91435e3U, 0x61bdff71ced0deeU,
  0xeffb09fe7ffafe0fU, 0x21dd040318e3f001U, 0xfff9ddaaa4f20ff8U, 0xabd807dcd857d81eU,
  0xf7fbd20af2e6e613U, 0xb14e91205ec14fbU, 0x15e501bb1d10c503U, 0x19fcdfe4e9e7fbd7U,
  0xf9040295b5fe3a43U, 0xc9bb00e1fc24e0ecU, 0xd5d93509f71ee7fbU, 0xf81114c311e73afbU,
  0xe5ebf104030004eeU, 0xf00cfe2a05300211U, 0x41eaad2ed7052ae2U, 0xebe3462e1763d722U,
  0xf10ff7fd25ef14e7U, 0x462aebdd1713be1aU, 0x182211e3ee0ef4deU, 0xe3bd1d40d0fa00d9U,
  0x4bc23efdc902b32fU, 0x2535f6ef10c3ea88U, 0xf2d30e5e1fee09fdU, 0xfe1c10c8ebe820b8U,
  0xf806fd21daf04f02U, 0xf6c511350bdb12c9U, 0xe5fef181f446dd17U, 0xef3c40b203e1ea1dU,
  0x132607f1f326fdd7U, 0xfcef05f119262bf6U, 0xda3a06c6f1ba180fU, 0x23eabb1b12e340f7U,
  0x617f0a90f62e3b5U, 0x67629addee16c230U, 0x14d2e4f316320881U, 0x342e0ff5370bcc08U,
  0xf0d0efcf8c8e8eeU, 0x7da0ffbee13f201U, 0x3f03fb0c1217f88aU, 0x310f20cf326040eU,
  0xd10a0209e5081aU, 0x6220e031bed09f7U, 0xfe09040ce219ec0aU, 0xf6dcfa050de1eff7U,
  0xef030907f3fa0ffdU, 0xf71af1ed0cf600f8U, 0xfae6d9e4ecf8f010U, 0xfa0e2df223f002eaU,
  0xf00c200eea17fcf3U, 0xee6f51ef1fd08d6U, 0x2f3f6fb2730150eU, 0x1115d6f1110a17dcU,
  0x9983e70225b8d848U, 0xd2f602dac90f482fU, 0xd901f6060119eafcU, 0xe6120be5ff1129d5U,
  0xba0ff708160ffe5dU, 0x7e4141004ea18e2U, 0x10d2231d0bfedf5cU, 0xd9d13106e9f5d4fcU,
  0x31806f7edebd704U, 0x817b4f4e3fded04U, 0x4e8f4eceb041ad3U, 0xfe14ed0c28032317U,
  0xcdd7e810180614edU, 0xf3936a40d4be8166U, 0x4422f618ee01f2d4U, 0x1601f6f81efd14d4U,
  0x9ec151bf2f8f1d3U, 0x231fe0c0dbe00026U, 0x3ee0eea0f1ef30fU, 0xa170617fadc07e0U,
  0xfbf4fc0d20fb25ffU, 0x11f400f4f3f6e1fcU, 0xfddd0913eaf002eeU, 0x917e6e9cf0bea00U,
  0xf4ffeebefb0f17f8U, 0x1c2813ea0c002bf5U, 0xecf113c62710fafaU, 0xf5050ddd02fdef16U,
  0x2d1fee0c715e60eU, 0xdb24f2e711090508U, 0xfb03d7c21fe90fe6U, 0xfd1c01ecf3fa2704U,
  0xe7fb0ca82e04f4f2U, 0xc30f05f9f906fa2eU, 0x7ccc381ad0ed11fU, 0xe31f04c8f607ef03U,
  0x12de1ef59851c2ecU, 0xc6d81725dae813aaU, 0xcd735e9f2d61c04U, 0x2a192ff8efc61115U,
  0x15d9f6b7f30f0a4eU, 0x1f3103dcd7038d43U, 0x17010846d3edd50bU, 0xddd50e284987fffeU,
  0xe3fcfe1d03fd07e0U, 0x35282d0257cceee8U, 0xd10bc2b73528162eU, 0x100fe0d67f501609U,
  0xf43cf6e7f8fada09U, 0x2bf4ffea082bf344U, 0x190ee2fde80bc0c8U, 0xcbfef91be430f5cfU,
  0x2ffff05649b4ef1eU, 0x4802c331ded523e2U, 0xdeddeaef2ca835f1U, 0x379c137ffe28bd1dU,
  0x2626f4d01348faadU, 0xe640d9d803e71f05U, 0x3ada23f5d6d89fe2U, 0xd0ac62b0aa91201U,
  0x9f8b490d281318a5U, 0x1b51fad6c6d32206U, 0xdbc9c5061acf0f3dU, 0x21abdaddb8f7c3ffU,
  0x2e5f815faf11cd0U, 0x9240f33cdeceb10U, 0x9aecefe222eebceU, 0xd3a7264fa0be3feU,
  0x8e30408e7ef14f5U, 0x3fa66ed700c05f5U, 0xd41afc1005db1335U, 0xdafa26c8180a0ee6U,
  0x87131bcad502b7f8U, 0xb8e10750e02a7f3aU, 0xf9c7e6f70ad712U, 0xf12ccecd151fd1ffU,
  0xdffbb1e226d6c912U, 0xe0c83e3cfc76ec9eU, 0x9491a1534152029U, 0xe2f5fc35a0ff9d20U,
  0x402f0db1909bce0U, 0x35dde0b89112180eU, 0x1b0ee6f5ee23aff6U, 0xe2e7f3030bfe1ad6U,
  0xe020b13e14fa8822U, 0x2dd0dd1af8efa419U, 0xf5e52b56e7e31920U, 0xfde52e1536fb20d7U,
  0x92b1241cdc112f7U, 0xfef2142cf5daf12dU, 0x6002110f80fd81cU, 0xeceafce5de0f2004U,
  0xf0fccd2e7fe0221U, 0xeecbbd6f3183d16U, 0x230226030edec381U, 0x170a0ce9d31cd308U,
  0xf8efe8df1d110ed4U, 0x3532f933130dd105U, 0x1effe60c2aeeec23U, 0xf109ea2424eebc06U,
  0xfeed1102111710f3U, 0xec25f009feb2be09U, 0x1ae4d10b080619bbU, 0xd544ad013d8f1ecU,
  0xf5ff0f22e4e705e9U, 0x9053f080df935edU, 0xe8006c20f5f00a31U, 0x9354fa0ec0c4dd6U,
  0x1319d93cf9fe1f07U, 0x2ff7efcdd519f3f9U, 0x551647f2d3e0b4ddU, 0xf21ae519bb25fa04U,
  0x12dde7daf1580227U, 0xb2032a13ea001fecU, 0xfecd0f041cf713f4U, 0x302c1dd7eff7dbdfU,
  0xf11c18ccd6f1e6d4U, 0xdff6fa07cf101a3eU, 0x28effed02bee04d2U, 0x1adff12c140adea4U,
  0xfd7fc607371bef2cU, 0x43c320a4aaaf0ceU, 0xb60ffdf2fe1100cdU, 0xfbc21822311120fdU,
  0x865dffe2bf1f82fU, 0x50fac1180504edf7U, 0xeb00e0da1509150cU, 0x2f5ec230303efU,
  0xdf13ced70dfb0d06U, 0xfef3f3e81c2ae106U, 0xee17f2c743fc1109U, 0xe9d7fe0dfd350fe4U,
  0xff2f909e307dafbU, 0xf6eff2f0eae7f803U, 0x14fef22efd0ae0f9U, 0x32180404de03f916U,
  0x9001921f1eff2fdU, 0xe7d70411eb03ecf6U, 0x17e6fa000300f2f0U, 0x1b20fa0e00e909fbU,
  0xde50f0301040f06U, 0xeced170c0cd613ddU, 0xf4eb0a81d40b03d8U, 0xd80616e316f4fdcfU,
  0xdedf0564d4ad8533U, 0xc39f2840fcea151cU, 0x3bfdf6138946b901U, 0xec04e09717ef76d2U,
  0x230ef3ebf81d124fU, 0xf7f8ced93ab419dbU, 0xdc5111b6f033c813U, 0xff810053f0d7f13cU,
  0x11e8f0ce1bd7f6f4U, 0xfc1b2e171cfed5bdU, 0x303da192cb9dbe7U, 0x913262ae319eeecU,
  0xd93b2a141a083234U, 0xf8b6bbc58f489f68U, 0x30ed3fc0410d2b4U, 0xa38e6e1dfe4f13fU,
  0xe70f48f1ae2704e6U, 0xb0d14fcc5ce221bU, 0xd69f270ccbd9ca45U, 0xa70efd0101d6fd17U,
  0xe2d432f6e41c00f3U, 0xe20ef521350414f7U, 0xc6c2e8f00c061541U, 0x1b3eddddf0cf28f5U,
  0xf2e82dd7f914e502U, 0xed05f1ee112c02eaU, 0xb81a15ec12fd05d2U, 0x508d1eb3f2dfc15U,
  0xed2906ec0af31d11U, 0x270207ee210c0a04U, 0x2b1cf322e1081dfeU, 0xe9d325e5f0db08dcU,
  0x2612fb002be10408U, 0x1720e40ec913db1fU, 0x1b3f8df233152224U, 0xedd4eeff812be836U,
  0xfffff4bb0000028fU, 0xfffffcc100002390U, 0xffffff3f000034c5U, 0xfffff08e00005d85U,
  0xfffffd7600000a37U, 0xffffecdd000014baU, 0xfffffd4ffffffef9U, 0x784fffff586U,
  0x1fb800002b3eU, 0xb8c000001afU, 0xffffe75400000457U, 0x2bf9000045c4U,
  0xa5ffffe60dU, 0x181e00001e21U, 0x7b00001f9fU, 0x3fd6000038bcU,
  0xf9cc1fc06a6b817bU, 0x708142bc9f7f45cfU, 0x29887f29c43fcb9bU, 0xab6a37cfb6a36e55U,
  0x1b43cac5e7fcf76U, 0x7f9e70bfb371459fU, 0xbcd6b60c23abbc9U, 0xbe6b65acab9a755eU,
  0x4817f9e734ebf49U, 0x51c643bf814743cfU, 0xf9f83462bc3a8191U, 0xc2757fb9a8b8607fU,
  0xb8b529ab7f62a675U, 0x65a45f9a345a3799U, 0xec815e3ede7fcbbcU, 0xb57f5dc4ca9f7f55U,
  0xb4c637a26072cd7fU, 0x7cbe7fb927482ab6U, 0xf8e35f7fce5cc8f8U, 0xcc5f74bfba817341U,
  0x9ab97f817361c15eU, 0x49d9519d2e1eede3U, 0xf9fd3277985594a1U, 0xaa6f7dc890aa5d53U,
  0x9ebf29cf736bd26dU, 0x39aa468135188181U, 0xd19e313bec6ecbbcU, 0xb97f5faadac45266U,
  0x89ca35ad756de775U, 0x4dbb4dbb3e259a8eU, 0xd7cd3065cb5ac4bcU, 0xb9536381b69b527cU,
  0x81e153a36152e253U, 0x33e936a64409b4c2U, 0x81e222678150c781U, 0x81484aad81bf426aU,
  0x1995fffffe2bU, 0xfffffb15fffffd87U, 0xfffffcf100007a50U, 0x1655000011b2U,
  0x3e20000546cU, 0xfffff587ffffdffaU, 0x1300001789U, 0xffffef7d00002579U,
  0x1a8400001f91U, 0x45dffffff4a3U, 0xfffffb58fffffcbeU, 0x1839000024d6U,
  0xfffffc8dfffff152U, 0x17fb00001317U, 0xffffff42000025aeU, 0x1b53fffffa0cU,
  0x514f06c1857cf4aU, 0x205dd417819b6accU, 0x38dc20d6c99ed6ccU, 0xb0da398ac61b8653U,
  0xe2e62898f7238913U, 0x6240b2481b422a5U, 0x275ce7c834f0c28fU, 0xf6fd0ee2f7f20b72U,
  0x8dc2f19f54fdeb2U, 0x1b25e9fafbfc0a0bU, 0x16cafa0dd181f10fU, 0xf6ecf00fed6fddd4U,
  0xe4c10ef8f1cfc321U, 0xfc13ce13ee26160aU, 0xd4b6d023238103f3U, 0xfcdbf0e4c41401e7U,
  0xece3b187ec553aadU, 0xcff9035d654addefU, 0x7fb80ac20adf575fU, 0xc405134d0074b21dU,
  0xc928fff0effb22ccU, 0x4ee0ed1581f4d1fbU, 0x75359bef2c1029e5U, 0xd0cbd8c2e518b7f9U,
  0xfe22922ecd7a1f7U, 0xae0520bf9b961b27U, 0xf2d23d5da381e8fcU, 0xde1dd80eca1d05a6U,
  0x10cd1bdea4de010aU, 0x52d1b19f1b81cf9U, 0xdbfec9ed07012781U, 0x71eebe3cf102038U,
  0x7f103eebe32925eeU, 0xcc406201b231a2cU, 0xaf19ccded5f201b9U, 0x391cdad230c8c9e2U,
  0xf5d3ffa8affeaa2aU, 0xea43b5ecb336c13aU, 0x2dc4c816cf45e70eU, 0x62b4ca6036e81881U,
  0xe5f21dcc21e41bd3U, 0x4003d21e150ef21dU, 0xcdfe810f61a00eddU, 0xbcc994ac0157b0e5U,
  0x3dbeb2b8cff4c02bU, 0x1d38d719ea1981e0U, 0xbe151bbaa403b603U, 0x7f5412e02dfecdaU,
  0x5ebc0a025067f06U, 0x4efd620d01be0acU, 0xea9301af280d37f9U, 0x2104d906eaf5db16U,
  0x557c56ecb2423628U, 0x7bd764fbeab72735U, 0x440df9f80f6748a3U, 0x3881bfb0128396e8U,
  0x2a2fc3b9c1d90d38U, 0x81fee530b7434334U, 0xc1f5d504b314a4f2U, 0x599ab7e4b39c10ccU,
  0xdd5cdd9d088bf1eU, 0x1b43d5fbadb9f617U, 0xe4dfb3370381f3eaU, 0xcad412d6c3212336U,
  0xd3ccbf19d1b022bU, 0x1a534b81aad73f5eU, 0x4bfe37c43611dee6U, 0xc2c00bc1bf0200d0U,
  0xecdad9b1e5266cd0U, 0x46c71ae86c283147U, 0x3cf42681c7edf008U, 0x9ad71a03bf41fb16U,
  0xe72fd1f0e7bba5d3U, 0xc21830c781ff0451U, 0x26dc3c26e6b9ae06U, 0xf520f43d161540c0U,
  0xe0ec6a3d7f107cbU, 0xaef6f212b432347bU, 0xa28f3ccf5df0102U, 0xe97b53f4e77fd056U,
  0x381d1af716a61624U, 0x6f3445069a963e12U, 0xd0dcef0016231b88U, 0x4381059ae6db9b19U,
  0x5521e7d3c5d5e501U, 0xd618eb07fee643e8U, 0x1dc911bebcfc16fdU, 0x8e4b6560c57f0a65U,
  0x2eebe1d2c0d3b129U, 0xfa3710e081c8df3fU, 0xe908f63bc5cae3eeU, 0xe7ec0117cefe0fd6U,
  0xf0ebedc517c741d8U, 0x30f4047f4fe0e91cU, 0x20fbdcc203ff06deU, 0xb3f71800d634d213U,
  0x44a4d9c0e40504ffU, 0x51f3e73681d72426U, 0xd9f5c2f723ced6cdU, 0xc1ce55ecec3ea020U,
  0xa40bbed9d3c0c7ccU, 0xcdeb9812c530ac25U, 0x5560c58bdb083ff2U, 0xc814bc0fa41e526U,
  0xf2e92ffff821113cU, 0x46cff9832cb1125U, 0x1e1bc11915d20481U, 0xc918fcf41ae93be8U,
  0xd7a21f1b47f2a6aaU, 0x6bf6e50868084af4U, 0xefb5e31123caa2cbU, 0xb481e8c71c0da0b9U,
  0x31c539f6d8130cf4U, 0x39c3daea81e7c2dbU, 0x4b42e213230906efU, 0x15ccb6dded08d8dcU,
  0x33de00c3c3b917f3U, 0x1f351724f8c61516U, 0xe0e8cb0d17df3281U, 0x2c0313e1d82cfa2fU,
  0x25e5d820f807eb19U, 0xf32801f0f81d1bedU, 0xfe8136fd0a0ad90dU, 0xe8e810fce01cebd6U,
  0xecca2023f0ddca06U, 0xe222f68160decefdU, 0xf8cbfa2bfefadfebU, 0x1e12e6054a3224cdU,
  0x7158caedfa7e5d7U, 0xd92e7f919a000034U, 0x472417d5e6b0e6f6U, 0xa564119991006d3U,
  0xf2d828092d810931U, 0x350323ccf8e5e03bU, 0x3701e836f1bee4a2U, 0xf2a4d4d817c745dcU,
  0xfcbdc631f419cfe7U, 0xe936d9c5d9d9740eU, 0xef619189fdd12feU, 0xafff16d7ce7fce1fU,
  0x352ab08605699e5dU, 0x1a7fdee034e71affU, 0x1ef1eac104ccf7f1U, 0xe0e90755d4d5fabaU,
  0xe9ea25120311eecfU, 0xcc2b50a13fe2581U, 0xf016e1fee0fe1cd6U, 0x10fbcbd3d3ebd927U,
  0x24bfb905dbf5c7ecU, 0xfa42d800c4d5157fU, 0x1f0c09f2b22bc816U, 0x94ee410200292d2bU,
  0xfa47f6aa3b2af6e0U, 0x55b81f00742f5d2U, 0x199ebebe3edd5418U, 0x411f200260ac80cU,
  0x5b7ff1a2ca03f0eaU, 0x33550bef90eade44U, 0x16ecd507143954ddU, 0x9929076f35d331e2U,
  0xb33fd18131f0d5c6U, 0xacb1edec9a38b3eeU, 0x2611e1eb05f7ef0aU, 0x17af92217b3b16d3U,
  0xedacd1e9c5008152U, 0xf445cdfd19fcdb1cU, 0xe802cf2797a0980bU, 0xeaecf55b5ce759aeU,
  0xcc2ee7ad060781d3U, 0xde0929c1b3e8e820U, 0x12ea26e31fe6c3f8U, 0xd16d2594925239cU,
  0x773f1a928b250bd3U, 0xb2f529f50a3bd705U, 0xae0d0eefe00a7f0aU, 0x1978b70c5af3df08U,
  0x7f62e325dc0c09fcU, 0x4ff80008cf9f20e5U, 0x4c4cc9df093df6caU, 0xbf093ece900be06eU,
  0x3d01a3a8bddfe502U, 0x34e71dc9eccacaU, 0xb02f1481991aa5f5U, 0x3a035132daeacdd4U,
  0x763021bea309f7fbU, 0x3ffd15d9fee4d065U, 0x3cccf905db517ff3U, 0x2038ea2839db1ce4U,
  0xdff05eafdc0f724U, 0x2f01092a0adffffdU, 0x471fa90609dcd981U, 0xf0ddfbcbe800f018U,
  0xb8a1c6920b0681d1U, 0x204716e3cea22bdeU, 0x6a3d0eab05ebf1caU, 0xd0f817ebe6f7fc05U,
  0x57b225b9a0d532e5U, 0xe0e3c4e11923542U, 0xccf09cd815e13d81U, 0x190a22ddd7374447U,
  0x31cf542825ffb0e5U, 0xbeaa02d22fdf81e1U, 0xd209f7149503fce0U, 0x3f09fa1f104f8b8U,
  0xc6c62ae90bfdc8bfU, 0xcb0d15dc961e0af9U, 0x27ba3c18f381c30fU, 0xe8d6db312a1b03a8U,
  0x121707d2430d13f0U, 0xdbdd813ff4f5f20dU, 0xe5c9e3fede0e07f6U, 0xbc6b2e20cc40f00U,
  0x76494511032a13f6U, 0xeabf09faf0d947e7U, 0xbf500d281265ff8U, 0x34cae3df01ec053dU,
  0x7105380be70740eaU, 0xd4a0f7fe261b58b3U, 0xca43ecdd810f19d3U, 0x25f5f2a6d30908ceU,
  0xffef289b22e35a91U, 0x440bf5d50b0cfd4fU, 0xbdf9be2d7fa22dcdU, 0xdd02bccf1f42de00U,
  0x2104fd01f229fd1aU, 0xfe12fc17d5310cdcU, 0xf28125000307e1e0U, 0x1fe808d9eaebeae4U,
  0x7f2536f2033a14fcU, 0x1cb01d070e261bfbU, 0xb70dd7cfc7dde9ddU, 0x33f3dde21eb29ef0U,
  0x2a07ed0db2bdca16U, 0xe51ef8059981fd19U, 0xddd8064bf3c5d7efU, 0x3cb00dcc4eb1912U,
  0x3c97b3a4ba0ebb42U, 0xec2df6198148d336U, 0xac51bb20732ac27U, 0xf2e6266703471c8bU,
  0xfb85e7fae3e1abf7U, 0x3179e3bd8ca2761bU, 0x29d00323bcd60ed3U, 0x81e15dcdb64dcb4aU,
  0xd3edf821421c18ecU, 0x502bbb1b90d44aa7U, 0x11b3100be4f34081U, 0xc9c22eb1d524810aU,
  0xdab4f2f10bfbead8U, 0xeb361db081b12c25U, 0x390a30d6a7cc09f8U, 0xb028fef5bd2e2e0bU,
  0xfa39dabccbfcd13aU, 0xc4002fb81d2e3edU, 0xe44bceb51312c7dfU, 0xf34400e6e8fe403fU,
  0x604ffffb483U, 0x131affffc30cU, 0xffffcdaaffff9cc5U, 0x3e3fffff540U,
  0xffffe2ed00001f1bU, 0x20f5fffffc08U, 0xffffe65a000016e2U, 0x4bb00003d8fU,
  0xffffbf5fffffb0baU, 0xffffbb93ffffd8ffU, 0xffffb577000006afU, 0xffffdf7b00000050U,
  0xffffcb5b0000023aU, 0x12aaffffd087U, 0xfffff13bffffde71U, 0xffffe993ffffe0d5U,
  0xfffff62dffffd8c3U, 0xfffff1f0ffffbcbdU, 0xffffb94c000027adU, 0xffffc652ffffd9edU,
  0xbc200000cbcU, 0x9c6fffff972U, 0x23d8ffffa359U, 0xffffe5b1ffffc16cU,
  0xfffff187fffff1c5U, 0xfffff5e700002825U, 0xffffe39b00002c49U, 0xfffff11f00001496U,
  0x31cb00000368U, 0xffffc9b000000976U, 0xffffeba7ffffccb5U, 0x5b2ffffd9c7U,
  0xd2e9ccf3f0dce7e0U, 0xaff6dbea04de05ffU, 0xd6e3ed00020506f7U, 0xc704ff01eefbf6e4U,
  0xccf2dfd402ff01eeU, 0xdcd7fef304ebeef9U, 0xe1c5ccdef9e60402U, 0xfc08bffef1e003fdU,
  0xdbf402b9f7e7f402U, 0xe4efd5ee05f600ecU, 0xf3f0e6fff101ea04U, 0xb4fbd3e2ff0304feU,
  0xf7f9cccde9dc04eeU, 0xd3f2fd0604e5e0f6U, 0x1fe02f802e2e9dbU, 0xbfd6f5d100f1eaf1U,
  0xfa090208e603f807U, 0xec04eb07ff07ff05U, 0x3df06e5f1dffbdbU, 0xdad5e905f5fe0108U,
  0x7ff01070605U, 0x3f406e1010506fcU, 0x5fe03fee2e802e6U, 0xfb06d4f2e9fff404U,
  0x608cc0103ffe100U, 0x10905020409fa05U, 0xebfbeced0201f8fdU, 0xdefa03f4da05f004U,
  0x2e2de05f705f0f2U, 0xd8e4eed5e30106e2U, 0x7f9dc06f507e102U, 0xf106070601f505f6U,
  0x2070505ee0303f5U, 0xdeede50107f2e1U, 0x5020305dee0d603U, 0xfef0e4f2f50404f1U,
  0xffe7dafdef06e907U, 0xcee903ebe204e904U, 0xfc0203feff08dde5U, 0x605ffe301f9fefaU,
  0x407e60004ed0607U, 0xfce30600f0f0d5ffU, 0x6ec00eaf8060404U, 0xeef404ef02eeccecU,
  0xe003fc060705fe06U, 0x405f7e3d4eefb04U, 0x7ec0203d70104ffU, 0xf8060406000301ecU,
  0xfe08ef02f7d30908U, 0xc304000706e3eed8U, 0xc4f9cdd901f5fb06U, 0xe9fdcb08070201dbU,
  0xff0306d501cedcecU, 0x3f5fbc7eaed0705U, 0x3f502e6e3e60102U, 0x702c2dbefe206fbU,
  0x3e2e7edd307fffeU, 0xc108bc0004e606e8U, 0xf005f006fdc5ebcbU, 0xf0e5ddc606030106U,
  0x5fcbbedb6ec06f5U, 0xf6d9e803fa000704U, 0xd7fcd906010404ebU, 0xc9de04e70504f206U,
  0xdc0609f105f5f7e6U, 0x5fff6040308e901U, 0xece7f1f602f1f7fcU, 0xe6ddddf606eaf0ebU,
  0x50509ee040804f9U, 0x4ea04df010606efU, 0xed0501effb0402feU, 0x2ff04f108f301e9U,
  0x6eedd03f3030505U, 0xe5d8eaf302eb05e9U, 0x70506000308f3U, 0xeddbedd9f2010204U,
  0x7fd040804f30201U, 0x1fae600fefcf7d5U, 0xf6cdefeafe05f7e2U, 0x303e9fb0104e705U,
  0x8f7fdfdffeaedecU, 0x40003f50505f6U, 0x304ffd5e503bde4U, 0x6e001fa03f60003U,
  0x40206f90005fa05U, 0x402030505fffa03U, 0x5ea030604d8fa05U, 0xf5000301e0f40305U,
  0xf1040305d9e40309U, 0x10005f4c4fbd304U, 0xe3f3ebe6f004e603U, 0x500040503dcde02U,
  0xfcd9020403040006U, 0x2d7e6defff4f702U, 0x3d6fed6fef8deU, 0xf3050305dc0604ffU,
  0x6e8e4ecdb01e105U, 0xf9cf050203e5fbffU, 0x40602dbea010805U, 0xf50203fdd4e702d1U,
  0x2fc01f8ffb305e7U, 0xf3f20505acfcfbU, 0x2e805f6fce9f505U, 0xfb04fe02f4c80203U,
  0xfada0205f803dcd3U, 0x303feee06eff500U, 0xe600f50206c6f2f2U, 0xfa020602f905ecfeU,
  0xf8d6fbedc10304c0U, 0x7d4dcfd010608faU, 0x1d506fad106d6U, 0xf8e6fdf2fbe6ebeeU,
  0x604d7f20808f1f7U, 0xfc07eafa0709e6f0U, 0xee02d806e7020503U, 0x5eae0f807de02d7U,
  0x1f600e8fbedf1e3U, 0xfe02fcffe501fa02U, 0x2e7ee0400fde405U, 0x10504ee03f90701U,
  0xe801fbe7f006f4e6U, 0xc9ebf2fd07e6f5faU, 0x4f8f9f906e8efa9U, 0xf6dceed7fa07e303U,
  0x70604f1f60605f0U, 0x5040000060507c7U, 0xf20305fae90302f8U, 0xcafe03020007fb06U,
  0x3e5ebeef8ff0a09U, 0xe30302cd0803fdfbU, 0xeb02c103ff02ff06U, 0x404040005effbdcU,
  0xc006a308fef0fdf4U, 0x202db0504e80104U, 0x406e103f7edfa07U, 0xe3ee0103eeef07faU,
  0xfee10606f906f0f5U, 0xd9f9d00303f904fcU, 0xe005f70503f3e7f4U, 0x6d9e10508fdfd07U,
  0x503f40403030702U, 0xfdeff404020607f7U, 0xcb0206fd05fb06e0U, 0xfb0405ff0500fe05U,
  0x2fcd403fff6b8e9U, 0xecd8f3ffaff6df02U, 0x5020303dcfdf600U, 0xd505fb05d9020302U,
  0xcbf6df05c3ebe6e8U, 0xd4f101f5d0e3fefbU, 0x4f5e9d401c8b1d2U, 0x505c0e20005d2fdU,
  0x3f502fee0f602b6U, 0x10406effc03e2f2U, 0x2fbfa0002f1defaU, 0xe3f804f7d503d7e3U,
  0xcef9fe00cdc3U, 0xffffe504fcfd0406U, 0x7d40206030002feU, 0x3f100f4bfd9ebdcU,
  0xf8cfe30406efeeefU, 0xfbf1faaeef0006b6U, 0xe4da0600e004fa03U, 0xfd0605f209040303U,
  0xbae7afebb2f5aef9U, 0xdbef02040407e704U, 0xe4d2c4e30405ed04U, 0xdffefd06f8e40205U,
  0xd90502c2020608d0U, 0x4eaf502eeea0804U, 0x2d0dddffde604fbU, 0xec06e10307fddaffU,
  0xe805f4ddf301f2f9U, 0xd006080500000400U, 0xe9070201cc080504U, 0xf7e804f7fbfa0707U,
  0xf1f1e8fb00020904U, 0xcad606e9d1ca07e9U, 0x604f9ffed07a5f6U, 0xf1050506fcfe0302U,
  0xeeefdd0703efeb05U, 0x602df0205e6cf02U, 0x409e80308070706U, 0xdbe3de08eddbe507U,
  0x5d706f6fbee06e5U, 0xf106f906bd04b209U, 0xe7ef06f8cffdf606U, 0x6f5040408c4e505U,
  0xeaeadfeaf7fedb09U, 0xfee6fb02fe00f101U, 0xf9f502e6bfec04f2U, 0x2d906cf04e708e0U,
  0x6ffe8ebeddee6dcU, 0xfaf6f90404dc05feU, 0x604c8e1030505f0U, 0x5f3e601f0f5fadaU,
  0x5e907e303fc00f1U, 0x404040102e9f3f4U, 0x5e90405f8e30502U, 0xfef602ede9d604fdU,
  0xeeeefe04f5e1ee03U, 0xccfcfaf80502fee8U, 0xe8ed05f0ffffea04U, 0xffda06defb0404fbU,
  0xfae002e3e9d905edU, 0x4d3d9ff06e0f5eeU, 0xd303dbf801dee4d4U, 0xefd80101fef3e5f1U,
  0x3edeeeff5e10902U, 0xfd04060107020402U, 0xf106f6d6fd05faf1U, 0x7e800050002fddaU,
  0x5fc06ef030104feU, 0x80806020509f001U, 0x6e10306f6f80204U, 0xefe60407f8f30502U,
  0xdb02060201f3f305U, 0xf0fb0205ffdffafeU, 0xf6e8fdf8e7ff08ffU, 0x500f70206f8f905U,
  0xf30300f400050702U, 0x4fd05fb040000f8U, 0xae06dce70003dddbU, 0xe7f6070405fbedffU,
  0x504c6ede505ff01U, 0x9df8fd0401e0e7fbU, 0xc506ae0404f30506U, 0xedf1dd06e8e6f7faU,
  0xd4fbeed601e5fe05U, 0xe7ecfde3f5ea03f8U, 0x5ecdfe0e90601f4U, 0x7fdbab8fb0500f6U,
  0xf5ef08a20607dbffU, 0x810901f701eb06e7U, 0x804fd0707f7f3dcU, 0xf0cfc3c6d5fd04f3U,
  0x807bed9e1f80005U, 0x505ec05030502dbU, 0xc9e8010107e70504U, 0xb4e4fcd9f705f805U,
  0x6e0dfeee8ea02f3U, 0xf4c7ddfd01f8fcf1U, 0x3e2fa05ffde0304U, 0x40503f4df0504ecU,
  0xcee4e703dd02e301U, 0xdb06dc04ebefd403U, 0xe105cee7ed07e0f3U, 0xf9dffdd8d7d80203U,
  0x8c606db01e606f5U, 0xf803fae10202fc04U, 0xfbe509f5fa01f7fdU, 0x7fcfaf6060100ffU,
  0xdcd8facff7040203U, 0xddf40003cffe0204U, 0x3050500fc05fbU, 0x5c1d4c304e0dfcdU,
  0x6eadae304ef0a09U, 0xc90603e802de04e5U, 0xe7f5010307f8f702U, 0x603ff06010506f4U,
  0xbe0ad0fcd5f1d30aU, 0x107f3f7fb01c806U, 0xfa09dff2030de200U, 0x6fad405dfddfe08U,
  0x30407d606d708f9U, 0xdbfd0506f9edfa07U, 0xf7080800ccf906e9U, 0x1f5cd0109f70807U,
  0x703d5e9dae6fc07U, 0xe50105fdd8e4ebffU, 0xef070303fa000400U, 0xfdfcffff08d100e8U,
  0x206ec0208fd01ebU, 0x106fa06f5f8d8e8U, 0xe3e7ffe4f9e60002U, 0xf7fb03060503fa06U,
  0xfc0103eed504d8f8U, 0xfefbff01d703fdf6U, 0xffeffef3f208dee9U, 0x103fb0406ffe9d0U,
  0x304d2ee05e804f4U, 0x50af300e8faf7e7U, 0x301edfdee060802U, 0xe905e80702def3e2U,
  0x403f6e705eeec03U, 0xd90206edcfeae803U, 0xd707e707fdfe0207U, 0xfbf802fd01fee8edU,
  0xf37000003ecU, 0xfffffe42fffffeddU, 0xfffffe5d00000088U, 0x7b6fffffde8U,
  0x1fdfffffc64U, 0xfffff525fffffe57U, 0xfffffd710000024fU, 0xffffffe4fffff960U,
  0xfffff949fffff40fU, 0xffffff2f00000a37U, 0x266fffff590U, 0xffffff23fffffde5U,
  0x15b000003daU, 0xfffff819fffff5ffU, 0x528fffffe8bU, 0x208000000c0U,
  0xfffff7e6fffff831U, 0xfffff98200000180U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

