const unsigned int kickerSimpleHoleVertices=42;
const unsigned int kickerSimpleHoleNumFaces=126;
Vertex3D_NoTex2 kickerSimpleHoleMesh[42]=
{
{ 0.943995f,0.018753f,-0.572013f, -1.000000f,-0.000000f,0.000000f, 0.069900f,0.897100f},
{ 0.886581f,0.344621f,0.063986f, -0.939800f,-0.341800f,0.000000f, 0.045600f,1.000000f},
{ 0.886581f,0.344621f,-0.572013f, -0.939800f,-0.341800f,0.000000f, 0.045600f,0.897100f},
{ 0.943995f,0.018750f,0.063986f, -1.000000f,-0.000000f,0.000000f, 0.069900f,1.000000f},
{ 0.721268f,0.631187f,0.063986f, -0.766300f,-0.642500f,0.000000f, 0.024300f,1.000000f},
{ 0.721268f,0.631187f,-0.572014f, -0.766300f,-0.642500f,0.000000f, 0.024300f,0.897100f},
{ 0.467997f,0.843882f,0.063986f, -0.500300f,-0.865900f,0.000000f, 0.008400f,1.000000f},
{ 0.467997f,0.843881f,-0.572014f, -0.500300f,-0.865900f,0.000000f, 0.008400f,0.897100f},
{ 0.157308f,0.957056f,0.063986f, -0.173800f,-0.984800f,-0.000000f, 0.000000f,1.000000f},
{ 0.157308f,0.957056f,-0.572014f, -0.173800f,-0.984800f,-0.000000f, 0.000000f,0.897100f},
{ -0.173319f,0.957056f,0.063986f, 0.173800f,-0.984800f,-0.000000f, 0.000000f,1.000000f},
{ -0.173319f,0.957056f,-0.572014f, 0.173800f,-0.984800f,-0.000000f, 0.000000f,0.897100f},
{ -0.484004f,0.843882f,0.063986f, 0.500300f,-0.865900f,-0.000000f, 0.008400f,1.000000f},
{ -0.484004f,0.843881f,-0.572014f, 0.500300f,-0.865900f,-0.000000f, 0.008400f,0.897100f},
{ -0.737275f,0.631181f,0.063986f, 0.766300f,-0.642500f,-0.000000f, 0.024300f,1.000000f},
{ -0.737278f,0.631184f,-0.572014f, 0.766300f,-0.642500f,-0.000000f, 0.024300f,0.897100f},
{ -0.902587f,0.344624f,0.063986f, 0.939800f,-0.341800f,-0.000000f, 0.045600f,1.000000f},
{ -0.902587f,0.344624f,-0.572013f, 0.939800f,-0.341800f,-0.000000f, 0.045600f,0.897100f},
{ -0.960002f,0.018750f,0.063986f, 1.000000f,-0.000000f,-0.000000f, 0.069900f,1.000000f},
{ -0.960005f,0.018750f,-0.572013f, 1.000000f,-0.000000f,-0.000000f, 0.069900f,0.897100f},
{ -0.902587f,-0.307114f,0.063987f, 0.939800f,0.341800f,-0.000000f, 0.094200f,1.000000f},
{ -0.902592f,-0.307114f,-0.572013f, 0.939800f,0.341800f,-0.000000f, 0.094200f,0.897100f},
{ -0.737278f,-0.593678f,0.063987f, 0.766300f,0.642500f,-0.000000f, 0.115600f,1.000000f},
{ -0.737282f,-0.593678f,-0.572013f, 0.766300f,0.642500f,-0.000000f, 0.115600f,0.897100f},
{ -0.484004f,-0.806379f,0.063987f, 0.500300f,0.865900f,-0.000000f, 0.131400f,1.000000f},
{ -0.484004f,-0.806380f,-0.572013f, 0.500300f,0.865900f,-0.000000f, 0.131400f,0.897100f},
{ -0.153030f,-0.926944f,-0.572013f, 0.162100f,0.986800f,-0.000000f, 0.140400f,0.897100f},
{ 0.157308f,-0.919553f,0.063987f, -0.185500f,0.982600f,-0.000000f, 0.139800f,1.000000f},
{ 0.157308f,-0.919553f,-0.572013f, -0.185500f,0.982600f,-0.000000f, 0.140400f,0.897100f},
{ -0.153027f,-0.926944f,0.063987f, 0.162100f,0.986800f,-0.000000f, 0.139800f,1.000000f},
{ 0.467997f,-0.806379f,0.063987f, -0.500300f,0.865900f,0.000000f, 0.131400f,1.000000f},
{ 0.467997f,-0.806380f,-0.572013f, -0.500300f,0.865900f,0.000000f, 0.131400f,0.897100f},
{ 0.738408f,-0.579289f,-0.572013f, -0.916600f,0.399800f,-0.000000f, 0.114500f,0.897100f},
{ 0.737707f,-0.565194f,0.063987f, -0.972100f,0.234600f,-0.000000f, 0.113400f,1.000000f},
{ 0.737707f,-0.565194f,-0.572013f, -0.972100f,0.234600f,-0.000000f, 0.113400f,0.897100f},
{ 0.738408f,-0.579289f,0.063987f, -0.916600f,0.399700f,0.000000f, 0.114500f,1.000000f},
{ 0.886581f,-0.307114f,-0.572013f, -0.939800f,0.341800f,0.000000f, 0.094200f,0.897100f},
{ 0.886581f,-0.307114f,0.063987f, -0.939800f,0.341800f,0.000000f, 0.094200f,1.000000f},
{ -0.173315f,-0.919553f,0.063987f, 0.342300f,0.939600f,-0.000000f, 0.139800f,1.000000f},
{ -0.173319f,-0.919553f,-0.572013f, 0.342300f,0.939600f,-0.000000f, 0.140400f,0.897100f},
{ 0.721275f,-0.593682f,0.063987f, -0.643200f,0.765700f,0.000000f, 0.115600f,1.000000f},
{ 0.721271f,-0.593682f,-0.572013f, -0.643100f,0.765800f,0.000000f, 0.115600f,0.897100f}
};

WORD kickerSimpleHoleIndices[126]=
{
   0,1,2,3,1,0,2,4,5,1,4,2,5,6,7,
   4,6,5,7,8,9,6,8,7,9,10,11,8,10,9,
   11,12,13,10,12,11,13,14,15,12,14,13,15,16,17,
   14,16,15,17,18,19,16,18,17,19,20,21,18,20,19,
   21,22,23,20,22,21,23,24,25,22,24,23,26,27,28,
   29,27,26,28,30,31,27,30,28,32,33,34,35,33,32,
   36,3,0,37,3,36,34,37,36,33,37,34,38,25,24,
   38,39,25,29,39,38,29,26,39,40,31,30,40,41,31,
   35,41,40,35,32,41
};