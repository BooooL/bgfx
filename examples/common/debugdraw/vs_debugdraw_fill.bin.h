static const uint8_t vs_debugdraw_fill_glsl[300] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, // VSH............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // _viewProj.......
	0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, // ..u_model. .. ..
	0x00, 0xf6, 0x00, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, // .....in uvec4 a_
	0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, // indices;.in vec3
	0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x75, 0x6e, 0x69, //  a_position;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // form mat4 u_view
	0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, // Proj;.uniform ma
	0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, // t4 u_model[32];.
	0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, // void main ().{. 
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, //  vec4 tmpvar_1;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, //   tmpvar_1.w = 1
	0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, // .0;.  tmpvar_1.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, // yz = a_position;
	0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, // .  gl_Position =
	0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, //  (u_viewProj * (
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, 0x6e, 0x74, 0x28, 0x61, 0x5f, 0x69, 0x6e, // u_model[int(a_in
	0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // dices.x)] * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                         // ar_1));.}...
};
static const uint8_t vs_debugdraw_fill_spv[1253] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, 0x00, 0x00, 0x00, 0x0a, 0x75, // _model. @......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, // _viewProj.......
	0x00, 0xa8, 0x04, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x00, 0x08, // .......#........
	0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, // .f..............
	0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, // .........GLSL.st
	0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // d.450...........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, // .main....9...=..
	0x00, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, // .@..............
	0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, // .........main...
	0x00, 0x05, 0x00, 0x06, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // .........Uniform
	0x42, 0x6c, 0x6f, 0x63, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x1e, 0x00, 0x00, // Block...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, // .....u_viewProj.
	0x00, 0x06, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, // .............u_m
	0x6f, 0x64, 0x65, 0x6c, 0x00, 0x05, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // odel..... ......
	0x00, 0x05, 0x00, 0x05, 0x00, 0x39, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, // .....9...a_indic
	0x65, 0x73, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x70, // es.......=...a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x40, 0x00, 0x00, // osition......@..
	0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, // .@entryPointOutp
	0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, // ut.gl_Position..
	0x00, 0x47, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .G...........@..
	0x00, 0x48, 0x00, 0x04, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .H..............
	0x00, 0x48, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...........#..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....H..........
	0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1e, 0x00, 0x00, // .........H......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, // .........H......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .....#...@...H..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x47, 0x00, 0x03, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, // .G...........G..
	0x00, 0x20, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, // . ...".......G..
	0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, // . ...!.......G..
	0x00, 0x39, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, // .9...........G..
	0x00, 0x3d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, // .=...........G..
	0x00, 0x40, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, // .@..............
	0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....!..........
	0x00, 0x15, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......... ......
	0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x16, 0x00, 0x03, 0x00, 0x09, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, // ......... ......
	0x00, 0x0a, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, // ................
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .............+..
	0x00, 0x09, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x18, 0x00, 0x04, // ............?...
	0x00, 0x1b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .............+..
	0x00, 0x06, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, // ......... ......
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x04, // ................
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // ............. ..
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .............;..
	0x00, 0x1f, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, // ..... ..........
	0x00, 0x21, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .!... .......+..
	0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .!..."....... ..
	0x00, 0x28, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .(...........+..
	0x00, 0x21, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .!........... ..
	0x00, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .8...........;..
	0x00, 0x38, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .8...9....... ..
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .<...........;..
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .<...=....... ..
	0x00, 0x3f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .?...........;..
	0x00, 0x3f, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, // .?...@.......6..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // .........=......
	0x00, 0x3a, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, // .:...9...=......
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, // .>...=...Q......
	0x00, 0x58, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, // .X...>.......Q..
	0x00, 0x09, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .....Y...>......
	0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, // .Q.......Z...>..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, // .....P.......[..
	0x00, 0x58, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, // .X...Y...Z......
	0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, // .Q.......]...:..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, // .....|...!...^..
	0x00, 0x5d, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x28, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, // .]...A...(..._..
	0x00, 0x20, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, // . ..."...^...=..
	0x00, 0x1b, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, // .....`..._......
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, // .....a...[...`..
	0x00, 0x41, 0x00, 0x05, 0x00, 0x28, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // .A...(...c... ..
	0x00, 0x2e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, // .....=.......d..
	0x00, 0x63, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .c...........e..
	0x00, 0x61, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x40, 0x00, 0x00, // .a...d...>...@..
	0x00, 0x65, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x02, 0x0e, // .e.......8......
	0x00, 0x01, 0x00, 0x40, 0x08,                                                                   // ...@.
};
static const uint8_t vs_debugdraw_fill_dx9[490] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x0a, 0x75, // _model. .......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x80, 0x00, 0x04, 0x00, 0x00, // _viewProj.......
	0x00, 0xb4, 0x01, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x2b, 0x00, 0x43, 0x54, 0x41, // ...........+.CTA
	0x42, 0x1c, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x02, 0x00, 0x00, // B...............
	0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, // .........x...D..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........L......
	0x00, 0x5c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // .............h..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x03, 0x00, 0x03, // .....u_model....
	0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, // ..... .......u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, // iewProj.........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, // .........vs_3_0.
	0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, // Microsoft (R) HL
	0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, // SL Shader Compil
	0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x84, 0x00, 0x0f, // er 10.1..Q......
	0xa0, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....@...........
	0x00, 0x1f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x80, 0x00, 0x00, 0x0f, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x84, 0x00, 0x00, // ................
	0xa0, 0x00, 0x00, 0x00, 0x90, 0x2e, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0xb0, 0x00, 0x00, 0x00, // ................
	0x80, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0x55, 0x90, 0x01, 0x20, 0xe4, // ...........U.. .
	0xa0, 0x00, 0x00, 0x00, 0xb0, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x20, 0xe4, // .............. .
	0xa0, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, // ................
	0x05, 0x00, 0x00, 0x0f, 0x80, 0x02, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0xaa, // ...... .........
	0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, // ................
	0x80, 0x03, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, // .. .............
	0x80, 0x00, 0x00, 0x55, 0x80, 0x81, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, // ...U............
	0x80, 0x80, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, // ................
	0x04, 0x01, 0x00, 0x0f, 0x80, 0x82, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0xe4, // ................
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0xe0, 0x83, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xff, // ................
	0x80, 0x01, 0x00, 0xe4, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00,                                     // ..........
};
static const uint8_t vs_debugdraw_fill_dx11[685] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, // VSH............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // _viewProj.......
	0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, 0x00, 0x00, // ..u_model. @....
	0x00, 0x70, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x5f, 0x41, 0xca, 0x34, 0xb4, 0x57, 0xbe, // .p...DXBC_A.4.W.
	0x95, 0xea, 0x82, 0x43, 0x48, 0x9b, 0xc3, 0xbc, 0xdb, 0x01, 0x00, 0x00, 0x00, 0x70, 0x02, 0x00, // ...CH........p..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, // .....,..........
	0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .ISGNP..........
	0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .8..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........E......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, // ................
	0x00, 0x42, 0x4c, 0x45, 0x4e, 0x44, 0x49, 0x4e, 0x44, 0x49, 0x43, 0x45, 0x53, 0x00, 0x50, 0x4f, // .BLENDINDICES.PO
	0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, // SITION...OSGN,..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......... ......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x53, 0x48, 0x44, // .SV_POSITION.SHD
	0x52, 0xb0, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x59, 0x08, 0x00, // R....@...l...Y..
	0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, // .F. ........._..
	0x03, 0x12, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, // ........._...r..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....g.... .....
	0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, // .....h.......)..
	0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x01, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // ..@......8......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .....V.......F. 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .2...........F. 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .2...........F. 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x00, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // .............F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .....F. ........
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, // .........8......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .....V.......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // .........2......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....F. ........
	0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .2...........F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x20, 0x10, // .F.......2.... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .....F. ........
	0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0x40, 0x08,                   // .>.........@.
};
static const uint8_t vs_debugdraw_fill_mtl[645] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, 0x00, 0x00, 0x00, 0x0a, 0x75, // _model. @......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, // _viewProj.......
	0x00, 0x48, 0x02, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, // .H...#include <m
	0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, // etal_stdlib>.#in
	0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, // clude <simd/simd
	0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, // .h>..using names
	0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, // pace metal;..str
	0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // uct _Global.{.  
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, //   float4x4 u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // wProj;.    float
	0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, // 4x4 u_model[32];
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // .};..struct xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // MtlMain_out.{.  
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, //   float4 gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, // tion [[position]
	0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, // ];.};..struct xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, // atMtlMain_in.{. 
	0x20, 0x20, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, //    uint4 a_indic
	0x65, 0x73, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, // es [[attribute(0
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, // )]];.    float3 
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, // a_position [[att
	0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, // ribute(1)]];.};.
	0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, // .vertex xlatMtlM
	0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, // ain_out xlatMtlM
	0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, // ain(xlatMtlMain_
	0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, // in in [[stage_in
	0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, // ]], constant _Gl
	0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, // obal& _mtl_u [[b
	0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // uffer(0)]]).{.  
	0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, //   xlatMtlMain_ou
	0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // t out = {};.    
	0x6f, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, // out.gl_Position 
	0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // = _mtl_u.u_viewP
	0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, // roj * (_mtl_u.u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, 0x6e, 0x74, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x69, // model[int(in.a_i
	0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, 0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, // ndices.x)] * flo
	0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // at4(in.a_positio
	0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, // n, 1.0));.    re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x02, 0x0e, // turn out;.}.....
	0x00, 0x01, 0x00, 0x40, 0x08,                                                                   // ...@.
};
extern const uint8_t* vs_debugdraw_fill_pssl;
extern const uint32_t vs_debugdraw_fill_pssl_size;
