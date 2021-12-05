#include "pattern_matcher.h"


void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx){
for(int i=0; i< buffer_size - chunk_len; i++){
buffer[i] = buffer[i+chunk_len];
}
for(int i=0;i<chunk_len; i++){
buffer[buffer_size - chunk_len + i] = chunk(start_indx + i, start_indx);
}
}

boolean b0_1;
boolean b0_2;
boolean b0_3;
boolean b0_4;
boolean b0_5;
boolean b0_6;
boolean b0_7;
boolean b0_8;
boolean b0_9;
boolean b0_10;
boolean b0_11;
boolean b0_12;
boolean b0_13;
boolean b0_14;
boolean b0_15;
boolean b0_16;
boolean b0_17;
boolean b0_18;
boolean b0_19;
boolean b0_20;
boolean b0_21;
boolean b0_22;
boolean b0_23;
boolean b0_24;
boolean b0_25;
boolean b0_26;
boolean b0_27;
boolean b0_28;
boolean b0_29;
boolean b0_30;
boolean b0_31;
boolean b0_32;
boolean b0_33;
boolean b0_34;
boolean b0_35;
boolean b0_36;
boolean b0_37;
boolean b0_38;
boolean b0_39;
boolean b0_40;
boolean b0_41;
boolean b0_42;
boolean b0_43;
boolean b0_44;
boolean b0_45;
boolean b0_46;
boolean b0_47;
boolean b0_48;
boolean b0_49;
boolean b0_50;
boolean b0_51;
boolean b0_52;
boolean b0_53;
boolean b0_54;
boolean b0_55;
boolean b0_56;
boolean b0_57;
boolean b0_58;
boolean b0_59;
boolean b0_60;
boolean b0_61;
boolean b0_62;
boolean b0_63;
boolean b0_64;
boolean b0_65;
boolean b0_66;
boolean b0_67;
boolean b0_68;
boolean b0_69;
boolean b0_70;
boolean b0_71;
boolean b0_72;
boolean b0_73;
boolean b0_74;
boolean b0_75;
boolean b0_76;
boolean b0_77;
boolean b0_78;
boolean b0_79;
boolean b0_80;
boolean b0_81;
boolean b1_1;
boolean b1_2;
boolean b1_3;
boolean b1_4;
boolean b1_5;
boolean b1_6;
boolean b1_7;
boolean b1_8;
boolean b1_9;
boolean b1_10;
boolean b1_11;
boolean b1_12;
boolean b1_13;
boolean b1_14;
boolean b1_15;
boolean b1_16;
boolean b1_17;
boolean b1_18;
boolean b1_19;
boolean b1_20;
boolean b1_21;
boolean b1_22;
boolean b1_23;
boolean b1_24;
boolean b1_25;
boolean b1_26;
boolean b1_27;
boolean b1_28;
boolean b1_29;
boolean b1_30;
boolean b1_31;
boolean b1_32;
boolean b1_33;
boolean b1_34;
boolean b1_35;
boolean b1_36;
boolean b1_37;
boolean b1_38;
boolean b1_39;
boolean b1_40;
boolean b1_41;
boolean b1_42;
boolean b1_43;
boolean b1_44;
boolean b1_45;
boolean b1_46;
boolean b1_47;
boolean b1_48;
boolean b1_49;
boolean b1_50;
boolean b1_51;
boolean b1_52;
boolean b1_53;
boolean b1_54;
boolean b1_55;
boolean b1_56;
boolean b1_57;
boolean b1_58;
boolean b1_59;
boolean b1_60;
boolean b1_61;
boolean b1_62;
boolean b1_63;
boolean b1_64;
boolean b1_65;
boolean b1_66;
boolean b1_67;
boolean b1_68;
boolean b1_69;
boolean b1_70;
boolean b1_71;
boolean b1_72;
boolean b1_73;
boolean b1_74;
boolean b1_75;
boolean b1_76;
boolean b1_77;
boolean b1_78;
boolean b1_79;
boolean b1_80;
boolean b2_1;
boolean b2_2;
boolean b2_3;
boolean b2_4;
boolean b2_5;
boolean b2_6;
boolean b2_7;
boolean b2_8;
boolean b2_9;
boolean b2_10;
boolean b2_11;
boolean b2_12;
boolean b2_13;
boolean b2_14;
boolean b2_15;
boolean b2_16;
boolean b2_17;
boolean b2_18;
boolean b2_19;
boolean b2_20;
boolean b2_21;
boolean b2_22;
boolean b2_23;
boolean b2_24;
boolean b2_25;
boolean b2_26;
boolean b2_27;
boolean b2_28;
boolean b2_29;
boolean b2_30;
boolean b2_31;
boolean b2_32;
boolean b2_33;
boolean b2_34;
boolean b2_35;
boolean b2_36;
boolean b2_37;
boolean b2_38;
boolean b2_39;
boolean b2_40;
boolean b2_41;
boolean b2_42;
boolean b2_43;
boolean b2_44;
boolean b2_45;
boolean b2_46;
boolean b2_47;
boolean b2_48;
boolean b2_49;
boolean b2_50;
boolean b2_51;
boolean b2_52;
boolean b2_53;
boolean b2_54;
boolean b2_55;
boolean b2_56;
boolean b2_57;
boolean b2_58;
boolean b2_59;
boolean b2_60;
boolean b2_61;
boolean b2_62;
boolean b2_63;
boolean b2_64;
boolean b2_65;
boolean b2_66;
boolean b2_67;
boolean b2_68;
boolean b2_69;
boolean b2_70;
boolean b2_71;
boolean b3_1;
boolean b3_2;
boolean b3_3;
boolean b3_4;
boolean b3_5;
boolean b3_6;
boolean b3_7;
boolean b3_8;
boolean b3_9;
boolean b3_10;
boolean b3_11;
boolean b3_12;
boolean b3_13;
boolean b3_14;
boolean b3_15;
boolean b3_16;
boolean b3_17;
boolean b3_18;
boolean b3_19;
boolean b3_20;
boolean b3_21;
boolean b3_22;
boolean b3_23;
boolean b3_24;
boolean b3_25;
boolean b3_26;
boolean b3_27;
boolean b3_28;
boolean b3_29;
boolean b3_30;
boolean b3_31;
boolean b3_32;
boolean b3_33;
boolean b3_34;
boolean b3_35;
boolean b3_36;
boolean b3_37;
boolean b3_38;
boolean b3_39;
boolean b3_40;
boolean b3_41;
boolean b3_42;
boolean b3_43;
boolean b3_44;
boolean b3_45;
boolean b3_46;
boolean b3_47;
boolean b3_48;
boolean b3_49;
boolean b3_50;
boolean b3_51;
boolean b3_52;
boolean b3_53;
boolean b3_54;
boolean b3_55;
boolean b3_56;
boolean b3_57;
boolean b3_58;
boolean b3_59;
boolean b3_60;
boolean b3_61;
boolean b3_62;
boolean b3_63;
boolean b3_64;
boolean b3_65;
boolean b3_66;
boolean b3_67;
boolean b3_68;
boolean b3_69;
boolean b3_70;
boolean b3_71;
boolean b4_1;
boolean b4_2;
boolean b4_3;
boolean b4_4;
boolean b4_5;
boolean b4_6;
boolean b4_7;
boolean b4_8;
boolean b4_9;
boolean b4_10;
boolean b4_11;
boolean b4_12;
boolean b4_13;
boolean b4_14;
boolean b4_15;
boolean b4_16;
boolean b4_17;
boolean b4_18;
boolean b4_19;
boolean b4_20;
boolean b4_21;
boolean b4_22;
boolean b4_23;
boolean b4_24;
boolean b4_25;
boolean b4_26;
boolean b4_27;
boolean b4_28;
boolean b4_29;
boolean b4_30;
boolean b4_31;
boolean b4_32;
boolean b4_33;
boolean b4_34;
boolean b4_35;
boolean b4_36;
boolean b4_37;
boolean b4_38;
boolean b4_39;
boolean b4_40;
boolean b4_41;
boolean b4_42;
boolean b4_43;
boolean b4_44;
boolean b4_45;
boolean b4_46;
boolean b4_47;
boolean b4_48;
boolean b4_49;
boolean b4_50;
boolean b4_51;
boolean b4_52;
boolean b4_53;
boolean b4_54;
boolean b4_55;
boolean b4_56;
boolean b4_57;
boolean b4_58;
boolean b4_59;
boolean b4_60;
boolean b4_61;
boolean b4_62;
boolean b4_63;
boolean b4_64;
boolean b4_65;
boolean b4_66;
boolean b4_67;
boolean b4_68;
boolean b4_69;
boolean b4_70;
boolean b4_71;
boolean b4_72;
boolean b4_73;
boolean b4_74;
boolean b4_75;
boolean b4_76;
boolean b4_77;
boolean b4_78;
boolean b5_1;
boolean b5_2;
boolean b5_3;
boolean b5_4;
boolean b5_5;
boolean b5_6;
boolean b5_7;
boolean b5_8;
boolean b5_9;
boolean b5_10;
boolean b5_11;
boolean b5_12;
boolean b5_13;
boolean b5_14;
boolean b5_15;
boolean b5_16;
boolean b5_17;
boolean b5_18;
boolean b5_19;
boolean b5_20;
boolean b5_21;
boolean b5_22;
boolean b5_23;
boolean b5_24;
boolean b5_25;
boolean b5_26;
boolean b5_27;
boolean b5_28;
boolean b5_29;
boolean b5_30;
boolean b5_31;
boolean b5_32;
boolean b5_33;
boolean b5_34;
boolean b5_35;
boolean b5_36;
boolean b5_37;
boolean b5_38;
boolean b5_39;
boolean b5_40;
boolean b5_41;
boolean b5_42;
boolean b5_43;
boolean b5_44;
boolean b5_45;
boolean b5_46;
boolean b5_47;
boolean b5_48;
boolean b5_49;
boolean b5_50;
boolean b5_51;
boolean b5_52;
boolean b5_53;
boolean b5_54;
boolean b5_55;
boolean b5_56;
boolean b5_57;
boolean b5_58;
boolean b5_59;
boolean b5_60;
boolean b5_61;
boolean b5_62;
boolean b5_63;
boolean b5_64;
boolean b5_65;
boolean b5_66;
boolean b5_67;
boolean b5_68;
boolean b5_69;
boolean b5_70;
boolean b5_71;
boolean b5_72;
boolean b5_73;
boolean b5_74;
boolean b5_75;
boolean b5_76;
boolean b6_1;
boolean b6_2;
boolean b6_3;
boolean b6_4;
boolean b6_5;
boolean b6_6;
boolean b6_7;
boolean b6_8;
boolean b6_9;
boolean b6_10;
boolean b6_11;
boolean b6_12;
boolean b6_13;
boolean b6_14;
boolean b6_15;
boolean b6_16;
boolean b6_17;
boolean b6_18;
boolean b6_19;
boolean b6_20;
boolean b6_21;
boolean b6_22;
boolean b6_23;
boolean b6_24;
boolean b6_25;
boolean b6_26;
boolean b6_27;
boolean b6_28;
boolean b6_29;
boolean b6_30;
boolean b6_31;
boolean b6_32;
boolean b6_33;
boolean b6_34;
boolean b6_35;
boolean b6_36;
boolean b6_37;
boolean b6_38;
boolean b6_39;
boolean b6_40;
boolean b6_41;
boolean b6_42;
boolean b6_43;
boolean b6_44;
boolean b6_45;
boolean b6_46;
boolean b6_47;
boolean b6_48;
boolean b6_49;
boolean b6_50;
boolean b6_51;
boolean b6_52;
boolean b6_53;
boolean b6_54;
boolean b6_55;
boolean b6_56;
boolean b6_57;
boolean b6_58;
boolean b6_59;
boolean b6_60;
boolean b6_61;
boolean b6_62;
boolean b6_63;
boolean b6_64;
boolean b6_65;
boolean b6_66;
boolean b6_67;
boolean b6_68;
boolean b6_69;
boolean b6_70;
boolean b6_71;
boolean b6_72;
boolean b6_73;
boolean b6_74;
boolean b7_1;
boolean b7_2;
boolean b7_3;
boolean b7_4;
boolean b7_5;
boolean b7_6;
boolean b7_7;
boolean b7_8;
boolean b7_9;
boolean b7_10;
boolean b7_11;
boolean b7_12;
boolean b7_13;
boolean b7_14;
boolean b7_15;
boolean b7_16;
boolean b7_17;
boolean b7_18;
boolean b7_19;
boolean b7_20;
boolean b7_21;
boolean b7_22;
boolean b7_23;
boolean b7_24;
boolean b7_25;
boolean b7_26;
boolean b7_27;
boolean b7_28;
boolean b7_29;
boolean b7_30;
boolean b7_31;
boolean b7_32;
boolean b7_33;
boolean b7_34;
boolean b7_35;
boolean b7_36;
boolean b7_37;
boolean b7_38;
boolean b7_39;
boolean b7_40;
boolean b7_41;
boolean b7_42;
boolean b7_43;
boolean b7_44;
boolean b7_45;
boolean b7_46;
boolean b7_47;
boolean b7_48;
boolean b7_49;
boolean b7_50;
boolean b7_51;
boolean b7_52;
boolean b7_53;
boolean b7_54;
boolean b7_55;
boolean b7_56;
boolean b7_57;
boolean b7_58;
boolean b7_59;
boolean b7_60;
boolean b7_61;
boolean b7_62;
boolean b7_63;
boolean b7_64;
boolean b7_65;
boolean b7_66;
boolean b7_67;
boolean b7_68;
boolean b7_69;
boolean b7_70;
boolean b7_71;
boolean b7_72;
boolean b7_73;
boolean b7_74;
boolean b7_75;
boolean b7_76;
boolean b7_77;
boolean b7_78;
boolean b7_79;
boolean b7_80;
boolean b8_1;
boolean b8_2;
boolean b8_3;
boolean b8_4;
boolean b8_5;
boolean b8_6;
boolean b8_7;
boolean b8_8;
boolean b8_9;
boolean b8_10;
boolean b8_11;
boolean b8_12;
boolean b8_13;
boolean b8_14;
boolean b8_15;
boolean b8_16;
boolean b8_17;
boolean b8_18;
boolean b8_19;
boolean b8_20;
boolean b8_21;
boolean b8_22;
boolean b8_23;
boolean b8_24;
boolean b8_25;
boolean b8_26;
boolean b8_27;
boolean b8_28;
boolean b8_29;
boolean b8_30;
boolean b8_31;
boolean b8_32;
boolean b8_33;
boolean b8_34;
boolean b8_35;
boolean b8_36;
boolean b8_37;
boolean b8_38;
boolean b8_39;
boolean b8_40;
boolean b8_41;
boolean b8_42;
boolean b8_43;
boolean b8_44;
boolean b8_45;
boolean b8_46;
boolean b8_47;
boolean b8_48;
boolean b8_49;
boolean b8_50;
boolean b8_51;
boolean b8_52;
boolean b8_53;
boolean b8_54;
boolean b8_55;
boolean b8_56;
boolean b8_57;
boolean b8_58;
boolean b8_59;
boolean b8_60;
boolean b8_61;
boolean b8_62;
boolean b8_63;
boolean b8_64;
boolean b8_65;
boolean b8_66;
boolean b8_67;
boolean b8_68;
boolean b8_69;
boolean b8_70;
boolean b8_71;
boolean b9_1;
boolean b9_2;
boolean b9_3;
boolean b9_4;
boolean b9_5;
boolean b9_6;
boolean b9_7;
boolean b9_8;
boolean b9_9;
boolean b9_10;
boolean b9_11;
boolean b9_12;
boolean b9_13;
boolean b9_14;
boolean b9_15;
boolean b9_16;
boolean b9_17;
boolean b9_18;
boolean b9_19;
boolean b9_20;
boolean b9_21;
boolean b9_22;
boolean b9_23;
boolean b9_24;
boolean b9_25;
boolean b9_26;
boolean b9_27;
boolean b9_28;
boolean b9_29;
boolean b9_30;
boolean b9_31;
boolean b9_32;
boolean b9_33;
boolean b9_34;
boolean b9_35;
boolean b9_36;
boolean b9_37;
boolean b9_38;
boolean b9_39;
boolean b9_40;
boolean b9_41;
boolean b9_42;
boolean b9_43;
boolean b9_44;
boolean b9_45;
boolean b9_46;
boolean b9_47;
boolean b9_48;
boolean b9_49;
boolean b9_50;
boolean b9_51;
boolean b9_52;
boolean b9_53;
boolean b9_54;
boolean b9_55;
boolean b9_56;
boolean b9_57;
boolean b9_58;
boolean b9_59;
boolean b9_60;
boolean b9_61;
boolean b9_62;
boolean b9_63;
boolean b9_64;
boolean b9_65;
boolean b9_66;
boolean b9_67;
boolean b9_68;
boolean b9_69;
boolean b9_70;
boolean b9_71;
boolean b9_72;
boolean b10_1;
boolean b10_2;
boolean b10_3;
boolean b10_4;
boolean b10_5;
boolean b10_6;
boolean b10_7;
boolean b10_8;
boolean b10_9;
boolean b10_10;
boolean b10_11;
boolean b10_12;
boolean b10_13;
boolean b10_14;
boolean b10_15;
boolean b10_16;
boolean b10_17;
boolean b10_18;
boolean b10_19;
boolean b10_20;
boolean b10_21;
boolean b10_22;
boolean b10_23;
boolean b10_24;
boolean b10_25;
boolean b10_26;
boolean b10_27;
boolean b10_28;
boolean b10_29;
boolean b10_30;
boolean b10_31;
boolean b10_32;
boolean b10_33;
boolean b10_34;
boolean b10_35;
boolean b10_36;
boolean b10_37;
boolean b10_38;
boolean b10_39;
boolean b10_40;
boolean b10_41;
boolean b10_42;
boolean b10_43;
boolean b10_44;
boolean b10_45;
boolean b10_46;
boolean b10_47;
boolean b10_48;
boolean b10_49;
boolean b10_50;
boolean b10_51;
boolean b10_52;
boolean b10_53;
boolean b10_54;
boolean b10_55;
boolean b10_56;
boolean b10_57;
boolean b10_58;
boolean b10_59;
boolean b10_60;
boolean b10_61;
boolean b10_62;
boolean b10_63;
boolean b10_64;
boolean b10_65;
boolean b10_66;
boolean b10_67;
boolean b10_68;
boolean b10_69;
boolean b10_70;
boolean b10_71;
boolean b10_72;
boolean b10_73;
boolean b10_74;
boolean b11_1;
boolean b11_2;
boolean b11_3;
boolean b11_4;
boolean b11_5;
boolean b11_6;
boolean b11_7;
boolean b11_8;
boolean b11_9;
boolean b11_10;
boolean b11_11;
boolean b11_12;
boolean b11_13;
boolean b11_14;
boolean b11_15;
boolean b11_16;
boolean b11_17;
boolean b11_18;
boolean b11_19;
boolean b11_20;
boolean b11_21;
boolean b11_22;
boolean b11_23;
boolean b11_24;
boolean b11_25;
boolean b11_26;
boolean b11_27;
boolean b11_28;
boolean b11_29;
boolean b11_30;
boolean b11_31;
boolean b11_32;
boolean b11_33;
boolean b11_34;
boolean b11_35;
boolean b11_36;
boolean b11_37;
boolean b11_38;
boolean b11_39;
boolean b11_40;
boolean b11_41;
boolean b11_42;
boolean b11_43;
boolean b11_44;
boolean b11_45;
boolean b11_46;
boolean b11_47;
boolean b11_48;
boolean b11_49;
boolean b11_50;
boolean b11_51;
boolean b11_52;
boolean b11_53;
boolean b11_54;
boolean b11_55;
boolean b11_56;
boolean b11_57;
boolean b11_58;
boolean b11_59;
boolean b11_60;
boolean b11_61;
boolean b11_62;
boolean b11_63;
boolean b11_64;
boolean b11_65;
boolean b11_66;
boolean b11_67;
boolean b11_68;
boolean b11_69;
boolean b11_70;
boolean b11_71;
boolean b11_72;
boolean b11_73;
boolean b11_74;
boolean b12_1;
boolean b12_2;
boolean b12_3;
boolean b12_4;
boolean b12_5;
boolean b12_6;
boolean b12_7;
boolean b12_8;
boolean b12_9;
boolean b12_10;
boolean b12_11;
boolean b12_12;
boolean b12_13;
boolean b12_14;
boolean b12_15;
boolean b12_16;
boolean b12_17;
boolean b12_18;
boolean b12_19;
boolean b12_20;
boolean b12_21;
boolean b12_22;
boolean b12_23;
boolean b12_24;
boolean b12_25;
boolean b12_26;
boolean b12_27;
boolean b12_28;
boolean b12_29;
boolean b12_30;
boolean b12_31;
boolean b12_32;
boolean b12_33;
boolean b12_34;
boolean b12_35;
boolean b12_36;
boolean b12_37;
boolean b12_38;
boolean b12_39;
boolean b12_40;
boolean b12_41;
boolean b12_42;
boolean b12_43;
boolean b12_44;
boolean b12_45;
boolean b12_46;
boolean b12_47;
boolean b12_48;
boolean b12_49;
boolean b12_50;
boolean b12_51;
boolean b12_52;
boolean b12_53;
boolean b12_54;
boolean b12_55;
boolean b12_56;
boolean b12_57;
boolean b12_58;
boolean b12_59;
boolean b12_60;
boolean b12_61;
boolean b12_62;
boolean b12_63;
boolean b12_64;
boolean b12_65;
boolean b12_66;
boolean b12_67;
boolean b12_68;
boolean b12_69;
boolean b12_70;
boolean b12_71;
boolean b13_1;
boolean b13_2;
boolean b13_3;
boolean b13_4;
boolean b13_5;
boolean b13_6;
boolean b13_7;
boolean b13_8;
boolean b13_9;
boolean b13_10;
boolean b13_11;
boolean b13_12;
boolean b13_13;
boolean b13_14;
boolean b13_15;
boolean b13_16;
boolean b13_17;
boolean b13_18;
boolean b13_19;
boolean b13_20;
boolean b13_21;
boolean b13_22;
boolean b13_23;
boolean b13_24;
boolean b13_25;
boolean b13_26;
boolean b13_27;
boolean b13_28;
boolean b13_29;
boolean b13_30;
boolean b13_31;
boolean b13_32;
boolean b13_33;
boolean b13_34;
boolean b13_35;
boolean b13_36;
boolean b13_37;
boolean b13_38;
boolean b13_39;
boolean b13_40;
boolean b13_41;
boolean b13_42;
boolean b13_43;
boolean b13_44;
boolean b13_45;
boolean b13_46;
boolean b13_47;
boolean b13_48;
boolean b13_49;
boolean b13_50;
boolean b13_51;
boolean b13_52;
boolean b13_53;
boolean b13_54;
boolean b13_55;
boolean b13_56;
boolean b13_57;
boolean b13_58;
boolean b13_59;
boolean b13_60;
boolean b13_61;
boolean b13_62;
boolean b13_63;
boolean b13_64;
boolean b13_65;
boolean b13_66;
boolean b13_67;
boolean b13_68;
boolean b13_69;
boolean b13_70;
boolean b13_71;
boolean b13_72;
boolean b13_73;
boolean b13_74;
boolean b14_1;
boolean b14_2;
boolean b14_3;
boolean b14_4;
boolean b14_5;
boolean b14_6;
boolean b14_7;
boolean b14_8;
boolean b14_9;
boolean b14_10;
boolean b14_11;
boolean b14_12;
boolean b14_13;
boolean b14_14;
boolean b14_15;
boolean b14_16;
boolean b14_17;
boolean b14_18;
boolean b14_19;
boolean b14_20;
boolean b14_21;
boolean b14_22;
boolean b14_23;
boolean b14_24;
boolean b14_25;
boolean b14_26;
boolean b14_27;
boolean b14_28;
boolean b14_29;
boolean b14_30;
boolean b14_31;
boolean b14_32;
boolean b14_33;
boolean b14_34;
boolean b14_35;
boolean b14_36;
boolean b14_37;
boolean b14_38;
boolean b14_39;
boolean b14_40;
boolean b14_41;
boolean b14_42;
boolean b14_43;
boolean b14_44;
boolean b14_45;
boolean b14_46;
boolean b14_47;
boolean b14_48;
boolean b14_49;
boolean b14_50;
boolean b14_51;
boolean b14_52;
boolean b14_53;
boolean b14_54;
boolean b14_55;
boolean b14_56;
boolean b14_57;
boolean b14_58;
boolean b14_59;
boolean b14_60;
boolean b14_61;
boolean b14_62;
boolean b14_63;
boolean b14_64;
boolean b14_65;
boolean b14_66;
boolean b15_1;
boolean b15_2;
boolean b15_3;
boolean b15_4;
boolean b15_5;
boolean b15_6;
boolean b15_7;
boolean b15_8;
boolean b15_9;
boolean b15_10;
boolean b15_11;
boolean b15_12;
boolean b15_13;
boolean b15_14;
boolean b15_15;
boolean b15_16;
boolean b15_17;
boolean b15_18;
boolean b15_19;
boolean b15_20;
boolean b15_21;
boolean b15_22;
boolean b15_23;
boolean b15_24;
boolean b15_25;
boolean b15_26;
boolean b15_27;
boolean b15_28;
boolean b15_29;
boolean b15_30;
boolean b15_31;
boolean b15_32;
boolean b15_33;
boolean b15_34;
boolean b15_35;
boolean b15_36;
boolean b15_37;
boolean b15_38;
boolean b15_39;
boolean b15_40;
boolean b15_41;
boolean b15_42;
boolean b15_43;
boolean b15_44;
boolean b15_45;
boolean b15_46;
boolean b15_47;
boolean b15_48;
boolean b15_49;
boolean b15_50;
boolean b15_51;
boolean b15_52;
boolean b15_53;
boolean b15_54;
boolean b15_55;
boolean b15_56;
boolean b15_57;
boolean b15_58;
boolean b15_59;
boolean b15_60;
boolean b15_61;
boolean b15_62;
boolean b15_63;
boolean b15_64;
boolean b15_65;
boolean b15_66;
boolean b15_67;
boolean b15_68;
boolean b15_69;
boolean b15_70;
boolean b15_71;
boolean b15_72;
boolean b15_73;
boolean b15_74;
boolean b15_75;
boolean b16_1;
boolean b16_2;
boolean b16_3;
boolean b16_4;
boolean b16_5;
boolean b16_6;
boolean b16_7;
boolean b16_8;
boolean b16_9;
boolean b16_10;
boolean b16_11;
boolean b16_12;
boolean b16_13;
boolean b16_14;
boolean b16_15;
boolean b16_16;
boolean b16_17;
boolean b16_18;
boolean b16_19;
boolean b16_20;
boolean b16_21;
boolean b16_22;
boolean b16_23;
boolean b16_24;
boolean b16_25;
boolean b16_26;
boolean b16_27;
boolean b16_28;
boolean b16_29;
boolean b16_30;
boolean b16_31;
boolean b16_32;
boolean b16_33;
boolean b16_34;
boolean b16_35;
boolean b16_36;
boolean b16_37;
boolean b16_38;
boolean b16_39;
boolean b16_40;
boolean b16_41;
boolean b16_42;
boolean b16_43;
boolean b16_44;
boolean b16_45;
boolean b16_46;
boolean b16_47;
boolean b16_48;
boolean b16_49;
boolean b16_50;
boolean b16_51;
boolean b16_52;
boolean b16_53;
boolean b16_54;
boolean b16_55;
boolean b16_56;
boolean b16_57;
boolean b16_58;
boolean b16_59;
boolean b16_60;
boolean b16_61;
boolean b16_62;
boolean b16_63;
boolean b16_64;
boolean b16_65;
boolean b16_66;
boolean b16_67;
boolean b16_68;
boolean b16_69;
boolean b16_70;
boolean b17_1;
boolean b17_2;
boolean b17_3;
boolean b17_4;
boolean b17_5;
boolean b17_6;
boolean b17_7;
boolean b17_8;
boolean b17_9;
boolean b17_10;
boolean b17_11;
boolean b17_12;
boolean b17_13;
boolean b17_14;
boolean b17_15;
boolean b17_16;
boolean b17_17;
boolean b17_18;
boolean b17_19;
boolean b17_20;
boolean b17_21;
boolean b17_22;
boolean b17_23;
boolean b17_24;
boolean b17_25;
boolean b17_26;
boolean b17_27;
boolean b17_28;
boolean b17_29;
boolean b17_30;
boolean b17_31;
boolean b17_32;
boolean b17_33;
boolean b17_34;
boolean b17_35;
boolean b17_36;
boolean b17_37;
boolean b17_38;
boolean b17_39;
boolean b17_40;
boolean b17_41;
boolean b17_42;
boolean b17_43;
boolean b17_44;
boolean b17_45;
boolean b17_46;
boolean b17_47;
boolean b17_48;
boolean b17_49;
boolean b17_50;
boolean b17_51;
boolean b17_52;
boolean b17_53;
boolean b17_54;
boolean b17_55;
boolean b17_56;
boolean b17_57;
boolean b17_58;
boolean b17_59;
boolean b17_60;
boolean b17_61;
boolean b17_62;
boolean b17_63;
boolean b17_64;
boolean b17_65;
boolean b17_66;
boolean b17_67;
boolean b17_68;
boolean b17_69;
boolean b17_70;
boolean b18_1;
boolean b18_2;
boolean b18_3;
boolean b18_4;
boolean b18_5;
boolean b18_6;
boolean b18_7;
boolean b18_8;
boolean b18_9;
boolean b18_10;
boolean b18_11;
boolean b18_12;
boolean b18_13;
boolean b18_14;
boolean b18_15;
boolean b18_16;
boolean b18_17;
boolean b18_18;
boolean b18_19;
boolean b18_20;
boolean b18_21;
boolean b18_22;
boolean b18_23;
boolean b18_24;
boolean b18_25;
boolean b18_26;
boolean b18_27;
boolean b18_28;
boolean b18_29;
boolean b18_30;
boolean b18_31;
boolean b18_32;
boolean b18_33;
boolean b18_34;
boolean b18_35;
boolean b18_36;
boolean b18_37;
boolean b18_38;
boolean b18_39;
boolean b18_40;
boolean b18_41;
boolean b18_42;
boolean b18_43;
boolean b18_44;
boolean b18_45;
boolean b18_46;
boolean b18_47;
boolean b18_48;
boolean b18_49;
boolean b18_50;
boolean b18_51;
boolean b18_52;
boolean b18_53;
boolean b18_54;
boolean b18_55;
boolean b18_56;
boolean b18_57;
boolean b18_58;
boolean b18_59;
boolean b18_60;
boolean b18_61;
boolean b18_62;
boolean b18_63;
boolean b18_64;
boolean b18_65;
boolean b18_66;
boolean b18_67;
boolean b18_68;
boolean b18_69;
boolean b19_1;
boolean b19_2;
boolean b19_3;
boolean b19_4;
boolean b19_5;
boolean b19_6;
boolean b19_7;
boolean b19_8;
boolean b19_9;
boolean b19_10;
boolean b19_11;
boolean b19_12;
boolean b19_13;
boolean b19_14;
boolean b19_15;
boolean b19_16;
boolean b19_17;
boolean b19_18;
boolean b19_19;
boolean b19_20;
boolean b19_21;
boolean b19_22;
boolean b19_23;
boolean b19_24;
boolean b19_25;
boolean b19_26;
boolean b19_27;
boolean b19_28;
boolean b19_29;
boolean b19_30;
boolean b19_31;
boolean b19_32;
boolean b19_33;
boolean b19_34;
boolean b19_35;
boolean b19_36;
boolean b19_37;
boolean b19_38;
boolean b19_39;
boolean b19_40;
boolean b19_41;
boolean b19_42;
boolean b19_43;
boolean b19_44;
boolean b19_45;
boolean b19_46;
boolean b19_47;
boolean b19_48;
boolean b19_49;
boolean b19_50;
boolean b19_51;
boolean b19_52;
boolean b19_53;
boolean b19_54;
boolean b19_55;
boolean b19_56;
boolean b19_57;
boolean b19_58;
boolean b19_59;
boolean b19_60;
boolean b19_61;
boolean b19_62;
boolean b19_63;
boolean b20_1;
boolean b20_2;
boolean b20_3;
boolean b20_4;
boolean b20_5;
boolean b20_6;
boolean b20_7;
boolean b20_8;
boolean b20_9;
boolean b20_10;
boolean b20_11;
boolean b20_12;
boolean b20_13;
boolean b20_14;
boolean b20_15;
boolean b20_16;
boolean b20_17;
boolean b20_18;
boolean b20_19;
boolean b20_20;
boolean b20_21;
boolean b20_22;
boolean b20_23;
boolean b20_24;
boolean b20_25;
boolean b20_26;
boolean b20_27;
boolean b20_28;
boolean b20_29;
boolean b20_30;
boolean b20_31;
boolean b20_32;
boolean b20_33;
boolean b20_34;
boolean b20_35;
boolean b20_36;
boolean b20_37;
boolean b20_38;
boolean b20_39;
boolean b20_40;
boolean b20_41;
boolean b20_42;
boolean b20_43;
boolean b20_44;
boolean b20_45;
boolean b20_46;
boolean b20_47;
boolean b20_48;
boolean b20_49;
boolean b20_50;
boolean b20_51;
boolean b20_52;
boolean b20_53;
boolean b20_54;
boolean b20_55;
boolean b20_56;
boolean b20_57;
boolean b20_58;
boolean b20_59;
boolean b20_60;
boolean b20_61;
boolean b20_62;
boolean b20_63;
boolean b20_64;
boolean b20_65;
boolean b20_66;
boolean b20_67;
boolean b21_1;
boolean b21_2;
boolean b21_3;
boolean b21_4;
boolean b21_5;
boolean b21_6;
boolean b21_7;
boolean b21_8;
boolean b21_9;
boolean b21_10;
boolean b21_11;
boolean b21_12;
boolean b21_13;
boolean b21_14;
boolean b21_15;
boolean b21_16;
boolean b21_17;
boolean b21_18;
boolean b21_19;
boolean b21_20;
boolean b21_21;
boolean b21_22;
boolean b21_23;
boolean b21_24;
boolean b21_25;
boolean b21_26;
boolean b21_27;
boolean b21_28;
boolean b21_29;
boolean b21_30;
boolean b21_31;
boolean b21_32;
boolean b21_33;
boolean b21_34;
boolean b21_35;
boolean b21_36;
boolean b21_37;
boolean b21_38;
boolean b21_39;
boolean b21_40;
boolean b21_41;
boolean b21_42;
boolean b21_43;
boolean b21_44;
boolean b21_45;
boolean b21_46;
boolean b21_47;
boolean b21_48;
boolean b21_49;
boolean b21_50;
boolean b21_51;
boolean b21_52;
boolean b21_53;
boolean b21_54;
boolean b21_55;
boolean b21_56;
boolean b21_57;
boolean b21_58;
boolean b21_59;
boolean b21_60;
boolean b21_61;
boolean b21_62;
boolean b21_63;
boolean b22_1;
boolean b22_2;
boolean b22_3;
boolean b22_4;
boolean b22_5;
boolean b22_6;
boolean b22_7;
boolean b22_8;
boolean b22_9;
boolean b22_10;
boolean b22_11;
boolean b22_12;
boolean b22_13;
boolean b22_14;
boolean b22_15;
boolean b22_16;
boolean b22_17;
boolean b22_18;
boolean b22_19;
boolean b22_20;
boolean b22_21;
boolean b22_22;
boolean b22_23;
boolean b22_24;
boolean b22_25;
boolean b22_26;
boolean b22_27;
boolean b22_28;
boolean b22_29;
boolean b22_30;
boolean b22_31;
boolean b22_32;
boolean b22_33;
boolean b22_34;
boolean b22_35;
boolean b22_36;
boolean b22_37;
boolean b22_38;
boolean b22_39;
boolean b22_40;
boolean b22_41;
boolean b22_42;
boolean b22_43;
boolean b22_44;
boolean b22_45;
boolean b22_46;
boolean b22_47;
boolean b22_48;
boolean b22_49;
boolean b22_50;
boolean b22_51;
boolean b22_52;
boolean b22_53;
boolean b22_54;
boolean b22_55;
boolean b22_56;
boolean b22_57;
boolean b22_58;
boolean b22_59;
boolean b22_60;
boolean b22_61;
boolean b22_62;
boolean b22_63;
boolean b22_64;
boolean b23_1;
boolean b23_2;
boolean b23_3;
boolean b23_4;
boolean b23_5;
boolean b23_6;
boolean b23_7;
boolean b23_8;
boolean b23_9;
boolean b23_10;
boolean b23_11;
boolean b23_12;
boolean b23_13;
boolean b23_14;
boolean b23_15;
boolean b23_16;
boolean b23_17;
boolean b23_18;
boolean b23_19;
boolean b23_20;
boolean b23_21;
boolean b23_22;
boolean b23_23;
boolean b23_24;
boolean b23_25;
boolean b23_26;
boolean b23_27;
boolean b23_28;
boolean b23_29;
boolean b23_30;
boolean b23_31;
boolean b23_32;
boolean b23_33;
boolean b23_34;
boolean b23_35;
boolean b23_36;
boolean b23_37;
boolean b23_38;
boolean b23_39;
boolean b23_40;
boolean b23_41;
boolean b23_42;
boolean b23_43;
boolean b23_44;
boolean b23_45;
boolean b23_46;
boolean b23_47;
boolean b23_48;
boolean b23_49;
boolean b23_50;
boolean b23_51;
boolean b23_52;
boolean b23_53;
boolean b23_54;
boolean b23_55;
boolean b23_56;
boolean b23_57;
boolean b23_58;
boolean b23_59;
boolean b23_60;
boolean b23_61;
boolean b23_62;
boolean b23_63;
boolean b24_1;
boolean b24_2;
boolean b24_3;
boolean b24_4;
boolean b24_5;
boolean b24_6;
boolean b24_7;
boolean b24_8;
boolean b24_9;
boolean b24_10;
boolean b24_11;
boolean b24_12;
boolean b24_13;
boolean b24_14;
boolean b24_15;
boolean b24_16;
boolean b24_17;
boolean b24_18;
boolean b24_19;
boolean b24_20;
boolean b24_21;
boolean b24_22;
boolean b24_23;
boolean b24_24;
boolean b24_25;
boolean b24_26;
boolean b24_27;
boolean b24_28;
boolean b24_29;
boolean b24_30;
boolean b24_31;
boolean b24_32;
boolean b24_33;
boolean b24_34;
boolean b24_35;
boolean b24_36;
boolean b24_37;
boolean b24_38;
boolean b24_39;
boolean b24_40;
boolean b24_41;
boolean b24_42;
boolean b24_43;
boolean b24_44;
boolean b24_45;
boolean b24_46;
boolean b24_47;
boolean b24_48;
boolean b24_49;
boolean b24_50;
boolean b24_51;
boolean b24_52;
boolean b24_53;
boolean b24_54;
boolean b24_55;
boolean b24_56;
boolean b24_57;
boolean b24_58;
boolean b24_59;
boolean b24_60;
boolean b25_1;
boolean b25_2;
boolean b25_3;
boolean b25_4;
boolean b25_5;
boolean b25_6;
boolean b25_7;
boolean b25_8;
boolean b25_9;
boolean b25_10;
boolean b25_11;
boolean b25_12;
boolean b25_13;
boolean b25_14;
boolean b25_15;
boolean b25_16;
boolean b25_17;
boolean b25_18;
boolean b25_19;
boolean b25_20;
boolean b25_21;
boolean b25_22;
boolean b25_23;
boolean b25_24;
boolean b25_25;
boolean b25_26;
boolean b25_27;
boolean b25_28;
boolean b25_29;
boolean b25_30;
boolean b25_31;
boolean b25_32;
boolean b25_33;
boolean b25_34;
boolean b25_35;
boolean b25_36;
boolean b25_37;
boolean b25_38;
boolean b25_39;
boolean b25_40;
boolean b25_41;
boolean b25_42;
boolean b25_43;
boolean b25_44;
boolean b25_45;
boolean b25_46;
boolean b25_47;
boolean b25_48;
boolean b25_49;
boolean b25_50;
boolean b25_51;
boolean b25_52;
boolean b25_53;
boolean b25_54;
boolean b25_55;
boolean b25_56;
boolean b25_57;
boolean b25_58;
boolean b25_59;
boolean b25_60;
boolean b25_61;
boolean b25_62;
boolean b25_63;
boolean b25_64;
boolean b26_1;
boolean b26_2;
boolean b26_3;
boolean b26_4;
boolean b26_5;
boolean b26_6;
boolean b26_7;
boolean b26_8;
boolean b26_9;
boolean b26_10;
boolean b26_11;
boolean b26_12;
boolean b26_13;
boolean b26_14;
boolean b26_15;
boolean b26_16;
boolean b26_17;
boolean b26_18;
boolean b26_19;
boolean b26_20;
boolean b26_21;
boolean b26_22;
boolean b26_23;
boolean b26_24;
boolean b26_25;
boolean b26_26;
boolean b26_27;
boolean b26_28;
boolean b26_29;
boolean b26_30;
boolean b26_31;
boolean b26_32;
boolean b26_33;
boolean b26_34;
boolean b26_35;
boolean b26_36;
boolean b26_37;
boolean b26_38;
boolean b26_39;
boolean b26_40;
boolean b26_41;
boolean b26_42;
boolean b26_43;
boolean b26_44;
boolean b26_45;
boolean b26_46;
boolean b26_47;
boolean b26_48;
boolean b26_49;
boolean b26_50;
boolean b26_51;
boolean b26_52;
boolean b26_53;
boolean b26_54;
boolean b26_55;
boolean b26_56;
boolean b26_57;
boolean b26_58;
boolean b26_59;
boolean b26_60;
boolean b26_61;
boolean b26_62;
boolean b26_63;
boolean b27_1;
boolean b27_2;
boolean b27_3;
boolean b27_4;
boolean b27_5;
boolean b27_6;
boolean b27_7;
boolean b27_8;
boolean b27_9;
boolean b27_10;
boolean b27_11;
boolean b27_12;
boolean b27_13;
boolean b27_14;
boolean b27_15;
boolean b27_16;
boolean b27_17;
boolean b27_18;
boolean b27_19;
boolean b27_20;
boolean b27_21;
boolean b27_22;
boolean b27_23;
boolean b27_24;
boolean b27_25;
boolean b27_26;
boolean b27_27;
boolean b27_28;
boolean b27_29;
boolean b27_30;
boolean b27_31;
boolean b27_32;
boolean b27_33;
boolean b27_34;
boolean b27_35;
boolean b27_36;
boolean b27_37;
boolean b27_38;
boolean b27_39;
boolean b27_40;
boolean b27_41;
boolean b27_42;
boolean b27_43;
boolean b27_44;
boolean b27_45;
boolean b27_46;
boolean b27_47;
boolean b27_48;
boolean b27_49;
boolean b27_50;
boolean b27_51;
boolean b27_52;
boolean b27_53;
boolean b27_54;
boolean b27_55;
boolean b27_56;
boolean b27_57;
boolean b27_58;
boolean b27_59;
boolean b27_60;
boolean b28_1;
boolean b28_2;
boolean b28_3;
boolean b28_4;
boolean b28_5;
boolean b28_6;
boolean b28_7;
boolean b28_8;
boolean b28_9;
boolean b28_10;
boolean b28_11;
boolean b28_12;
boolean b28_13;
boolean b28_14;
boolean b28_15;
boolean b28_16;
boolean b28_17;
boolean b28_18;
boolean b28_19;
boolean b28_20;
boolean b28_21;
boolean b28_22;
boolean b28_23;
boolean b28_24;
boolean b28_25;
boolean b28_26;
boolean b28_27;
boolean b28_28;
boolean b28_29;
boolean b28_30;
boolean b28_31;
boolean b28_32;
boolean b28_33;
boolean b28_34;
boolean b28_35;
boolean b28_36;
boolean b28_37;
boolean b28_38;
boolean b28_39;
boolean b28_40;
boolean b28_41;
boolean b28_42;
boolean b28_43;
boolean b28_44;
boolean b28_45;
boolean b28_46;
boolean b28_47;
boolean b28_48;
boolean b28_49;
boolean b28_50;
boolean b28_51;
boolean b28_52;
boolean b28_53;
boolean b28_54;
boolean b28_55;
boolean b28_56;
boolean b28_57;
boolean b28_58;
boolean b28_59;
boolean b28_60;
boolean b28_61;
boolean b28_62;
boolean b28_63;
boolean b28_64;
boolean b28_65;
boolean b28_66;
boolean b29_1;
boolean b29_2;
boolean b29_3;
boolean b29_4;
boolean b29_5;
boolean b29_6;
boolean b29_7;
boolean b29_8;
boolean b29_9;
boolean b29_10;
boolean b29_11;
boolean b29_12;
boolean b29_13;
boolean b29_14;
boolean b29_15;
boolean b29_16;
boolean b29_17;
boolean b29_18;
boolean b29_19;
boolean b29_20;
boolean b29_21;
boolean b29_22;
boolean b29_23;
boolean b29_24;
boolean b29_25;
boolean b29_26;
boolean b29_27;
boolean b29_28;
boolean b29_29;
boolean b29_30;
boolean b29_31;
boolean b29_32;
boolean b29_33;
boolean b29_34;
boolean b29_35;
boolean b29_36;
boolean b29_37;
boolean b29_38;
boolean b29_39;
boolean b29_40;
boolean b29_41;
boolean b29_42;
boolean b29_43;
boolean b29_44;
boolean b29_45;
boolean b29_46;
boolean b29_47;
boolean b29_48;
boolean b29_49;
boolean b29_50;
boolean b29_51;
boolean b29_52;
boolean b29_53;
boolean b29_54;
boolean b29_55;
boolean b29_56;
boolean b29_57;
boolean b29_58;
boolean b29_59;
boolean b29_60;
boolean b29_61;
boolean b29_62;
boolean b30_1;
boolean b30_2;
boolean b30_3;
boolean b30_4;
boolean b30_5;
boolean b30_6;
boolean b30_7;
boolean b30_8;
boolean b30_9;
boolean b30_10;
boolean b30_11;
boolean b30_12;
boolean b30_13;
boolean b30_14;
boolean b30_15;
boolean b30_16;
boolean b30_17;
boolean b30_18;
boolean b30_19;
boolean b30_20;
boolean b30_21;
boolean b30_22;
boolean b30_23;
boolean b30_24;
boolean b30_25;
boolean b30_26;
boolean b30_27;
boolean b30_28;
boolean b30_29;
boolean b30_30;
boolean b30_31;
boolean b30_32;
boolean b30_33;
boolean b30_34;
boolean b30_35;
boolean b30_36;
boolean b30_37;
boolean b30_38;
boolean b30_39;
boolean b30_40;
boolean b30_41;
boolean b30_42;
boolean b30_43;
boolean b30_44;
boolean b30_45;
boolean b30_46;
boolean b30_47;
boolean b30_48;
boolean b30_49;
boolean b30_50;
boolean b30_51;
boolean b30_52;
boolean b30_53;
boolean b30_54;
boolean b30_55;
boolean b30_56;
boolean b30_57;
boolean b31_1;
boolean b31_2;
boolean b31_3;
boolean b31_4;
boolean b31_5;
boolean b31_6;
boolean b31_7;
boolean b31_8;
boolean b31_9;
boolean b31_10;
boolean b31_11;
boolean b31_12;
boolean b31_13;
boolean b31_14;
boolean b31_15;
boolean b31_16;
boolean b31_17;
boolean b31_18;
boolean b31_19;
boolean b31_20;
boolean b31_21;
boolean b31_22;
boolean b31_23;
boolean b31_24;
boolean b31_25;
boolean b31_26;
boolean b31_27;
boolean b31_28;
boolean b31_29;
boolean b31_30;
boolean b31_31;
boolean b31_32;
boolean b31_33;
boolean b31_34;
boolean b31_35;
boolean b31_36;
boolean b31_37;
boolean b31_38;
boolean b31_39;
boolean b31_40;
boolean b31_41;
boolean b31_42;
boolean b31_43;
boolean b31_44;
boolean b31_45;
boolean b31_46;
boolean b31_47;
boolean b31_48;
boolean b31_49;
boolean b31_50;
boolean b31_51;
boolean b31_52;
boolean b31_53;
boolean b31_54;
boolean b31_55;
boolean b31_56;
boolean b31_57;
boolean b31_58;
boolean b32_1;
boolean b32_2;
boolean b32_3;
boolean b32_4;
boolean b32_5;
boolean b32_6;
boolean b32_7;
boolean b32_8;
boolean b32_9;
boolean b32_10;
boolean b32_11;
boolean b32_12;
boolean b32_13;
boolean b32_14;
boolean b32_15;
boolean b32_16;
boolean b32_17;
boolean b32_18;
boolean b32_19;
boolean b32_20;
boolean b32_21;
boolean b32_22;
boolean b32_23;
boolean b32_24;
boolean b32_25;
boolean b32_26;
boolean b32_27;
boolean b32_28;
boolean b32_29;
boolean b32_30;
boolean b32_31;
boolean b32_32;
boolean b32_33;
boolean b32_34;
boolean b32_35;
boolean b32_36;
boolean b32_37;
boolean b32_38;
boolean b32_39;
boolean b32_40;
boolean b32_41;
boolean b32_42;
boolean b32_43;
boolean b32_44;
boolean b32_45;
boolean b32_46;
boolean b32_47;
boolean b32_48;
boolean b32_49;
boolean b32_50;
boolean b32_51;
boolean b32_52;
boolean b32_53;
boolean b32_54;
boolean b32_55;
boolean b32_56;
boolean b32_57;
boolean b32_58;
boolean b32_59;
boolean b33_1;
boolean b33_2;
boolean b33_3;
boolean b33_4;
boolean b33_5;
boolean b33_6;
boolean b33_7;
boolean b33_8;
boolean b33_9;
boolean b33_10;
boolean b33_11;
boolean b33_12;
boolean b33_13;
boolean b33_14;
boolean b33_15;
boolean b33_16;
boolean b33_17;
boolean b33_18;
boolean b33_19;
boolean b33_20;
boolean b33_21;
boolean b33_22;
boolean b33_23;
boolean b33_24;
boolean b33_25;
boolean b33_26;
boolean b33_27;
boolean b33_28;
boolean b33_29;
boolean b33_30;
boolean b33_31;
boolean b33_32;
boolean b33_33;
boolean b33_34;
boolean b33_35;
boolean b33_36;
boolean b33_37;
boolean b33_38;
boolean b33_39;
boolean b33_40;
boolean b33_41;
boolean b33_42;
boolean b33_43;
boolean b33_44;
boolean b33_45;
boolean b33_46;
boolean b33_47;
boolean b33_48;
boolean b33_49;
boolean b33_50;
boolean b33_51;
boolean b33_52;
boolean b33_53;
boolean b33_54;
boolean b33_55;
boolean b33_56;
boolean b34_1;
boolean b34_2;
boolean b34_3;
boolean b34_4;
boolean b34_5;
boolean b34_6;
boolean b34_7;
boolean b34_8;
boolean b34_9;
boolean b34_10;
boolean b34_11;
boolean b34_12;
boolean b34_13;
boolean b34_14;
boolean b34_15;
boolean b34_16;
boolean b34_17;
boolean b34_18;
boolean b34_19;
boolean b34_20;
boolean b34_21;
boolean b34_22;
boolean b34_23;
boolean b34_24;
boolean b34_25;
boolean b34_26;
boolean b34_27;
boolean b34_28;
boolean b34_29;
boolean b34_30;
boolean b34_31;
boolean b34_32;
boolean b34_33;
boolean b34_34;
boolean b34_35;
boolean b34_36;
boolean b34_37;
boolean b34_38;
boolean b34_39;
boolean b34_40;
boolean b34_41;
boolean b34_42;
boolean b34_43;
boolean b34_44;
boolean b34_45;
boolean b34_46;
boolean b34_47;
boolean b34_48;
boolean b34_49;
boolean b34_50;
boolean b34_51;
boolean b34_52;
boolean b34_53;
boolean b35_1;
boolean b35_2;
boolean b35_3;
boolean b35_4;
boolean b35_5;
boolean b35_6;
boolean b35_7;
boolean b35_8;
boolean b35_9;
boolean b35_10;
boolean b35_11;
boolean b35_12;
boolean b35_13;
boolean b35_14;
boolean b35_15;
boolean b35_16;
boolean b35_17;
boolean b35_18;
boolean b35_19;
boolean b35_20;
boolean b35_21;
boolean b35_22;
boolean b35_23;
boolean b35_24;
boolean b35_25;
boolean b35_26;
boolean b35_27;
boolean b35_28;
boolean b35_29;
boolean b35_30;
boolean b35_31;
boolean b35_32;
boolean b35_33;
boolean b35_34;
boolean b35_35;
boolean b35_36;
boolean b35_37;
boolean b35_38;
boolean b35_39;
boolean b35_40;
boolean b35_41;
boolean b35_42;
boolean b35_43;
boolean b35_44;
boolean b35_45;
boolean b35_46;
boolean b35_47;
boolean b35_48;
boolean b35_49;
boolean b36_1;
boolean b36_2;
boolean b36_3;
boolean b36_4;
boolean b36_5;
boolean b36_6;
boolean b36_7;
boolean b36_8;
boolean b36_9;
boolean b36_10;
boolean b36_11;
boolean b36_12;
boolean b36_13;
boolean b36_14;
boolean b36_15;
boolean b36_16;
boolean b36_17;
boolean b36_18;
boolean b36_19;
boolean b36_20;
boolean b36_21;
boolean b36_22;
boolean b36_23;
boolean b36_24;
boolean b36_25;
boolean b36_26;
boolean b36_27;
boolean b36_28;
boolean b36_29;
boolean b36_30;
boolean b36_31;
boolean b36_32;
boolean b36_33;
boolean b36_34;
boolean b36_35;
boolean b36_36;
boolean b36_37;
boolean b36_38;
boolean b36_39;
boolean b36_40;
boolean b36_41;
boolean b36_42;
boolean b36_43;
boolean b36_44;
boolean b36_45;
boolean b36_46;
boolean b36_47;
boolean b36_48;
boolean b36_49;
boolean b37_1;
boolean b37_2;
boolean b37_3;
boolean b37_4;
boolean b37_5;
boolean b37_6;
boolean b37_7;
boolean b37_8;
boolean b37_9;
boolean b37_10;
boolean b37_11;
boolean b37_12;
boolean b37_13;
boolean b37_14;
boolean b37_15;
boolean b37_16;
boolean b37_17;
boolean b37_18;
boolean b37_19;
boolean b37_20;
boolean b37_21;
boolean b37_22;
boolean b37_23;
boolean b37_24;
boolean b37_25;
boolean b37_26;
boolean b37_27;
boolean b37_28;
boolean b37_29;
boolean b37_30;
boolean b37_31;
boolean b37_32;
boolean b37_33;
boolean b37_34;
boolean b37_35;
boolean b37_36;
boolean b37_37;
boolean b37_38;
boolean b37_39;
boolean b37_40;
boolean b37_41;
boolean b37_42;
boolean b37_43;
boolean b37_44;
boolean b37_45;
boolean b37_46;
boolean b37_47;
boolean b37_48;
boolean b37_49;
boolean b37_50;
boolean b37_51;
boolean b38_1;
boolean b38_2;
boolean b38_3;
boolean b38_4;
boolean b38_5;
boolean b38_6;
boolean b38_7;
boolean b38_8;
boolean b38_9;
boolean b38_10;
boolean b38_11;
boolean b38_12;
boolean b38_13;
boolean b38_14;
boolean b38_15;
boolean b38_16;
boolean b38_17;
boolean b38_18;
boolean b38_19;
boolean b38_20;
boolean b38_21;
boolean b38_22;
boolean b38_23;
boolean b38_24;
boolean b38_25;
boolean b38_26;
boolean b38_27;
boolean b38_28;
boolean b38_29;
boolean b38_30;
boolean b38_31;
boolean b38_32;
boolean b38_33;
boolean b38_34;
boolean b38_35;
boolean b38_36;
boolean b38_37;
boolean b38_38;
boolean b38_39;
boolean b38_40;
boolean b38_41;
boolean b38_42;
boolean b38_43;
boolean b38_44;
boolean b38_45;
boolean b38_46;
boolean b38_47;
boolean b38_48;
boolean b38_49;
boolean b38_50;
boolean b39_1;
boolean b39_2;
boolean b39_3;
boolean b39_4;
boolean b39_5;
boolean b39_6;
boolean b39_7;
boolean b39_8;
boolean b39_9;
boolean b39_10;
boolean b39_11;
boolean b39_12;
boolean b39_13;
boolean b39_14;
boolean b39_15;
boolean b39_16;
boolean b39_17;
boolean b39_18;
boolean b39_19;
boolean b39_20;
boolean b39_21;
boolean b39_22;
boolean b39_23;
boolean b39_24;
boolean b39_25;
boolean b39_26;
boolean b39_27;
boolean b39_28;
boolean b39_29;
boolean b39_30;
boolean b39_31;
boolean b39_32;
boolean b39_33;
boolean b39_34;
boolean b39_35;
boolean b39_36;
boolean b39_37;
boolean b39_38;
boolean b39_39;
boolean b39_40;
boolean b39_41;
boolean b39_42;
boolean b39_43;
boolean b39_44;
boolean b39_45;
boolean b39_46;
boolean b39_47;
boolean b40_1;
boolean b40_2;
boolean b40_3;
boolean b40_4;
boolean b40_5;
boolean b40_6;
boolean b40_7;
boolean b40_8;
boolean b40_9;
boolean b40_10;
boolean b40_11;
boolean b40_12;
boolean b40_13;
boolean b40_14;
boolean b40_15;
boolean b40_16;
boolean b40_17;
boolean b40_18;
boolean b40_19;
boolean b40_20;
boolean b40_21;
boolean b40_22;
boolean b40_23;
boolean b40_24;
boolean b40_25;
boolean b40_26;
boolean b40_27;
boolean b40_28;
boolean b40_29;
boolean b40_30;
boolean b40_31;
boolean b40_32;
boolean b40_33;
boolean b40_34;
boolean b40_35;
boolean b40_36;
boolean b40_37;
boolean b40_38;
boolean b40_39;
boolean b40_40;
boolean b40_41;
boolean b40_42;
boolean b40_43;
boolean b40_44;
boolean b40_45;
boolean b40_46;
boolean b40_47;
boolean b40_48;
boolean b40_49;
boolean b40_50;
boolean b41_1;
boolean b41_2;
boolean b41_3;
boolean b41_4;
boolean b41_5;
boolean b41_6;
boolean b41_7;
boolean b41_8;
boolean b41_9;
boolean b41_10;
boolean b41_11;
boolean b41_12;
boolean b41_13;
boolean b41_14;
boolean b41_15;
boolean b41_16;
boolean b41_17;
boolean b41_18;
boolean b41_19;
boolean b41_20;
boolean b41_21;
boolean b41_22;
boolean b41_23;
boolean b41_24;
boolean b41_25;
boolean b41_26;
boolean b41_27;
boolean b41_28;
boolean b41_29;
boolean b41_30;
boolean b41_31;
boolean b41_32;
boolean b41_33;
boolean b41_34;
boolean b41_35;
boolean b41_36;
boolean b41_37;
boolean b41_38;
boolean b41_39;
boolean b41_40;
boolean b41_41;
boolean b41_42;
boolean b41_43;
boolean b41_44;
boolean b41_45;
boolean b41_46;
boolean b41_47;
boolean b41_48;
boolean b41_49;
boolean b42_1;
boolean b42_2;
boolean b42_3;
boolean b42_4;
boolean b42_5;
boolean b42_6;
boolean b42_7;
boolean b42_8;
boolean b42_9;
boolean b42_10;
boolean b42_11;
boolean b42_12;
boolean b42_13;
boolean b42_14;
boolean b42_15;
boolean b42_16;
boolean b42_17;
boolean b42_18;
boolean b42_19;
boolean b42_20;
boolean b42_21;
boolean b42_22;
boolean b42_23;
boolean b42_24;
boolean b42_25;
boolean b42_26;
boolean b42_27;
boolean b42_28;
boolean b42_29;
boolean b42_30;
boolean b42_31;
boolean b42_32;
boolean b42_33;
boolean b42_34;
boolean b42_35;
boolean b42_36;
boolean b42_37;
boolean b42_38;
boolean b42_39;
boolean b42_40;
boolean b42_41;
boolean b42_42;
boolean b43_1;
boolean b43_2;
boolean b43_3;
boolean b43_4;
boolean b43_5;
boolean b43_6;
boolean b43_7;
boolean b43_8;
boolean b43_9;
boolean b43_10;
boolean b43_11;
boolean b43_12;
boolean b43_13;
boolean b43_14;
boolean b43_15;
boolean b43_16;
boolean b43_17;
boolean b43_18;
boolean b43_19;
boolean b43_20;
boolean b43_21;
boolean b43_22;
boolean b43_23;
boolean b43_24;
boolean b43_25;
boolean b43_26;
boolean b43_27;
boolean b43_28;
boolean b43_29;
boolean b43_30;
boolean b43_31;
boolean b43_32;
boolean b43_33;
boolean b43_34;
boolean b43_35;
boolean b43_36;
boolean b43_37;
boolean b43_38;
boolean b43_39;
boolean b43_40;
boolean b43_41;
boolean b43_42;
boolean b43_43;
boolean b43_44;
boolean b43_45;
boolean b43_46;
boolean b43_47;
boolean b43_48;
boolean b43_49;
boolean b44_1;
boolean b44_2;
boolean b44_3;
boolean b44_4;
boolean b44_5;
boolean b44_6;
boolean b44_7;
boolean b44_8;
boolean b44_9;
boolean b44_10;
boolean b44_11;
boolean b44_12;
boolean b44_13;
boolean b44_14;
boolean b44_15;
boolean b44_16;
boolean b44_17;
boolean b44_18;
boolean b44_19;
boolean b44_20;
boolean b44_21;
boolean b44_22;
boolean b44_23;
boolean b44_24;
boolean b44_25;
boolean b44_26;
boolean b44_27;
boolean b44_28;
boolean b44_29;
boolean b44_30;
boolean b44_31;
boolean b44_32;
boolean b44_33;
boolean b44_34;
boolean b44_35;
boolean b44_36;
boolean b44_37;
boolean b44_38;
boolean b44_39;
boolean b44_40;
boolean b44_41;
boolean b44_42;
boolean b44_43;
boolean b44_44;
boolean b44_45;
boolean b45_1;
boolean b45_2;
boolean b45_3;
boolean b45_4;
boolean b45_5;
boolean b45_6;
boolean b45_7;
boolean b45_8;
boolean b45_9;
boolean b45_10;
boolean b45_11;
boolean b45_12;
boolean b45_13;
boolean b45_14;
boolean b45_15;
boolean b45_16;
boolean b45_17;
boolean b45_18;
boolean b45_19;
boolean b45_20;
boolean b45_21;
boolean b45_22;
boolean b45_23;
boolean b45_24;
boolean b45_25;
boolean b45_26;
boolean b45_27;
boolean b45_28;
boolean b45_29;
boolean b45_30;
boolean b45_31;
boolean b45_32;
boolean b45_33;
boolean b45_34;
boolean b45_35;
boolean b45_36;
boolean b45_37;
boolean b45_38;
boolean b45_39;
boolean b45_40;
boolean b45_41;
boolean b45_42;
boolean b46_1;
boolean b46_2;
boolean b46_3;
boolean b46_4;
boolean b46_5;
boolean b46_6;
boolean b46_7;
boolean b46_8;
boolean b46_9;
boolean b46_10;
boolean b46_11;
boolean b46_12;
boolean b46_13;
boolean b46_14;
boolean b46_15;
boolean b46_16;
boolean b46_17;
boolean b46_18;
boolean b46_19;
boolean b46_20;
boolean b46_21;
boolean b46_22;
boolean b46_23;
boolean b46_24;
boolean b46_25;
boolean b46_26;
boolean b46_27;
boolean b46_28;
boolean b46_29;
boolean b46_30;
boolean b46_31;
boolean b46_32;
boolean b46_33;
boolean b46_34;
boolean b46_35;
boolean b46_36;
boolean b46_37;
boolean b46_38;
boolean b46_39;
boolean b46_40;
boolean b46_41;
boolean b46_42;
boolean b46_43;
boolean b46_44;
boolean b47_1;
boolean b47_2;
boolean b47_3;
boolean b47_4;
boolean b47_5;
boolean b47_6;
boolean b47_7;
boolean b47_8;
boolean b47_9;
boolean b47_10;
boolean b47_11;
boolean b47_12;
boolean b47_13;
boolean b47_14;
boolean b47_15;
boolean b47_16;
boolean b47_17;
boolean b47_18;
boolean b47_19;
boolean b47_20;
boolean b47_21;
boolean b47_22;
boolean b47_23;
boolean b47_24;
boolean b47_25;
boolean b47_26;
boolean b47_27;
boolean b47_28;
boolean b47_29;
boolean b47_30;
boolean b47_31;
boolean b47_32;
boolean b47_33;
boolean b47_34;
boolean b47_35;
boolean b47_36;
boolean b47_37;
boolean b48_1;
boolean b48_2;
boolean b48_3;
boolean b48_4;
boolean b48_5;
boolean b48_6;
boolean b48_7;
boolean b48_8;
boolean b48_9;
boolean b48_10;
boolean b48_11;
boolean b48_12;
boolean b48_13;
boolean b48_14;
boolean b48_15;
boolean b48_16;
boolean b48_17;
boolean b48_18;
boolean b48_19;
boolean b48_20;
boolean b48_21;
boolean b48_22;
boolean b48_23;
boolean b48_24;
boolean b48_25;
boolean b48_26;
boolean b48_27;
boolean b48_28;
boolean b48_29;
boolean b48_30;
boolean b48_31;
boolean b48_32;
boolean b49_1;
boolean b49_2;
boolean b49_3;
boolean b49_4;
boolean b49_5;
boolean b49_6;
boolean b49_7;
boolean b49_8;
boolean b49_9;
boolean b49_10;
boolean b49_11;
boolean b49_12;
boolean b49_13;
boolean b49_14;
boolean b49_15;
boolean b49_16;
boolean b49_17;
boolean b49_18;
boolean b49_19;
boolean b49_20;
boolean b49_21;
boolean b49_22;
boolean b49_23;
boolean b49_24;
boolean b49_25;
boolean b49_26;
boolean b49_27;
boolean b49_28;
boolean b49_29;
boolean b49_30;
boolean b49_31;
boolean b49_32;
boolean b49_33;
boolean b49_34;
boolean b49_35;
boolean b49_36;
boolean b49_37;
boolean b49_38;
boolean b49_39;
boolean b49_40;
boolean b50_1;
boolean b50_2;
boolean b50_3;
boolean b50_4;
boolean b50_5;
boolean b50_6;
boolean b50_7;
boolean b50_8;
boolean b50_9;
boolean b50_10;
boolean b50_11;
boolean b50_12;
boolean b50_13;
boolean b50_14;
boolean b50_15;
boolean b50_16;
boolean b50_17;
boolean b50_18;
boolean b50_19;
boolean b50_20;
boolean b50_21;
boolean b50_22;
boolean b50_23;
boolean b50_24;
boolean b50_25;
boolean b50_26;
boolean b50_27;
boolean b50_28;
boolean b50_29;
boolean b50_30;
boolean b50_31;
boolean b50_32;
boolean b50_33;
boolean b50_34;
boolean b50_35;
boolean b50_36;
boolean b50_37;
boolean b50_38;
boolean b50_39;
boolean b50_40;
boolean b50_41;
boolean b50_42;
boolean b50_43;
boolean b50_44;
boolean b51_1;
boolean b51_2;
boolean b51_3;
boolean b51_4;
boolean b51_5;
boolean b51_6;
boolean b51_7;
boolean b51_8;
boolean b51_9;
boolean b51_10;
boolean b51_11;
boolean b51_12;
boolean b51_13;
boolean b51_14;
boolean b51_15;
boolean b51_16;
boolean b51_17;
boolean b51_18;
boolean b51_19;
boolean b51_20;
boolean b51_21;
boolean b51_22;
boolean b51_23;
boolean b51_24;
boolean b51_25;
boolean b51_26;
boolean b51_27;
boolean b51_28;
boolean b51_29;
boolean b51_30;
boolean b51_31;
boolean b52_1;
boolean b52_2;
boolean b52_3;
boolean b52_4;
boolean b52_5;
boolean b52_6;
boolean b52_7;
boolean b52_8;
boolean b52_9;
boolean b52_10;
boolean b52_11;
boolean b52_12;
boolean b52_13;
boolean b52_14;
boolean b52_15;
boolean b52_16;
boolean b52_17;
boolean b52_18;
boolean b52_19;
boolean b52_20;
boolean b52_21;
boolean b52_22;
boolean b52_23;
boolean b52_24;
boolean b52_25;
boolean b52_26;
boolean b52_27;
boolean b52_28;
boolean b52_29;
boolean b52_30;
boolean b52_31;
boolean b52_32;
boolean b52_33;
boolean b53_1;
boolean b53_2;
boolean b53_3;
boolean b53_4;
boolean b53_5;
boolean b53_6;
boolean b53_7;
boolean b53_8;
boolean b53_9;
boolean b53_10;
boolean b53_11;
boolean b53_12;
boolean b53_13;
boolean b53_14;
boolean b53_15;
boolean b53_16;
boolean b53_17;
boolean b53_18;
boolean b53_19;
boolean b53_20;
boolean b53_21;
boolean b53_22;
boolean b53_23;
boolean b53_24;
boolean b53_25;
boolean b53_26;
boolean b53_27;
boolean b53_28;
boolean b53_29;
boolean b53_30;
boolean b53_31;
boolean b53_32;
boolean b53_33;
boolean b53_34;
boolean b53_35;
boolean b53_36;
boolean b53_37;
boolean b53_38;
boolean b53_39;
boolean b54_1;
boolean b54_2;
boolean b54_3;
boolean b54_4;
boolean b54_5;
boolean b54_6;
boolean b54_7;
boolean b54_8;
boolean b54_9;
boolean b54_10;
boolean b54_11;
boolean b54_12;
boolean b54_13;
boolean b54_14;
boolean b54_15;
boolean b54_16;
boolean b54_17;
boolean b54_18;
boolean b54_19;
boolean b54_20;
boolean b54_21;
boolean b54_22;
boolean b54_23;
boolean b54_24;
boolean b54_25;
boolean b54_26;
boolean b54_27;
boolean b54_28;
boolean b54_29;
boolean b54_30;
boolean b54_31;
boolean b54_32;
boolean b54_33;
boolean b55_1;
boolean b55_2;
boolean b55_3;
boolean b55_4;
boolean b55_5;
boolean b55_6;
boolean b55_7;
boolean b55_8;
boolean b55_9;
boolean b55_10;
boolean b55_11;
boolean b55_12;
boolean b55_13;
boolean b55_14;
boolean b55_15;
boolean b55_16;
boolean b55_17;
boolean b55_18;
boolean b55_19;
boolean b55_20;
boolean b55_21;
boolean b55_22;
boolean b55_23;
boolean b55_24;
boolean b55_25;
boolean b55_26;
boolean b55_27;
boolean b55_28;
boolean b55_29;
boolean b55_30;
boolean b55_31;
boolean b55_32;
boolean b55_33;
boolean b55_34;
boolean b56_1;
boolean b56_2;
boolean b56_3;
boolean b56_4;
boolean b56_5;
boolean b56_6;
boolean b56_7;
boolean b56_8;
boolean b56_9;
boolean b56_10;
boolean b56_11;
boolean b56_12;
boolean b56_13;
boolean b56_14;
boolean b56_15;
boolean b56_16;
boolean b56_17;
boolean b56_18;
boolean b56_19;
boolean b56_20;
boolean b56_21;
boolean b56_22;
boolean b56_23;
boolean b56_24;
boolean b56_25;
boolean b56_26;
boolean b56_27;
boolean b56_28;
boolean b56_29;
boolean b56_30;
boolean b56_31;
boolean b56_32;
boolean b56_33;
boolean b56_34;
boolean b56_35;
boolean b56_36;
boolean b57_1;
boolean b57_2;
boolean b57_3;
boolean b57_4;
boolean b57_5;
boolean b57_6;
boolean b57_7;
boolean b57_8;
boolean b57_9;
boolean b57_10;
boolean b57_11;
boolean b57_12;
boolean b57_13;
boolean b57_14;
boolean b57_15;
boolean b57_16;
boolean b57_17;
boolean b57_18;
boolean b57_19;
boolean b57_20;
boolean b57_21;
boolean b57_22;
boolean b57_23;
boolean b57_24;
boolean b57_25;
boolean b57_26;
boolean b58_1;
boolean b58_2;
boolean b58_3;
boolean b58_4;
boolean b58_5;
boolean b58_6;
boolean b58_7;
boolean b58_8;
boolean b58_9;
boolean b58_10;
boolean b58_11;
boolean b58_12;
boolean b58_13;
boolean b58_14;
boolean b58_15;
boolean b58_16;
boolean b58_17;
boolean b58_18;
boolean b58_19;
boolean b58_20;
boolean b58_21;
boolean b58_22;
boolean b58_23;
boolean b58_24;
boolean b58_25;
boolean b58_26;
boolean b58_27;
boolean b58_28;
boolean b58_29;
boolean b58_30;
boolean b58_31;
boolean b58_32;
boolean b58_33;
boolean b58_34;
boolean b59_1;
boolean b59_2;
boolean b59_3;
boolean b59_4;
boolean b59_5;
boolean b59_6;
boolean b59_7;
boolean b59_8;
boolean b59_9;
boolean b59_10;
boolean b59_11;
boolean b59_12;
boolean b59_13;
boolean b59_14;
boolean b59_15;
boolean b59_16;
boolean b59_17;
boolean b59_18;
boolean b59_19;
boolean b59_20;
boolean b59_21;
boolean b59_22;
boolean b59_23;
boolean b59_24;
boolean b59_25;
boolean b59_26;
boolean b59_27;
boolean b59_28;
boolean b59_29;
boolean b59_30;
boolean b59_31;
boolean b59_32;
boolean b59_33;
boolean b59_34;
boolean b60_1;
boolean b60_2;
boolean b60_3;
boolean b60_4;
boolean b60_5;
boolean b60_6;
boolean b60_7;
boolean b60_8;
boolean b60_9;
boolean b60_10;
boolean b60_11;
boolean b60_12;
boolean b60_13;
boolean b60_14;
boolean b60_15;
boolean b60_16;
boolean b60_17;
boolean b60_18;
boolean b60_19;
boolean b60_20;
boolean b60_21;
boolean b60_22;
boolean b60_23;
boolean b60_24;
boolean b60_25;
boolean b60_26;
boolean b60_27;
boolean b60_28;
boolean b60_29;
boolean b60_30;
boolean b61_1;
boolean b61_2;
boolean b61_3;
boolean b61_4;
boolean b61_5;
boolean b61_6;
boolean b61_7;
boolean b61_8;
boolean b61_9;
boolean b61_10;
boolean b61_11;
boolean b61_12;
boolean b61_13;
boolean b61_14;
boolean b61_15;
boolean b61_16;
boolean b61_17;
boolean b61_18;
boolean b61_19;
boolean b61_20;
boolean b61_21;
boolean b61_22;
boolean b61_23;
boolean b61_24;
boolean b61_25;
boolean b61_26;
boolean b61_27;
boolean b61_28;
boolean b61_29;
boolean b61_30;
boolean b61_31;
boolean b61_32;
boolean b61_33;
boolean b62_1;
boolean b62_2;
boolean b62_3;
boolean b62_4;
boolean b62_5;
boolean b62_6;
boolean b62_7;
boolean b62_8;
boolean b62_9;
boolean b62_10;
boolean b62_11;
boolean b62_12;
boolean b62_13;
boolean b62_14;
boolean b62_15;
boolean b62_16;
boolean b62_17;
boolean b62_18;
boolean b62_19;
boolean b62_20;
boolean b62_21;
boolean b62_22;
boolean b62_23;
boolean b62_24;
boolean b62_25;
boolean b62_26;
boolean b62_27;
boolean b62_28;
boolean b62_29;
boolean b62_30;
boolean b62_31;
boolean b62_32;
boolean b62_33;
boolean b62_34;
boolean b63_1;
boolean b63_2;
boolean b63_3;
boolean b63_4;
boolean b63_5;
boolean b63_6;
boolean b63_7;
boolean b63_8;
boolean b63_9;
boolean b63_10;
boolean b63_11;
boolean b63_12;
boolean b63_13;
boolean b63_14;
boolean b63_15;
boolean b63_16;
boolean b63_17;
boolean b63_18;
boolean b63_19;
boolean b63_20;
boolean b63_21;
boolean b63_22;
boolean b63_23;
boolean b63_24;
boolean b63_25;
boolean b63_26;
boolean b63_27;
boolean b64_1;
boolean b64_2;
boolean b64_3;
boolean b64_4;
boolean b64_5;
boolean b64_6;
boolean b64_7;
boolean b64_8;
boolean b64_9;
boolean b64_10;
boolean b64_11;
boolean b64_12;
boolean b64_13;
boolean b64_14;
boolean b64_15;
boolean b64_16;
boolean b64_17;
boolean b64_18;
boolean b64_19;
boolean b64_20;
boolean b64_21;
boolean b64_22;
boolean b64_23;
boolean b64_24;
boolean b64_25;
boolean b64_26;
boolean b64_27;
boolean b64_28;
boolean b65_1;
boolean b65_2;
boolean b65_3;
boolean b65_4;
boolean b65_5;
boolean b65_6;
boolean b65_7;
boolean b65_8;
boolean b65_9;
boolean b65_10;
boolean b65_11;
boolean b65_12;
boolean b65_13;
boolean b65_14;
boolean b65_15;
boolean b65_16;
boolean b65_17;
boolean b65_18;
boolean b65_19;
boolean b65_20;
boolean b65_21;
boolean b65_22;
boolean b65_23;
boolean b65_24;
boolean b65_25;
boolean b65_26;
boolean b65_27;
boolean b65_28;
boolean b65_29;
boolean b65_30;
boolean b65_31;
boolean b65_32;
boolean b65_33;
boolean b66_1;
boolean b66_2;
boolean b66_3;
boolean b66_4;
boolean b66_5;
boolean b66_6;
boolean b66_7;
boolean b66_8;
boolean b66_9;
boolean b66_10;
boolean b66_11;
boolean b66_12;
boolean b66_13;
boolean b66_14;
boolean b66_15;
boolean b66_16;
boolean b66_17;
boolean b66_18;
boolean b66_19;
boolean b66_20;
boolean b66_21;
boolean b66_22;
boolean b66_23;
boolean b66_24;
boolean b66_25;
boolean b67_1;
boolean b67_2;
boolean b67_3;
boolean b67_4;
boolean b67_5;
boolean b67_6;
boolean b67_7;
boolean b67_8;
boolean b67_9;
boolean b67_10;
boolean b67_11;
boolean b67_12;
boolean b67_13;
boolean b67_14;
boolean b67_15;
boolean b67_16;
boolean b67_17;
boolean b67_18;
boolean b67_19;
boolean b67_20;
boolean b67_21;
boolean b67_22;
boolean b67_23;
boolean b67_24;
boolean b67_25;
boolean b67_26;
boolean b67_27;
boolean b67_28;
boolean b67_29;
boolean b68_1;
boolean b68_2;
boolean b68_3;
boolean b68_4;
boolean b68_5;
boolean b68_6;
boolean b68_7;
boolean b68_8;
boolean b68_9;
boolean b68_10;
boolean b68_11;
boolean b68_12;
boolean b68_13;
boolean b68_14;
boolean b68_15;
boolean b68_16;
boolean b68_17;
boolean b68_18;
boolean b68_19;
boolean b68_20;
boolean b68_21;
boolean b68_22;
boolean b68_23;
boolean b68_24;
boolean b68_25;
boolean b68_26;
boolean b68_27;
boolean b68_28;
boolean b68_29;
boolean b68_30;
boolean b68_31;
boolean b68_32;
boolean b69_1;
boolean b69_2;
boolean b69_3;
boolean b69_4;
boolean b69_5;
boolean b69_6;
boolean b69_7;
boolean b69_8;
boolean b69_9;
boolean b69_10;
boolean b69_11;
boolean b69_12;
boolean b69_13;
boolean b69_14;
boolean b69_15;
boolean b69_16;
boolean b69_17;
boolean b69_18;
boolean b69_19;
boolean b69_20;
boolean b69_21;
boolean b69_22;
boolean b69_23;
boolean b69_24;
boolean b70_1;
boolean b70_2;
boolean b70_3;
boolean b70_4;
boolean b70_5;
boolean b70_6;
boolean b70_7;
boolean b70_8;
boolean b70_9;
boolean b70_10;
boolean b70_11;
boolean b70_12;
boolean b70_13;
boolean b70_14;
boolean b70_15;
boolean b70_16;
boolean b70_17;
boolean b70_18;
boolean b70_19;
boolean b70_20;
boolean b70_21;
boolean b70_22;
boolean b70_23;
boolean b70_24;
boolean b70_25;
boolean b70_26;
boolean b70_27;
boolean b70_28;
boolean b70_29;
boolean b70_30;
boolean b70_31;
boolean b70_32;
boolean b70_33;
boolean b71_1;
boolean b71_2;
boolean b71_3;
boolean b71_4;
boolean b71_5;
boolean b71_6;
boolean b71_7;
boolean b71_8;
boolean b71_9;
boolean b71_10;
boolean b71_11;
boolean b71_12;
boolean b71_13;
boolean b71_14;
boolean b71_15;
boolean b71_16;
boolean b71_17;
boolean b71_18;
boolean b71_19;
boolean b71_20;
boolean b71_21;
boolean b71_22;
boolean b71_23;
boolean b71_24;
boolean b71_25;
boolean b72_1;
boolean b72_2;
boolean b72_3;
boolean b72_4;
boolean b72_5;
boolean b72_6;
boolean b72_7;
boolean b72_8;
boolean b72_9;
boolean b72_10;
boolean b72_11;
boolean b72_12;
boolean b72_13;
boolean b72_14;
boolean b72_15;
boolean b72_16;
boolean b72_17;
boolean b72_18;
boolean b72_19;
boolean b72_20;
boolean b72_21;
boolean b72_22;
boolean b72_23;
boolean b72_24;
boolean b72_25;
boolean b73_1;
boolean b73_2;
boolean b73_3;
boolean b73_4;
boolean b73_5;
boolean b73_6;
boolean b73_7;
boolean b73_8;
boolean b73_9;
boolean b73_10;
boolean b73_11;
boolean b73_12;
boolean b73_13;
boolean b73_14;
boolean b73_15;
boolean b73_16;
boolean b73_17;
boolean b73_18;
boolean b73_19;
boolean b73_20;
boolean b73_21;
boolean b73_22;
boolean b73_23;
boolean b73_24;
boolean b73_25;
boolean b73_26;
boolean b74_1;
boolean b74_2;
boolean b74_3;
boolean b74_4;
boolean b74_5;
boolean b74_6;
boolean b74_7;
boolean b74_8;
boolean b74_9;
boolean b74_10;
boolean b74_11;
boolean b74_12;
boolean b74_13;
boolean b74_14;
boolean b74_15;
boolean b74_16;
boolean b74_17;
boolean b74_18;
boolean b74_19;
boolean b74_20;
boolean b74_21;
boolean b74_22;
boolean b74_23;
boolean b74_24;
boolean b74_25;
boolean b74_26;
boolean b74_27;
boolean b74_28;
boolean b74_29;
boolean b75_1;
boolean b75_2;
boolean b75_3;
boolean b75_4;
boolean b75_5;
boolean b75_6;
boolean b75_7;
boolean b75_8;
boolean b75_9;
boolean b75_10;
boolean b75_11;
boolean b75_12;
boolean b75_13;
boolean b75_14;
boolean b75_15;
boolean b75_16;
boolean b75_17;
boolean b75_18;
boolean b75_19;
boolean b75_20;
boolean b75_21;
boolean b76_1;
boolean b76_2;
boolean b76_3;
boolean b76_4;
boolean b76_5;
boolean b76_6;
boolean b76_7;
boolean b76_8;
boolean b76_9;
boolean b76_10;
boolean b76_11;
boolean b76_12;
boolean b76_13;
boolean b76_14;
boolean b76_15;
boolean b76_16;
boolean b76_17;
boolean b76_18;
boolean b76_19;
boolean b76_20;
boolean b76_21;
boolean b76_22;
boolean b76_23;
boolean b76_24;
boolean b76_25;
boolean b77_1;
boolean b77_2;
boolean b77_3;
boolean b77_4;
boolean b77_5;
boolean b77_6;
boolean b77_7;
boolean b77_8;
boolean b77_9;
boolean b77_10;
boolean b77_11;
boolean b77_12;
boolean b77_13;
boolean b77_14;
boolean b77_15;
boolean b77_16;
boolean b77_17;
boolean b77_18;
boolean b77_19;
boolean b77_20;
boolean b77_21;
boolean b77_22;
boolean b77_23;
boolean b77_24;
boolean b77_25;
boolean b78_1;
boolean b78_2;
boolean b78_3;
boolean b78_4;
boolean b78_5;
boolean b78_6;
boolean b78_7;
boolean b78_8;
boolean b78_9;
boolean b78_10;
boolean b78_11;
boolean b78_12;
boolean b78_13;
boolean b78_14;
boolean b78_15;
boolean b78_16;
boolean b78_17;
boolean b78_18;
boolean b78_19;
boolean b78_20;
boolean b78_21;
boolean b78_22;
boolean b78_23;
boolean b79_1;
boolean b79_2;
boolean b79_3;
boolean b79_4;
boolean b79_5;
boolean b79_6;
boolean b79_7;
boolean b79_8;
boolean b79_9;
boolean b79_10;
boolean b79_11;
boolean b79_12;
boolean b79_13;
boolean b79_14;
boolean b79_15;
boolean b79_16;
boolean b79_17;
boolean b79_18;
boolean b79_19;
boolean b80_1;
boolean b80_2;
boolean b80_3;
boolean b80_4;
boolean b80_5;
boolean b80_6;
boolean b80_7;
boolean b80_8;
boolean b80_9;
boolean b80_10;
boolean b80_11;
boolean b80_12;
boolean b80_13;
boolean b80_14;
boolean b80_15;
boolean b80_16;
boolean b80_17;
boolean b80_18;
boolean b80_19;
boolean b80_20;
boolean b80_21;
boolean b80_22;
boolean b80_23;
boolean b80_24;
boolean b80_25;
boolean b80_26;
boolean b80_27;
boolean b80_28;
boolean b80_29;
boolean b81_1;
boolean b81_2;
boolean b81_3;
boolean b81_4;
boolean b81_5;
boolean b81_6;
boolean b81_7;
boolean b81_8;
boolean b81_9;
boolean b81_10;
boolean b81_11;
boolean b81_12;
boolean b81_13;
boolean b81_14;
boolean b81_15;
boolean b81_16;
boolean b81_17;
boolean b81_18;
boolean b82_1;
boolean b82_2;
boolean b82_3;
boolean b82_4;
boolean b82_5;
boolean b82_6;
boolean b82_7;
boolean b82_8;
boolean b82_9;
boolean b82_10;
boolean b82_11;
boolean b82_12;
boolean b82_13;
boolean b82_14;
boolean b82_15;
boolean b82_16;
boolean b82_17;
boolean b82_18;
boolean b82_19;
boolean b82_20;
boolean b82_21;
boolean b82_22;
boolean b82_23;
boolean b83_1;
boolean b83_2;
boolean b83_3;
boolean b83_4;
boolean b83_5;
boolean b83_6;
boolean b83_7;
boolean b83_8;
boolean b83_9;
boolean b83_10;
boolean b83_11;
boolean b83_12;
boolean b83_13;
boolean b83_14;
boolean b83_15;
boolean b83_16;
boolean b83_17;
boolean b83_18;
boolean b83_19;
boolean b83_20;
boolean b83_21;
boolean b83_22;
boolean b83_23;
boolean b83_24;
boolean b83_25;
boolean b84_1;
boolean b84_2;
boolean b84_3;
boolean b84_4;
boolean b84_5;
boolean b84_6;
boolean b84_7;
boolean b84_8;
boolean b84_9;
boolean b84_10;
boolean b84_11;
boolean b84_12;
boolean b84_13;
boolean b84_14;
boolean b84_15;
boolean b84_16;
boolean b84_17;
boolean b84_18;
boolean b85_1;
boolean b85_2;
boolean b85_3;
boolean b85_4;
boolean b85_5;
boolean b85_6;
boolean b85_7;
boolean b85_8;
boolean b85_9;
boolean b85_10;
boolean b85_11;
boolean b85_12;
boolean b85_13;
boolean b85_14;
boolean b85_15;
boolean b85_16;
boolean b85_17;
boolean b85_18;
boolean b85_19;
boolean b85_20;
boolean b85_21;
boolean b85_22;
boolean b86_1;
boolean b86_2;
boolean b86_3;
boolean b86_4;
boolean b86_5;
boolean b86_6;
boolean b86_7;
boolean b86_8;
boolean b86_9;
boolean b86_10;
boolean b86_11;
boolean b86_12;
boolean b86_13;
boolean b86_14;
boolean b86_15;
boolean b86_16;
boolean b86_17;
boolean b86_18;
boolean b86_19;
boolean b86_20;
boolean b87_1;
boolean b87_2;
boolean b87_3;
boolean b87_4;
boolean b87_5;
boolean b87_6;
boolean b87_7;
boolean b87_8;
boolean b87_9;
boolean b87_10;
boolean b87_11;
boolean b87_12;
boolean b87_13;
boolean b87_14;
boolean b87_15;
boolean b87_16;
boolean b87_17;
boolean b87_18;
boolean b87_19;
boolean b87_20;
boolean b88_1;
boolean b88_2;
boolean b88_3;
boolean b88_4;
boolean b88_5;
boolean b88_6;
boolean b88_7;
boolean b88_8;
boolean b88_9;
boolean b88_10;
boolean b88_11;
boolean b88_12;
boolean b88_13;
boolean b88_14;
boolean b88_15;
boolean b88_16;
boolean b88_17;
boolean b88_18;
boolean b88_19;
boolean b88_20;
boolean b89_1;
boolean b89_2;
boolean b89_3;
boolean b89_4;
boolean b89_5;
boolean b89_6;
boolean b89_7;
boolean b89_8;
boolean b89_9;
boolean b89_10;
boolean b89_11;
boolean b89_12;
boolean b89_13;
boolean b89_14;
boolean b89_15;
boolean b89_16;
boolean b89_17;
boolean b89_18;
boolean b89_19;
boolean b89_20;
boolean b89_21;
boolean b90_1;
boolean b90_2;
boolean b90_3;
boolean b90_4;
boolean b90_5;
boolean b90_6;
boolean b90_7;
boolean b90_8;
boolean b90_9;
boolean b90_10;
boolean b90_11;
boolean b90_12;
boolean b90_13;
boolean b90_14;
boolean b90_15;
boolean b91_1;
boolean b91_2;
boolean b91_3;
boolean b91_4;
boolean b91_5;
boolean b91_6;
boolean b91_7;
boolean b91_8;
boolean b91_9;
boolean b91_10;
boolean b91_11;
boolean b91_12;
boolean b91_13;
boolean b91_14;
boolean b91_15;
boolean b91_16;
boolean b91_17;
boolean b92_1;
boolean b92_2;
boolean b92_3;
boolean b92_4;
boolean b92_5;
boolean b92_6;
boolean b92_7;
boolean b92_8;
boolean b92_9;
boolean b92_10;
boolean b92_11;
boolean b92_12;
boolean b92_13;
boolean b92_14;
boolean b92_15;
boolean b92_16;
boolean b92_17;
boolean b92_18;
boolean b93_1;
boolean b93_2;
boolean b93_3;
boolean b93_4;
boolean b93_5;
boolean b93_6;
boolean b93_7;
boolean b93_8;
boolean b93_9;
boolean b93_10;
boolean b93_11;
boolean b93_12;
boolean b93_13;
boolean b93_14;
boolean b93_15;
boolean b93_16;
boolean b93_17;
boolean b93_18;
boolean b93_19;
boolean b94_1;
boolean b94_2;
boolean b94_3;
boolean b94_4;
boolean b94_5;
boolean b94_6;
boolean b94_7;
boolean b94_8;
boolean b94_9;
boolean b94_10;
boolean b94_11;
boolean b94_12;
boolean b94_13;
boolean b94_14;
boolean b94_15;
boolean b94_16;
boolean b94_17;
boolean b94_18;
boolean b94_19;
boolean b95_1;
boolean b95_2;
boolean b95_3;
boolean b95_4;
boolean b95_5;
boolean b95_6;
boolean b95_7;
boolean b95_8;
boolean b95_9;
boolean b95_10;
boolean b95_11;
boolean b95_12;
boolean b95_13;
boolean b95_14;
boolean b95_15;
boolean b95_16;
boolean b95_17;
boolean b95_18;
boolean b96_1;
boolean b96_2;
boolean b96_3;
boolean b96_4;
boolean b96_5;
boolean b96_6;
boolean b96_7;
boolean b96_8;
boolean b96_9;
boolean b96_10;
boolean b96_11;
boolean b96_12;
boolean b97_1;
boolean b97_2;
boolean b97_3;
boolean b97_4;
boolean b97_5;
boolean b97_6;
boolean b97_7;
boolean b97_8;
boolean b97_9;
boolean b97_10;
boolean b97_11;
boolean b97_12;
boolean b97_13;
boolean b97_14;
boolean b98_1;
boolean b98_2;
boolean b98_3;
boolean b98_4;
boolean b98_5;
boolean b98_6;
boolean b98_7;
boolean b98_8;
boolean b98_9;
boolean b98_10;
boolean b98_11;
boolean b98_12;
boolean b98_13;
boolean b98_14;
boolean b98_15;
boolean b98_16;
boolean b98_17;
boolean b98_18;
boolean b99_1;
boolean b99_2;
boolean b99_3;
boolean b99_4;
boolean b99_5;
boolean b99_6;
boolean b99_7;
boolean b99_8;
boolean b99_9;
boolean b99_10;
boolean b99_11;
boolean b99_12;
boolean b99_13;
boolean b100_1;
boolean b100_2;
boolean b100_3;
boolean b100_4;
boolean b100_5;
boolean b100_6;
boolean b100_7;
boolean b100_8;
boolean b100_9;
boolean b100_10;
boolean b100_11;
boolean b100_12;
boolean b100_13;
boolean b100_14;
boolean b100_15;
boolean b100_16;
boolean b101_1;
boolean b101_2;
boolean b101_3;
boolean b101_4;
boolean b101_5;
boolean b101_6;
boolean b101_7;
boolean b101_8;
boolean b101_9;
boolean b101_10;
boolean b101_11;
boolean b101_12;
boolean b101_13;
boolean b101_14;
boolean b101_15;
boolean b102_1;
boolean b102_2;
boolean b102_3;
boolean b102_4;
boolean b102_5;
boolean b102_6;
boolean b102_7;
boolean b102_8;
boolean b102_9;
boolean b102_10;
boolean b102_11;
boolean b102_12;
boolean b102_13;
boolean b102_14;
boolean b103_1;
boolean b103_2;
boolean b103_3;
boolean b103_4;
boolean b103_5;
boolean b103_6;
boolean b103_7;
boolean b103_8;
boolean b103_9;
boolean b103_10;
boolean b103_11;
boolean b103_12;
boolean b103_13;
boolean b103_14;
boolean b103_15;
boolean b104_1;
boolean b104_2;
boolean b104_3;
boolean b104_4;
boolean b104_5;
boolean b104_6;
boolean b104_7;
boolean b104_8;
boolean b104_9;
boolean b104_10;
boolean b104_11;
boolean b104_12;
boolean b104_13;
boolean b104_14;
boolean b104_15;
boolean b104_16;
boolean b105_1;
boolean b105_2;
boolean b105_3;
boolean b105_4;
boolean b105_5;
boolean b105_6;
boolean b105_7;
boolean b105_8;
boolean b105_9;
boolean b105_10;
boolean b105_11;
boolean b105_12;
boolean b105_13;
boolean b105_14;
boolean b105_15;
boolean b106_1;
boolean b106_2;
boolean b106_3;
boolean b106_4;
boolean b106_5;
boolean b106_6;
boolean b106_7;
boolean b106_8;
boolean b106_9;
boolean b106_10;
boolean b106_11;
boolean b106_12;
boolean b106_13;
boolean b106_14;
boolean b106_15;
boolean b107_1;
boolean b107_2;
boolean b107_3;
boolean b107_4;
boolean b107_5;
boolean b107_6;
boolean b107_7;
boolean b107_8;
boolean b107_9;
boolean b107_10;
boolean b107_11;
boolean b107_12;
boolean b107_13;
boolean b108_1;
boolean b108_2;
boolean b108_3;
boolean b108_4;
boolean b108_5;
boolean b108_6;
boolean b108_7;
boolean b108_8;
boolean b108_9;
boolean b108_10;
boolean b108_11;
boolean b108_12;
boolean b108_13;
boolean b108_14;
boolean b108_15;
boolean b109_1;
boolean b109_2;
boolean b109_3;
boolean b109_4;
boolean b109_5;
boolean b109_6;
boolean b109_7;
boolean b109_8;
boolean b109_9;
boolean b109_10;
boolean b109_11;
boolean b109_12;
boolean b109_13;
boolean b109_14;
boolean b109_15;
boolean b110_1;
boolean b110_2;
boolean b110_3;
boolean b110_4;
boolean b110_5;
boolean b110_6;
boolean b110_7;
boolean b110_8;
boolean b110_9;
boolean b110_10;
boolean b110_11;
boolean b110_12;
boolean b110_13;
boolean b110_14;
boolean b110_15;
boolean b111_1;
boolean b111_2;
boolean b111_3;
boolean b111_4;
boolean b111_5;
boolean b111_6;
boolean b111_7;
boolean b111_8;
boolean b111_9;
boolean b111_10;
boolean b111_11;
boolean b111_12;
boolean b111_13;
boolean b111_14;
boolean b112_1;
boolean b112_2;
boolean b112_3;
boolean b112_4;
boolean b112_5;
boolean b112_6;
boolean b112_7;
boolean b112_8;
boolean b112_9;
boolean b112_10;
boolean b112_11;
boolean b112_12;
boolean b112_13;
boolean b113_1;
boolean b113_2;
boolean b113_3;
boolean b113_4;
boolean b113_5;
boolean b113_6;
boolean b113_7;
boolean b113_8;
boolean b113_9;
boolean b113_10;
boolean b113_11;
boolean b113_12;
boolean b113_13;
boolean b114_1;
boolean b114_2;
boolean b114_3;
boolean b114_4;
boolean b114_5;
boolean b114_6;
boolean b114_7;
boolean b114_8;
boolean b114_9;
boolean b114_10;
boolean b114_11;
boolean b115_1;
boolean b115_2;
boolean b115_3;
boolean b115_4;
boolean b115_5;
boolean b115_6;
boolean b115_7;
boolean b115_8;
boolean b115_9;
boolean b115_10;
boolean b115_11;
boolean b115_12;
boolean b115_13;
boolean b115_14;
boolean b115_15;
boolean b116_1;
boolean b116_2;
boolean b116_3;
boolean b116_4;
boolean b116_5;
boolean b116_6;
boolean b116_7;
boolean b116_8;
boolean b116_9;
boolean b116_10;
boolean b116_11;
boolean b116_12;
boolean b116_13;
boolean b116_14;
boolean b116_15;
boolean b116_16;
boolean b117_1;
boolean b117_2;
boolean b117_3;
boolean b117_4;
boolean b117_5;
boolean b117_6;
boolean b117_7;
boolean b117_8;
boolean b117_9;
boolean b117_10;
boolean b117_11;
boolean b117_12;
boolean b118_1;
boolean b118_2;
boolean b118_3;
boolean b118_4;
boolean b118_5;
boolean b118_6;
boolean b118_7;
boolean b118_8;
boolean b118_9;
boolean b118_10;
boolean b119_1;
boolean b119_2;
boolean b119_3;
boolean b119_4;
boolean b119_5;
boolean b119_6;
boolean b119_7;
boolean b119_8;
boolean b119_9;
boolean b119_10;
boolean b119_11;
boolean b119_12;
boolean b120_1;
boolean b120_2;
boolean b120_3;
boolean b120_4;
boolean b120_5;
boolean b120_6;
boolean b120_7;
boolean b120_8;
boolean b120_9;
boolean b120_10;
boolean b120_11;
boolean b120_12;
boolean b120_13;
boolean b120_14;
boolean b121_1;
boolean b121_2;
boolean b121_3;
boolean b121_4;
boolean b121_5;
boolean b121_6;
boolean b121_7;
boolean b121_8;
boolean b121_9;
boolean b121_10;
boolean b121_11;
boolean b121_12;
boolean b121_13;
boolean b122_1;
boolean b122_2;
boolean b122_3;
boolean b122_4;
boolean b122_5;
boolean b122_6;
boolean b122_7;
boolean b122_8;
boolean b122_9;
boolean b122_10;
boolean b122_11;
boolean b122_12;
boolean b122_13;
boolean b123_1;
boolean b123_2;
boolean b123_3;
boolean b123_4;
boolean b123_5;
boolean b123_6;
boolean b123_7;
boolean b123_8;
boolean b123_9;
boolean b123_10;
boolean b123_11;
boolean b123_12;
boolean b123_13;
boolean b124_1;
boolean b124_2;
boolean b124_3;
boolean b124_4;
boolean b124_5;
boolean b124_6;
boolean b124_7;
boolean b124_8;
boolean b124_9;
boolean b124_10;
boolean b124_11;
boolean b124_12;
boolean b124_13;
boolean b124_14;
boolean b125_1;
boolean b125_2;
boolean b125_3;
boolean b125_4;
boolean b125_5;
boolean b125_6;
boolean b125_7;
boolean b125_8;
boolean b125_9;
boolean b125_10;
boolean b125_11;
boolean b125_12;
boolean b126_1;
boolean b126_2;
boolean b126_3;
boolean b126_4;
boolean b126_5;
boolean b126_6;
boolean b126_7;
boolean b126_8;
boolean b126_9;
boolean b126_10;
boolean b126_11;
boolean b126_12;
boolean b126_13;
boolean b127_1;
boolean b127_2;
boolean b127_3;
boolean b127_4;
boolean b127_5;
boolean b127_6;
boolean b127_7;
boolean b127_8;
boolean b127_9;
boolean b127_10;
boolean b127_11;
boolean b128_1;
boolean b128_2;
boolean b128_3;
boolean b128_4;
boolean b128_5;
boolean b128_6;
boolean b128_7;
boolean b128_8;
boolean b128_9;
boolean b128_10;
boolean b128_11;
boolean b128_12;
boolean b129_1;
boolean b129_2;
boolean b129_3;
boolean b129_4;
boolean b129_5;
boolean b129_6;
boolean b129_7;
boolean b129_8;
boolean b129_9;
boolean b129_10;
boolean b129_11;
boolean b130_1;
boolean b130_2;
boolean b130_3;
boolean b130_4;
boolean b130_5;
boolean b130_6;
boolean b130_7;
boolean b130_8;
boolean b130_9;
boolean b130_10;
boolean b130_11;
boolean b130_12;
boolean b130_13;
boolean b131_1;
boolean b131_2;
boolean b131_3;
boolean b131_4;
boolean b131_5;
boolean b131_6;
boolean b131_7;
boolean b131_8;
boolean b131_9;
boolean b131_10;
boolean b131_11;
boolean b132_1;
boolean b132_2;
boolean b132_3;
boolean b132_4;
boolean b132_5;
boolean b132_6;
boolean b132_7;
boolean b132_8;
boolean b132_9;
boolean b132_10;
boolean b132_11;
boolean b132_12;
boolean b133_1;
boolean b133_2;
boolean b133_3;
boolean b133_4;
boolean b133_5;
boolean b133_6;
boolean b133_7;
boolean b133_8;
boolean b133_9;
boolean b133_10;
boolean b134_1;
boolean b134_2;
boolean b134_3;
boolean b134_4;
boolean b134_5;
boolean b134_6;
boolean b134_7;
boolean b134_8;
boolean b134_9;
boolean b134_10;
boolean b134_11;
boolean b134_12;
boolean b135_1;
boolean b135_2;
boolean b135_3;
boolean b135_4;
boolean b135_5;
boolean b135_6;
boolean b135_7;
boolean b135_8;
boolean b135_9;
boolean b135_10;
boolean b135_11;
boolean b135_12;
boolean b136_1;
boolean b136_2;
boolean b136_3;
boolean b136_4;
boolean b136_5;
boolean b136_6;
boolean b136_7;
boolean b136_8;
boolean b137_1;
boolean b137_2;
boolean b137_3;
boolean b137_4;
boolean b137_5;
boolean b137_6;
boolean b137_7;
boolean b137_8;
boolean b137_9;
boolean b137_10;
boolean b137_11;
boolean b138_1;
boolean b138_2;
boolean b138_3;
boolean b138_4;
boolean b138_5;
boolean b138_6;
boolean b138_7;
boolean b138_8;
boolean b138_9;
boolean b139_1;
boolean b139_2;
boolean b139_3;
boolean b139_4;
boolean b139_5;
boolean b139_6;
boolean b139_7;
boolean b139_8;
boolean b139_9;
boolean b139_10;
boolean b139_11;
boolean b139_12;
boolean b139_13;
boolean b140_1;
boolean b140_2;
boolean b140_3;
boolean b140_4;
boolean b140_5;
boolean b140_6;
boolean b140_7;
boolean b140_8;
boolean b140_9;
boolean b141_1;
boolean b141_2;
boolean b141_3;
boolean b141_4;
boolean b141_5;
boolean b141_6;
boolean b141_7;
boolean b141_8;
boolean b141_9;
boolean b141_10;
boolean b142_1;
boolean b142_2;
boolean b142_3;
boolean b142_4;
boolean b142_5;
boolean b142_6;
boolean b142_7;
boolean b142_8;
boolean b142_9;
boolean b142_10;
boolean b143_1;
boolean b143_2;
boolean b143_3;
boolean b143_4;
boolean b143_5;
boolean b143_6;
boolean b143_7;
boolean b143_8;
boolean b143_9;
boolean b143_10;
boolean b144_1;
boolean b144_2;
boolean b144_3;
boolean b144_4;
boolean b144_5;
boolean b144_6;
boolean b144_7;
boolean b144_8;
boolean b144_9;
boolean b144_10;
boolean b144_11;
boolean b145_1;
boolean b145_2;
boolean b145_3;
boolean b145_4;
boolean b145_5;
boolean b145_6;
boolean b145_7;
boolean b145_8;
boolean b145_9;
boolean b145_10;
boolean b145_11;
boolean b145_12;
boolean b146_1;
boolean b146_2;
boolean b146_3;
boolean b146_4;
boolean b146_5;
boolean b146_6;
boolean b146_7;
boolean b146_8;
boolean b146_9;
boolean b146_10;
boolean b146_11;
boolean b147_1;
boolean b147_2;
boolean b147_3;
boolean b147_4;
boolean b147_5;
boolean b147_6;
boolean b147_7;
boolean b147_8;
boolean b147_9;
boolean b147_10;
boolean b147_11;
boolean b147_12;
boolean b148_1;
boolean b148_2;
boolean b148_3;
boolean b148_4;
boolean b148_5;
boolean b148_6;
boolean b148_7;
boolean b148_8;
boolean b148_9;
boolean b148_10;
boolean b148_11;
boolean b149_1;
boolean b149_2;
boolean b149_3;
boolean b149_4;
boolean b149_5;
boolean b149_6;
boolean b149_7;
boolean b149_8;
boolean b149_9;
boolean b150_1;
boolean b150_2;
boolean b150_3;
boolean b150_4;
boolean b150_5;
boolean b150_6;
boolean b150_7;
boolean b150_8;
boolean b151_1;
boolean b151_2;
boolean b151_3;
boolean b151_4;
boolean b151_5;
boolean b151_6;
boolean b151_7;
boolean b151_8;
boolean b151_9;
boolean b151_10;
boolean b152_1;
boolean b152_2;
boolean b152_3;
boolean b152_4;
boolean b152_5;
boolean b152_6;
boolean b152_7;
boolean b152_8;
boolean b152_9;
boolean b153_1;
boolean b153_2;
boolean b153_3;
boolean b153_4;
boolean b153_5;
boolean b153_6;
boolean b153_7;
boolean b154_1;
boolean b154_2;
boolean b154_3;
boolean b154_4;
boolean b154_5;
boolean b154_6;
boolean b154_7;
boolean b154_8;
boolean b155_1;
boolean b155_2;
boolean b155_3;
boolean b155_4;
boolean b155_5;
boolean b155_6;
boolean b155_7;
boolean b155_8;
boolean b155_9;
boolean b155_10;
boolean b156_1;
boolean b156_2;
boolean b156_3;
boolean b156_4;
boolean b156_5;
boolean b156_6;
boolean b156_7;
boolean b156_8;
boolean b156_9;
boolean b156_10;
boolean b157_1;
boolean b157_2;
boolean b157_3;
boolean b157_4;
boolean b157_5;
boolean b157_6;
boolean b157_7;
boolean b157_8;
boolean b158_1;
boolean b158_2;
boolean b158_3;
boolean b158_4;
boolean b158_5;
boolean b158_6;
boolean b158_7;
boolean b158_8;
boolean b159_1;
boolean b159_2;
boolean b159_3;
boolean b159_4;
boolean b159_5;
boolean b159_6;
boolean b159_7;
boolean b159_8;
boolean b160_1;
boolean b160_2;
boolean b160_3;
boolean b160_4;
boolean b160_5;
boolean b160_6;
boolean b160_7;
boolean b161_1;
boolean b161_2;
boolean b161_3;
boolean b161_4;
boolean b161_5;
boolean b161_6;
boolean b161_7;
boolean b162_1;
boolean b162_2;
boolean b162_3;
boolean b162_4;
boolean b162_5;
boolean b162_6;
boolean b162_7;
boolean b162_8;
boolean b163_1;
boolean b163_2;
boolean b163_3;
boolean b163_4;
boolean b163_5;
boolean b163_6;
boolean b164_1;
boolean b164_2;
boolean b164_3;
boolean b164_4;
boolean b164_5;
boolean b164_6;
boolean b164_7;
boolean b164_8;
boolean b165_1;
boolean b165_2;
boolean b165_3;
boolean b165_4;
boolean b165_5;
boolean b166_1;
boolean b166_2;
boolean b166_3;
boolean b166_4;
boolean b166_5;
boolean b166_6;
boolean b166_7;
boolean b167_1;
boolean b167_2;
boolean b167_3;
boolean b167_4;
boolean b167_5;
boolean b168_1;
boolean b168_2;
boolean b168_3;
boolean b168_4;
boolean b168_5;
boolean b168_6;
boolean b169_1;
boolean b169_2;
boolean b169_3;
boolean b169_4;
boolean b169_5;
boolean b169_6;
boolean b169_7;
boolean b170_1;
boolean b170_2;
boolean b170_3;
boolean b170_4;
boolean b170_5;
boolean b170_6;
boolean b170_7;
boolean b171_1;
boolean b171_2;
boolean b171_3;
boolean b171_4;
boolean b171_5;
boolean b171_6;
boolean b172_1;
boolean b172_2;
boolean b172_3;
boolean b172_4;
boolean b172_5;
boolean b172_6;
boolean b173_1;
boolean b173_2;
boolean b173_3;
boolean b173_4;
boolean b174_1;
boolean b174_2;
boolean b174_3;
boolean b174_4;
boolean b174_5;
boolean b174_6;
boolean b175_1;
boolean b175_2;
boolean b175_3;
boolean b175_4;
boolean b176_1;
boolean b176_2;
boolean b176_3;
boolean b176_4;
boolean b177_1;
boolean b177_2;
boolean b177_3;
boolean b178_1;
boolean b178_2;
boolean b178_3;
boolean b178_4;
boolean b179_1;
boolean b179_2;
boolean b179_3;
boolean b179_4;
boolean b180_1;
boolean b180_2;
boolean b180_3;
boolean b180_4;
boolean b181_1;
boolean b181_2;
boolean b181_3;
boolean b182_1;
boolean b182_2;
boolean b182_3;
boolean b183_1;
boolean b183_2;
boolean b183_3;
boolean b184_1;
boolean b184_2;
boolean b184_3;
boolean b185_1;
boolean b185_2;
boolean b185_3;
boolean b186_1;
boolean b186_2;
boolean b186_3;
boolean b186_4;
boolean b187_1;
boolean b187_2;
boolean b187_3;
boolean b188_1;
boolean b188_2;
boolean b188_3;
boolean b188_4;
boolean b189_1;
boolean b189_2;
boolean b189_3;
boolean b189_4;
boolean b190_1;
boolean b190_2;
boolean b190_3;
boolean b191_1;
boolean b191_2;
boolean b191_3;
boolean b192_1;
boolean b192_2;
boolean b193_1;
boolean b193_2;
boolean b194_1;
boolean b194_2;
boolean b194_3;
boolean b195_1;
boolean b195_2;
boolean b195_3;
boolean b196_1;
boolean b196_2;
boolean b197_1;
boolean b197_2;
boolean b198_1;
boolean b198_2;
boolean b198_3;
boolean b199_1;
boolean b199_2;
boolean b199_3;
boolean b200_1;
boolean b200_2;
boolean b200_3;
boolean b201_1;
boolean b201_2;
boolean b201_3;
boolean b202_1;
boolean b202_2;
boolean b202_3;
boolean b203_1;
boolean b203_2;
boolean b203_3;
boolean b204_1;
boolean b204_2;
boolean b204_3;
boolean b205_1;
boolean b205_2;
boolean b205_3;
boolean b206_1;
boolean b206_2;
boolean b206_3;
boolean b207_1;
boolean b207_2;
boolean b208_1;
boolean b208_2;
boolean b208_3;
boolean b209_1;
boolean b209_2;
boolean b209_3;
boolean b210_1;
boolean b210_2;
boolean b210_3;
boolean b211_1;
boolean b211_2;
boolean b211_3;
boolean b212_1;
boolean b212_2;
boolean b212_3;
boolean b213_1;
boolean b213_2;
boolean b214_1;
boolean b214_2;
boolean b214_3;
boolean b215_1;
boolean b215_2;
boolean b215_3;
boolean b216_1;
boolean b216_2;
boolean b216_3;
boolean b217_1;
boolean b217_2;
boolean b218_1;
boolean b218_2;
boolean b218_3;
boolean b219_1;
boolean b219_2;
boolean b220_1;
boolean b220_2;
boolean b220_3;
boolean b221_1;
boolean b221_2;
boolean b221_3;
boolean b222_1;
boolean b222_2;
boolean b223_1;
boolean b224_1;
boolean b224_2;
boolean b224_3;
boolean b225_1;
boolean b225_2;
boolean b225_3;
boolean b226_1;
boolean b226_2;
boolean b227_1;
boolean b227_2;
boolean b227_3;
boolean b228_1;
boolean b228_2;
boolean b229_1;
boolean b229_2;
boolean b229_3;
boolean b230_1;
boolean b230_2;
boolean b230_3;
boolean b231_1;
boolean b231_2;
boolean b231_3;
boolean b232_1;
boolean b232_2;
boolean b232_3;
boolean b233_1;
boolean b233_2;
boolean b233_3;
boolean b234_1;
boolean b234_2;
boolean b234_3;
boolean b235_1;
boolean b235_2;
boolean b235_3;
boolean b236_1;
boolean b236_2;
boolean b236_3;
boolean b237_1;
boolean b237_2;
boolean b238_1;
boolean b238_2;
boolean b238_3;
boolean b239_1;
boolean b239_2;
boolean b240_1;
boolean b240_2;
boolean b241_1;
boolean b241_2;
boolean b242_1;
boolean b242_2;
boolean b243_1;
boolean b243_2;
boolean b244_1;
boolean b244_2;
boolean b245_1;
boolean b245_2;
boolean b246_1;
boolean b246_2;
boolean b247_1;
boolean b247_2;
boolean b248_1;
boolean b248_2;
boolean b249_1;
boolean b249_2;
boolean b250_1;
boolean b250_2;
boolean b251_1;
boolean b251_2;
boolean b252_1;
boolean b252_2;
boolean b253_1;
boolean b253_2;
boolean b254_1;
boolean b254_2;
boolean b255_1;
boolean b255_2;
boolean b256_1;
boolean b256_2;
boolean b257_1;
boolean b257_2;
boolean b258_1;
boolean b258_2;
boolean b259_1;
boolean b259_2;
boolean b260_1;
boolean b260_2;
boolean b261_1;
boolean b261_2;
boolean b262_1;
boolean b263_1;
boolean b264_1;
boolean b265_1;
boolean b266_1;
boolean b267_1;
boolean b268_1;
boolean b269_1;
boolean b270_1;
boolean b271_1;
boolean b272_1;
boolean b273_1;
boolean b274_1;
boolean b275_1;
boolean b276_1;
boolean b277_1;
boolean b278_1;
boolean b279_1;
boolean b280_1;
boolean b281_1;
boolean b282_1;
boolean b283_1;
boolean b284_1;
boolean b285_1;
boolean b286_1;
boolean b287_1;
boolean b288_1;
boolean b289_1;
boolean b290_1;
boolean b291_1;
boolean b292_1;
boolean b293_1;
boolean b294_1;
boolean b295_1;
boolean b296_1;
boolean b297_1;
boolean b298_1;
boolean b299_1;
boolean b300_1;
boolean b301_1;
boolean b302_1;
boolean b303_1;
boolean b304_1;
boolean b305_1;
boolean b306_1;
boolean b307_1;
boolean b308_1;
boolean b309_1;
boolean b310_1;
boolean b311_1;
boolean b312_1;
boolean b313_1;
boolean b314_1;
boolean b315_1;
boolean b316_1;
boolean b317_1;
boolean b318_1;
boolean b319_1;
boolean b320_1;
boolean b321_1;
boolean b322_1;
boolean b323_1;
boolean b324_1;
boolean b325_1;
boolean b326_1;
boolean b327_1;
boolean b328_1;
boolean b329_1;
boolean b330_1;
boolean b331_1;
boolean b332_1;
boolean b333_1;
boolean b334_1;
boolean b335_1;
boolean b336_1;
boolean b337_1;
boolean b338_1;
boolean b339_1;
boolean b340_1;
boolean b341_1;
boolean b342_1;
boolean b343_1;
boolean b344_1;
boolean b345_1;
boolean b346_1;
boolean b347_1;
boolean b348_1;
boolean b349_1;
boolean b350_1;
boolean b351_1;
boolean b352_1;
boolean b353_1;
boolean b354_1;
boolean b355_1;
boolean b356_1;
boolean b357_1;
boolean b358_1;
boolean b359_1;
boolean b360_1;
boolean b361_1;
boolean b362_1;
boolean b363_1;
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
for(int i=0; i<chunk_len; i++){
b0_1 =(buffer[i + 0] == '2');
b0_2 =(buffer[i + 0] == 'q');
b0_3 =(buffer[i + 0] == 'G');
b0_4 =(buffer[i + 0] == 'B');
b0_5 =(buffer[i + 0] == 'W');
b0_6 =(buffer[i + 0] == 'R');
b0_7 =(buffer[i + 0] == 'F');
b0_8 =(buffer[i + 0] == 'h');
b0_9 =(buffer[i + 0] == 'U');
b0_10 =(buffer[i + 0] == 'N');
b0_11 =(buffer[i + 0] == 'c');
b0_12 =(buffer[i + 0] == 'a');
b0_13 =(buffer[i + 0] == 'l');
b0_14 =(buffer[i + 0] == '|');
b0_15 =(buffer[i + 0] == 'y');
b0_16 =(buffer[i + 0] == 'A');
b0_17 =(buffer[i + 0] == 'p');
b0_18 =(buffer[i + 0] == 'w');
b0_19 =(buffer[i + 0] == 'b');
b0_20 =(buffer[i + 0] == 'r');
b0_21 =(buffer[i + 0] == 'd');
b0_22 =(buffer[i + 0] == 's');
b0_23 =(buffer[i + 0] == 'f');
b0_24 =(buffer[i + 0] == 'S');
b0_25 =(buffer[i + 0] == '1');
b0_26 =(buffer[i + 0] == 'P');
b0_27 =(buffer[i + 0] == '*');
b0_28 =(buffer[i + 0] == 'g');
b0_29 =(buffer[i + 0] == 'k');
b0_30 =(buffer[i + 0] == 'n');
b0_31 =(buffer[i + 0] == '>');
b0_32 =(buffer[i + 0] == '.');
b0_33 =(buffer[i + 0] == 't');
b0_34 =(buffer[i + 0] == '+');
b0_35 =(buffer[i + 0] == '/');
b0_36 =(buffer[i + 0] == '3');
b0_37 =(buffer[i + 0] == '^');
b0_38 =(buffer[i + 0] == 'V');
b0_39 =(buffer[i + 0] == 'C');
b0_40 =(buffer[i + 0] == 'X');
b0_41 =(buffer[i + 0] == '@');
b0_42 =(buffer[i + 0] == '0');
b0_43 =(buffer[i + 0] == ' ');
b0_44 =(buffer[i + 0] == '=');
b0_45 =(buffer[i + 0] == 'O');
b0_46 =(buffer[i + 0] == 'D');
b0_47 =(buffer[i + 0] == 'I');
b0_48 =(buffer[i + 0] == '8');
b0_49 =(buffer[i + 0] == 'T');
b0_50 =(buffer[i + 0] == '5');
b0_51 =(buffer[i + 0] == 'L');
b0_52 =(buffer[i + 0] == 'u');
b0_53 =(buffer[i + 0] == 'M');
b0_54 =(buffer[i + 0] == 'e');
b0_55 =(buffer[i + 0] == '-');
b0_56 =(buffer[i + 0] == 'H');
b0_57 =(buffer[i + 0] == 'm');
b0_58 =(buffer[i + 0] == 'v');
b0_59 =(buffer[i + 0] == 'x');
b0_60 =(buffer[i + 0] == '9');
b0_61 =(buffer[i + 0] == '4');
b0_62 =(buffer[i + 0] == '_');
b0_63 =(buffer[i + 0] == '%');
b0_64 =(buffer[i + 0] == '&');
b0_65 =(buffer[i + 0] == '?');
b0_66 =(buffer[i + 0] == '~');
b0_67 =(buffer[i + 0] == 'E');
b0_68 =(buffer[i + 0] == 'i');
b0_69 =(buffer[i + 0] == 'J');
b0_70 =(buffer[i + 0] == 'j');
b0_71 =(buffer[i + 0] == '!');
b0_72 =(buffer[i + 0] == 'Y');
b0_73 =(buffer[i + 0] == '<');
b0_74 =(buffer[i + 0] == 'o');
b0_75 =(buffer[i + 0] == '[');
b0_76 =(buffer[i + 0] == ')');
b0_77 =(buffer[i + 0] == '{');
b0_78 =(buffer[i + 0] == '(');
b0_79 =(buffer[i + 0] == ',');
b0_80 =(buffer[i + 0] == 'K');
b0_81 =(buffer[i + 0] == 'z');
b1_1 =(buffer[i + 1] == '|');
b1_2 =(buffer[i + 1] == 'a');
b1_3 =(buffer[i + 1] == 'e');
b1_4 =(buffer[i + 1] == 'N');
b1_5 =(buffer[i + 1] == 'H');
b1_6 =(buffer[i + 1] == 't');
b1_7 =(buffer[i + 1] == 'C');
b1_8 =(buffer[i + 1] == 'o');
b1_9 =(buffer[i + 1] == 'S');
b1_10 =(buffer[i + 1] == 'T');
b1_11 =(buffer[i + 1] == 'c');
b1_12 =(buffer[i + 1] == 'B');
b1_13 =(buffer[i + 1] == 'p');
b1_14 =(buffer[i + 1] == 'h');
b1_15 =(buffer[i + 1] == '0');
b1_16 =(buffer[i + 1] == 'r');
b1_17 =(buffer[i + 1] == '1');
b1_18 =(buffer[i + 1] == '2');
b1_19 =(buffer[i + 1] == 'A');
b1_20 =(buffer[i + 1] == 'O');
b1_21 =(buffer[i + 1] == 'i');
b1_22 =(buffer[i + 1] == 'k');
b1_23 =(buffer[i + 1] == '4');
b1_24 =(buffer[i + 1] == 'l');
b1_25 =(buffer[i + 1] == '8');
b1_26 =(buffer[i + 1] == '.');
b1_27 =(buffer[i + 1] == 'D');
b1_28 =(buffer[i + 1] == 'E');
b1_29 =(buffer[i + 1] == '9');
b1_30 =(buffer[i + 1] == '+');
b1_31 =(buffer[i + 1] == 'F');
b1_32 =(buffer[i + 1] == 'v');
b1_33 =(buffer[i + 1] == ']');
b1_34 =(buffer[i + 1] == 'X');
b1_35 =(buffer[i + 1] == 'm');
b1_36 =(buffer[i + 1] == ' ');
b1_37 =(buffer[i + 1] == '3');
b1_38 =(buffer[i + 1] == '7');
b1_39 =(buffer[i + 1] == '@');
b1_40 =(buffer[i + 1] == 'f');
b1_41 =(buffer[i + 1] == 'W');
b1_42 =(buffer[i + 1] == '%');
b1_43 =(buffer[i + 1] == 'I');
b1_44 =(buffer[i + 1] == '-');
b1_45 =(buffer[i + 1] == '=');
b1_46 =(buffer[i + 1] == 'M');
b1_47 =(buffer[i + 1] == 'b');
b1_48 =(buffer[i + 1] == 'J');
b1_49 =(buffer[i + 1] == 'P');
b1_50 =(buffer[i + 1] == 'n');
b1_51 =(buffer[i + 1] == '5');
b1_52 =(buffer[i + 1] == 's');
b1_53 =(buffer[i + 1] == 'K');
b1_54 =(buffer[i + 1] == 'x');
b1_55 =(buffer[i + 1] == 'y');
b1_56 =(buffer[i + 1] == 'u');
b1_57 =(buffer[i + 1] == 'R');
b1_58 =(buffer[i + 1] == 'd');
b1_59 =(buffer[i + 1] == 'w');
b1_60 =(buffer[i + 1] == 'Y');
b1_61 =(buffer[i + 1] == '/');
b1_62 =(buffer[i + 1] == 'g');
b1_63 =(buffer[i + 1] == 'L');
b1_64 =(buffer[i + 1] == '_');
b1_65 =(buffer[i + 1] == '*');
b1_66 =(buffer[i + 1] == 'j');
b1_67 =(buffer[i + 1] == '?');
b1_68 =(buffer[i + 1] == '~');
b1_69 =(buffer[i + 1] == 'q');
b1_70 =(buffer[i + 1] == 'G');
b1_71 =(buffer[i + 1] == 'z');
b1_72 =(buffer[i + 1] == '&');
b1_73 =(buffer[i + 1] == 'U');
b1_74 =(buffer[i + 1] == 'V');
b1_75 =(buffer[i + 1] == '!');
b1_76 =(buffer[i + 1] == 'Q');
b1_77 =(buffer[i + 1] == 'Z');
b1_78 =(buffer[i + 1] == '(');
b1_79 =(buffer[i + 1] == ')');
b1_80 =(buffer[i + 1] == '6');
b2_1 =(buffer[i + 2] == '0');
b2_2 =(buffer[i + 2] == 'z');
b2_3 =(buffer[i + 2] == 't');
b2_4 =(buffer[i + 2] == '|');
b2_5 =(buffer[i + 2] == 'A');
b2_6 =(buffer[i + 2] == 'm');
b2_7 =(buffer[i + 2] == ' ');
b2_8 =(buffer[i + 2] == 's');
b2_9 =(buffer[i + 2] == 'E');
b2_10 =(buffer[i + 2] == '3');
b2_11 =(buffer[i + 2] == 'P');
b2_12 =(buffer[i + 2] == 'g');
b2_13 =(buffer[i + 2] == '4');
b2_14 =(buffer[i + 2] == 'i');
b2_15 =(buffer[i + 2] == 'h');
b2_16 =(buffer[i + 2] == 'c');
b2_17 =(buffer[i + 2] == 'w');
b2_18 =(buffer[i + 2] == 'k');
b2_19 =(buffer[i + 2] == 'x');
b2_20 =(buffer[i + 2] == 'o');
b2_21 =(buffer[i + 2] == 'n');
b2_22 =(buffer[i + 2] == 'N');
b2_23 =(buffer[i + 2] == 'r');
b2_24 =(buffer[i + 2] == 'l');
b2_25 =(buffer[i + 2] == 'e');
b2_26 =(buffer[i + 2] == '5');
b2_27 =(buffer[i + 2] == '1');
b2_28 =(buffer[i + 2] == '7');
b2_29 =(buffer[i + 2] == '/');
b2_30 =(buffer[i + 2] == 'M');
b2_31 =(buffer[i + 2] == 'D');
b2_32 =(buffer[i + 2] == 'C');
b2_33 =(buffer[i + 2] == '9');
b2_34 =(buffer[i + 2] == 'B');
b2_35 =(buffer[i + 2] == '+');
b2_36 =(buffer[i + 2] == 'F');
b2_37 =(buffer[i + 2] == '^');
b2_38 =(buffer[i + 2] == '8');
b2_39 =(buffer[i + 2] == 'X');
b2_40 =(buffer[i + 2] == 'T');
b2_41 =(buffer[i + 2] == 'd');
b2_42 =(buffer[i + 2] == 'b');
b2_43 =(buffer[i + 2] == 'a');
b2_44 =(buffer[i + 2] == 'L');
b2_45 =(buffer[i + 2] == 'S');
b2_46 =(buffer[i + 2] == '2');
b2_47 =(buffer[i + 2] == '-');
b2_48 =(buffer[i + 2] == '=');
b2_49 =(buffer[i + 2] == 'f');
b2_50 =(buffer[i + 2] == 'p');
b2_51 =(buffer[i + 2] == 'J');
b2_52 =(buffer[i + 2] == 'v');
b2_53 =(buffer[i + 2] == 'G');
b2_54 =(buffer[i + 2] == 'O');
b2_55 =(buffer[i + 2] == 'U');
b2_56 =(buffer[i + 2] == 'R');
b2_57 =(buffer[i + 2] == '6');
b2_58 =(buffer[i + 2] == 'I');
b2_59 =(buffer[i + 2] == '_');
b2_60 =(buffer[i + 2] == '.');
b2_61 =(buffer[i + 2] == 'H');
b2_62 =(buffer[i + 2] == 'u');
b2_63 =(buffer[i + 2] == 'W');
b2_64 =(buffer[i + 2] == 'V');
b2_65 =(buffer[i + 2] == '?');
b2_66 =(buffer[i + 2] == 'y');
b2_67 =(buffer[i + 2] == '%');
b2_68 =(buffer[i + 2] == 'q');
b2_69 =(buffer[i + 2] == 'K');
b2_70 =(buffer[i + 2] == 'Y');
b2_71 =(buffer[i + 2] == ')');
b3_1 =(buffer[i + 3] == '0');
b3_2 =(buffer[i + 3] == 'w');
b3_3 =(buffer[i + 3] == 'I');
b3_4 =(buffer[i + 3] == '1');
b3_5 =(buffer[i + 3] == 'T');
b3_6 =(buffer[i + 3] == 'o');
b3_7 =(buffer[i + 3] == 'u');
b3_8 =(buffer[i + 3] == 't');
b3_9 =(buffer[i + 3] == 'R');
b3_10 =(buffer[i + 3] == 'S');
b3_11 =(buffer[i + 3] == 'e');
b3_12 =(buffer[i + 3] == 'A');
b3_13 =(buffer[i + 3] == 'O');
b3_14 =(buffer[i + 3] == ' ');
b3_15 =(buffer[i + 3] == 'i');
b3_16 =(buffer[i + 3] == 'g');
b3_17 =(buffer[i + 3] == 'h');
b3_18 =(buffer[i + 3] == 's');
b3_19 =(buffer[i + 3] == 'k');
b3_20 =(buffer[i + 3] == 'r');
b3_21 =(buffer[i + 3] == 'd');
b3_22 =(buffer[i + 3] == '4');
b3_23 =(buffer[i + 3] == 'G');
b3_24 =(buffer[i + 3] == 'l');
b3_25 =(buffer[i + 3] == 'L');
b3_26 =(buffer[i + 3] == 'a');
b3_27 =(buffer[i + 3] == 'v');
b3_28 =(buffer[i + 3] == '|');
b3_29 =(buffer[i + 3] == '.');
b3_30 =(buffer[i + 3] == 'E');
b3_31 =(buffer[i + 3] == '9');
b3_32 =(buffer[i + 3] == '7');
b3_33 =(buffer[i + 3] == 'X');
b3_34 =(buffer[i + 3] == 'm');
b3_35 =(buffer[i + 3] == '_');
b3_36 =(buffer[i + 3] == '3');
b3_37 =(buffer[i + 3] == '=');
b3_38 =(buffer[i + 3] == 'P');
b3_39 =(buffer[i + 3] == 'D');
b3_40 =(buffer[i + 3] == 'c');
b3_41 =(buffer[i + 3] == '6');
b3_42 =(buffer[i + 3] == 'K');
b3_43 =(buffer[i + 3] == 'n');
b3_44 =(buffer[i + 3] == 'F');
b3_45 =(buffer[i + 3] == 'y');
b3_46 =(buffer[i + 3] == 'x');
b3_47 =(buffer[i + 3] == 'B');
b3_48 =(buffer[i + 3] == 'b');
b3_49 =(buffer[i + 3] == 'f');
b3_50 =(buffer[i + 3] == 'p');
b3_51 =(buffer[i + 3] == '-');
b3_52 =(buffer[i + 3] == '5');
b3_53 =(buffer[i + 3] == '2');
b3_54 =(buffer[i + 3] == '%');
b3_55 =(buffer[i + 3] == '?');
b3_56 =(buffer[i + 3] == '/');
b3_57 =(buffer[i + 3] == 'U');
b3_58 =(buffer[i + 3] == 'W');
b3_59 =(buffer[i + 3] == 'z');
b3_60 =(buffer[i + 3] == 'j');
b3_61 =(buffer[i + 3] == 'V');
b3_62 =(buffer[i + 3] == 'q');
b3_63 =(buffer[i + 3] == 'C');
b3_64 =(buffer[i + 3] == 'N');
b3_65 =(buffer[i + 3] == 'H');
b3_66 =(buffer[i + 3] == 'Q');
b3_67 =(buffer[i + 3] == 'M');
b3_68 =(buffer[i + 3] == 'Y');
b3_69 =(buffer[i + 3] == 'J');
b3_70 =(buffer[i + 3] == '{');
b3_71 =(buffer[i + 3] == 'Z');
b4_1 =(buffer[i + 4] == ' ');
b4_2 =(buffer[i + 4] == 's');
b4_3 =(buffer[i + 4] == 'n');
b4_4 =(buffer[i + 4] == '0');
b4_5 =(buffer[i + 4] == 'I');
b4_6 =(buffer[i + 4] == 't');
b4_7 =(buffer[i + 4] == 'p');
b4_8 =(buffer[i + 4] == 'C');
b4_9 =(buffer[i + 4] == 'N');
b4_10 =(buffer[i + 4] == 'P');
b4_11 =(buffer[i + 4] == 'v');
b4_12 =(buffer[i + 4] == 'e');
b4_13 =(buffer[i + 4] == 'B');
b4_14 =(buffer[i + 4] == 'c');
b4_15 =(buffer[i + 4] == 'h');
b4_16 =(buffer[i + 4] == 'd');
b4_17 =(buffer[i + 4] == 'r');
b4_18 =(buffer[i + 4] == 'a');
b4_19 =(buffer[i + 4] == 'g');
b4_20 =(buffer[i + 4] == 'A');
b4_21 =(buffer[i + 4] == 'f');
b4_22 =(buffer[i + 4] == 'l');
b4_23 =(buffer[i + 4] == 'L');
b4_24 =(buffer[i + 4] == 'm');
b4_25 =(buffer[i + 4] == '8');
b4_26 =(buffer[i + 4] == '.');
b4_27 =(buffer[i + 4] == 'i');
b4_28 =(buffer[i + 4] == 'O');
b4_29 =(buffer[i + 4] == 'F');
b4_30 =(buffer[i + 4] == '1');
b4_31 =(buffer[i + 4] == 'w');
b4_32 =(buffer[i + 4] == '|');
b4_33 =(buffer[i + 4] == '@');
b4_34 =(buffer[i + 4] == 'D');
b4_35 =(buffer[i + 4] == '/');
b4_36 =(buffer[i + 4] == '2');
b4_37 =(buffer[i + 4] == '%');
b4_38 =(buffer[i + 4] == '7');
b4_39 =(buffer[i + 4] == 'K');
b4_40 =(buffer[i + 4] == 'E');
b4_41 =(buffer[i + 4] == 'V');
b4_42 =(buffer[i + 4] == '4');
b4_43 =(buffer[i + 4] == '=');
b4_44 =(buffer[i + 4] == 'o');
b4_45 =(buffer[i + 4] == '3');
b4_46 =(buffer[i + 4] == '-');
b4_47 =(buffer[i + 4] == '5');
b4_48 =(buffer[i + 4] == '!');
b4_49 =(buffer[i + 4] == '9');
b4_50 =(buffer[i + 4] == 'u');
b4_51 =(buffer[i + 4] == 'b');
b4_52 =(buffer[i + 4] == 'T');
b4_53 =(buffer[i + 4] == 'x');
b4_54 =(buffer[i + 4] == 'S');
b4_55 =(buffer[i + 4] == '?');
b4_56 =(buffer[i + 4] == '+');
b4_57 =(buffer[i + 4] == 'X');
b4_58 =(buffer[i + 4] == 'R');
b4_59 =(buffer[i + 4] == '_');
b4_60 =(buffer[i + 4] == 'k');
b4_61 =(buffer[i + 4] == 'M');
b4_62 =(buffer[i + 4] == 'y');
b4_63 =(buffer[i + 4] == 'U');
b4_64 =(buffer[i + 4] == 'H');
b4_65 =(buffer[i + 4] == '[');
b4_66 =(buffer[i + 4] == 'W');
b4_67 =(buffer[i + 4] == 'G');
b4_68 =(buffer[i + 4] == 'Z');
b4_69 =(buffer[i + 4] == '(');
b4_70 =(buffer[i + 4] == 'j');
b4_71 =(buffer[i + 4] == ':');
b4_72 =(buffer[i + 4] == '<');
b4_73 =(buffer[i + 4] == 'z');
b4_74 =(buffer[i + 4] == '&');
b4_75 =(buffer[i + 4] == 'Y');
b4_76 =(buffer[i + 4] == '{');
b4_77 =(buffer[i + 4] == 'q');
b4_78 =(buffer[i + 4] == '6');
b5_1 =(buffer[i + 5] == '0');
b5_2 =(buffer[i + 5] == 'x');
b5_3 =(buffer[i + 5] == 'f');
b5_4 =(buffer[i + 5] == ' ');
b5_5 =(buffer[i + 5] == 'S');
b5_6 =(buffer[i + 5] == 'e');
b5_7 =(buffer[i + 5] == 'h');
b5_8 =(buffer[i + 5] == 'r');
b5_9 =(buffer[i + 5] == '5');
b5_10 =(buffer[i + 5] == 'o');
b5_11 =(buffer[i + 5] == 'a');
b5_12 =(buffer[i + 5] == 'd');
b5_13 =(buffer[i + 5] == '4');
b5_14 =(buffer[i + 5] == '!');
b5_15 =(buffer[i + 5] == '[');
b5_16 =(buffer[i + 5] == 'i');
b5_17 =(buffer[i + 5] == 'y');
b5_18 =(buffer[i + 5] == 'R');
b5_19 =(buffer[i + 5] == 'A');
b5_20 =(buffer[i + 5] == 'n');
b5_21 =(buffer[i + 5] == 'w');
b5_22 =(buffer[i + 5] == 'z');
b5_23 =(buffer[i + 5] == '|');
b5_24 =(buffer[i + 5] == 'O');
b5_25 =(buffer[i + 5] == 'l');
b5_26 =(buffer[i + 5] == 's');
b5_27 =(buffer[i + 5] == 'm');
b5_28 =(buffer[i + 5] == '1');
b5_29 =(buffer[i + 5] == 'u');
b5_30 =(buffer[i + 5] == '/');
b5_31 =(buffer[i + 5] == 'C');
b5_32 =(buffer[i + 5] == 'B');
b5_33 =(buffer[i + 5] == '7');
b5_34 =(buffer[i + 5] == '^');
b5_35 =(buffer[i + 5] == 'F');
b5_36 =(buffer[i + 5] == '9');
b5_37 =(buffer[i + 5] == '_');
b5_38 =(buffer[i + 5] == '3');
b5_39 =(buffer[i + 5] == '8');
b5_40 =(buffer[i + 5] == '.');
b5_41 =(buffer[i + 5] == 'D');
b5_42 =(buffer[i + 5] == 't');
b5_43 =(buffer[i + 5] == '-');
b5_44 =(buffer[i + 5] == '2');
b5_45 =(buffer[i + 5] == '=');
b5_46 =(buffer[i + 5] == 'G');
b5_47 =(buffer[i + 5] == 'g');
b5_48 =(buffer[i + 5] == 'U');
b5_49 =(buffer[i + 5] == 'I');
b5_50 =(buffer[i + 5] == 'L');
b5_51 =(buffer[i + 5] == 'c');
b5_52 =(buffer[i + 5] == 'p');
b5_53 =(buffer[i + 5] == '%');
b5_54 =(buffer[i + 5] == 'b');
b5_55 =(buffer[i + 5] == 'v');
b5_56 =(buffer[i + 5] == 'P');
b5_57 =(buffer[i + 5] == 'k');
b5_58 =(buffer[i + 5] == 'T');
b5_59 =(buffer[i + 5] == 'q');
b5_60 =(buffer[i + 5] == '&');
b5_61 =(buffer[i + 5] == 'H');
b5_62 =(buffer[i + 5] == 'j');
b5_63 =(buffer[i + 5] == 'N');
b5_64 =(buffer[i + 5] == '?');
b5_65 =(buffer[i + 5] == '6');
b5_66 =(buffer[i + 5] == 'Y');
b5_67 =(buffer[i + 5] == 'E');
b5_68 =(buffer[i + 5] == 'M');
b5_69 =(buffer[i + 5] == ']');
b5_70 =(buffer[i + 5] == 'W');
b5_71 =(buffer[i + 5] == 'Q');
b5_72 =(buffer[i + 5] == 'Z');
b5_73 =(buffer[i + 5] == ':');
b5_74 =(buffer[i + 5] == '>');
b5_75 =(buffer[i + 5] == '#');
b5_76 =(buffer[i + 5] == 'K');
b6_1 =(buffer[i + 6] == '0');
b6_2 =(buffer[i + 6] == '.');
b6_3 =(buffer[i + 6] == 'o');
b6_4 =(buffer[i + 6] == 'I');
b6_5 =(buffer[i + 6] == '|');
b6_6 =(buffer[i + 6] == 'U');
b6_7 =(buffer[i + 6] == 'e');
b6_8 =(buffer[i + 6] == 'a');
b6_9 =(buffer[i + 6] == 'C');
b6_10 =(buffer[i + 6] == 'r');
b6_11 =(buffer[i + 6] == 't');
b6_12 =(buffer[i + 6] == ' ');
b6_13 =(buffer[i + 6] == 'M');
b6_14 =(buffer[i + 6] == 'z');
b6_15 =(buffer[i + 6] == 'A');
b6_16 =(buffer[i + 6] == '3');
b6_17 =(buffer[i + 6] == '*');
b6_18 =(buffer[i + 6] == 'm');
b6_19 =(buffer[i + 6] == 'h');
b6_20 =(buffer[i + 6] == 'l');
b6_21 =(buffer[i + 6] == 'b');
b6_22 =(buffer[i + 6] == 'v');
b6_23 =(buffer[i + 6] == '/');
b6_24 =(buffer[i + 6] == 's');
b6_25 =(buffer[i + 6] == 'K');
b6_26 =(buffer[i + 6] == '1');
b6_27 =(buffer[i + 6] == '9');
b6_28 =(buffer[i + 6] == 'H');
b6_29 =(buffer[i + 6] == 'S');
b6_30 =(buffer[i + 6] == 'B');
b6_31 =(buffer[i + 6] == 'E');
b6_32 =(buffer[i + 6] == '2');
b6_33 =(buffer[i + 6] == 'V');
b6_34 =(buffer[i + 6] == 'd');
b6_35 =(buffer[i + 6] == 'i');
b6_36 =(buffer[i + 6] == 'c');
b6_37 =(buffer[i + 6] == '-');
b6_38 =(buffer[i + 6] == 'g');
b6_39 =(buffer[i + 6] == 'u');
b6_40 =(buffer[i + 6] == '6');
b6_41 =(buffer[i + 6] == '=');
b6_42 =(buffer[i + 6] == 'O');
b6_43 =(buffer[i + 6] == 'R');
b6_44 =(buffer[i + 6] == 'G');
b6_45 =(buffer[i + 6] == 'P');
b6_46 =(buffer[i + 6] == 'p');
b6_47 =(buffer[i + 6] == 'N');
b6_48 =(buffer[i + 6] == 'f');
b6_49 =(buffer[i + 6] == 'D');
b6_50 =(buffer[i + 6] == 'L');
b6_51 =(buffer[i + 6] == '7');
b6_52 =(buffer[i + 6] == 'y');
b6_53 =(buffer[i + 6] == '4');
b6_54 =(buffer[i + 6] == '_');
b6_55 =(buffer[i + 6] == 'n');
b6_56 =(buffer[i + 6] == 'w');
b6_57 =(buffer[i + 6] == 'q');
b6_58 =(buffer[i + 6] == 'J');
b6_59 =(buffer[i + 6] == 'x');
b6_60 =(buffer[i + 6] == 'F');
b6_61 =(buffer[i + 6] == '?');
b6_62 =(buffer[i + 6] == 'T');
b6_63 =(buffer[i + 6] == ',');
b6_64 =(buffer[i + 6] == '8');
b6_65 =(buffer[i + 6] == 'Z');
b6_66 =(buffer[i + 6] == '<');
b6_67 =(buffer[i + 6] == 'X');
b6_68 =(buffer[i + 6] == '5');
b6_69 =(buffer[i + 6] == ':');
b6_70 =(buffer[i + 6] == 'j');
b6_71 =(buffer[i + 6] == 'k');
b6_72 =(buffer[i + 6] == '%');
b6_73 =(buffer[i + 6] == '!');
b6_74 =(buffer[i + 6] == '(');
b7_1 =(buffer[i + 7] == ' ');
b7_2 =(buffer[i + 7] == 'h');
b7_3 =(buffer[i + 7] == '|');
b7_4 =(buffer[i + 7] == '0');
b7_5 =(buffer[i + 7] == 'T');
b7_6 =(buffer[i + 7] == '3');
b7_7 =(buffer[i + 7] == 's');
b7_8 =(buffer[i + 7] == 'r');
b7_9 =(buffer[i + 7] == 't');
b7_10 =(buffer[i + 7] == 'e');
b7_11 =(buffer[i + 7] == 'i');
b7_12 =(buffer[i + 7] == 'y');
b7_13 =(buffer[i + 7] == 'A');
b7_14 =(buffer[i + 7] == 'o');
b7_15 =(buffer[i + 7] == '.');
b7_16 =(buffer[i + 7] == 'S');
b7_17 =(buffer[i + 7] == 'E');
b7_18 =(buffer[i + 7] == '2');
b7_19 =(buffer[i + 7] == 'C');
b7_20 =(buffer[i + 7] == 'F');
b7_21 =(buffer[i + 7] == 'u');
b7_22 =(buffer[i + 7] == 'D');
b7_23 =(buffer[i + 7] == '^');
b7_24 =(buffer[i + 7] == '7');
b7_25 =(buffer[i + 7] == ']');
b7_26 =(buffer[i + 7] == '4');
b7_27 =(buffer[i + 7] == 'B');
b7_28 =(buffer[i + 7] == 'V');
b7_29 =(buffer[i + 7] == 'd');
b7_30 =(buffer[i + 7] == 'k');
b7_31 =(buffer[i + 7] == 'a');
b7_32 =(buffer[i + 7] == 'c');
b7_33 =(buffer[i + 7] == '1');
b7_34 =(buffer[i + 7] == '=');
b7_35 =(buffer[i + 7] == 'b');
b7_36 =(buffer[i + 7] == 'Q');
b7_37 =(buffer[i + 7] == 'H');
b7_38 =(buffer[i + 7] == '!');
b7_39 =(buffer[i + 7] == 'm');
b7_40 =(buffer[i + 7] == '8');
b7_41 =(buffer[i + 7] == '>');
b7_42 =(buffer[i + 7] == 'q');
b7_43 =(buffer[i + 7] == 'Y');
b7_44 =(buffer[i + 7] == '/');
b7_45 =(buffer[i + 7] == 'n');
b7_46 =(buffer[i + 7] == 'g');
b7_47 =(buffer[i + 7] == 'p');
b7_48 =(buffer[i + 7] == '@');
b7_49 =(buffer[i + 7] == '9');
b7_50 =(buffer[i + 7] == 'O');
b7_51 =(buffer[i + 7] == 'x');
b7_52 =(buffer[i + 7] == 'v');
b7_53 =(buffer[i + 7] == 'w');
b7_54 =(buffer[i + 7] == 'l');
b7_55 =(buffer[i + 7] == 'f');
b7_56 =(buffer[i + 7] == '_');
b7_57 =(buffer[i + 7] == 'L');
b7_58 =(buffer[i + 7] == 'W');
b7_59 =(buffer[i + 7] == '+');
b7_60 =(buffer[i + 7] == 'K');
b7_61 =(buffer[i + 7] == 'U');
b7_62 =(buffer[i + 7] == '?');
b7_63 =(buffer[i + 7] == '-');
b7_64 =(buffer[i + 7] == 'I');
b7_65 =(buffer[i + 7] == '[');
b7_66 =(buffer[i + 7] == '*');
b7_67 =(buffer[i + 7] == '6');
b7_68 =(buffer[i + 7] == '5');
b7_69 =(buffer[i + 7] == 'z');
b7_70 =(buffer[i + 7] == '~');
b7_71 =(buffer[i + 7] == '%');
b7_72 =(buffer[i + 7] == '<');
b7_73 =(buffer[i + 7] == 'N');
b7_74 =(buffer[i + 7] == 'R');
b7_75 =(buffer[i + 7] == '\'');
b7_76 =(buffer[i + 7] == 'M');
b7_77 =(buffer[i + 7] == 'P');
b7_78 =(buffer[i + 7] == ':');
b7_79 =(buffer[i + 7] == 'J');
b7_80 =(buffer[i + 7] == 'j');
b8_1 =(buffer[i + 8] == '0');
b8_2 =(buffer[i + 8] == 's');
b8_3 =(buffer[i + 8] == ' ');
b8_4 =(buffer[i + 8] == 'A');
b8_5 =(buffer[i + 8] == 'e');
b8_6 =(buffer[i + 8] == 'h');
b8_7 =(buffer[i + 8] == 'n');
b8_8 =(buffer[i + 8] == 'r');
b8_9 =(buffer[i + 8] == 'k');
b8_10 =(buffer[i + 8] == '|');
b8_11 =(buffer[i + 8] == 'i');
b8_12 =(buffer[i + 8] == 'u');
b8_13 =(buffer[i + 8] == 'j');
b8_14 =(buffer[i + 8] == 'o');
b8_15 =(buffer[i + 8] == '/');
b8_16 =(buffer[i + 8] == 'm');
b8_17 =(buffer[i + 8] == '8');
b8_18 =(buffer[i + 8] == '?');
b8_19 =(buffer[i + 8] == '9');
b8_20 =(buffer[i + 8] == '6');
b8_21 =(buffer[i + 8] == 'F');
b8_22 =(buffer[i + 8] == '1');
b8_23 =(buffer[i + 8] == '5');
b8_24 =(buffer[i + 8] == 'B');
b8_25 =(buffer[i + 8] == '3');
b8_26 =(buffer[i + 8] == '[');
b8_27 =(buffer[i + 8] == '2');
b8_28 =(buffer[i + 8] == 'U');
b8_29 =(buffer[i + 8] == 'T');
b8_30 =(buffer[i + 8] == '7');
b8_31 =(buffer[i + 8] == 'V');
b8_32 =(buffer[i + 8] == 'C');
b8_33 =(buffer[i + 8] == '@');
b8_34 =(buffer[i + 8] == 'l');
b8_35 =(buffer[i + 8] == 't');
b8_36 =(buffer[i + 8] == 'f');
b8_37 =(buffer[i + 8] == '=');
b8_38 =(buffer[i + 8] == 'I');
b8_39 =(buffer[i + 8] == '-');
b8_40 =(buffer[i + 8] == 'p');
b8_41 =(buffer[i + 8] == 'c');
b8_42 =(buffer[i + 8] == 'a');
b8_43 =(buffer[i + 8] == 'R');
b8_44 =(buffer[i + 8] == 'M');
b8_45 =(buffer[i + 8] == 'D');
b8_46 =(buffer[i + 8] == 'y');
b8_47 =(buffer[i + 8] == 'd');
b8_48 =(buffer[i + 8] == '.');
b8_49 =(buffer[i + 8] == 'w');
b8_50 =(buffer[i + 8] == 'z');
b8_51 =(buffer[i + 8] == 'G');
b8_52 =(buffer[i + 8] == 'E');
b8_53 =(buffer[i + 8] == 'S');
b8_54 =(buffer[i + 8] == 'v');
b8_55 =(buffer[i + 8] == 'x');
b8_56 =(buffer[i + 8] == 'P');
b8_57 =(buffer[i + 8] == '_');
b8_58 =(buffer[i + 8] == 'g');
b8_59 =(buffer[i + 8] == 'X');
b8_60 =(buffer[i + 8] == 'Y');
b8_61 =(buffer[i + 8] == 'b');
b8_62 =(buffer[i + 8] == '4');
b8_63 =(buffer[i + 8] == 'K');
b8_64 =(buffer[i + 8] == 'H');
b8_65 =(buffer[i + 8] == 'L');
b8_66 =(buffer[i + 8] == '%');
b8_67 =(buffer[i + 8] == '>');
b8_68 =(buffer[i + 8] == 'Q');
b8_69 =(buffer[i + 8] == 'q');
b8_70 =(buffer[i + 8] == 'N');
b8_71 =(buffer[i + 8] == '#');
b9_1 =(buffer[i + 9] == '0');
b9_2 =(buffer[i + 9] == 'q');
b9_3 =(buffer[i + 9] == 'D');
b9_4 =(buffer[i + 9] == '|');
b9_5 =(buffer[i + 9] == 'e');
b9_6 =(buffer[i + 9] == 'o');
b9_7 =(buffer[i + 9] == 'M');
b9_8 =(buffer[i + 9] == 'A');
b9_9 =(buffer[i + 9] == 's');
b9_10 =(buffer[i + 9] == 't');
b9_11 =(buffer[i + 9] == 'n');
b9_12 =(buffer[i + 9] == 'g');
b9_13 =(buffer[i + 9] == ' ');
b9_14 =(buffer[i + 9] == 'r');
b9_15 =(buffer[i + 9] == '1');
b9_16 =(buffer[i + 9] == '2');
b9_17 =(buffer[i + 9] == 'c');
b9_18 =(buffer[i + 9] == '8');
b9_19 =(buffer[i + 9] == 'u');
b9_20 =(buffer[i + 9] == '/');
b9_21 =(buffer[i + 9] == 'P');
b9_22 =(buffer[i + 9] == 'E');
b9_23 =(buffer[i + 9] == '!');
b9_24 =(buffer[i + 9] == '9');
b9_25 =(buffer[i + 9] == 'h');
b9_26 =(buffer[i + 9] == '@');
b9_27 =(buffer[i + 9] == 'a');
b9_28 =(buffer[i + 9] == 'm');
b9_29 =(buffer[i + 9] == '=');
b9_30 =(buffer[i + 9] == 'j');
b9_31 =(buffer[i + 9] == 'J');
b9_32 =(buffer[i + 9] == '<');
b9_33 =(buffer[i + 9] == 'w');
b9_34 =(buffer[i + 9] == 'l');
b9_35 =(buffer[i + 9] == 'S');
b9_36 =(buffer[i + 9] == 'C');
b9_37 =(buffer[i + 9] == 'O');
b9_38 =(buffer[i + 9] == '+');
b9_39 =(buffer[i + 9] == 'F');
b9_40 =(buffer[i + 9] == 'd');
b9_41 =(buffer[i + 9] == 'y');
b9_42 =(buffer[i + 9] == '.');
b9_43 =(buffer[i + 9] == 'p');
b9_44 =(buffer[i + 9] == '-');
b9_45 =(buffer[i + 9] == 'x');
b9_46 =(buffer[i + 9] == 'B');
b9_47 =(buffer[i + 9] == 'N');
b9_48 =(buffer[i + 9] == 'f');
b9_49 =(buffer[i + 9] == 'i');
b9_50 =(buffer[i + 9] == 'b');
b9_51 =(buffer[i + 9] == 'T');
b9_52 =(buffer[i + 9] == '?');
b9_53 =(buffer[i + 9] == 'v');
b9_54 =(buffer[i + 9] == 'U');
b9_55 =(buffer[i + 9] == 'k');
b9_56 =(buffer[i + 9] == '_');
b9_57 =(buffer[i + 9] == '3');
b9_58 =(buffer[i + 9] == 'R');
b9_59 =(buffer[i + 9] == 'V');
b9_60 =(buffer[i + 9] == 'I');
b9_61 =(buffer[i + 9] == 'Y');
b9_62 =(buffer[i + 9] == 'W');
b9_63 =(buffer[i + 9] == 'H');
b9_64 =(buffer[i + 9] == 'G');
b9_65 =(buffer[i + 9] == '%');
b9_66 =(buffer[i + 9] == '5');
b9_67 =(buffer[i + 9] == '7');
b9_68 =(buffer[i + 9] == 'z');
b9_69 =(buffer[i + 9] == '&');
b9_70 =(buffer[i + 9] == '#');
b9_71 =(buffer[i + 9] == '6');
b9_72 =(buffer[i + 9] == ':');
b10_1 =(buffer[i + 10] == ' ');
b10_2 =(buffer[i + 10] == '|');
b10_3 =(buffer[i + 10] == '2');
b10_4 =(buffer[i + 10] == 'r');
b10_5 =(buffer[i + 10] == 'p');
b10_6 =(buffer[i + 10] == 'o');
b10_7 =(buffer[i + 10] == 'd');
b10_8 =(buffer[i + 10] == '!');
b10_9 =(buffer[i + 10] == 'u');
b10_10 =(buffer[i + 10] == '0');
b10_11 =(buffer[i + 10] == 's');
b10_12 =(buffer[i + 10] == 'n');
b10_13 =(buffer[i + 10] == 't');
b10_14 =(buffer[i + 10] == 'D');
b10_15 =(buffer[i + 10] == 'C');
b10_16 =(buffer[i + 10] == 'F');
b10_17 =(buffer[i + 10] == 'e');
b10_18 =(buffer[i + 10] == 'B');
b10_19 =(buffer[i + 10] == 'J');
b10_20 =(buffer[i + 10] == '%');
b10_21 =(buffer[i + 10] == '8');
b10_22 =(buffer[i + 10] == '/');
b10_23 =(buffer[i + 10] == '4');
b10_24 =(buffer[i + 10] == '[');
b10_25 =(buffer[i + 10] == 'f');
b10_26 =(buffer[i + 10] == 'i');
b10_27 =(buffer[i + 10] == '1');
b10_28 =(buffer[i + 10] == 'a');
b10_29 =(buffer[i + 10] == '=');
b10_30 =(buffer[i + 10] == 'k');
b10_31 =(buffer[i + 10] == 'K');
b10_32 =(buffer[i + 10] == 'b');
b10_33 =(buffer[i + 10] == 'A');
b10_34 =(buffer[i + 10] == 'y');
b10_35 =(buffer[i + 10] == 'm');
b10_36 =(buffer[i + 10] == 'T');
b10_37 =(buffer[i + 10] == 'G');
b10_38 =(buffer[i + 10] == 'g');
b10_39 =(buffer[i + 10] == 'O');
b10_40 =(buffer[i + 10] == '9');
b10_41 =(buffer[i + 10] == '3');
b10_42 =(buffer[i + 10] == '+');
b10_43 =(buffer[i + 10] == 'c');
b10_44 =(buffer[i + 10] == '7');
b10_45 =(buffer[i + 10] == 'E');
b10_46 =(buffer[i + 10] == '_');
b10_47 =(buffer[i + 10] == 'x');
b10_48 =(buffer[i + 10] == '.');
b10_49 =(buffer[i + 10] == 'l');
b10_50 =(buffer[i + 10] == 'h');
b10_51 =(buffer[i + 10] == 'S');
b10_52 =(buffer[i + 10] == 'U');
b10_53 =(buffer[i + 10] == 'R');
b10_54 =(buffer[i + 10] == 'w');
b10_55 =(buffer[i + 10] == 'H');
b10_56 =(buffer[i + 10] == 'v');
b10_57 =(buffer[i + 10] == 'I');
b10_58 =(buffer[i + 10] == 'j');
b10_59 =(buffer[i + 10] == '-');
b10_60 =(buffer[i + 10] == 'L');
b10_61 =(buffer[i + 10] == 'P');
b10_62 =(buffer[i + 10] == '5');
b10_63 =(buffer[i + 10] == 'q');
b10_64 =(buffer[i + 10] == '?');
b10_65 =(buffer[i + 10] == '*');
b10_66 =(buffer[i + 10] == 'M');
b10_67 =(buffer[i + 10] == '}');
b10_68 =(buffer[i + 10] == 'W');
b10_69 =(buffer[i + 10] == '>');
b10_70 =(buffer[i + 10] == 'V');
b10_71 =(buffer[i + 10] == 'N');
b10_72 =(buffer[i + 10] == ':');
b10_73 =(buffer[i + 10] == '6');
b10_74 =(buffer[i + 10] == 'z');
b11_1 =(buffer[i + 11] == '0');
b11_2 =(buffer[i + 11] == ' ');
b11_3 =(buffer[i + 11] == 'e');
b11_4 =(buffer[i + 11] == 'u');
b11_5 =(buffer[i + 11] == 's');
b11_6 =(buffer[i + 11] == 'o');
b11_7 =(buffer[i + 11] == '1');
b11_8 =(buffer[i + 11] == '7');
b11_9 =(buffer[i + 11] == 'D');
b11_10 =(buffer[i + 11] == 'C');
b11_11 =(buffer[i + 11] == '6');
b11_12 =(buffer[i + 11] == 'F');
b11_13 =(buffer[i + 11] == '/');
b11_14 =(buffer[i + 11] == '?');
b11_15 =(buffer[i + 11] == '^');
b11_16 =(buffer[i + 11] == '8');
b11_17 =(buffer[i + 11] == '3');
b11_18 =(buffer[i + 11] == 'E');
b11_19 =(buffer[i + 11] == '9');
b11_20 =(buffer[i + 11] == '|');
b11_21 =(buffer[i + 11] == '@');
b11_22 =(buffer[i + 11] == 'A');
b11_23 =(buffer[i + 11] == 'r');
b11_24 =(buffer[i + 11] == 'B');
b11_25 =(buffer[i + 11] == '4');
b11_26 =(buffer[i + 11] == 'm');
b11_27 =(buffer[i + 11] == 'n');
b11_28 =(buffer[i + 11] == 'b');
b11_29 =(buffer[i + 11] == '=');
b11_30 =(buffer[i + 11] == 'l');
b11_31 =(buffer[i + 11] == 'L');
b11_32 =(buffer[i + 11] == '>');
b11_33 =(buffer[i + 11] == 'y');
b11_34 =(buffer[i + 11] == 'd');
b11_35 =(buffer[i + 11] == 'p');
b11_36 =(buffer[i + 11] == 'O');
b11_37 =(buffer[i + 11] == 'i');
b11_38 =(buffer[i + 11] == 'N');
b11_39 =(buffer[i + 11] == '5');
b11_40 =(buffer[i + 11] == 't');
b11_41 =(buffer[i + 11] == '+');
b11_42 =(buffer[i + 11] == '2');
b11_43 =(buffer[i + 11] == 'G');
b11_44 =(buffer[i + 11] == '_');
b11_45 =(buffer[i + 11] == 'W');
b11_46 =(buffer[i + 11] == 'a');
b11_47 =(buffer[i + 11] == 'c');
b11_48 =(buffer[i + 11] == 'x');
b11_49 =(buffer[i + 11] == 'g');
b11_50 =(buffer[i + 11] == 'S');
b11_51 =(buffer[i + 11] == 'R');
b11_52 =(buffer[i + 11] == 'T');
b11_53 =(buffer[i + 11] == 'I');
b11_54 =(buffer[i + 11] == 'h');
b11_55 =(buffer[i + 11] == 'v');
b11_56 =(buffer[i + 11] == 'q');
b11_57 =(buffer[i + 11] == '.');
b11_58 =(buffer[i + 11] == 'U');
b11_59 =(buffer[i + 11] == 'f');
b11_60 =(buffer[i + 11] == ']');
b11_61 =(buffer[i + 11] == 'w');
b11_62 =(buffer[i + 11] == ',');
b11_63 =(buffer[i + 11] == '`');
b11_64 =(buffer[i + 11] == 'j');
b11_65 =(buffer[i + 11] == 'k');
b11_66 =(buffer[i + 11] == '%');
b11_67 =(buffer[i + 11] == 'M');
b11_68 =(buffer[i + 11] == 'z');
b11_69 =(buffer[i + 11] == '-');
b11_70 =(buffer[i + 11] == 'P');
b11_71 =(buffer[i + 11] == ':');
b11_72 =(buffer[i + 11] == '<');
b11_73 =(buffer[i + 11] == ')');
b11_74 =(buffer[i + 11] == 'H');
b12_1 =(buffer[i + 12] == '6');
b12_2 =(buffer[i + 12] == '0');
b12_3 =(buffer[i + 12] == 'n');
b12_4 =(buffer[i + 12] == 't');
b12_5 =(buffer[i + 12] == 'e');
b12_6 =(buffer[i + 12] == ' ');
b12_7 =(buffer[i + 12] == 'm');
b12_8 =(buffer[i + 12] == 'B');
b12_9 =(buffer[i + 12] == 'D');
b12_10 =(buffer[i + 12] == '|');
b12_11 =(buffer[i + 12] == 'E');
b12_12 =(buffer[i + 12] == '.');
b12_13 =(buffer[i + 12] == '8');
b12_14 =(buffer[i + 12] == 'F');
b12_15 =(buffer[i + 12] == '2');
b12_16 =(buffer[i + 12] == 's');
b12_17 =(buffer[i + 12] == 'a');
b12_18 =(buffer[i + 12] == 'c');
b12_19 =(buffer[i + 12] == '=');
b12_20 =(buffer[i + 12] == 'r');
b12_21 =(buffer[i + 12] == 'M');
b12_22 =(buffer[i + 12] == '?');
b12_23 =(buffer[i + 12] == 'N');
b12_24 =(buffer[i + 12] == 'k');
b12_25 =(buffer[i + 12] == 'l');
b12_26 =(buffer[i + 12] == 'o');
b12_27 =(buffer[i + 12] == 'R');
b12_28 =(buffer[i + 12] == '/');
b12_29 =(buffer[i + 12] == 'A');
b12_30 =(buffer[i + 12] == '+');
b12_31 =(buffer[i + 12] == '3');
b12_32 =(buffer[i + 12] == 'p');
b12_33 =(buffer[i + 12] == 'q');
b12_34 =(buffer[i + 12] == '9');
b12_35 =(buffer[i + 12] == 'S');
b12_36 =(buffer[i + 12] == 'g');
b12_37 =(buffer[i + 12] == 'u');
b12_38 =(buffer[i + 12] == 'i');
b12_39 =(buffer[i + 12] == 'd');
b12_40 =(buffer[i + 12] == 'U');
b12_41 =(buffer[i + 12] == 'v');
b12_42 =(buffer[i + 12] == 'I');
b12_43 =(buffer[i + 12] == 'Y');
b12_44 =(buffer[i + 12] == '4');
b12_45 =(buffer[i + 12] == 'x');
b12_46 =(buffer[i + 12] == 'b');
b12_47 =(buffer[i + 12] == 'P');
b12_48 =(buffer[i + 12] == '%');
b12_49 =(buffer[i + 12] == '_');
b12_50 =(buffer[i + 12] == 'h');
b12_51 =(buffer[i + 12] == 'C');
b12_52 =(buffer[i + 12] == 'f');
b12_53 =(buffer[i + 12] == 'O');
b12_54 =(buffer[i + 12] == '7');
b12_55 =(buffer[i + 12] == 'w');
b12_56 =(buffer[i + 12] == '*');
b12_57 =(buffer[i + 12] == 'Q');
b12_58 =(buffer[i + 12] == '5');
b12_59 =(buffer[i + 12] == '>');
b12_60 =(buffer[i + 12] == 'y');
b12_61 =(buffer[i + 12] == '<');
b12_62 =(buffer[i + 12] == 'T');
b12_63 =(buffer[i + 12] == 'G');
b12_64 =(buffer[i + 12] == 'j');
b12_65 =(buffer[i + 12] == 'H');
b12_66 =(buffer[i + 12] == '1');
b12_67 =(buffer[i + 12] == 'z');
b12_68 =(buffer[i + 12] == ']');
b12_69 =(buffer[i + 12] == 'L');
b12_70 =(buffer[i + 12] == '-');
b12_71 =(buffer[i + 12] == '(');
b13_1 =(buffer[i + 13] == ' ');
b13_2 =(buffer[i + 13] == '0');
b13_3 =(buffer[i + 13] == 'h');
b13_4 =(buffer[i + 13] == 'r');
b13_5 =(buffer[i + 13] == 'e');
b13_6 =(buffer[i + 13] == 'p');
b13_7 =(buffer[i + 13] == 'F');
b13_8 =(buffer[i + 13] == '8');
b13_9 =(buffer[i + 13] == '9');
b13_10 =(buffer[i + 13] == 'E');
b13_11 =(buffer[i + 13] == '3');
b13_12 =(buffer[i + 13] == 'D');
b13_13 =(buffer[i + 13] == 'M');
b13_14 =(buffer[i + 13] == '1');
b13_15 =(buffer[i + 13] == 'C');
b13_16 =(buffer[i + 13] == 's');
b13_17 =(buffer[i + 13] == 'A');
b13_18 =(buffer[i + 13] == 'b');
b13_19 =(buffer[i + 13] == 'd');
b13_20 =(buffer[i + 13] == '=');
b13_21 =(buffer[i + 13] == 'm');
b13_22 =(buffer[i + 13] == 'n');
b13_23 =(buffer[i + 13] == 'N');
b13_24 =(buffer[i + 13] == 'J');
b13_25 =(buffer[i + 13] == ',');
b13_26 =(buffer[i + 13] == '|');
b13_27 =(buffer[i + 13] == 'i');
b13_28 =(buffer[i + 13] == 'I');
b13_29 =(buffer[i + 13] == 'W');
b13_30 =(buffer[i + 13] == 'c');
b13_31 =(buffer[i + 13] == '2');
b13_32 =(buffer[i + 13] == 'u');
b13_33 =(buffer[i + 13] == '4');
b13_34 =(buffer[i + 13] == 'B');
b13_35 =(buffer[i + 13] == '~');
b13_36 =(buffer[i + 13] == 'o');
b13_37 =(buffer[i + 13] == 'f');
b13_38 =(buffer[i + 13] == 't');
b13_39 =(buffer[i + 13] == '?');
b13_40 =(buffer[i + 13] == '.');
b13_41 =(buffer[i + 13] == 'l');
b13_42 =(buffer[i + 13] == 'R');
b13_43 =(buffer[i + 13] == 'a');
b13_44 =(buffer[i + 13] == 'O');
b13_45 =(buffer[i + 13] == 'P');
b13_46 =(buffer[i + 13] == 'Y');
b13_47 =(buffer[i + 13] == 'y');
b13_48 =(buffer[i + 13] == 'v');
b13_49 =(buffer[i + 13] == '*');
b13_50 =(buffer[i + 13] == 'x');
b13_51 =(buffer[i + 13] == '5');
b13_52 =(buffer[i + 13] == '/');
b13_53 =(buffer[i + 13] == 'g');
b13_54 =(buffer[i + 13] == 'K');
b13_55 =(buffer[i + 13] == '-');
b13_56 =(buffer[i + 13] == 'q');
b13_57 =(buffer[i + 13] == '@');
b13_58 =(buffer[i + 13] == '_');
b13_59 =(buffer[i + 13] == 'U');
b13_60 =(buffer[i + 13] == 'w');
b13_61 =(buffer[i + 13] == 'j');
b13_62 =(buffer[i + 13] == 'k');
b13_63 =(buffer[i + 13] == 'S');
b13_64 =(buffer[i + 13] == '6');
b13_65 =(buffer[i + 13] == '%');
b13_66 =(buffer[i + 13] == '(');
b13_67 =(buffer[i + 13] == '>');
b13_68 =(buffer[i + 13] == '7');
b13_69 =(buffer[i + 13] == '<');
b13_70 =(buffer[i + 13] == ':');
b13_71 =(buffer[i + 13] == '&');
b13_72 =(buffer[i + 13] == 'H');
b13_73 =(buffer[i + 13] == 'T');
b13_74 =(buffer[i + 13] == 'L');
b14_1 =(buffer[i + 14] == '0');
b14_2 =(buffer[i + 14] == '|');
b14_3 =(buffer[i + 14] == ' ');
b14_4 =(buffer[i + 14] == 'v');
b14_5 =(buffer[i + 14] == 's');
b14_6 =(buffer[i + 14] == 'F');
b14_7 =(buffer[i + 14] == 'B');
b14_8 =(buffer[i + 14] == '8');
b14_9 =(buffer[i + 14] == '9');
b14_10 =(buffer[i + 14] == 'A');
b14_11 =(buffer[i + 14] == '6');
b14_12 =(buffer[i + 14] == 'm');
b14_13 =(buffer[i + 14] == '4');
b14_14 =(buffer[i + 14] == 'D');
b14_15 =(buffer[i + 14] == 'C');
b14_16 =(buffer[i + 14] == '5');
b14_17 =(buffer[i + 14] == 'e');
b14_18 =(buffer[i + 14] == 'l');
b14_19 =(buffer[i + 14] == '=');
b14_20 =(buffer[i + 14] == 'a');
b14_21 =(buffer[i + 14] == 'o');
b14_22 =(buffer[i + 14] == 'O');
b14_23 =(buffer[i + 14] == 'E');
b14_24 =(buffer[i + 14] == 'i');
b14_25 =(buffer[i + 14] == 't');
b14_26 =(buffer[i + 14] == '@');
b14_27 =(buffer[i + 14] == '2');
b14_28 =(buffer[i + 14] == 'n');
b14_29 =(buffer[i + 14] == 'S');
b14_30 =(buffer[i + 14] == '1');
b14_31 =(buffer[i + 14] == 'I');
b14_32 =(buffer[i + 14] == '7');
b14_33 =(buffer[i + 14] == '3');
b14_34 =(buffer[i + 14] == '.');
b14_35 =(buffer[i + 14] == 'r');
b14_36 =(buffer[i + 14] == 'p');
b14_37 =(buffer[i + 14] == 'h');
b14_38 =(buffer[i + 14] == 'c');
b14_39 =(buffer[i + 14] == 'w');
b14_40 =(buffer[i + 14] == '?');
b14_41 =(buffer[i + 14] == 'g');
b14_42 =(buffer[i + 14] == 'x');
b14_43 =(buffer[i + 14] == 'N');
b14_44 =(buffer[i + 14] == 'T');
b14_45 =(buffer[i + 14] == 'G');
b14_46 =(buffer[i + 14] == 'M');
b14_47 =(buffer[i + 14] == 'f');
b14_48 =(buffer[i + 14] == '_');
b14_49 =(buffer[i + 14] == '/');
b14_50 =(buffer[i + 14] == 'k');
b14_51 =(buffer[i + 14] == 'd');
b14_52 =(buffer[i + 14] == 'b');
b14_53 =(buffer[i + 14] == ']');
b14_54 =(buffer[i + 14] == '-');
b14_55 =(buffer[i + 14] == 'u');
b14_56 =(buffer[i + 14] == 'Q');
b14_57 =(buffer[i + 14] == 'y');
b14_58 =(buffer[i + 14] == 'R');
b14_59 =(buffer[i + 14] == 'P');
b14_60 =(buffer[i + 14] == 'L');
b14_61 =(buffer[i + 14] == '(');
b14_62 =(buffer[i + 14] == 'z');
b14_63 =(buffer[i + 14] == 'j');
b14_64 =(buffer[i + 14] == ':');
b14_65 =(buffer[i + 14] == 'H');
b14_66 =(buffer[i + 14] == 'K');
b15_1 =(buffer[i + 15] == '0');
b15_2 =(buffer[i + 15] == 'I');
b15_3 =(buffer[i + 15] == 'e');
b15_4 =(buffer[i + 15] == ' ');
b15_5 =(buffer[i + 15] == 'p');
b15_6 =(buffer[i + 15] == '3');
b15_7 =(buffer[i + 15] == '|');
b15_8 =(buffer[i + 15] == 'D');
b15_9 =(buffer[i + 15] == '2');
b15_10 =(buffer[i + 15] == '9');
b15_11 =(buffer[i + 15] == 'C');
b15_12 =(buffer[i + 15] == 'E');
b15_13 =(buffer[i + 15] == '8');
b15_14 =(buffer[i + 15] == '-');
b15_15 =(buffer[i + 15] == 'l');
b15_16 =(buffer[i + 15] == 'f');
b15_17 =(buffer[i + 15] == '=');
b15_18 =(buffer[i + 15] == 'd');
b15_19 =(buffer[i + 15] == 'P');
b15_20 =(buffer[i + 15] == 'm');
b15_21 =(buffer[i + 15] == 'w');
b15_22 =(buffer[i + 15] == 'c');
b15_23 =(buffer[i + 15] == 'T');
b15_24 =(buffer[i + 15] == 'A');
b15_25 =(buffer[i + 15] == 't');
b15_26 =(buffer[i + 15] == '!');
b15_27 =(buffer[i + 15] == '1');
b15_28 =(buffer[i + 15] == '`');
b15_29 =(buffer[i + 15] == '7');
b15_30 =(buffer[i + 15] == 'o');
b15_31 =(buffer[i + 15] == 'r');
b15_32 =(buffer[i + 15] == 's');
b15_33 =(buffer[i + 15] == 'a');
b15_34 =(buffer[i + 15] == 'v');
b15_35 =(buffer[i + 15] == 'i');
b15_36 =(buffer[i + 15] == '.');
b15_37 =(buffer[i + 15] == 'x');
b15_38 =(buffer[i + 15] == '/');
b15_39 =(buffer[i + 15] == 'S');
b15_40 =(buffer[i + 15] == 'g');
b15_41 =(buffer[i + 15] == 'n');
b15_42 =(buffer[i + 15] == 'y');
b15_43 =(buffer[i + 15] == 'K');
b15_44 =(buffer[i + 15] == 'h');
b15_45 =(buffer[i + 15] == 'F');
b15_46 =(buffer[i + 15] == 'J');
b15_47 =(buffer[i + 15] == 'W');
b15_48 =(buffer[i + 15] == '_');
b15_49 =(buffer[i + 15] == 'q');
b15_50 =(buffer[i + 15] == 'u');
b15_51 =(buffer[i + 15] == 'H');
b15_52 =(buffer[i + 15] == 'b');
b15_53 =(buffer[i + 15] == 'Q');
b15_54 =(buffer[i + 15] == '?');
b15_55 =(buffer[i + 15] == 'R');
b15_56 =(buffer[i + 15] == 'O');
b15_57 =(buffer[i + 15] == 'M');
b15_58 =(buffer[i + 15] == 'Y');
b15_59 =(buffer[i + 15] == ',');
b15_60 =(buffer[i + 15] == '$');
b15_61 =(buffer[i + 15] == ':');
b15_62 =(buffer[i + 15] == 'B');
b15_63 =(buffer[i + 15] == 'k');
b15_64 =(buffer[i + 15] == 'U');
b15_65 =(buffer[i + 15] == '<');
b15_66 =(buffer[i + 15] == 'N');
b15_67 =(buffer[i + 15] == '&');
b15_68 =(buffer[i + 15] == 'z');
b15_69 =(buffer[i + 15] == '*');
b15_70 =(buffer[i + 15] == 'Z');
b15_71 =(buffer[i + 15] == '5');
b15_72 =(buffer[i + 15] == '%');
b15_73 =(buffer[i + 15] == '4');
b15_74 =(buffer[i + 15] == '6');
b15_75 =(buffer[i + 15] == 'j');
b16_1 =(buffer[i + 16] == ' ');
b16_2 =(buffer[i + 16] == 's');
b16_3 =(buffer[i + 16] == 'r');
b16_4 =(buffer[i + 16] == '0');
b16_5 =(buffer[i + 16] == 'a');
b16_6 =(buffer[i + 16] == 'F');
b16_7 =(buffer[i + 16] == '1');
b16_8 =(buffer[i + 16] == 'l');
b16_9 =(buffer[i + 16] == '8');
b16_10 =(buffer[i + 16] == '9');
b16_11 =(buffer[i + 16] == '/');
b16_12 =(buffer[i + 16] == 'K');
b16_13 =(buffer[i + 16] == '4');
b16_14 =(buffer[i + 16] == '3');
b16_15 =(buffer[i + 16] == '|');
b16_16 =(buffer[i + 16] == 'p');
b16_17 =(buffer[i + 16] == 'C');
b16_18 =(buffer[i + 16] == 'g');
b16_19 =(buffer[i + 16] == 'Q');
b16_20 =(buffer[i + 16] == 'E');
b16_21 =(buffer[i + 16] == 'A');
b16_22 =(buffer[i + 16] == 'n');
b16_23 =(buffer[i + 16] == 'd');
b16_24 =(buffer[i + 16] == 'i');
b16_25 =(buffer[i + 16] == 'c');
b16_26 =(buffer[i + 16] == 'L');
b16_27 =(buffer[i + 16] == '2');
b16_28 =(buffer[i + 16] == 'P');
b16_29 =(buffer[i + 16] == 'e');
b16_30 =(buffer[i + 16] == 'o');
b16_31 =(buffer[i + 16] == 'M');
b16_32 =(buffer[i + 16] == '.');
b16_33 =(buffer[i + 16] == 'U');
b16_34 =(buffer[i + 16] == 'S');
b16_35 =(buffer[i + 16] == 'T');
b16_36 =(buffer[i + 16] == 'N');
b16_37 =(buffer[i + 16] == '_');
b16_38 =(buffer[i + 16] == 'I');
b16_39 =(buffer[i + 16] == 'm');
b16_40 =(buffer[i + 16] == 'u');
b16_41 =(buffer[i + 16] == 'h');
b16_42 =(buffer[i + 16] == '*');
b16_43 =(buffer[i + 16] == 'x');
b16_44 =(buffer[i + 16] == 't');
b16_45 =(buffer[i + 16] == 'q');
b16_46 =(buffer[i + 16] == 'f');
b16_47 =(buffer[i + 16] == '?');
b16_48 =(buffer[i + 16] == '7');
b16_49 =(buffer[i + 16] == 'j');
b16_50 =(buffer[i + 16] == '-');
b16_51 =(buffer[i + 16] == '6');
b16_52 =(buffer[i + 16] == '=');
b16_53 =(buffer[i + 16] == 'D');
b16_54 =(buffer[i + 16] == 'b');
b16_55 =(buffer[i + 16] == 'y');
b16_56 =(buffer[i + 16] == 'W');
b16_57 =(buffer[i + 16] == 'k');
b16_58 =(buffer[i + 16] == 'v');
b16_59 =(buffer[i + 16] == '%');
b16_60 =(buffer[i + 16] == 'H');
b16_61 =(buffer[i + 16] == '$');
b16_62 =(buffer[i + 16] == 'B');
b16_63 =(buffer[i + 16] == 'R');
b16_64 =(buffer[i + 16] == 'O');
b16_65 =(buffer[i + 16] == 'Y');
b16_66 =(buffer[i + 16] == '(');
b16_67 =(buffer[i + 16] == '5');
b16_68 =(buffer[i + 16] == ':');
b16_69 =(buffer[i + 16] == '&');
b16_70 =(buffer[i + 16] == ')');
b17_1 =(buffer[i + 17] == '0');
b17_2 =(buffer[i + 17] == ' ');
b17_3 =(buffer[i + 17] == '1');
b17_4 =(buffer[i + 17] == 'c');
b17_5 =(buffer[i + 17] == 'F');
b17_6 =(buffer[i + 17] == '8');
b17_7 =(buffer[i + 17] == '3');
b17_8 =(buffer[i + 17] == '|');
b17_9 =(buffer[i + 17] == '2');
b17_10 =(buffer[i + 17] == 'a');
b17_11 =(buffer[i + 17] == '6');
b17_12 =(buffer[i + 17] == 'D');
b17_13 =(buffer[i + 17] == 'b');
b17_14 =(buffer[i + 17] == 'B');
b17_15 =(buffer[i + 17] == '9');
b17_16 =(buffer[i + 17] == 'C');
b17_17 =(buffer[i + 17] == 'V');
b17_18 =(buffer[i + 17] == 'r');
b17_19 =(buffer[i + 17] == '5');
b17_20 =(buffer[i + 17] == 'S');
b17_21 =(buffer[i + 17] == 'h');
b17_22 =(buffer[i + 17] == 'R');
b17_23 =(buffer[i + 17] == 'E');
b17_24 =(buffer[i + 17] == 'A');
b17_25 =(buffer[i + 17] == 'm');
b17_26 =(buffer[i + 17] == 'l');
b17_27 =(buffer[i + 17] == 'o');
b17_28 =(buffer[i + 17] == '/');
b17_29 =(buffer[i + 17] == 'e');
b17_30 =(buffer[i + 17] == 'q');
b17_31 =(buffer[i + 17] == '4');
b17_32 =(buffer[i + 17] == ',');
b17_33 =(buffer[i + 17] == 'g');
b17_34 =(buffer[i + 17] == 'p');
b17_35 =(buffer[i + 17] == 'u');
b17_36 =(buffer[i + 17] == 's');
b17_37 =(buffer[i + 17] == 't');
b17_38 =(buffer[i + 17] == '.');
b17_39 =(buffer[i + 17] == 'f');
b17_40 =(buffer[i + 17] == 'x');
b17_41 =(buffer[i + 17] == 'N');
b17_42 =(buffer[i + 17] == 'I');
b17_43 =(buffer[i + 17] == 'T');
b17_44 =(buffer[i + 17] == 'i');
b17_45 =(buffer[i + 17] == 'L');
b17_46 =(buffer[i + 17] == 'w');
b17_47 =(buffer[i + 17] == 'd');
b17_48 =(buffer[i + 17] == 'J');
b17_49 =(buffer[i + 17] == 'n');
b17_50 =(buffer[i + 17] == 'M');
b17_51 =(buffer[i + 17] == 'y');
b17_52 =(buffer[i + 17] == '?');
b17_53 =(buffer[i + 17] == '_');
b17_54 =(buffer[i + 17] == 'v');
b17_55 =(buffer[i + 17] == '=');
b17_56 =(buffer[i + 17] == 'P');
b17_57 =(buffer[i + 17] == 'k');
b17_58 =(buffer[i + 17] == 'Y');
b17_59 =(buffer[i + 17] == 'z');
b17_60 =(buffer[i + 17] == 'X');
b17_61 =(buffer[i + 17] == 'K');
b17_62 =(buffer[i + 17] == '7');
b17_63 =(buffer[i + 17] == 'O');
b17_64 =(buffer[i + 17] == 'j');
b17_65 =(buffer[i + 17] == '*');
b17_66 =(buffer[i + 17] == ':');
b17_67 =(buffer[i + 17] == '-');
b17_68 =(buffer[i + 17] == '&');
b17_69 =(buffer[i + 17] == 'Q');
b17_70 =(buffer[i + 17] == 'U');
b18_1 =(buffer[i + 18] == '0');
b18_2 =(buffer[i + 18] == 'O');
b18_3 =(buffer[i + 18] == ' ');
b18_4 =(buffer[i + 18] == 'e');
b18_5 =(buffer[i + 18] == 'F');
b18_6 =(buffer[i + 18] == '5');
b18_7 =(buffer[i + 18] == 'C');
b18_8 =(buffer[i + 18] == '|');
b18_9 =(buffer[i + 18] == 't');
b18_10 =(buffer[i + 18] == 'i');
b18_11 =(buffer[i + 18] == 'n');
b18_12 =(buffer[i + 18] == '3');
b18_13 =(buffer[i + 18] == '9');
b18_14 =(buffer[i + 18] == '8');
b18_15 =(buffer[i + 18] == 'o');
b18_16 =(buffer[i + 18] == 'S');
b18_17 =(buffer[i + 18] == 'E');
b18_18 =(buffer[i + 18] == '.');
b18_19 =(buffer[i + 18] == 'p');
b18_20 =(buffer[i + 18] == 'd');
b18_21 =(buffer[i + 18] == 'Y');
b18_22 =(buffer[i + 18] == 'r');
b18_23 =(buffer[i + 18] == 'u');
b18_24 =(buffer[i + 18] == '1');
b18_25 =(buffer[i + 18] == '2');
b18_26 =(buffer[i + 18] == '@');
b18_27 =(buffer[i + 18] == '7');
b18_28 =(buffer[i + 18] == '/');
b18_29 =(buffer[i + 18] == 's');
b18_30 =(buffer[i + 18] == 'x');
b18_31 =(buffer[i + 18] == 'c');
b18_32 =(buffer[i + 18] == 'a');
b18_33 =(buffer[i + 18] == 'm');
b18_34 =(buffer[i + 18] == 'v');
b18_35 =(buffer[i + 18] == 'A');
b18_36 =(buffer[i + 18] == 'l');
b18_37 =(buffer[i + 18] == 'h');
b18_38 =(buffer[i + 18] == 'b');
b18_39 =(buffer[i + 18] == '*');
b18_40 =(buffer[i + 18] == 'w');
b18_41 =(buffer[i + 18] == 'g');
b18_42 =(buffer[i + 18] == 'D');
b18_43 =(buffer[i + 18] == 'P');
b18_44 =(buffer[i + 18] == '_');
b18_45 =(buffer[i + 18] == 'I');
b18_46 =(buffer[i + 18] == 'k');
b18_47 =(buffer[i + 18] == '[');
b18_48 =(buffer[i + 18] == '?');
b18_49 =(buffer[i + 18] == '`');
b18_50 =(buffer[i + 18] == 'B');
b18_51 =(buffer[i + 18] == 'T');
b18_52 =(buffer[i + 18] == 'G');
b18_53 =(buffer[i + 18] == 'j');
b18_54 =(buffer[i + 18] == 'R');
b18_55 =(buffer[i + 18] == '-');
b18_56 =(buffer[i + 18] == 'f');
b18_57 =(buffer[i + 18] == 'y');
b18_58 =(buffer[i + 18] == '4');
b18_59 =(buffer[i + 18] == ':');
b18_60 =(buffer[i + 18] == '=');
b18_61 =(buffer[i + 18] == 'W');
b18_62 =(buffer[i + 18] == '<');
b18_63 =(buffer[i + 18] == 'U');
b18_64 =(buffer[i + 18] == 'z');
b18_65 =(buffer[i + 18] == '6');
b18_66 =(buffer[i + 18] == 'H');
b18_67 =(buffer[i + 18] == 'M');
b18_68 =(buffer[i + 18] == 'L');
b18_69 =(buffer[i + 18] == 'N');
b19_1 =(buffer[i + 19] == ' ');
b19_2 =(buffer[i + 19] == 'p');
b19_3 =(buffer[i + 19] == '0');
b19_4 =(buffer[i + 19] == 'f');
b19_5 =(buffer[i + 19] == 'F');
b19_6 =(buffer[i + 19] == '|');
b19_7 =(buffer[i + 19] == '8');
b19_8 =(buffer[i + 19] == '9');
b19_9 =(buffer[i + 19] == 'e');
b19_10 =(buffer[i + 19] == 'Q');
b19_11 =(buffer[i + 19] == '~');
b19_12 =(buffer[i + 19] == 'n');
b19_13 =(buffer[i + 19] == 'A');
b19_14 =(buffer[i + 19] == 'E');
b19_15 =(buffer[i + 19] == 'B');
b19_16 =(buffer[i + 19] == '4');
b19_17 =(buffer[i + 19] == 'g');
b19_18 =(buffer[i + 19] == '1');
b19_19 =(buffer[i + 19] == 'j');
b19_20 =(buffer[i + 19] == 'T');
b19_21 =(buffer[i + 19] == 'r');
b19_22 =(buffer[i + 19] == 'i');
b19_23 =(buffer[i + 19] == 'b');
b19_24 =(buffer[i + 19] == '3');
b19_25 =(buffer[i + 19] == 'm');
b19_26 =(buffer[i + 19] == '2');
b19_27 =(buffer[i + 19] == 'C');
b19_28 =(buffer[i + 19] == 'u');
b19_29 =(buffer[i + 19] == 'P');
b19_30 =(buffer[i + 19] == 'R');
b19_31 =(buffer[i + 19] == 'o');
b19_32 =(buffer[i + 19] == 'l');
b19_33 =(buffer[i + 19] == '=');
b19_34 =(buffer[i + 19] == 't');
b19_35 =(buffer[i + 19] == 'a');
b19_36 =(buffer[i + 19] == 'N');
b19_37 =(buffer[i + 19] == 'S');
b19_38 =(buffer[i + 19] == 'h');
b19_39 =(buffer[i + 19] == 'x');
b19_40 =(buffer[i + 19] == 'c');
b19_41 =(buffer[i + 19] == 's');
b19_42 =(buffer[i + 19] == 'd');
b19_43 =(buffer[i + 19] == '/');
b19_44 =(buffer[i + 19] == '.');
b19_45 =(buffer[i + 19] == 'y');
b19_46 =(buffer[i + 19] == '_');
b19_47 =(buffer[i + 19] == 'k');
b19_48 =(buffer[i + 19] == 'w');
b19_49 =(buffer[i + 19] == '-');
b19_50 =(buffer[i + 19] == 'D');
b19_51 =(buffer[i + 19] == 'v');
b19_52 =(buffer[i + 19] == 'q');
b19_53 =(buffer[i + 19] == '%');
b19_54 =(buffer[i + 19] == '6');
b19_55 =(buffer[i + 19] == ',');
b19_56 =(buffer[i + 19] == 'I');
b19_57 =(buffer[i + 19] == '>');
b19_58 =(buffer[i + 19] == 'M');
b19_59 =(buffer[i + 19] == '5');
b19_60 =(buffer[i + 19] == '?');
b19_61 =(buffer[i + 19] == 'O');
b19_62 =(buffer[i + 19] == 'z');
b19_63 =(buffer[i + 19] == 'K');
b20_1 =(buffer[i + 20] == '0');
b20_2 =(buffer[i + 20] == 'e');
b20_3 =(buffer[i + 20] == 'o');
b20_4 =(buffer[i + 20] == 'F');
b20_5 =(buffer[i + 20] == '1');
b20_6 =(buffer[i + 20] == 'C');
b20_7 =(buffer[i + 20] == '9');
b20_8 =(buffer[i + 20] == ' ');
b20_9 =(buffer[i + 20] == '|');
b20_10 =(buffer[i + 20] == '.');
b20_11 =(buffer[i + 20] == '<');
b20_12 =(buffer[i + 20] == '5');
b20_13 =(buffer[i + 20] == '/');
b20_14 =(buffer[i + 20] == 'E');
b20_15 =(buffer[i + 20] == 'B');
b20_16 =(buffer[i + 20] == '8');
b20_17 =(buffer[i + 20] == 'r');
b20_18 =(buffer[i + 20] == '6');
b20_19 =(buffer[i + 20] == '7');
b20_20 =(buffer[i + 20] == 'k');
b20_21 =(buffer[i + 20] == 'U');
b20_22 =(buffer[i + 20] == 'A');
b20_23 =(buffer[i + 20] == 'z');
b20_24 =(buffer[i + 20] == 'a');
b20_25 =(buffer[i + 20] == 'c');
b20_26 =(buffer[i + 20] == '=');
b20_27 =(buffer[i + 20] == 'i');
b20_28 =(buffer[i + 20] == 't');
b20_29 =(buffer[i + 20] == '2');
b20_30 =(buffer[i + 20] == 's');
b20_31 =(buffer[i + 20] == 'g');
b20_32 =(buffer[i + 20] == 'd');
b20_33 =(buffer[i + 20] == 'm');
b20_34 =(buffer[i + 20] == 'p');
b20_35 =(buffer[i + 20] == 'u');
b20_36 =(buffer[i + 20] == 'N');
b20_37 =(buffer[i + 20] == 'l');
b20_38 =(buffer[i + 20] == 'S');
b20_39 =(buffer[i + 20] == 'W');
b20_40 =(buffer[i + 20] == 'O');
b20_41 =(buffer[i + 20] == 'n');
b20_42 =(buffer[i + 20] == 'R');
b20_43 =(buffer[i + 20] == 'x');
b20_44 =(buffer[i + 20] == 'f');
b20_45 =(buffer[i + 20] == 'w');
b20_46 =(buffer[i + 20] == 'v');
b20_47 =(buffer[i + 20] == 'b');
b20_48 =(buffer[i + 20] == 'h');
b20_49 =(buffer[i + 20] == 'y');
b20_50 =(buffer[i + 20] == 'q');
b20_51 =(buffer[i + 20] == '3');
b20_52 =(buffer[i + 20] == '_');
b20_53 =(buffer[i + 20] == 'M');
b20_54 =(buffer[i + 20] == '4');
b20_55 =(buffer[i + 20] == ':');
b20_56 =(buffer[i + 20] == 'D');
b20_57 =(buffer[i + 20] == 'J');
b20_58 =(buffer[i + 20] == 'P');
b20_59 =(buffer[i + 20] == 'j');
b20_60 =(buffer[i + 20] == '?');
b20_61 =(buffer[i + 20] == 'H');
b20_62 =(buffer[i + 20] == '-');
b20_63 =(buffer[i + 20] == 'T');
b20_64 =(buffer[i + 20] == 'Z');
b20_65 =(buffer[i + 20] == '(');
b20_66 =(buffer[i + 20] == '>');
b20_67 =(buffer[i + 20] == '&');
b21_1 =(buffer[i + 21] == '0');
b21_2 =(buffer[i + 21] == 'n');
b21_3 =(buffer[i + 21] == ' ');
b21_4 =(buffer[i + 21] == '|');
b21_5 =(buffer[i + 21] == 'r');
b21_6 =(buffer[i + 21] == '8');
b21_7 =(buffer[i + 21] == 'h');
b21_8 =(buffer[i + 21] == 'F');
b21_9 =(buffer[i + 21] == '1');
b21_10 =(buffer[i + 21] == 's');
b21_11 =(buffer[i + 21] == 'M');
b21_12 =(buffer[i + 21] == 'K');
b21_13 =(buffer[i + 21] == '9');
b21_14 =(buffer[i + 21] == 'a');
b21_15 =(buffer[i + 21] == 'l');
b21_16 =(buffer[i + 21] == 'V');
b21_17 =(buffer[i + 21] == 'E');
b21_18 =(buffer[i + 21] == '.');
b21_19 =(buffer[i + 21] == 'm');
b21_20 =(buffer[i + 21] == 'd');
b21_21 =(buffer[i + 21] == 'o');
b21_22 =(buffer[i + 21] == '%');
b21_23 =(buffer[i + 21] == '4');
b21_24 =(buffer[i + 21] == '/');
b21_25 =(buffer[i + 21] == 'R');
b21_26 =(buffer[i + 21] == 'b');
b21_27 =(buffer[i + 21] == 'i');
b21_28 =(buffer[i + 21] == 'A');
b21_29 =(buffer[i + 21] == 'e');
b21_30 =(buffer[i + 21] == 'u');
b21_31 =(buffer[i + 21] == '_');
b21_32 =(buffer[i + 21] == 'O');
b21_33 =(buffer[i + 21] == 'U');
b21_34 =(buffer[i + 21] == 'f');
b21_35 =(buffer[i + 21] == 'c');
b21_36 =(buffer[i + 21] == 't');
b21_37 =(buffer[i + 21] == 'y');
b21_38 =(buffer[i + 21] == 'g');
b21_39 =(buffer[i + 21] == 'B');
b21_40 =(buffer[i + 21] == 'S');
b21_41 =(buffer[i + 21] == '2');
b21_42 =(buffer[i + 21] == 'p');
b21_43 =(buffer[i + 21] == 'N');
b21_44 =(buffer[i + 21] == 'x');
b21_45 =(buffer[i + 21] == 'C');
b21_46 =(buffer[i + 21] == '?');
b21_47 =(buffer[i + 21] == '3');
b21_48 =(buffer[i + 21] == 'w');
b21_49 =(buffer[i + 21] == 'q');
b21_50 =(buffer[i + 21] == 'v');
b21_51 =(buffer[i + 21] == 'z');
b21_52 =(buffer[i + 21] == 'k');
b21_53 =(buffer[i + 21] == '=');
b21_54 =(buffer[i + 21] == '5');
b21_55 =(buffer[i + 21] == '-');
b21_56 =(buffer[i + 21] == ',');
b21_57 =(buffer[i + 21] == 'I');
b21_58 =(buffer[i + 21] == 'T');
b21_59 =(buffer[i + 21] == 'D');
b21_60 =(buffer[i + 21] == 'P');
b21_61 =(buffer[i + 21] == '7');
b21_62 =(buffer[i + 21] == 'Y');
b21_63 =(buffer[i + 21] == '$');
b22_1 =(buffer[i + 22] == '|');
b22_2 =(buffer[i + 22] == '0');
b22_3 =(buffer[i + 22] == 't');
b22_4 =(buffer[i + 22] == '/');
b22_5 =(buffer[i + 22] == 'C');
b22_6 =(buffer[i + 22] == 'F');
b22_7 =(buffer[i + 22] == '9');
b22_8 =(buffer[i + 22] == '8');
b22_9 =(buffer[i + 22] == 'E');
b22_10 =(buffer[i + 22] == '2');
b22_11 =(buffer[i + 22] == 'h');
b22_12 =(buffer[i + 22] == '>');
b22_13 =(buffer[i + 22] == ' ');
b22_14 =(buffer[i + 22] == 'm');
b22_15 =(buffer[i + 22] == '1');
b22_16 =(buffer[i + 22] == 'W');
b22_17 =(buffer[i + 22] == 'A');
b22_18 =(buffer[i + 22] == 'd');
b22_19 =(buffer[i + 22] == 'e');
b22_20 =(buffer[i + 22] == 'n');
b22_21 =(buffer[i + 22] == '3');
b22_22 =(buffer[i + 22] == 's');
b22_23 =(buffer[i + 22] == 'O');
b22_24 =(buffer[i + 22] == 'G');
b22_25 =(buffer[i + 22] == 'b');
b22_26 =(buffer[i + 22] == '\'');
b22_27 =(buffer[i + 22] == 'i');
b22_28 =(buffer[i + 22] == 'l');
b22_29 =(buffer[i + 22] == 'M');
b22_30 =(buffer[i + 22] == 'x');
b22_31 =(buffer[i + 22] == 'a');
b22_32 =(buffer[i + 22] == 'R');
b22_33 =(buffer[i + 22] == 'y');
b22_34 =(buffer[i + 22] == 'r');
b22_35 =(buffer[i + 22] == 'S');
b22_36 =(buffer[i + 22] == 'k');
b22_37 =(buffer[i + 22] == '.');
b22_38 =(buffer[i + 22] == 'u');
b22_39 =(buffer[i + 22] == 'c');
b22_40 =(buffer[i + 22] == 'p');
b22_41 =(buffer[i + 22] == 'g');
b22_42 =(buffer[i + 22] == 'v');
b22_43 =(buffer[i + 22] == '_');
b22_44 =(buffer[i + 22] == '7');
b22_45 =(buffer[i + 22] == 'o');
b22_46 =(buffer[i + 22] == '?');
b22_47 =(buffer[i + 22] == 'B');
b22_48 =(buffer[i + 22] == 'w');
b22_49 =(buffer[i + 22] == 'D');
b22_50 =(buffer[i + 22] == 'f');
b22_51 =(buffer[i + 22] == 'q');
b22_52 =(buffer[i + 22] == '-');
b22_53 =(buffer[i + 22] == 'P');
b22_54 =(buffer[i + 22] == 'I');
b22_55 =(buffer[i + 22] == 'Z');
b22_56 =(buffer[i + 22] == '5');
b22_57 =(buffer[i + 22] == '=');
b22_58 =(buffer[i + 22] == '&');
b22_59 =(buffer[i + 22] == ':');
b22_60 =(buffer[i + 22] == '4');
b22_61 =(buffer[i + 22] == 'Y');
b22_62 =(buffer[i + 22] == 'H');
b22_63 =(buffer[i + 22] == '6');
b22_64 =(buffer[i + 22] == 'U');
b23_1 =(buffer[i + 23] == 'D');
b23_2 =(buffer[i + 23] == '0');
b23_3 =(buffer[i + 23] == 'h');
b23_4 =(buffer[i + 23] == 'b');
b23_5 =(buffer[i + 23] == '9');
b23_6 =(buffer[i + 23] == 'u');
b23_7 =(buffer[i + 23] == '|');
b23_8 =(buffer[i + 23] == ' ');
b23_9 =(buffer[i + 23] == 'm');
b23_10 =(buffer[i + 23] == 'A');
b23_11 =(buffer[i + 23] == 'B');
b23_12 =(buffer[i + 23] == '1');
b23_13 =(buffer[i + 23] == '8');
b23_14 =(buffer[i + 23] == 'F');
b23_15 =(buffer[i + 23] == '7');
b23_16 =(buffer[i + 23] == 'n');
b23_17 =(buffer[i + 23] == 'E');
b23_18 =(buffer[i + 23] == 'e');
b23_19 =(buffer[i + 23] == 'i');
b23_20 =(buffer[i + 23] == '4');
b23_21 =(buffer[i + 23] == '2');
b23_22 =(buffer[i + 23] == '6');
b23_23 =(buffer[i + 23] == '3');
b23_24 =(buffer[i + 23] == 's');
b23_25 =(buffer[i + 23] == 'l');
b23_26 =(buffer[i + 23] == 'd');
b23_27 =(buffer[i + 23] == 'c');
b23_28 =(buffer[i + 23] == 't');
b23_29 =(buffer[i + 23] == 'L');
b23_30 =(buffer[i + 23] == 'C');
b23_31 =(buffer[i + 23] == 'o');
b23_32 =(buffer[i + 23] == 'a');
b23_33 =(buffer[i + 23] == 'H');
b23_34 =(buffer[i + 23] == '.');
b23_35 =(buffer[i + 23] == 'p');
b23_36 =(buffer[i + 23] == 'w');
b23_37 =(buffer[i + 23] == 'x');
b23_38 =(buffer[i + 23] == 'v');
b23_39 =(buffer[i + 23] == '/');
b23_40 =(buffer[i + 23] == '%');
b23_41 =(buffer[i + 23] == 'O');
b23_42 =(buffer[i + 23] == 'P');
b23_43 =(buffer[i + 23] == '-');
b23_44 =(buffer[i + 23] == 'g');
b23_45 =(buffer[i + 23] == '=');
b23_46 =(buffer[i + 23] == 'r');
b23_47 =(buffer[i + 23] == 'S');
b23_48 =(buffer[i + 23] == '@');
b23_49 =(buffer[i + 23] == '_');
b23_50 =(buffer[i + 23] == 'k');
b23_51 =(buffer[i + 23] == 'f');
b23_52 =(buffer[i + 23] == 'y');
b23_53 =(buffer[i + 23] == 'T');
b23_54 =(buffer[i + 23] == ',');
b23_55 =(buffer[i + 23] == '5');
b23_56 =(buffer[i + 23] == 'I');
b23_57 =(buffer[i + 23] == 'R');
b23_58 =(buffer[i + 23] == 'z');
b23_59 =(buffer[i + 23] == '{');
b23_60 =(buffer[i + 23] == '+');
b23_61 =(buffer[i + 23] == 'q');
b23_62 =(buffer[i + 23] == '?');
b23_63 =(buffer[i + 23] == 'U');
b24_1 =(buffer[i + 24] == 'r');
b24_2 =(buffer[i + 24] == ' ');
b24_3 =(buffer[i + 24] == 'e');
b24_4 =(buffer[i + 24] == 'i');
b24_5 =(buffer[i + 24] == 'L');
b24_6 =(buffer[i + 24] == 'N');
b24_7 =(buffer[i + 24] == '9');
b24_8 =(buffer[i + 24] == 'l');
b24_9 =(buffer[i + 24] == '|');
b24_10 =(buffer[i + 24] == '8');
b24_11 =(buffer[i + 24] == 'F');
b24_12 =(buffer[i + 24] == 'C');
b24_13 =(buffer[i + 24] == 'B');
b24_14 =(buffer[i + 24] == '4');
b24_15 =(buffer[i + 24] == '0');
b24_16 =(buffer[i + 24] == '2');
b24_17 =(buffer[i + 24] == 'o');
b24_18 =(buffer[i + 24] == 'E');
b24_19 =(buffer[i + 24] == '3');
b24_20 =(buffer[i + 24] == 'c');
b24_21 =(buffer[i + 24] == 'n');
b24_22 =(buffer[i + 24] == 'a');
b24_23 =(buffer[i + 24] == '/');
b24_24 =(buffer[i + 24] == 's');
b24_25 =(buffer[i + 24] == '.');
b24_26 =(buffer[i + 24] == 'U');
b24_27 =(buffer[i + 24] == 'p');
b24_28 =(buffer[i + 24] == 'm');
b24_29 =(buffer[i + 24] == 'd');
b24_30 =(buffer[i + 24] == 'x');
b24_31 =(buffer[i + 24] == 'h');
b24_32 =(buffer[i + 24] == 't');
b24_33 =(buffer[i + 24] == 'b');
b24_34 =(buffer[i + 24] == 'w');
b24_35 =(buffer[i + 24] == '=');
b24_36 =(buffer[i + 24] == 'R');
b24_37 =(buffer[i + 24] == 'g');
b24_38 =(buffer[i + 24] == 'A');
b24_39 =(buffer[i + 24] == 'H');
b24_40 =(buffer[i + 24] == 'v');
b24_41 =(buffer[i + 24] == 'f');
b24_42 =(buffer[i + 24] == '_');
b24_43 =(buffer[i + 24] == 'u');
b24_44 =(buffer[i + 24] == 'y');
b24_45 =(buffer[i + 24] == '-');
b24_46 =(buffer[i + 24] == '%');
b24_47 =(buffer[i + 24] == 'q');
b24_48 =(buffer[i + 24] == '(');
b24_49 =(buffer[i + 24] == '5');
b24_50 =(buffer[i + 24] == ':');
b24_51 =(buffer[i + 24] == 'k');
b24_52 =(buffer[i + 24] == 'D');
b24_53 =(buffer[i + 24] == 'J');
b24_54 =(buffer[i + 24] == '*');
b24_55 =(buffer[i + 24] == 'M');
b24_56 =(buffer[i + 24] == '>');
b24_57 =(buffer[i + 24] == ',');
b24_58 =(buffer[i + 24] == 'O');
b24_59 =(buffer[i + 24] == 'S');
b24_60 =(buffer[i + 24] == 'I');
b25_1 =(buffer[i + 25] == 'i');
b25_2 =(buffer[i + 25] == '0');
b25_3 =(buffer[i + 25] == 's');
b25_4 =(buffer[i + 25] == 'n');
b25_5 =(buffer[i + 25] == 'C');
b25_6 =(buffer[i + 25] == '|');
b25_7 =(buffer[i + 25] == '8');
b25_8 =(buffer[i + 25] == '2');
b25_9 =(buffer[i + 25] == '?');
b25_10 =(buffer[i + 25] == 'G');
b25_11 =(buffer[i + 25] == '9');
b25_12 =(buffer[i + 25] == 'F');
b25_13 =(buffer[i + 25] == ' ');
b25_14 =(buffer[i + 25] == 'V');
b25_15 =(buffer[i + 25] == '3');
b25_16 =(buffer[i + 25] == '1');
b25_17 =(buffer[i + 25] == 'A');
b25_18 =(buffer[i + 25] == 'p');
b25_19 =(buffer[i + 25] == 'c');
b25_20 =(buffer[i + 25] == '/');
b25_21 =(buffer[i + 25] == 'b');
b25_22 =(buffer[i + 25] == 'a');
b25_23 =(buffer[i + 25] == 'l');
b25_24 =(buffer[i + 25] == 'd');
b25_25 =(buffer[i + 25] == 'g');
b25_26 =(buffer[i + 25] == '\'');
b25_27 =(buffer[i + 25] == 'r');
b25_28 =(buffer[i + 25] == 'h');
b25_29 =(buffer[i + 25] == 'x');
b25_30 =(buffer[i + 25] == 't');
b25_31 =(buffer[i + 25] == '.');
b25_32 =(buffer[i + 25] == 'S');
b25_33 =(buffer[i + 25] == 'e');
b25_34 =(buffer[i + 25] == 'f');
b25_35 =(buffer[i + 25] == 'm');
b25_36 =(buffer[i + 25] == 'o');
b25_37 =(buffer[i + 25] == 'M');
b25_38 =(buffer[i + 25] == 'P');
b25_39 =(buffer[i + 25] == 'D');
b25_40 =(buffer[i + 25] == '=');
b25_41 =(buffer[i + 25] == 'U');
b25_42 =(buffer[i + 25] == 'u');
b25_43 =(buffer[i + 25] == '5');
b25_44 =(buffer[i + 25] == 'v');
b25_45 =(buffer[i + 25] == 'k');
b25_46 =(buffer[i + 25] == '_');
b25_47 =(buffer[i + 25] == 'y');
b25_48 =(buffer[i + 25] == 'w');
b25_49 =(buffer[i + 25] == 'j');
b25_50 =(buffer[i + 25] == '6');
b25_51 =(buffer[i + 25] == ')');
b25_52 =(buffer[i + 25] == 'T');
b25_53 =(buffer[i + 25] == 'W');
b25_54 =(buffer[i + 25] == '-');
b25_55 =(buffer[i + 25] == ':');
b25_56 =(buffer[i + 25] == 'O');
b25_57 =(buffer[i + 25] == 'z');
b25_58 =(buffer[i + 25] == 'R');
b25_59 =(buffer[i + 25] == 'E');
b25_60 =(buffer[i + 25] == '4');
b25_61 =(buffer[i + 25] == 'B');
b25_62 =(buffer[i + 25] == '7');
b25_63 =(buffer[i + 25] == 'q');
b25_64 =(buffer[i + 25] == '&');
b26_1 =(buffer[i + 26] == 'v');
b26_2 =(buffer[i + 26] == '0');
b26_3 =(buffer[i + 26] == 'o');
b26_4 =(buffer[i + 26] == '/');
b26_5 =(buffer[i + 26] == 'D');
b26_6 =(buffer[i + 26] == 'E');
b26_7 =(buffer[i + 26] == '9');
b26_8 =(buffer[i + 26] == ' ');
b26_9 =(buffer[i + 26] == '3');
b26_10 =(buffer[i + 26] == '5');
b26_11 =(buffer[i + 26] == '|');
b26_12 =(buffer[i + 26] == 'F');
b26_13 =(buffer[i + 26] == '2');
b26_14 =(buffer[i + 26] == '8');
b26_15 =(buffer[i + 26] == '1');
b26_16 =(buffer[i + 26] == '4');
b26_17 =(buffer[i + 26] == 'B');
b26_18 =(buffer[i + 26] == 'A');
b26_19 =(buffer[i + 26] == 't');
b26_20 =(buffer[i + 26] == '!');
b26_21 =(buffer[i + 26] == '6');
b26_22 =(buffer[i + 26] == 'b');
b26_23 =(buffer[i + 26] == 'U');
b26_24 =(buffer[i + 26] == 'p');
b26_25 =(buffer[i + 26] == 'e');
b26_26 =(buffer[i + 26] == '.');
b26_27 =(buffer[i + 26] == 's');
b26_28 =(buffer[i + 26] == 'f');
b26_29 =(buffer[i + 26] == 'a');
b26_30 =(buffer[i + 26] == 'c');
b26_31 =(buffer[i + 26] == 'H');
b26_32 =(buffer[i + 26] == 'n');
b26_33 =(buffer[i + 26] == 'm');
b26_34 =(buffer[i + 26] == 'r');
b26_35 =(buffer[i + 26] == 'i');
b26_36 =(buffer[i + 26] == 'd');
b26_37 =(buffer[i + 26] == 'h');
b26_38 =(buffer[i + 26] == 'k');
b26_39 =(buffer[i + 26] == 'g');
b26_40 =(buffer[i + 26] == 'w');
b26_41 =(buffer[i + 26] == 'u');
b26_42 =(buffer[i + 26] == '%');
b26_43 =(buffer[i + 26] == 'y');
b26_44 =(buffer[i + 26] == 'S');
b26_45 =(buffer[i + 26] == 'l');
b26_46 =(buffer[i + 26] == '_');
b26_47 =(buffer[i + 26] == 'q');
b26_48 =(buffer[i + 26] == 'j');
b26_49 =(buffer[i + 26] == 'N');
b26_50 =(buffer[i + 26] == 'z');
b26_51 =(buffer[i + 26] == 'P');
b26_52 =(buffer[i + 26] == 'I');
b26_53 =(buffer[i + 26] == '*');
b26_54 =(buffer[i + 26] == ':');
b26_55 =(buffer[i + 26] == '7');
b26_56 =(buffer[i + 26] == 'G');
b26_57 =(buffer[i + 26] == '&');
b26_58 =(buffer[i + 26] == '?');
b26_59 =(buffer[i + 26] == '-');
b26_60 =(buffer[i + 26] == 'T');
b26_61 =(buffer[i + 26] == 'C');
b26_62 =(buffer[i + 26] == 'x');
b26_63 =(buffer[i + 26] == 'M');
b27_1 =(buffer[i + 27] == 'e');
b27_2 =(buffer[i + 27] == ' ');
b27_3 =(buffer[i + 27] == 'c');
b27_4 =(buffer[i + 27] == 's');
b27_5 =(buffer[i + 27] == 'B');
b27_6 =(buffer[i + 27] == '1');
b27_7 =(buffer[i + 27] == '0');
b27_8 =(buffer[i + 27] == '|');
b27_9 =(buffer[i + 27] == 'F');
b27_10 =(buffer[i + 27] == '/');
b27_11 =(buffer[i + 27] == '5');
b27_12 =(buffer[i + 27] == 'C');
b27_13 =(buffer[i + 27] == '3');
b27_14 =(buffer[i + 27] == '@');
b27_15 =(buffer[i + 27] == 'E');
b27_16 =(buffer[i + 27] == '.');
b27_17 =(buffer[i + 27] == 'd');
b27_18 =(buffer[i + 27] == 'i');
b27_19 =(buffer[i + 27] == 't');
b27_20 =(buffer[i + 27] == 'M');
b27_21 =(buffer[i + 27] == 'p');
b27_22 =(buffer[i + 27] == 'a');
b27_23 =(buffer[i + 27] == 'm');
b27_24 =(buffer[i + 27] == 'f');
b27_25 =(buffer[i + 27] == '8');
b27_26 =(buffer[i + 27] == 'x');
b27_27 =(buffer[i + 27] == '_');
b27_28 =(buffer[i + 27] == 'h');
b27_29 =(buffer[i + 27] == '2');
b27_30 =(buffer[i + 27] == 'w');
b27_31 =(buffer[i + 27] == 'l');
b27_32 =(buffer[i + 27] == 'A');
b27_33 =(buffer[i + 27] == 'r');
b27_34 =(buffer[i + 27] == 'S');
b27_35 =(buffer[i + 27] == 'k');
b27_36 =(buffer[i + 27] == 'o');
b27_37 =(buffer[i + 27] == 'n');
b27_38 =(buffer[i + 27] == '7');
b27_39 =(buffer[i + 27] == 'u');
b27_40 =(buffer[i + 27] == 'g');
b27_41 =(buffer[i + 27] == 'b');
b27_42 =(buffer[i + 27] == 'z');
b27_43 =(buffer[i + 27] == 'v');
b27_44 =(buffer[i + 27] == 'j');
b27_45 =(buffer[i + 27] == '4');
b27_46 =(buffer[i + 27] == '=');
b27_47 =(buffer[i + 27] == '(');
b27_48 =(buffer[i + 27] == '-');
b27_49 =(buffer[i + 27] == 'D');
b27_50 =(buffer[i + 27] == 'J');
b27_51 =(buffer[i + 27] == 'W');
b27_52 =(buffer[i + 27] == 'T');
b27_53 =(buffer[i + 27] == 'R');
b27_54 =(buffer[i + 27] == 'y');
b27_55 =(buffer[i + 27] == ':');
b27_56 =(buffer[i + 27] == 'N');
b27_57 =(buffer[i + 27] == 'U');
b27_58 =(buffer[i + 27] == 'X');
b27_59 =(buffer[i + 27] == '{');
b27_60 =(buffer[i + 27] == 'P');
b28_1 =(buffer[i + 28] == 's');
b28_2 =(buffer[i + 28] == '0');
b28_3 =(buffer[i + 28] == 'k');
b28_4 =(buffer[i + 28] == 'h');
b28_5 =(buffer[i + 28] == '8');
b28_6 =(buffer[i + 28] == '|');
b28_7 =(buffer[i + 28] == 'F');
b28_8 =(buffer[i + 28] == ' ');
b28_9 =(buffer[i + 28] == '2');
b28_10 =(buffer[i + 28] == 'C');
b28_11 =(buffer[i + 28] == 'A');
b28_12 =(buffer[i + 28] == '9');
b28_13 =(buffer[i + 28] == 'b');
b28_14 =(buffer[i + 28] == '?');
b28_15 =(buffer[i + 28] == 'B');
b28_16 =(buffer[i + 28] == 'E');
b28_17 =(buffer[i + 28] == '1');
b28_18 =(buffer[i + 28] == 'i');
b28_19 =(buffer[i + 28] == 'd');
b28_20 =(buffer[i + 28] == '3');
b28_21 =(buffer[i + 28] == 'e');
b28_22 =(buffer[i + 28] == '4');
b28_23 =(buffer[i + 28] == 'n');
b28_24 =(buffer[i + 28] == 'a');
b28_25 =(buffer[i + 28] == 'p');
b28_26 =(buffer[i + 28] == 'l');
b28_27 =(buffer[i + 28] == 'f');
b28_28 =(buffer[i + 28] == 'c');
b28_29 =(buffer[i + 28] == 'm');
b28_30 =(buffer[i + 28] == 't');
b28_31 =(buffer[i + 28] == 'o');
b28_32 =(buffer[i + 28] == '/');
b28_33 =(buffer[i + 28] == 'I');
b28_34 =(buffer[i + 28] == 'r');
b28_35 =(buffer[i + 28] == 'u');
b28_36 =(buffer[i + 28] == '+');
b28_37 =(buffer[i + 28] == '_');
b28_38 =(buffer[i + 28] == 'q');
b28_39 =(buffer[i + 28] == 'g');
b28_40 =(buffer[i + 28] == 'j');
b28_41 =(buffer[i + 28] == 'y');
b28_42 =(buffer[i + 28] == 'v');
b28_43 =(buffer[i + 28] == 'w');
b28_44 =(buffer[i + 28] == 'x');
b28_45 =(buffer[i + 28] == '.');
b28_46 =(buffer[i + 28] == '7');
b28_47 =(buffer[i + 28] == '=');
b28_48 =(buffer[i + 28] == 'z');
b28_49 =(buffer[i + 28] == 'W');
b28_50 =(buffer[i + 28] == 'P');
b28_51 =(buffer[i + 28] == '5');
b28_52 =(buffer[i + 28] == 'O');
b28_53 =(buffer[i + 28] == 'D');
b28_54 =(buffer[i + 28] == '>');
b28_55 =(buffer[i + 28] == ',');
b28_56 =(buffer[i + 28] == ':');
b28_57 =(buffer[i + 28] == 'H');
b28_58 =(buffer[i + 28] == '*');
b28_59 =(buffer[i + 28] == 'M');
b28_60 =(buffer[i + 28] == '6');
b28_61 =(buffer[i + 28] == '(');
b28_62 =(buffer[i + 28] == 'U');
b28_63 =(buffer[i + 28] == 'K');
b28_64 =(buffer[i + 28] == 'S');
b28_65 =(buffer[i + 28] == ')');
b28_66 =(buffer[i + 28] == 'G');
b29_1 =(buffer[i + 29] == '|');
b29_2 =(buffer[i + 29] == '0');
b29_3 =(buffer[i + 29] == 'i');
b29_4 =(buffer[i + 29] == 'L');
b29_5 =(buffer[i + 29] == '2');
b29_6 =(buffer[i + 29] == 'C');
b29_7 =(buffer[i + 29] == ' ');
b29_8 =(buffer[i + 29] == '8');
b29_9 =(buffer[i + 29] == 'B');
b29_10 =(buffer[i + 29] == '1');
b29_11 =(buffer[i + 29] == '9');
b29_12 =(buffer[i + 29] == 'F');
b29_13 =(buffer[i + 29] == 'A');
b29_14 =(buffer[i + 29] == 'D');
b29_15 =(buffer[i + 29] == 'G');
b29_16 =(buffer[i + 29] == 'n');
b29_17 =(buffer[i + 29] == '@');
b29_18 =(buffer[i + 29] == '/');
b29_19 =(buffer[i + 29] == 'r');
b29_20 =(buffer[i + 29] == '3');
b29_21 =(buffer[i + 29] == 'm');
b29_22 =(buffer[i + 29] == 'f');
b29_23 =(buffer[i + 29] == '.');
b29_24 =(buffer[i + 29] == 'p');
b29_25 =(buffer[i + 29] == 't');
b29_26 =(buffer[i + 29] == 'c');
b29_27 =(buffer[i + 29] == 'b');
b29_28 =(buffer[i + 29] == 'y');
b29_29 =(buffer[i + 29] == 'd');
b29_30 =(buffer[i + 29] == 'e');
b29_31 =(buffer[i + 29] == 'J');
b29_32 =(buffer[i + 29] == 'x');
b29_33 =(buffer[i + 29] == 'I');
b29_34 =(buffer[i + 29] == 'o');
b29_35 =(buffer[i + 29] == 's');
b29_36 =(buffer[i + 29] == 'M');
b29_37 =(buffer[i + 29] == 'u');
b29_38 =(buffer[i + 29] == '4');
b29_39 =(buffer[i + 29] == 'j');
b29_40 =(buffer[i + 29] == 'l');
b29_41 =(buffer[i + 29] == 'a');
b29_42 =(buffer[i + 29] == 'q');
b29_43 =(buffer[i + 29] == '_');
b29_44 =(buffer[i + 29] == 'v');
b29_45 =(buffer[i + 29] == 'h');
b29_46 =(buffer[i + 29] == 'g');
b29_47 =(buffer[i + 29] == 'w');
b29_48 =(buffer[i + 29] == '-');
b29_49 =(buffer[i + 29] == '5');
b29_50 =(buffer[i + 29] == 'N');
b29_51 =(buffer[i + 29] == 'W');
b29_52 =(buffer[i + 29] == '*');
b29_53 =(buffer[i + 29] == 'k');
b29_54 =(buffer[i + 29] == '#');
b29_55 =(buffer[i + 29] == 'z');
b29_56 =(buffer[i + 29] == 'P');
b29_57 =(buffer[i + 29] == 'E');
b29_58 =(buffer[i + 29] == '7');
b29_59 =(buffer[i + 29] == '(');
b29_60 =(buffer[i + 29] == 'S');
b29_61 =(buffer[i + 29] == '6');
b29_62 =(buffer[i + 29] == '?');
b30_1 =(buffer[i + 30] == '2');
b30_2 =(buffer[i + 30] == '|');
b30_3 =(buffer[i + 30] == 'n');
b30_4 =(buffer[i + 30] == '^');
b30_5 =(buffer[i + 30] == ' ');
b30_6 =(buffer[i + 30] == '6');
b30_7 =(buffer[i + 30] == '8');
b30_8 =(buffer[i + 30] == '9');
b30_9 =(buffer[i + 30] == '0');
b30_10 =(buffer[i + 30] == '3');
b30_11 =(buffer[i + 30] == 'H');
b30_12 =(buffer[i + 30] == 'c');
b30_13 =(buffer[i + 30] == 'i');
b30_14 =(buffer[i + 30] == '1');
b30_15 =(buffer[i + 30] == 's');
b30_16 =(buffer[i + 30] == 'l');
b30_17 =(buffer[i + 30] == 'o');
b30_18 =(buffer[i + 30] == 'r');
b30_19 =(buffer[i + 30] == 'e');
b30_20 =(buffer[i + 30] == 'u');
b30_21 =(buffer[i + 30] == 'm');
b30_22 =(buffer[i + 30] == '.');
b30_23 =(buffer[i + 30] == '/');
b30_24 =(buffer[i + 30] == 'p');
b30_25 =(buffer[i + 30] == 'V');
b30_26 =(buffer[i + 30] == 'h');
b30_27 =(buffer[i + 30] == 'a');
b30_28 =(buffer[i + 30] == 'F');
b30_29 =(buffer[i + 30] == 'd');
b30_30 =(buffer[i + 30] == 'B');
b30_31 =(buffer[i + 30] == 'A');
b30_32 =(buffer[i + 30] == 'v');
b30_33 =(buffer[i + 30] == '-');
b30_34 =(buffer[i + 30] == 'E');
b30_35 =(buffer[i + 30] == '_');
b30_36 =(buffer[i + 30] == 't');
b30_37 =(buffer[i + 30] == 'j');
b30_38 =(buffer[i + 30] == 'k');
b30_39 =(buffer[i + 30] == 'y');
b30_40 =(buffer[i + 30] == 'f');
b30_41 =(buffer[i + 30] == 'g');
b30_42 =(buffer[i + 30] == 'b');
b30_43 =(buffer[i + 30] == '%');
b30_44 =(buffer[i + 30] == 'D');
b30_45 =(buffer[i + 30] == 'z');
b30_46 =(buffer[i + 30] == 'T');
b30_47 =(buffer[i + 30] == 'S');
b30_48 =(buffer[i + 30] == 'w');
b30_49 =(buffer[i + 30] == ':');
b30_50 =(buffer[i + 30] == '*');
b30_51 =(buffer[i + 30] == 'C');
b30_52 =(buffer[i + 30] == '?');
b30_53 =(buffer[i + 30] == 'x');
b30_54 =(buffer[i + 30] == 'P');
b30_55 =(buffer[i + 30] == 'I');
b30_56 =(buffer[i + 30] == 'L');
b30_57 =(buffer[i + 30] == '=');
b31_1 =(buffer[i + 31] == '4');
b31_2 =(buffer[i + 31] == 'a');
b31_3 =(buffer[i + 31] == '1');
b31_4 =(buffer[i + 31] == '|');
b31_5 =(buffer[i + 31] == 'A');
b31_6 =(buffer[i + 31] == 'P');
b31_7 =(buffer[i + 31] == '9');
b31_8 =(buffer[i + 31] == 'f');
b31_9 =(buffer[i + 31] == '/');
b31_10 =(buffer[i + 31] == ' ');
b31_11 =(buffer[i + 31] == '0');
b31_12 =(buffer[i + 31] == 'I');
b31_13 =(buffer[i + 31] == '3');
b31_14 =(buffer[i + 31] == 'e');
b31_15 =(buffer[i + 31] == '2');
b31_16 =(buffer[i + 31] == 'F');
b31_17 =(buffer[i + 31] == '8');
b31_18 =(buffer[i + 31] == 'C');
b31_19 =(buffer[i + 31] == 'h');
b31_20 =(buffer[i + 31] == 'g');
b31_21 =(buffer[i + 31] == 'n');
b31_22 =(buffer[i + 31] == 'l');
b31_23 =(buffer[i + 31] == 'r');
b31_24 =(buffer[i + 31] == 'd');
b31_25 =(buffer[i + 31] == 'w');
b31_26 =(buffer[i + 31] == '.');
b31_27 =(buffer[i + 31] == 'p');
b31_28 =(buffer[i + 31] == 's');
b31_29 =(buffer[i + 31] == 'i');
b31_30 =(buffer[i + 31] == 'U');
b31_31 =(buffer[i + 31] == 'v');
b31_32 =(buffer[i + 31] == 't');
b31_33 =(buffer[i + 31] == '?');
b31_34 =(buffer[i + 31] == '6');
b31_35 =(buffer[i + 31] == 'k');
b31_36 =(buffer[i + 31] == 'x');
b31_37 =(buffer[i + 31] == 'u');
b31_38 =(buffer[i + 31] == 'o');
b31_39 =(buffer[i + 31] == '_');
b31_40 =(buffer[i + 31] == 'c');
b31_41 =(buffer[i + 31] == 'j');
b31_42 =(buffer[i + 31] == 'y');
b31_43 =(buffer[i + 31] == 'W');
b31_44 =(buffer[i + 31] == 'D');
b31_45 =(buffer[i + 31] == 'z');
b31_46 =(buffer[i + 31] == '7');
b31_47 =(buffer[i + 31] == '>');
b31_48 =(buffer[i + 31] == 'E');
b31_49 =(buffer[i + 31] == '(');
b31_50 =(buffer[i + 31] == '-');
b31_51 =(buffer[i + 31] == ':');
b31_52 =(buffer[i + 31] == '*');
b31_53 =(buffer[i + 31] == '=');
b31_54 =(buffer[i + 31] == 'M');
b31_55 =(buffer[i + 31] == 'm');
b31_56 =(buffer[i + 31] == 'B');
b31_57 =(buffer[i + 31] == '5');
b31_58 =(buffer[i + 31] == 'O');
b32_1 =(buffer[i + 32] == ' ');
b32_2 =(buffer[i + 32] == 'd');
b32_3 =(buffer[i + 32] == '|');
b32_4 =(buffer[i + 32] == 'B');
b32_5 =(buffer[i + 32] == 'C');
b32_6 =(buffer[i + 32] == 'F');
b32_7 =(buffer[i + 32] == '0');
b32_8 =(buffer[i + 32] == '1');
b32_9 =(buffer[i + 32] == 's');
b32_10 =(buffer[i + 32] == '6');
b32_11 =(buffer[i + 32] == 'P');
b32_12 =(buffer[i + 32] == '3');
b32_13 =(buffer[i + 32] == '9');
b32_14 =(buffer[i + 32] == '8');
b32_15 =(buffer[i + 32] == '2');
b32_16 =(buffer[i + 32] == 'A');
b32_17 =(buffer[i + 32] == '%');
b32_18 =(buffer[i + 32] == '4');
b32_19 =(buffer[i + 32] == ',');
b32_20 =(buffer[i + 32] == 't');
b32_21 =(buffer[i + 32] == '/');
b32_22 =(buffer[i + 32] == '.');
b32_23 =(buffer[i + 32] == 'm');
b32_24 =(buffer[i + 32] == 'o');
b32_25 =(buffer[i + 32] == 'e');
b32_26 =(buffer[i + 32] == 'y');
b32_27 =(buffer[i + 32] == 'i');
b32_28 =(buffer[i + 32] == 'a');
b32_29 =(buffer[i + 32] == 'h');
b32_30 =(buffer[i + 32] == 'V');
b32_31 =(buffer[i + 32] == 'p');
b32_32 =(buffer[i + 32] == 'D');
b32_33 =(buffer[i + 32] == 'x');
b32_34 =(buffer[i + 32] == 'c');
b32_35 =(buffer[i + 32] == '5');
b32_36 =(buffer[i + 32] == 'n');
b32_37 =(buffer[i + 32] == '_');
b32_38 =(buffer[i + 32] == 'g');
b32_39 =(buffer[i + 32] == 'v');
b32_40 =(buffer[i + 32] == 'r');
b32_41 =(buffer[i + 32] == 'u');
b32_42 =(buffer[i + 32] == 'l');
b32_43 =(buffer[i + 32] == 'f');
b32_44 =(buffer[i + 32] == 'w');
b32_45 =(buffer[i + 32] == 'b');
b32_46 =(buffer[i + 32] == ')');
b32_47 =(buffer[i + 32] == 'R');
b32_48 =(buffer[i + 32] == 'O');
b32_49 =(buffer[i + 32] == 'M');
b32_50 =(buffer[i + 32] == 'E');
b32_51 =(buffer[i + 32] == ':');
b32_52 =(buffer[i + 32] == '=');
b32_53 =(buffer[i + 32] == '*');
b32_54 =(buffer[i + 32] == 'S');
b32_55 =(buffer[i + 32] == 'W');
b32_56 =(buffer[i + 32] == 'T');
b32_57 =(buffer[i + 32] == '7');
b32_58 =(buffer[i + 32] == 'Z');
b32_59 =(buffer[i + 32] == 'Q');
b33_1 =(buffer[i + 33] == '0');
b33_2 =(buffer[i + 33] == 'd');
b33_3 =(buffer[i + 33] == 'C');
b33_4 =(buffer[i + 33] == '|');
b33_5 =(buffer[i + 33] == 'F');
b33_6 =(buffer[i + 33] == 'h');
b33_7 =(buffer[i + 33] == 'B');
b33_8 =(buffer[i + 33] == ' ');
b33_9 =(buffer[i + 33] == 'w');
b33_10 =(buffer[i + 33] == '6');
b33_11 =(buffer[i + 33] == 'o');
b33_12 =(buffer[i + 33] == '.');
b33_13 =(buffer[i + 33] == 'O');
b33_14 =(buffer[i + 33] == 'G');
b33_15 =(buffer[i + 33] == 'P');
b33_16 =(buffer[i + 33] == 'i');
b33_17 =(buffer[i + 33] == 'a');
b33_18 =(buffer[i + 33] == 'c');
b33_19 =(buffer[i + 33] == 'm');
b33_20 =(buffer[i + 33] == 'r');
b33_21 =(buffer[i + 33] == 'b');
b33_22 =(buffer[i + 33] == 's');
b33_23 =(buffer[i + 33] == 'x');
b33_24 =(buffer[i + 33] == 'l');
b33_25 =(buffer[i + 33] == 't');
b33_26 =(buffer[i + 33] == '9');
b33_27 =(buffer[i + 33] == '2');
b33_28 =(buffer[i + 33] == 'q');
b33_29 =(buffer[i + 33] == '/');
b33_30 =(buffer[i + 33] == '5');
b33_31 =(buffer[i + 33] == 'f');
b33_32 =(buffer[i + 33] == 'g');
b33_33 =(buffer[i + 33] == '_');
b33_34 =(buffer[i + 33] == 'e');
b33_35 =(buffer[i + 33] == 'n');
b33_36 =(buffer[i + 33] == 'y');
b33_37 =(buffer[i + 33] == 'u');
b33_38 =(buffer[i + 33] == 'p');
b33_39 =(buffer[i + 33] == 'v');
b33_40 =(buffer[i + 33] == 'j');
b33_41 =(buffer[i + 33] == '8');
b33_42 =(buffer[i + 33] == 'D');
b33_43 =(buffer[i + 33] == '3');
b33_44 =(buffer[i + 33] == 'N');
b33_45 =(buffer[i + 33] == '+');
b33_46 =(buffer[i + 33] == 'M');
b33_47 =(buffer[i + 33] == 'I');
b33_48 =(buffer[i + 33] == 'H');
b33_49 =(buffer[i + 33] == '*');
b33_50 =(buffer[i + 33] == 'U');
b33_51 =(buffer[i + 33] == '7');
b33_52 =(buffer[i + 33] == '=');
b33_53 =(buffer[i + 33] == '1');
b33_54 =(buffer[i + 33] == 'A');
b33_55 =(buffer[i + 33] == 'S');
b33_56 =(buffer[i + 33] == '4');
b34_1 =(buffer[i + 34] == '0');
b34_2 =(buffer[i + 34] == 'r');
b34_3 =(buffer[i + 34] == '|');
b34_4 =(buffer[i + 34] == '<');
b34_5 =(buffer[i + 34] == ' ');
b34_6 =(buffer[i + 34] == '7');
b34_7 =(buffer[i + 34] == '9');
b34_8 =(buffer[i + 34] == 'C');
b34_9 =(buffer[i + 34] == 'E');
b34_10 =(buffer[i + 34] == '1');
b34_11 =(buffer[i + 34] == '8');
b34_12 =(buffer[i + 34] == 'A');
b34_13 =(buffer[i + 34] == '3');
b34_14 =(buffer[i + 34] == '2');
b34_15 =(buffer[i + 34] == '=');
b34_16 =(buffer[i + 34] == 'o');
b34_17 =(buffer[i + 34] == 'p');
b34_18 =(buffer[i + 34] == 'f');
b34_19 =(buffer[i + 34] == 'd');
b34_20 =(buffer[i + 34] == 'c');
b34_21 =(buffer[i + 34] == 'l');
b34_22 =(buffer[i + 34] == 'a');
b34_23 =(buffer[i + 34] == 's');
b34_24 =(buffer[i + 34] == 'e');
b34_25 =(buffer[i + 34] == 'F');
b34_26 =(buffer[i + 34] == '&');
b34_27 =(buffer[i + 34] == 'D');
b34_28 =(buffer[i + 34] == 'b');
b34_29 =(buffer[i + 34] == 'w');
b34_30 =(buffer[i + 34] == 'g');
b34_31 =(buffer[i + 34] == 't');
b34_32 =(buffer[i + 34] == 'm');
b34_33 =(buffer[i + 34] == 'x');
b34_34 =(buffer[i + 34] == 'u');
b34_35 =(buffer[i + 34] == 'i');
b34_36 =(buffer[i + 34] == 'h');
b34_37 =(buffer[i + 34] == 'n');
b34_38 =(buffer[i + 34] == '_');
b34_39 =(buffer[i + 34] == 'y');
b34_40 =(buffer[i + 34] == 'v');
b34_41 =(buffer[i + 34] == 'k');
b34_42 =(buffer[i + 34] == 'O');
b34_43 =(buffer[i + 34] == 'B');
b34_44 =(buffer[i + 34] == 'T');
b34_45 =(buffer[i + 34] == 'z');
b34_46 =(buffer[i + 34] == '/');
b34_47 =(buffer[i + 34] == ')');
b34_48 =(buffer[i + 34] == ',');
b34_49 =(buffer[i + 34] == '5');
b34_50 =(buffer[i + 34] == '4');
b34_51 =(buffer[i + 34] == '.');
b34_52 =(buffer[i + 34] == '6');
b34_53 =(buffer[i + 34] == 'P');
b35_1 =(buffer[i + 35] == '|');
b35_2 =(buffer[i + 35] == 'i');
b35_3 =(buffer[i + 35] == '5');
b35_4 =(buffer[i + 35] == 'D');
b35_5 =(buffer[i + 35] == ' ');
b35_6 =(buffer[i + 35] == 'C');
b35_7 =(buffer[i + 35] == '0');
b35_8 =(buffer[i + 35] == '9');
b35_9 =(buffer[i + 35] == '+');
b35_10 =(buffer[i + 35] == '8');
b35_11 =(buffer[i + 35] == 'B');
b35_12 =(buffer[i + 35] == '3');
b35_13 =(buffer[i + 35] == 'A');
b35_14 =(buffer[i + 35] == '4');
b35_15 =(buffer[i + 35] == 'F');
b35_16 =(buffer[i + 35] == '6');
b35_17 =(buffer[i + 35] == '/');
b35_18 =(buffer[i + 35] == 't');
b35_19 =(buffer[i + 35] == 'w');
b35_20 =(buffer[i + 35] == 's');
b35_21 =(buffer[i + 35] == 'h');
b35_22 =(buffer[i + 35] == 'n');
b35_23 =(buffer[i + 35] == 'p');
b35_24 =(buffer[i + 35] == 'm');
b35_25 =(buffer[i + 35] == 'd');
b35_26 =(buffer[i + 35] == 'f');
b35_27 =(buffer[i + 35] == 'o');
b35_28 =(buffer[i + 35] == 'a');
b35_29 =(buffer[i + 35] == 'r');
b35_30 =(buffer[i + 35] == '1');
b35_31 =(buffer[i + 35] == 'l');
b35_32 =(buffer[i + 35] == '.');
b35_33 =(buffer[i + 35] == 'e');
b35_34 =(buffer[i + 35] == '_');
b35_35 =(buffer[i + 35] == 'g');
b35_36 =(buffer[i + 35] == 'c');
b35_37 =(buffer[i + 35] == 'v');
b35_38 =(buffer[i + 35] == '2');
b35_39 =(buffer[i + 35] == 'u');
b35_40 =(buffer[i + 35] == 'y');
b35_41 =(buffer[i + 35] == 'b');
b35_42 =(buffer[i + 35] == 'q');
b35_43 =(buffer[i + 35] == 'z');
b35_44 =(buffer[i + 35] == ':');
b35_45 =(buffer[i + 35] == ',');
b35_46 =(buffer[i + 35] == 'E');
b35_47 =(buffer[i + 35] == '7');
b35_48 =(buffer[i + 35] == 'M');
b35_49 =(buffer[i + 35] == 'k');
b36_1 =(buffer[i + 36] == 'n');
b36_2 =(buffer[i + 36] == 'F');
b36_3 =(buffer[i + 36] == '|');
b36_4 =(buffer[i + 36] == '0');
b36_5 =(buffer[i + 36] == 'D');
b36_6 =(buffer[i + 36] == ' ');
b36_7 =(buffer[i + 36] == 'b');
b36_8 =(buffer[i + 36] == '.');
b36_9 =(buffer[i + 36] == 'l');
b36_10 =(buffer[i + 36] == 'c');
b36_11 =(buffer[i + 36] == 'm');
b36_12 =(buffer[i + 36] == 's');
b36_13 =(buffer[i + 36] == 'p');
b36_14 =(buffer[i + 36] == '/');
b36_15 =(buffer[i + 36] == 't');
b36_16 =(buffer[i + 36] == 'I');
b36_17 =(buffer[i + 36] == 'd');
b36_18 =(buffer[i + 36] == 'C');
b36_19 =(buffer[i + 36] == 'i');
b36_20 =(buffer[i + 36] == 'a');
b36_21 =(buffer[i + 36] == '8');
b36_22 =(buffer[i + 36] == 'r');
b36_23 =(buffer[i + 36] == 'e');
b36_24 =(buffer[i + 36] == 'h');
b36_25 =(buffer[i + 36] == '_');
b36_26 =(buffer[i + 36] == 'o');
b36_27 =(buffer[i + 36] == 'k');
b36_28 =(buffer[i + 36] == 'u');
b36_29 =(buffer[i + 36] == 'g');
b36_30 =(buffer[i + 36] == 'v');
b36_31 =(buffer[i + 36] == 'j');
b36_32 =(buffer[i + 36] == 'w');
b36_33 =(buffer[i + 36] == 'A');
b36_34 =(buffer[i + 36] == '3');
b36_35 =(buffer[i + 36] == '=');
b36_36 =(buffer[i + 36] == '7');
b36_37 =(buffer[i + 36] == 'x');
b36_38 =(buffer[i + 36] == 'B');
b36_39 =(buffer[i + 36] == '5');
b36_40 =(buffer[i + 36] == '2');
b36_41 =(buffer[i + 36] == '+');
b36_42 =(buffer[i + 36] == '6');
b36_43 =(buffer[i + 36] == ',');
b36_44 =(buffer[i + 36] == '4');
b36_45 =(buffer[i + 36] == '-');
b36_46 =(buffer[i + 36] == ':');
b36_47 =(buffer[i + 36] == 'O');
b36_48 =(buffer[i + 36] == ')');
b36_49 =(buffer[i + 36] == 'U');
b37_1 =(buffer[i + 37] == 'y');
b37_2 =(buffer[i + 37] == 'E');
b37_3 =(buffer[i + 37] == ' ');
b37_4 =(buffer[i + 37] == '0');
b37_5 =(buffer[i + 37] == 'f');
b37_6 =(buffer[i + 37] == '2');
b37_7 =(buffer[i + 37] == 'F');
b37_8 =(buffer[i + 37] == '1');
b37_9 =(buffer[i + 37] == 'A');
b37_10 =(buffer[i + 37] == '|');
b37_11 =(buffer[i + 37] == '3');
b37_12 =(buffer[i + 37] == '!');
b37_13 =(buffer[i + 37] == '9');
b37_14 =(buffer[i + 37] == 'i');
b37_15 =(buffer[i + 37] == 'c');
b37_16 =(buffer[i + 37] == 'o');
b37_17 =(buffer[i + 37] == '.');
b37_18 =(buffer[i + 37] == 'V');
b37_19 =(buffer[i + 37] == 'u');
b37_20 =(buffer[i + 37] == 'n');
b37_21 =(buffer[i + 37] == 'e');
b37_22 =(buffer[i + 37] == 'S');
b37_23 =(buffer[i + 37] == 'p');
b37_24 =(buffer[i + 37] == '7');
b37_25 =(buffer[i + 37] == 'l');
b37_26 =(buffer[i + 37] == 'h');
b37_27 =(buffer[i + 37] == 's');
b37_28 =(buffer[i + 37] == 'a');
b37_29 =(buffer[i + 37] == '_');
b37_30 =(buffer[i + 37] == 't');
b37_31 =(buffer[i + 37] == 'r');
b37_32 =(buffer[i + 37] == 'g');
b37_33 =(buffer[i + 37] == 'v');
b37_34 =(buffer[i + 37] == 'q');
b37_35 =(buffer[i + 37] == 'd');
b37_36 =(buffer[i + 37] == 'b');
b37_37 =(buffer[i + 37] == 'm');
b37_38 =(buffer[i + 37] == 'w');
b37_39 =(buffer[i + 37] == 'B');
b37_40 =(buffer[i + 37] == '6');
b37_41 =(buffer[i + 37] == 'G');
b37_42 =(buffer[i + 37] == '/');
b37_43 =(buffer[i + 37] == 'M');
b37_44 =(buffer[i + 37] == '=');
b37_45 =(buffer[i + 37] == 'T');
b37_46 =(buffer[i + 37] == '*');
b37_47 =(buffer[i + 37] == ':');
b37_48 =(buffer[i + 37] == '-');
b37_49 =(buffer[i + 37] == '4');
b37_50 =(buffer[i + 37] == 'D');
b37_51 =(buffer[i + 37] == '8');
b38_1 =(buffer[i + 38] == 'e');
b38_2 =(buffer[i + 38] == '|');
b38_3 =(buffer[i + 38] == '2');
b38_4 =(buffer[i + 38] == '8');
b38_5 =(buffer[i + 38] == '0');
b38_6 =(buffer[i + 38] == '9');
b38_7 =(buffer[i + 38] == 'C');
b38_8 =(buffer[i + 38] == '4');
b38_9 =(buffer[i + 38] == 'D');
b38_10 =(buffer[i + 38] == 'B');
b38_11 =(buffer[i + 38] == 'A');
b38_12 =(buffer[i + 38] == 'w');
b38_13 =(buffer[i + 38] == 'F');
b38_14 =(buffer[i + 38] == '3');
b38_15 =(buffer[i + 38] == '6');
b38_16 =(buffer[i + 38] == 'n');
b38_17 =(buffer[i + 38] == 'f');
b38_18 =(buffer[i + 38] == 'c');
b38_19 =(buffer[i + 38] == 'a');
b38_20 =(buffer[i + 38] == 'i');
b38_21 =(buffer[i + 38] == 't');
b38_22 =(buffer[i + 38] == 's');
b38_23 =(buffer[i + 38] == '.');
b38_24 =(buffer[i + 38] == 'd');
b38_25 =(buffer[i + 38] == ' ');
b38_26 =(buffer[i + 38] == 'y');
b38_27 =(buffer[i + 38] == 'p');
b38_28 =(buffer[i + 38] == 'r');
b38_29 =(buffer[i + 38] == 'k');
b38_30 =(buffer[i + 38] == 'u');
b38_31 =(buffer[i + 38] == 'v');
b38_32 =(buffer[i + 38] == 'o');
b38_33 =(buffer[i + 38] == 'g');
b38_34 =(buffer[i + 38] == 'l');
b38_35 =(buffer[i + 38] == '_');
b38_36 =(buffer[i + 38] == 'j');
b38_37 =(buffer[i + 38] == 'b');
b38_38 =(buffer[i + 38] == 'm');
b38_39 =(buffer[i + 38] == 'h');
b38_40 =(buffer[i + 38] == '7');
b38_41 =(buffer[i + 38] == '5');
b38_42 =(buffer[i + 38] == '-');
b38_43 =(buffer[i + 38] == 'O');
b38_44 =(buffer[i + 38] == '1');
b38_45 =(buffer[i + 38] == '*');
b38_46 =(buffer[i + 38] == '/');
b38_47 =(buffer[i + 38] == '>');
b38_48 =(buffer[i + 38] == 'E');
b38_49 =(buffer[i + 38] == 'I');
b38_50 =(buffer[i + 38] == 'K');
b39_1 =(buffer[i + 39] == 'a');
b39_2 =(buffer[i + 39] == '3');
b39_3 =(buffer[i + 39] == 'P');
b39_4 =(buffer[i + 39] == '0');
b39_5 =(buffer[i + 39] == ' ');
b39_6 =(buffer[i + 39] == 'B');
b39_7 =(buffer[i + 39] == '|');
b39_8 =(buffer[i + 39] == '4');
b39_9 =(buffer[i + 39] == 'm');
b39_10 =(buffer[i + 39] == 't');
b39_11 =(buffer[i + 39] == 's');
b39_12 =(buffer[i + 39] == 'e');
b39_13 =(buffer[i + 39] == 'o');
b39_14 =(buffer[i + 39] == 'p');
b39_15 =(buffer[i + 39] == 'r');
b39_16 =(buffer[i + 39] == 'D');
b39_17 =(buffer[i + 39] == 'z');
b39_18 =(buffer[i + 39] == 'F');
b39_19 =(buffer[i + 39] == 'n');
b39_20 =(buffer[i + 39] == 'A');
b39_21 =(buffer[i + 39] == 'd');
b39_22 =(buffer[i + 39] == 'l');
b39_23 =(buffer[i + 39] == 'f');
b39_24 =(buffer[i + 39] == 'i');
b39_25 =(buffer[i + 39] == 'u');
b39_26 =(buffer[i + 39] == '_');
b39_27 =(buffer[i + 39] == 'j');
b39_28 =(buffer[i + 39] == 'v');
b39_29 =(buffer[i + 39] == 'h');
b39_30 =(buffer[i + 39] == 'b');
b39_31 =(buffer[i + 39] == 'c');
b39_32 =(buffer[i + 39] == 'y');
b39_33 =(buffer[i + 39] == 'g');
b39_34 =(buffer[i + 39] == '2');
b39_35 =(buffer[i + 39] == 'C');
b39_36 =(buffer[i + 39] == 'T');
b39_37 =(buffer[i + 39] == 'H');
b39_38 =(buffer[i + 39] == 'N');
b39_39 =(buffer[i + 39] == '/');
b39_40 =(buffer[i + 39] == ',');
b39_41 =(buffer[i + 39] == '7');
b39_42 =(buffer[i + 39] == '1');
b39_43 =(buffer[i + 39] == '*');
b39_44 =(buffer[i + 39] == 'W');
b39_45 =(buffer[i + 39] == 'M');
b39_46 =(buffer[i + 39] == '.');
b39_47 =(buffer[i + 39] == '5');
b40_1 =(buffer[i + 40] == 'h');
b40_2 =(buffer[i + 40] == ' ');
b40_3 =(buffer[i + 40] == '|');
b40_4 =(buffer[i + 40] == '0');
b40_5 =(buffer[i + 40] == '9');
b40_6 =(buffer[i + 40] == '1');
b40_7 =(buffer[i + 40] == 'C');
b40_8 =(buffer[i + 40] == 'A');
b40_9 =(buffer[i + 40] == '3');
b40_10 =(buffer[i + 40] == 'F');
b40_11 =(buffer[i + 40] == '2');
b40_12 =(buffer[i + 40] == '@');
b40_13 =(buffer[i + 40] == '_');
b40_14 =(buffer[i + 40] == 'o');
b40_15 =(buffer[i + 40] == 'e');
b40_16 =(buffer[i + 40] == 't');
b40_17 =(buffer[i + 40] == 'p');
b40_18 =(buffer[i + 40] == 'w');
b40_19 =(buffer[i + 40] == 'r');
b40_20 =(buffer[i + 40] == 'i');
b40_21 =(buffer[i + 40] == 's');
b40_22 =(buffer[i + 40] == '.');
b40_23 =(buffer[i + 40] == 'v');
b40_24 =(buffer[i + 40] == 'a');
b40_25 =(buffer[i + 40] == 'y');
b40_26 =(buffer[i + 40] == 'g');
b40_27 =(buffer[i + 40] == 'c');
b40_28 =(buffer[i + 40] == 'u');
b40_29 =(buffer[i + 40] == 'n');
b40_30 =(buffer[i + 40] == 'l');
b40_31 =(buffer[i + 40] == 'm');
b40_32 =(buffer[i + 40] == 'd');
b40_33 =(buffer[i + 40] == 'b');
b40_34 =(buffer[i + 40] == 'B');
b40_35 =(buffer[i + 40] == 'U');
b40_36 =(buffer[i + 40] == '=');
b40_37 =(buffer[i + 40] == 'W');
b40_38 =(buffer[i + 40] == 'D');
b40_39 =(buffer[i + 40] == 'T');
b40_40 =(buffer[i + 40] == ':');
b40_41 =(buffer[i + 40] == '/');
b40_42 =(buffer[i + 40] == '*');
b40_43 =(buffer[i + 40] == 'x');
b40_44 =(buffer[i + 40] == 'R');
b40_45 =(buffer[i + 40] == 'M');
b40_46 =(buffer[i + 40] == 'S');
b40_47 =(buffer[i + 40] == '4');
b40_48 =(buffer[i + 40] == '6');
b40_49 =(buffer[i + 40] == 'Z');
b40_50 =(buffer[i + 40] == 'f');
b41_1 =(buffer[i + 41] == 'y');
b41_2 =(buffer[i + 41] == 'B');
b41_3 =(buffer[i + 41] == '1');
b41_4 =(buffer[i + 41] == '0');
b41_5 =(buffer[i + 41] == ' ');
b41_6 =(buffer[i + 41] == 'D');
b41_7 =(buffer[i + 41] == '5');
b41_8 =(buffer[i + 41] == 'E');
b41_9 =(buffer[i + 41] == '9');
b41_10 =(buffer[i + 41] == 'A');
b41_11 =(buffer[i + 41] == '8');
b41_12 =(buffer[i + 41] == '2');
b41_13 =(buffer[i + 41] == '|');
b41_14 =(buffer[i + 41] == 'C');
b41_15 =(buffer[i + 41] == 'i');
b41_16 =(buffer[i + 41] == 'n');
b41_17 =(buffer[i + 41] == 'r');
b41_18 =(buffer[i + 41] == 'p');
b41_19 =(buffer[i + 41] == 'a');
b41_20 =(buffer[i + 41] == 'l');
b41_21 =(buffer[i + 41] == 'd');
b41_22 =(buffer[i + 41] == 'H');
b41_23 =(buffer[i + 41] == 'F');
b41_24 =(buffer[i + 41] == 'c');
b41_25 =(buffer[i + 41] == 'e');
b41_26 =(buffer[i + 41] == 't');
b41_27 =(buffer[i + 41] == '_');
b41_28 =(buffer[i + 41] == 'o');
b41_29 =(buffer[i + 41] == 'f');
b41_30 =(buffer[i + 41] == 'm');
b41_31 =(buffer[i + 41] == 'g');
b41_32 =(buffer[i + 41] == 'h');
b41_33 =(buffer[i + 41] == 's');
b41_34 =(buffer[i + 41] == 'j');
b41_35 =(buffer[i + 41] == 'w');
b41_36 =(buffer[i + 41] == '+');
b41_37 =(buffer[i + 41] == 'S');
b41_38 =(buffer[i + 41] == ',');
b41_39 =(buffer[i + 41] == '.');
b41_40 =(buffer[i + 41] == '4');
b41_41 =(buffer[i + 41] == '*');
b41_42 =(buffer[i + 41] == '3');
b41_43 =(buffer[i + 41] == '-');
b41_44 =(buffer[i + 41] == ':');
b41_45 =(buffer[i + 41] == 'u');
b41_46 =(buffer[i + 41] == 'I');
b41_47 =(buffer[i + 41] == '7');
b41_48 =(buffer[i + 41] == 'W');
b41_49 =(buffer[i + 41] == 'X');
b42_1 =(buffer[i + 42] == 'e');
b42_2 =(buffer[i + 42] == 'F');
b42_3 =(buffer[i + 42] == '|');
b42_4 =(buffer[i + 42] == ' ');
b42_5 =(buffer[i + 42] == '1');
b42_6 =(buffer[i + 42] == '2');
b42_7 =(buffer[i + 42] == '8');
b42_8 =(buffer[i + 42] == '0');
b42_9 =(buffer[i + 42] == 'o');
b42_10 =(buffer[i + 42] == 't');
b42_11 =(buffer[i + 42] == 'a');
b42_12 =(buffer[i + 42] == 's');
b42_13 =(buffer[i + 42] == 'D');
b42_14 =(buffer[i + 42] == 'y');
b42_15 =(buffer[i + 42] == 'O');
b42_16 =(buffer[i + 42] == 'i');
b42_17 =(buffer[i + 42] == 'r');
b42_18 =(buffer[i + 42] == 'u');
b42_19 =(buffer[i + 42] == 'n');
b42_20 =(buffer[i + 42] == 'v');
b42_21 =(buffer[i + 42] == 'f');
b42_22 =(buffer[i + 42] == 'p');
b42_23 =(buffer[i + 42] == 'b');
b42_24 =(buffer[i + 42] == 'k');
b42_25 =(buffer[i + 42] == 'h');
b42_26 =(buffer[i + 42] == 'w');
b42_27 =(buffer[i + 42] == 'S');
b42_28 =(buffer[i + 42] == '3');
b42_29 =(buffer[i + 42] == 'l');
b42_30 =(buffer[i + 42] == 'x');
b42_31 =(buffer[i + 42] == 'c');
b42_32 =(buffer[i + 42] == '5');
b42_33 =(buffer[i + 42] == '.');
b42_34 =(buffer[i + 42] == '/');
b42_35 =(buffer[i + 42] == 'C');
b42_36 =(buffer[i + 42] == 'B');
b42_37 =(buffer[i + 42] == 'T');
b42_38 =(buffer[i + 42] == 'I');
b42_39 =(buffer[i + 42] == 'E');
b42_40 =(buffer[i + 42] == 'A');
b42_41 =(buffer[i + 42] == '-');
b42_42 =(buffer[i + 42] == '(');
b43_1 =(buffer[i + 43] == 'a');
b43_2 =(buffer[i + 43] == ' ');
b43_3 =(buffer[i + 43] == 'C');
b43_4 =(buffer[i + 43] == '0');
b43_5 =(buffer[i + 43] == '1');
b43_6 =(buffer[i + 43] == 'A');
b43_7 =(buffer[i + 43] == 's');
b43_8 =(buffer[i + 43] == '3');
b43_9 =(buffer[i + 43] == '%');
b43_10 =(buffer[i + 43] == '4');
b43_11 =(buffer[i + 43] == '|');
b43_12 =(buffer[i + 43] == 'n');
b43_13 =(buffer[i + 43] == '.');
b43_14 =(buffer[i + 43] == 'd');
b43_15 =(buffer[i + 43] == 'l');
b43_16 =(buffer[i + 43] == 'p');
b43_17 =(buffer[i + 43] == 't');
b43_18 =(buffer[i + 43] == 'x');
b43_19 =(buffer[i + 43] == '9');
b43_20 =(buffer[i + 43] == 'S');
b43_21 =(buffer[i + 43] == 'F');
b43_22 =(buffer[i + 43] == 'r');
b43_23 =(buffer[i + 43] == 'e');
b43_24 =(buffer[i + 43] == '_');
b43_25 =(buffer[i + 43] == 'o');
b43_26 =(buffer[i + 43] == 'i');
b43_27 =(buffer[i + 43] == 'c');
b43_28 =(buffer[i + 43] == 'g');
b43_29 =(buffer[i + 43] == 'j');
b43_30 =(buffer[i + 43] == '2');
b43_31 =(buffer[i + 43] == 'm');
b43_32 =(buffer[i + 43] == 'u');
b43_33 =(buffer[i + 43] == 'w');
b43_34 =(buffer[i + 43] == 'U');
b43_35 =(buffer[i + 43] == 'B');
b43_36 =(buffer[i + 43] == '7');
b43_37 =(buffer[i + 43] == ':');
b43_38 =(buffer[i + 43] == '+');
b43_39 =(buffer[i + 43] == 'D');
b43_40 =(buffer[i + 43] == '*');
b43_41 =(buffer[i + 43] == 'y');
b43_42 =(buffer[i + 43] == 'h');
b43_43 =(buffer[i + 43] == 'E');
b43_44 =(buffer[i + 43] == '/');
b43_45 =(buffer[i + 43] == '5');
b43_46 =(buffer[i + 43] == '8');
b43_47 =(buffer[i + 43] == '6');
b43_48 =(buffer[i + 43] == 'T');
b43_49 =(buffer[i + 43] == '$');
b44_1 =(buffer[i + 44] == 'h');
b44_2 =(buffer[i + 44] == 'F');
b44_3 =(buffer[i + 44] == '0');
b44_4 =(buffer[i + 44] == '1');
b44_5 =(buffer[i + 44] == '|');
b44_6 =(buffer[i + 44] == 'E');
b44_7 =(buffer[i + 44] == '6');
b44_8 =(buffer[i + 44] == 'A');
b44_9 =(buffer[i + 44] == 'B');
b44_10 =(buffer[i + 44] == 'C');
b44_11 =(buffer[i + 44] == '9');
b44_12 =(buffer[i + 44] == '.');
b44_13 =(buffer[i + 44] == 'c');
b44_14 =(buffer[i + 44] == 'e');
b44_15 =(buffer[i + 44] == '/');
b44_16 =(buffer[i + 44] == 't');
b44_17 =(buffer[i + 44] == 'D');
b44_18 =(buffer[i + 44] == ' ');
b44_19 =(buffer[i + 44] == '5');
b44_20 =(buffer[i + 44] == 'f');
b44_21 =(buffer[i + 44] == 'x');
b44_22 =(buffer[i + 44] == 'T');
b44_23 =(buffer[i + 44] == 'r');
b44_24 =(buffer[i + 44] == 'i');
b44_25 =(buffer[i + 44] == 'a');
b44_26 =(buffer[i + 44] == 'd');
b44_27 =(buffer[i + 44] == 'o');
b44_28 =(buffer[i + 44] == 'n');
b44_29 =(buffer[i + 44] == 'k');
b44_30 =(buffer[i + 44] == 'u');
b44_31 =(buffer[i + 44] == 'g');
b44_32 =(buffer[i + 44] == 'p');
b44_33 =(buffer[i + 44] == '2');
b44_34 =(buffer[i + 44] == 'y');
b44_35 =(buffer[i + 44] == 'm');
b44_36 =(buffer[i + 44] == 'l');
b44_37 =(buffer[i + 44] == '=');
b44_38 =(buffer[i + 44] == 'W');
b44_39 =(buffer[i + 44] == 'U');
b44_40 =(buffer[i + 44] == '-');
b44_41 =(buffer[i + 44] == '7');
b44_42 =(buffer[i + 44] == '4');
b44_43 =(buffer[i + 44] == ')');
b44_44 =(buffer[i + 44] == '8');
b44_45 =(buffer[i + 44] == '_');
b45_1 =(buffer[i + 45] == 'i');
b45_2 =(buffer[i + 45] == '8');
b45_3 =(buffer[i + 45] == ' ');
b45_4 =(buffer[i + 45] == '|');
b45_5 =(buffer[i + 45] == '0');
b45_6 =(buffer[i + 45] == 'j');
b45_7 =(buffer[i + 45] == 'r');
b45_8 =(buffer[i + 45] == '_');
b45_9 =(buffer[i + 45] == 'l');
b45_10 =(buffer[i + 45] == 'f');
b45_11 =(buffer[i + 45] == 'c');
b45_12 =(buffer[i + 45] == '.');
b45_13 =(buffer[i + 45] == 'V');
b45_14 =(buffer[i + 45] == 'u');
b45_15 =(buffer[i + 45] == 'D');
b45_16 =(buffer[i + 45] == 'o');
b45_17 =(buffer[i + 45] == 'e');
b45_18 =(buffer[i + 45] == 'b');
b45_19 =(buffer[i + 45] == 'a');
b45_20 =(buffer[i + 45] == 'm');
b45_21 =(buffer[i + 45] == 'v');
b45_22 =(buffer[i + 45] == 't');
b45_23 =(buffer[i + 45] == 'n');
b45_24 =(buffer[i + 45] == 'p');
b45_25 =(buffer[i + 45] == 'g');
b45_26 =(buffer[i + 45] == ')');
b45_27 =(buffer[i + 45] == '3');
b45_28 =(buffer[i + 45] == ',');
b45_29 =(buffer[i + 45] == '2');
b45_30 =(buffer[i + 45] == 'O');
b45_31 =(buffer[i + 45] == '(');
b45_32 =(buffer[i + 45] == '-');
b45_33 =(buffer[i + 45] == '5');
b45_34 =(buffer[i + 45] == 'W');
b45_35 =(buffer[i + 45] == 'A');
b45_36 =(buffer[i + 45] == 'B');
b45_37 =(buffer[i + 45] == '1');
b45_38 =(buffer[i + 45] == 'E');
b45_39 =(buffer[i + 45] == '9');
b45_40 =(buffer[i + 45] == 'M');
b45_41 =(buffer[i + 45] == '6');
b45_42 =(buffer[i + 45] == 'P');
b46_1 =(buffer[i + 46] == 'k');
b46_2 =(buffer[i + 46] == '|');
b46_3 =(buffer[i + 46] == 'F');
b46_4 =(buffer[i + 46] == '0');
b46_5 =(buffer[i + 46] == '1');
b46_6 =(buffer[i + 46] == 'C');
b46_7 =(buffer[i + 46] == 'A');
b46_8 =(buffer[i + 46] == '3');
b46_9 =(buffer[i + 46] == ' ');
b46_10 =(buffer[i + 46] == 'f');
b46_11 =(buffer[i + 46] == 'm');
b46_12 =(buffer[i + 46] == 'a');
b46_13 =(buffer[i + 46] == 'i');
b46_14 =(buffer[i + 46] == 't');
b46_15 =(buffer[i + 46] == '9');
b46_16 =(buffer[i + 46] == 'e');
b46_17 =(buffer[i + 46] == 'n');
b46_18 =(buffer[i + 46] == 'l');
b46_19 =(buffer[i + 46] == 'v');
b46_20 =(buffer[i + 46] == '_');
b46_21 =(buffer[i + 46] == 'o');
b46_22 =(buffer[i + 46] == 'g');
b46_23 =(buffer[i + 46] == 'u');
b46_24 =(buffer[i + 46] == 'r');
b46_25 =(buffer[i + 46] == 'p');
b46_26 =(buffer[i + 46] == 'B');
b46_27 =(buffer[i + 46] == 'M');
b46_28 =(buffer[i + 46] == '=');
b46_29 =(buffer[i + 46] == '2');
b46_30 =(buffer[i + 46] == ':');
b46_31 =(buffer[i + 46] == 'w');
b46_32 =(buffer[i + 46] == 'W');
b46_33 =(buffer[i + 46] == 'c');
b46_34 =(buffer[i + 46] == 'L');
b46_35 =(buffer[i + 46] == 'D');
b46_36 =(buffer[i + 46] == '.');
b46_37 =(buffer[i + 46] == '7');
b46_38 =(buffer[i + 46] == '4');
b46_39 =(buffer[i + 46] == '6');
b46_40 =(buffer[i + 46] == '5');
b46_41 =(buffer[i + 46] == 'S');
b46_42 =(buffer[i + 46] == 'E');
b46_43 =(buffer[i + 46] == '-');
b46_44 =(buffer[i + 46] == 'O');
b47_1 =(buffer[i + 47] == 'n');
b47_2 =(buffer[i + 47] == 'E');
b47_3 =(buffer[i + 47] == '0');
b47_4 =(buffer[i + 47] == 'F');
b47_5 =(buffer[i + 47] == '7');
b47_6 =(buffer[i + 47] == 'B');
b47_7 =(buffer[i + 47] == 'D');
b47_8 =(buffer[i + 47] == 'A');
b47_9 =(buffer[i + 47] == '|');
b47_10 =(buffer[i + 47] == '6');
b47_11 =(buffer[i + 47] == '3');
b47_12 =(buffer[i + 47] == 'm');
b47_13 =(buffer[i + 47] == 's');
b47_14 =(buffer[i + 47] == 'e');
b47_15 =(buffer[i + 47] == 'o');
b47_16 =(buffer[i + 47] == ' ');
b47_17 =(buffer[i + 47] == '8');
b47_18 =(buffer[i + 47] == 'w');
b47_19 =(buffer[i + 47] == 'i');
b47_20 =(buffer[i + 47] == 'v');
b47_21 =(buffer[i + 47] == 'f');
b47_22 =(buffer[i + 47] == 'r');
b47_23 =(buffer[i + 47] == 'p');
b47_24 =(buffer[i + 47] == 'u');
b47_25 =(buffer[i + 47] == 'g');
b47_26 =(buffer[i + 47] == 'a');
b47_27 =(buffer[i + 47] == 'S');
b47_28 =(buffer[i + 47] == 'l');
b47_29 =(buffer[i + 47] == '2');
b47_30 =(buffer[i + 47] == '.');
b47_31 =(buffer[i + 47] == 'c');
b47_32 =(buffer[i + 47] == '/');
b47_33 =(buffer[i + 47] == '1');
b47_34 =(buffer[i + 47] == '4');
b47_35 =(buffer[i + 47] == 'C');
b47_36 =(buffer[i + 47] == 'I');
b47_37 =(buffer[i + 47] == 'd');
b48_1 =(buffer[i + 48] == 'o');
b48_2 =(buffer[i + 48] == ' ');
b48_3 =(buffer[i + 48] == '|');
b48_4 =(buffer[i + 48] == '0');
b48_5 =(buffer[i + 48] == 'p');
b48_6 =(buffer[i + 48] == 'w');
b48_7 =(buffer[i + 48] == 'r');
b48_8 =(buffer[i + 48] == '_');
b48_9 =(buffer[i + 48] == 'n');
b48_10 =(buffer[i + 48] == 'l');
b48_11 =(buffer[i + 48] == 'u');
b48_12 =(buffer[i + 48] == 'c');
b48_13 =(buffer[i + 48] == 'I');
b48_14 =(buffer[i + 48] == 'x');
b48_15 =(buffer[i + 48] == 'T');
b48_16 =(buffer[i + 48] == 't');
b48_17 =(buffer[i + 48] == '*');
b48_18 =(buffer[i + 48] == 'B');
b48_19 =(buffer[i + 48] == 'd');
b48_20 =(buffer[i + 48] == 'e');
b48_21 =(buffer[i + 48] == '4');
b48_22 =(buffer[i + 48] == 'm');
b48_23 =(buffer[i + 48] == 'A');
b48_24 =(buffer[i + 48] == 'J');
b48_25 =(buffer[i + 48] == 'a');
b48_26 =(buffer[i + 48] == '5');
b48_27 =(buffer[i + 48] == '3');
b48_28 =(buffer[i + 48] == 'E');
b48_29 =(buffer[i + 48] == '.');
b48_30 =(buffer[i + 48] == 'i');
b48_31 =(buffer[i + 48] == 'D');
b48_32 =(buffer[i + 48] == '2');
b49_1 =(buffer[i + 49] == 'w');
b49_2 =(buffer[i + 49] == 'C');
b49_3 =(buffer[i + 49] == '0');
b49_4 =(buffer[i + 49] == '|');
b49_5 =(buffer[i + 49] == '3');
b49_6 =(buffer[i + 49] == 'i');
b49_7 =(buffer[i + 49] == 'y');
b49_8 =(buffer[i + 49] == 'u');
b49_9 =(buffer[i + 49] == 'k');
b49_10 =(buffer[i + 49] == 'r');
b49_11 =(buffer[i + 49] == 'a');
b49_12 =(buffer[i + 49] == 'n');
b49_13 =(buffer[i + 49] == 'p');
b49_14 =(buffer[i + 49] == 'o');
b49_15 =(buffer[i + 49] == 'F');
b49_16 =(buffer[i + 49] == '5');
b49_17 =(buffer[i + 49] == 'M');
b49_18 =(buffer[i + 49] == 'E');
b49_19 =(buffer[i + 49] == '9');
b49_20 =(buffer[i + 49] == '>');
b49_21 =(buffer[i + 49] == 't');
b49_22 =(buffer[i + 49] == ' ');
b49_23 =(buffer[i + 49] == '/');
b49_24 =(buffer[i + 49] == 'g');
b49_25 =(buffer[i + 49] == 'c');
b49_26 =(buffer[i + 49] == 'A');
b49_27 =(buffer[i + 49] == 'O');
b49_28 =(buffer[i + 49] == 'D');
b49_29 =(buffer[i + 49] == 'd');
b49_30 =(buffer[i + 49] == 'U');
b49_31 =(buffer[i + 49] == 'B');
b49_32 =(buffer[i + 49] == '1');
b49_33 =(buffer[i + 49] == '4');
b49_34 =(buffer[i + 49] == '6');
b49_35 =(buffer[i + 49] == '2');
b49_36 =(buffer[i + 49] == ':');
b49_37 =(buffer[i + 49] == ')');
b49_38 =(buffer[i + 49] == 'N');
b49_39 =(buffer[i + 49] == 'm');
b49_40 =(buffer[i + 49] == '[');
b50_1 =(buffer[i + 50] == 't');
b50_2 =(buffer[i + 50] == '0');
b50_3 =(buffer[i + 50] == '1');
b50_4 =(buffer[i + 50] == 'A');
b50_5 =(buffer[i + 50] == 'o');
b50_6 =(buffer[i + 50] == 'd');
b50_7 =(buffer[i + 50] == 'a');
b50_8 =(buffer[i + 50] == 'l');
b50_9 =(buffer[i + 50] == '3');
b50_10 =(buffer[i + 50] == 'L');
b50_11 =(buffer[i + 50] == '2');
b50_12 =(buffer[i + 50] == ' ');
b50_13 =(buffer[i + 50] == 'p');
b50_14 =(buffer[i + 50] == 'v');
b50_15 =(buffer[i + 50] == 'u');
b50_16 =(buffer[i + 50] == 'c');
b50_17 =(buffer[i + 50] == 'e');
b50_18 =(buffer[i + 50] == 'F');
b50_19 =(buffer[i + 50] == 'C');
b50_20 =(buffer[i + 50] == 'S');
b50_21 =(buffer[i + 50] == '|');
b50_22 =(buffer[i + 50] == '<');
b50_23 =(buffer[i + 50] == '/');
b50_24 =(buffer[i + 50] == 'x');
b50_25 =(buffer[i + 50] == 's');
b50_26 =(buffer[i + 50] == '*');
b50_27 =(buffer[i + 50] == 'W');
b50_28 =(buffer[i + 50] == 'E');
b50_29 =(buffer[i + 50] == 'h');
b50_30 =(buffer[i + 50] == ',');
b50_31 =(buffer[i + 50] == 'U');
b50_32 =(buffer[i + 50] == 'i');
b50_33 =(buffer[i + 50] == 'I');
b50_34 =(buffer[i + 50] == ':');
b50_35 =(buffer[i + 50] == 'w');
b50_36 =(buffer[i + 50] == 'B');
b50_37 =(buffer[i + 50] == '6');
b50_38 =(buffer[i + 50] == '9');
b50_39 =(buffer[i + 50] == '5');
b50_40 =(buffer[i + 50] == 'T');
b50_41 =(buffer[i + 50] == '7');
b50_42 =(buffer[i + 50] == '.');
b50_43 =(buffer[i + 50] == 'g');
b50_44 =(buffer[i + 50] == '8');
b51_1 =(buffer[i + 51] == 'h');
b51_2 =(buffer[i + 51] == ' ');
b51_3 =(buffer[i + 51] == '|');
b51_4 =(buffer[i + 51] == '0');
b51_5 =(buffer[i + 51] == 'd');
b51_6 =(buffer[i + 51] == 'l');
b51_7 =(buffer[i + 51] == 'C');
b51_8 =(buffer[i + 51] == 'o');
b51_9 =(buffer[i + 51] == 'p');
b51_10 =(buffer[i + 51] == 'I');
b51_11 =(buffer[i + 51] == '9');
b51_12 =(buffer[i + 51] == '2');
b51_13 =(buffer[i + 51] == '/');
b51_14 =(buffer[i + 51] == 'a');
b51_15 =(buffer[i + 51] == '8');
b51_16 =(buffer[i + 51] == 'c');
b51_17 =(buffer[i + 51] == 'i');
b51_18 =(buffer[i + 51] == 'N');
b51_19 =(buffer[i + 51] == 'B');
b51_20 =(buffer[i + 51] == 't');
b51_21 =(buffer[i + 51] == 'e');
b51_22 =(buffer[i + 51] == 'A');
b51_23 =(buffer[i + 51] == 's');
b51_24 =(buffer[i + 51] == 'H');
b51_25 =(buffer[i + 51] == 'n');
b51_26 =(buffer[i + 51] == 'D');
b51_27 =(buffer[i + 51] == 'W');
b51_28 =(buffer[i + 51] == '.');
b51_29 =(buffer[i + 51] == '1');
b51_30 =(buffer[i + 51] == ':');
b51_31 =(buffer[i + 51] == '7');
b52_1 =(buffer[i + 52] == 'i');
b52_2 =(buffer[i + 52] == 'C');
b52_3 =(buffer[i + 52] == ' ');
b52_4 =(buffer[i + 52] == '0');
b52_5 =(buffer[i + 52] == '|');
b52_6 =(buffer[i + 52] == 'e');
b52_7 =(buffer[i + 52] == '/');
b52_8 =(buffer[i + 52] == 'V');
b52_9 =(buffer[i + 52] == 'o');
b52_10 =(buffer[i + 52] == 'r');
b52_11 =(buffer[i + 52] == 'd');
b52_12 =(buffer[i + 52] == 'F');
b52_13 =(buffer[i + 52] == '2');
b52_14 =(buffer[i + 52] == 'E');
b52_15 =(buffer[i + 52] == '.');
b52_16 =(buffer[i + 52] == '9');
b52_17 =(buffer[i + 52] == 't');
b52_18 =(buffer[i + 52] == '6');
b52_19 =(buffer[i + 52] == 'n');
b52_20 =(buffer[i + 52] == '3');
b52_21 =(buffer[i + 52] == 'm');
b52_22 =(buffer[i + 52] == '*');
b52_23 =(buffer[i + 52] == 'g');
b52_24 =(buffer[i + 52] == 'p');
b52_25 =(buffer[i + 52] == 'c');
b52_26 =(buffer[i + 52] == 'A');
b52_27 =(buffer[i + 52] == '1');
b52_28 =(buffer[i + 52] == '5');
b52_29 =(buffer[i + 52] == '7');
b52_30 =(buffer[i + 52] == '4');
b52_31 =(buffer[i + 52] == 'B');
b52_32 =(buffer[i + 52] == ')');
b52_33 =(buffer[i + 52] == '8');
b53_1 =(buffer[i + 53] == 's');
b53_2 =(buffer[i + 53] == 'D');
b53_3 =(buffer[i + 53] == ' ');
b53_4 =(buffer[i + 53] == '0');
b53_5 =(buffer[i + 53] == 'N');
b53_6 =(buffer[i + 53] == '.');
b53_7 =(buffer[i + 53] == 'V');
b53_8 =(buffer[i + 53] == '1');
b53_9 =(buffer[i + 53] == 'S');
b53_10 =(buffer[i + 53] == 'a');
b53_11 =(buffer[i + 53] == 'e');
b53_12 =(buffer[i + 53] == 'F');
b53_13 =(buffer[i + 53] == '2');
b53_14 =(buffer[i + 53] == 'f');
b53_15 =(buffer[i + 53] == 'm');
b53_16 =(buffer[i + 53] == 't');
b53_17 =(buffer[i + 53] == '|');
b53_18 =(buffer[i + 53] == 'i');
b53_19 =(buffer[i + 53] == 'H');
b53_20 =(buffer[i + 53] == 'A');
b53_21 =(buffer[i + 53] == 'o');
b53_22 =(buffer[i + 53] == 'B');
b53_23 =(buffer[i + 53] == '+');
b53_24 =(buffer[i + 53] == 'b');
b53_25 =(buffer[i + 53] == 'c');
b53_26 =(buffer[i + 53] == '#');
b53_27 =(buffer[i + 53] == 'l');
b53_28 =(buffer[i + 53] == 'n');
b53_29 =(buffer[i + 53] == '-');
b53_30 =(buffer[i + 53] == 'd');
b53_31 =(buffer[i + 53] == ':');
b53_32 =(buffer[i + 53] == 'W');
b53_33 =(buffer[i + 53] == '4');
b53_34 =(buffer[i + 53] == '8');
b53_35 =(buffer[i + 53] == '6');
b53_36 =(buffer[i + 53] == '7');
b53_37 =(buffer[i + 53] == 'E');
b53_38 =(buffer[i + 53] == 'p');
b53_39 =(buffer[i + 53] == ')');
b54_1 =(buffer[i + 54] == 'i');
b54_2 =(buffer[i + 54] == ' ');
b54_3 =(buffer[i + 54] == '|');
b54_4 =(buffer[i + 54] == 'a');
b54_5 =(buffer[i + 54] == '0');
b54_6 =(buffer[i + 54] == 'd');
b54_7 =(buffer[i + 54] == '.');
b54_8 =(buffer[i + 54] == '9');
b54_9 =(buffer[i + 54] == 'r');
b54_10 =(buffer[i + 54] == 'l');
b54_11 =(buffer[i + 54] == '/');
b54_12 =(buffer[i + 54] == '2');
b54_13 =(buffer[i + 54] == 'p');
b54_14 =(buffer[i + 54] == 't');
b54_15 =(buffer[i + 54] == '5');
b54_16 =(buffer[i + 54] == 's');
b54_17 =(buffer[i + 54] == 'n');
b54_18 =(buffer[i + 54] == '3');
b54_19 =(buffer[i + 54] == ':');
b54_20 =(buffer[i + 54] == '-');
b54_21 =(buffer[i + 54] == 'e');
b54_22 =(buffer[i + 54] == 'o');
b54_23 =(buffer[i + 54] == 'T');
b54_24 =(buffer[i + 54] == 'E');
b54_25 =(buffer[i + 54] == 'H');
b54_26 =(buffer[i + 54] == 'W');
b54_27 =(buffer[i + 54] == 'b');
b54_28 =(buffer[i + 54] == 'A');
b54_29 =(buffer[i + 54] == '6');
b54_30 =(buffer[i + 54] == '1');
b54_31 =(buffer[i + 54] == 'G');
b54_32 =(buffer[i + 54] == 'D');
b54_33 =(buffer[i + 54] == 'c');
b55_1 =(buffer[i + 55] == 's');
b55_2 =(buffer[i + 55] == '8');
b55_3 =(buffer[i + 55] == ' ');
b55_4 =(buffer[i + 55] == '0');
b55_5 =(buffer[i + 55] == 'b');
b55_6 =(buffer[i + 55] == 'l');
b55_7 =(buffer[i + 55] == 'C');
b55_8 =(buffer[i + 55] == 'e');
b55_9 =(buffer[i + 55] == 'L');
b55_10 =(buffer[i + 55] == 'i');
b55_11 =(buffer[i + 55] == '.');
b55_12 =(buffer[i + 55] == 'c');
b55_13 =(buffer[i + 55] == 'd');
b55_14 =(buffer[i + 55] == '3');
b55_15 =(buffer[i + 55] == 'D');
b55_16 =(buffer[i + 55] == 'a');
b55_17 =(buffer[i + 55] == '|');
b55_18 =(buffer[i + 55] == 'f');
b55_19 =(buffer[i + 55] == '9');
b55_20 =(buffer[i + 55] == 't');
b55_21 =(buffer[i + 55] == '1');
b55_22 =(buffer[i + 55] == 'n');
b55_23 =(buffer[i + 55] == '2');
b55_24 =(buffer[i + 55] == 'v');
b55_25 =(buffer[i + 55] == 'B');
b55_26 =(buffer[i + 55] == 'E');
b55_27 =(buffer[i + 55] == 'p');
b55_28 =(buffer[i + 55] == ':');
b55_29 =(buffer[i + 55] == 'o');
b55_30 =(buffer[i + 55] == 'w');
b55_31 =(buffer[i + 55] == 'F');
b55_32 =(buffer[i + 55] == 'g');
b55_33 =(buffer[i + 55] == '5');
b55_34 =(buffer[i + 55] == '4');
b56_1 =(buffer[i + 56] == 'l');
b56_2 =(buffer[i + 56] == '0');
b56_3 =(buffer[i + 56] == '|');
b56_4 =(buffer[i + 56] == 'p');
b56_5 =(buffer[i + 56] == 'w');
b56_6 =(buffer[i + 56] == ' ');
b56_7 =(buffer[i + 56] == 'n');
b56_8 =(buffer[i + 56] == 'h');
b56_9 =(buffer[i + 56] == 'o');
b56_10 =(buffer[i + 56] == '8');
b56_11 =(buffer[i + 56] == 'f');
b56_12 =(buffer[i + 56] == 'B');
b56_13 =(buffer[i + 56] == 'm');
b56_14 =(buffer[i + 56] == '3');
b56_15 =(buffer[i + 56] == 's');
b56_16 =(buffer[i + 56] == 'A');
b56_17 =(buffer[i + 56] == '2');
b56_18 =(buffer[i + 56] == 'r');
b56_19 =(buffer[i + 56] == 'E');
b56_20 =(buffer[i + 56] == 'e');
b56_21 =(buffer[i + 56] == ':');
b56_22 =(buffer[i + 56] == 't');
b56_23 =(buffer[i + 56] == 'i');
b56_24 =(buffer[i + 56] == 'c');
b56_25 =(buffer[i + 56] == '/');
b56_26 =(buffer[i + 56] == 'z');
b56_27 =(buffer[i + 56] == 'U');
b56_28 =(buffer[i + 56] == 'd');
b56_29 =(buffer[i + 56] == '5');
b56_30 =(buffer[i + 56] == '4');
b56_31 =(buffer[i + 56] == '7');
b56_32 =(buffer[i + 56] == 'F');
b56_33 =(buffer[i + 56] == 'W');
b56_34 =(buffer[i + 56] == 'C');
b56_35 =(buffer[i + 56] == '1');
b56_36 =(buffer[i + 56] == '6');
b57_1 =(buffer[i + 57] == 'a');
b57_2 =(buffer[i + 57] == ' ');
b57_3 =(buffer[i + 57] == '0');
b57_4 =(buffer[i + 57] == '|');
b57_5 =(buffer[i + 57] == 'C');
b57_6 =(buffer[i + 57] == 't');
b57_7 =(buffer[i + 57] == 'm');
b57_8 =(buffer[i + 57] == 'r');
b57_9 =(buffer[i + 57] == 'e');
b57_10 =(buffer[i + 57] == 'B');
b57_11 =(buffer[i + 57] == '/');
b57_12 =(buffer[i + 57] == '.');
b57_13 =(buffer[i + 57] == 'x');
b57_14 =(buffer[i + 57] == 'd');
b57_15 =(buffer[i + 57] == 'c');
b57_16 =(buffer[i + 57] == '2');
b57_17 =(buffer[i + 57] == 'q');
b57_18 =(buffer[i + 57] == '3');
b57_19 =(buffer[i + 57] == '-');
b57_20 =(buffer[i + 57] == '9');
b57_21 =(buffer[i + 57] == 'o');
b57_22 =(buffer[i + 57] == 'i');
b57_23 =(buffer[i + 57] == 's');
b57_24 =(buffer[i + 57] == 'n');
b57_25 =(buffer[i + 57] == 'k');
b57_26 =(buffer[i + 57] == 'A');
b58_1 =(buffer[i + 58] == 'm');
b58_2 =(buffer[i + 58] == 'E');
b58_3 =(buffer[i + 58] == '2');
b58_4 =(buffer[i + 58] == '0');
b58_5 =(buffer[i + 58] == 'T');
b58_6 =(buffer[i + 58] == 'o');
b58_7 =(buffer[i + 58] == '/');
b58_8 =(buffer[i + 58] == 's');
b58_9 =(buffer[i + 58] == '|');
b58_10 =(buffer[i + 58] == 'F');
b58_11 =(buffer[i + 58] == 'a');
b58_12 =(buffer[i + 58] == '3');
b58_13 =(buffer[i + 58] == ' ');
b58_14 =(buffer[i + 58] == 'A');
b58_15 =(buffer[i + 58] == '>');
b58_16 =(buffer[i + 58] == 'd');
b58_17 =(buffer[i + 58] == 'W');
b58_18 =(buffer[i + 58] == 'L');
b58_19 =(buffer[i + 58] == 'r');
b58_20 =(buffer[i + 58] == 'i');
b58_21 =(buffer[i + 58] == 't');
b58_22 =(buffer[i + 58] == 'e');
b58_23 =(buffer[i + 58] == '=');
b58_24 =(buffer[i + 58] == 'B');
b58_25 =(buffer[i + 58] == 'n');
b58_26 =(buffer[i + 58] == 'h');
b58_27 =(buffer[i + 58] == 'N');
b58_28 =(buffer[i + 58] == ':');
b58_29 =(buffer[i + 58] == 'c');
b58_30 =(buffer[i + 58] == 'p');
b58_31 =(buffer[i + 58] == 'w');
b58_32 =(buffer[i + 58] == '4');
b58_33 =(buffer[i + 58] == '9');
b58_34 =(buffer[i + 58] == 'b');
b59_1 =(buffer[i + 59] == 'e');
b59_2 =(buffer[i + 59] == '8');
b59_3 =(buffer[i + 59] == '|');
b59_4 =(buffer[i + 59] == '0');
b59_5 =(buffer[i + 59] == 'd');
b59_6 =(buffer[i + 59] == ' ');
b59_7 =(buffer[i + 59] == 'F');
b59_8 =(buffer[i + 59] == 'm');
b59_9 =(buffer[i + 59] == 'B');
b59_10 =(buffer[i + 59] == 'W');
b59_11 =(buffer[i + 59] == 'q');
b59_12 =(buffer[i + 59] == '-');
b59_13 =(buffer[i + 59] == 'i');
b59_14 =(buffer[i + 59] == 'O');
b59_15 =(buffer[i + 59] == '3');
b59_16 =(buffer[i + 59] == ')');
b59_17 =(buffer[i + 59] == 't');
b59_18 =(buffer[i + 59] == '.');
b59_19 =(buffer[i + 59] == 'n');
b59_20 =(buffer[i + 59] == 'D');
b59_21 =(buffer[i + 59] == '/');
b59_22 =(buffer[i + 59] == 'T');
b59_23 =(buffer[i + 59] == 'w');
b59_24 =(buffer[i + 59] == ',');
b59_25 =(buffer[i + 59] == 'r');
b59_26 =(buffer[i + 59] == 's');
b59_27 =(buffer[i + 59] == ':');
b59_28 =(buffer[i + 59] == '1');
b59_29 =(buffer[i + 59] == 'N');
b59_30 =(buffer[i + 59] == 'E');
b59_31 =(buffer[i + 59] == '7');
b59_32 =(buffer[i + 59] == 'C');
b59_33 =(buffer[i + 59] == '4');
b59_34 =(buffer[i + 59] == 'K');
b60_1 =(buffer[i + 60] == 'b');
b60_2 =(buffer[i + 60] == ' ');
b60_3 =(buffer[i + 60] == 'a');
b60_4 =(buffer[i + 60] == '|');
b60_5 =(buffer[i + 60] == '0');
b60_6 =(buffer[i + 60] == 'e');
b60_7 =(buffer[i + 60] == 'A');
b60_8 =(buffer[i + 60] == 'i');
b60_9 =(buffer[i + 60] == '=');
b60_10 =(buffer[i + 60] == 'd');
b60_11 =(buffer[i + 60] == 'f');
b60_12 =(buffer[i + 60] == 'n');
b60_13 =(buffer[i + 60] == 'C');
b60_14 =(buffer[i + 60] == 'B');
b60_15 =(buffer[i + 60] == 'v');
b60_16 =(buffer[i + 60] == 'o');
b60_17 =(buffer[i + 60] == '2');
b60_18 =(buffer[i + 60] == 'c');
b60_19 =(buffer[i + 60] == '(');
b60_20 =(buffer[i + 60] == 'D');
b60_21 =(buffer[i + 60] == 'x');
b60_22 =(buffer[i + 60] == '-');
b60_23 =(buffer[i + 60] == 'F');
b60_24 =(buffer[i + 60] == 's');
b60_25 =(buffer[i + 60] == '4');
b60_26 =(buffer[i + 60] == 'T');
b60_27 =(buffer[i + 60] == 'r');
b60_28 =(buffer[i + 60] == '6');
b60_29 =(buffer[i + 60] == 'y');
b60_30 =(buffer[i + 60] == 'h');
b61_1 =(buffer[i + 61] == 'u');
b61_2 =(buffer[i + 61] == '9');
b61_3 =(buffer[i + 61] == '0');
b61_4 =(buffer[i + 61] == '|');
b61_5 =(buffer[i + 61] == 'P');
b61_6 =(buffer[i + 61] == '.');
b61_7 =(buffer[i + 61] == 'E');
b61_8 =(buffer[i + 61] == 'D');
b61_9 =(buffer[i + 61] == ' ');
b61_10 =(buffer[i + 61] == 'b');
b61_11 =(buffer[i + 61] == 'n');
b61_12 =(buffer[i + 61] == 'a');
b61_13 =(buffer[i + 61] == 'H');
b61_14 =(buffer[i + 61] == 'K');
b61_15 =(buffer[i + 61] == 'o');
b61_16 =(buffer[i + 61] == '2');
b61_17 =(buffer[i + 61] == ')');
b61_18 =(buffer[i + 61] == 'M');
b61_19 =(buffer[i + 61] == '-');
b61_20 =(buffer[i + 61] == 'k');
b61_21 =(buffer[i + 61] == 's');
b61_22 =(buffer[i + 61] == 'g');
b61_23 =(buffer[i + 61] == '6');
b61_24 =(buffer[i + 61] == 't');
b61_25 =(buffer[i + 61] == 'd');
b61_26 =(buffer[i + 61] == 'A');
b61_27 =(buffer[i + 61] == 'N');
b61_28 =(buffer[i + 61] == '7');
b61_29 =(buffer[i + 61] == '3');
b61_30 =(buffer[i + 61] == '4');
b61_31 =(buffer[i + 61] == 'r');
b61_32 =(buffer[i + 61] == 'm');
b61_33 =(buffer[i + 61] == 'B');
b62_1 =(buffer[i + 62] == 't');
b62_2 =(buffer[i + 62] == '4');
b62_3 =(buffer[i + 62] == '|');
b62_4 =(buffer[i + 62] == '0');
b62_5 =(buffer[i + 62] == 'a');
b62_6 =(buffer[i + 62] == ' ');
b62_7 =(buffer[i + 62] == 'o');
b62_8 =(buffer[i + 62] == 'W');
b62_9 =(buffer[i + 62] == 'd');
b62_10 =(buffer[i + 62] == '.');
b62_11 =(buffer[i + 62] == 'u');
b62_12 =(buffer[i + 62] == 'E');
b62_13 =(buffer[i + 62] == 'h');
b62_14 =(buffer[i + 62] == 'l');
b62_15 =(buffer[i + 62] == 'n');
b62_16 =(buffer[i + 62] == ':');
b62_17 =(buffer[i + 62] == 'D');
b62_18 =(buffer[i + 62] == 'S');
b62_19 =(buffer[i + 62] == 'g');
b62_20 =(buffer[i + 62] == 'A');
b62_21 =(buffer[i + 62] == 'w');
b62_22 =(buffer[i + 62] == 'i');
b62_23 =(buffer[i + 62] == 'N');
b62_24 =(buffer[i + 62] == '-');
b62_25 =(buffer[i + 62] == 'e');
b62_26 =(buffer[i + 62] == 'T');
b62_27 =(buffer[i + 62] == '6');
b62_28 =(buffer[i + 62] == '5');
b62_29 =(buffer[i + 62] == '3');
b62_30 =(buffer[i + 62] == 'B');
b62_31 =(buffer[i + 62] == '/');
b62_32 =(buffer[i + 62] == 'm');
b62_33 =(buffer[i + 62] == '1');
b62_34 =(buffer[i + 62] == 'C');
b63_1 =(buffer[i + 63] == 'a');
b63_2 =(buffer[i + 63] == ' ');
b63_3 =(buffer[i + 63] == '0');
b63_4 =(buffer[i + 63] == 's');
b63_5 =(buffer[i + 63] == 'D');
b63_6 =(buffer[i + 63] == 'r');
b63_7 =(buffer[i + 63] == 'i');
b63_8 =(buffer[i + 63] == 'o');
b63_9 =(buffer[i + 63] == '9');
b63_10 =(buffer[i + 63] == 'l');
b63_11 =(buffer[i + 63] == 't');
b63_12 =(buffer[i + 63] == 'e');
b63_13 =(buffer[i + 63] == 'u');
b63_14 =(buffer[i + 63] == '+');
b63_15 =(buffer[i + 63] == 'G');
b63_16 =(buffer[i + 63] == 'I');
b63_17 =(buffer[i + 63] == ':');
b63_18 =(buffer[i + 63] == '|');
b63_19 =(buffer[i + 63] == 'A');
b63_20 =(buffer[i + 63] == 'w');
b63_21 =(buffer[i + 63] == 'p');
b63_22 =(buffer[i + 63] == '1');
b63_23 =(buffer[i + 63] == 'T');
b63_24 =(buffer[i + 63] == 'f');
b63_25 =(buffer[i + 63] == '5');
b63_26 =(buffer[i + 63] == '.');
b63_27 =(buffer[i + 63] == 'd');
b64_1 =(buffer[i + 64] == 'n');
b64_2 =(buffer[i + 64] == 'F');
b64_3 =(buffer[i + 64] == '|');
b64_4 =(buffer[i + 64] == '0');
b64_5 =(buffer[i + 64] == 'p');
b64_6 =(buffer[i + 64] == '5');
b64_7 =(buffer[i + 64] == 'd');
b64_8 =(buffer[i + 64] == 'w');
b64_9 =(buffer[i + 64] == ',');
b64_10 =(buffer[i + 64] == 't');
b64_11 =(buffer[i + 64] == 'i');
b64_12 =(buffer[i + 64] == 'e');
b64_13 =(buffer[i + 64] == 'Y');
b64_14 =(buffer[i + 64] == 'K');
b64_15 =(buffer[i + 64] == 'E');
b64_16 =(buffer[i + 64] == ' ');
b64_17 =(buffer[i + 64] == 'l');
b64_18 =(buffer[i + 64] == 'U');
b64_19 =(buffer[i + 64] == '.');
b64_20 =(buffer[i + 64] == 'g');
b64_21 =(buffer[i + 64] == '6');
b64_22 =(buffer[i + 64] == 'C');
b64_23 =(buffer[i + 64] == '3');
b64_24 =(buffer[i + 64] == '2');
b64_25 =(buffer[i + 64] == 's');
b64_26 =(buffer[i + 64] == 'h');
b64_27 =(buffer[i + 64] == '4');
b64_28 =(buffer[i + 64] == '9');
b65_1 =(buffer[i + 65] == 'y');
b65_2 =(buffer[i + 65] == 'F');
b65_3 =(buffer[i + 65] == '0');
b65_4 =(buffer[i + 65] == 'r');
b65_5 =(buffer[i + 65] == '|');
b65_6 =(buffer[i + 65] == ' ');
b65_7 =(buffer[i + 65] == '[');
b65_8 =(buffer[i + 65] == 'f');
b65_9 =(buffer[i + 65] == 'e');
b65_10 =(buffer[i + 65] == 'd');
b65_11 =(buffer[i + 65] == 's');
b65_12 =(buffer[i + 65] == 't');
b65_13 =(buffer[i + 65] == '3');
b65_14 =(buffer[i + 65] == 'R');
b65_15 =(buffer[i + 65] == 'g');
b65_16 =(buffer[i + 65] == 'x');
b65_17 =(buffer[i + 65] == '2');
b65_18 =(buffer[i + 65] == 'c');
b65_19 =(buffer[i + 65] == 'A');
b65_20 =(buffer[i + 65] == 'i');
b65_21 =(buffer[i + 65] == ')');
b65_22 =(buffer[i + 65] == '-');
b65_23 =(buffer[i + 65] == 'a');
b65_24 =(buffer[i + 65] == 'E');
b65_25 =(buffer[i + 65] == '6');
b65_26 =(buffer[i + 65] == '.');
b65_27 =(buffer[i + 65] == '7');
b65_28 =(buffer[i + 65] == 'B');
b65_29 =(buffer[i + 65] == 'u');
b65_30 =(buffer[i + 65] == 'n');
b65_31 =(buffer[i + 65] == '1');
b65_32 =(buffer[i + 65] == 'o');
b65_33 =(buffer[i + 65] == 'D');
b66_1 =(buffer[i + 66] == 'w');
b66_2 =(buffer[i + 66] == ' ');
b66_3 =(buffer[i + 66] == '0');
b66_4 =(buffer[i + 66] == '|');
b66_5 =(buffer[i + 66] == 'h');
b66_6 =(buffer[i + 66] == 'C');
b66_7 =(buffer[i + 66] == 'r');
b66_8 =(buffer[i + 66] == 'o');
b66_9 =(buffer[i + 66] == 'e');
b66_10 =(buffer[i + 66] == 'B');
b66_11 =(buffer[i + 66] == '.');
b66_12 =(buffer[i + 66] == '(');
b66_13 =(buffer[i + 66] == '2');
b66_14 =(buffer[i + 66] == 'k');
b66_15 =(buffer[i + 66] == '7');
b66_16 =(buffer[i + 66] == 'd');
b66_17 =(buffer[i + 66] == ':');
b66_18 =(buffer[i + 66] == 'f');
b66_19 =(buffer[i + 66] == 'y');
b66_20 =(buffer[i + 66] == 'm');
b66_21 =(buffer[i + 66] == 't');
b66_22 =(buffer[i + 66] == '1');
b66_23 =(buffer[i + 66] == '6');
b66_24 =(buffer[i + 66] == 'N');
b66_25 =(buffer[i + 66] == 'A');
b67_1 =(buffer[i + 67] == 'a');
b67_2 =(buffer[i + 67] == 'F');
b67_3 =(buffer[i + 67] == '|');
b67_4 =(buffer[i + 67] == '0');
b67_5 =(buffer[i + 67] == ' ');
b67_6 =(buffer[i + 67] == '=');
b67_7 =(buffer[i + 67] == 'w');
b67_8 =(buffer[i + 67] == 'N');
b67_9 =(buffer[i + 67] == 'x');
b67_10 =(buffer[i + 67] == 'j');
b67_11 =(buffer[i + 67] == 'q');
b67_12 =(buffer[i + 67] == 't');
b67_13 =(buffer[i + 67] == '3');
b67_14 =(buffer[i + 67] == 'p');
b67_15 =(buffer[i + 67] == 'o');
b67_16 =(buffer[i + 67] == 'C');
b67_17 =(buffer[i + 67] == '.');
b67_18 =(buffer[i + 67] == 'e');
b67_19 =(buffer[i + 67] == 'r');
b67_20 =(buffer[i + 67] == 'n');
b67_21 =(buffer[i + 67] == '2');
b67_22 =(buffer[i + 67] == '6');
b67_23 =(buffer[i + 67] == '4');
b67_24 =(buffer[i + 67] == 'D');
b67_25 =(buffer[i + 67] == '/');
b67_26 =(buffer[i + 67] == 'T');
b67_27 =(buffer[i + 67] == '1');
b67_28 =(buffer[i + 67] == 'A');
b67_29 =(buffer[i + 67] == 'B');
b68_1 =(buffer[i + 68] == 'y');
b68_2 =(buffer[i + 68] == 'F');
b68_3 =(buffer[i + 68] == '1');
b68_4 =(buffer[i + 68] == '0');
b68_5 =(buffer[i + 68] == ' ');
b68_6 =(buffer[i + 68] == '|');
b68_7 =(buffer[i + 68] == 's');
b68_8 =(buffer[i + 68] == 'T');
b68_9 =(buffer[i + 68] == 't');
b68_10 =(buffer[i + 68] == 'u');
b68_11 =(buffer[i + 68] == 'B');
b68_12 =(buffer[i + 68] == '-');
b68_13 =(buffer[i + 68] == 'E');
b68_14 =(buffer[i + 68] == '/');
b68_15 =(buffer[i + 68] == 'o');
b68_16 =(buffer[i + 68] == 'n');
b68_17 =(buffer[i + 68] == 'i');
b68_18 =(buffer[i + 68] == 'D');
b68_19 =(buffer[i + 68] == 'r');
b68_20 =(buffer[i + 68] == 'd');
b68_21 =(buffer[i + 68] == 'm');
b68_22 =(buffer[i + 68] == 'M');
b68_23 =(buffer[i + 68] == '3');
b68_24 =(buffer[i + 68] == '4');
b68_25 =(buffer[i + 68] == '7');
b68_26 =(buffer[i + 68] == '6');
b68_27 =(buffer[i + 68] == 'U');
b68_28 =(buffer[i + 68] == 'a');
b68_29 =(buffer[i + 68] == '5');
b68_30 =(buffer[i + 68] == '2');
b68_31 =(buffer[i + 68] == '9');
b68_32 =(buffer[i + 68] == 'C');
b69_1 =(buffer[i + 69] == 'w');
b69_2 =(buffer[i + 69] == ' ');
b69_3 =(buffer[i + 69] == '|');
b69_4 =(buffer[i + 69] == '0');
b69_5 =(buffer[i + 69] == '6');
b69_6 =(buffer[i + 69] == 't');
b69_7 =(buffer[i + 69] == '5');
b69_8 =(buffer[i + 69] == '/');
b69_9 =(buffer[i + 69] == 'b');
b69_10 =(buffer[i + 69] == 'e');
b69_11 =(buffer[i + 69] == '3');
b69_12 =(buffer[i + 69] == 'A');
b69_13 =(buffer[i + 69] == '2');
b69_14 =(buffer[i + 69] == 'n');
b69_15 =(buffer[i + 69] == 'd');
b69_16 =(buffer[i + 69] == 'm');
b69_17 =(buffer[i + 69] == 'D');
b69_18 =(buffer[i + 69] == 'i');
b69_19 =(buffer[i + 69] == 'p');
b69_20 =(buffer[i + 69] == 'o');
b69_21 =(buffer[i + 69] == 'B');
b69_22 =(buffer[i + 69] == '.');
b69_23 =(buffer[i + 69] == 'F');
b69_24 =(buffer[i + 69] == 's');
b70_1 =(buffer[i + 70] == 'h');
b70_2 =(buffer[i + 70] == 'F');
b70_3 =(buffer[i + 70] == '0');
b70_4 =(buffer[i + 70] == 't');
b70_5 =(buffer[i + 70] == '|');
b70_6 =(buffer[i + 70] == ' ');
b70_7 =(buffer[i + 70] == ']');
b70_8 =(buffer[i + 70] == 'o');
b70_9 =(buffer[i + 70] == 'C');
b70_10 =(buffer[i + 70] == 'N');
b70_11 =(buffer[i + 70] == '9');
b70_12 =(buffer[i + 70] == 'p');
b70_13 =(buffer[i + 70] == '2');
b70_14 =(buffer[i + 70] == 's');
b70_15 =(buffer[i + 70] == 'A');
b70_16 =(buffer[i + 70] == 'l');
b70_17 =(buffer[i + 70] == 'a');
b70_18 =(buffer[i + 70] == 'n');
b70_19 =(buffer[i + 70] == '3');
b70_20 =(buffer[i + 70] == 'i');
b70_21 =(buffer[i + 70] == 'e');
b70_22 =(buffer[i + 70] == 'g');
b70_23 =(buffer[i + 70] == '-');
b70_24 =(buffer[i + 70] == 'R');
b70_25 =(buffer[i + 70] == 'B');
b70_26 =(buffer[i + 70] == 'D');
b70_27 =(buffer[i + 70] == 'z');
b70_28 =(buffer[i + 70] == '6');
b70_29 =(buffer[i + 70] == '4');
b70_30 =(buffer[i + 70] == 'c');
b70_31 =(buffer[i + 70] == '(');
b70_32 =(buffer[i + 70] == '.');
b70_33 =(buffer[i + 70] == 'E');
b71_1 =(buffer[i + 71] == 'o');
b71_2 =(buffer[i + 71] == 'F');
b71_3 =(buffer[i + 71] == '0');
b71_4 =(buffer[i + 71] == '|');
b71_5 =(buffer[i + 71] == '.');
b71_6 =(buffer[i + 71] == ' ');
b71_7 =(buffer[i + 71] == 'T');
b71_8 =(buffer[i + 71] == 'l');
b71_9 =(buffer[i + 71] == 'u');
b71_10 =(buffer[i + 71] == '2');
b71_11 =(buffer[i + 71] == 't');
b71_12 =(buffer[i + 71] == 'e');
b71_13 =(buffer[i + 71] == 'i');
b71_14 =(buffer[i + 71] == '1');
b71_15 =(buffer[i + 71] == 'B');
b71_16 =(buffer[i + 71] == 'n');
b71_17 =(buffer[i + 71] == 'A');
b71_18 =(buffer[i + 71] == 'y');
b71_19 =(buffer[i + 71] == '-');
b71_20 =(buffer[i + 71] == 'D');
b71_21 =(buffer[i + 71] == '7');
b71_22 =(buffer[i + 71] == '9');
b71_23 =(buffer[i + 71] == 'K');
b71_24 =(buffer[i + 71] == 'r');
b71_25 =(buffer[i + 71] == '5');
b72_1 =(buffer[i + 72] == 'c');
b72_2 =(buffer[i + 72] == '|');
b72_3 =(buffer[i + 72] == '0');
b72_4 =(buffer[i + 72] == '8');
b72_5 =(buffer[i + 72] == ' ');
b72_6 =(buffer[i + 72] == '2');
b72_7 =(buffer[i + 72] == 'a');
b72_8 =(buffer[i + 72] == 'n');
b72_9 =(buffer[i + 72] == '.');
b72_10 =(buffer[i + 72] == '1');
b72_11 =(buffer[i + 72] == 'v');
b72_12 =(buffer[i + 72] == 'y');
b72_13 =(buffer[i + 72] == 't');
b72_14 =(buffer[i + 72] == 'r');
b72_15 =(buffer[i + 72] == 'o');
b72_16 =(buffer[i + 72] == 'A');
b72_17 =(buffer[i + 72] == 'B');
b72_18 =(buffer[i + 72] == 'l');
b72_19 =(buffer[i + 72] == 'T');
b72_20 =(buffer[i + 72] == 'H');
b72_21 =(buffer[i + 72] == '3');
b72_22 =(buffer[i + 72] == 's');
b72_23 =(buffer[i + 72] == 'e');
b72_24 =(buffer[i + 72] == '-');
b72_25 =(buffer[i + 72] == ')');
b73_1 =(buffer[i + 73] == 'a');
b73_2 =(buffer[i + 73] == '/');
b73_3 =(buffer[i + 73] == '3');
b73_4 =(buffer[i + 73] == '0');
b73_5 =(buffer[i + 73] == '|');
b73_6 =(buffer[i + 73] == '2');
b73_7 =(buffer[i + 73] == '9');
b73_8 =(buffer[i + 73] == 'i');
b73_9 =(buffer[i + 73] == 'd');
b73_10 =(buffer[i + 73] == '>');
b73_11 =(buffer[i + 73] == '5');
b73_12 =(buffer[i + 73] == 'p');
b73_13 =(buffer[i + 73] == 'e');
b73_14 =(buffer[i + 73] == '+');
b73_15 =(buffer[i + 73] == 't');
b73_16 =(buffer[i + 73] == ' ');
b73_17 =(buffer[i + 73] == 'l');
b73_18 =(buffer[i + 73] == 'r');
b73_19 =(buffer[i + 73] == 'R');
b73_20 =(buffer[i + 73] == 'T');
b73_21 =(buffer[i + 73] == 'A');
b73_22 =(buffer[i + 73] == '4');
b73_23 =(buffer[i + 73] == 'C');
b73_24 =(buffer[i + 73] == 'B');
b73_25 =(buffer[i + 73] == 'f');
b73_26 =(buffer[i + 73] == 'E');
b74_1 =(buffer[i + 74] == 'r');
b74_2 =(buffer[i + 74] == 'b');
b74_3 =(buffer[i + 74] == '|');
b74_4 =(buffer[i + 74] == '0');
b74_5 =(buffer[i + 74] == '+');
b74_6 =(buffer[i + 74] == ' ');
b74_7 =(buffer[i + 74] == '.');
b74_8 =(buffer[i + 74] == '3');
b74_9 =(buffer[i + 74] == 'n');
b74_10 =(buffer[i + 74] == 'a');
b74_11 =(buffer[i + 74] == '<');
b74_12 =(buffer[i + 74] == ')');
b74_13 =(buffer[i + 74] == 'x');
b74_14 =(buffer[i + 74] == '2');
b74_15 =(buffer[i + 74] == '1');
b74_16 =(buffer[i + 74] == 'i');
b74_17 =(buffer[i + 74] == 'W');
b74_18 =(buffer[i + 74] == 't');
b74_19 =(buffer[i + 74] == ':');
b74_20 =(buffer[i + 74] == 'e');
b74_21 =(buffer[i + 74] == 'g');
b74_22 =(buffer[i + 74] == 'H');
b74_23 =(buffer[i + 74] == 'D');
b74_24 =(buffer[i + 74] == 'A');
b74_25 =(buffer[i + 74] == '4');
b74_26 =(buffer[i + 74] == 'M');
b74_27 =(buffer[i + 74] == 'B');
b74_28 =(buffer[i + 74] == 'o');
b74_29 =(buffer[i + 74] == 'E');
b75_1 =(buffer[i + 75] == 'e');
b75_2 =(buffer[i + 75] == 'i');
b75_3 =(buffer[i + 75] == '0');
b75_4 =(buffer[i + 75] == '|');
b75_5 =(buffer[i + 75] == ' ');
b75_6 =(buffer[i + 75] == 'r');
b75_7 =(buffer[i + 75] == 'n');
b75_8 =(buffer[i + 75] == 'B');
b75_9 =(buffer[i + 75] == '/');
b75_10 =(buffer[i + 75] == '}');
b75_11 =(buffer[i + 75] == '9');
b75_12 =(buffer[i + 75] == '2');
b75_13 =(buffer[i + 75] == 'o');
b75_14 =(buffer[i + 75] == 'D');
b75_15 =(buffer[i + 75] == 'y');
b75_16 =(buffer[i + 75] == '3');
b75_17 =(buffer[i + 75] == 'U');
b75_18 =(buffer[i + 75] == 'd');
b75_19 =(buffer[i + 75] == 't');
b75_20 =(buffer[i + 75] == 'L');
b75_21 =(buffer[i + 75] == 'x');
b76_1 =(buffer[i + 76] == 's');
b76_2 =(buffer[i + 76] == 'n');
b76_3 =(buffer[i + 76] == '0');
b76_4 =(buffer[i + 76] == '8');
b76_5 =(buffer[i + 76] == '|');
b76_6 =(buffer[i + 76] == 'o');
b76_7 =(buffer[i + 76] == '3');
b76_8 =(buffer[i + 76] == 'y');
b76_9 =(buffer[i + 76] == '<');
b76_10 =(buffer[i + 76] == 'D');
b76_11 =(buffer[i + 76] == '2');
b76_12 =(buffer[i + 76] == '1');
b76_13 =(buffer[i + 76] == ' ');
b76_14 =(buffer[i + 76] == 'M');
b76_15 =(buffer[i + 76] == 'c');
b76_16 =(buffer[i + 76] == 'B');
b76_17 =(buffer[i + 76] == 'd');
b76_18 =(buffer[i + 76] == 'H');
b76_19 =(buffer[i + 76] == '5');
b76_20 =(buffer[i + 76] == 'e');
b76_21 =(buffer[i + 76] == '4');
b76_22 =(buffer[i + 76] == 'C');
b76_23 =(buffer[i + 76] == ',');
b76_24 =(buffer[i + 76] == 'S');
b76_25 =(buffer[i + 76] == '/');
b77_1 =(buffer[i + 77] == 'h');
b77_2 =(buffer[i + 77] == '/');
b77_3 =(buffer[i + 77] == '|');
b77_4 =(buffer[i + 77] == '6');
b77_5 =(buffer[i + 77] == ' ');
b77_6 =(buffer[i + 77] == '8');
b77_7 =(buffer[i + 77] == '0');
b77_8 =(buffer[i + 77] == '3');
b77_9 =(buffer[i + 77] == 'B');
b77_10 =(buffer[i + 77] == '=');
b77_11 =(buffer[i + 77] == 'c');
b77_12 =(buffer[i + 77] == ':');
b77_13 =(buffer[i + 77] == 'd');
b77_14 =(buffer[i + 77] == 'o');
b77_15 =(buffer[i + 77] == 'D');
b77_16 =(buffer[i + 77] == 't');
b77_17 =(buffer[i + 77] == 'A');
b77_18 =(buffer[i + 77] == 'e');
b77_19 =(buffer[i + 77] == '.');
b77_20 =(buffer[i + 77] == 'n');
b77_21 =(buffer[i + 77] == '7');
b77_22 =(buffer[i + 77] == 'F');
b77_23 =(buffer[i + 77] == 'L');
b77_24 =(buffer[i + 77] == 'S');
b77_25 =(buffer[i + 77] == '9');
b78_1 =(buffer[i + 78] == 'o');
b78_2 =(buffer[i + 78] == 's');
b78_3 =(buffer[i + 78] == '8');
b78_4 =(buffer[i + 78] == ' ');
b78_5 =(buffer[i + 78] == '0');
b78_6 =(buffer[i + 78] == '5');
b78_7 =(buffer[i + 78] == 'B');
b78_8 =(buffer[i + 78] == 'e');
b78_9 =(buffer[i + 78] == '|');
b78_10 =(buffer[i + 78] == 'r');
b78_11 =(buffer[i + 78] == 'P');
b78_12 =(buffer[i + 78] == 'l');
b78_13 =(buffer[i + 78] == 'F');
b78_14 =(buffer[i + 78] == 'A');
b78_15 =(buffer[i + 78] == 'D');
b78_16 =(buffer[i + 78] == 'z');
b78_17 =(buffer[i + 78] == 'd');
b78_18 =(buffer[i + 78] == ':');
b78_19 =(buffer[i + 78] == 'n');
b78_20 =(buffer[i + 78] == 't');
b78_21 =(buffer[i + 78] == 'C');
b78_22 =(buffer[i + 78] == 'V');
b78_23 =(buffer[i + 78] == '.');
b79_1 =(buffer[i + 79] == 'r');
b79_2 =(buffer[i + 79] == 'h');
b79_3 =(buffer[i + 79] == '|');
b79_4 =(buffer[i + 79] == '0');
b79_5 =(buffer[i + 79] == 'C');
b79_6 =(buffer[i + 79] == 'n');
b79_7 =(buffer[i + 79] == 'q');
b79_8 =(buffer[i + 79] == 'i');
b79_9 =(buffer[i + 79] == 't');
b79_10 =(buffer[i + 79] == 'A');
b79_11 =(buffer[i + 79] == 'c');
b79_12 =(buffer[i + 79] == 'w');
b79_13 =(buffer[i + 79] == ' ');
b79_14 =(buffer[i + 79] == 'e');
b79_15 =(buffer[i + 79] == 'U');
b79_16 =(buffer[i + 79] == '-');
b79_17 =(buffer[i + 79] == '/');
b79_18 =(buffer[i + 79] == '4');
b79_19 =(buffer[i + 79] == '1');
b80_1 =(buffer[i + 80] == 'i');
b80_2 =(buffer[i + 80] == '|');
b80_3 =(buffer[i + 80] == '0');
b80_4 =(buffer[i + 80] == '1');
b80_5 =(buffer[i + 80] == ' ');
b80_6 =(buffer[i + 80] == 'D');
b80_7 =(buffer[i + 80] == '-');
b80_8 =(buffer[i + 80] == '=');
b80_9 =(buffer[i + 80] == 'p');
b80_10 =(buffer[i + 80] == 'y');
b80_11 =(buffer[i + 80] == 'e');
b80_12 =(buffer[i + 80] == '2');
b80_13 =(buffer[i + 80] == 'd');
b80_14 =(buffer[i + 80] == 'r');
b80_15 =(buffer[i + 80] == 'l');
b80_16 =(buffer[i + 80] == 's');
b80_17 =(buffer[i + 80] == 'U');
b80_18 =(buffer[i + 80] == 'A');
b80_19 =(buffer[i + 80] == 'v');
b80_20 =(buffer[i + 80] == '/');
b80_21 =(buffer[i + 80] == ':');
b80_22 =(buffer[i + 80] == '5');
b80_23 =(buffer[i + 80] == '7');
b80_24 =(buffer[i + 80] == '8');
b80_25 =(buffer[i + 80] == 'k');
b80_26 =(buffer[i + 80] == ')');
b80_27 =(buffer[i + 80] == '.');
b80_28 =(buffer[i + 80] == 'M');
b80_29 =(buffer[i + 80] == '9');
b81_1 =(buffer[i + 81] == 'z');
b81_2 =(buffer[i + 81] == '0');
b81_3 =(buffer[i + 81] == ' ');
b81_4 =(buffer[i + 81] == '|');
b81_5 =(buffer[i + 81] == '2');
b81_6 =(buffer[i + 81] == 'e');
b81_7 =(buffer[i + 81] == 'U');
b81_8 =(buffer[i + 81] == 't');
b81_9 =(buffer[i + 81] == 'l');
b81_10 =(buffer[i + 81] == 's');
b81_11 =(buffer[i + 81] == 'o');
b81_12 =(buffer[i + 81] == 'A');
b81_13 =(buffer[i + 81] == ':');
b81_14 =(buffer[i + 81] == '4');
b81_15 =(buffer[i + 81] == 'g');
b81_16 =(buffer[i + 81] == 'D');
b81_17 =(buffer[i + 81] == '.');
b81_18 =(buffer[i + 81] == '1');
b82_1 =(buffer[i + 82] == 'o');
b82_2 =(buffer[i + 82] == 'A');
b82_3 =(buffer[i + 82] == '|');
b82_4 =(buffer[i + 82] == '0');
b82_5 =(buffer[i + 82] == '2');
b82_6 =(buffer[i + 82] == 'n');
b82_7 =(buffer[i + 82] == 'S');
b82_8 =(buffer[i + 82] == '.');
b82_9 =(buffer[i + 82] == '>');
b82_10 =(buffer[i + 82] == 'e');
b82_11 =(buffer[i + 82] == 't');
b82_12 =(buffer[i + 82] == 'D');
b82_13 =(buffer[i + 82] == 'f');
b82_14 =(buffer[i + 82] == 's');
b82_15 =(buffer[i + 82] == 'N');
b82_16 =(buffer[i + 82] == 'a');
b82_17 =(buffer[i + 82] == 'r');
b82_18 =(buffer[i + 82] == '1');
b82_19 =(buffer[i + 82] == ' ');
b82_20 =(buffer[i + 82] == '4');
b82_21 =(buffer[i + 82] == '3');
b82_22 =(buffer[i + 82] == 'z');
b82_23 =(buffer[i + 82] == 'E');
b83_1 =(buffer[i + 83] == 'n');
b83_2 =(buffer[i + 83] == '|');
b83_3 =(buffer[i + 83] == '1');
b83_4 =(buffer[i + 83] == '2');
b83_5 =(buffer[i + 83] == ' ');
b83_6 =(buffer[i + 83] == '0');
b83_7 =(buffer[i + 83] == '-');
b83_8 =(buffer[i + 83] == ')');
b83_9 =(buffer[i + 83] == '8');
b83_10 =(buffer[i + 83] == '>');
b83_11 =(buffer[i + 83] == 'o');
b83_12 =(buffer[i + 83] == '+');
b83_13 =(buffer[i + 83] == 'e');
b83_14 =(buffer[i + 83] == 'T');
b83_15 =(buffer[i + 83] == 'r');
b83_16 =(buffer[i + 83] == 'U');
b83_17 =(buffer[i + 83] == '/');
b83_18 =(buffer[i + 83] == 'D');
b83_19 =(buffer[i + 83] == '.');
b83_20 =(buffer[i + 83] == '7');
b83_21 =(buffer[i + 83] == '4');
b83_22 =(buffer[i + 83] == 'G');
b83_23 =(buffer[i + 83] == 'B');
b83_24 =(buffer[i + 83] == 'i');
b83_25 =(buffer[i + 83] == 'A');
b84_1 =(buffer[i + 84] == 'g');
b84_2 =(buffer[i + 84] == ' ');
b84_3 =(buffer[i + 84] == '0');
b84_4 =(buffer[i + 84] == '|');
b84_5 =(buffer[i + 84] == 'U');
b84_6 =(buffer[i + 84] == ',');
b84_7 =(buffer[i + 84] == '<');
b84_8 =(buffer[i + 84] == '/');
b84_9 =(buffer[i + 84] == 'x');
b84_10 =(buffer[i + 84] == '-');
b84_11 =(buffer[i + 84] == 's');
b84_12 =(buffer[i + 84] == '4');
b84_13 =(buffer[i + 84] == 'A');
b84_14 =(buffer[i + 84] == '9');
b84_15 =(buffer[i + 84] == 't');
b84_16 =(buffer[i + 84] == 'e');
b84_17 =(buffer[i + 84] == 'D');
b84_18 =(buffer[i + 84] == 'l');
b85_1 =(buffer[i + 85] == 'o');
b85_2 =(buffer[i + 85] == '0');
b85_3 =(buffer[i + 85] == 'u');
b85_4 =(buffer[i + 85] == 'a');
b85_5 =(buffer[i + 85] == 'S');
b85_6 =(buffer[i + 85] == 'i');
b85_7 =(buffer[i + 85] == 'd');
b85_8 =(buffer[i + 85] == '2');
b85_9 =(buffer[i + 85] == 'A');
b85_10 =(buffer[i + 85] == '/');
b85_11 =(buffer[i + 85] == '5');
b85_12 =(buffer[i + 85] == 'e');
b85_13 =(buffer[i + 85] == '.');
b85_14 =(buffer[i + 85] == 'g');
b85_15 =(buffer[i + 85] == ':');
b85_16 =(buffer[i + 85] == '|');
b85_17 =(buffer[i + 85] == '4');
b85_18 =(buffer[i + 85] == 'D');
b85_19 =(buffer[i + 85] == 'c');
b85_20 =(buffer[i + 85] == '6');
b85_21 =(buffer[i + 85] == ' ');
b85_22 =(buffer[i + 85] == 'l');
b86_1 =(buffer[i + 86] == 't');
b86_2 =(buffer[i + 86] == '1');
b86_3 =(buffer[i + 86] == '|');
b86_4 =(buffer[i + 86] == '0');
b86_5 =(buffer[i + 86] == 'l');
b86_6 =(buffer[i + 86] == 'D');
b86_7 =(buffer[i + 86] == 'm');
b86_8 =(buffer[i + 86] == 'i');
b86_9 =(buffer[i + 86] == '.');
b86_10 =(buffer[i + 86] == '2');
b86_11 =(buffer[i + 86] == 'g');
b86_12 =(buffer[i + 86] == 'r');
b86_13 =(buffer[i + 86] == 'A');
b86_14 =(buffer[i + 86] == 'e');
b86_15 =(buffer[i + 86] == ' ');
b86_16 =(buffer[i + 86] == 'H');
b86_17 =(buffer[i + 86] == 'E');
b86_18 =(buffer[i + 86] == '3');
b86_19 =(buffer[i + 86] == 'k');
b86_20 =(buffer[i + 86] == 'a');
b87_1 =(buffer[i + 87] == 'i');
b87_2 =(buffer[i + 87] == ' ');
b87_3 =(buffer[i + 87] == '0');
b87_4 =(buffer[i + 87] == '2');
b87_5 =(buffer[i + 87] == 'a');
b87_6 =(buffer[i + 87] == 'v');
b87_7 =(buffer[i + 87] == '9');
b87_8 =(buffer[i + 87] == '|');
b87_9 =(buffer[i + 87] == '3');
b87_10 =(buffer[i + 87] == '1');
b87_11 =(buffer[i + 87] == 'e');
b87_12 =(buffer[i + 87] == '-');
b87_13 =(buffer[i + 87] == 'n');
b87_14 =(buffer[i + 87] == 'b');
b87_15 =(buffer[i + 87] == 'M');
b87_16 =(buffer[i + 87] == 'o');
b87_17 =(buffer[i + 87] == 'N');
b87_18 =(buffer[i + 87] == 'r');
b87_19 =(buffer[i + 87] == 'A');
b87_20 =(buffer[i + 87] == '/');
b88_1 =(buffer[i + 88] == 't');
b88_2 =(buffer[i + 88] == '0');
b88_3 =(buffer[i + 88] == '5');
b88_4 =(buffer[i + 88] == 'g');
b88_5 =(buffer[i + 88] == '9');
b88_6 =(buffer[i + 88] == '>');
b88_7 =(buffer[i + 88] == '.');
b88_8 =(buffer[i + 88] == 'e');
b88_9 =(buffer[i + 88] == '|');
b88_10 =(buffer[i + 88] == 'n');
b88_11 =(buffer[i + 88] == 'A');
b88_12 =(buffer[i + 88] == '(');
b88_13 =(buffer[i + 88] == 'U');
b88_14 =(buffer[i + 88] == 'o');
b88_15 =(buffer[i + 88] == 's');
b88_16 =(buffer[i + 88] == '6');
b88_17 =(buffer[i + 88] == '8');
b88_18 =(buffer[i + 88] == ')');
b88_19 =(buffer[i + 88] == 'E');
b88_20 =(buffer[i + 88] == '4');
b89_1 =(buffer[i + 89] == 'w');
b89_2 =(buffer[i + 89] == '1');
b89_3 =(buffer[i + 89] == 'C');
b89_4 =(buffer[i + 89] == '|');
b89_5 =(buffer[i + 89] == 'n');
b89_6 =(buffer[i + 89] == 'A');
b89_7 =(buffer[i + 89] == 'e');
b89_8 =(buffer[i + 89] == '0');
b89_9 =(buffer[i + 89] == '3');
b89_10 =(buffer[i + 89] == 't');
b89_11 =(buffer[i + 89] == 'g');
b89_12 =(buffer[i + 89] == 's');
b89_13 =(buffer[i + 89] == ':');
b89_14 =(buffer[i + 89] == ')');
b89_15 =(buffer[i + 89] == 'z');
b89_16 =(buffer[i + 89] == '7');
b89_17 =(buffer[i + 89] == '9');
b89_18 =(buffer[i + 89] == ' ');
b89_19 =(buffer[i + 89] == 'T');
b89_20 =(buffer[i + 89] == '.');
b89_21 =(buffer[i + 89] == 'D');
b90_1 =(buffer[i + 90] == 'o');
b90_2 =(buffer[i + 90] == ' ');
b90_3 =(buffer[i + 90] == 's');
b90_4 =(buffer[i + 90] == '=');
b90_5 =(buffer[i + 90] == '|');
b90_6 =(buffer[i + 90] == '/');
b90_7 =(buffer[i + 90] == '6');
b90_8 =(buffer[i + 90] == '2');
b90_9 =(buffer[i + 90] == 'B');
b90_10 =(buffer[i + 90] == ':');
b90_11 =(buffer[i + 90] == 'e');
b90_12 =(buffer[i + 90] == 'i');
b90_13 =(buffer[i + 90] == 'n');
b90_14 =(buffer[i + 90] == 'C');
b90_15 =(buffer[i + 90] == '0');
b91_1 =(buffer[i + 91] == 'r');
b91_2 =(buffer[i + 91] == '0');
b91_3 =(buffer[i + 91] == '|');
b91_4 =(buffer[i + 91] == 'p');
b91_5 =(buffer[i + 91] == '8');
b91_6 =(buffer[i + 91] == '2');
b91_7 =(buffer[i + 91] == 'U');
b91_8 =(buffer[i + 91] == ' ');
b91_9 =(buffer[i + 91] == 'n');
b91_10 =(buffer[i + 91] == 'M');
b91_11 =(buffer[i + 91] == 'G');
b91_12 =(buffer[i + 91] == 'l');
b91_13 =(buffer[i + 91] == 'C');
b91_14 =(buffer[i + 91] == '4');
b91_15 =(buffer[i + 91] == 'h');
b91_16 =(buffer[i + 91] == 'D');
b91_17 =(buffer[i + 91] == 'A');
b92_1 =(buffer[i + 92] == 'k');
b92_2 =(buffer[i + 92] == '5');
b92_3 =(buffer[i + 92] == '0');
b92_4 =(buffer[i + 92] == 'n');
b92_5 =(buffer[i + 92] == ' ');
b92_6 =(buffer[i + 92] == '|');
b92_7 =(buffer[i + 92] == 's');
b92_8 =(buffer[i + 92] == 'M');
b92_9 =(buffer[i + 92] == 't');
b92_10 =(buffer[i + 92] == '-');
b92_11 =(buffer[i + 92] == 'o');
b92_12 =(buffer[i + 92] == 'e');
b92_13 =(buffer[i + 92] == 'l');
b92_14 =(buffer[i + 92] == '7');
b92_15 =(buffer[i + 92] == '2');
b92_16 =(buffer[i + 92] == 'r');
b92_17 =(buffer[i + 92] == 'L');
b92_18 =(buffer[i + 92] == '(');
b93_1 =(buffer[i + 93] == 'i');
b93_2 =(buffer[i + 93] == ' ');
b93_3 =(buffer[i + 93] == '0');
b93_4 =(buffer[i + 93] == 'C');
b93_5 =(buffer[i + 93] == 'g');
b93_6 =(buffer[i + 93] == 'V');
b93_7 =(buffer[i + 93] == '+');
b93_8 =(buffer[i + 93] == 'e');
b93_9 =(buffer[i + 93] == 'T');
b93_10 =(buffer[i + 93] == 'o');
b93_11 =(buffer[i + 93] == ':');
b93_12 =(buffer[i + 93] == 'A');
b93_13 =(buffer[i + 93] == 'z');
b93_14 =(buffer[i + 93] == 'c');
b93_15 =(buffer[i + 93] == 'a');
b93_16 =(buffer[i + 93] == 'n');
b93_17 =(buffer[i + 93] == 'S');
b93_18 =(buffer[i + 93] == 'R');
b93_19 =(buffer[i + 93] == 'W');
b94_1 =(buffer[i + 94] == 'n');
b94_2 =(buffer[i + 94] == '0');
b94_3 =(buffer[i + 94] == '|');
b94_4 =(buffer[i + 94] == ' ');
b94_5 =(buffer[i + 94] == ',');
b94_6 =(buffer[i + 94] == 'e');
b94_7 =(buffer[i + 94] == 'r');
b94_8 =(buffer[i + 94] == 'z');
b94_9 =(buffer[i + 94] == 'g');
b94_10 =(buffer[i + 94] == 'i');
b94_11 =(buffer[i + 94] == 'k');
b94_12 =(buffer[i + 94] == '/');
b94_13 =(buffer[i + 94] == 't');
b94_14 =(buffer[i + 94] == '4');
b94_15 =(buffer[i + 94] == 'D');
b94_16 =(buffer[i + 94] == 'm');
b94_17 =(buffer[i + 94] == 'A');
b94_18 =(buffer[i + 94] == 'V');
b94_19 =(buffer[i + 94] == 'E');
b95_1 =(buffer[i + 95] == 'g');
b95_2 =(buffer[i + 95] == '0');
b95_3 =(buffer[i + 95] == 'e');
b95_4 =(buffer[i + 95] == '2');
b95_5 =(buffer[i + 95] == '*');
b95_6 =(buffer[i + 95] == 'r');
b95_7 =(buffer[i + 95] == 'f');
b95_8 =(buffer[i + 95] == '-');
b95_9 =(buffer[i + 95] == 'i');
b95_10 =(buffer[i + 95] == 'M');
b95_11 =(buffer[i + 95] == 'l');
b95_12 =(buffer[i + 95] == 'o');
b95_13 =(buffer[i + 95] == '7');
b95_14 =(buffer[i + 95] == 'F');
b95_15 =(buffer[i + 95] == '<');
b95_16 =(buffer[i + 95] == '|');
b95_17 =(buffer[i + 95] == '1');
b95_18 =(buffer[i + 95] == 'n');
b96_1 =(buffer[i + 96] == 's');
b96_2 =(buffer[i + 96] == ' ');
b96_3 =(buffer[i + 96] == '|');
b96_4 =(buffer[i + 96] == '2');
b96_5 =(buffer[i + 96] == '/');
b96_6 =(buffer[i + 96] == 'A');
b96_7 =(buffer[i + 96] == 'd');
b96_8 =(buffer[i + 96] == 'l');
b96_9 =(buffer[i + 96] == 'o');
b96_10 =(buffer[i + 96] == 'n');
b96_11 =(buffer[i + 96] == 'H');
b96_12 =(buffer[i + 96] == '.');
b97_1 =(buffer[i + 97] == 'o');
b97_2 =(buffer[i + 97] == '0');
b97_3 =(buffer[i + 97] == '|');
b97_4 =(buffer[i + 97] == '*');
b97_5 =(buffer[i + 97] == 'i');
b97_6 =(buffer[i + 97] == 'g');
b97_7 =(buffer[i + 97] == 'e');
b97_8 =(buffer[i + 97] == 'l');
b97_9 =(buffer[i + 97] == 'z');
b97_10 =(buffer[i + 97] == 't');
b97_11 =(buffer[i + 97] == 'a');
b97_12 =(buffer[i + 97] == '2');
b97_13 =(buffer[i + 97] == 'C');
b97_14 =(buffer[i + 97] == '3');
b98_1 =(buffer[i + 98] == 'a');
b98_2 =(buffer[i + 98] == '5');
b98_3 =(buffer[i + 98] == '0');
b98_4 =(buffer[i + 98] == 'c');
b98_5 =(buffer[i + 98] == '|');
b98_6 =(buffer[i + 98] == 'o');
b98_7 =(buffer[i + 98] == 'm');
b98_8 =(buffer[i + 98] == 'e');
b98_9 =(buffer[i + 98] == 'n');
b98_10 =(buffer[i + 98] == 'i');
b98_11 =(buffer[i + 98] == ':');
b98_12 =(buffer[i + 98] == '/');
b98_13 =(buffer[i + 98] == '-');
b98_14 =(buffer[i + 98] == '2');
b98_15 =(buffer[i + 98] == 's');
b98_16 =(buffer[i + 98] == 'B');
b98_17 =(buffer[i + 98] == '.');
b98_18 =(buffer[i + 98] == 'w');
b99_1 =(buffer[i + 99] == 'l');
b99_2 =(buffer[i + 99] == ' ');
b99_3 =(buffer[i + 99] == '|');
b99_4 =(buffer[i + 99] == 'e');
b99_5 =(buffer[i + 99] == '3');
b99_6 =(buffer[i + 99] == 'n');
b99_7 =(buffer[i + 99] == 't');
b99_8 =(buffer[i + 99] == '/');
b99_9 =(buffer[i + 99] == '0');
b99_10 =(buffer[i + 99] == 'T');
b99_11 =(buffer[i + 99] == '.');
b99_12 =(buffer[i + 99] == '5');
b99_13 =(buffer[i + 99] == 's');
b100_1 =(buffer[i + 100] == 'l');
b100_2 =(buffer[i + 100] == '0');
b100_3 =(buffer[i + 100] == 'r');
b100_4 =(buffer[i + 100] == 'n');
b100_5 =(buffer[i + 100] == 'B');
b100_6 =(buffer[i + 100] == '/');
b100_7 =(buffer[i + 100] == '2');
b100_8 =(buffer[i + 100] == 't');
b100_9 =(buffer[i + 100] == '3');
b100_10 =(buffer[i + 100] == 'M');
b100_11 =(buffer[i + 100] == '.');
b100_12 =(buffer[i + 100] == '9');
b100_13 =(buffer[i + 100] == 'y');
b100_14 =(buffer[i + 100] == '8');
b100_15 =(buffer[i + 100] == ':');
b100_16 =(buffer[i + 100] == ' ');
b101_1 =(buffer[i + 101] == 'i');
b101_2 =(buffer[i + 101] == '0');
b101_3 =(buffer[i + 101] == '1');
b101_4 =(buffer[i + 101] == '|');
b101_5 =(buffer[i + 101] == 't');
b101_6 =(buffer[i + 101] == '2');
b101_7 =(buffer[i + 101] == ':');
b101_8 =(buffer[i + 101] == '4');
b101_9 =(buffer[i + 101] == '.');
b101_10 =(buffer[i + 101] == 'a');
b101_11 =(buffer[i + 101] == 'o');
b101_12 =(buffer[i + 101] == 'p');
b101_13 =(buffer[i + 101] == '7');
b101_14 =(buffer[i + 101] == ' ');
b101_15 =(buffer[i + 101] == 'N');
b102_1 =(buffer[i + 102] == 's');
b102_2 =(buffer[i + 102] == '|');
b102_3 =(buffer[i + 102] == ' ');
b102_4 =(buffer[i + 102] == '0');
b102_5 =(buffer[i + 102] == 'e');
b102_6 =(buffer[i + 102] == 'q');
b102_7 =(buffer[i + 102] == '1');
b102_8 =(buffer[i + 102] == '.');
b102_9 =(buffer[i + 102] == '/');
b102_10 =(buffer[i + 102] == 'z');
b102_11 =(buffer[i + 102] == '2');
b102_12 =(buffer[i + 102] == 'w');
b102_13 =(buffer[i + 102] == 'N');
b102_14 =(buffer[i + 102] == 'T');
b103_1 =(buffer[i + 103] == 'c');
b103_2 =(buffer[i + 103] == '0');
b103_3 =(buffer[i + 103] == 'r');
b103_4 =(buffer[i + 103] == '=');
b103_5 =(buffer[i + 103] == '.');
b103_6 =(buffer[i + 103] == '+');
b103_7 =(buffer[i + 103] == ' ');
b103_8 =(buffer[i + 103] == '3');
b103_9 =(buffer[i + 103] == 'i');
b103_10 =(buffer[i + 103] == '(');
b103_11 =(buffer[i + 103] == ':');
b103_12 =(buffer[i + 103] == '8');
b103_13 =(buffer[i + 103] == '9');
b103_14 =(buffer[i + 103] == 'E');
b103_15 =(buffer[i + 103] == '7');
b104_1 =(buffer[i + 104] == 'o');
b104_2 =(buffer[i + 104] == '0');
b104_3 =(buffer[i + 104] == '|');
b104_4 =(buffer[i + 104] == '5');
b104_5 =(buffer[i + 104] == '(');
b104_6 =(buffer[i + 104] == ')');
b104_7 =(buffer[i + 104] == '.');
b104_8 =(buffer[i + 104] == 'l');
b104_9 =(buffer[i + 104] == 'c');
b104_10 =(buffer[i + 104] == '4');
b104_11 =(buffer[i + 104] == ' ');
b104_12 =(buffer[i + 104] == 'A');
b104_13 =(buffer[i + 104] == '1');
b104_14 =(buffer[i + 104] == 'n');
b104_15 =(buffer[i + 104] == 'T');
b104_16 =(buffer[i + 104] == '6');
b105_1 =(buffer[i + 105] == 'o');
b105_2 =(buffer[i + 105] == ' ');
b105_3 =(buffer[i + 105] == '5');
b105_4 =(buffer[i + 105] == '.');
b105_5 =(buffer[i + 105] == '2');
b105_6 =(buffer[i + 105] == '(');
b105_7 =(buffer[i + 105] == '|');
b105_8 =(buffer[i + 105] == 'c');
b105_9 =(buffer[i + 105] == '0');
b105_10 =(buffer[i + 105] == 'l');
b105_11 =(buffer[i + 105] == 'a');
b105_12 =(buffer[i + 105] == '6');
b105_13 =(buffer[i + 105] == 'd');
b105_14 =(buffer[i + 105] == '4');
b105_15 =(buffer[i + 105] == '3');
b106_1 =(buffer[i + 106] == 'l');
b106_2 =(buffer[i + 106] == '0');
b106_3 =(buffer[i + 106] == '|');
b106_4 =(buffer[i + 106] == 'C');
b106_5 =(buffer[i + 106] == '5');
b106_6 =(buffer[i + 106] == 'f');
b106_7 =(buffer[i + 106] == 'o');
b106_8 =(buffer[i + 106] == ' ');
b106_9 =(buffer[i + 106] == 'a');
b106_10 =(buffer[i + 106] == 'm');
b106_11 =(buffer[i + 106] == 'F');
b106_12 =(buffer[i + 106] == 'p');
b106_13 =(buffer[i + 106] == '.');
b106_14 =(buffer[i + 106] == 'B');
b106_15 =(buffer[i + 106] == '1');
b107_1 =(buffer[i + 107] == '0');
b107_2 =(buffer[i + 107] == ' ');
b107_3 =(buffer[i + 107] == '|');
b107_4 =(buffer[i + 107] == ')');
b107_5 =(buffer[i + 107] == 'D');
b107_6 =(buffer[i + 107] == 'm');
b107_7 =(buffer[i + 107] == '(');
b107_8 =(buffer[i + 107] == '/');
b107_9 =(buffer[i + 107] == 'p');
b107_10 =(buffer[i + 107] == 'i');
b107_11 =(buffer[i + 107] == 'C');
b107_12 =(buffer[i + 107] == '1');
b107_13 =(buffer[i + 107] == 'w');
b108_1 =(buffer[i + 108] == ' ');
b108_2 =(buffer[i + 108] == '0');
b108_3 =(buffer[i + 108] == '2');
b108_4 =(buffer[i + 108] == 'D');
b108_5 =(buffer[i + 108] == '?');
b108_6 =(buffer[i + 108] == 'p');
b108_7 =(buffer[i + 108] == 'c');
b108_8 =(buffer[i + 108] == '5');
b108_9 =(buffer[i + 108] == 'a');
b108_10 =(buffer[i + 108] == 'r');
b108_11 =(buffer[i + 108] == 'l');
b108_12 =(buffer[i + 108] == '1');
b108_13 =(buffer[i + 108] == 's');
b108_14 =(buffer[i + 108] == 'C');
b108_15 =(buffer[i + 108] == '3');
b109_1 =(buffer[i + 109] == '0');
b109_2 =(buffer[i + 109] == '|');
b109_3 =(buffer[i + 109] == '2');
b109_4 =(buffer[i + 109] == 'D');
b109_5 =(buffer[i + 109] == ' ');
b109_6 =(buffer[i + 109] == 'a');
b109_7 =(buffer[i + 109] == 'o');
b109_8 =(buffer[i + 109] == '.');
b109_9 =(buffer[i + 109] == 't');
b109_10 =(buffer[i + 109] == 'e');
b109_11 =(buffer[i + 109] == 'i');
b109_12 =(buffer[i + 109] == '8');
b109_13 =(buffer[i + 109] == '4');
b109_14 =(buffer[i + 109] == 'u');
b109_15 =(buffer[i + 109] == 'B');
b110_1 =(buffer[i + 110] == '0');
b110_2 =(buffer[i + 110] == '\'');
b110_3 =(buffer[i + 110] == '|');
b110_4 =(buffer[i + 110] == ' ');
b110_5 =(buffer[i + 110] == '2');
b110_6 =(buffer[i + 110] == 'm');
b110_7 =(buffer[i + 110] == 'A');
b110_8 =(buffer[i + 110] == 't');
b110_9 =(buffer[i + 110] == 'i');
b110_10 =(buffer[i + 110] == 'f');
b110_11 =(buffer[i + 110] == 'c');
b110_12 =(buffer[i + 110] == '7');
b110_13 =(buffer[i + 110] == 'p');
b110_14 =(buffer[i + 110] == '3');
b110_15 =(buffer[i + 110] == 'N');
b111_1 =(buffer[i + 111] == ' ');
b111_2 =(buffer[i + 111] == '|');
b111_3 =(buffer[i + 111] == '0');
b111_4 =(buffer[i + 111] == 'A');
b111_5 =(buffer[i + 111] == '2');
b111_6 =(buffer[i + 111] == 'i');
b111_7 =(buffer[i + 111] == 'p');
b111_8 =(buffer[i + 111] == 'b');
b111_9 =(buffer[i + 111] == 'o');
b111_10 =(buffer[i + 111] == 'a');
b111_11 =(buffer[i + 111] == 'S');
b111_12 =(buffer[i + 111] == 'd');
b111_13 =(buffer[i + 111] == 'B');
b111_14 =(buffer[i + 111] == 'E');
b112_1 =(buffer[i + 112] == '0');
b112_2 =(buffer[i + 112] == 'h');
b112_3 =(buffer[i + 112] == 'A');
b112_4 =(buffer[i + 112] == '|');
b112_5 =(buffer[i + 112] == 'H');
b112_6 =(buffer[i + 112] == 'b');
b112_7 =(buffer[i + 112] == 'a');
b112_8 =(buffer[i + 112] == '(');
b112_9 =(buffer[i + 112] == 'l');
b112_10 =(buffer[i + 112] == 'x');
b112_11 =(buffer[i + 112] == 't');
b112_12 =(buffer[i + 112] == 'T');
b112_13 =(buffer[i + 112] == 'W');
b113_1 =(buffer[i + 113] == '1');
b113_2 =(buffer[i + 113] == '0');
b113_3 =(buffer[i + 113] == 'e');
b113_4 =(buffer[i + 113] == '|');
b113_5 =(buffer[i + 113] == 'o');
b113_6 =(buffer[i + 113] == 'l');
b113_7 =(buffer[i + 113] == 't');
b113_8 =(buffer[i + 113] == 'W');
b113_9 =(buffer[i + 113] == '/');
b113_10 =(buffer[i + 113] == 'i');
b113_11 =(buffer[i + 113] == 'f');
b113_12 =(buffer[i + 113] == ' ');
b113_13 =(buffer[i + 113] == 'O');
b114_1 =(buffer[i + 114] == ' ');
b114_2 =(buffer[i + 114] == '|');
b114_3 =(buffer[i + 114] == 'i');
b114_4 =(buffer[i + 114] == 's');
b114_5 =(buffer[i + 114] == 'e');
b114_6 =(buffer[i + 114] == '3');
b114_7 =(buffer[i + 114] == 'o');
b114_8 =(buffer[i + 114] == 'a');
b114_9 =(buffer[i + 114] == '.');
b114_10 =(buffer[i + 114] == 'C');
b114_11 =(buffer[i + 114] == 'W');
b115_1 =(buffer[i + 115] == '0');
b115_2 =(buffer[i + 115] == 's');
b115_3 =(buffer[i + 115] == 'g');
b115_4 =(buffer[i + 115] == '2');
b115_5 =(buffer[i + 115] == ' ');
b115_6 =(buffer[i + 115] == 't');
b115_7 =(buffer[i + 115] == '|');
b115_8 =(buffer[i + 115] == 'b');
b115_9 =(buffer[i + 115] == 'n');
b115_10 =(buffer[i + 115] == '3');
b115_11 =(buffer[i + 115] == '.');
b115_12 =(buffer[i + 115] == 'r');
b115_13 =(buffer[i + 115] == 'N');
b115_14 =(buffer[i + 115] == 'L');
b115_15 =(buffer[i + 115] == '6');
b116_1 =(buffer[i + 116] == '0');
b116_2 =(buffer[i + 116] == '|');
b116_3 =(buffer[i + 116] == 'h');
b116_4 =(buffer[i + 116] == '2');
b116_5 =(buffer[i + 116] == ':');
b116_6 =(buffer[i + 116] == '3');
b116_7 =(buffer[i + 116] == 'l');
b116_8 =(buffer[i + 116] == 'd');
b116_9 =(buffer[i + 116] == 'B');
b116_10 =(buffer[i + 116] == '6');
b116_11 =(buffer[i + 116] == '/');
b116_12 =(buffer[i + 116] == 'i');
b116_13 =(buffer[i + 116] == 'm');
b116_14 =(buffer[i + 116] == 'E');
b116_15 =(buffer[i + 116] == 'R');
b116_16 =(buffer[i + 116] == '4');
b117_1 =(buffer[i + 117] == ' ');
b117_2 =(buffer[i + 117] == '0');
b117_3 =(buffer[i + 117] == 't');
b117_4 =(buffer[i + 117] == '|');
b117_5 =(buffer[i + 117] == 'B');
b117_6 =(buffer[i + 117] == 'e');
b117_7 =(buffer[i + 117] == 'o');
b117_8 =(buffer[i + 117] == 'b');
b117_9 =(buffer[i + 117] == 'x');
b117_10 =(buffer[i + 117] == '/');
b117_11 =(buffer[i + 117] == 'i');
b117_12 =(buffer[i + 117] == 'T');
b118_1 =(buffer[i + 118] == '0');
b118_2 =(buffer[i + 118] == ' ');
b118_3 =(buffer[i + 118] == '+');
b118_4 =(buffer[i + 118] == 'c');
b118_5 =(buffer[i + 118] == 'w');
b118_6 =(buffer[i + 118] == '|');
b118_7 =(buffer[i + 118] == '5');
b118_8 =(buffer[i + 118] == '-');
b118_9 =(buffer[i + 118] == '4');
b118_10 =(buffer[i + 118] == '3');
b119_1 =(buffer[i + 119] == '0');
b119_2 =(buffer[i + 119] == '|');
b119_3 =(buffer[i + 119] == '=');
b119_4 =(buffer[i + 119] == 'h');
b119_5 =(buffer[i + 119] == 'w');
b119_6 =(buffer[i + 119] == ' ');
b119_7 =(buffer[i + 119] == '3');
b119_8 =(buffer[i + 119] == 's');
b119_9 =(buffer[i + 119] == 'I');
b119_10 =(buffer[i + 119] == 'r');
b119_11 =(buffer[i + 119] == '.');
b119_12 =(buffer[i + 119] == 'B');
b120_1 =(buffer[i + 120] == ' ');
b120_2 =(buffer[i + 120] == 'a');
b120_3 =(buffer[i + 120] == '2');
b120_4 =(buffer[i + 120] == 'v');
b120_5 =(buffer[i + 120] == 'e');
b120_6 =(buffer[i + 120] == 'w');
b120_7 =(buffer[i + 120] == 'I');
b120_8 =(buffer[i + 120] == 'B');
b120_9 =(buffer[i + 120] == 'n');
b120_10 =(buffer[i + 120] == '0');
b120_11 =(buffer[i + 120] == '7');
b120_12 =(buffer[i + 120] == 'o');
b120_13 =(buffer[i + 120] == '5');
b120_14 =(buffer[i + 120] == '|');
b121_1 =(buffer[i + 121] == '0');
b121_2 =(buffer[i + 121] == '|');
b121_3 =(buffer[i + 121] == '2');
b121_4 =(buffer[i + 121] == 'c');
b121_5 =(buffer[i + 121] == '.');
b121_6 =(buffer[i + 121] == 'n');
b121_7 =(buffer[i + 121] == 'N');
b121_8 =(buffer[i + 121] == 'd');
b121_9 =(buffer[i + 121] == 'D');
b121_10 =(buffer[i + 121] == 'w');
b121_11 =(buffer[i + 121] == 's');
b121_12 =(buffer[i + 121] == 'E');
b121_13 =(buffer[i + 121] == ' ');
b122_1 =(buffer[i + 122] == '0');
b122_2 =(buffer[i + 122] == '5');
b122_3 =(buffer[i + 122] == '|');
b122_4 =(buffer[i + 122] == 'k');
b122_5 =(buffer[i + 122] == 'a');
b122_6 =(buffer[i + 122] == 'd');
b122_7 =(buffer[i + 122] == ' ');
b122_8 =(buffer[i + 122] == 'T');
b122_9 =(buffer[i + 122] == 'y');
b122_10 =(buffer[i + 122] == '-');
b122_11 =(buffer[i + 122] == '3');
b122_12 =(buffer[i + 122] == 'o');
b122_13 =(buffer[i + 122] == 'r');
b123_1 =(buffer[i + 123] == '|');
b123_2 =(buffer[i + 123] == '0');
b123_3 =(buffer[i + 123] == 'C');
b123_4 =(buffer[i + 123] == 'n');
b123_5 =(buffer[i + 123] == 'i');
b123_6 =(buffer[i + 123] == 's');
b123_7 =(buffer[i + 123] == 'y');
b123_8 =(buffer[i + 123] == 'I');
b123_9 =(buffer[i + 123] == ' ');
b123_10 =(buffer[i + 123] == 'f');
b123_11 =(buffer[i + 123] == '6');
b123_12 =(buffer[i + 123] == '3');
b123_13 =(buffer[i + 123] == 'v');
b124_1 =(buffer[i + 124] == 'P');
b124_2 =(buffer[i + 124] == '|');
b124_3 =(buffer[i + 124] == ' ');
b124_4 =(buffer[i + 124] == 'p');
b124_5 =(buffer[i + 124] == 'k');
b124_6 =(buffer[i + 124] == 'n');
b124_7 =(buffer[i + 124] == '6');
b124_8 =(buffer[i + 124] == 'L');
b124_9 =(buffer[i + 124] == 'A');
b124_10 =(buffer[i + 124] == 'o');
b124_11 =(buffer[i + 124] == 't');
b124_12 =(buffer[i + 124] == 'B');
b124_13 =(buffer[i + 124] == '7');
b124_14 =(buffer[i + 124] == ':');
b125_1 =(buffer[i + 125] == '|');
b125_2 =(buffer[i + 125] == '\'');
b125_3 =(buffer[i + 125] == '2');
b125_4 =(buffer[i + 125] == 'e');
b125_5 =(buffer[i + 125] == '.');
b125_6 =(buffer[i + 125] == 'L');
b125_7 =(buffer[i + 125] == 'd');
b125_8 =(buffer[i + 125] == 'i');
b125_9 =(buffer[i + 125] == ' ');
b125_10 =(buffer[i + 125] == 'r');
b125_11 =(buffer[i + 125] == '0');
b125_12 =(buffer[i + 125] == '1');
b126_1 =(buffer[i + 126] == '0');
b126_2 =(buffer[i + 126] == '|');
b126_3 =(buffer[i + 126] == '2');
b126_4 =(buffer[i + 126] == 'd');
b126_5 =(buffer[i + 126] == 'c');
b126_6 =(buffer[i + 126] == 'i');
b126_7 =(buffer[i + 126] == 'y');
b126_8 =(buffer[i + 126] == '1');
b126_9 =(buffer[i + 126] == 'b');
b126_10 =(buffer[i + 126] == 'm');
b126_11 =(buffer[i + 126] == 'D');
b126_12 =(buffer[i + 126] == ' ');
b126_13 =(buffer[i + 126] == '9');
b127_1 =(buffer[i + 127] == '1');
b127_2 =(buffer[i + 127] == '0');
b127_3 =(buffer[i + 127] == '|');
b127_4 =(buffer[i + 127] == 'y');
b127_5 =(buffer[i + 127] == 'o');
b127_6 =(buffer[i + 127] == 'b');
b127_7 =(buffer[i + 127] == ' ');
b127_8 =(buffer[i + 127] == 'r');
b127_9 =(buffer[i + 127] == 'D');
b127_10 =(buffer[i + 127] == '-');
b127_11 =(buffer[i + 127] == '.');
b128_1 =(buffer[i + 128] == ' ');
b128_2 =(buffer[i + 128] == '0');
b128_3 =(buffer[i + 128] == '1');
b128_4 =(buffer[i + 128] == '+');
b128_5 =(buffer[i + 128] == 'n');
b128_6 =(buffer[i + 128] == 'm');
b128_7 =(buffer[i + 128] == 'r');
b128_8 =(buffer[i + 128] == 'L');
b128_9 =(buffer[i + 128] == '3');
b128_10 =(buffer[i + 128] == 'a');
b128_11 =(buffer[i + 128] == 'u');
b128_12 =(buffer[i + 128] == 'N');
b129_1 =(buffer[i + 129] == '0');
b129_2 =(buffer[i + 129] == '|');
b129_3 =(buffer[i + 129] == 'p');
b129_4 =(buffer[i + 129] == 'd');
b129_5 =(buffer[i + 129] == 'a');
b129_6 =(buffer[i + 129] == 'i');
b129_7 =(buffer[i + 129] == 'B');
b129_8 =(buffer[i + 129] == 'r');
b129_9 =(buffer[i + 129] == 'A');
b129_10 =(buffer[i + 129] == 'E');
b129_11 =(buffer[i + 129] == ')');
b130_1 =(buffer[i + 130] == '1');
b130_2 =(buffer[i + 130] == 'x');
b130_3 =(buffer[i + 130] == '2');
b130_4 =(buffer[i + 130] == 'r');
b130_5 =(buffer[i + 130] == 'n');
b130_6 =(buffer[i + 130] == '0');
b130_7 =(buffer[i + 130] == 'b');
b130_8 =(buffer[i + 130] == '|');
b130_9 =(buffer[i + 130] == 'y');
b130_10 =(buffer[i + 130] == 'A');
b130_11 =(buffer[i + 130] == 'l');
b130_12 =(buffer[i + 130] == 'T');
b130_13 =(buffer[i + 130] == ' ');
b131_1 =(buffer[i + 131] == ' ');
b131_2 =(buffer[i + 131] == '|');
b131_3 =(buffer[i + 131] == '2');
b131_4 =(buffer[i + 131] == 's');
b131_5 =(buffer[i + 131] == 'D');
b131_6 =(buffer[i + 131] == 'y');
b131_7 =(buffer[i + 131] == 'r');
b131_8 =(buffer[i + 131] == ')');
b131_9 =(buffer[i + 131] == 'e');
b131_10 =(buffer[i + 131] == 'H');
b131_11 =(buffer[i + 131] == 'G');
b132_1 =(buffer[i + 132] == '0');
b132_2 =(buffer[i + 132] == '5');
b132_3 =(buffer[i + 132] == '|');
b132_4 =(buffer[i + 132] == '.');
b132_5 =(buffer[i + 132] == ' ');
b132_6 =(buffer[i + 132] == ')');
b132_7 =(buffer[i + 132] == 'a');
b132_8 =(buffer[i + 132] == 'W');
b132_9 =(buffer[i + 132] == 'n');
b132_10 =(buffer[i + 132] == 'o');
b132_11 =(buffer[i + 132] == 'C');
b132_12 =(buffer[i + 132] == 'e');
b133_1 =(buffer[i + 133] == '0');
b133_2 =(buffer[i + 133] == 'C');
b133_3 =(buffer[i + 133] == 't');
b133_4 =(buffer[i + 133] == 'o');
b133_5 =(buffer[i + 133] == 'r');
b133_6 =(buffer[i + 133] == 'O');
b133_7 =(buffer[i + 133] == 'c');
b133_8 =(buffer[i + 133] == 's');
b133_9 =(buffer[i + 133] == 'L');
b133_10 =(buffer[i + 133] == 'N');
b134_1 =(buffer[i + 134] == ' ');
b134_2 =(buffer[i + 134] == '|');
b134_3 =(buffer[i + 134] == 'r');
b134_4 =(buffer[i + 134] == 'A');
b134_5 =(buffer[i + 134] == 'y');
b134_6 =(buffer[i + 134] == 'W');
b134_7 =(buffer[i + 134] == 'D');
b134_8 =(buffer[i + 134] == 'o');
b134_9 =(buffer[i + 134] == 't');
b134_10 =(buffer[i + 134] == 'R');
b134_11 =(buffer[i + 134] == 'E');
b134_12 =(buffer[i + 134] == 'k');
b135_1 =(buffer[i + 135] == '0');
b135_2 =(buffer[i + 135] == '2');
b135_3 =(buffer[i + 135] == 'i');
b135_4 =(buffer[i + 135] == 'g');
b135_5 =(buffer[i + 135] == '|');
b135_6 =(buffer[i + 135] == ')');
b135_7 =(buffer[i + 135] == '6');
b135_8 =(buffer[i + 135] == ' ');
b135_9 =(buffer[i + 135] == 'd');
b135_10 =(buffer[i + 135] == ':');
b135_11 =(buffer[i + 135] == 'T');
b135_12 =(buffer[i + 135] == 'o');
b136_1 =(buffer[i + 136] == '2');
b136_2 =(buffer[i + 136] == '|');
b136_3 =(buffer[i + 136] == 'C');
b136_4 =(buffer[i + 136] == '4');
b136_5 =(buffer[i + 136] == '0');
b136_6 =(buffer[i + 136] == 'e');
b136_7 =(buffer[i + 136] == ' ');
b136_8 =(buffer[i + 136] == '/');
b137_1 =(buffer[i + 137] == ' ');
b137_2 =(buffer[i + 137] == '|');
b137_3 =(buffer[i + 137] == '0');
b137_4 =(buffer[i + 137] == 'a');
b137_5 =(buffer[i + 137] == 'A');
b137_6 =(buffer[i + 137] == 'd');
b137_7 =(buffer[i + 137] == 'c');
b137_8 =(buffer[i + 137] == 'o');
b137_9 =(buffer[i + 137] == '.');
b137_10 =(buffer[i + 137] == 'C');
b137_11 =(buffer[i + 137] == '2');
b138_1 =(buffer[i + 138] == '0');
b138_2 =(buffer[i + 138] == ' ');
b138_3 =(buffer[i + 138] == '3');
b138_4 =(buffer[i + 138] == 'D');
b138_5 =(buffer[i + 138] == 'c');
b138_6 =(buffer[i + 138] == '|');
b138_7 =(buffer[i + 138] == 'h');
b138_8 =(buffer[i + 138] == 'n');
b138_9 =(buffer[i + 138] == 'L');
b139_1 =(buffer[i + 139] == '3');
b139_2 =(buffer[i + 139] == 'w');
b139_3 =(buffer[i + 139] == 'A');
b139_4 =(buffer[i + 139] == '|');
b139_5 =(buffer[i + 139] == ' ');
b139_6 =(buffer[i + 139] == 'h');
b139_7 =(buffer[i + 139] == 'B');
b139_8 =(buffer[i + 139] == '0');
b139_9 =(buffer[i + 139] == 'e');
b139_10 =(buffer[i + 139] == 'n');
b139_11 =(buffer[i + 139] == '.');
b139_12 =(buffer[i + 139] == 'R');
b139_13 =(buffer[i + 139] == '1');
b140_1 =(buffer[i + 140] == ' ');
b140_2 =(buffer[i + 140] == 'i');
b140_3 =(buffer[i + 140] == 'f');
b140_4 =(buffer[i + 140] == '0');
b140_5 =(buffer[i + 140] == 'e');
b140_6 =(buffer[i + 140] == '|');
b140_7 =(buffer[i + 140] == 'D');
b140_8 =(buffer[i + 140] == 'c');
b140_9 =(buffer[i + 140] == '5');
b141_1 =(buffer[i + 141] == '0');
b141_2 =(buffer[i + 141] == 'd');
b141_3 =(buffer[i + 141] == '2');
b141_4 =(buffer[i + 141] == '|');
b141_5 =(buffer[i + 141] == 'A');
b141_6 =(buffer[i + 141] == '-');
b141_7 =(buffer[i + 141] == ' ');
b141_8 =(buffer[i + 141] == 'k');
b141_9 =(buffer[i + 141] == 'c');
b141_10 =(buffer[i + 141] == '3');
b142_1 =(buffer[i + 142] == '0');
b142_2 =(buffer[i + 142] == 't');
b142_3 =(buffer[i + 142] == '2');
b142_4 =(buffer[i + 142] == '|');
b142_5 =(buffer[i + 142] == 'C');
b142_6 =(buffer[i + 142] == 'r');
b142_7 =(buffer[i + 142] == 'i');
b142_8 =(buffer[i + 142] == '7');
b142_9 =(buffer[i + 142] == '.');
b142_10 =(buffer[i + 142] == '1');
b143_1 =(buffer[i + 143] == ' ');
b143_2 =(buffer[i + 143] == 'h');
b143_3 =(buffer[i + 143] == '0');
b143_4 =(buffer[i + 143] == 'C');
b143_5 =(buffer[i + 143] == 'o');
b143_6 =(buffer[i + 143] == 'v');
b143_7 =(buffer[i + 143] == 'A');
b143_8 =(buffer[i + 143] == 'p');
b143_9 =(buffer[i + 143] == 'i');
b143_10 =(buffer[i + 143] == '2');
b144_1 =(buffer[i + 144] == '0');
b144_2 =(buffer[i + 144] == ' ');
b144_3 =(buffer[i + 144] == '2');
b144_4 =(buffer[i + 144] == '|');
b144_5 =(buffer[i + 144] == 'a');
b144_6 =(buffer[i + 144] == 'n');
b144_7 =(buffer[i + 144] == ':');
b144_8 =(buffer[i + 144] == '.');
b144_9 =(buffer[i + 144] == 'o');
b144_10 =(buffer[i + 144] == '7');
b144_11 =(buffer[i + 144] == '1');
b145_1 =(buffer[i + 145] == '0');
b145_2 =(buffer[i + 145] == '=');
b145_3 =(buffer[i + 145] == '2');
b145_4 =(buffer[i + 145] == 'i');
b145_5 =(buffer[i + 145] == 'c');
b145_6 =(buffer[i + 145] == 't');
b145_7 =(buffer[i + 145] == 'H');
b145_8 =(buffer[i + 145] == 'd');
b145_9 =(buffer[i + 145] == 'n');
b145_10 =(buffer[i + 145] == '|');
b145_11 =(buffer[i + 145] == '3');
b145_12 =(buffer[i + 145] == ' ');
b146_1 =(buffer[i + 146] == ' ');
b146_2 =(buffer[i + 146] == '|');
b146_3 =(buffer[i + 146] == 'h');
b146_4 =(buffer[i + 146] == 'r');
b146_5 =(buffer[i + 146] == '5');
b146_6 =(buffer[i + 146] == 'o');
b146_7 =(buffer[i + 146] == 'y');
b146_8 =(buffer[i + 146] == ':');
b146_9 =(buffer[i + 146] == '3');
b146_10 =(buffer[i + 146] == '0');
b146_11 =(buffer[i + 146] == 'F');
b147_1 =(buffer[i + 147] == '2');
b147_2 =(buffer[i + 147] == '|');
b147_3 =(buffer[i + 147] == '0');
b147_4 =(buffer[i + 147] == 'e');
b147_5 =(buffer[i + 147] == 'o');
b147_6 =(buffer[i + 147] == '.');
b147_7 =(buffer[i + 147] == 's');
b147_8 =(buffer[i + 147] == 'n');
b147_9 =(buffer[i + 147] == ' ');
b147_10 =(buffer[i + 147] == 'B');
b147_11 =(buffer[i + 147] == '7');
b147_12 =(buffer[i + 147] == 'i');
b148_1 =(buffer[i + 148] == '4');
b148_2 =(buffer[i + 148] == '5');
b148_3 =(buffer[i + 148] == '0');
b148_4 =(buffer[i + 148] == '-');
b148_5 =(buffer[i + 148] == 'l');
b148_6 =(buffer[i + 148] == 't');
b148_7 =(buffer[i + 148] == 'd');
b148_8 =(buffer[i + 148] == 'C');
b148_9 =(buffer[i + 148] == '|');
b148_10 =(buffer[i + 148] == '2');
b148_11 =(buffer[i + 148] == 'r');
b149_1 =(buffer[i + 149] == ' ');
b149_2 =(buffer[i + 149] == 'C');
b149_3 =(buffer[i + 149] == '|');
b149_4 =(buffer[i + 149] == ':');
b149_5 =(buffer[i + 149] == ')');
b149_6 =(buffer[i + 149] == 'n');
b149_7 =(buffer[i + 149] == 'l');
b149_8 =(buffer[i + 149] == '9');
b149_9 =(buffer[i + 149] == 'e');
b150_1 =(buffer[i + 150] == '0');
b150_2 =(buffer[i + 150] == ' ');
b150_3 =(buffer[i + 150] == 'c');
b150_4 =(buffer[i + 150] == 'o');
b150_5 =(buffer[i + 150] == 's');
b150_6 =(buffer[i + 150] == '.');
b150_7 =(buffer[i + 150] == '|');
b150_8 =(buffer[i + 150] == 'f');
b151_1 =(buffer[i + 151] == '1');
b151_2 =(buffer[i + 151] == '2');
b151_3 =(buffer[i + 151] == '|');
b151_4 =(buffer[i + 151] == 'n');
b151_5 =(buffer[i + 151] == 'G');
b151_6 =(buffer[i + 151] == '.');
b151_7 =(buffer[i + 151] == 's');
b151_8 =(buffer[i + 151] == 'N');
b151_9 =(buffer[i + 151] == '3');
b151_10 =(buffer[i + 151] == 'o');
b152_1 =(buffer[i + 152] == ' ');
b152_2 =(buffer[i + 152] == '2');
b152_3 =(buffer[i + 152] == '0');
b152_4 =(buffer[i + 152] == 't');
b152_5 =(buffer[i + 152] == 'o');
b152_6 =(buffer[i + 152] == 'e');
b152_7 =(buffer[i + 152] == 'E');
b152_8 =(buffer[i + 152] == 'B');
b152_9 =(buffer[i + 152] == 'x');
b153_1 =(buffer[i + 153] == '0');
b153_2 =(buffer[i + 153] == '|');
b153_3 =(buffer[i + 153] == 'r');
b153_4 =(buffer[i + 153] == '-');
b153_5 =(buffer[i + 153] == 'c');
b153_6 =(buffer[i + 153] == 'T');
b153_7 =(buffer[i + 153] == '/');
b154_1 =(buffer[i + 154] == '1');
b154_2 =(buffer[i + 154] == '|');
b154_3 =(buffer[i + 154] == 'o');
b154_4 =(buffer[i + 154] == 'c');
b154_5 =(buffer[i + 154] == 'k');
b154_6 =(buffer[i + 154] == 'g');
b154_7 =(buffer[i + 154] == '0');
b154_8 =(buffer[i + 154] == ' ');
b155_1 =(buffer[i + 155] == ' ');
b155_2 =(buffer[i + 155] == 'p');
b155_3 =(buffer[i + 155] == 'a');
b155_4 =(buffer[i + 155] == 'l');
b155_5 =(buffer[i + 155] == 'o');
b155_6 =(buffer[i + 155] == '|');
b155_7 =(buffer[i + 155] == 'D');
b155_8 =(buffer[i + 155] == 'C');
b155_9 =(buffer[i + 155] == 'M');
b155_10 =(buffer[i + 155] == '2');
b156_1 =(buffer[i + 156] == '0');
b156_2 =(buffer[i + 156] == 'x');
b156_3 =(buffer[i + 156] == '|');
b156_4 =(buffer[i + 156] == ':');
b156_5 =(buffer[i + 156] == 'c');
b156_6 =(buffer[i + 156] == '/');
b156_7 =(buffer[i + 156] == ' ');
b156_8 =(buffer[i + 156] == 'L');
b156_9 =(buffer[i + 156] == 'e');
b156_10 =(buffer[i + 156] == '.');
b157_1 =(buffer[i + 157] == '0');
b157_2 =(buffer[i + 157] == '|');
b157_3 =(buffer[i + 157] == ' ');
b157_4 =(buffer[i + 157] == 'h');
b157_5 =(buffer[i + 157] == '2');
b157_6 =(buffer[i + 157] == 'D');
b157_7 =(buffer[i + 157] == 'R');
b157_8 =(buffer[i + 157] == 'd');
b158_1 =(buffer[i + 158] == ' ');
b158_2 =(buffer[i + 158] == '5');
b158_3 =(buffer[i + 158] == '0');
b158_4 =(buffer[i + 158] == 'n');
b158_5 =(buffer[i + 158] == 'e');
b158_6 =(buffer[i + 158] == 'A');
b158_7 =(buffer[i + 158] == 'i');
b158_8 =(buffer[i + 158] == '|');
b159_1 =(buffer[i + 159] == '0');
b159_2 =(buffer[i + 159] == 'C');
b159_3 =(buffer[i + 159] == '|');
b159_4 =(buffer[i + 159] == 'o');
b159_5 =(buffer[i + 159] == '1');
b159_6 =(buffer[i + 159] == ' ');
b159_7 =(buffer[i + 159] == '3');
b159_8 =(buffer[i + 159] == 'a');
b160_1 =(buffer[i + 160] == '0');
b160_2 =(buffer[i + 160] == ' ');
b160_3 =(buffer[i + 160] == 'n');
b160_4 =(buffer[i + 160] == '-');
b160_5 =(buffer[i + 160] == 'A');
b160_6 =(buffer[i + 160] == '.');
b160_7 =(buffer[i + 160] == 'D');
b161_1 =(buffer[i + 161] == ' ');
b161_2 =(buffer[i + 161] == '2');
b161_3 =(buffer[i + 161] == '|');
b161_4 =(buffer[i + 161] == 'c');
b161_5 =(buffer[i + 161] == 'D');
b161_6 =(buffer[i + 161] == '0');
b161_7 =(buffer[i + 161] == 'C');
b162_1 =(buffer[i + 162] == '8');
b162_2 =(buffer[i + 162] == '2');
b162_3 =(buffer[i + 162] == '0');
b162_4 =(buffer[i + 162] == 'a');
b162_5 =(buffer[i + 162] == ' ');
b162_6 =(buffer[i + 162] == '1');
b162_7 =(buffer[i + 162] == '.');
b162_8 =(buffer[i + 162] == 'e');
b163_1 =(buffer[i + 163] == '0');
b163_2 =(buffer[i + 163] == '|');
b163_3 =(buffer[i + 163] == 'c');
b163_4 =(buffer[i + 163] == '4');
b163_5 =(buffer[i + 163] == 'n');
b163_6 =(buffer[i + 163] == 'A');
b164_1 =(buffer[i + 164] == ' ');
b164_2 =(buffer[i + 164] == '>');
b164_3 =(buffer[i + 164] == '|');
b164_4 =(buffer[i + 164] == 'h');
b164_5 =(buffer[i + 164] == 'A');
b164_6 =(buffer[i + 164] == '1');
b164_7 =(buffer[i + 164] == '5');
b164_8 =(buffer[i + 164] == 't');
b165_1 =(buffer[i + 165] == '0');
b165_2 =(buffer[i + 165] == 'd');
b165_3 =(buffer[i + 165] == 'e');
b165_4 =(buffer[i + 165] == ' ');
b165_5 =(buffer[i + 165] == '|');
b166_1 =(buffer[i + 166] == '1');
b166_2 =(buffer[i + 166] == '|');
b166_3 =(buffer[i + 166] == '0');
b166_4 =(buffer[i + 166] == 'F');
b166_5 =(buffer[i + 166] == '6');
b166_6 =(buffer[i + 166] == 'r');
b166_7 =(buffer[i + 166] == 'D');
b167_1 =(buffer[i + 167] == ' ');
b167_2 =(buffer[i + 167] == '0');
b167_3 =(buffer[i + 167] == 'D');
b167_4 =(buffer[i + 167] == 'i');
b167_5 =(buffer[i + 167] == '.');
b168_1 =(buffer[i + 168] == '0');
b168_2 =(buffer[i + 168] == 'D');
b168_3 =(buffer[i + 168] == ' ');
b168_4 =(buffer[i + 168] == 'r');
b168_5 =(buffer[i + 168] == '2');
b168_6 =(buffer[i + 168] == 'P');
b169_1 =(buffer[i + 169] == '0');
b169_2 =(buffer[i + 169] == '|');
b169_3 =(buffer[i + 169] == ' ');
b169_4 =(buffer[i + 169] == 'e');
b169_5 =(buffer[i + 169] == '1');
b169_6 =(buffer[i + 169] == 'C');
b169_7 =(buffer[i + 169] == 'A');
b170_1 =(buffer[i + 170] == ' ');
b170_2 =(buffer[i + 170] == 'o');
b170_3 =(buffer[i + 170] == '0');
b170_4 =(buffer[i + 170] == 'A');
b170_5 =(buffer[i + 170] == 'f');
b170_6 =(buffer[i + 170] == '5');
b170_7 =(buffer[i + 170] == '|');
b171_1 =(buffer[i + 171] == '0');
b171_2 =(buffer[i + 171] == '|');
b171_3 =(buffer[i + 171] == 'A');
b171_4 =(buffer[i + 171] == 'o');
b171_5 =(buffer[i + 171] == '2');
b171_6 =(buffer[i + 171] == '6');
b172_1 =(buffer[i + 172] == '6');
b172_2 =(buffer[i + 172] == '0');
b172_3 =(buffer[i + 172] == ' ');
b172_4 =(buffer[i + 172] == 'x');
b172_5 =(buffer[i + 172] == '|');
b172_6 =(buffer[i + 172] == '.');
b173_1 =(buffer[i + 173] == ' ');
b173_2 =(buffer[i + 173] == '0');
b173_3 =(buffer[i + 173] == '/');
b173_4 =(buffer[i + 173] == '3');
b174_1 =(buffer[i + 174] == '8');
b174_2 =(buffer[i + 174] == '|');
b174_3 =(buffer[i + 174] == 'D');
b174_4 =(buffer[i + 174] == '2');
b174_5 =(buffer[i + 174] == 'B');
b174_6 =(buffer[i + 174] == ')');
b175_1 =(buffer[i + 175] == '0');
b175_2 =(buffer[i + 175] == ' ');
b175_3 =(buffer[i + 175] == '5');
b175_4 =(buffer[i + 175] == '|');
b176_1 =(buffer[i + 176] == ' ');
b176_2 =(buffer[i + 176] == '|');
b176_3 =(buffer[i + 176] == '0');
b176_4 =(buffer[i + 176] == '.');
b177_1 =(buffer[i + 177] == '0');
b177_2 =(buffer[i + 177] == 'A');
b177_3 =(buffer[i + 177] == '.');
b178_1 =(buffer[i + 178] == '2');
b178_2 =(buffer[i + 178] == '0');
b178_3 =(buffer[i + 178] == '|');
b178_4 =(buffer[i + 178] == 'N');
b179_1 =(buffer[i + 179] == ' ');
b179_2 =(buffer[i + 179] == '|');
b179_3 =(buffer[i + 179] == '0');
b179_4 =(buffer[i + 179] == 'E');
b180_1 =(buffer[i + 180] == '0');
b180_2 =(buffer[i + 180] == 'w');
b180_3 =(buffer[i + 180] == 'D');
b180_4 =(buffer[i + 180] == 'T');
b181_1 =(buffer[i + 181] == '0');
b181_2 =(buffer[i + 181] == '|');
b181_3 =(buffer[i + 181] == ' ');
b182_1 =(buffer[i + 182] == ' ');
b182_2 =(buffer[i + 182] == '0');
b182_3 =(buffer[i + 182] == 'C');
b183_1 =(buffer[i + 183] == '0');
b183_2 =(buffer[i + 183] == 'A');
b183_3 =(buffer[i + 183] == 'L');
b184_1 =(buffer[i + 184] == '2');
b184_2 =(buffer[i + 184] == '|');
b184_3 =(buffer[i + 184] == 'R');
b185_1 =(buffer[i + 185] == ' ');
b185_2 =(buffer[i + 185] == 'h');
b185_3 =(buffer[i + 185] == 'H');
b186_1 =(buffer[i + 186] == '8');
b186_2 =(buffer[i + 186] == '|');
b186_3 =(buffer[i + 186] == 'o');
b186_4 =(buffer[i + 186] == '3');
b187_1 =(buffer[i + 187] == '0');
b187_2 =(buffer[i + 187] == 's');
b187_3 =(buffer[i + 187] == '.');
b188_1 =(buffer[i + 188] == ' ');
b188_2 =(buffer[i + 188] == '0');
b188_3 =(buffer[i + 188] == 't');
b188_4 =(buffer[i + 188] == '5');
b189_1 =(buffer[i + 189] == '0');
b189_2 =(buffer[i + 189] == '|');
b189_3 =(buffer[i + 189] == ':');
b189_4 =(buffer[i + 189] == '.');
b190_1 =(buffer[i + 190] == '3');
b190_2 =(buffer[i + 190] == 'e');
b190_3 =(buffer[i + 190] == ' ');
b191_1 =(buffer[i + 191] == ' ');
b191_2 =(buffer[i + 191] == '|');
b191_3 =(buffer[i + 191] == '0');
b192_1 =(buffer[i + 192] == '0');
b192_2 =(buffer[i + 192] == '7');
b193_1 =(buffer[i + 193] == '0');
b193_2 =(buffer[i + 193] == '2');
b194_1 =(buffer[i + 194] == ' ');
b194_2 =(buffer[i + 194] == '|');
b194_3 =(buffer[i + 194] == '9');
b195_1 =(buffer[i + 195] == '0');
b195_2 =(buffer[i + 195] == 'r');
b195_3 =(buffer[i + 195] == ')');
b196_1 =(buffer[i + 196] == '3');
b196_2 =(buffer[i + 196] == '|');
b197_1 =(buffer[i + 197] == ' ');
b197_2 =(buffer[i + 197] == '0');
b198_1 =(buffer[i + 198] == '8');
b198_2 =(buffer[i + 198] == '0');
b198_3 =(buffer[i + 198] == 'D');
b199_1 =(buffer[i + 199] == '0');
b199_2 =(buffer[i + 199] == '|');
b199_3 =(buffer[i + 199] == ' ');
b200_1 =(buffer[i + 200] == ' ');
b200_2 =(buffer[i + 200] == 'e');
b200_3 =(buffer[i + 200] == '0');
b201_1 =(buffer[i + 201] == '0');
b201_2 =(buffer[i + 201] == '|');
b201_3 =(buffer[i + 201] == 'A');
b202_1 =(buffer[i + 202] == '4');
b202_2 =(buffer[i + 202] == '0');
b202_3 =(buffer[i + 202] == '|');
b203_1 =(buffer[i + 203] == ' ');
b203_2 =(buffer[i + 203] == '0');
b203_3 =(buffer[i + 203] == 'H');
b204_1 =(buffer[i + 204] == '0');
b204_2 =(buffer[i + 204] == '|');
b204_3 =(buffer[i + 204] == 'o');
b205_1 =(buffer[i + 205] == '0');
b205_2 =(buffer[i + 205] == ' ');
b205_3 =(buffer[i + 205] == 's');
b206_1 =(buffer[i + 206] == ' ');
b206_2 =(buffer[i + 206] == '|');
b206_3 =(buffer[i + 206] == 't');
b207_1 =(buffer[i + 207] == '0');
b207_2 =(buffer[i + 207] == ':');
b208_1 =(buffer[i + 208] == '5');
b208_2 =(buffer[i + 208] == '0');
b208_3 =(buffer[i + 208] == ' ');
b209_1 =(buffer[i + 209] == ' ');
b209_2 =(buffer[i + 209] == '|');
b209_3 =(buffer[i + 209] == 'i');
b210_1 =(buffer[i + 210] == '8');
b210_2 =(buffer[i + 210] == 'i');
b210_3 =(buffer[i + 210] == 'p');
b211_1 =(buffer[i + 211] == '0');
b211_2 =(buffer[i + 211] == '|');
b211_3 =(buffer[i + 211] == '-');
b212_1 =(buffer[i + 212] == ' ');
b212_2 =(buffer[i + 212] == '0');
b212_3 =(buffer[i + 212] == 'a');
b213_1 =(buffer[i + 213] == '0');
b213_2 =(buffer[i + 213] == 'd');
b214_1 =(buffer[i + 214] == 'B');
b214_2 =(buffer[i + 214] == '|');
b214_3 =(buffer[i + 214] == 'd');
b215_1 =(buffer[i + 215] == ' ');
b215_2 =(buffer[i + 215] == 'd');
b215_3 =(buffer[i + 215] == 'r');
b216_1 =(buffer[i + 216] == '0');
b216_2 =(buffer[i + 216] == '|');
b216_3 =(buffer[i + 216] == '.');
b217_1 =(buffer[i + 217] == '0');
b217_2 =(buffer[i + 217] == 'e');
b218_1 =(buffer[i + 218] == ' ');
b218_2 =(buffer[i + 218] == '0');
b218_3 =(buffer[i + 218] == 's');
b219_1 =(buffer[i + 219] == '0');
b219_2 =(buffer[i + 219] == '|');
b220_1 =(buffer[i + 220] == '1');
b220_2 =(buffer[i + 220] == '_');
b220_3 =(buffer[i + 220] == '0');
b221_1 =(buffer[i + 221] == ' ');
b221_2 =(buffer[i + 221] == '|');
b221_3 =(buffer[i + 221] == 'D');
b222_1 =(buffer[i + 222] == '0');
b222_2 =(buffer[i + 222] == ' ');
b223_1 =(buffer[i + 223] == '0');
b224_1 =(buffer[i + 224] == ' ');
b224_2 =(buffer[i + 224] == '|');
b224_3 =(buffer[i + 224] == 'A');
b225_1 =(buffer[i + 225] == '0');
b225_2 =(buffer[i + 225] == 'p');
b225_3 =(buffer[i + 225] == '|');
b226_1 =(buffer[i + 226] == 'C');
b226_2 =(buffer[i + 226] == '|');
b227_1 =(buffer[i + 227] == ' ');
b227_2 =(buffer[i + 227] == '0');
b227_3 =(buffer[i + 227] == 'a');
b228_1 =(buffer[i + 228] == '0');
b228_2 =(buffer[i + 228] == 'c');
b229_1 =(buffer[i + 229] == '0');
b229_2 =(buffer[i + 229] == '|');
b229_3 =(buffer[i + 229] == 'h');
b230_1 =(buffer[i + 230] == ' ');
b230_2 =(buffer[i + 230] == 'c');
b230_3 =(buffer[i + 230] == 'e');
b231_1 =(buffer[i + 231] == '0');
b231_2 =(buffer[i + 231] == '|');
b231_3 =(buffer[i + 231] == '-');
b232_1 =(buffer[i + 232] == '4');
b232_2 =(buffer[i + 232] == '0');
b232_3 =(buffer[i + 232] == 'C');
b233_1 =(buffer[i + 233] == ' ');
b233_2 =(buffer[i + 233] == '0');
b233_3 =(buffer[i + 233] == 'o');
b234_1 =(buffer[i + 234] == '0');
b234_2 =(buffer[i + 234] == '|');
b234_3 =(buffer[i + 234] == 'n');
b235_1 =(buffer[i + 235] == '0');
b235_2 =(buffer[i + 235] == '=');
b235_3 =(buffer[i + 235] == 't');
b236_1 =(buffer[i + 236] == ' ');
b236_2 =(buffer[i + 236] == '|');
b236_3 =(buffer[i + 236] == 'r');
b237_1 =(buffer[i + 237] == '0');
b237_2 =(buffer[i + 237] == 'o');
b238_1 =(buffer[i + 238] == '1');
b238_2 =(buffer[i + 238] == '0');
b238_3 =(buffer[i + 238] == 'l');
b239_1 =(buffer[i + 239] == '|');
b239_2 =(buffer[i + 239] == ':');
b240_1 =(buffer[i + 240] == 'Q');
b240_2 =(buffer[i + 240] == ' ');
b241_1 =(buffer[i + 241] == '|');
b241_2 =(buffer[i + 241] == 'n');
b242_1 =(buffer[i + 242] == '8');
b242_2 =(buffer[i + 242] == 'o');
b243_1 =(buffer[i + 243] == '0');
b243_2 =(buffer[i + 243] == '-');
b244_1 =(buffer[i + 244] == ' ');
b244_2 =(buffer[i + 244] == 'c');
b245_1 =(buffer[i + 245] == '0');
b245_2 =(buffer[i + 245] == 'a');
b246_1 =(buffer[i + 246] == '0');
b246_2 =(buffer[i + 246] == 'c');
b247_1 =(buffer[i + 247] == ' ');
b247_2 =(buffer[i + 247] == 'h');
b248_1 =(buffer[i + 248] == '0');
b248_2 =(buffer[i + 248] == 'e');
b249_1 =(buffer[i + 249] == '0');
b249_2 =(buffer[i + 249] == '|');
b250_1 =(buffer[i + 250] == ' ');
b250_2 =(buffer[i + 250] == '0');
b251_1 =(buffer[i + 251] == '0');
b251_2 =(buffer[i + 251] == 'D');
b252_1 =(buffer[i + 252] == '0');
b252_2 =(buffer[i + 252] == ' ');
b253_1 =(buffer[i + 253] == ' ');
b253_2 =(buffer[i + 253] == '0');
b254_1 =(buffer[i + 254] == '2');
b254_2 =(buffer[i + 254] == 'A');
b255_1 =(buffer[i + 255] == '4');
b255_2 =(buffer[i + 255] == ' ');
b256_1 =(buffer[i + 256] == ' ');
b256_2 =(buffer[i + 256] == '0');
b257_1 =(buffer[i + 257] == '0');
b257_2 =(buffer[i + 257] == 'D');
b258_1 =(buffer[i + 258] == '2');
b258_2 =(buffer[i + 258] == ' ');
b259_1 =(buffer[i + 259] == ' ');
b259_2 =(buffer[i + 259] == '0');
b260_1 =(buffer[i + 260] == '0');
b260_2 =(buffer[i + 260] == 'A');
b261_1 =(buffer[i + 261] == '1');
b261_2 =(buffer[i + 261] == '|');
b262_1 =(buffer[i + 262] == ' ');
b263_1 =(buffer[i + 263] == '0');
b264_1 =(buffer[i + 264] == '0');
b265_1 =(buffer[i + 265] == ' ');
b266_1 =(buffer[i + 266] == '0');
b267_1 =(buffer[i + 267] == '0');
b268_1 =(buffer[i + 268] == ' ');
b269_1 =(buffer[i + 269] == '8');
b270_1 =(buffer[i + 270] == '0');
b271_1 =(buffer[i + 271] == ' ');
b272_1 =(buffer[i + 272] == '0');
b273_1 =(buffer[i + 273] == '1');
b274_1 =(buffer[i + 274] == ' ');
b275_1 =(buffer[i + 275] == '0');
b276_1 =(buffer[i + 276] == '0');
b277_1 =(buffer[i + 277] == ' ');
b278_1 =(buffer[i + 278] == '0');
b279_1 =(buffer[i + 279] == '5');
b280_1 =(buffer[i + 280] == ' ');
b281_1 =(buffer[i + 281] == '8');
b282_1 =(buffer[i + 282] == '0');
b283_1 =(buffer[i + 283] == ' ');
b284_1 =(buffer[i + 284] == '0');
b285_1 =(buffer[i + 285] == '2');
b286_1 =(buffer[i + 286] == ' ');
b287_1 =(buffer[i + 287] == '0');
b288_1 =(buffer[i + 288] == '0');
b289_1 =(buffer[i + 289] == ' ');
b290_1 =(buffer[i + 290] == '0');
b291_1 =(buffer[i + 291] == '1');
b292_1 =(buffer[i + 292] == ' ');
b293_1 =(buffer[i + 293] == '8');
b294_1 =(buffer[i + 294] == '0');
b295_1 =(buffer[i + 295] == ' ');
b296_1 =(buffer[i + 296] == '0');
b297_1 =(buffer[i + 297] == '3');
b298_1 =(buffer[i + 298] == ' ');
b299_1 =(buffer[i + 299] == '0');
b300_1 =(buffer[i + 300] == '0');
b301_1 =(buffer[i + 301] == ' ');
b302_1 =(buffer[i + 302] == '0');
b303_1 =(buffer[i + 303] == '3');
b304_1 =(buffer[i + 304] == ' ');
b305_1 =(buffer[i + 305] == '8');
b306_1 =(buffer[i + 306] == '0');
b307_1 =(buffer[i + 307] == ' ');
b308_1 =(buffer[i + 308] == '0');
b309_1 =(buffer[i + 309] == '4');
b310_1 =(buffer[i + 310] == ' ');
b311_1 =(buffer[i + 311] == '0');
b312_1 =(buffer[i + 312] == '0');
b313_1 =(buffer[i + 313] == ' ');
b314_1 =(buffer[i + 314] == '0');
b315_1 =(buffer[i + 315] == '2');
b316_1 =(buffer[i + 316] == ' ');
b317_1 =(buffer[i + 317] == '8');
b318_1 =(buffer[i + 318] == '0');
b319_1 =(buffer[i + 319] == ' ');
b320_1 =(buffer[i + 320] == '0');
b321_1 =(buffer[i + 321] == 'B');
b322_1 =(buffer[i + 322] == ' ');
b323_1 =(buffer[i + 323] == '0');
b324_1 =(buffer[i + 324] == '0');
b325_1 =(buffer[i + 325] == ' ');
b326_1 =(buffer[i + 326] == '0');
b327_1 =(buffer[i + 327] == '1');
b328_1 =(buffer[i + 328] == ' ');
b329_1 =(buffer[i + 329] == '0');
b330_1 =(buffer[i + 330] == '0');
b331_1 =(buffer[i + 331] == ' ');
b332_1 =(buffer[i + 332] == '0');
b333_1 =(buffer[i + 333] == 'C');
b334_1 =(buffer[i + 334] == ' ');
b335_1 =(buffer[i + 335] == '0');
b336_1 =(buffer[i + 336] == '0');
b337_1 =(buffer[i + 337] == ' ');
b338_1 =(buffer[i + 338] == '0');
b339_1 =(buffer[i + 339] == '4');
b340_1 =(buffer[i + 340] == ' ');
b341_1 =(buffer[i + 341] == '0');
b342_1 =(buffer[i + 342] == '0');
b343_1 =(buffer[i + 343] == ' ');
b344_1 =(buffer[i + 344] == '0');
b345_1 =(buffer[i + 345] == '1');
b346_1 =(buffer[i + 346] == '|');
b347_1 =(buffer[i + 347] == 'Q');
b348_1 =(buffer[i + 348] == '|');
b349_1 =(buffer[i + 349] == '8');
b350_1 =(buffer[i + 350] == '0');
b351_1 =(buffer[i + 351] == ' ');
b352_1 =(buffer[i + 352] == '0');
b353_1 =(buffer[i + 353] == '0');
b354_1 =(buffer[i + 354] == ' ');
b355_1 =(buffer[i + 355] == '0');
b356_1 =(buffer[i + 356] == '0');
b357_1 =(buffer[i + 357] == ' ');
b358_1 =(buffer[i + 358] == '0');
b359_1 =(buffer[i + 359] == '0');
b360_1 =(buffer[i + 360] == ' ');
b361_1 =(buffer[i + 361] == '1');
b362_1 =(buffer[i + 362] == '0');
b363_1 =(buffer[i + 363] == '|');
if(b0_43) {
matched = true;
pattern_id = 0;
}
if(b0_43 && b1_78 && b2_71 && b3_14 && b4_76) {
matched = true;
pattern_id = 1;
}
if(b0_43 && b1_44 && b2_47 && b3_7 && b4_2 && b5_6 && b6_37 && b7_32 && b8_14 && b9_28 && b10_5 && b11_23 && b12_5 && b13_16 && b14_5 && b15_14 && b16_16 && b17_18 && b18_15 && b19_17 && b20_17 && b21_14 && b22_14 && b23_8) {
matched = true;
pattern_id = 2;
}
if(b0_43 && b1_26 && b2_15 && b3_8 && b4_17) {
matched = true;
pattern_id = 3;
}
if(b0_43 && b1_26 && b2_50 && b3_24) {
matched = true;
pattern_id = 4;
}
if(b0_43 && b1_61 && b2_61 && b3_5 && b4_52 && b5_56 && b6_23 && b7_33 && b8_48) {
matched = true;
pattern_id = 5;
}
if(b0_43 && b1_28 && b2_30 && b3_44) {
matched = true;
pattern_id = 6;
}
if(b0_43 && b1_5 && b2_40 && b3_5 && b4_10 && b5_30) {
matched = true;
pattern_id = 7;
}
if(b0_43 && b1_5 && b2_40 && b3_5 && b4_10 && b5_30 && b6_26 && b7_15 && b8_1 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7 && b16_60 && b17_27 && b18_29 && b19_34 && b20_55) {
matched = true;
pattern_id = 8;
}
if(b0_43 && b1_5 && b2_40 && b3_5 && b4_10 && b5_30 && b6_26 && b7_15 && b8_22 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7 && b16_21 && b17_4 && b18_31 && b19_9 && b20_34 && b21_36 && b22_59 && b23_8 && b24_54 && b25_20 && b26_53 && b27_8 && b28_2 && b29_14 && b30_5 && b31_11 && b32_16 && b33_4 && b34_8 && b35_27 && b36_1 && b37_30 && b38_1 && b39_19 && b40_16 && b41_43 && b42_37 && b43_41 && b44_32 && b45_17 && b46_30 && b47_16 && b48_25 && b49_13 && b50_13 && b51_6 && b52_1 && b53_25 && b54_4 && b55_20 && b56_23 && b57_21 && b58_25 && b59_21 && b60_21 && b61_19 && b62_21 && b63_20 && b64_8 && b65_22 && b66_18 && b67_15 && b68_19 && b69_16 && b70_23 && b71_9 && b72_14 && b73_17 && b74_20 && b75_7 && b76_15 && b77_14 && b78_17 && b79_14 && b80_13 && b81_4 && b82_4 && b83_18 && b84_2 && b85_2 && b86_13 && b87_8 && b88_13 && b89_12 && b90_11 && b91_1 && b92_10 && b93_12 && b94_9 && b95_3 && b96_10 && b97_10 && b98_11 && b99_2 && b100_10 && b101_11 && b102_10 && b103_9 && b104_8 && b105_10 && b106_9 && b107_8 && b108_8 && b109_8 && b110_1 && b111_1 && b112_8 && b113_8 && b114_3 && b115_9 && b116_8 && b117_7 && b118_5 && b119_8 && b120_1 && b121_7 && b122_8 && b123_9 && b124_7 && b125_5 && b126_8 && b127_3 && b128_9 && b129_7 && b130_8 && b131_1 && b132_8 && b133_6 && b134_6 && b135_7 && b136_4 && b137_2 && b138_3 && b139_7 && b140_6 && b141_7 && b142_6 && b143_6 && b144_7 && b145_3 && b146_5 && b147_6 && b148_3 && b149_5 && b150_2 && b151_5 && b152_6 && b153_5 && b154_5 && b155_5 && b156_6 && b157_5 && b158_3 && b159_5 && b160_1 && b161_6 && b162_6 && b163_1 && b164_6 && b165_4 && b166_4 && b167_4 && b168_4 && b169_4 && b170_5 && b171_4 && b172_4 && b173_3 && b174_4 && b175_3 && b176_4 && b177_1 && b178_3 && b179_3 && b180_3 && b181_3 && b182_2 && b183_2 && b184_2 && b185_3 && b186_3 && b187_2 && b188_3 && b189_3 && b190_3) {
matched = true;
pattern_id = 9;
}
if(b0_43 && b1_5 && b2_40 && b3_5 && b4_10 && b5_30 && b6_26 && b7_15 && b8_22 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7 && b16_33 && b17_36 && b18_4 && b19_21 && b20_62 && b21_28 && b22_41 && b23_18 && b24_21 && b25_30 && b26_54 && b27_2 && b28_59 && b29_34 && b30_45 && b31_29 && b32_42 && b33_24 && b34_22 && b35_17 && b36_39 && b37_17 && b38_5 && b39_7 && b40_4 && b41_6 && b42_4 && b43_4 && b44_8 && b45_4) {
matched = true;
pattern_id = 10;
}
if(b0_43 && b1_48 && b2_43 && b3_27 && b4_18 && b5_30 && b6_26 && b7_15) {
matched = true;
pattern_id = 11;
}
if(b0_43 && b1_59 && b2_15 && b3_11 && b4_17 && b5_6 && b6_12) {
matched = true;
pattern_id = 12;
}
if(b0_43 && b1_1 && b2_1 && b3_22 && b4_1 && b5_39 && b6_32 && b7_1 && b8_1 && b9_15 && b10_1 && b11_1 && b12_2 && b13_26) {
matched = true;
pattern_id = 13;
}
if(b0_71 && b1_39 && b2_4 && b3_53 && b4_45 && b5_23) {
matched = true;
pattern_id = 14;
}
if(b0_63) {
matched = true;
pattern_id = 15;
}
if(b0_63 && b1_17 && b2_62) {
matched = true;
pattern_id = 16;
}
if(b0_63 && b1_18 && b2_1) {
matched = true;
pattern_id = 17;
}
if(b0_63 && b1_18 && b2_26 && b3_53 && b4_12 && b5_62 && b6_24 && b7_47) {
matched = true;
pattern_id = 18;
}
if(b0_63 && b1_37 && b2_31 && b3_54 && b4_36 && b5_39 && b6_72 && b7_18 && b8_19 && b9_38 && b10_20 && b11_8 && b12_8) {
matched = true;
pattern_id = 19;
}
if(b0_63 && b1_19 && b2_44 && b3_25 && b4_63 && b5_5 && b6_31 && b7_74 && b8_53 && b9_21 && b10_53 && b11_36 && b12_14 && b13_28 && b14_60 && b15_12 && b16_59) {
matched = true;
pattern_id = 20;
}
if(b0_63 && b1_19 && b2_11 && b3_38 && b4_34 && b5_19 && b6_62 && b7_13 && b8_66) {
matched = true;
pattern_id = 21;
}
if(b0_63 && b1_7 && b2_54 && b3_67 && b4_61 && b5_24 && b6_47 && b7_77 && b8_43 && b9_37 && b10_37 && b11_51 && b12_29 && b13_13 && b14_6 && b15_2 && b16_26 && b17_23 && b18_16 && b19_53) {
matched = true;
pattern_id = 22;
}
if(b0_63 && b1_7 && b2_54 && b3_67 && b4_61 && b5_24 && b6_47 && b7_77 && b8_43 && b9_37 && b10_37 && b11_51 && b12_29 && b13_13 && b14_6 && b15_2 && b16_26 && b17_23 && b18_16 && b19_6 && b20_54 && b21_1 && b22_1 && b23_37 && b24_10 && b25_50 && b26_11 && b27_45 && b28_17 && b29_1 && b30_43) {
matched = true;
pattern_id = 23;
}
if(b0_63 && b1_7 && b2_54 && b3_67 && b4_10 && b5_48 && b6_62 && b7_17 && b8_43 && b9_47 && b10_33 && b11_67 && b12_11 && b13_65) {
matched = true;
pattern_id = 24;
}
if(b0_63 && b1_7 && b2_54 && b3_67 && b4_54 && b5_56 && b6_31 && b7_19 && b8_66) {
matched = true;
pattern_id = 25;
}
if(b0_63 && b1_27 && b2_1 && b3_54 && b4_25 && b5_32 && b6_62 && b7_54 && b8_66 && b9_3 && b10_15) {
matched = true;
pattern_id = 26;
}
if(b0_63 && b1_5 && b2_54 && b3_67 && b4_40 && b5_41 && b6_43 && b7_64 && b8_31 && b9_22 && b10_20) {
matched = true;
pattern_id = 27;
}
if(b0_63 && b1_5 && b2_54 && b3_67 && b4_40 && b5_56 && b6_15 && b7_5 && b8_64 && b9_65) {
matched = true;
pattern_id = 28;
}
if(b0_63 && b1_63 && b2_54 && b3_63 && b4_20 && b5_50 && b6_15 && b7_77 && b8_56 && b9_3 && b10_33 && b11_52 && b12_29 && b13_65) {
matched = true;
pattern_id = 29;
}
if(b0_63 && b1_63 && b2_54 && b3_23 && b4_28 && b5_63 && b6_29 && b7_17 && b8_43 && b9_59 && b10_45 && b11_51 && b12_48) {
matched = true;
pattern_id = 30;
}
if(b0_63 && b1_49 && b2_5 && b3_5 && b4_64 && b5_53) {
matched = true;
pattern_id = 31;
}
if(b0_63 && b1_49 && b2_5 && b3_5 && b4_64 && b5_67 && b6_67 && b7_5 && b8_66) {
matched = true;
pattern_id = 32;
}
if(b0_63 && b1_49 && b2_31 && b3_44 && b4_46 && b5_28 && b6_2) {
matched = true;
pattern_id = 33;
}
if(b0_63 && b1_49 && b2_56 && b3_13 && b4_67 && b5_18 && b6_15 && b7_76 && b8_45 && b9_8 && b10_36 && b11_22 && b12_48) {
matched = true;
pattern_id = 34;
}
if(b0_63 && b1_49 && b2_56 && b3_13 && b4_67 && b5_18 && b6_15 && b7_76 && b8_21 && b9_60 && b10_60 && b11_18 && b12_35 && b13_65) {
matched = true;
pattern_id = 35;
}
if(b0_63 && b1_49 && b2_56 && b3_13 && b4_67 && b5_18 && b6_15 && b7_76 && b8_21 && b9_60 && b10_60 && b11_18 && b12_35 && b13_26 && b14_13 && b15_1 && b16_15 && b17_60 && b18_14 && b19_54 && b20_9 && b21_23 && b22_15 && b23_7 && b24_46) {
matched = true;
pattern_id = 36;
}
if(b0_63 && b1_49 && b2_56 && b3_13 && b4_61 && b5_56 && b6_62 && b7_71) {
matched = true;
pattern_id = 37;
}
if(b0_63 && b1_49 && b2_45 && b3_67 && b4_44 && b5_12 && b6_39 && b7_54 && b8_5 && b9_21 && b10_28 && b11_40 && b12_50 && b13_65) {
matched = true;
pattern_id = 38;
}
if(b0_63 && b1_49 && b2_55 && b3_47 && b4_23 && b5_49 && b6_9 && b7_71) {
matched = true;
pattern_id = 39;
}
if(b0_63 && b1_9 && b2_66 && b3_18 && b4_6 && b5_6 && b6_18 && b7_22 && b8_8 && b9_49 && b10_56 && b11_3 && b12_48) {
matched = true;
pattern_id = 40;
}
if(b0_63 && b1_9 && b2_66 && b3_18 && b4_6 && b5_6 && b6_18 && b7_74 && b8_14 && b9_6 && b10_13 && b11_66) {
matched = true;
pattern_id = 41;
}
if(b0_63 && b1_10 && b2_9 && b3_67 && b4_10 && b5_53) {
matched = true;
pattern_id = 42;
}
if(b0_63 && b1_10 && b2_30 && b3_38 && b4_37) {
matched = true;
pattern_id = 43;
}
if(b0_63 && b1_73 && b2_45 && b3_30 && b4_58 && b5_41 && b6_15 && b7_5 && b8_4 && b9_65) {
matched = true;
pattern_id = 44;
}
if(b0_63 && b1_73 && b2_45 && b3_30 && b4_58 && b5_41 && b6_42 && b7_76 && b8_4 && b9_60 && b10_71 && b11_66) {
matched = true;
pattern_id = 45;
}
if(b0_63 && b1_73 && b2_45 && b3_30 && b4_58 && b5_63 && b6_15 && b7_76 && b8_52 && b9_65) {
matched = true;
pattern_id = 46;
}
if(b0_63 && b1_73 && b2_45 && b3_30 && b4_58 && b5_56 && b6_43 && b7_50 && b8_21 && b9_60 && b10_60 && b11_18 && b12_48) {
matched = true;
pattern_id = 47;
}
if(b0_63 && b1_41 && b2_58 && b3_64 && b4_34 && b5_49 && b6_43 && b7_71) {
matched = true;
pattern_id = 48;
}
if(b0_63 && b1_52 && b2_25 && b3_8 && b4_59 && b5_16 && b6_55 && b7_9 && b8_5 && b9_14 && b10_43 && b11_3 && b12_32 && b13_38 && b14_5 && b15_72) {
matched = true;
pattern_id = 49;
}
if(b0_64 && b1_2 && b2_49 && b3_49 && b4_27 && b5_12 && b6_41) {
matched = true;
pattern_id = 50;
}
if(b0_64 && b1_47 && b2_20 && b3_24 && b4_18 && b5_29 && b6_24 && b7_31 && b8_47 && b9_6) {
matched = true;
pattern_id = 51;
}
if(b0_64 && b1_58 && b2_25 && b3_24 && b4_56 && b5_30 && b6_24 && b7_59 && b8_41 && b9_4 && b10_41 && b11_22 && b12_6 && b13_51 && b14_15 && b15_7 && b16_42 && b17_38 && b18_39) {
matched = true;
pattern_id = 52;
}
if(b0_64 && b1_21 && b2_21 && b3_8 && b4_27 && b5_52 && b6_41) {
matched = true;
pattern_id = 53;
}
if(b0_64 && b1_13 && b2_16 && b3_43 && b4_18 && b5_27 && b6_7 && b7_34) {
matched = true;
pattern_id = 54;
}
if(b0_64 && b1_52 && b2_18 && b3_4 && b4_43) {
matched = true;
pattern_id = 55;
}
if(b0_64 && b1_52 && b2_3 && b3_20 && b4_27 && b5_20 && b6_38 && b7_34) {
matched = true;
pattern_id = 56;
}
if(b0_78 && b1_79 && b2_7 && b3_70) {
matched = true;
pattern_id = 57;
}
if(b0_78 && b1_56 && b2_21 && b3_19 && b4_3 && b5_10 && b6_56 && b7_45 && b8_3 && b9_53 && b10_17 && b11_23 && b12_16 && b13_27 && b14_21 && b15_41 && b16_70) {
matched = true;
pattern_id = 58;
}
if(b0_78 && b1_1 && b2_1 && b3_1 && b4_32) {
matched = true;
pattern_id = 59;
}
if(b0_76 && b1_72 && b2_41 && b3_8 && b4_43) {
matched = true;
pattern_id = 60;
}
if(b0_27 && b1_36 && b2_31 && b3_6 && b4_22 && b5_17 && b6_12 && b7_9 && b8_8 && b9_6 && b10_58 && b11_46 && b12_3 && b13_1 && b14_4 && b15_27 && b16_32 && b17_19 && b18_3 && b19_49 && b20_8 && b21_45 && b22_45 && b23_16 && b24_21 && b25_33 && b26_30 && b27_19 && b28_21 && b29_29 && b30_22) {
matched = true;
pattern_id = 61;
}
if(b0_27 && b1_70 && b2_54 && b3_47 && b4_13 && b5_50 && b6_31 && b7_66) {
matched = true;
pattern_id = 62;
}
if(b0_27 && b1_5 && b2_9 && b3_25 && b4_23 && b5_24 && b6_17) {
matched = true;
pattern_id = 63;
}
if(b0_27 && b1_1 && b2_1 && b3_53 && b4_32) {
matched = true;
pattern_id = 64;
}
if(b0_34 && b1_30 && b2_35 && b3_26 && b4_6 && b5_7) {
matched = true;
pattern_id = 65;
}
if(b0_34 && b1_1 && b2_1 && b3_41 && b4_1 && b5_28 && b6_1 && b7_3 && b8_33 && b9_4 && b10_27 && b11_25 && b12_6 && b13_12 && b14_30 && b15_4 && b16_4 && b17_9 && b18_3 && b19_18 && b20_7 && b21_4) {
matched = true;
pattern_id = 66;
}
if(b0_79 && b1_1 && b2_46 && b3_53 && b4_32 && b5_16 && b6_55 && b7_7 && b8_35 && b9_27 && b10_49 && b11_30 && b12_5 && b13_4 && b14_7 && b15_3 && b16_41 && b17_10 && b18_34 && b19_22 && b20_3 && b21_5 && b22_1 && b23_21 && b24_16 && b25_6 && b26_54 && b27_59 && b28_6 && b29_5 && b30_1 && b31_4 && b32_29 && b33_16 && b34_19 && b35_33 && b36_47 && b37_20 && b38_49 && b39_19 && b40_21 && b41_26 && b42_11 && b43_15 && b44_36 && b45_4 && b46_29 && b47_29 && b48_3 && b49_36) {
matched = true;
pattern_id = 67;
}
if(b0_55 && b1_44 && b2_42 && b3_26 && b4_14 && b5_57 && b6_39 && b7_47 && b8_39 && b9_40 && b10_26 && b11_23) {
matched = true;
pattern_id = 68;
}
if(b0_55 && b1_18 && b2_1 && b3_4 && b4_45 && b5_40 && b6_14 && b7_11 && b8_40 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7) {
matched = true;
pattern_id = 69;
}
if(b0_55 && b1_40 && b2_23 && b3_6 && b4_44 && b5_42 && b6_5 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 70;
}
if(b0_55 && b1_52 && b2_20 && b3_26 && b4_1 && b5_53 && b6_46) {
matched = true;
pattern_id = 71;
}
if(b0_32) {
matched = true;
pattern_id = 72;
}
if(b0_32 && b1_42 && b2_46 && b3_1 && b4_26) {
matched = true;
pattern_id = 73;
}
if(b0_32 && b1_26) {
matched = true;
pattern_id = 74;
}
if(b0_32 && b1_26 && b2_60 && b3_29 && b4_35) {
matched = true;
pattern_id = 75;
}
if(b0_32 && b1_26 && b2_29) {
matched = true;
pattern_id = 76;
}
if(b0_32 && b1_26 && b2_29 && b3_29 && b4_26 && b5_30 && b6_2 && b7_15 && b8_15) {
matched = true;
pattern_id = 77;
}
if(b0_32 && b1_26 && b2_4 && b3_52 && b4_8 && b5_23 && b6_2 && b7_15) {
matched = true;
pattern_id = 78;
}
if(b0_32 && b1_2 && b2_42 && b3_18 && b4_44 && b5_25 && b6_39 && b7_9 && b8_5 && b9_42 && b10_43 && b11_6 && b12_7 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 79;
}
if(b0_32 && b1_2 && b2_8 && b3_50) {
matched = true;
pattern_id = 80;
}
if(b0_32 && b1_2 && b2_8 && b3_50 && b4_26) {
matched = true;
pattern_id = 81;
}
if(b0_32 && b1_2 && b2_8 && b3_50 && b4_32 && b5_38 && b6_15 && b7_1 && b8_25 && b9_8 && b10_1 && b11_42 && b12_44 && b13_26 && b14_14 && b15_24 && b16_35 && b17_24) {
matched = true;
pattern_id = 82;
}
if(b0_32 && b1_47 && b2_43 && b3_8 && b4_55) {
matched = true;
pattern_id = 83;
}
if(b0_32 && b1_47 && b2_43 && b3_8 && b4_32 && b5_44 && b6_32 && b7_3) {
matched = true;
pattern_id = 84;
}
if(b0_32 && b1_47 && b2_14 && b3_43) {
matched = true;
pattern_id = 85;
}
if(b0_32 && b1_11 && b2_41 && b3_26) {
matched = true;
pattern_id = 86;
}
if(b0_32 && b1_11 && b2_6 && b3_21 && b4_55 && b5_60) {
matched = true;
pattern_id = 87;
}
if(b0_32 && b1_11 && b2_6 && b3_21 && b4_32 && b5_44 && b6_32 && b7_3) {
matched = true;
pattern_id = 88;
}
if(b0_32 && b1_11 && b2_21 && b3_49) {
matched = true;
pattern_id = 89;
}
if(b0_32 && b1_11 && b2_20 && b3_34 && b4_46) {
matched = true;
pattern_id = 90;
}
if(b0_32 && b1_11 && b2_20 && b3_34 && b4_26 && b5_54 && b6_10 && b7_3 && b8_1 && b9_3 && b10_1 && b11_1 && b12_29 && b13_1 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 91;
}
if(b0_32 && b1_11 && b2_23 && b3_11 && b4_18 && b5_42 && b6_7 && b7_17 && b8_34 && b9_5 && b10_35 && b11_3 && b12_3 && b13_38 && b14_43 && b15_39) {
matched = true;
pattern_id = 92;
}
if(b0_32 && b1_11 && b2_8 && b3_50 && b4_26) {
matched = true;
pattern_id = 93;
}
if(b0_32 && b1_58 && b2_20 && b3_40 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 94;
}
if(b0_32 && b1_3 && b2_6 && b3_49) {
matched = true;
pattern_id = 95;
}
if(b0_32 && b1_3 && b2_19 && b3_11) {
matched = true;
pattern_id = 96;
}
if(b0_32 && b1_3 && b2_19 && b3_11 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_2 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_61 && b21_21 && b22_22 && b23_28 && b24_50) {
matched = true;
pattern_id = 97;
}
if(b0_32 && b1_3 && b2_19 && b3_11 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_66 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_21 && b21_10 && b22_19 && b23_46 && b24_45 && b25_17 && b26_39 && b27_1 && b28_23 && b29_25 && b30_49 && b31_10 && b32_49 && b33_11 && b34_45 && b35_2 && b36_9 && b37_25 && b38_19 && b39_39) {
matched = true;
pattern_id = 98;
}
if(b0_32 && b1_3 && b2_19 && b3_11 && b4_74 && b5_7 && b6_41) {
matched = true;
pattern_id = 99;
}
if(b0_32 && b1_3 && b2_19 && b3_11 && b4_32 && b5_1 && b6_49 && b7_1 && b8_1 && b9_8 && b10_2) {
matched = true;
pattern_id = 100;
}
if(b0_32 && b1_40 && b2_20 && b3_20 && b4_31 && b5_11 && b6_10 && b7_29) {
matched = true;
pattern_id = 101;
}
if(b0_32 && b1_62 && b2_14 && b3_49) {
matched = true;
pattern_id = 102;
}
if(b0_32 && b1_62 && b2_14 && b3_49 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 103;
}
if(b0_32 && b1_62 && b2_14 && b3_49 && b4_55 && b5_11 && b6_36 && b7_9 && b8_11 && b9_6 && b10_12 && b11_29) {
matched = true;
pattern_id = 104;
}
if(b0_32 && b1_14 && b2_3 && b3_26 && b4_14 && b5_51 && b6_7 && b7_7 && b8_2) {
matched = true;
pattern_id = 105;
}
if(b0_32 && b1_14 && b2_3 && b3_16 && b4_17 && b5_10 && b6_39 && b7_47) {
matched = true;
pattern_id = 106;
}
if(b0_32 && b1_14 && b2_3 && b3_34 && b4_22) {
matched = true;
pattern_id = 107;
}
if(b0_32 && b1_14 && b2_3 && b3_34 && b4_22 && b5_30 && b6_2 && b7_15 && b8_48 && b9_42 && b10_48 && b11_57) {
matched = true;
pattern_id = 108;
}
if(b0_32 && b1_14 && b2_3 && b3_34 && b4_22 && b5_64 && b6_1 && b7_15) {
matched = true;
pattern_id = 109;
}
if(b0_32 && b1_14 && b2_3 && b3_50 && b4_18 && b5_26 && b6_24 && b7_53 && b8_47) {
matched = true;
pattern_id = 110;
}
if(b0_32 && b1_14 && b2_3 && b3_20) {
matched = true;
pattern_id = 111;
}
if(b0_32 && b1_14 && b2_3 && b3_2) {
matched = true;
pattern_id = 112;
}
if(b0_32 && b1_14 && b2_3 && b3_2 && b4_55 && b5_31 && b6_35 && b7_58 && b8_5 && b9_50 && b10_55 && b11_37 && b12_4 && b13_16 && b14_6 && b15_35 && b16_8 && b17_29) {
matched = true;
pattern_id = 113;
}
if(b0_32 && b1_21 && b2_41 && b3_26) {
matched = true;
pattern_id = 114;
}
if(b0_32 && b1_21 && b2_41 && b3_26 && b4_55) {
matched = true;
pattern_id = 115;
}
if(b0_32 && b1_21 && b2_41 && b3_40 && b4_32 && b5_38 && b6_15 && b7_1 && b8_25 && b9_8 && b10_1 && b11_42 && b12_44 && b13_26 && b14_51 && b15_33 && b16_44 && b17_10) {
matched = true;
pattern_id = 116;
}
if(b0_32 && b1_21 && b2_41 && b3_62) {
matched = true;
pattern_id = 117;
}
if(b0_32 && b1_21 && b2_41 && b3_62 && b4_55) {
matched = true;
pattern_id = 118;
}
if(b0_32 && b1_21 && b2_21 && b3_49 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_66 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_22 && b21_35 && b22_39 && b23_18 && b24_27 && b25_30 && b26_54 && b27_2 && b28_58 && b29_18 && b30_50 && b31_4 && b32_7 && b33_42 && b34_5 && b35_7 && b36_33 && b37_10 && b38_11 && b39_31 && b40_27 && b41_25 && b42_22 && b43_17 && b44_40 && b45_38 && b46_17 && b47_31 && b48_1 && b49_29 && b50_32 && b51_25 && b52_23 && b53_31 && b54_2 && b55_32 && b56_26 && b57_22 && b58_30 && b59_24 && b60_2 && b61_25 && b62_25 && b63_24 && b64_17 && b65_23 && b66_21 && b67_18 && b68_6 && b69_4 && b70_26 && b71_6 && b72_3 && b73_21 && b74_3 && b75_17 && b76_1 && b77_18 && b78_10 && b79_16 && b80_18 && b81_15 && b82_10 && b83_1 && b84_15 && b85_15 && b86_15 && b87_15 && b88_14 && b89_15 && b90_12 && b91_12 && b92_13 && b93_15 && b94_12) {
matched = true;
pattern_id = 119;
}
if(b0_32 && b1_66 && b2_21 && b3_24 && b4_7) {
matched = true;
pattern_id = 120;
}
if(b0_32 && b1_66 && b2_50 && b3_11 && b4_19 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 121;
}
if(b0_32 && b1_66 && b2_50 && b3_16) {
matched = true;
pattern_id = 122;
}
if(b0_32 && b1_66 && b2_50 && b3_16 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 123;
}
if(b0_32 && b1_66 && b2_8 && b3_50) {
matched = true;
pattern_id = 124;
}
if(b0_32 && b1_24 && b2_43 && b3_27 && b4_18 && b5_16 && b6_21 && b7_8 && b8_42 && b9_9 && b10_26 && b11_30 && b12_26 && b13_62 && b14_34 && b15_22 && b16_30 && b17_25 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_2 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2) {
matched = true;
pattern_id = 125;
}
if(b0_32 && b1_24 && b2_41) {
matched = true;
pattern_id = 126;
}
if(b0_32 && b1_35 && b2_20 && b3_21) {
matched = true;
pattern_id = 127;
}
if(b0_32 && b1_50 && b2_8 && b3_49 && b4_35) {
matched = true;
pattern_id = 128;
}
if(b0_32 && b1_13 && b2_7 && b3_65 && b4_52 && b5_58 && b6_45 && b7_44 && b8_22 && b9_42 && b10_27) {
matched = true;
pattern_id = 129;
}
if(b0_32 && b1_13 && b2_43 && b3_7 && b4_2 && b5_6 && b6_15 && b7_45 && b8_11 && b9_28 && b10_28 && b11_40 && b12_38 && b13_36 && b14_28 && b15_32) {
matched = true;
pattern_id = 130;
}
if(b0_32 && b1_13 && b2_41 && b3_49 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 131;
}
if(b0_32 && b1_13 && b2_15 && b3_50) {
matched = true;
pattern_id = 132;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_66 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_21 && b21_10 && b22_19 && b23_46 && b24_45 && b25_17 && b26_39 && b27_1 && b28_23 && b29_25 && b30_49 && b31_10 && b32_48 && b33_38 && b34_24 && b35_29 && b36_20 && b37_42) {
matched = true;
pattern_id = 133;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55) {
matched = true;
pattern_id = 134;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_51 && b6_19 && b7_31 && b8_54 && b9_5 && b10_29 && b11_48 && b12_18 && b13_3 && b14_20 && b15_34 && b16_29 && b17_68 && b18_23 && b19_21 && b20_37 && b21_4 && b22_21 && b23_1 && b24_2 && b25_8 && b26_2 && b27_2 && b28_20 && b29_14 && b30_5 && b31_46 && b32_5 && b33_8 && b34_13 && b35_4 && b36_6 && b37_6 && b38_5 && b39_7) {
matched = true;
pattern_id = 135;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_12 && b6_41) {
matched = true;
pattern_id = 136;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_3 && b6_55 && b7_31 && b8_16 && b9_5 && b10_29 && b11_74 && b12_17 && b13_60 && b14_50 && b15_3 && b16_55 && b17_29 && b18_44 && b19_63 && b20_2 && b21_37 && b22_28 && b23_31 && b24_37 && b25_25 && b26_25 && b27_33) {
matched = true;
pattern_id = 137;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_16 && b6_46 && b7_34) {
matched = true;
pattern_id = 138;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_27 && b6_8 && b7_32 && b8_37) {
matched = true;
pattern_id = 139;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_27 && b6_7 && b7_9 && b8_6 && b9_6 && b10_7 && b11_29) {
matched = true;
pattern_id = 140;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_52 && b6_19 && b7_47 && b8_37 && b9_14 && b10_17 && b11_47 && b12_5 && b13_27 && b14_36 && b15_25) {
matched = true;
pattern_id = 141;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_29 && b6_24 && b7_10 && b8_8 && b9_56 && b10_43 && b11_6 && b12_39 && b13_5 && b14_19) {
matched = true;
pattern_id = 142;
}
if(b0_32 && b1_13 && b2_24) {
matched = true;
pattern_id = 143;
}
if(b0_32 && b1_13 && b2_23 && b3_15 && b4_3 && b5_42 && b6_7 && b7_8) {
matched = true;
pattern_id = 144;
}
if(b0_32 && b1_16 && b2_43) {
matched = true;
pattern_id = 145;
}
if(b0_32 && b1_16 && b2_43 && b3_20 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_66 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_22 && b21_35 && b22_39 && b23_18 && b24_27 && b25_30 && b26_54 && b27_2 && b28_30 && b29_30 && b30_53 && b31_32 && b32_21 && b33_49 && b34_48 && b35_5 && b36_20 && b37_23 && b38_27 && b39_22 && b40_20 && b41_24 && b42_11 && b43_17 && b44_24 && b45_16 && b46_17 && b47_32 && b48_17 && b49_4 && b50_2 && b51_26 && b52_3 && b53_4 && b54_28 && b55_17 && b56_27 && b57_23 && b58_22 && b59_25 && b60_22 && b61_26 && b62_19 && b63_12 && b64_1 && b65_12 && b66_17 && b67_5 && b68_22 && b69_20 && b70_27 && b71_13 && b72_18 && b73_17 && b74_10 && b75_9 && b76_19 && b77_19 && b78_5 && b79_3 && b80_3 && b81_16 && b82_19 && b83_6 && b84_13 && b85_16 && b86_16 && b87_16 && b88_15 && b89_10 && b90_10 && b91_8) {
matched = true;
pattern_id = 146;
}
if(b0_32 && b1_16 && b2_15 && b3_6 && b4_2 && b5_42 && b6_24) {
matched = true;
pattern_id = 147;
}
if(b0_32 && b1_16 && b2_6 && b3_50) {
matched = true;
pattern_id = 148;
}
if(b0_32 && b1_16 && b2_50) {
matched = true;
pattern_id = 149;
}
if(b0_32 && b1_16 && b2_3) {
matched = true;
pattern_id = 150;
}
if(b0_32 && b1_52 && b2_17 && b3_49 && b4_55) {
matched = true;
pattern_id = 151;
}
if(b0_32 && b1_59 && b2_6 && b3_49) {
matched = true;
pattern_id = 152;
}
if(b0_32 && b1_59 && b2_6 && b3_59) {
matched = true;
pattern_id = 153;
}
if(b0_32 && b1_59 && b2_17 && b3_2 && b4_59 && b5_11 && b6_36 && b7_54) {
matched = true;
pattern_id = 154;
}
if(b0_32 && b1_59 && b2_17 && b3_2 && b4_18 && b5_51 && b6_20) {
matched = true;
pattern_id = 155;
}
if(b0_32 && b1_54 && b2_50 && b3_16 && b4_26 && b5_51 && b6_3 && b7_39 && b8_48 && b9_50 && b10_4 && b11_20 && b12_2 && b13_12 && b14_3 && b15_1 && b16_21 && b17_8 && b18_35 && b19_40 && b20_25 && b21_29 && b22_40 && b23_28 && b24_50 && b25_13 && b26_19 && b27_1 && b28_44 && b29_25 && b30_23 && b31_19 && b32_20 && b33_19 && b34_21 && b35_45 && b36_6 && b37_46 && b38_46 && b39_43 && b40_3 && b41_4 && b42_13 && b43_2 && b44_3 && b45_35 && b46_2 && b47_8 && b48_12 && b49_25 && b50_17 && b51_9 && b52_17 && b53_29 && b54_24 && b55_22 && b56_24 && b57_21 && b58_16 && b59_13 && b60_12 && b61_22 && b62_16 && b63_2 && b64_11 && b65_10 && b66_9 && b67_20 && b68_9 && b69_18 && b70_4 && b71_18 && b72_2 && b73_4 && b74_23 && b75_5 && b76_3 && b77_17 && b78_9 && b79_15 && b80_16 && b81_6 && b82_17 && b83_7 && b84_13 && b85_14 && b86_14 && b87_13 && b88_1 && b89_13 && b90_2 && b91_10 && b92_11 && b93_13 && b94_10 && b95_11 && b96_8 && b97_11 && b98_12 && b99_5 && b100_11 && b101_2 && b102_3 && b103_10 && b104_9 && b105_1 && b106_10 && b107_9 && b108_9 && b109_9 && b110_9 && b111_8 && b112_9 && b113_3 && b114_2 && b115_10 && b116_9 && b117_4 && b118_2 && b119_9 && b120_9 && b121_8 && b122_9 && b123_9 && b124_8 && b125_8 && b126_9 && b127_8 && b128_10 && b129_8 && b130_9 && b131_8 && b132_3 && b133_1 && b134_7 && b135_8 && b136_5 && b137_5 && b138_2 && b139_8 && b140_7 && b141_7 && b142_1 && b143_7 && b144_4) {
matched = true;
pattern_id = 156;
}
if(b0_32 && b1_71 && b2_14 && b3_50) {
matched = true;
pattern_id = 157;
}
if(b0_32 && b1_71 && b2_20 && b3_24 && b4_22 && b5_11 && b6_10 && b7_29 && b8_15) {
matched = true;
pattern_id = 158;
}
if(b0_35) {
matched = true;
pattern_id = 159;
}
if(b0_35 && b1_42 && b2_67) {
matched = true;
pattern_id = 160;
}
if(b0_35 && b1_42 && b2_1 && b3_1) {
matched = true;
pattern_id = 161;
}
if(b0_35 && b1_65 && b2_60 && b3_15 && b4_16 && b5_51) {
matched = true;
pattern_id = 162;
}
if(b0_35 && b1_65 && b2_60 && b3_18 && b4_15 && b5_42 && b6_18 && b7_54) {
matched = true;
pattern_id = 163;
}
if(b0_35 && b1_26 && b2_60 && b3_29 && b4_26) {
matched = true;
pattern_id = 164;
}
if(b0_35 && b1_26 && b2_60 && b3_56 && b4_26 && b5_40 && b6_23) {
matched = true;
pattern_id = 165;
}
if(b0_35 && b1_26 && b2_31 && b3_10 && b4_59 && b5_5 && b6_11 && b7_14 && b8_8 && b9_5) {
matched = true;
pattern_id = 166;
}
if(b0_35 && b1_26 && b2_36 && b3_47 && b4_8 && b5_49 && b6_55 && b7_29 && b8_5 && b9_45) {
matched = true;
pattern_id = 167;
}
if(b0_35 && b1_26 && b2_42 && b3_26 && b4_2 && b5_7 && b6_54 && b7_2 && b8_11 && b9_9 && b10_13 && b11_6 && b12_20 && b13_47) {
matched = true;
pattern_id = 168;
}
if(b0_35 && b1_26 && b2_16 && b3_26 && b4_14 && b5_7 && b6_7 && b7_44 && b8_18 && b9_48 && b10_29) {
matched = true;
pattern_id = 169;
}
if(b0_35 && b1_26 && b2_16 && b3_6 && b4_51 && b5_11 && b6_20 && b7_9 && b8_15 && b9_9 && b10_26 && b11_40 && b12_5 && b13_59 && b14_5 && b15_3 && b16_3 && b17_50 && b18_15 && b19_42 && b20_13 && b21_10 && b22_27 && b23_28 && b24_3 && b25_41 && b26_27 && b27_1 && b28_34 && b29_36 && b30_17 && b31_24 && b32_22 && b33_18 && b34_30 && b35_2) {
matched = true;
pattern_id = 170;
}
if(b0_35 && b1_26 && b2_15 && b3_15 && b4_2 && b5_42 && b6_3 && b7_8 && b8_46) {
matched = true;
pattern_id = 171;
}
if(b0_35 && b1_26 && b2_21 && b3_18 && b4_14 && b5_10 && b6_55 && b7_55 && b8_11 && b9_12) {
matched = true;
pattern_id = 172;
}
if(b0_35 && b1_26 && b2_50 && b3_11 && b4_17 && b5_3) {
matched = true;
pattern_id = 173;
}
if(b0_35 && b1_26 && b2_8 && b3_27 && b4_3 && b5_30 && b6_7 && b7_45 && b8_35 && b9_14 && b10_26 && b11_3 && b12_16) {
matched = true;
pattern_id = 174;
}
if(b0_35 && b1_61 && b2_29 && b3_56 && b4_35 && b5_30 && b6_23 && b7_44) {
matched = true;
pattern_id = 175;
}
if(b0_35 && b1_15 && b2_60 && b3_16 && b4_27 && b5_3 && b6_61) {
matched = true;
pattern_id = 176;
}
if(b0_35 && b1_15 && b2_29 && b3_14 && b4_64 && b5_58 && b6_62 && b7_77 && b8_15 && b9_15 && b10_48) {
matched = true;
pattern_id = 177;
}
if(b0_35 && b1_15 && b2_1 && b3_1 && b4_26 && b5_62 && b6_46 && b7_46) {
matched = true;
pattern_id = 178;
}
if(b0_35 && b1_17 && b2_29 && b3_41 && b4_51 && b5_43 && b6_68 && b7_68 && b8_17 && b9_71 && b10_40 && b11_25 && b12_54 && b13_2 && b14_16 && b15_27 && b16_27 && b17_15 && b18_38 && b19_3 && b20_5 && b21_35 && b22_2) {
matched = true;
pattern_id = 179;
}
if(b0_35 && b1_17 && b2_27 && b3_56 && b4_21 && b5_6 && b6_7 && b7_29 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 180;
}
if(b0_35 && b1_17 && b2_27 && b3_56 && b4_21 && b5_10 && b6_10 && b7_39 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 181;
}
if(b0_35 && b1_18 && b2_1) {
matched = true;
pattern_id = 182;
}
if(b0_35 && b1_37 && b2_13 && b3_16 && b4_21 && b5_9 && b6_52 && b7_44 && b8_8 && b9_57 && b10_23 && b11_59 && b12_31 && b13_11 && b14_13 && b15_71 && b16_18) {
matched = true;
pattern_id = 183;
}
if(b0_35 && b1_67) {
matched = true;
pattern_id = 184;
}
if(b0_35 && b1_67 && b2_60 && b3_60 && b4_2 && b5_52) {
matched = true;
pattern_id = 185;
}
if(b0_35 && b1_67 && b2_30 && b3_37 && b4_34) {
matched = true;
pattern_id = 186;
}
if(b0_35 && b1_67 && b2_49 && b3_37 && b4_18) {
matched = true;
pattern_id = 187;
}
if(b0_35 && b1_67 && b2_12 && b3_2 && b4_2 && b5_37 && b6_10 && b7_29 && b8_37 && b9_17 && b10_4) {
matched = true;
pattern_id = 188;
}
if(b0_35 && b1_67 && b2_62 && b3_37) {
matched = true;
pattern_id = 189;
}
if(b0_35 && b1_19 && b2_40 && b3_51 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 190;
}
if(b0_35 && b1_19 && b2_40 && b3_51 && b4_19 && b5_6 && b6_55 && b7_10 && b8_8 && b9_27 && b10_13 && b11_3 && b12_39 && b13_40 && b14_38 && b15_40 && b16_24) {
matched = true;
pattern_id = 191;
}
if(b0_35 && b1_19 && b2_41 && b3_34 && b4_27 && b5_20 && b6_19 && b7_9 && b8_16 && b9_34 && b10_46) {
matched = true;
pattern_id = 192;
}
if(b0_35 && b1_19 && b2_21 && b3_44 && b4_44 && b5_8 && b6_18 && b7_18) {
matched = true;
pattern_id = 193;
}
if(b0_35 && b1_19 && b2_21 && b3_45 && b4_29 && b5_10 && b6_10 && b7_39 && b8_27) {
matched = true;
pattern_id = 194;
}
if(b0_35 && b1_7 && b2_45 && b3_67 && b4_18 && b5_16 && b6_20 && b7_9 && b8_14 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 195;
}
if(b0_35 && b1_7 && b2_64 && b3_10 && b4_35 && b5_67 && b6_55 && b7_9 && b8_8 && b9_49 && b10_17 && b11_5) {
matched = true;
pattern_id = 196;
}
if(b0_35 && b1_7 && b2_43 && b3_20 && b4_12 && b5_25 && b6_20 && b7_14 && b8_15 && b9_27 && b10_7 && b11_34 && b12_12 && b13_5 && b14_42 && b15_3) {
matched = true;
pattern_id = 197;
}
if(b0_35 && b1_7 && b2_15 && b3_20 && b4_44 && b5_27 && b6_7 && b7_16 && b8_5 && b9_10 && b10_9 && b11_35 && b12_12 && b13_18 && b14_20 && b15_25) {
matched = true;
pattern_id = 198;
}
if(b0_35 && b1_7 && b2_20 && b3_43 && b4_2 && b5_10 && b6_20 && b7_10 && b8_64 && b9_5 && b10_49 && b11_35 && b12_28) {
matched = true;
pattern_id = 199;
}
if(b0_35 && b1_7 && b2_20 && b3_43 && b4_6 && b5_6 && b6_55 && b7_9 && b8_21 && b9_49 && b10_49 && b11_40 && b12_5 && b13_4 && b14_34 && b15_18 && b16_8 && b17_26) {
matched = true;
pattern_id = 200;
}
if(b0_35 && b1_27 && b2_34 && b3_22 && b4_66 && b5_6 && b6_21 && b7_44) {
matched = true;
pattern_id = 201;
}
if(b0_35 && b1_27 && b2_43 && b3_8 && b4_18 && b5_54 && b6_8 && b7_7 && b8_5 && b9_39 && b10_9 && b11_27 && b12_18 && b13_38 && b14_24 && b15_30 && b16_22 && b17_36 && b18_18 && b19_2 && b20_48 && b21_42) {
matched = true;
pattern_id = 202;
}
if(b0_35 && b1_27 && b2_14 && b3_20 && b4_12 && b5_51 && b6_11 && b7_14 && b8_8 && b9_41 && b10_60 && b11_37 && b12_16 && b13_38 && b14_24 && b15_41 && b16_18 && b17_38 && b18_32 && b19_41 && b20_34) {
matched = true;
pattern_id = 203;
}
if(b0_35 && b1_31 && b2_14 && b3_24 && b4_12 && b5_58 && b6_3 && b7_22 && b8_14 && b9_33 && b10_12 && b11_30 && b12_26 && b13_43 && b14_51 && b15_36 && b16_29 && b17_40 && b18_4) {
matched = true;
pattern_id = 204;
}
if(b0_35 && b1_31 && b2_20 && b3_20 && b4_24 && b5_61 && b6_8 && b7_45 && b8_47 && b9_34 && b10_17 && b11_23 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 205;
}
if(b0_35 && b1_31 && b2_20 && b3_20 && b4_24 && b5_37 && b6_58 && b7_16 && b8_41 && b9_14 && b10_26 && b11_35 && b12_4 && b13_40 && b14_20 && b15_32 && b16_16) {
matched = true;
pattern_id = 206;
}
if(b0_35 && b1_31 && b2_20 && b3_20 && b4_24 && b5_37 && b6_33 && b7_27 && b8_53 && b9_17 && b10_4 && b11_37 && b12_32 && b13_38 && b14_34 && b15_33 && b16_2 && b17_34) {
matched = true;
pattern_id = 207;
}
if(b0_35 && b1_31 && b2_3 && b3_50 && b4_54 && b5_11 && b6_22 && b7_10 && b8_48 && b9_40 && b10_49 && b11_30) {
matched = true;
pattern_id = 208;
}
if(b0_35 && b1_31 && b2_3 && b3_50 && b4_54 && b5_11 && b6_22 && b7_10 && b8_32 && b9_35 && b10_61 && b11_57 && b12_39 && b13_41 && b14_18) {
matched = true;
pattern_id = 209;
}
if(b0_35 && b1_31 && b2_3 && b3_50 && b4_54 && b5_11 && b6_22 && b7_10 && b8_32 && b9_59 && b10_61 && b11_57 && b12_39 && b13_41 && b14_18) {
matched = true;
pattern_id = 210;
}
if(b0_35 && b1_70 && b2_63 && b3_58 && b4_40 && b5_32 && b6_2 && b7_17 && b8_59 && b9_22) {
matched = true;
pattern_id = 211;
}
if(b0_35 && b1_70 && b2_63 && b3_58 && b4_40 && b5_32 && b6_2 && b7_17 && b8_59 && b9_22 && b10_64) {
matched = true;
pattern_id = 212;
}
if(b0_35 && b1_70 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_20 && b8_12 && b9_11 && b10_43 && b11_40 && b12_38 && b13_36 && b14_28 && b15_32 && b16_32 && b17_34 && b18_37 && b19_2) {
matched = true;
pattern_id = 213;
}
if(b0_35 && b1_5 && b2_22 && b3_12 && b4_10 && b5_28) {
matched = true;
pattern_id = 214;
}
if(b0_35 && b1_5 && b2_20 && b3_34 && b4_12 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36 && b15_7 && b16_27 && b17_9 && b18_8 && b19_1 && b20_45 && b21_27 && b22_18 && b23_28 && b24_31 && b25_40 && b26_15 && b27_2 && b28_4 && b29_30 && b30_13 && b31_20 && b32_29 && b33_25 && b34_15 && b35_30 && b36_6 && b37_27 && b38_18 && b39_15 && b40_14 && b41_20 && b42_29 && b43_26 && b44_28 && b45_25 && b46_28 && b47_1 && b48_1 && b49_20 && b50_22 && b51_13 && b52_1 && b53_14 && b54_9 && b55_16 && b56_13 && b57_9 && b58_15) {
matched = true;
pattern_id = 215;
}
if(b0_35 && b1_43 && b2_45 && b3_12 && b4_10 && b5_49 && b6_29 && b7_30 && b8_5 && b9_34 && b10_17 && b11_40 && b12_26 && b13_22 && b14_34 && b15_18 && b16_8 && b17_26) {
matched = true;
pattern_id = 216;
}
if(b0_35 && b1_43 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54 && b8_15 && b9_60 && b10_12 && b11_5 && b12_4 && b13_43 && b14_18 && b15_15 && b16_56 && b17_44 && b18_64 && b19_35 && b20_17 && b21_20 && b22_37 && b23_32 && b24_24 && b25_18 && b26_62) {
matched = true;
pattern_id = 217;
}
if(b0_35 && b1_43 && b2_21 && b3_8 && b4_12 && b5_8 && b6_8 && b7_32 && b8_35 && b9_49 && b10_56 && b11_3 && b12_57 && b13_32 && b14_17 && b15_31 && b16_55 && b17_38 && b18_53 && b19_41 && b20_34) {
matched = true;
pattern_id = 218;
}
if(b0_35 && b1_48 && b2_11 && b3_51 && b4_70 && b5_11 && b6_23 && b7_80 && b8_2 && b9_52) {
matched = true;
pattern_id = 219;
}
if(b0_35 && b1_63 && b2_63 && b3_23 && b4_18 && b5_42 && b6_7) {
matched = true;
pattern_id = 220;
}
if(b0_35 && b1_63 && b2_25 && b3_8 && b4_2 && b5_46 && b6_3 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_29 && b13_20) {
matched = true;
pattern_id = 221;
}
if(b0_35 && b1_46 && b2_43 && b3_40 && b4_15 && b5_16 && b6_55 && b7_10 && b8_38 && b9_11 && b10_25 && b11_6) {
matched = true;
pattern_id = 222;
}
if(b0_35 && b1_46 && b2_8 && b3_34 && b4_61 && b5_11 && b6_24 && b7_30 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 223;
}
if(b0_35 && b1_4 && b2_55 && b3_25 && b4_35) {
matched = true;
pattern_id = 224;
}
if(b0_35 && b1_4 && b2_25 && b3_18 && b4_2 && b5_29 && b6_24 && b7_5 && b8_5 && b9_9 && b10_13) {
matched = true;
pattern_id = 225;
}
if(b0_35 && b1_4 && b2_25 && b3_2 && b4_2 && b5_30 && b6_38 && b7_31 && b8_35 && b9_5 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 226;
}
if(b0_35 && b1_4 && b2_25 && b3_2 && b4_2 && b5_30 && b6_38 && b7_31 && b8_35 && b9_5 && b10_48 && b11_35 && b12_50 && b13_6 && b14_40) {
matched = true;
pattern_id = 227;
}
if(b0_35 && b1_49 && b2_56 && b3_64 && b4_35) {
matched = true;
pattern_id = 228;
}
if(b0_35 && b1_49 && b2_45 && b3_57 && b4_2 && b5_6 && b6_10 && b7_44 && b8_56 && b9_35 && b10_15 && b11_36 && b12_11 && b13_4 && b14_35 && b15_19 && b16_5 && b17_33 && b18_4 && b19_44 && b20_48 && b21_36 && b22_14) {
matched = true;
pattern_id = 229;
}
if(b0_35 && b1_76 && b2_62 && b3_26 && b4_22 && b5_16 && b6_11 && b7_12 && b8_32 && b9_25 && b10_17 && b11_47 && b12_24 && b13_52 && b14_28 && b15_35 && b16_51 && b17_38 && b18_19 && b19_38 && b20_34) {
matched = true;
pattern_id = 230;
}
if(b0_35 && b1_57 && b2_54 && b3_12 && b4_34 && b5_5 && b6_23 && b7_32 && b8_58 && b9_49 && b10_59 && b11_28 && b12_38 && b13_22 && b14_49 && b15_32 && b16_29 && b17_10 && b18_22 && b19_40 && b20_48 && b21_18 && b22_40 && b23_25) {
matched = true;
pattern_id = 231;
}
if(b0_35 && b1_57 && b2_25 && b3_40 && b4_44 && b5_55 && b6_7 && b7_8 && b8_11 && b9_5 && b10_11 && b11_13 && b12_8 && b13_4 && b14_21 && b15_21 && b16_2 && b17_29 && b18_22 && b19_44 && b20_28 && b21_44 && b22_3) {
matched = true;
pattern_id = 232;
}
if(b0_35 && b1_57 && b2_25 && b3_40 && b4_44 && b5_55 && b6_7 && b7_8 && b8_11 && b9_5 && b10_11 && b11_13 && b12_21 && b13_43 && b14_24 && b15_15 && b16_32 && b17_37 && b18_30 && b19_34) {
matched = true;
pattern_id = 233;
}
if(b0_35 && b1_57 && b2_25 && b3_40 && b4_44 && b5_55 && b6_7 && b7_8 && b8_11 && b9_5 && b10_11 && b11_13 && b12_53 && b13_63 && b14_66 && b15_3 && b16_55 && b17_38 && b18_9 && b19_39 && b20_28) {
matched = true;
pattern_id = 234;
}
if(b0_35 && b1_9 && b2_36 && b3_64 && b4_44 && b5_3 && b6_35 && b7_9 && b8_11 && b9_17 && b10_28 && b11_40 && b12_38 && b13_36 && b14_28 && b15_36 && b16_23 && b17_26 && b18_36) {
matched = true;
pattern_id = 235;
}
if(b0_35 && b1_9 && b2_63 && b3_30 && b4_16 && b5_16 && b6_11 && b7_16 && b8_5 && b9_14 && b10_56 && b11_30 && b12_5 && b13_38) {
matched = true;
pattern_id = 236;
}
if(b0_35 && b1_9 && b2_43 && b3_34 && b4_7 && b5_25 && b6_7 && b7_56 && b8_2 && b9_25 && b10_6 && b11_61 && b12_18 && b13_36 && b14_51 && b15_3 && b16_32 && b17_21 && b18_9 && b19_25 && b20_37) {
matched = true;
pattern_id = 237;
}
if(b0_35 && b1_9 && b2_25 && b3_20 && b4_11 && b5_6 && b6_10 && b7_28 && b8_42 && b9_14 && b10_26 && b11_46 && b12_46 && b13_41 && b14_17 && b15_32 && b16_37 && b17_48 && b18_29 && b19_40 && b20_17 && b21_27 && b22_40 && b23_28 && b24_25 && b25_22 && b26_27 && b27_21) {
matched = true;
pattern_id = 238;
}
if(b0_35 && b1_9 && b2_25 && b3_20 && b4_11 && b5_6 && b6_10 && b7_39 && b8_42 && b9_17 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 239;
}
if(b0_35 && b1_9 && b2_25 && b3_8 && b4_50 && b5_52 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 240;
}
if(b0_35 && b1_9 && b2_15 && b3_6 && b4_7 && b5_41 && b6_35 && b7_7 && b8_40 && b9_34 && b10_28 && b11_33 && b12_47 && b13_4 && b14_21 && b15_18 && b16_40 && b17_4 && b18_9 && b19_41 && b20_10 && b21_14 && b22_22 && b23_35) {
matched = true;
pattern_id = 241;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_4 && b6_29 && b7_10 && b8_8 && b9_53 && b10_17 && b11_23 && b12_28 && b13_17 && b14_51 && b15_20 && b16_24 && b17_49 && b18_28 && b19_47 && b20_41 && b21_21 && b22_48 && b23_25 && b24_3 && b25_24 && b26_39 && b27_1 && b28_32 && b29_24 && b30_19 && b31_23 && b32_9 && b33_19 && b34_28 && b35_29 && b36_14) {
matched = true;
pattern_id = 242;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_5 && b6_36 && b7_14 && b8_40 && b9_5 && b10_22 && b11_47 && b12_36 && b13_27 && b14_49 && b15_40 && b16_30 && b17_38 && b18_4 && b19_39 && b20_2 && b21_24 && b22_35 && b23_19 && b24_32 && b25_33 && b26_44 && b27_3 && b28_31 && b29_24 && b30_19) {
matched = true;
pattern_id = 243;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_5 && b6_7 && b7_8 && b8_54 && b9_5 && b10_4 && b11_13 && b12_29 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_46 && b19_12 && b20_3 && b21_48 && b22_28 && b23_18 && b24_29 && b25_25 && b26_25 && b27_10 && b28_25 && b29_30 && b30_18 && b31_28 && b32_23 && b33_21 && b34_2 && b35_17) {
matched = true;
pattern_id = 244;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_5 && b6_7 && b7_8 && b8_54 && b9_5 && b10_4 && b11_13 && b12_47 && b13_32 && b14_52 && b15_15 && b16_24 && b17_36 && b18_37 && b19_22 && b20_41 && b21_38 && b22_4 && b23_38 && b24_4 && b25_33 && b26_40 && b27_3 && b28_31 && b29_29 && b30_19 && b31_26 && b32_28 && b33_22 && b34_17) {
matched = true;
pattern_id = 245;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_60 && b8_7 && b9_6 && b10_54 && b11_30 && b12_5 && b13_19 && b14_41 && b15_3 && b16_11 && b17_50 && b18_4 && b19_25 && b20_47 && b21_29 && b22_34 && b23_24 && b24_31 && b25_1 && b26_24 && b27_10 && b28_33 && b29_16 && b30_15 && b31_27 && b32_27 && b33_20 && b34_24 && b35_25 && b36_14 && b37_18 && b38_20 && b39_12 && b40_18 && b41_14 && b42_9 && b43_14 && b44_14 && b45_12 && b46_12 && b47_13 && b48_5) {
matched = true;
pattern_id = 246;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_60 && b8_7 && b9_6 && b10_54 && b11_30 && b12_5 && b13_19 && b14_41 && b15_3 && b16_11 && b17_50 && b18_4 && b19_25 && b20_47 && b21_29 && b22_34 && b23_24 && b24_31 && b25_1 && b26_24 && b27_10 && b28_33 && b29_16 && b30_15 && b31_27 && b32_27 && b33_20 && b34_24 && b35_25 && b36_15 && b37_19 && b38_21 && b39_13 && b40_19 && b41_15 && b42_11 && b43_15 && b44_15 && b45_13 && b46_13 && b47_14 && b48_6 && b49_2 && b50_5 && b51_5 && b52_6 && b53_6 && b54_4 && b55_1 && b56_4) {
matched = true;
pattern_id = 247;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_16 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49 && b15_43 && b16_22 && b17_27 && b18_40 && b19_32 && b20_2 && b21_20 && b22_41 && b23_18 && b24_23 && b25_37 && b26_25 && b27_23 && b28_13 && b29_30 && b30_18 && b31_28 && b32_29 && b33_16 && b34_17 && b35_17 && b36_16 && b37_20 && b38_22 && b39_14 && b40_20 && b41_17 && b42_1 && b43_14 && b44_16 && b45_14 && b46_14 && b47_15 && b48_7 && b49_6 && b50_7 && b51_6 && b52_7 && b53_7 && b54_1 && b55_8 && b56_5 && b57_5 && b58_6 && b59_5 && b60_6 && b61_6 && b62_5 && b63_4 && b64_5) {
matched = true;
pattern_id = 248;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_16 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49 && b15_43 && b16_22 && b17_27 && b18_40 && b19_32 && b20_2 && b21_20 && b22_41 && b23_18 && b24_23 && b25_38 && b26_41 && b27_4 && b28_4 && b29_18 && b30_25 && b31_29 && b32_25 && b33_9 && b34_8 && b35_27 && b36_17 && b37_21 && b38_23 && b39_1 && b40_21 && b41_18) {
matched = true;
pattern_id = 249;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_16 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49 && b15_43 && b16_22 && b17_27 && b18_40 && b19_32 && b20_2 && b21_20 && b22_41 && b23_18 && b24_23 && b25_32 && b26_25 && b27_22 && b28_34 && b29_26 && b30_26 && b31_9 && b32_30 && b33_16 && b34_24 && b35_19 && b36_18 && b37_16 && b38_24 && b39_12 && b40_22 && b41_19 && b42_12 && b43_16) {
matched = true;
pattern_id = 250;
}
if(b0_35 && b1_9 && b2_50 && b3_26 && b4_24 && b5_67 && b6_59 && b7_32 && b8_40 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 251;
}
if(b0_35 && b1_9 && b2_3 && b3_6 && b4_17 && b5_6 && b6_9 && b7_16 && b8_31 && b9_35 && b10_22 && b11_53 && b12_3 && b13_16 && b14_25 && b15_33 && b16_22 && b17_37 && b18_2 && b19_21 && b20_32 && b21_29 && b22_34 && b23_34 && b24_22 && b25_3 && b26_33 && b27_26) {
matched = true;
pattern_id = 252;
}
if(b0_35 && b1_9 && b2_3 && b3_20 && b4_12 && b5_11 && b6_18 && b7_11 && b8_7 && b9_12 && b10_51 && b11_40 && b12_17 && b13_38 && b14_24 && b15_32 && b16_44 && b17_44 && b18_31 && b19_41) {
matched = true;
pattern_id = 253;
}
if(b0_35 && b1_10 && b2_54 && b3_38 && b4_30 && b5_1 && b6_2 && b7_29 && b8_34 && b9_34) {
matched = true;
pattern_id = 254;
}
if(b0_35 && b1_10 && b2_25 && b3_24 && b4_12 && b5_10 && b6_46 && b7_9 && b8_11 && b9_62 && b10_16 && b11_67 && b12_28 && b13_17 && b14_51 && b15_20 && b16_24 && b17_49 && b18_10 && b19_41 && b20_28 && b21_5 && b22_31 && b23_28 && b24_4 && b25_36 && b26_32 && b27_10 && b28_11 && b29_29 && b30_29 && b31_16 && b32_27 && b33_20 && b34_23 && b35_18 && b36_49 && b37_27 && b38_1 && b39_15) {
matched = true;
pattern_id = 255;
}
if(b0_35 && b1_10 && b2_25 && b3_24 && b4_12 && b5_10 && b6_46 && b7_9 && b8_11 && b9_62 && b10_16 && b11_67 && b12_28 && b13_17 && b14_51 && b15_20 && b16_24 && b17_49 && b18_10 && b19_41 && b20_28 && b21_5 && b22_31 && b23_28 && b24_4 && b25_36 && b26_32 && b27_10 && b28_66 && b29_30 && b30_36 && b31_58 && b32_36 && b33_34 && b34_44 && b35_33 && b36_1 && b37_28 && b38_16 && b39_10) {
matched = true;
pattern_id = 256;
}
if(b0_35 && b1_10 && b2_25 && b3_24 && b4_12 && b5_10 && b6_46 && b7_9 && b8_11 && b9_62 && b10_16 && b11_67 && b12_28 && b13_17 && b14_51 && b15_20 && b16_24 && b17_49 && b18_10 && b19_41 && b20_28 && b21_5 && b22_31 && b23_28 && b24_4 && b25_36 && b26_32 && b27_10 && b28_62 && b29_35 && b30_19 && b31_23 && b32_9) {
matched = true;
pattern_id = 257;
}
if(b0_35 && b1_10 && b2_14 && b3_8 && b4_22 && b5_6 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 258;
}
if(b0_35 && b1_73 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_19 && b8_34 && b9_27 && b10_11 && b11_5 && b12_5 && b13_16 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 259;
}
if(b0_35 && b1_73 && b2_50 && b3_16 && b4_54 && b5_55 && b6_10 && b7_44) {
matched = true;
pattern_id = 260;
}
if(b0_35 && b1_73 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_16 && b8_41 && b9_14 && b10_26 && b11_35 && b12_4 && b13_14 && b14_30 && b15_36 && b16_5 && b17_36 && b18_19) {
matched = true;
pattern_id = 261;
}
if(b0_35 && b1_74 && b2_8 && b3_10 && b4_12 && b5_42 && b6_9 && b7_14 && b8_14 && b9_55 && b10_26 && b11_3 && b12_12 && b13_5 && b14_42 && b15_3) {
matched = true;
pattern_id = 262;
}
if(b0_35 && b1_41 && b2_9 && b3_47 && b4_46 && b5_49 && b6_47 && b7_20) {
matched = true;
pattern_id = 263;
}
if(b0_35 && b1_41 && b2_25 && b3_48 && b4_3 && b5_6 && b6_56 && b7_7 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 264;
}
if(b0_35 && b1_34 && b2_45 && b3_66 && b4_23 && b5_31 && b6_3 && b7_45 && b8_36 && b9_49 && b10_38 && b11_57 && b12_45 && b13_21 && b14_18) {
matched = true;
pattern_id = 265;
}
if(b0_35 && b1_60 && b2_43 && b3_47 && b4_13) {
matched = true;
pattern_id = 266;
}
if(b0_35 && b1_64 && b2_43 && b3_21 && b4_24 && b5_16 && b6_55 && b7_44) {
matched = true;
pattern_id = 267;
}
if(b0_35 && b1_64 && b2_6 && b3_26 && b4_27 && b5_20 && b6_36 && b7_55 && b8_58 && b9_14 && b10_17 && b11_40 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 268;
}
if(b0_35 && b1_64 && b2_6 && b3_11 && b4_24 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20) {
matched = true;
pattern_id = 269;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_25 && b11_6 && b12_20 && b13_21 && b14_48 && b15_31 && b16_29 && b17_36 && b18_23 && b19_32 && b20_28 && b21_10 && b22_37 && b23_3 && b24_32 && b25_35) {
matched = true;
pattern_id = 270;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_25 && b11_6 && b12_20 && b13_21 && b14_48 && b15_31 && b16_29 && b17_36 && b18_23 && b19_32 && b20_28 && b21_10 && b22_37 && b23_28 && b24_30 && b25_30) {
matched = true;
pattern_id = 271;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_6 && b11_23 && b12_39 && b13_5 && b14_35 && b15_32 && b16_32 && b17_21 && b18_9 && b19_25) {
matched = true;
pattern_id = 272;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_6 && b11_23 && b12_39 && b13_5 && b14_35 && b15_32 && b16_32 && b17_37 && b18_30 && b19_34) {
matched = true;
pattern_id = 273;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_4 && b11_3 && b12_36 && b13_27 && b14_5 && b15_25 && b16_29 && b17_18 && b18_18 && b19_38 && b20_28 && b21_19) {
matched = true;
pattern_id = 274;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_4 && b11_3 && b12_36 && b13_27 && b14_5 && b15_25 && b16_29 && b17_18 && b18_18 && b19_34 && b20_43 && b21_36) {
matched = true;
pattern_id = 275;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_4 && b11_3 && b12_36 && b13_27 && b14_5 && b15_25 && b16_3 && b17_10 && b18_9 && b19_22 && b20_3 && b21_2 && b22_22 && b23_34 && b24_31 && b25_30 && b26_33) {
matched = true;
pattern_id = 276;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_4 && b11_3 && b12_36 && b13_27 && b14_5 && b15_25 && b16_3 && b17_10 && b18_9 && b19_22 && b20_3 && b21_2 && b22_22 && b23_34 && b24_32 && b25_29 && b26_19) {
matched = true;
pattern_id = 277;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20) {
matched = true;
pattern_id = 278;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20 && b10_46 && b11_55 && b12_4 && b13_27 && b14_48 && b15_33 && b16_40 && b17_37 && b18_28 && b19_35 && b20_35 && b21_36 && b22_11 && b23_31 && b24_1 && b25_31 && b26_25 && b27_26 && b28_21) {
matched = true;
pattern_id = 279;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20 && b10_11 && b11_54 && b12_4 && b13_21 && b14_18 && b15_36 && b16_23 && b17_26 && b18_36) {
matched = true;
pattern_id = 280;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20 && b10_11 && b11_54 && b12_4 && b13_21 && b14_18 && b15_36 && b16_29 && b17_40 && b18_4) {
matched = true;
pattern_id = 281;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_35 && b7_45 && b8_36 && b9_42 && b10_50 && b11_40 && b12_7 && b13_41) {
matched = true;
pattern_id = 282;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_28 && b11_47 && b12_18 && b13_5 && b14_5 && b15_32 && b16_32 && b17_4 && b18_11 && b19_4) {
matched = true;
pattern_id = 283;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_24 && b15_22 && b16_29 && b17_38 && b18_31 && b19_12 && b20_44) {
matched = true;
pattern_id = 284;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_24 && b15_22 && b16_29 && b17_38 && b18_29 && b19_34 && b20_34) {
matched = true;
pattern_id = 285;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_24 && b15_22 && b16_29 && b17_36 && b18_18 && b19_40 && b20_41 && b21_34) {
matched = true;
pattern_id = 286;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_11 && b11_55 && b12_18 && b13_43 && b14_38 && b15_15 && b16_32 && b17_4 && b18_11 && b19_4) {
matched = true;
pattern_id = 287;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_54 && b11_23 && b12_38 && b13_38 && b14_17 && b15_25 && b16_30 && b17_38 && b18_31 && b19_12 && b20_44) {
matched = true;
pattern_id = 288;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_10 && b7_47 && b8_41) {
matched = true;
pattern_id = 289;
}
if(b0_35 && b1_2 && b2_27 && b3_21 && b4_27 && b5_26 && b6_46 && b7_6 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 290;
}
if(b0_35 && b1_2 && b2_27 && b3_21 && b4_27 && b5_26 && b6_46 && b7_6 && b8_48 && b9_17 && b10_38 && b11_37 && b12_22) {
matched = true;
pattern_id = 291;
}
if(b0_35 && b1_2 && b2_27 && b3_18 && b4_6 && b5_11 && b6_11 && b7_7 && b8_15) {
matched = true;
pattern_id = 292;
}
if(b0_35 && b1_2 && b2_43 && b3_21 && b4_16 && b5_37 && b6_10 && b7_9 && b8_5 && b9_28 && b10_5 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54 && b16_22 && b17_55) {
matched = true;
pattern_id = 293;
}
if(b0_35 && b1_2 && b2_42 && b3_53 && b4_35) {
matched = true;
pattern_id = 294;
}
if(b0_35 && b1_2 && b2_16 && b3_8 && b4_27 && b5_55 && b6_7 && b7_15 && b8_34 && b9_6 && b10_38) {
matched = true;
pattern_id = 295;
}
if(b0_35 && b1_2 && b2_16 && b3_7 && b4_3 && b5_6 && b6_11 && b7_11 && b8_55 && b9_44 && b10_54 && b11_55 && b12_16 && b13_55 && b14_25 && b15_3 && b16_2 && b17_37 && b18_55 && b19_4 && b20_3 && b21_5 && b22_52 && b23_24 && b24_17 && b25_35 && b26_25 && b27_48 && b28_18 && b29_16 && b30_19 && b31_36 && b32_27 && b33_22 && b34_31 && b35_33 && b36_1 && b37_30 && b38_42 && b39_23 && b40_20 && b41_20 && b42_1) {
matched = true;
pattern_id = 296;
}
if(b0_35 && b1_2 && b2_41 && b3_29 && b4_14 && b5_47 && b6_35) {
matched = true;
pattern_id = 297;
}
if(b0_35 && b1_2 && b2_41 && b3_35 && b4_24 && b5_6 && b6_18 && b7_35 && b8_5 && b9_14 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 298;
}
if(b0_35 && b1_2 && b2_41 && b3_40 && b4_62 && b5_51 && b6_20 && b7_10) {
matched = true;
pattern_id = 299;
}
if(b0_35 && b1_2 && b2_41 && b3_21 && b4_26 && b5_52 && b6_19 && b7_47) {
matched = true;
pattern_id = 300;
}
if(b0_35 && b1_2 && b2_41 && b3_21 && b4_59 && b5_29 && b6_24 && b7_10 && b8_8 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_28 && b15_33 && b16_39 && b17_29 && b18_60) {
matched = true;
pattern_id = 301;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_14 && b5_47 && b6_35 && b7_44 && b8_41 && b9_6 && b10_12 && b11_40 && b12_5 && b13_22 && b14_25 && b15_32 && b16_32 && b17_21 && b18_9 && b19_25) {
matched = true;
pattern_id = 302;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_12 && b5_20 && b6_11 && b7_14 && b8_8 && b9_20 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_38 && b16_5 && b17_47 && b18_33 && b19_22 && b20_41 && b21_18 && b22_31 && b23_24 && b24_27) {
matched = true;
pattern_id = 303;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_37 && b7_7 && b8_5 && b9_14 && b10_56 && b11_13 && b12_18 && b13_36 && b14_28 && b15_16 && b16_24 && b17_33 && b18_28 && b19_35 && b20_32 && b21_19 && b22_40 && b23_36) {
matched = true;
pattern_id = 304;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 305;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_2 && b7_47 && b8_6 && b9_43 && b10_41) {
matched = true;
pattern_id = 306;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64 && b11_59 && b12_19) {
matched = true;
pattern_id = 307;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 308;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_23 && b7_9 && b8_5 && b9_28 && b10_5 && b11_30 && b12_17 && b13_38 && b14_17 && b15_32 && b16_11 && b17_21 && b18_4 && b19_35 && b20_32 && b21_29 && b22_34 && b23_34 && b24_27 && b25_28 && b26_24) {
matched = true;
pattern_id = 309;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_44) {
matched = true;
pattern_id = 310;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_32 && b8_14 && b9_28 && b10_35 && b11_3 && b12_3 && b13_38 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 311;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_10 && b8_47 && b9_49 && b10_13 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 312;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_10 && b8_16 && b9_50 && b10_17 && b11_34 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 313;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_55 && b8_11 && b9_34 && b10_17 && b11_5) {
matched = true;
pattern_id = 314;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_2 && b8_5 && b9_34 && b10_5 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 315;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_54 && b8_11 && b9_17 && b10_17 && b11_27 && b12_16 && b13_5 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 316;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_54 && b8_14 && b9_12 && b10_6 && b11_4 && b12_4 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 317;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_47 && b8_42 && b9_9 && b10_11 && b11_61 && b12_26 && b13_4 && b14_51 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 318;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_47 && b8_8 && b9_5 && b10_56 && b11_37 && b12_5 && b13_60 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 319;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_7 && b8_5 && b9_10 && b10_13 && b11_37 && b12_3 && b13_53 && b14_5 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 320;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_7 && b8_35 && b9_27 && b10_13 && b11_5 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 321;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_9 && b8_5 && b9_28 && b10_5 && b11_30 && b12_17 && b13_38 && b14_17 && b15_32 && b16_32 && b17_34 && b18_37 && b19_2) {
matched = true;
pattern_id = 322;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_9 && b8_5 && b9_28 && b10_5 && b11_30 && b12_17 && b13_38 && b14_17 && b15_32 && b16_37 && b17_25 && b18_10 && b19_41 && b20_25 && b21_18 && b22_40 && b23_3 && b24_27) {
matched = true;
pattern_id = 323;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_9 && b8_40 && b9_34 && b10_46 && b11_26 && b12_38 && b13_16 && b14_38 && b15_48 && b16_22 && b17_29 && b18_40 && b19_44 && b20_34 && b21_7 && b22_40) {
matched = true;
pattern_id = 324;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_9 && b8_40 && b9_34 && b10_46 && b11_27 && b12_5 && b13_60 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 325;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_35 && b7_7 && b8_35 && b9_14 && b10_28 && b11_40 && b12_26 && b13_4 && b14_5 && b15_36 && b16_16 && b17_46 && b18_20) {
matched = true;
pattern_id = 326;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_20 && b7_14 && b8_58 && b9_49 && b10_12) {
matched = true;
pattern_id = 327;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_26 && b6_8 && b7_47 && b8_11 && b9_20 && b10_25 && b11_35 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_38 && b18_37 && b19_34 && b20_33) {
matched = true;
pattern_id = 328;
}
if(b0_35 && b1_2 && b2_41 && b3_18 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 329;
}
if(b0_35 && b1_2 && b2_41 && b3_18 && b4_18 && b5_27 && b6_46 && b7_54 && b8_5 && b9_9 && b10_22 && b11_47 && b12_26 && b13_22 && b14_47 && b15_35 && b16_18 && b17_28 && b18_29 && b19_22 && b20_28 && b21_29 && b22_37 && b23_27 && b24_24 && b25_19) {
matched = true;
pattern_id = 330;
}
if(b0_35 && b1_2 && b2_41 && b3_27 && b4_31 && b5_10 && b6_10 && b7_30 && b8_2 && b9_20 && b10_17 && b11_56 && b12_37 && b13_27 && b14_36 && b15_20 && b16_29 && b17_49 && b18_9 && b19_43 && b20_25 && b21_14 && b22_3 && b23_32 && b24_8 && b25_36 && b26_39 && b27_27 && b28_30 && b29_28 && b30_24 && b31_14 && b32_22 && b33_17 && b34_23 && b35_23) {
matched = true;
pattern_id = 331;
}
if(b0_35 && b1_2 && b2_49 && b3_29 && b4_14 && b5_47 && b6_35) {
matched = true;
pattern_id = 332;
}
if(b0_35 && b1_2 && b2_49 && b3_20 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_68 && b10_6 && b11_27 && b12_5 && b13_27 && b14_51 && b15_17) {
matched = true;
pattern_id = 333;
}
if(b0_35 && b1_2 && b2_12 && b3_56 && b4_7 && b5_25 && b6_39 && b7_46 && b8_11 && b9_11 && b10_48 && b11_47 && b12_20 && b13_50) {
matched = true;
pattern_id = 334;
}
if(b0_35 && b1_2 && b2_12 && b3_11 && b4_3 && b5_42 && b6_10 && b7_21 && b8_7 && b9_11 && b10_17 && b11_23 && b12_12 && b13_22 && b14_5 && b15_16) {
matched = true;
pattern_id = 335;
}
if(b0_35 && b1_2 && b2_12 && b3_24 && b4_27 && b5_27 && b6_46 && b7_7 && b8_5) {
matched = true;
pattern_id = 336;
}
if(b0_35 && b1_2 && b2_24 && b3_48 && b4_50 && b5_27 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 337;
}
if(b0_35 && b1_2 && b2_24 && b3_11 && b4_17 && b5_42 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 338;
}
if(b0_35 && b1_2 && b2_24 && b3_15 && b4_51 && b5_11 && b6_21 && b7_31 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 339;
}
if(b0_35 && b1_2 && b2_24 && b3_15 && b4_51 && b5_11 && b6_21 && b7_31 && b8_48 && b9_43 && b10_49 && b11_20 && b12_54 && b13_15 && b14_2) {
matched = true;
pattern_id = 340;
}
if(b0_35 && b1_2 && b2_24 && b3_15 && b4_12 && b5_20 && b6_48 && b7_14 && b8_8 && b9_28 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 341;
}
if(b0_35 && b1_2 && b2_24 && b3_45 && b4_18 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 342;
}
if(b0_35 && b1_2 && b2_21 && b3_21 && b4_17 && b5_10 && b6_35 && b7_29 && b8_15 && b9_9 && b10_35 && b11_5 && b12_28 && b13_27 && b14_28 && b15_18 && b16_29 && b17_40 && b18_18 && b19_2 && b20_48 && b21_42) {
matched = true;
pattern_id = 343;
}
if(b0_35 && b1_2 && b2_21 && b3_21 && b4_17 && b5_10 && b6_35 && b7_29 && b8_15 && b9_9 && b10_35 && b11_5 && b12_28 && b13_16 && b14_57 && b15_41 && b16_25 && b17_38 && b18_19 && b19_38 && b20_34) {
matched = true;
pattern_id = 344;
}
if(b0_35 && b1_2 && b2_21 && b3_43 && b4_44 && b5_29 && b6_55 && b7_32 && b8_5) {
matched = true;
pattern_id = 345;
}
if(b0_35 && b1_2 && b2_21 && b3_6 && b4_3 && b5_17 && b6_23) {
matched = true;
pattern_id = 346;
}
if(b0_35 && b1_2 && b2_21 && b3_18 && b4_26 && b5_52 && b6_20) {
matched = true;
pattern_id = 347;
}
if(b0_35 && b1_2 && b2_21 && b3_18 && b4_26 && b5_52 && b6_20 && b7_62) {
matched = true;
pattern_id = 348;
}
if(b0_35 && b1_2 && b2_50 && b3_11 && b4_53 && b5_6 && b6_36 && b7_15 && b8_40 && b9_34) {
matched = true;
pattern_id = 349;
}
if(b0_35 && b1_2 && b2_50 && b3_15 && b4_26 && b5_52 && b6_19 && b7_47) {
matched = true;
pattern_id = 350;
}
if(b0_35 && b1_2 && b2_50 && b3_15 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_40 && b10_29) {
matched = true;
pattern_id = 351;
}
if(b0_35 && b1_2 && b2_50 && b3_15 && b4_35) {
matched = true;
pattern_id = 352;
}
if(b0_35 && b1_2 && b2_50 && b3_15 && b4_35 && b5_26 && b6_11 && b7_31 && b8_35 && b9_19 && b10_11) {
matched = true;
pattern_id = 353;
}
if(b0_35 && b1_2 && b2_50 && b3_50 && b4_35 && b5_47 && b6_7 && b7_14 && b8_11 && b9_43 && b10_48 && b11_64 && b12_16) {
matched = true;
pattern_id = 354;
}
if(b0_35 && b1_2 && b2_50 && b3_50 && b4_59 && b5_26 && b6_11 && b7_31 && b8_48 && b9_9 && b10_13 && b11_26) {
matched = true;
pattern_id = 355;
}
if(b0_35 && b1_2 && b2_50 && b3_50 && b4_22 && b5_16 && b6_36 && b7_31 && b8_35 && b9_49 && b10_6 && b11_27 && b12_12 && b13_30 && b14_47 && b15_20) {
matched = true;
pattern_id = 356;
}
if(b0_35 && b1_2 && b2_23 && b3_40 && b4_15 && b5_16 && b6_7) {
matched = true;
pattern_id = 357;
}
if(b0_35 && b1_2 && b2_23 && b3_16 && b4_2 && b5_40 && b6_21 && b7_31 && b8_35) {
matched = true;
pattern_id = 358;
}
if(b0_35 && b1_2 && b2_23 && b3_16 && b4_2 && b5_40 && b6_36 && b7_39 && b8_47) {
matched = true;
pattern_id = 359;
}
if(b0_35 && b1_2 && b2_23 && b3_62 && b4_50 && b5_16 && b6_22 && b7_14 && b8_15 && b9_17 && b10_6 && b11_6 && b12_24 && b13_27 && b14_17 && b15_36 && b16_44 && b17_40 && b18_9) {
matched = true;
pattern_id = 360;
}
if(b0_35 && b1_2 && b2_23 && b3_62 && b4_50 && b5_16 && b6_22 && b7_14 && b8_15 && b9_53 && b10_4 && b11_5 && b12_12 && b13_38 && b14_42 && b15_25) {
matched = true;
pattern_id = 361;
}
if(b0_35 && b1_2 && b2_8 && b3_35 && b4_31 && b5_6 && b6_21 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 362;
}
if(b0_35 && b1_2 && b2_8 && b3_35 && b4_31 && b5_6 && b6_21 && b7_26 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 363;
}
if(b0_35 && b1_2 && b2_8 && b3_50 && b4_3 && b5_6 && b6_11 && b7_56 && b8_41 && b9_34 && b10_26 && b11_3 && b12_3 && b13_38 && b14_49 && b15_32 && b16_55 && b17_36 && b18_9 && b19_9 && b20_33 && b21_31 && b22_48 && b23_18 && b24_33 && b25_20 && b26_16 && b27_27 && b28_2 && b29_43 && b30_10 && b31_11 && b32_12 && b33_53 && b34_7 && b35_17 && b36_28 && b37_23 && b38_24 && b39_1 && b40_16 && b41_25 && b42_34) {
matched = true;
pattern_id = 364;
}
if(b0_35 && b1_2 && b2_3 && b3_69 && b4_2 && b5_30 && b6_22) {
matched = true;
pattern_id = 365;
}
if(b0_35 && b1_2 && b2_3 && b3_6 && b4_24 && b5_16 && b6_36 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 366;
}
if(b0_35 && b1_2 && b2_62 && b3_19 && b4_6 && b5_16 && b6_3 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 367;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_15 && b5_37 && b6_34 && b7_31 && b8_35 && b9_27 && b10_22 && b11_46 && b12_37 && b13_38 && b14_37 && b15_48 && b16_40 && b17_36 && b18_4 && b19_21 && b20_52 && b21_34 && b22_27 && b23_25 && b24_3 && b25_31 && b26_19 && b27_26 && b28_30) {
matched = true;
pattern_id = 368;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_15 && b5_6 && b6_55 && b7_9 && b8_11 && b9_17 && b10_28 && b11_40 && b12_5 && b13_40 && b14_38 && b15_40 && b16_24 && b17_52 && b18_43 && b19_13 && b20_38 && b21_40 && b22_16 && b23_41 && b24_36 && b25_39) {
matched = true;
pattern_id = 369;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_15 && b5_6 && b6_55 && b7_9 && b8_11 && b9_17 && b10_28 && b11_40 && b12_38 && b13_36 && b14_28 && b15_48 && b16_24 && b17_49 && b18_20 && b19_9 && b20_43 && b21_18 && b22_40 && b23_3 && b24_27) {
matched = true;
pattern_id = 370;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_15 && b5_10 && b6_10 && b7_7 && b8_48 && b9_43 && b10_54 && b11_34) {
matched = true;
pattern_id = 371;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_44 && b5_7 && b6_11 && b7_39 && b8_34 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 372;
}
if(b0_35 && b1_2 && b2_52 && b3_40 && b4_15 && b5_6 && b6_36 && b7_30 && b8_48 && b9_5 && b10_47 && b11_3 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_3 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 373;
}
if(b0_35 && b1_2 && b2_52 && b3_15 && b4_18 && b5_42 && b6_35 && b7_32 && b8_15 && b9_9 && b10_34 && b11_5 && b12_4 && b13_5 && b14_12 && b15_33 && b16_32 && b17_29 && b18_30 && b19_9) {
matched = true;
pattern_id = 374;
}
if(b0_35 && b1_2 && b2_17 && b3_18 && b4_6 && b5_11 && b6_11 && b7_7 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 375;
}
if(b0_35 && b1_2 && b2_17 && b3_18 && b4_6 && b5_11 && b6_11 && b7_7 && b8_48 && b9_43 && b10_49 && b11_14) {
matched = true;
pattern_id = 376;
}
if(b0_35 && b1_2 && b2_19 && b3_51 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 377;
}
if(b0_35 && b1_2 && b2_19 && b3_18 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 378;
}
if(b0_35 && b1_47 && b2_29 && b3_15 && b4_3 && b5_12 && b6_7 && b7_51 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22 && b13_27 && b14_51 && b15_17) {
matched = true;
pattern_id = 379;
}
if(b0_35 && b1_47 && b2_29 && b3_43 && b4_35 && b5_21 && b6_35 && b7_45 && b8_8 && b9_27 && b10_4 && b11_13 && b12_4 && b13_32 && b14_51 && b15_30 && b16_32 && b17_18 && b18_32 && b19_21) {
matched = true;
pattern_id = 380;
}
if(b0_35 && b1_47 && b2_29 && b3_50 && b4_60 && b5_47 && b6_23 && b7_5 && b8_27 && b9_1 && b10_3) {
matched = true;
pattern_id = 381;
}
if(b0_35 && b1_47 && b2_29 && b3_18 && b4_15 && b5_10 && b6_7 && b7_44) {
matched = true;
pattern_id = 382;
}
if(b0_35 && b1_47 && b2_46 && b3_56 && b4_51 && b5_44 && b6_37 && b7_11 && b8_7 && b9_17 && b10_49 && b11_4 && b12_39 && b13_5 && b14_49) {
matched = true;
pattern_id = 383;
}
if(b0_35 && b1_47 && b2_43 && b3_40 && b4_60 && b5_29 && b6_46) {
matched = true;
pattern_id = 384;
}
if(b0_35 && b1_47 && b2_43 && b3_18 && b4_15) {
matched = true;
pattern_id = 385;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_16 && b6_24 && b7_9 && b8_48 && b9_9 && b10_50) {
matched = true;
pattern_id = 386;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_16 && b6_24 && b7_9 && b8_48 && b9_9 && b10_50 && b11_14) {
matched = true;
pattern_id = 387;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_16 && b6_24 && b7_9 && b8_34 && b9_6 && b10_38 && b11_57 && b12_16 && b13_3) {
matched = true;
pattern_id = 388;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_16 && b6_24 && b7_9 && b8_2 && b9_53 && b10_43 && b11_57 && b12_16 && b13_3) {
matched = true;
pattern_id = 389;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_10 && b6_24 && b7_9 && b8_2 && b9_53 && b10_43 && b11_57 && b12_16 && b13_3) {
matched = true;
pattern_id = 390;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_10 && b6_24 && b7_9 && b8_2 && b9_53 && b10_43 && b11_57 && b12_16 && b13_3 && b14_40) {
matched = true;
pattern_id = 391;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_17 && b5_6 && b6_46 && b7_15 && b8_2 && b9_25) {
matched = true;
pattern_id = 392;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_17 && b5_6 && b6_46 && b7_54 && b8_14 && b9_12 && b10_48 && b11_5 && b12_50) {
matched = true;
pattern_id = 393;
}
if(b0_35 && b1_47 && b2_42 && b3_56 && b4_27 && b5_20 && b6_34 && b7_10 && b8_55 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 394;
}
if(b0_35 && b1_47 && b2_42 && b3_35 && b4_2 && b5_27 && b6_35 && b7_54 && b8_11 && b9_5 && b10_11 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 395;
}
if(b0_35 && b1_47 && b2_42 && b3_18 && b4_35 && b5_26 && b6_7 && b7_31 && b8_8 && b9_17 && b10_50 && b11_57 && b12_17 && b13_16 && b14_36) {
matched = true;
pattern_id = 396;
}
if(b0_35 && b1_47 && b2_42 && b3_18 && b4_59 && b5_3 && b6_3 && b7_8 && b8_12 && b9_28 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 397;
}
if(b0_35 && b1_47 && b2_41 && b3_15 && b4_17 && b5_40 && b6_19 && b7_9 && b8_8) {
matched = true;
pattern_id = 398;
}
if(b0_35 && b1_47 && b2_25 && b3_8 && b4_18 && b5_30 && b6_3 && b7_8 && b8_47 && b9_5 && b10_4 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 399;
}
if(b0_35 && b1_47 && b2_14 && b3_16 && b4_14 && b5_10 && b6_55 && b7_55 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 400;
}
if(b0_35 && b1_47 && b2_14 && b3_43 && b4_35 && b5_54 && b6_39 && b7_7 && b8_46 && b9_50 && b10_6 && b11_48 && b12_10 && b13_11 && b14_7 && b15_7 && b16_29 && b17_4 && b18_37 && b19_31 && b20_8 && b21_55 && b22_19 && b23_8 && b24_9 && b25_8 && b26_55 && b27_2 && b28_51 && b29_6 && b30_2 && b31_3 && b32_18 && b33_51 && b34_3 && b35_3 && b36_18 && b37_10 && b38_44 && b39_8 && b40_6 && b41_13 && b42_32 && b43_3 && b44_5 && b45_37 && b46_37 && b47_33 && b48_3 && b49_16 && b50_19 && b51_3 && b52_27 && b53_33 && b54_29 && b55_17 && b56_29 && b57_5 && b58_9 && b59_28 && b60_25 && b61_28 && b62_3 && b63_25 && b64_22 && b65_5 && b66_22 && b67_22 && b68_24 && b69_3 && b70_13 && b71_21 && b72_5 && b73_4 && b74_23 && b75_5 && b76_3 && b77_17 && b78_9) {
matched = true;
pattern_id = 401;
}
if(b0_35 && b1_47 && b2_14 && b3_43 && b4_35 && b5_8 && b6_7 && b7_31 && b8_47 && b9_56 && b10_26 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54) {
matched = true;
pattern_id = 402;
}
if(b0_35 && b1_47 && b2_14 && b3_43 && b4_35 && b5_26 && b6_19) {
matched = true;
pattern_id = 403;
}
if(b0_35 && b1_47 && b2_14 && b3_59 && b4_16 && b5_54 && b6_26 && b7_63 && b8_2 && b9_5 && b10_28 && b11_23 && b12_18 && b13_3 && b14_34 && b15_22 && b16_18 && b17_44) {
matched = true;
pattern_id = 404;
}
if(b0_35 && b1_47 && b2_14 && b3_59 && b4_6 && b5_11 && b6_20 && b7_30 && b8_6 && b9_10 && b10_13 && b11_35 && b12_20 && b13_5 && b14_38 && b15_3 && b16_24 && b17_54 && b18_4 && b19_44 && b20_32 && b21_15 && b22_28) {
matched = true;
pattern_id = 405;
}
if(b0_35 && b1_47 && b2_24 && b3_6 && b4_19 && b5_43 && b6_11 && b7_8 && b8_42 && b9_50 && b10_28 && b11_64 && b12_26 && b13_16 && b14_49 && b15_41 && b16_51 && b17_19 && b18_20 && b19_19 && b20_5 && b21_61 && b22_27 && b23_12 && b24_10 && b25_15 && b26_21) {
matched = true;
pattern_id = 406;
}
if(b0_35 && b1_47 && b2_21 && b3_48 && b4_21 && b5_10 && b6_10 && b7_39 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 407;
}
if(b0_35 && b1_47 && b2_20 && b3_6 && b4_60 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 408;
}
if(b0_35 && b1_47 && b2_20 && b3_6 && b4_60 && b5_27 && b6_8 && b7_8 && b8_9 && b9_42 && b10_12 && b11_5 && b12_52) {
matched = true;
pattern_id = 409;
}
if(b0_35 && b1_47 && b2_20 && b3_6 && b4_6 && b5_7 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 410;
}
if(b0_35 && b1_47 && b2_20 && b3_45 && b4_16 && b5_20 && b6_23 && b7_35 && b8_14 && b9_41 && b10_17 && b11_57 && b12_50 && b13_38 && b14_12 && b15_15) {
matched = true;
pattern_id = 411;
}
if(b0_35 && b1_47 && b2_8 && b3_16 && b4_50 && b5_6 && b6_24 && b7_9 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 412;
}
if(b0_35 && b1_47 && b2_8 && b3_24 && b4_27 && b5_26 && b6_11 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 413;
}
if(b0_35 && b1_47 && b2_8 && b3_34 && b4_22 && b5_40 && b6_46 && b7_54) {
matched = true;
pattern_id = 414;
}
if(b0_35 && b1_47 && b2_62 && b3_45 && b4_46 && b5_26 && b6_7 && b7_54 && b8_34 && b9_20 && b10_11 && b11_3 && b12_17 && b13_4 && b14_38 && b15_44 && b16_32 && b17_10 && b18_29 && b19_2 && b20_60 && b21_2 && b22_19 && b23_36 && b24_24 && b25_1 && b26_36 && b27_46) {
matched = true;
pattern_id = 415;
}
if(b0_35 && b1_11 && b2_10 && b3_53 && b4_31 && b5_6 && b6_21 && b7_15 && b8_5 && b9_45 && b10_17 && b11_13 && b12_51 && b13_3 && b14_20 && b15_41 && b16_18 && b17_29 && b18_35 && b19_42 && b20_33 && b21_27 && b22_20 && b23_42 && b24_22 && b25_3 && b26_27 && b27_30 && b28_31 && b29_19 && b30_29) {
matched = true;
pattern_id = 416;
}
if(b0_35 && b1_11 && b2_43 && b3_40 && b4_15 && b5_6 && b6_23 && b7_47 && b8_47 && b9_48 && b10_46 && b11_3 && b12_52 && b13_43 && b14_42 && b15_48) {
matched = true;
pattern_id = 417;
}
if(b0_35 && b1_11 && b2_43 && b3_40 && b4_15 && b5_6 && b6_34 && b7_56 && b8_36 && b9_5 && b10_17 && b11_34 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 418;
}
if(b0_35 && b1_11 && b2_43 && b3_40 && b4_15 && b5_6 && b6_18 && b7_46 && b8_8 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 419;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_59 && b5_27 && b6_8 && b7_30 && b8_5 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 420;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8) {
matched = true;
pattern_id = 421;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8 && b9_44 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_16 && b17_26) {
matched = true;
pattern_id = 422;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 423;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8 && b9_56 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_16 && b17_26) {
matched = true;
pattern_id = 424;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8 && b9_56 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_16 && b17_26 && b18_48) {
matched = true;
pattern_id = 425;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_10 && b8_8 && b9_56 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_16 && b17_26) {
matched = true;
pattern_id = 426;
}
if(b0_35 && b1_11 && b2_43 && b3_34 && b4_7 && b5_11 && b6_24) {
matched = true;
pattern_id = 427;
}
if(b0_35 && b1_11 && b2_43 && b3_34 && b4_7 && b5_11 && b6_24 && b7_62 && b8_10 && b9_1 && b10_33 && b11_20) {
matched = true;
pattern_id = 428;
}
if(b0_35 && b1_11 && b2_43 && b3_20 && b4_51 && b5_10 && b6_2 && b7_29 && b8_34 && b9_34) {
matched = true;
pattern_id = 429;
}
if(b0_35 && b1_11 && b2_43 && b3_20 && b4_6 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 430;
}
if(b0_35 && b1_11 && b2_43 && b3_20 && b4_6 && b5_38 && b6_32 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 431;
}
if(b0_35 && b1_11 && b2_43 && b3_8 && b4_18 && b5_25 && b6_3 && b7_46 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 432;
}
if(b0_35 && b1_11 && b2_43 && b3_8 && b4_19 && b5_17 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 433;
}
if(b0_35 && b1_11 && b2_43 && b3_8 && b4_27 && b5_20 && b6_48 && b7_14) {
matched = true;
pattern_id = 434;
}
if(b0_35 && b1_11 && b2_42 && b3_20 && b4_17 && b5_17 && b6_23 && b7_32 && b8_61 && b9_14 && b10_17 && b11_57 && b12_50 && b13_38 && b14_12 && b15_15) {
matched = true;
pattern_id = 435;
}
if(b0_35 && b1_11 && b2_16 && b3_48 && b4_27 && b5_25 && b6_20 && b7_44 && b8_16 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_24 && b15_18 && b16_52) {
matched = true;
pattern_id = 436;
}
if(b0_35 && b1_11 && b2_41 && b3_56 && b4_26 && b5_40 && b6_23 && b7_32 && b8_14 && b9_11 && b10_25 && b11_37 && b12_36 && b13_52 && b14_37 && b15_25 && b16_39 && b17_26 && b18_28 && b19_40 && b20_41 && b21_34 && b22_43 && b23_44 && b24_4 && b25_31 && b26_37 && b27_19 && b28_29) {
matched = true;
pattern_id = 437;
}
if(b0_35 && b1_11 && b2_25 && b3_20 && b4_2 && b5_55 && b6_10 && b7_15 && b8_7 && b9_9 && b10_25) {
matched = true;
pattern_id = 438;
}
if(b0_35 && b1_11 && b2_49 && b3_26 && b4_7 && b5_52 && b6_18 && b7_31 && b8_7 && b9_20 && b10_26 && b11_27 && b12_39 && b13_5 && b14_42 && b15_36 && b16_25 && b17_39 && b18_33) {
matched = true;
pattern_id = 439;
}
if(b0_35 && b1_11 && b2_49 && b3_40 && b4_18 && b5_51 && b6_19 && b7_10 && b8_48 && b9_28 && b10_28 && b11_35) {
matched = true;
pattern_id = 440;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_41 && b9_48 && b10_35 && b11_30 && b12_16 && b13_47 && b14_28 && b15_25 && b16_5 && b17_40 && b18_31 && b19_38 && b20_2 && b21_35 && b22_36 && b23_34 && b24_20 && b25_34 && b26_33) {
matched = true;
pattern_id = 441;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28) {
matched = true;
pattern_id = 442;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28 && b19_9 && b20_33 && b21_14 && b22_27 && b23_25 && b24_23 && b25_22 && b26_24 && b27_21 && b28_26 && b29_3 && b30_12 && b31_2 && b32_20 && b33_16 && b34_16 && b35_22 && b36_8 && b37_15 && b38_17 && b39_9) {
matched = true;
pattern_id = 443;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28 && b19_9 && b20_33 && b21_14 && b22_27 && b23_25 && b24_23 && b25_25 && b26_25 && b27_19 && b28_27 && b29_3 && b30_16 && b31_14 && b32_22 && b33_18 && b34_18 && b35_24) {
matched = true;
pattern_id = 444;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28 && b19_2 && b20_35 && b21_26 && b22_28 && b23_19 && b24_24 && b25_28 && b26_4 && b27_22 && b28_19 && b29_21 && b30_13 && b31_21 && b32_21 && b33_17 && b34_19 && b35_25 && b36_10 && b37_16 && b38_16 && b39_10 && b40_15 && b41_16 && b42_10 && b43_13 && b44_13 && b45_10 && b46_11) {
matched = true;
pattern_id = 445;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28 && b19_2 && b20_35 && b21_26 && b22_28 && b23_19 && b24_24 && b25_28 && b26_4 && b27_22 && b28_19 && b29_21 && b30_13 && b31_21 && b32_21 && b33_17 && b34_17 && b35_23 && b36_9 && b37_14 && b38_18 && b39_1 && b40_16 && b41_15 && b42_9 && b43_12 && b44_12 && b45_11 && b46_10 && b47_12) {
matched = true;
pattern_id = 446;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_4 && b18_34 && b19_23 && b20_2 && b21_14 && b22_20 && b23_24 && b24_23 && b25_21 && b26_25 && b27_22 && b28_23 && b29_3 && b30_3 && b31_8 && b32_24 && b33_12 && b34_20 && b35_26 && b36_11) {
matched = true;
pattern_id = 447;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_25 && b18_32 && b19_22 && b20_41 && b21_34 && b22_34 && b23_32 && b24_28 && b25_33 && b26_27 && b27_1 && b28_30 && b29_23 && b30_12 && b31_8 && b32_23) {
matched = true;
pattern_id = 448;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_34 && b18_32 && b19_21 && b20_20 && b21_10 && b22_4 && b23_26 && b24_3 && b25_30 && b26_29 && b27_18 && b28_26 && b29_23 && b30_12 && b31_8 && b32_23) {
matched = true;
pattern_id = 449;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_5 && b11_3 && b12_41 && b13_43 && b14_18 && b15_38) {
matched = true;
pattern_id = 450;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_5 && b11_3 && b12_41 && b13_43 && b14_18 && b15_38 && b16_23 && b17_44 && b18_29 && b19_2 && b20_37 && b21_14 && b22_33 && b23_31 && b24_27 && b25_33 && b26_32 && b27_1 && b28_19 && b29_22 && b30_13 && b31_22 && b32_25 && b33_12 && b34_20 && b35_26 && b36_11) {
matched = true;
pattern_id = 451;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_5 && b11_3 && b12_41 && b13_43 && b14_18 && b15_38 && b16_29 && b17_40 && b18_19 && b19_21 && b20_25 && b21_14 && b22_28 && b23_27 && b24_25 && b25_19 && b26_28 && b27_23) {
matched = true;
pattern_id = 452;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_2 && b9_11 && b10_26 && b11_35 && b12_32 && b13_5 && b14_25 && b15_32 && b16_11) {
matched = true;
pattern_id = 453;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_2 && b9_11 && b10_26 && b11_35 && b12_32 && b13_5 && b14_25 && b15_32 && b16_11 && b17_29 && b18_34 && b19_35 && b20_37 && b21_30 && b22_31 && b23_28 && b24_3 && b25_31 && b26_30 && b27_24 && b28_29) {
matched = true;
pattern_id = 454;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_2 && b9_11 && b10_26 && b11_35 && b12_32 && b13_5 && b14_25 && b15_32 && b16_11 && b17_39 && b18_10 && b19_32 && b20_2 && b21_29 && b22_30 && b23_19 && b24_24 && b25_30 && b26_27 && b27_16 && b28_28 && b29_22 && b30_21) {
matched = true;
pattern_id = 455;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_2 && b9_11 && b10_26 && b11_35 && b12_32 && b13_5 && b14_25 && b15_32 && b16_11 && b17_33 && b18_4 && b19_34 && b20_28 && b21_29 && b22_14 && b23_35 && b24_29 && b25_1 && b26_34 && b27_1 && b28_28 && b29_25 && b30_17 && b31_23 && b32_26 && b33_12 && b34_20 && b35_26 && b36_11) {
matched = true;
pattern_id = 456;
}
if(b0_35 && b1_11 && b2_49 && b3_16 && b4_31 && b5_16 && b6_14 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 457;
}
if(b0_35 && b1_11 && b2_49 && b3_15 && b4_16 && b5_6 && b6_23 && b7_31 && b8_47 && b9_28 && b10_26 && b11_27 && b12_38 && b13_16 && b14_25 && b15_31 && b16_5 && b17_37 && b18_15 && b19_21 && b20_13 && b21_27 && b22_20 && b23_26 && b24_3 && b25_29 && b26_26 && b27_3 && b28_27 && b29_21) {
matched = true;
pattern_id = 458;
}
if(b0_35 && b1_11 && b2_49 && b3_15 && b4_16 && b5_6 && b6_23 && b7_31 && b8_47 && b9_28 && b10_26 && b11_27 && b12_38 && b13_16 && b14_25 && b15_31 && b16_5 && b17_37 && b18_15 && b19_21 && b20_13 && b21_10 && b22_3 && b23_32 && b24_1 && b25_30 && b26_27 && b27_19 && b28_31 && b29_24 && b30_22 && b31_19 && b32_20 && b33_19 && b34_21) {
matched = true;
pattern_id = 459;
}
if(b0_35 && b1_11 && b2_12 && b3_49 && b4_44 && b5_8 && b6_39 && b7_39 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 460;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15) {
matched = true;
pattern_id = 461;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_27 && b10_7 && b11_26 && b12_38 && b13_22 && b14_49 && b15_33 && b16_23 && b17_25 && b18_10 && b19_12) {
matched = true;
pattern_id = 462;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_27 && b10_7 && b11_55 && b12_5 && b13_4 && b14_25 && b15_38 && b16_18 && b17_29 && b18_9 && b19_35 && b20_32 && b21_10 && b22_37 && b23_27 && b24_37 && b25_1 && b26_58) {
matched = true;
pattern_id = 463;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_38 && b11_37 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 464;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_38 && b11_37 && b12_18 && b13_38 && b14_18) {
matched = true;
pattern_id = 465;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_38 && b11_37 && b12_18 && b13_38 && b14_18 && b15_54 && b16_5 && b17_4 && b18_9 && b19_22 && b20_3 && b21_2 && b22_57 && b23_24 && b24_3 && b25_30 && b26_60 && b27_22 && b28_1 && b29_53 && b30_47 && b31_14 && b32_20 && b33_25 && b34_35 && b35_22 && b36_29 && b37_27) {
matched = true;
pattern_id = 466;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_6 && b11_27 && b12_16 && b13_36 && b14_18 && b15_3 && b16_32 && b17_29 && b18_30 && b19_9) {
matched = true;
pattern_id = 467;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_11 && b11_57 && b12_5 && b13_50 && b14_17) {
matched = true;
pattern_id = 468;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_30 && b10_58) {
matched = true;
pattern_id = 469;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_34 && b10_11) {
matched = true;
pattern_id = 470;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_9 && b10_50) {
matched = true;
pattern_id = 471;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_12 && b6_3 && b7_7 && b8_15) {
matched = true;
pattern_id = 472;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_66 && b5_6 && b6_21 && b7_21 && b8_40 && b9_40 && b10_28 && b11_40 && b12_5 && b13_40 && b14_17 && b15_37 && b16_29) {
matched = true;
pattern_id = 473;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_14 && b5_26 && b6_3) {
matched = true;
pattern_id = 474;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_21 && b5_10 && b6_10 && b7_21 && b8_16 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 475;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_21 && b5_10 && b6_10 && b7_21 && b8_16 && b9_42 && b10_5 && b11_30 && b12_22) {
matched = true;
pattern_id = 476;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_24 && b5_11 && b6_35 && b7_54) {
matched = true;
pattern_id = 477;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_7 && b5_8 && b6_3 && b7_32) {
matched = true;
pattern_id = 478;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_7 && b5_8 && b6_3 && b7_32 && b8_18 && b9_47 && b10_6 && b11_47 && b12_52 && b13_27 && b14_18 && b15_3 && b16_52) {
matched = true;
pattern_id = 479;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_7 && b5_8 && b6_3 && b7_32 && b8_18 && b9_4 && b10_3 && b11_25 && b12_10) {
matched = true;
pattern_id = 480;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_6 && b5_6 && b6_24 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 481;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_31 && b5_8 && b6_8 && b7_47) {
matched = true;
pattern_id = 482;
}
if(b0_35 && b1_11 && b2_15 && b3_26 && b4_24 && b5_62 && b6_8 && b7_52 && b8_42 && b9_11 && b10_56 && b11_57 && b12_38 && b13_22 && b14_47 && b15_54 && b16_5 && b17_10 && b18_19 && b19_4 && b20_13 && b21_15 && b22_45 && b23_44 && b24_4 && b25_4 && b26_26 && b27_44 && b28_1 && b29_24 && b30_52 && b31_53) {
matched = true;
pattern_id = 483;
}
if(b0_35 && b1_11 && b2_15 && b3_26 && b4_3 && b5_47 && b6_7 && b7_47 && b8_49 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 484;
}
if(b0_35 && b1_11 && b2_15 && b3_26 && b4_6 && b5_54 && b6_3 && b7_51 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 485;
}
if(b0_35 && b1_11 && b2_15 && b3_26 && b4_6 && b5_7 && b6_7 && b7_31 && b8_47 && b9_5 && b10_4 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 486;
}
if(b0_35 && b1_11 && b2_15 && b3_11 && b4_14 && b5_57 && b6_2 && b7_31 && b8_41 && b9_10 && b10_26 && b11_6 && b12_3 && b13_39 && b14_24 && b15_35 && b16_23 && b17_55) {
matched = true;
pattern_id = 487;
}
if(b0_35 && b1_11 && b2_15 && b3_11 && b4_14 && b5_57 && b6_61 && b7_11 && b8_11 && b9_40 && b10_29) {
matched = true;
pattern_id = 488;
}
if(b0_35 && b1_11 && b2_15 && b3_11 && b4_14 && b5_57 && b6_39 && b7_47 && b8_47 && b9_27 && b10_13 && b11_3) {
matched = true;
pattern_id = 489;
}
if(b0_35 && b1_11 && b2_15 && b3_15 && b4_7 && b5_40 && b6_35 && b7_45 && b8_11) {
matched = true;
pattern_id = 490;
}
if(b0_35 && b1_11 && b2_15 && b3_15 && b4_7 && b5_51 && b6_48 && b7_46 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 491;
}
if(b0_35 && b1_11 && b2_24 && b3_26 && b4_2 && b5_26 && b6_23 && b7_39 && b8_46 && b9_9 && b10_63 && b11_30 && b12_12 && b13_30 && b14_18 && b15_33 && b16_2 && b17_36) {
matched = true;
pattern_id = 492;
}
if(b0_35 && b1_11 && b2_24 && b3_26 && b4_2 && b5_26 && b6_35 && b7_55 && b8_11 && b9_5 && b10_7 && b11_5 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 493;
}
if(b0_35 && b1_11 && b2_6 && b3_21 && b4_26 && b5_52 && b6_19 && b7_47) {
matched = true;
pattern_id = 494;
}
if(b0_35 && b1_11 && b2_6 && b3_21 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_17 && b10_35 && b11_34 && b12_19) {
matched = true;
pattern_id = 495;
}
if(b0_35 && b1_11 && b2_6 && b3_21 && b4_55 && b5_55 && b6_7 && b7_8 && b8_2 && b9_49 && b10_6 && b11_27 && b12_19) {
matched = true;
pattern_id = 496;
}
if(b0_35 && b1_11 && b2_20 && b3_21 && b4_12 && b5_40 && b6_46 && b7_2 && b8_40 && b9_57) {
matched = true;
pattern_id = 497;
}
if(b0_35 && b1_11 && b2_20 && b3_24 && b4_22 && b5_6 && b6_36 && b7_9 && b8_62 && b9_42 && b10_12 && b11_5 && b12_52) {
matched = true;
pattern_id = 498;
}
if(b0_35 && b1_11 && b2_20 && b3_34 && b4_24 && b5_6 && b6_10 && b7_32 && b8_5 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 499;
}
if(b0_35 && b1_11 && b2_20 && b3_34 && b4_7 && b5_16 && b6_20 && b7_10 && b8_8 && b9_42 && b10_28 && b11_47 && b12_4 && b13_27 && b14_21 && b15_41 && b16_47 && b17_44 && b18_10 && b19_42 && b20_26) {
matched = true;
pattern_id = 500;
}
if(b0_35 && b1_11 && b2_20 && b3_34 && b4_7 && b5_16 && b6_20 && b7_10 && b8_8 && b9_52 && b10_26 && b11_37 && b12_39 && b13_20) {
matched = true;
pattern_id = 501;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_15 && b8_41 && b9_6 && b10_12 && b11_59) {
matched = true;
pattern_id = 502;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14) {
matched = true;
pattern_id = 503;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_44 && b8_41 && b9_25 && b10_17 && b11_47 && b12_24 && b13_40 && b14_25 && b15_37 && b16_44) {
matched = true;
pattern_id = 504;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_44 && b8_6 && b9_10 && b10_35 && b11_30 && b12_28 && b13_30 && b14_28 && b15_16 && b16_37 && b17_33 && b18_10 && b19_44 && b20_48 && b21_36 && b22_14) {
matched = true;
pattern_id = 505;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_44 && b8_11 && b9_28 && b10_5 && b11_6 && b12_20 && b13_38 && b14_34 && b15_25 && b16_43 && b17_37) {
matched = true;
pattern_id = 506;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_56 && b8_58 && b9_5 && b10_7 && b11_47 && b12_26 && b13_21 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 507;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_6 && b5_6 && b6_55 && b7_9 && b8_15 && b9_49 && b10_35 && b11_49 && b12_28 && b13_43 && b14_39 && b15_33 && b16_3 && b17_47 && b18_29 && b19_44 && b20_59 && b21_42 && b22_41) {
matched = true;
pattern_id = 508;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_6 && b5_6 && b6_59 && b7_9 && b8_4 && b9_40 && b10_35 && b11_37 && b12_3 && b13_52 && b14_38 && b15_30 && b16_22 && b17_37 && b18_4 && b19_39 && b20_28 && b21_28 && b22_18 && b23_9 && b24_4 && b25_4 && b26_26 && b27_28 && b28_30 && b29_21 && b30_16) {
matched = true;
pattern_id = 509;
}
if(b0_35 && b1_11 && b2_20 && b3_18 && b4_45 && b5_59 && b6_23 && b7_11 && b8_7) {
matched = true;
pattern_id = 510;
}
if(b0_35 && b1_11 && b2_20 && b3_7 && b4_3 && b5_42 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 511;
}
if(b0_35 && b1_11 && b2_20 && b3_7 && b4_3 && b5_42 && b6_7 && b7_8 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 512;
}
if(b0_35 && b1_11 && b2_20 && b3_7 && b4_3 && b5_42 && b6_7 && b7_8 && b8_15 && b9_52) {
matched = true;
pattern_id = 513;
}
if(b0_35 && b1_11 && b2_23 && b3_45 && b4_7 && b5_42 && b6_54 && b7_33 && b8_57 && b9_9 && b10_17 && b11_30 && b12_25) {
matched = true;
pattern_id = 514;
}
if(b0_35 && b1_11 && b2_23 && b3_45 && b4_2 && b5_42 && b6_8 && b7_54 && b8_11 && b9_28 && b10_28 && b11_49 && b12_5 && b13_3 && b14_20 && b15_41 && b16_23 && b17_26 && b18_4 && b19_21) {
matched = true;
pattern_id = 515;
}
if(b0_35 && b1_11 && b2_23 && b3_45 && b4_2 && b5_42 && b6_8 && b7_54 && b8_11 && b9_28 && b10_28 && b11_49 && b12_5 && b13_3 && b14_20 && b15_41 && b16_23 && b17_26 && b18_4 && b19_21 && b20_10 && b21_14 && b22_22 && b23_35 && b24_30) {
matched = true;
pattern_id = 516;
}
if(b0_35 && b1_11 && b2_8 && b3_64 && b4_12 && b5_21 && b6_24 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 517;
}
if(b0_35 && b1_11 && b2_8 && b3_38 && b4_18 && b5_26 && b6_24 && b7_53 && b8_14 && b9_14 && b10_7 && b11_57 && b12_18 && b13_53 && b14_24) {
matched = true;
pattern_id = 518;
}
if(b0_35 && b1_11 && b2_8 && b3_10 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 519;
}
if(b0_35 && b1_11 && b2_8 && b3_17) {
matched = true;
pattern_id = 520;
}
if(b0_35 && b1_11 && b2_3 && b3_18 && b4_2 && b5_40 && b6_35 && b7_29 && b8_41) {
matched = true;
pattern_id = 521;
}
if(b0_35 && b1_11 && b2_52 && b3_18 && b4_22 && b5_10 && b6_38 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 522;
}
if(b0_35 && b1_11 && b2_52 && b3_18 && b4_11 && b5_16 && b6_7 && b7_53 && b8_27 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 523;
}
if(b0_35 && b1_11 && b2_52 && b3_18 && b4_31 && b5_6 && b6_21 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 524;
}
if(b0_35 && b1_11 && b2_52 && b3_18 && b4_31 && b5_6 && b6_21 && b7_44 && b8_54 && b9_5 && b10_4 && b11_5 && b12_38 && b13_36 && b14_28) {
matched = true;
pattern_id = 525;
}
if(b0_35 && b1_11 && b2_17 && b3_34 && b4_18 && b5_16 && b6_20 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 526;
}
if(b0_35 && b1_11 && b2_66 && b3_48 && b4_12 && b5_8 && b6_36 && b7_14 && b8_40) {
matched = true;
pattern_id = 527;
}
if(b0_35 && b1_58 && b2_43 && b3_8 && b4_18 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_28 && b11_47 && b12_4 && b13_27 && b14_21 && b15_41 && b16_52) {
matched = true;
pattern_id = 528;
}
if(b0_35 && b1_58 && b2_43 && b3_8 && b4_18 && b5_30 && b6_35 && b7_45 && b8_36 && b9_6 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 529;
}
if(b0_35 && b1_58 && b2_43 && b3_45 && b4_47 && b5_12 && b6_8 && b7_9 && b8_42 && b9_17 && b10_6 && b11_35 && b12_38 && b13_5 && b14_35 && b15_36 && b16_25 && b17_33 && b18_10) {
matched = true;
pattern_id = 530;
}
if(b0_35 && b1_58 && b2_43 && b3_45 && b4_47 && b5_12 && b6_8 && b7_9 && b8_42 && b9_11 && b10_6 && b11_40 && b12_38 && b13_37 && b14_24 && b15_3 && b16_3 && b17_38 && b18_31 && b19_17 && b20_27) {
matched = true;
pattern_id = 531;
}
if(b0_35 && b1_58 && b2_42 && b3_53 && b4_31 && b5_21 && b6_56) {
matched = true;
pattern_id = 532;
}
if(b0_35 && b1_58 && b2_42 && b3_35 && b4_24 && b5_17 && b6_24 && b7_42 && b8_34 && b9_42 && b10_26 && b11_27 && b12_18) {
matched = true;
pattern_id = 533;
}
if(b0_35 && b1_58 && b2_42 && b3_34 && b4_18 && b5_20 && b6_23 && b7_29 && b8_61 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 534;
}
if(b0_35 && b1_58 && b2_16 && b3_48 && b4_44 && b5_11 && b6_10 && b7_29 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 535;
}
if(b0_35 && b1_58 && b2_16 && b3_49 && b4_44 && b5_8 && b6_39 && b7_39 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 536;
}
if(b0_35 && b1_58 && b2_16 && b3_18 && b4_15 && b5_10 && b6_46) {
matched = true;
pattern_id = 537;
}
if(b0_35 && b1_58 && b2_41 && b3_15 && b4_14 && b5_47 && b6_35 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 538;
}
if(b0_35 && b1_58 && b2_25 && b3_56) {
matched = true;
pattern_id = 539;
}
if(b0_35 && b1_58 && b2_25 && b3_49 && b4_18 && b5_29 && b6_20 && b7_9 && b8_48 && b9_27 && b10_11 && b11_35 && b12_45 && b13_39 && b14_4 && b15_3 && b16_3 && b17_55) {
matched = true;
pattern_id = 540;
}
if(b0_35 && b1_58 && b2_25 && b3_49 && b4_18 && b5_29 && b6_20 && b7_9 && b8_57 && b9_25 && b10_17 && b11_46 && b12_39 && b13_5 && b14_35 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 541;
}
if(b0_35 && b1_58 && b2_25 && b3_49 && b4_27 && b5_20 && b6_7 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 542;
}
if(b0_35 && b1_58 && b2_25 && b3_24 && b4_15 && b5_10 && b6_18 && b7_10 && b8_40 && b9_27 && b10_38 && b11_3 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 543;
}
if(b0_35 && b1_58 && b2_49 && b3_15 && b4_17 && b5_6 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 544;
}
if(b0_35 && b1_58 && b2_14 && b3_49 && b4_21 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 545;
}
if(b0_35 && b1_58 && b2_14 && b3_49 && b4_21 && b5_26 && b6_23) {
matched = true;
pattern_id = 546;
}
if(b0_35 && b1_58 && b2_14 && b3_20 && b4_12 && b5_51 && b6_11 && b7_14 && b8_8 && b9_41 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 547;
}
if(b0_35 && b1_58 && b2_14 && b3_20 && b4_12 && b5_51 && b6_11 && b7_14 && b8_8 && b9_41 && b10_5 && b11_23 && b12_26 && b13_40 && b14_38 && b15_40 && b16_24) {
matched = true;
pattern_id = 548;
}
if(b0_35 && b1_58 && b2_6 && b3_56 && b4_16 && b5_6 && b6_18 && b7_31 && b8_8 && b9_17) {
matched = true;
pattern_id = 549;
}
if(b0_35 && b1_58 && b2_6 && b3_18 && b4_4) {
matched = true;
pattern_id = 550;
}
if(b0_35 && b1_58 && b2_21 && b3_11 && b4_31 && b5_26 && b6_56 && b7_10 && b8_61 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 551;
}
if(b0_35 && b1_58 && b2_21 && b3_18 && b4_6 && b5_10 && b6_3 && b7_54 && b8_2 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 552;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_35) {
matched = true;
pattern_id = 553;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_35 && b5_11 && b6_34 && b7_39 && b8_11 && b9_11) {
matched = true;
pattern_id = 554;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_35 && b5_52 && b6_8 && b7_32 && b8_9 && b9_27 && b10_38 && b11_3 && b12_16) {
matched = true;
pattern_id = 555;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_50 && b5_27 && b6_7 && b7_45 && b8_35 && b9_42 && b10_7 && b11_42 && b12_55) {
matched = true;
pattern_id = 556;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_50 && b5_27 && b6_7 && b7_45 && b8_35 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_35 && b15_41 && b16_23 && b17_55) {
matched = true;
pattern_id = 557;
}
if(b0_35 && b1_58 && b2_20 && b3_11 && b4_16 && b5_16 && b6_11 && b7_52 && b8_14 && b9_10 && b10_17 && b11_5 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 558;
}
if(b0_35 && b1_58 && b2_20 && b3_34 && b4_14 && b5_3 && b6_38 && b7_15 && b8_7 && b9_9 && b10_25) {
matched = true;
pattern_id = 559;
}
if(b0_35 && b1_58 && b2_20 && b3_34 && b4_22 && b5_10 && b6_38 && b7_15 && b8_7 && b9_9 && b10_25) {
matched = true;
pattern_id = 560;
}
if(b0_35 && b1_58 && b2_20 && b3_18 && b4_6 && b5_29 && b6_48 && b7_55 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 561;
}
if(b0_35 && b1_58 && b2_20 && b3_18 && b4_6 && b5_29 && b6_48 && b7_55 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22) {
matched = true;
pattern_id = 562;
}
if(b0_35 && b1_58 && b2_20 && b3_2 && b4_3 && b5_25 && b6_3 && b7_31 && b8_47 && b9_42 && b10_28 && b11_5 && b12_32 && b13_39 && b14_36 && b15_17) {
matched = true;
pattern_id = 563;
}
if(b0_35 && b1_58 && b2_20 && b3_2 && b4_3 && b5_25 && b6_3 && b7_31 && b8_47 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 564;
}
if(b0_35 && b1_58 && b2_8 && b3_16 && b4_31 && b5_30 && b6_21 && b7_11 && b8_7 && b9_20 && b10_11 && b11_3 && b12_17 && b13_4 && b14_38 && b15_44 && b16_47 && b17_4 && b18_15 && b19_12 && b20_28 && b21_29 && b22_30 && b23_28 && b24_35) {
matched = true;
pattern_id = 565;
}
if(b0_35 && b1_58 && b2_62 && b3_34 && b4_7 && b5_6 && b6_55 && b7_52 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 566;
}
if(b0_35 && b1_58 && b2_52 && b3_2 && b4_2 && b5_26 && b6_10 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 567;
}
if(b0_35 && b1_3 && b2_16 && b3_17 && b4_44 && b5_40 && b6_21 && b7_31 && b8_35) {
matched = true;
pattern_id = 568;
}
if(b0_35 && b1_3 && b2_16 && b3_18 && b4_14 && b5_8 && b6_35 && b7_47 && b8_35 && b9_9 && b10_22 && b11_3 && b12_18 && b13_60 && b14_20 && b15_31 && b16_29 && b17_38 && b18_4 && b19_39 && b20_2) {
matched = true;
pattern_id = 569;
}
if(b0_35 && b1_3 && b2_41 && b3_15 && b4_6 && b5_37 && b6_8 && b7_32 && b8_35 && b9_49 && b10_6 && b11_27 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 570;
}
if(b0_35 && b1_3 && b2_41 && b3_15 && b4_6 && b5_37 && b6_35 && b7_39 && b8_42 && b9_12 && b10_17 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 571;
}
if(b0_35 && b1_3 && b2_41 && b3_15 && b4_6 && b5_42 && b6_8 && b7_46 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 572;
}
if(b0_35 && b1_3 && b2_15 && b3_29 && b4_15 && b5_42 && b6_18 && b7_54 && b8_3 && b9_63 && b10_36 && b11_52 && b12_47 && b13_52 && b14_30 && b15_36 && b16_7 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7 && b24_12 && b25_36 && b26_32 && b27_19 && b28_21 && b29_16 && b30_36 && b31_50 && b32_56 && b33_36 && b34_17 && b35_33 && b36_46 && b37_3 && b38_21 && b39_12 && b40_43 && b41_26 && b42_34 && b43_42 && b44_16 && b45_20 && b46_18 && b47_9 && b48_4 && b49_28 && b50_12 && b51_4 && b52_26 && b53_17 && b54_25 && b55_29 && b56_15 && b57_6 && b58_28 && b59_6) {
matched = true;
pattern_id = 573;
}
if(b0_35 && b1_3 && b2_6 && b3_50 && b4_44 && b5_21 && b6_7 && b7_8 && b8_18 && b9_3 && b10_18) {
matched = true;
pattern_id = 574;
}
if(b0_35 && b1_3 && b2_6 && b3_50 && b4_44 && b5_21 && b6_7 && b7_8 && b8_18 && b9_3 && b10_18 && b11_29) {
matched = true;
pattern_id = 575;
}
if(b0_35 && b1_3 && b2_6 && b3_7 && b4_24 && b5_11 && b6_35 && b7_54 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 576;
}
if(b0_35 && b1_3 && b2_6 && b3_7 && b4_24 && b5_11 && b6_35 && b7_54 && b8_48 && b9_48 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 577;
}
if(b0_35 && b1_3 && b2_21 && b3_56 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_20 && b10_28 && b11_49 && b12_36 && b13_4 && b14_17 && b15_40 && b16_5 && b17_37 && b18_4 && b19_44 && b20_24 && b21_10 && b22_40) {
matched = true;
pattern_id = 578;
}
if(b0_35 && b1_3 && b2_21 && b3_8 && b4_12 && b5_8 && b6_54 && b7_35 && b8_12 && b9_12 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 579;
}
if(b0_35 && b1_3 && b2_21 && b3_27 && b4_27 && b5_8 && b6_3 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 580;
}
if(b0_35 && b1_3 && b2_21 && b3_27 && b4_27 && b5_8 && b6_3 && b7_45 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 581;
}
if(b0_35 && b1_3 && b2_21 && b3_27 && b4_44 && b5_29 && b6_11 && b7_15 && b8_61 && b9_27 && b10_13) {
matched = true;
pattern_id = 582;
}
if(b0_35 && b1_3 && b2_21 && b3_27 && b4_44 && b5_29 && b6_11 && b7_15 && b8_61 && b9_27 && b10_13 && b11_20 && b12_54 && b13_15 && b14_2) {
matched = true;
pattern_id = 583;
}
if(b0_35 && b1_3 && b2_23 && b3_20 && b4_44 && b5_8 && b6_23 && b7_68 && b8_1 && b9_1 && b10_17 && b11_23 && b12_20 && b13_36 && b14_35 && b15_36 && b16_49 && b17_36 && b18_19) {
matched = true;
pattern_id = 584;
}
if(b0_35 && b1_3 && b2_8 && b3_17 && b4_44 && b5_52 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 585;
}
if(b0_35 && b1_3 && b2_8 && b3_17 && b4_44 && b5_52 && b6_2 && b7_47 && b8_34 && b9_52) {
matched = true;
pattern_id = 586;
}
if(b0_35 && b1_3 && b2_3 && b3_40 && b4_35 && b5_16 && b6_55 && b7_10 && b8_35 && b9_40 && b10_48 && b11_47 && b12_26 && b13_22 && b14_47) {
matched = true;
pattern_id = 587;
}
if(b0_35 && b1_3 && b2_3 && b3_40 && b4_35 && b5_27 && b6_3 && b7_9 && b8_47) {
matched = true;
pattern_id = 588;
}
if(b0_35 && b1_3 && b2_3 && b3_40 && b4_35 && b5_52 && b6_8 && b7_7 && b8_2 && b9_33 && b10_7) {
matched = true;
pattern_id = 589;
}
if(b0_35 && b1_3 && b2_3 && b3_40 && b4_35 && b5_26 && b6_19 && b7_31 && b8_47 && b9_6 && b10_54) {
matched = true;
pattern_id = 590;
}
if(b0_35 && b1_3 && b2_52 && b3_11 && b4_3 && b5_42 && b6_24 && b7_26 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 591;
}
if(b0_35 && b1_3 && b2_52 && b3_11 && b4_17 && b5_17 && b6_11 && b7_2 && b8_11 && b9_11 && b10_38 && b11_59 && b12_26 && b13_4 && b14_12 && b15_36 && b16_25 && b17_33 && b18_10) {
matched = true;
pattern_id = 592;
}
if(b0_35 && b1_3 && b2_17 && b3_18 && b4_35 && b5_11 && b6_10 && b7_32 && b8_6 && b9_49 && b10_13 && b11_3 && b12_45 && b13_38 && b14_48 && b15_49 && b16_40 && b17_29 && b18_22 && b19_45 && b20_10 && b21_42 && b22_28) {
matched = true;
pattern_id = 593;
}
if(b0_35 && b1_3 && b2_19 && b3_26 && b4_27 && b5_8 && b6_23 && b7_7 && b8_5 && b9_27 && b10_4 && b11_47 && b12_50 && b13_52) {
matched = true;
pattern_id = 594;
}
if(b0_35 && b1_3 && b2_19 && b3_26 && b4_24 && b5_52 && b6_20 && b7_10 && b8_2 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_18 && b15_3 && b16_44 && b17_28 && b18_16 && b19_12 && b20_3 && b21_21 && b22_40 && b23_47 && b24_3 && b25_27 && b26_1 && b27_31 && b28_21 && b29_25) {
matched = true;
pattern_id = 595;
}
if(b0_35 && b1_3 && b2_19 && b3_26 && b4_24 && b5_52 && b6_20 && b7_10 && b8_2 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_18 && b15_3 && b16_44 && b17_28 && b18_51 && b19_21 && b20_3 && b21_30 && b22_25 && b23_25 && b24_3 && b25_32 && b26_37 && b27_36 && b28_31 && b29_25 && b30_19 && b31_23) {
matched = true;
pattern_id = 596;
}
if(b0_35 && b1_3 && b2_19 && b3_40 && b4_15 && b5_11 && b6_55 && b7_46 && b8_5 && b9_20 && b10_60 && b11_6 && b12_36 && b13_36 && b14_28 && b15_45 && b16_3 && b17_25 && b18_18 && b19_35 && b20_30 && b21_42 && b22_46) {
matched = true;
pattern_id = 597;
}
if(b0_35 && b1_3 && b2_19 && b3_40 && b4_15 && b5_11 && b6_55 && b7_46 && b8_5 && b9_20 && b10_4 && b11_6 && b12_26 && b13_38 && b14_34 && b15_33 && b16_2 && b17_34) {
matched = true;
pattern_id = 598;
}
if(b0_35 && b1_3 && b2_19 && b3_40 && b4_15 && b5_11 && b6_55 && b7_46 && b8_5 && b9_20 && b10_4 && b11_6 && b12_26 && b13_38 && b14_34 && b15_33 && b16_2 && b17_34 && b18_48) {
matched = true;
pattern_id = 599;
}
if(b0_35 && b1_3 && b2_19 && b3_11 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 600;
}
if(b0_35 && b1_3 && b2_19 && b3_11 && b4_14 && b5_30 && b6_24 && b7_2 && b8_14 && b9_33 && b10_22 && b11_47 && b12_26 && b13_22 && b14_47 && b15_35 && b16_18 && b17_28 && b18_31 && b19_21) {
matched = true;
pattern_id = 601;
}
if(b0_35 && b1_3 && b2_2 && b3_26 && b4_16 && b5_27 && b6_35 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 602;
}
if(b0_35 && b1_3 && b2_2 && b3_48 && b4_44 && b5_11 && b6_10 && b7_29 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 603;
}
if(b0_35 && b1_3 && b2_2 && b3_34 && b4_18 && b5_20 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 604;
}
if(b0_35 && b1_40 && b2_43 && b3_62 && b4_24 && b5_11 && b6_55 && b7_31 && b8_58 && b9_5 && b10_4 && b11_57 && b12_18 && b13_53 && b14_24) {
matched = true;
pattern_id = 605;
}
if(b0_35 && b1_40 && b2_43 && b3_62 && b4_24 && b5_11 && b6_55 && b7_31 && b8_58 && b9_5 && b10_4 && b11_57 && b12_18 && b13_53 && b14_24 && b15_54) {
matched = true;
pattern_id = 606;
}
if(b0_35 && b1_40 && b2_43 && b3_46 && b4_2 && b5_29 && b6_10 && b7_52 && b8_5 && b9_41) {
matched = true;
pattern_id = 607;
}
if(b0_35 && b1_40 && b2_16 && b3_16 && b4_27 && b5_43 && b6_21 && b7_11 && b8_7 && b9_20 && b10_17 && b11_47 && b12_50 && b13_36 && b14_34 && b15_3 && b16_43 && b17_29) {
matched = true;
pattern_id = 608;
}
if(b0_35 && b1_40 && b2_25 && b3_11 && b4_16 && b5_64 && b6_10 && b7_10 && b8_69 && b9_29 && b10_50 && b11_40 && b12_4 && b13_6) {
matched = true;
pattern_id = 609;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_40 && b6_8 && b7_7 && b8_40 && b9_45 && b10_64 && b11_59 && b12_38 && b13_41 && b14_17 && b15_17) {
matched = true;
pattern_id = 610;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_27 && b6_8 && b7_11 && b8_34) {
matched = true;
pattern_id = 611;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_27 && b6_8 && b7_11 && b8_34 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 612;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_26 && b6_2 && b7_11 && b8_7 && b9_17 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 613;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_26 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 614;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_26 && b6_7 && b7_10 && b8_9 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 615;
}
if(b0_35 && b1_40 && b2_14 && b3_43 && b4_19 && b5_6 && b6_10) {
matched = true;
pattern_id = 616;
}
if(b0_35 && b1_40 && b2_24 && b3_11 && b4_53 && b5_3 && b6_3 && b7_8 && b8_16) {
matched = true;
pattern_id = 617;
}
if(b0_35 && b1_40 && b2_24 && b3_7 && b4_7 && b5_12 && b6_8 && b7_9 && b8_5 && b9_20) {
matched = true;
pattern_id = 618;
}
if(b0_35 && b1_40 && b2_20 && b3_34 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 619;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_24 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 620;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_24 && b5_44 && b6_10 && b7_31 && b8_49 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 621;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_24 && b5_27 && b6_8 && b7_11 && b8_34) {
matched = true;
pattern_id = 622;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_50 && b5_27 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 623;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_50 && b5_27 && b6_23 && b7_29 && b8_61 && b9_42 && b10_5 && b11_54 && b12_32 && b13_1 && b14_65 && b15_23 && b16_35 && b17_56 && b18_28 && b19_18 && b20_10 && b21_9 && b22_1 && b23_2 && b24_52 && b25_13 && b26_2 && b27_32 && b28_6 && b29_6 && b30_17 && b31_21 && b32_20 && b33_34 && b34_37 && b35_18 && b36_45 && b37_45 && b38_26 && b39_14 && b40_15 && b41_44 && b42_4 && b43_1 && b44_32 && b45_24 && b46_18 && b47_19 && b48_12 && b49_11 && b50_1 && b51_17 && b52_9 && b53_28 && b54_11 && b55_29 && b56_24 && b57_6 && b58_22 && b59_17 && b60_22 && b61_21 && b62_1 && b63_6 && b64_12 && b65_23 && b66_20 && b67_3 && b68_4 && b69_17 && b70_6 && b71_3 && b72_16 && b73_5 && b74_22 && b75_13 && b76_1 && b77_16 && b78_18 && b79_13) {
matched = true;
pattern_id = 624;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_50 && b5_27 && b6_23 && b7_7 && b8_5 && b9_27 && b10_4 && b11_47 && b12_50 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52 && b18_4 && b19_25 && b20_24 && b21_27 && b22_28 && b23_45) {
matched = true;
pattern_id = 625;
}
if(b0_35 && b1_40 && b2_20 && b3_46 && b4_31 && b5_6 && b6_21 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 626;
}
if(b0_35 && b1_40 && b2_20 && b3_46 && b4_31 && b5_6 && b6_21 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 627;
}
if(b0_35 && b1_40 && b2_50 && b3_36 && b4_4 && b5_8 && b6_7 && b7_46 && b8_48 && b9_40 && b10_49 && b11_30) {
matched = true;
pattern_id = 628;
}
if(b0_35 && b1_40 && b2_50 && b3_22 && b4_18 && b5_8 && b6_7 && b7_46 && b8_48 && b9_40 && b10_49 && b11_30) {
matched = true;
pattern_id = 629;
}
if(b0_35 && b1_40 && b2_50 && b3_40 && b4_44 && b5_29 && b6_55 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 630;
}
if(b0_35 && b1_40 && b2_50 && b3_20 && b4_12 && b5_27 && b6_8 && b7_29 && b8_16 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 631;
}
if(b0_35 && b1_40 && b2_50 && b3_18 && b4_17 && b5_55 && b6_8 && b7_29 && b8_16 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 632;
}
if(b0_35 && b1_40 && b2_23 && b3_15 && b4_12 && b5_20 && b6_34 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 633;
}
if(b0_35 && b1_40 && b2_23 && b3_34 && b4_8 && b5_10 && b6_18 && b7_47 && b8_14 && b9_9 && b10_17 && b11_57 && b12_17 && b13_16 && b14_36 && b15_37) {
matched = true;
pattern_id = 634;
}
if(b0_35 && b1_40 && b2_23 && b3_34 && b4_67 && b5_6 && b6_11 && b7_13 && b8_35 && b9_10 && b10_28 && b11_47 && b12_50 && b13_21 && b14_17 && b15_41 && b16_44 && b17_38 && b18_32 && b19_41 && b20_34 && b21_44) {
matched = true;
pattern_id = 635;
}
if(b0_35 && b1_40 && b2_3 && b3_50 && b4_26 && b5_52 && b6_20) {
matched = true;
pattern_id = 636;
}
if(b0_35 && b1_40 && b2_3 && b3_50 && b4_26 && b5_52 && b6_20 && b7_62) {
matched = true;
pattern_id = 637;
}
if(b0_35 && b1_40 && b2_62 && b3_43 && b4_14 && b5_42 && b6_35 && b7_14 && b8_7 && b9_9 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 638;
}
if(b0_35 && b1_62 && b2_43 && b3_8 && b4_12 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 639;
}
if(b0_35 && b1_62 && b2_43 && b3_8 && b4_12 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52) {
matched = true;
pattern_id = 640;
}
if(b0_35 && b1_62 && b2_42 && b3_6 && b4_44 && b5_57 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 641;
}
if(b0_35 && b1_62 && b2_16 && b3_18 && b4_55 && b5_11 && b6_20 && b7_47 && b8_6 && b9_27 && b10_29) {
matched = true;
pattern_id = 642;
}
if(b0_35 && b1_62 && b2_41 && b3_15 && b4_55 && b5_11 && b6_20 && b7_47 && b8_6 && b9_27 && b10_29) {
matched = true;
pattern_id = 643;
}
if(b0_35 && b1_62 && b2_25 && b3_43 && b4_12 && b5_8 && b6_8 && b7_9 && b8_5 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 644;
}
if(b0_35 && b1_62 && b2_25 && b3_6 && b4_27 && b5_52 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64 && b11_28 && b12_39 && b13_4 && b14_19) {
matched = true;
pattern_id = 645;
}
if(b0_35 && b1_62 && b2_25 && b3_6 && b4_27 && b5_52 && b6_23 && b7_46 && b8_5 && b9_6 && b10_26 && b11_35 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 646;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_26 && b5_11 && b6_24 && b7_47 && b8_18 && b9_28 && b10_28 && b11_47 && b12_19) {
matched = true;
pattern_id = 647;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_49 && b10_12 && b11_55 && b12_38 && b13_38 && b14_17 && b15_17) {
matched = true;
pattern_id = 648;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_35 && b5_64 && b6_34 && b7_31 && b8_35 && b9_27 && b10_29) {
matched = true;
pattern_id = 649;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_35 && b5_64 && b6_22 && b7_10 && b8_8 && b9_29) {
matched = true;
pattern_id = 650;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_45 && b5_44 && b6_2 && b7_10 && b8_55 && b9_5) {
matched = true;
pattern_id = 651;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_59 && b5_26 && b6_11 && b7_31 && b8_35 && b9_19 && b10_11 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54 && b16_22 && b17_10 && b18_33 && b19_9 && b20_26) {
matched = true;
pattern_id = 652;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_16 && b5_10 && b6_36 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 653;
}
if(b0_35 && b1_62 && b2_12 && b3_11 && b4_6 && b5_37 && b6_10 && b7_9 && b8_5 && b9_28 && b10_5 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54 && b16_22 && b17_55) {
matched = true;
pattern_id = 654;
}
if(b0_35 && b1_62 && b2_24 && b3_15 && b4_24 && b5_52 && b6_24 && b7_10) {
matched = true;
pattern_id = 655;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_15 && b8_42 && b9_9 && b10_28) {
matched = true;
pattern_id = 656;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 657;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_15 && b8_11 && b9_11 && b10_43) {
matched = true;
pattern_id = 658;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_7 && b8_48 && b9_30 && b10_11 && b11_46) {
matched = true;
pattern_id = 659;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_7 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 660;
}
if(b0_35 && b1_62 && b2_6 && b3_51 && b4_36 && b5_43 && b6_21 && b7_18 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 661;
}
if(b0_35 && b1_62 && b2_20 && b3_59 && b4_27 && b5_25 && b6_8 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 662;
}
if(b0_35 && b1_62 && b2_23 && b3_26 && b4_7 && b5_7 && b6_35 && b7_32 && b8_2 && b9_20 && b10_11 && b11_26 && b12_25 && b13_11 && b14_38 && b15_30 && b16_39) {
matched = true;
pattern_id = 663;
}
if(b0_35 && b1_62 && b2_3 && b3_29 && b4_70 && b5_52 && b6_38 && b7_62) {
matched = true;
pattern_id = 664;
}
if(b0_35 && b1_62 && b2_62 && b3_11 && b4_2 && b5_42 && b6_21 && b7_14 && b8_14 && b9_55 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 665;
}
if(b0_35 && b1_62 && b2_62 && b3_11 && b4_2 && b5_42 && b6_21 && b7_14 && b8_14 && b9_55 && b10_48 && b11_35 && b12_25) {
matched = true;
pattern_id = 666;
}
if(b0_35 && b1_62 && b2_62 && b3_11 && b4_2 && b5_42 && b6_24 && b7_10 && b8_8 && b9_53 && b10_17 && b11_23 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 667;
}
if(b0_35 && b1_14 && b2_43 && b3_43 && b4_16 && b5_25 && b6_7 && b7_8) {
matched = true;
pattern_id = 668;
}
if(b0_35 && b1_14 && b2_25 && b3_26 && b4_16 && b5_6 && b6_10 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 669;
}
if(b0_35 && b1_14 && b2_25 && b3_24 && b4_22 && b5_10 && b6_2 && b7_35 && b8_42 && b9_10) {
matched = true;
pattern_id = 670;
}
if(b0_35 && b1_14 && b2_25 && b3_24 && b4_7 && b5_10 && b6_39 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 671;
}
if(b0_35 && b1_14 && b2_14 && b3_29 && b4_14 && b5_47 && b6_35) {
matched = true;
pattern_id = 672;
}
if(b0_35 && b1_14 && b2_20 && b3_34 && b4_12 && b5_30 && b6_48 && b7_9 && b8_40) {
matched = true;
pattern_id = 673;
}
if(b0_35 && b1_14 && b2_20 && b3_34 && b4_12 && b5_30 && b6_56 && b7_53 && b8_49) {
matched = true;
pattern_id = 674;
}
if(b0_35 && b1_14 && b2_8 && b3_46 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 675;
}
if(b0_35 && b1_14 && b2_3 && b3_16 && b4_17 && b5_6 && b6_46) {
matched = true;
pattern_id = 676;
}
if(b0_35 && b1_14 && b2_3 && b3_15 && b4_24 && b5_11 && b6_38 && b7_10 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 677;
}
if(b0_35 && b1_14 && b2_3 && b3_34 && b4_22 && b5_26 && b6_36 && b7_8 && b8_11 && b9_43 && b10_13) {
matched = true;
pattern_id = 678;
}
if(b0_35 && b1_14 && b2_3 && b3_34 && b4_22 && b5_26 && b6_36 && b7_8 && b8_11 && b9_43 && b10_13 && b11_14 && b12_12 && b13_40 && b14_49 && b15_36 && b16_32) {
matched = true;
pattern_id = 679;
}
if(b0_35 && b1_14 && b2_3 && b3_18 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6) {
matched = true;
pattern_id = 680;
}
if(b0_35 && b1_14 && b2_3 && b3_18 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6 && b9_52 && b10_59 && b11_47) {
matched = true;
pattern_id = 681;
}
if(b0_35 && b1_14 && b2_3 && b3_18 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6 && b9_52 && b10_17 && b11_48 && b12_18 && b13_41 && b14_55 && b15_18 && b16_29 && b17_55 && b18_49) {
matched = true;
pattern_id = 682;
}
if(b0_35 && b1_14 && b2_3 && b3_8 && b4_7 && b5_10 && b6_34 && b7_35 && b8_41 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 683;
}
if(b0_35 && b1_21 && b2_42 && b3_15 && b4_22 && b5_25 && b6_46 && b7_39 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 684;
}
if(b0_35 && b1_21 && b2_16 && b3_26 && b4_6) {
matched = true;
pattern_id = 685;
}
if(b0_35 && b1_21 && b2_16 && b3_24 && b4_44 && b5_29 && b6_34 && b7_7 && b8_46 && b9_11 && b10_43 && b11_34) {
matched = true;
pattern_id = 686;
}
if(b0_35 && b1_21 && b2_41 && b3_40 && b4_44 && b5_20 && b6_11 && b7_31 && b8_41 && b9_10 && b10_48 && b11_35 && b12_50 && b13_6 && b14_40) {
matched = true;
pattern_id = 687;
}
if(b0_35 && b1_21 && b2_25 && b3_51 && b4_12 && b5_8 && b6_10 && b7_14 && b8_8 && b9_42 && b10_38 && b11_37 && b12_52 && b13_39 && b14_20 && b15_22 && b16_44 && b17_44 && b18_15 && b19_12 && b20_26 && b21_30 && b22_3 && b23_19 && b24_8 && b25_1 && b26_19 && b27_54) {
matched = true;
pattern_id = 688;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7) {
matched = true;
pattern_id = 689;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_47 && b8_49 && b9_40 && b10_22 && b11_46 && b12_18 && b13_3 && b14_41 && b15_36 && b16_41 && b17_37 && b18_22) {
matched = true;
pattern_id = 690;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_47 && b8_49 && b9_40 && b10_22 && b11_46 && b12_5 && b13_50 && b14_36) {
matched = true;
pattern_id = 691;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_47 && b8_49 && b9_40 && b10_22 && b11_46 && b12_5 && b13_50 && b14_36 && b15_9 && b16_32 && b17_21 && b18_9 && b19_21) {
matched = true;
pattern_id = 692;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_47 && b8_49 && b9_40 && b10_22 && b11_46 && b12_3 && b13_36 && b14_25) {
matched = true;
pattern_id = 693;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_7 && b5_8 && b6_3 && b7_9 && b8_5 && b9_17 && b10_13 && b11_13 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28) {
matched = true;
pattern_id = 694;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_7 && b5_8 && b6_3 && b7_9 && b8_5 && b9_17 && b10_13 && b11_13 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_52 && b19_32 && b20_3 && b21_26 && b22_31 && b23_25 && b24_38 && b25_24 && b26_33 && b27_18 && b28_23 && b29_23 && b30_27 && b31_28 && b32_31) {
matched = true;
pattern_id = 695;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_7 && b5_8 && b6_3 && b7_9 && b8_5 && b9_17 && b10_13 && b11_13 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_16 && b19_22 && b20_28 && b21_29 && b22_17 && b23_26 && b24_28 && b25_1 && b26_32 && b27_16 && b28_24 && b29_35 && b30_24) {
matched = true;
pattern_id = 696;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_2 && b5_11 && b6_18 && b7_47 && b8_34 && b9_5 && b10_11 && b11_13) {
matched = true;
pattern_id = 697;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_2 && b5_11 && b6_18 && b7_47 && b8_34 && b9_5 && b10_11 && b11_13 && b12_5 && b13_50 && b14_20 && b15_35 && b16_3 && b17_28 && b18_37 && b19_31 && b20_45 && b21_27 && b22_3 && b23_36 && b24_17 && b25_27 && b26_38 && b27_4 && b28_32 && b29_26 && b30_17 && b31_24 && b32_25 && b33_21 && b34_2 && b35_19 && b36_12 && b37_17 && b38_19 && b39_11 && b40_17) {
matched = true;
pattern_id = 698;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_2 && b5_11 && b6_18 && b7_47 && b8_34 && b9_5 && b10_11 && b11_13 && b12_16 && b13_19 && b14_50 && b15_38 && b16_5 && b17_36 && b18_19 && b19_43 && b20_32 && b21_21 && b22_39 && b23_24 && b24_23 && b25_19 && b26_3 && b27_17 && b28_21 && b29_27 && b30_18 && b31_25 && b32_9 && b33_12 && b34_22 && b35_20 && b36_13) {
matched = true;
pattern_id = 699;
}
if(b0_35 && b1_21 && b2_18 && b3_6 && b4_3 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 700;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_60 && b7_14 && b8_34 && b9_49 && b10_6 && b11_57 && b12_18 && b13_53 && b14_24) {
matched = true;
pattern_id = 701;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_18 && b7_31 && b8_40 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 702;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_18 && b7_31 && b8_40 && b9_42 && b10_17 && b11_48 && b12_5 && b13_39) {
matched = true;
pattern_id = 703;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_55 && b7_7 && b8_15 && b9_11 && b10_28 && b11_47 && b12_38 && b13_36 && b14_28 && b15_33 && b16_8 && b17_28 && b18_11 && b19_9 && b20_45 && b21_24 && b22_15 && b23_39 && b24_16 && b25_20 && b26_9 && b27_10 && b28_13 && b29_19 && b30_23 && b31_40 && b32_24 && b33_35 && b34_31 && b35_28 && b36_17 && b37_16 && b38_28 && b39_46 && b40_17 && b41_32 && b42_22) {
matched = true;
pattern_id = 704;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_24 && b7_44) {
matched = true;
pattern_id = 705;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_24 && b7_44 && b8_16 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_24 && b15_18 && b16_52) {
matched = true;
pattern_id = 706;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_24 && b7_44 && b8_54 && b9_49 && b10_17 && b11_61 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 707;
}
if(b0_35 && b1_21 && b2_6 && b3_16 && b4_35 && b5_26 && b6_36 && b7_8 && b8_11 && b9_43 && b10_13 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54) {
matched = true;
pattern_id = 708;
}
if(b0_35 && b1_21 && b2_21 && b3_29 && b4_14 && b5_47 && b6_35) {
matched = true;
pattern_id = 709;
}
if(b0_35 && b1_21 && b2_21 && b3_29 && b4_14 && b5_47 && b6_35 && b7_62) {
matched = true;
pattern_id = 710;
}
if(b0_35 && b1_21 && b2_21 && b3_29 && b4_7 && b5_7 && b6_46) {
matched = true;
pattern_id = 711;
}
if(b0_35 && b1_21 && b2_21 && b3_40 && b4_35 && b5_26 && b6_7 && b7_45 && b8_47 && b9_28 && b10_28 && b11_37 && b12_25 && b13_40 && b14_24 && b15_41 && b16_25) {
matched = true;
pattern_id = 712;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43) {
matched = true;
pattern_id = 713;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_4 && b18_15 && b19_12 && b20_44 && b21_27 && b22_41 && b23_50 && b24_3 && b25_47) {
matched = true;
pattern_id = 714;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_4 && b18_22 && b19_9 && b20_24 && b21_36 && b22_19 && b23_35 && b24_1 && b25_36 && b26_30 && b27_27) {
matched = true;
pattern_id = 715;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_18 && b18_4 && b19_28 && b20_30 && b21_29) {
matched = true;
pattern_id = 716;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_36 && b18_9 && b19_35 && b20_17 && b21_36 && b22_38 && b23_35 && b24_51 && b25_33 && b26_43 && b27_27) {
matched = true;
pattern_id = 717;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_37 && b18_29 && b19_9 && b20_17 && b21_5 && b22_45 && b23_46 && b24_42) {
matched = true;
pattern_id = 718;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 719;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_47 && b8_6 && b9_43 && b10_1 && b11_74 && b12_62 && b13_73 && b14_59 && b15_38 && b16_7 && b17_38 && b18_1 && b19_6 && b20_1 && b21_59 && b22_13 && b23_2 && b24_38 && b25_6 && b26_31 && b27_36 && b28_1 && b29_25 && b30_49 && b31_10 && b32_38 && b33_11 && b34_16 && b35_35 && b36_9 && b37_21 && b38_23 && b39_31 && b40_14 && b41_30 && b42_3 && b43_4 && b44_17 && b45_3 && b46_4 && b47_8 && b48_3 && b49_30 && b50_25 && b51_21 && b52_10 && b53_29 && b54_28 && b55_32 && b56_20 && b57_24 && b58_21 && b59_27 && b60_2) {
matched = true;
pattern_id = 720;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64) {
matched = true;
pattern_id = 721;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64 && b11_3 && b12_7 && b13_43 && b14_24 && b15_15 && b16_52 && b17_26 && b18_10 && b19_23 && b20_34 && b21_30 && b22_34 && b23_35 && b24_8 && b25_33 && b26_46 && b27_58 && b28_59 && b29_56 && b30_54) {
matched = true;
pattern_id = 722;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52) {
matched = true;
pattern_id = 723;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_35 && b11_3 && b12_16 && b13_16 && b14_20 && b15_40 && b16_29 && b17_55) {
matched = true;
pattern_id = 724;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_40 && b6_59 && b7_39 && b8_34) {
matched = true;
pattern_id = 725;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_44 && b6_56 && b7_53 && b8_49) {
matched = true;
pattern_id = 726;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_26 && b6_10 && b7_32 && b8_6 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 727;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_26 && b6_10 && b7_32 && b8_6 && b9_42 && b10_43 && b11_49 && b12_38 && b13_39) {
matched = true;
pattern_id = 728;
}
if(b0_35 && b1_21 && b2_21 && b3_15 && b4_6 && b5_40 && b6_7 && b7_39 && b8_12) {
matched = true;
pattern_id = 729;
}
if(b0_35 && b1_21 && b2_21 && b3_50 && b4_50 && b5_42 && b6_2 && b7_35 && b8_42 && b9_10) {
matched = true;
pattern_id = 730;
}
if(b0_35 && b1_21 && b2_21 && b3_50 && b4_50 && b5_42 && b6_2 && b7_35 && b8_42 && b9_10 && b10_2 && b11_8 && b12_51 && b13_26) {
matched = true;
pattern_id = 731;
}
if(b0_35 && b1_21 && b2_21 && b3_50 && b4_50 && b5_42 && b6_32 && b7_15 && b8_61 && b9_27 && b10_13) {
matched = true;
pattern_id = 732;
}
if(b0_35 && b1_21 && b2_21 && b3_50 && b4_50 && b5_42 && b6_32 && b7_15 && b8_61 && b9_27 && b10_13 && b11_20 && b12_54 && b13_15 && b14_2) {
matched = true;
pattern_id = 733;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_12 && b5_8 && b6_11 && b7_15 && b8_11 && b9_11 && b10_43 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 734;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_64) {
matched = true;
pattern_id = 735;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54) {
matched = true;
pattern_id = 736;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54 && b8_48 && b9_27 && b10_11 && b11_54 && b12_45 && b13_39 && b14_24 && b15_18 && b16_52) {
matched = true;
pattern_id = 737;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54 && b8_5 && b9_14 && b10_48 && b11_35 && b12_50 && b13_6 && b14_40) {
matched = true;
pattern_id = 738;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54 && b8_5 && b9_14 && b10_46 && b11_49 && b12_17 && b13_38 && b14_17 && b15_48 && b16_25 && b17_26 && b18_10 && b19_9 && b20_41 && b21_36 && b22_37 && b23_35 && b24_31 && b25_18 && b26_58) {
matched = true;
pattern_id = 739;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_46 && b7_11 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22 && b13_27 && b14_51 && b15_57 && b16_57 && b17_55) {
matched = true;
pattern_id = 740;
}
if(b0_35 && b1_21 && b2_21 && b3_8 && b4_17 && b5_11 && b6_55 && b7_10 && b8_35 && b9_20) {
matched = true;
pattern_id = 741;
}
if(b0_35 && b1_21 && b2_20 && b3_43 && b4_46 && b5_52) {
matched = true;
pattern_id = 742;
}
if(b0_35 && b1_21 && b2_50 && b3_56 && b4_55 && b5_51 && b6_20 && b7_11 && b8_5 && b9_11 && b10_13 && b11_29 && b12_16 && b13_6) {
matched = true;
pattern_id = 743;
}
if(b0_35 && b1_21 && b2_50 && b3_40 && b4_15 && b5_11 && b6_11 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 744;
}
if(b0_35 && b1_21 && b2_8 && b3_62 && b4_22 && b5_52 && b6_20 && b7_21 && b8_2) {
matched = true;
pattern_id = 745;
}
if(b0_35 && b1_21 && b2_8 && b3_18 && b4_18 && b5_27 && b6_46 && b7_54 && b8_5 && b9_9 && b10_22 && b11_56 && b12_37 && b13_5 && b14_35 && b15_42 && b16_32 && b17_10 && b18_29 && b19_2) {
matched = true;
pattern_id = 746;
}
if(b0_35 && b1_66 && b2_24 && b3_43 && b4_7 && b5_40 && b6_19 && b7_9 && b8_16 && b9_34) {
matched = true;
pattern_id = 747;
}
if(b0_35 && b1_66 && b2_20 && b3_20 && b4_19 && b5_40 && b6_19 && b7_9 && b8_16 && b9_34) {
matched = true;
pattern_id = 748;
}
if(b0_35 && b1_66 && b2_20 && b3_27 && b4_21 && b5_40 && b6_19 && b7_9 && b8_16 && b9_34) {
matched = true;
pattern_id = 749;
}
if(b0_35 && b1_66 && b2_8 && b3_56 && b4_16 && b5_16 && b6_24 && b7_31 && b8_61 && b9_34 && b10_17 && b11_57 && b12_64 && b13_16 && b14_40 && b15_25 && b16_55 && b17_34 && b18_4 && b19_33) {
matched = true;
pattern_id = 750;
}
if(b0_35 && b1_66 && b2_8 && b3_56 && b4_70 && b5_59 && b6_39 && b7_10 && b8_8 && b9_41 && b10_59) {
matched = true;
pattern_id = 751;
}
if(b0_35 && b1_66 && b2_8 && b3_50 && b4_35 && b5_26 && b6_55 && b7_47 && b8_15) {
matched = true;
pattern_id = 752;
}
if(b0_35 && b1_22 && b2_8 && b3_26 && b4_26 && b5_42 && b6_59 && b7_9) {
matched = true;
pattern_id = 753;
}
if(b0_35 && b1_22 && b2_8 && b3_17) {
matched = true;
pattern_id = 754;
}
if(b0_35 && b1_24 && b2_29 && b3_26 && b4_21 && b5_37 && b6_20 && b7_56 && b8_42 && b9_40 && b10_7 && b11_6 && b12_3 && b13_40 && b14_42 && b15_5 && b16_24) {
matched = true;
pattern_id = 755;
}
if(b0_35 && b1_24 && b2_43 && b3_18 && b4_6 && b5_25 && b6_35 && b7_45 && b8_5 && b9_9 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 756;
}
if(b0_35 && b1_24 && b2_41 && b3_29 && b4_18 && b5_26 && b6_46 && b7_51) {
matched = true;
pattern_id = 757;
}
if(b0_35 && b1_24 && b2_25 && b3_49 && b4_6 && b5_37 && b6_18 && b7_31 && b8_11 && b9_11 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 758;
}
if(b0_35 && b1_24 && b2_25 && b3_27 && b4_12 && b5_25 && b6_23) {
matched = true;
pattern_id = 759;
}
if(b0_35 && b1_24 && b2_14 && b3_48 && b4_17 && b5_11 && b6_10 && b7_12 && b8_15 && b9_5 && b10_7 && b11_37 && b12_4 && b13_36 && b14_35 && b15_38 && b16_29 && b17_47 && b18_10 && b19_34 && b20_3 && b21_5 && b22_37 && b23_35 && b24_31 && b25_18) {
matched = true;
pattern_id = 760;
}
if(b0_35 && b1_24 && b2_14 && b3_48 && b4_17 && b5_11 && b6_10 && b7_12 && b8_15 && b9_34 && b10_26 && b11_28 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 761;
}
if(b0_35 && b1_24 && b2_14 && b3_43 && b4_60 && b5_6 && b6_55 && b7_29 && b8_14 && b9_14 && b10_11 && b11_3 && b12_12 && b13_3 && b14_25 && b15_20 && b16_8) {
matched = true;
pattern_id = 762;
}
if(b0_35 && b1_24 && b2_14 && b3_18 && b4_6 && b5_11 && b6_24 && b7_44 && b8_14 && b9_19 && b10_13 && b11_13 && b12_16 && b13_27 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 763;
}
if(b0_35 && b1_24 && b2_14 && b3_18 && b4_6 && b5_6 && b6_55 && b7_10 && b8_8 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 764;
}
if(b0_35 && b1_24 && b2_14 && b3_18 && b4_6 && b5_8 && b6_7 && b7_32 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 765;
}
if(b0_35 && b1_24 && b2_20 && b3_26 && b4_16 && b5_40 && b6_7 && b7_51 && b8_5 && b9_13 && b10_55 && b11_52 && b12_62 && b13_45 && b14_49 && b15_27 && b16_32 && b17_3 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9 && b25_41 && b26_27 && b27_1 && b28_34 && b29_48 && b30_31 && b31_20 && b32_25 && b33_35 && b34_31 && b35_44 && b36_6 && b37_43 && b38_32 && b39_17 && b40_20 && b41_20 && b42_29 && b43_1 && b44_15) {
matched = true;
pattern_id = 766;
}
if(b0_35 && b1_24 && b2_20 && b3_26 && b4_16 && b5_6 && b6_10 && b7_15 && b8_41 && b9_43 && b10_49) {
matched = true;
pattern_id = 767;
}
if(b0_35 && b1_24 && b2_20 && b3_26 && b4_16 && b5_52 && b6_8 && b7_46 && b8_5 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 768;
}
if(b0_35 && b1_24 && b2_20 && b3_40 && b4_60 && b5_17 && b6_36 && b7_8 && b8_46 && b9_43 && b10_13 && b11_57 && b12_20 && b13_43 && b14_35) {
matched = true;
pattern_id = 769;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_26 && b5_20 && b6_24 && b7_55) {
matched = true;
pattern_id = 770;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18) {
matched = true;
pattern_id = 771;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_51 && b6_56 && b7_14 && b8_8 && b9_55 && b10_11 && b11_57 && b12_38 && b13_22 && b14_24) {
matched = true;
pattern_id = 772;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_20 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47) {
matched = true;
pattern_id = 773;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_20 && b6_2 && b7_2 && b8_35 && b9_28) {
matched = true;
pattern_id = 774;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_20 && b6_2 && b7_2 && b8_35 && b9_28 && b10_64) {
matched = true;
pattern_id = 775;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_20 && b6_2 && b7_21 && b8_11 && b9_45) {
matched = true;
pattern_id = 776;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_44 && b5_20 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_42 && b13_19 && b14_19) {
matched = true;
pattern_id = 777;
}
if(b0_35 && b1_24 && b2_66 && b3_20 && b4_27 && b5_26 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 778;
}
if(b0_35 && b1_35 && b2_29 && b3_49 && b4_59 && b5_25 && b6_54 && b7_31 && b8_47 && b9_40 && b10_6 && b11_27 && b12_12 && b13_50 && b14_36 && b15_35) {
matched = true;
pattern_id = 779;
}
if(b0_35 && b1_35 && b2_10 && b3_22 && b4_45 && b5_3 && b6_48 && b7_26 && b8_12 && b9_48 && b10_32 && b11_27 && b12_7 && b13_21 && b14_13 && b15_50 && b16_40 && b17_31 && b18_11 && b19_4 && b20_51 && b21_23 && b22_14 && b23_20 && b24_14 && b25_15 && b26_28 && b27_33 && b28_34 && b29_18) {
matched = true;
pattern_id = 780;
}
if(b0_35 && b1_35 && b2_43 && b3_48 && b4_26 && b5_20 && b6_24 && b7_55) {
matched = true;
pattern_id = 781;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_40 && b6_21 && b7_14 && b8_55) {
matched = true;
pattern_id = 782;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_3 && b6_35 && b7_54 && b8_5 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 783;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_16 && b6_11 && b7_15 && b8_40 && b9_34) {
matched = true;
pattern_id = 784;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_25 && b6_35 && b7_7 && b8_35 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 785;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_27 && b6_8 && b7_45 && b8_15) {
matched = true;
pattern_id = 786;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_20 && b6_7 && b7_53 && b8_2 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 787;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_55 && b6_35 && b7_10 && b8_49 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 788;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_21 && b6_53 && b7_67 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 789;
}
if(b0_35 && b1_35 && b2_43 && b3_24 && b4_22 && b5_37 && b6_20 && b7_14 && b8_58 && b9_56 && b10_25 && b11_37 && b12_25 && b13_5 && b14_5 && b15_38 && b16_30 && b17_18 && b18_20 && b19_9 && b20_17 && b21_18 && b22_28 && b23_31 && b24_37) {
matched = true;
pattern_id = 790;
}
if(b0_35 && b1_35 && b2_43 && b3_43 && b4_26 && b5_26 && b6_19) {
matched = true;
pattern_id = 791;
}
if(b0_35 && b1_35 && b2_25 && b3_18 && b4_2 && b5_11 && b6_38 && b7_10 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 792;
}
if(b0_35 && b1_35 && b2_14 && b3_43 && b4_12 && b5_8 && b6_34 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 793;
}
if(b0_35 && b1_35 && b2_14 && b3_43 && b4_27 && b5_26 && b6_11 && b7_31 && b8_35 && b9_9 && b10_22 && b11_46 && b12_39 && b13_21 && b14_24 && b15_41 && b16_32 && b17_4 && b18_41 && b19_22) {
matched = true;
pattern_id = 794;
}
if(b0_35 && b1_35 && b2_14 && b3_18 && b4_14 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_56 && b11_29) {
matched = true;
pattern_id = 795;
}
if(b0_35 && b1_35 && b2_18 && b3_15 && b4_22 && b5_10 && b6_38 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 796;
}
if(b0_35 && b1_35 && b2_18 && b3_50 && b4_22 && b5_10 && b6_38 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 797;
}
if(b0_35 && b1_35 && b2_24 && b3_6 && b4_19 && b5_40 && b6_46 && b7_2 && b8_35 && b9_28 && b10_49) {
matched = true;
pattern_id = 798;
}
if(b0_35 && b1_35 && b2_6 && b3_29 && b4_70 && b5_52 && b6_38) {
matched = true;
pattern_id = 799;
}
if(b0_35 && b1_35 && b2_6 && b3_18 && b4_6 && b5_12 && b6_3 && b7_29 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 800;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_35 && b5_25 && b6_3 && b7_14 && b8_9 && b9_48 && b10_28 && b11_5 && b12_50 && b13_36 && b14_28 && b15_36 && b16_49 && b17_34 && b18_41) {
matched = true;
pattern_id = 801;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_59) {
matched = true;
pattern_id = 802;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_59 && b5_11 && b6_10 && b7_9 && b8_11 && b9_17 && b10_49 && b11_3 && b12_16 && b13_55 && b14_20 && b15_50 && b16_44 && b17_21 && b18_55) {
matched = true;
pattern_id = 803;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_59 && b5_47 && b6_14 && b7_11 && b8_40 && b9_56 && b10_11 && b11_40 && b12_17 && b13_38 && b14_55 && b15_32) {
matched = true;
pattern_id = 804;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_50 && b5_25 && b6_7 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 805;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_50 && b5_25 && b6_7 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22) {
matched = true;
pattern_id = 806;
}
if(b0_35 && b1_35 && b2_20 && b3_43 && b4_27 && b5_42 && b6_3 && b7_8 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22) {
matched = true;
pattern_id = 807;
}
if(b0_35 && b1_35 && b2_23 && b3_8 && b4_19 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 808;
}
if(b0_35 && b1_35 && b2_8 && b3_26 && b4_16 && b5_51 && b6_23 && b7_7 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49) {
matched = true;
pattern_id = 809;
}
if(b0_35 && b1_35 && b2_8 && b3_26 && b4_16 && b5_51 && b6_23 && b7_7 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49 && b15_33 && b16_23 && b17_4 && b18_9 && b19_9 && b20_30 && b21_36 && b22_37 && b23_32 && b24_24 && b25_18) {
matched = true;
pattern_id = 810;
}
if(b0_35 && b1_35 && b2_8 && b3_26 && b4_16 && b5_51 && b6_24 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 811;
}
if(b0_35 && b1_35 && b2_8 && b3_21 && b4_18 && b5_51 && b6_23) {
matched = true;
pattern_id = 812;
}
if(b0_35 && b1_35 && b2_62 && b3_15 && b4_12 && b5_54 && b6_20 && b7_31 && b8_41 && b9_55 && b10_43 && b11_46 && b12_4) {
matched = true;
pattern_id = 813;
}
if(b0_35 && b1_35 && b2_62 && b3_24 && b4_6 && b5_16 && b6_34 && b7_11 && b8_36 && b9_48 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 814;
}
if(b0_35 && b1_35 && b2_66 && b3_24 && b4_44 && b5_47 && b6_2 && b7_47 && b8_6 && b9_10 && b10_35 && b11_30) {
matched = true;
pattern_id = 815;
}
if(b0_35 && b1_50 && b2_43 && b3_34 && b4_12 && b5_26 && b6_2 && b7_45 && b8_2 && b9_48) {
matched = true;
pattern_id = 816;
}
if(b0_35 && b1_50 && b2_43 && b3_8 && b4_7 && b5_11 && b6_52 && b7_15 && b8_6 && b9_10 && b10_35 && b11_30 && b12_22) {
matched = true;
pattern_id = 817;
}
if(b0_35 && b1_50 && b2_16 && b3_6 && b4_24 && b5_27 && b6_7 && b7_8 && b8_41 && b9_5 && b10_41 && b11_13 && b12_11 && b13_50 && b14_17 && b15_22 && b16_31 && b17_10 && b18_31 && b19_21 && b20_3 && b21_24 && b22_45 && b23_46 && b24_29 && b25_33 && b26_34 && b27_17 && b28_1 && b29_24 && b30_12 && b31_26 && b32_2 && b33_27 && b34_29) {
matched = true;
pattern_id = 818;
}
if(b0_35 && b1_50 && b2_41 && b3_40 && b4_19 && b5_16 && b6_2 && b7_10 && b8_55 && b9_5) {
matched = true;
pattern_id = 819;
}
if(b0_35 && b1_50 && b2_25 && b3_18 && b4_2 && b5_29 && b6_24 && b7_56 && b8_11 && b9_9 && b10_46 && b11_35 && b12_20 && b13_36 && b14_52 && b15_35 && b16_22 && b17_33 && b18_44 && b19_45 && b20_3 && b21_30 && b22_43) {
matched = true;
pattern_id = 820;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_35) {
matched = true;
pattern_id = 821;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_35 && b5_11 && b6_34 && b7_29 && b8_57 && b9_10 && b10_4 && b11_3 && b12_5 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52) {
matched = true;
pattern_id = 822;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_35 && b5_11 && b6_20 && b7_54 && b8_57 && b9_48 && b10_26 && b11_30 && b12_5 && b13_58 && b14_24 && b15_41 && b16_46 && b17_27 && b18_24 && b19_44 && b20_34 && b21_7 && b22_40 && b23_62) {
matched = true;
pattern_id = 823;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_35 && b5_47 && b6_7 && b7_9 && b8_57 && b9_10 && b10_4 && b11_3 && b12_5 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52) {
matched = true;
pattern_id = 824;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_16 && b5_6 && b6_24 && b7_30) {
matched = true;
pattern_id = 825;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_2 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 826;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_2 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36 && b15_4 && b16_60 && b17_43 && b18_51 && b19_29 && b20_13 && b21_9 && b22_37 && b23_12 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2 && b31_18 && b32_24 && b33_35 && b34_31 && b35_33 && b36_1 && b37_30 && b38_42 && b39_36 && b40_25 && b41_18 && b42_1 && b43_37 && b44_18 && b45_19 && b46_25 && b47_23 && b48_10 && b49_6 && b50_16 && b51_14 && b52_17 && b53_18 && b54_22 && b55_22 && b56_25 && b57_21 && b58_29 && b59_17 && b60_6 && b61_24 && b62_24 && b63_4 && b64_10 && b65_4 && b66_9 && b67_1 && b68_21 && b69_3 && b70_3 && b71_20 && b72_5 && b73_4 && b74_24 && b75_4 && b76_18 && b77_14 && b78_2 && b79_9 && b80_21 && b81_3) {
matched = true;
pattern_id = 827;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_2 && b5_12 && b6_7 && b7_7 && b8_9 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 828;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_50 && b5_26 && b6_7 && b7_8) {
matched = true;
pattern_id = 829;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_50 && b5_26 && b6_7 && b7_8 && b8_18 && b9_60 && b10_35 && b11_46 && b12_36 && b13_5 && b14_19 && b15_36 && b16_32 && b17_28 && b18_18 && b19_44) {
matched = true;
pattern_id = 830;
}
if(b0_35 && b1_50 && b2_20 && b3_18 && b4_27 && b5_47 && b6_55 && b7_31 && b8_34 && b9_42 && b10_58 && b11_35 && b12_36 && b13_39) {
matched = true;
pattern_id = 831;
}
if(b0_35 && b1_50 && b2_20 && b3_8 && b4_12 && b5_37 && b6_3 && b7_52 && b8_5 && b9_14 && b10_56 && b11_37 && b12_5 && b13_60 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 832;
}
if(b0_35 && b1_50 && b2_20 && b3_8 && b4_27 && b5_3 && b6_52 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 833;
}
if(b0_35 && b1_50 && b2_20 && b3_27 && b4_17 && b5_6 && b6_34 && b7_11 && b8_8 && b9_56 && b10_26 && b11_27 && b12_52 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52 && b18_32 && b19_2 && b20_28 && b21_24 && b22_28 && b23_31 && b24_37 && b25_1 && b26_32 && b27_16 && b28_40 && b29_35 && b30_24 && b31_33 && b32_52) {
matched = true;
pattern_id = 834;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_46 && b5_6 && b6_59 && b7_47 && b8_34 && b9_6 && b10_26 && b11_40 && b12_16 && b13_30 && b14_20 && b15_41 && b16_18 && b17_29 && b18_9 && b19_44 && b20_25 && b21_38 && b22_27) {
matched = true;
pattern_id = 835;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_46 && b5_27 && b6_8 && b7_11 && b8_34 && b9_34 && b10_26 && b11_5 && b12_4 && b13_40 && b14_36 && b15_15) {
matched = true;
pattern_id = 836;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_46 && b5_52 && b6_39 && b7_35 && b8_34 && b9_49 && b10_11 && b11_54 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 837;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_46 && b5_42 && b6_7 && b7_7 && b8_35 && b9_44 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 838;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_7 && b5_12 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 839;
}
if(b0_35 && b1_50 && b2_8 && b3_67 && b4_18 && b5_20 && b6_8 && b7_46 && b8_5 && b9_14 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 840;
}
if(b0_35 && b1_50 && b2_8 && b3_15 && b4_27 && b5_26 && b6_20 && b7_14 && b8_58 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 841;
}
if(b0_35 && b1_50 && b2_8 && b3_8 && b4_12 && b5_25 && b6_7 && b7_39 && b8_5 && b9_10 && b10_4 && b11_33 && b12_12 && b13_43 && b14_51 && b15_5) {
matched = true;
pattern_id = 842;
}
if(b0_35 && b1_50 && b2_3 && b3_18 && b4_62 && b5_20 && b6_36 && b7_26 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 843;
}
if(b0_35 && b1_8 && b2_42 && b3_60 && b4_12 && b5_51 && b6_11 && b7_7 && b8_48 && b9_49 && b10_12 && b11_47 && b12_12 && b13_6 && b14_37 && b15_5 && b16_13) {
matched = true;
pattern_id = 844;
}
if(b0_35 && b1_8 && b2_49 && b3_49 && b4_12 && b5_8 && b6_24 && b7_56 && b8_7 && b9_5 && b10_54 && b11_14 && b12_41 && b13_20) {
matched = true;
pattern_id = 845;
}
if(b0_35 && b1_8 && b2_49 && b3_49 && b4_27 && b5_51 && b6_7 && b7_7 && b8_41 && b9_27 && b10_12 && b11_13 && b12_18 && b13_53 && b14_24 && b15_38 && b16_49 && b17_47 && b18_46 && b19_30 && b20_50 && b21_43 && b22_45 && b23_28 && b24_4 && b25_34 && b26_43 && b27_16 && b28_21 && b29_32 && b30_19) {
matched = true;
pattern_id = 846;
}
if(b0_35 && b1_8 && b2_49 && b3_49 && b4_27 && b5_51 && b6_7 && b7_7 && b8_41 && b9_27 && b10_12 && b11_13 && b12_18 && b13_53 && b14_24 && b15_38 && b16_49 && b17_47 && b18_46 && b19_30 && b20_50 && b21_43 && b22_45 && b23_28 && b24_4 && b25_34 && b26_43 && b27_16 && b28_21 && b29_32 && b30_19 && b31_33) {
matched = true;
pattern_id = 847;
}
if(b0_35 && b1_8 && b2_21 && b3_20 && b4_12 && b5_59 && b6_39 && b7_10 && b8_2 && b9_10 && b10_17 && b11_27 && b12_39 && b13_40 && b14_38 && b15_16 && b16_39) {
matched = true;
pattern_id = 848;
}
if(b0_35 && b1_8 && b2_50 && b3_20 && b4_44 && b5_51 && b6_18 && b7_46 && b8_8 && b9_44 && b10_11 && b11_40 && b12_17 && b13_38 && b14_55 && b15_32) {
matched = true;
pattern_id = 849;
}
if(b0_35 && b1_8 && b2_50 && b3_8 && b4_27 && b5_20 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64) {
matched = true;
pattern_id = 850;
}
if(b0_35 && b1_8 && b2_50 && b3_8 && b4_27 && b5_10 && b6_55 && b7_7 && b8_57 && b9_48 && b10_6 && b11_23 && b12_7 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 851;
}
if(b0_35 && b1_8 && b2_23 && b3_21 && b4_12 && b5_8 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 852;
}
if(b0_35 && b1_8 && b2_23 && b3_21 && b4_12 && b5_8 && b6_24 && b7_44 && b8_41 && b9_25 && b10_17 && b11_47 && b12_24 && b13_16 && b14_34 && b15_25 && b16_43 && b17_37) {
matched = true;
pattern_id = 853;
}
if(b0_35 && b1_8 && b2_23 && b3_21 && b4_12 && b5_8 && b6_24 && b7_44 && b8_11 && b9_28 && b10_5 && b11_6 && b12_20 && b13_38 && b14_34 && b15_25 && b16_43 && b17_37) {
matched = true;
pattern_id = 854;
}
if(b0_35 && b1_8 && b2_23 && b3_21 && b4_12 && b5_8 && b6_24 && b7_44 && b8_14 && b9_14 && b10_7 && b11_3 && b12_20 && b13_16 && b14_34 && b15_25 && b16_43 && b17_37) {
matched = true;
pattern_id = 855;
}
if(b0_35 && b1_8 && b2_52 && b3_11 && b4_17 && b5_3 && b6_20 && b7_14 && b8_49 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 856;
}
if(b0_35 && b1_8 && b2_17 && b3_18 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15) {
matched = true;
pattern_id = 857;
}
if(b0_35 && b1_13 && b2_47 && b3_43 && b4_12 && b5_21 && b6_24 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 858;
}
if(b0_35 && b1_13 && b2_60 && b3_26 && b4_2 && b5_7 && b6_59 && b7_62 && b8_40 && b9_14 && b10_7 && b11_29) {
matched = true;
pattern_id = 859;
}
if(b0_35 && b1_13 && b2_43 && b3_40 && b4_60 && b5_11 && b6_38 && b7_10 && b8_2 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 860;
}
if(b0_35 && b1_13 && b2_43 && b3_16 && b4_12 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 861;
}
if(b0_35 && b1_13 && b2_43 && b3_16 && b4_12 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 862;
}
if(b0_35 && b1_13 && b2_43 && b3_16 && b4_12 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_44 && b12_50 && b13_38 && b14_12 && b15_48 && b16_46 && b17_44 && b18_36 && b19_9 && b20_30 && b21_41 && b22_4) {
matched = true;
pattern_id = 863;
}
if(b0_35 && b1_13 && b2_43 && b3_16 && b4_12 && b5_25 && b6_3 && b7_46 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 864;
}
if(b0_35 && b1_13 && b2_43 && b3_24 && b4_2 && b5_43 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 865;
}
if(b0_35 && b1_13 && b2_43 && b3_20 && b4_2 && b5_6 && b6_54 && b7_51 && b8_16 && b9_34 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 866;
}
if(b0_35 && b1_13 && b2_43 && b3_20 && b4_6 && b5_20 && b6_7 && b7_8 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 867;
}
if(b0_35 && b1_13 && b2_43 && b3_18 && b4_2 && b5_21 && b6_34 && b7_15 && b8_40 && b9_25 && b10_5 && b11_17) {
matched = true;
pattern_id = 868;
}
if(b0_35 && b1_13 && b2_43 && b3_18 && b4_2 && b5_21 && b6_3 && b7_8 && b8_47 && b9_42 && b10_43 && b11_49 && b12_38 && b13_40 && b14_25 && b15_20 && b16_16) {
matched = true;
pattern_id = 869;
}
if(b0_35 && b1_13 && b2_42 && b3_18 && b4_12 && b5_8 && b6_22 && b7_10 && b8_8 && b9_20 && b10_5 && b11_28 && b12_16 && b13_5 && b14_35 && b15_34 && b16_29 && b17_18 && b18_18 && b19_42 && b20_37 && b21_15) {
matched = true;
pattern_id = 870;
}
if(b0_35 && b1_13 && b2_16 && b3_26 && b4_16 && b5_27 && b6_35 && b7_45 && b8_15 && b9_34 && b10_6 && b11_49 && b12_38 && b13_22 && b14_34 && b15_33 && b16_2 && b17_34) {
matched = true;
pattern_id = 871;
}
if(b0_35 && b1_13 && b2_25 && b3_20 && b4_22 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 872;
}
if(b0_35 && b1_13 && b2_25 && b3_20 && b4_22 && b5_40 && b6_7 && b7_51 && b8_5 && b9_52) {
matched = true;
pattern_id = 873;
}
if(b0_35 && b1_13 && b2_25 && b3_20 && b4_22 && b5_64) {
matched = true;
pattern_id = 874;
}
if(b0_35 && b1_13 && b2_25 && b3_20 && b4_22 && b5_26 && b6_19 && b7_14 && b8_40 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 875;
}
if(b0_35 && b1_13 && b2_49 && b3_21 && b4_27 && b5_26 && b6_46 && b7_31 && b8_34 && b9_41 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 876;
}
if(b0_35 && b1_13 && b2_49 && b3_21 && b4_27 && b5_26 && b6_46 && b7_31 && b8_34 && b9_41 && b10_48 && b11_47 && b12_36 && b13_27 && b14_40) {
matched = true;
pattern_id = 877;
}
if(b0_35 && b1_13 && b2_12 && b3_50 && b4_24 && b5_11 && b6_35 && b7_54 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 878;
}
if(b0_35 && b1_13 && b2_15 && b3_49) {
matched = true;
pattern_id = 879;
}
if(b0_35 && b1_13 && b2_15 && b3_15 && b4_22 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_48 && b11_26 && b12_39 && b13_18) {
matched = true;
pattern_id = 880;
}
if(b0_35 && b1_13 && b2_15 && b3_15 && b4_22 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_46 && b11_46 && b12_39 && b13_21 && b14_24 && b15_41 && b16_32 && b17_10 && b18_29 && b19_2) {
matched = true;
pattern_id = 881;
}
if(b0_35 && b1_13 && b2_15 && b3_6 && b4_6 && b5_10 && b6_50 && b7_11 && b8_61 && b9_14 && b10_28 && b11_23 && b12_60 && b13_52 && b14_40 && b15_50 && b16_2 && b17_29 && b18_22 && b19_33) {
matched = true;
pattern_id = 882;
}
if(b0_35 && b1_13 && b2_15 && b3_50 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 883;
}
if(b0_35 && b1_13 && b2_15 && b3_50 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 884;
}
if(b0_35 && b1_13 && b2_15 && b3_50 && b4_6 && b5_6 && b6_24 && b7_9 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 885;
}
if(b0_35 && b1_13 && b2_14 && b3_40 && b4_2 && b5_30 && b6_54 && b7_52 && b8_35 && b9_49 && b10_46 && b11_47 && b12_3 && b13_37 && b14_49 && b15_1 && b16_4 && b17_38 && b18_10 && b19_12 && b20_44) {
matched = true;
pattern_id = 886;
}
if(b0_35 && b1_13 && b2_14 && b3_21 && b4_35 && b5_52 && b6_35 && b7_29 && b8_48 && b9_10 && b10_47 && b11_40) {
matched = true;
pattern_id = 887;
}
if(b0_35 && b1_13 && b2_14 && b3_43 && b4_19 && b5_40 && b6_8 && b7_7 && b8_6 && b9_45 && b10_64 && b11_46 && b12_18 && b13_38 && b14_24 && b15_30 && b16_22 && b17_55) {
matched = true;
pattern_id = 888;
}
if(b0_35 && b1_13 && b2_14 && b3_43 && b4_19 && b5_40 && b6_8 && b7_7 && b8_40) {
matched = true;
pattern_id = 889;
}
if(b0_35 && b1_13 && b2_14 && b3_43 && b4_19 && b5_40 && b6_19 && b7_9 && b8_16 && b9_34 && b10_64 && b11_23 && b12_19) {
matched = true;
pattern_id = 890;
}
if(b0_35 && b1_13 && b2_14 && b3_43 && b4_19 && b5_64 && b6_57 && b7_21 && b8_5 && b9_14 && b10_34 && b11_29) {
matched = true;
pattern_id = 891;
}
if(b0_35 && b1_13 && b2_14 && b3_46 && b4_21 && b5_16 && b6_10 && b7_70 && b8_22 && b9_20 && b10_50 && b11_6 && b12_55 && b13_58 && b14_25 && b15_30 && b16_37 && b17_26 && b18_15 && b19_17 && b20_27 && b21_2 && b22_37 && b23_3 && b24_32 && b25_35 && b26_45) {
matched = true;
pattern_id = 892;
}
if(b0_35 && b1_13 && b2_24 && b3_18 && b4_35 && b5_52 && b6_3 && b7_8 && b8_35 && b9_27 && b10_49 && b11_13 && b12_47 && b13_44 && b14_58 && b15_23 && b16_21 && b17_45 && b18_44 && b19_50 && b20_14 && b21_11 && b22_23) {
matched = true;
pattern_id = 893;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_19 && b5_16 && b6_55 && b7_7 && b8_15 && b9_48 && b10_4 && b11_46 && b12_7 && b13_5 && b14_39 && b15_30 && b16_3 && b17_57 && b18_28 && b19_41 && b20_25 && b21_5 && b22_27 && b23_35 && b24_32 && b25_20 && b26_30 && b27_36 && b28_23 && b29_25 && b30_19 && b31_21 && b32_20 && b33_12 && b34_36 && b35_18 && b36_12) {
matched = true;
pattern_id = 894;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_19 && b5_16 && b6_55 && b7_7 && b8_15 && b9_48 && b10_4 && b11_46 && b12_7 && b13_5 && b14_39 && b15_30 && b16_3 && b17_57 && b18_28 && b19_41 && b20_25 && b21_5 && b22_27 && b23_35 && b24_32 && b25_20 && b26_19 && b27_33 && b28_21 && b29_30 && b30_22 && b31_36 && b32_23 && b33_22) {
matched = true;
pattern_id = 895;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_19 && b5_16 && b6_55 && b7_7 && b8_15 && b9_25 && b10_5 && b11_64 && b12_39 && b13_60 && b14_12 && b15_38 && b16_2 && b17_4 && b18_22 && b19_22 && b20_34 && b21_36 && b22_4 && b23_28 && b24_3 && b25_3 && b26_19 && b27_10 && b28_1 && b29_30 && b30_36 && b31_29 && b32_36 && b33_31 && b34_16 && b35_32 && b36_24 && b37_30 && b38_22) {
matched = true;
pattern_id = 896;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_19 && b5_16 && b6_55 && b7_7 && b8_15 && b9_25 && b10_5 && b11_64 && b12_55 && b13_61 && b14_20 && b15_38 && b16_2 && b17_4 && b18_22 && b19_22 && b20_34 && b21_36 && b22_4 && b23_26 && b24_3 && b25_44 && b26_35 && b27_3 && b28_21 && b29_35 && b30_35 && b31_37 && b32_31 && b33_2 && b34_22 && b35_18 && b36_23 && b37_29 && b38_27 && b39_15 && b40_20 && b41_16 && b42_10 && b43_23 && b44_23 && b45_8 && b46_10 && b47_18 && b48_8 && b49_8 && b50_13 && b51_6 && b52_9 && b53_10 && b54_6 && b55_11 && b56_8 && b57_6 && b58_8) {
matched = true;
pattern_id = 897;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_2 && b5_27 && b6_8 && b7_11 && b8_34) {
matched = true;
pattern_id = 898;
}
if(b0_35 && b1_13 && b2_20 && b3_24 && b4_22 && b5_37 && b6_24 && b7_7 && b8_11 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 899;
}
if(b0_35 && b1_13 && b2_20 && b3_24 && b4_22 && b5_16 && b6_11 && b7_44 && b8_56 && b9_6 && b10_49 && b11_30 && b12_49 && b13_28 && b14_25 && b15_48 && b16_34 && b17_20 && b18_45 && b19_46 && b20_46 && b21_41 && b22_37 && b23_2 && b24_25 && b25_19 && b26_39 && b27_18) {
matched = true;
pattern_id = 900;
}
if(b0_35 && b1_13 && b2_20 && b3_50 && b4_60 && b5_2 && b6_16 && b7_44 && b8_40 && b9_6 && b10_5 && b11_37 && b12_12 && b13_3 && b14_25 && b15_20 && b16_8) {
matched = true;
pattern_id = 901;
}
if(b0_35 && b1_13 && b2_20 && b3_50 && b4_7 && b5_2 && b6_10 && b7_44 && b8_40 && b9_6 && b10_5 && b11_37 && b12_12 && b13_3 && b14_25 && b15_20 && b16_8) {
matched = true;
pattern_id = 902;
}
if(b0_35 && b1_13 && b2_20 && b3_50 && b4_50 && b5_52 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 903;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6) {
matched = true;
pattern_id = 904;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_43 && b6_57 && b7_21 && b8_5 && b9_14 && b10_34) {
matched = true;
pattern_id = 905;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_40 && b6_8 && b7_7 && b8_40 && b9_45 && b10_64 && b11_59 && b12_26 && b13_4 && b14_55 && b15_20 && b16_38 && b17_12 && b18_60) {
matched = true;
pattern_id = 906;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52) {
matched = true;
pattern_id = 907;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_30 && b6_7 && b7_32 && b8_6 && b9_6) {
matched = true;
pattern_id = 908;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_38 && b6_32 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 909;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_38 && b6_32 && b7_15 && b8_5 && b9_45 && b10_17 && b11_20 && b12_54 && b13_15 && b14_2) {
matched = true;
pattern_id = 910;
}
if(b0_35 && b1_13 && b2_50 && b3_21 && b4_2 && b5_51 && b6_38 && b7_11 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 911;
}
if(b0_35 && b1_13 && b2_23 && b3_15 && b4_3 && b5_42 && b6_7 && b7_45 && b8_54) {
matched = true;
pattern_id = 912;
}
if(b0_35 && b1_13 && b2_23 && b3_15 && b4_3 && b5_42 && b6_18 && b7_31 && b8_11 && b9_34 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 913;
}
if(b0_35 && b1_13 && b2_23 && b3_15 && b4_11 && b5_27 && b6_24 && b7_46 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 914;
}
if(b0_35 && b1_13 && b2_23 && b3_24 && b4_35 && b5_6 && b6_20 && b7_15 && b8_6 && b9_10 && b10_35 && b11_30) {
matched = true;
pattern_id = 915;
}
if(b0_35 && b1_13 && b2_23 && b3_6 && b4_14 && b5_6 && b6_24 && b7_7 && b8_57 && b9_50 && b10_9 && b11_49 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 916;
}
if(b0_35 && b1_13 && b2_23 && b3_6 && b4_14 && b5_6 && b6_24 && b7_7 && b8_11 && b9_10 && b10_48 && b11_35 && b12_25) {
matched = true;
pattern_id = 917;
}
if(b0_35 && b1_13 && b2_23 && b3_6 && b4_16 && b5_29 && b6_36 && b7_9 && b8_2 && b9_20 && b10_25 && b11_37 && b12_25 && b13_5 && b14_48 && b15_30 && b16_3 && b17_47 && b18_4 && b19_21) {
matched = true;
pattern_id = 918;
}
if(b0_35 && b1_13 && b2_23 && b3_6 && b4_60 && b5_30) {
matched = true;
pattern_id = 919;
}
if(b0_35 && b1_13 && b2_8 && b3_21 && b4_44 && b5_51 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 920;
}
if(b0_35 && b1_13 && b2_8 && b3_7 && b4_3 && b5_11 && b6_18 && b7_11 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 921;
}
if(b0_35 && b1_13 && b2_62 && b3_48 && b4_22 && b5_16 && b6_36 && b7_30 && b8_5 && b9_41 && b10_22 && b11_2 && b12_65 && b13_73 && b14_44 && b15_19 && b16_11 && b17_3 && b18_18 && b19_18 && b20_9 && b21_1 && b22_49 && b23_8 && b24_15 && b25_17 && b26_11 && b27_57 && b28_1 && b29_30 && b30_18 && b31_50 && b32_16 && b33_32 && b34_24 && b35_22 && b36_15 && b37_47 && b38_25 && b39_44 && b40_26 && b41_25 && b42_10 && b43_44 && b44_4 && b45_12 && b46_15 && b47_9 && b48_4 && b49_28 && b50_12 && b51_4 && b52_26 && b53_17 && b54_25 && b55_29 && b56_15 && b57_6 && b58_28 && b59_6) {
matched = true;
pattern_id = 922;
}
if(b0_35 && b1_13 && b2_62 && b3_48 && b4_22 && b5_16 && b6_24 && b7_2 && b8_5 && b9_14 && b10_22 && b11_5 && b12_5 && b13_43 && b14_35 && b15_22 && b16_41 && b17_38 && b18_31 && b19_17 && b20_27) {
matched = true;
pattern_id = 923;
}
if(b0_35 && b1_13 && b2_62 && b3_20 && b4_14 && b5_7 && b6_8 && b7_7 && b8_5 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_20 && b15_17) {
matched = true;
pattern_id = 924;
}
if(b0_35 && b1_69 && b2_62 && b3_11 && b4_17 && b5_17 && b6_61 && b7_39 && b8_2 && b9_9 && b10_29 && b11_57 && b12_12) {
matched = true;
pattern_id = 925;
}
if(b0_35 && b1_69 && b2_62 && b3_11 && b4_17 && b5_17 && b6_61 && b7_52 && b8_5 && b9_14 && b10_11 && b11_37 && b12_26 && b13_22 && b14_19) {
matched = true;
pattern_id = 926;
}
if(b0_35 && b1_69 && b2_62 && b3_15 && b4_14 && b5_57 && b6_37 && b7_8 && b8_5 && b9_43 && b10_49 && b11_33 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 927;
}
if(b0_35 && b1_69 && b2_62 && b3_15 && b4_14 && b5_57 && b6_24 && b7_9 && b8_14 && b9_14 && b10_17 && b11_57 && b12_18 && b13_53 && b14_24) {
matched = true;
pattern_id = 928;
}
if(b0_35 && b1_69 && b2_62 && b3_15 && b4_60 && b5_26 && b6_11 && b7_14 && b8_8 && b9_5 && b10_48 && b11_47 && b12_52 && b13_53) {
matched = true;
pattern_id = 929;
}
if(b0_35 && b1_16 && b2_27 && b3_46 && b4_7 && b5_8 && b6_23 && b7_8 && b8_22 && b9_45 && b10_17 && b11_57 && b12_50 && b13_38 && b14_12 && b15_15) {
matched = true;
pattern_id = 930;
}
if(b0_35 && b1_16 && b2_43 && b3_43 && b4_16 && b5_10 && b6_18 && b7_24 && b8_23 && b9_1 && b10_47 && b11_8 && b12_58 && b13_2 && b14_34 && b15_75 && b16_16 && b17_33 && b18_48 && b19_39 && b20_26) {
matched = true;
pattern_id = 931;
}
if(b0_35 && b1_16 && b2_25 && b3_56) {
matched = true;
pattern_id = 932;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_40 && b6_46 && b7_2 && b8_40 && b9_57) {
matched = true;
pattern_id = 933;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_30 && b6_24 && b7_53 && b8_36 && b9_20 && b10_11 && b11_3 && b12_17 && b13_4 && b14_38 && b15_44 && b16_28 && b17_18 && b18_15 && b19_42 && b20_35 && b21_35 && b22_3 && b23_57 && b24_3 && b25_3 && b26_41 && b27_31 && b28_30 && b29_23 && b30_37 && b31_28 && b32_31) {
matched = true;
pattern_id = 934;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_37 && b6_21 && b7_14 && b8_47 && b9_41 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 935;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_27 && b6_8 && b7_11 && b8_34 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 936;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_27 && b6_7 && b7_15 && b8_5 && b9_28 && b10_49) {
matched = true;
pattern_id = 937;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_27 && b6_24 && b7_46 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 938;
}
if(b0_35 && b1_16 && b2_25 && b3_48 && b4_44 && b5_42 && b6_24 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 939;
}
if(b0_35 && b1_16 && b2_25 && b3_21 && b4_27 && b5_8 && b6_7 && b7_32 && b8_35) {
matched = true;
pattern_id = 940;
}
if(b0_35 && b1_16 && b2_25 && b3_21 && b4_27 && b5_8 && b6_7 && b7_32 && b8_35 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 941;
}
if(b0_35 && b1_16 && b2_25 && b3_16 && b4_27 && b5_26 && b6_11 && b7_10 && b8_8 && b9_42 && b10_28 && b11_5 && b12_32) {
matched = true;
pattern_id = 942;
}
if(b0_35 && b1_16 && b2_25 && b3_16 && b4_27 && b5_26 && b6_11 && b7_10 && b8_8 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 943;
}
if(b0_35 && b1_16 && b2_25 && b3_16 && b4_27 && b5_26 && b6_11 && b7_10 && b8_8 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 944;
}
if(b0_35 && b1_16 && b2_25 && b3_50 && b4_44 && b5_8 && b6_11 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14) {
matched = true;
pattern_id = 945;
}
if(b0_35 && b1_16 && b2_25 && b3_50 && b4_44 && b5_8 && b6_11 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_24 && b13_5 && b14_57 && b15_17) {
matched = true;
pattern_id = 946;
}
if(b0_35 && b1_16 && b2_25 && b3_18 && b4_12 && b5_42 && b6_46 && b7_31 && b8_2 && b9_9) {
matched = true;
pattern_id = 947;
}
if(b0_35 && b1_16 && b2_25 && b3_18 && b4_7 && b5_10 && b6_55 && b7_29 && b8_5 && b9_14 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 948;
}
if(b0_35 && b1_16 && b2_12 && b3_7 && b4_12 && b5_26 && b6_11 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 949;
}
if(b0_35 && b1_16 && b2_18 && b3_18 && b4_15) {
matched = true;
pattern_id = 950;
}
if(b0_35 && b1_16 && b2_20 && b3_48 && b4_44 && b5_42 && b6_2 && b7_9 && b8_55 && b9_10) {
matched = true;
pattern_id = 951;
}
if(b0_35 && b1_16 && b2_20 && b3_48 && b4_44 && b5_42 && b6_24 && b7_15 && b8_35 && b9_45 && b10_13) {
matched = true;
pattern_id = 952;
}
if(b0_35 && b1_16 && b2_20 && b3_6 && b4_6 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 953;
}
if(b0_35 && b1_16 && b2_50 && b3_55 && b4_11 && b5_45) {
matched = true;
pattern_id = 954;
}
if(b0_35 && b1_16 && b2_50 && b3_40 && b4_46 && b5_20 && b6_20 && b7_14 && b8_58 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 955;
}
if(b0_35 && b1_16 && b2_50 && b3_40 && b4_46 && b5_26 && b6_18 && b7_35 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 956;
}
if(b0_35 && b1_16 && b2_50 && b3_34 && b4_59 && b5_59 && b6_39 && b7_10 && b8_8 && b9_41) {
matched = true;
pattern_id = 957;
}
if(b0_35 && b1_16 && b2_8 && b3_17) {
matched = true;
pattern_id = 958;
}
if(b0_35 && b1_16 && b2_8 && b3_18 && b4_35 && b5_3 && b6_7 && b7_10 && b8_47 && b9_20 && b10_11 && b11_40 && b12_20 && b13_5 && b14_20 && b15_20) {
matched = true;
pattern_id = 959;
}
if(b0_35 && b1_16 && b2_17 && b3_40 && b4_19 && b5_16 && b6_40 && b7_4) {
matched = true;
pattern_id = 960;
}
if(b0_35 && b1_16 && b2_17 && b3_2 && b4_31 && b5_26 && b6_19 && b7_10 && b8_34 && b9_34 && b10_48 && b11_35 && b12_25) {
matched = true;
pattern_id = 961;
}
if(b0_35 && b1_52 && b2_60 && b3_40 && b4_19 && b5_16) {
matched = true;
pattern_id = 962;
}
if(b0_35 && b1_52 && b2_29 && b3_55 && b4_60 && b5_45) {
matched = true;
pattern_id = 963;
}
if(b0_35 && b1_52 && b2_43 && b3_34 && b4_7 && b5_25 && b6_7 && b7_7 && b8_15 && b9_49 && b10_11 && b11_46 && b12_32 && b13_27 && b14_49 && b15_32 && b16_3 && b17_4 && b18_37 && b19_44 && b20_48 && b21_36 && b22_14) {
matched = true;
pattern_id = 964;
}
if(b0_35 && b1_52 && b2_43 && b3_34 && b4_7 && b5_25 && b6_7 && b7_7 && b8_15 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_38 && b16_45 && b17_35 && b18_4 && b19_21 && b20_49 && b21_7 && b22_27 && b23_28 && b24_25 && b25_28 && b26_19 && b27_23) {
matched = true;
pattern_id = 965;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_13) {
matched = true;
pattern_id = 966;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_36 && b10_37 && b11_53 && b12_7 && b13_43 && b14_24 && b15_15 && b16_32 && b17_29 && b18_30 && b19_9) {
matched = true;
pattern_id = 967;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_39 && b10_5 && b11_46 && b12_39 && b13_21 && b14_38 && b15_40 && b16_24 && b17_38 && b18_4 && b19_39 && b20_2) {
matched = true;
pattern_id = 968;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_17 && b10_6 && b11_27 && b12_41 && b13_5 && b14_35 && b15_25 && b16_32 && b17_13 && b18_32 && b19_41) {
matched = true;
pattern_id = 969;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_17 && b10_5 && b11_5 && b12_50 && b13_36 && b14_5 && b15_25 && b16_32 && b17_47 && b18_36 && b19_32) {
matched = true;
pattern_id = 970;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_49 && b10_26 && b11_5 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_38 && b19_42 && b20_27 && b21_5 && b22_37 && b23_3 && b24_32 && b25_27) {
matched = true;
pattern_id = 971;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_49 && b10_26 && b11_5 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_20 && b19_9 && b20_44 && b21_14 && b22_38 && b23_25 && b24_32 && b25_31 && b26_37 && b27_19 && b28_29) {
matched = true;
pattern_id = 972;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_49 && b10_26 && b11_5 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_10 && b19_41 && b20_33 && b21_18 && b22_18 && b23_25 && b24_8 && b25_9 && b26_37 && b27_19 && b28_30 && b29_24 && b30_23 && b31_24 && b32_27 && b33_20) {
matched = true;
pattern_id = 973;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_43 && b10_17 && b11_23 && b12_25) {
matched = true;
pattern_id = 974;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_43 && b10_6 && b11_5 && b12_4 && b13_27 && b14_28 && b15_16 && b16_30 && b17_38 && b18_32 && b19_41 && b20_34) {
matched = true;
pattern_id = 975;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_43 && b10_4 && b11_6 && b12_45 && b13_47 && b14_49 && b15_21 && b16_14 && b17_34 && b18_22 && b19_31 && b20_43 && b21_37 && b22_37 && b23_26 && b24_8 && b25_23) {
matched = true;
pattern_id = 976;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_14 && b10_17 && b11_35 && b12_26 && b13_16 && b14_25 && b15_36 && b16_5 && b17_36 && b18_19) {
matched = true;
pattern_id = 977;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_9 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11) {
matched = true;
pattern_id = 978;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_9 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_4 && b18_9 && b19_17 && b20_35 && b21_29 && b22_22 && b23_28 && b24_33 && b25_31 && b26_35 && b27_17 && b28_28) {
matched = true;
pattern_id = 979;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_9 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_47 && b18_4 && b19_34 && b20_24 && b21_27 && b22_28 && b23_24 && b24_25 && b25_1 && b26_36 && b27_3) {
matched = true;
pattern_id = 980;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_9 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_36 && b18_4 && b19_35 && b20_17 && b21_35 && b22_11 && b23_39 && b24_34 && b25_33 && b26_22 && b27_28 && b28_18 && b29_25 && b30_15 && b31_26 && b32_25 && b33_23 && b34_24) {
matched = true;
pattern_id = 981;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_10 && b10_6 && b11_6 && b12_25 && b13_16 && b14_49 && b15_40 && b16_29 && b17_37 && b18_20 && b19_21 && b20_46 && b21_10 && b22_37 && b23_18 && b24_30 && b25_33) {
matched = true;
pattern_id = 982;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_10 && b10_6 && b11_6 && b12_25 && b13_16 && b14_49 && b15_41 && b16_29 && b17_46 && b18_20 && b19_41 && b20_41 && b21_18 && b22_19 && b23_37 && b24_3) {
matched = true;
pattern_id = 983;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_19 && b10_5 && b11_30 && b12_26 && b13_43 && b14_51 && b15_41 && b16_32 && b17_10 && b18_29 && b19_2) {
matched = true;
pattern_id = 984;
}
if(b0_35 && b1_52 && b2_41 && b3_48 && b4_2 && b5_6 && b6_8 && b7_8 && b8_41 && b9_25 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 985;
}
if(b0_35 && b1_52 && b2_25 && b3_56 && b4_19 && b5_11 && b6_11 && b7_10 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 986;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19) {
matched = true;
pattern_id = 987;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 988;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_41 && b9_12 && b10_26 && b11_14) {
matched = true;
pattern_id = 989;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 990;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 991;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_40 && b9_34) {
matched = true;
pattern_id = 992;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_54 && b9_10 && b10_11) {
matched = true;
pattern_id = 993;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_49 && b8_30 && b9_42 && b10_56 && b11_40 && b12_16) {
matched = true;
pattern_id = 994;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_62 && b8_61 && b9_10 && b10_12 && b11_43 && b12_19) {
matched = true;
pattern_id = 995;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_62 && b8_69 && b9_29) {
matched = true;
pattern_id = 996;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_62 && b8_69 && b9_29 && b10_37 && b11_6 && b12_26 && b13_53 && b14_18 && b15_3 && b16_69 && b17_33 && b18_15 && b19_33 && b20_67 && b21_49 && b22_22 && b23_45 && b24_21 && b25_64 && b26_28 && b27_36 && b28_34 && b29_21 && b30_57) {
matched = true;
pattern_id = 997;
}
if(b0_35 && b1_52 && b2_25 && b3_40 && b4_44 && b5_20 && b6_34 && b7_44 && b8_58 && b9_27 && b10_35 && b11_3 && b12_66 && b13_40 && b14_24 && b15_41 && b16_46) {
matched = true;
pattern_id = 998;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_16 && b5_3 && b6_3 && b7_8 && b8_16 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 999;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_16 && b5_27 && b6_8 && b7_11 && b8_34 && b9_42 && b10_43 && b11_59 && b12_7) {
matched = true;
pattern_id = 1000;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_16 && b5_27 && b6_7 && b7_7 && b8_2 && b9_27 && b10_38 && b11_3 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1001;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_16 && b5_42 && b6_7 && b7_39 && b8_40 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 1002;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_2 && b5_6 && b6_46 && b7_14 && b8_2 && b9_10 && b10_48 && b11_3 && b12_45 && b13_5) {
matched = true;
pattern_id = 1003;
}
if(b0_35 && b1_52 && b2_25 && b3_6 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_19 && b10_11 && b11_3 && b12_20 && b13_22 && b14_20 && b15_20 && b16_29 && b17_55 && b18_67 && b19_13 && b20_42 && b21_17 && b22_61 && b23_41 && b24_5 && b25_59 && b26_57 && b27_24 && b28_31 && b29_19 && b30_21 && b31_2 && b32_20 && b33_52 && b34_17 && b35_18 && b36_13) {
matched = true;
pattern_id = 1004;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_6 && b6_10 && b7_63 && b8_11 && b9_11 && b10_25 && b11_6) {
matched = true;
pattern_id = 1005;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_6 && b6_10 && b7_63 && b8_2 && b9_10 && b10_28 && b11_40 && b12_37 && b13_16) {
matched = true;
pattern_id = 1006;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_16 && b6_36 && b7_10 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1007;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_16 && b6_36 && b7_10 && b8_48 && b9_43 && b10_54 && b11_34) {
matched = true;
pattern_id = 1008;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_16 && b6_36 && b7_10 && b8_2 && b9_20 && b10_58 && b11_46 && b12_41 && b13_43 && b14_5 && b15_22 && b16_3 && b17_44 && b18_19 && b19_34 && b20_10 && b21_42 && b22_11 && b23_35) {
matched = true;
pattern_id = 1009;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15) {
matched = true;
pattern_id = 1010;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_35 && b10_17 && b11_23 && b12_41 && b13_41 && b14_17 && b15_25 && b16_20 && b17_40 && b18_4 && b19_40) {
matched = true;
pattern_id = 1011;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_35 && b10_17 && b11_23 && b12_41 && b13_41 && b14_17 && b15_25 && b16_31 && b17_10 && b18_11 && b19_35 && b20_31 && b21_29 && b22_34) {
matched = true;
pattern_id = 1012;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_27 && b10_7 && b11_26 && b12_38 && b13_22) {
matched = true;
pattern_id = 1013;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_17 && b10_6 && b11_26 && b12_12 && b13_32 && b14_28 && b15_35 && b16_46 && b17_51 && b18_18 && b19_41 && b20_2 && b21_5 && b22_42 && b23_25 && b24_3 && b25_30 && b26_25 && b27_26 && b28_21 && b29_26 && b30_22 && b31_30 && b32_31 && b33_24 && b34_16 && b35_28 && b36_17 && b37_22 && b38_1 && b39_15 && b40_23 && b41_20 && b42_1 && b43_17) {
matched = true;
pattern_id = 1014;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_17 && b10_6 && b11_27) {
matched = true;
pattern_id = 1015;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_9 && b10_9 && b11_27 && b12_5 && b13_50 && b14_20 && b15_20 && b16_16 && b17_26 && b18_4 && b19_41 && b20_10 && b21_39 && b22_47 && b23_31 && b24_22 && b25_27 && b26_36 && b27_34 && b28_21 && b29_19 && b30_32 && b31_22 && b32_25 && b33_25) {
matched = true;
pattern_id = 1016;
}
if(b0_35 && b1_52 && b2_25 && b3_8 && b4_27 && b5_20 && b6_48 && b7_14 && b8_48 && b9_25 && b10_13 && b11_5) {
matched = true;
pattern_id = 1017;
}
if(b0_35 && b1_52 && b2_25 && b3_8 && b4_7 && b5_11 && b6_24 && b7_7 && b8_49 && b9_40 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1018;
}
if(b0_35 && b1_52 && b2_25 && b3_8 && b4_50 && b5_52 && b6_2 && b7_45 && b8_2 && b9_48) {
matched = true;
pattern_id = 1019;
}
if(b0_35 && b1_52 && b2_25 && b3_8 && b4_50 && b5_52 && b6_23) {
matched = true;
pattern_id = 1020;
}
if(b0_35 && b1_52 && b2_12 && b3_21 && b4_62 && b5_20 && b6_8 && b7_39 && b8_14 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 1021;
}
if(b0_35 && b1_52 && b2_15 && b3_17 && b4_35 && b5_30 && b6_21 && b7_11) {
matched = true;
pattern_id = 1022;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_7 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 1023;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_7 && b5_52 && b6_7 && b7_8 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1024;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_7 && b5_26 && b6_7 && b7_31 && b8_8 && b9_17 && b10_50 && b11_57 && b12_17 && b13_16 && b14_36) {
matched = true;
pattern_id = 1025;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_50 && b5_42 && b6_21 && b7_14 && b8_55 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 1026;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_31 && b5_51 && b6_3 && b7_29 && b8_5 && b9_42 && b10_28 && b11_5 && b12_32) {
matched = true;
pattern_id = 1027;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_31 && b5_52 && b6_19 && b7_14 && b8_35 && b9_6 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1028;
}
if(b0_35 && b1_52 && b2_14 && b3_34 && b4_7 && b5_25 && b6_7 && b7_7 && b8_35 && b9_12 && b10_9 && b11_3 && b12_16 && b13_38 && b14_34 && b15_22 && b16_18 && b17_44) {
matched = true;
pattern_id = 1029;
}
if(b0_35 && b1_52 && b2_14 && b3_34 && b4_7 && b5_25 && b6_7 && b7_7 && b8_35 && b9_28 && b10_28 && b11_37 && b12_25 && b13_40 && b14_38 && b15_40 && b16_24) {
matched = true;
pattern_id = 1030;
}
if(b0_35 && b1_52 && b2_14 && b3_8 && b4_12 && b5_30 && b6_7 && b7_46 && b8_15 && b9_9 && b10_6 && b11_4 && b12_20 && b13_30 && b14_17 && b15_36 && b16_5 && b17_36 && b18_19) {
matched = true;
pattern_id = 1031;
}
if(b0_35 && b1_52 && b2_14 && b3_8 && b4_12 && b5_30 && b6_35 && b7_11 && b8_2 && b9_27 && b10_35 && b11_35 && b12_25 && b13_5 && b14_5) {
matched = true;
pattern_id = 1032;
}
if(b0_35 && b1_52 && b2_14 && b3_8 && b4_12 && b5_30 && b6_35 && b7_39 && b8_42 && b9_12 && b10_17 && b11_5 && b12_28 && b13_18 && b14_20 && b15_41 && b16_22 && b17_29 && b18_22 && b19_41 && b20_13 && b21_35 && b22_31 && b23_24 && b24_3 && b25_19 && b26_3 && b27_33 && b28_9 && b29_10 && b30_22 && b31_20 && b32_27 && b33_31) {
matched = true;
pattern_id = 1033;
}
if(b0_35 && b1_52 && b2_14 && b3_8 && b4_12 && b5_44 && b6_23) {
matched = true;
pattern_id = 1034;
}
if(b0_35 && b1_52 && b2_24 && b3_46 && b4_31 && b5_6 && b6_21 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 1035;
}
if(b0_35 && b1_52 && b2_24 && b3_46 && b4_31 && b5_6 && b6_21 && b7_15 && b8_47 && b9_34 && b10_49 && b11_13 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_52 && b18_31 && b19_31 && b20_33 && b21_19 && b22_31 && b23_16 && b24_29 && b25_40) {
matched = true;
pattern_id = 1036;
}
if(b0_35 && b1_52 && b2_6 && b3_26 && b4_17 && b5_42 && b6_24 && b7_10 && b8_42 && b9_14 && b10_43 && b11_54 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1037;
}
if(b0_35 && b1_52 && b2_6 && b3_18 && b4_2 && b5_6 && b6_55 && b7_29 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1038;
}
if(b0_35 && b1_52 && b2_21 && b3_6 && b4_17 && b5_57 && b6_2 && b7_35 && b8_42 && b9_10) {
matched = true;
pattern_id = 1039;
}
if(b0_35 && b1_52 && b2_21 && b3_6 && b4_17 && b5_57 && b6_7 && b7_8 && b8_50 && b9_42 && b10_43 && b11_26 && b12_39) {
matched = true;
pattern_id = 1040;
}
if(b0_35 && b1_52 && b2_20 && b3_26 && b4_7 && b5_30 && b6_24 && b7_14 && b8_42 && b9_43 && b10_49 && b11_3 && b12_4 && b13_52 && b14_5 && b15_30 && b16_5 && b17_34 && b18_22 && b19_31 && b20_35 && b21_36 && b22_19 && b23_46) {
matched = true;
pattern_id = 1041;
}
if(b0_35 && b1_52 && b2_20 && b3_49 && b4_6 && b5_21 && b6_8 && b7_8 && b8_5 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39) {
matched = true;
pattern_id = 1042;
}
if(b0_35 && b1_52 && b2_20 && b3_60 && b4_44 && b5_29 && b6_10 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1043;
}
if(b0_35 && b1_52 && b2_20 && b3_60 && b4_44 && b5_29 && b6_10 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37 && b12_22) {
matched = true;
pattern_id = 1044;
}
if(b0_35 && b1_52 && b2_20 && b3_7 && b4_17 && b5_51 && b6_7 && b7_15 && b8_13 && b9_9 && b10_5) {
matched = true;
pattern_id = 1045;
}
if(b0_35 && b1_52 && b2_50 && b3_26 && b4_24 && b5_8 && b6_39 && b7_54 && b8_5 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 1046;
}
if(b0_35 && b1_52 && b2_50 && b3_15 && b4_3 && b5_37 && b6_36 && b7_54 && b8_11 && b9_5 && b10_12 && b11_40 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1047;
}
if(b0_35 && b1_52 && b2_50 && b3_15 && b4_7 && b5_6 && b6_23 && b7_8 && b8_5 && b9_43 && b10_49 && b11_44 && b12_52 && b13_27 && b14_18 && b15_3) {
matched = true;
pattern_id = 1048;
}
if(b0_35 && b1_52 && b2_68 && b3_24 && b4_35 && b5_12 && b6_21 && b7_56 && b8_35 && b9_41 && b10_5 && b11_3 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1049;
}
if(b0_35 && b1_52 && b2_68 && b3_7 && b4_27 && b5_8 && b6_10 && b7_10 && b8_34 && b9_9 && b10_5 && b11_3 && b12_25 && b13_41 && b14_49 && b15_20 && b16_30 && b17_47 && b18_23 && b19_32 && b20_2 && b21_10 && b22_4 && b23_27 && b24_31 && b25_33 && b26_30 && b27_35 && b28_37 && b29_21 && b30_19 && b31_26 && b32_23 && b33_11 && b34_19 && b35_32 && b36_13 && b37_26 && b38_27) {
matched = true;
pattern_id = 1050;
}
if(b0_35 && b1_52 && b2_23 && b3_40 && b4_15 && b5_11 && b6_34 && b7_39) {
matched = true;
pattern_id = 1051;
}
if(b0_35 && b1_52 && b2_23 && b3_11 && b4_2 && b5_29 && b6_20 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 1052;
}
if(b0_35 && b1_52 && b2_23 && b3_27 && b4_36 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_5 && b11_46 && b12_20 && b13_43 && b14_12 && b15_17 && b16_7 && b17_2 && b18_66 && b19_20 && b20_63 && b21_60 && b22_4 && b23_12 && b24_25 && b25_16 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3 && b33_48 && b34_16 && b35_20 && b36_15 && b37_47 && b38_25) {
matched = true;
pattern_id = 1053;
}
if(b0_35 && b1_52 && b2_3 && b3_26 && b4_6 && b5_64) {
matched = true;
pattern_id = 1054;
}
if(b0_35 && b1_52 && b2_3 && b3_26 && b4_6 && b5_8 && b6_7 && b7_47 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 1055;
}
if(b0_35 && b1_52 && b2_3 && b3_26 && b4_6 && b5_26 && b6_36 && b7_14 && b8_7 && b9_48 && b10_26 && b11_49 && b12_12 && b13_6 && b14_18) {
matched = true;
pattern_id = 1056;
}
if(b0_35 && b1_52 && b2_3 && b3_26 && b4_6 && b5_29 && b6_24 && b7_44 && b8_18 && b9_69 && b10_43 && b11_26 && b12_32 && b13_20) {
matched = true;
pattern_id = 1057;
}
if(b0_35 && b1_52 && b2_3 && b3_6 && b4_17 && b5_6 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 1058;
}
if(b0_35 && b1_52 && b2_3 && b3_6 && b4_17 && b5_6 && b6_23 && b7_31 && b8_58 && b9_6 && b10_4 && b11_46 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1059;
}
if(b0_35 && b1_52 && b2_3 && b3_6 && b4_17 && b5_6 && b6_23 && b7_31 && b8_58 && b9_6 && b10_4 && b11_46 && b12_12 && b13_30 && b14_41 && b15_35 && b16_47) {
matched = true;
pattern_id = 1060;
}
if(b0_35 && b1_52 && b2_3 && b3_6 && b4_17 && b5_17 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 1061;
}
if(b0_35 && b1_52 && b2_62 && b3_50 && b4_7 && b5_37 && b6_18 && b7_10 && b8_16 && b9_50 && b10_4 && b11_3 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1062;
}
if(b0_35 && b1_52 && b2_62 && b3_50 && b4_7 && b5_10 && b6_10 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 1063;
}
if(b0_35 && b1_52 && b2_62 && b3_50 && b4_7 && b5_10 && b6_10 && b7_9 && b8_15 && b9_17 && b10_6 && b11_26 && b12_7 && b13_36 && b14_28 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 1064;
}
if(b0_35 && b1_52 && b2_62 && b3_20 && b4_11 && b5_6 && b6_52 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 1065;
}
if(b0_35 && b1_52 && b2_17 && b3_40) {
matched = true;
pattern_id = 1066;
}
if(b0_35 && b1_52 && b2_17 && b3_18 && b4_17 && b5_55 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 1067;
}
if(b0_35 && b1_6 && b2_43 && b3_24 && b4_60 && b5_54 && b6_8 && b7_54 && b8_9 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1068;
}
if(b0_35 && b1_6 && b2_16 && b3_18 && b4_15) {
matched = true;
pattern_id = 1069;
}
if(b0_35 && b1_6 && b2_25 && b3_40 && b4_15 && b5_20 && b6_3 && b7_9 && b8_5 && b9_20 && b10_35 && b11_46 && b12_38 && b13_22 && b14_34 && b15_22 && b16_18 && b17_44) {
matched = true;
pattern_id = 1070;
}
if(b0_35 && b1_6 && b2_25 && b3_40 && b4_15 && b5_20 && b6_3 && b7_9 && b8_5 && b9_20 && b10_5 && b11_23 && b12_38 && b13_22 && b14_25 && b15_36 && b16_25 && b17_33 && b18_10) {
matched = true;
pattern_id = 1071;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_43 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 1072;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_43 && b6_36 && b7_46 && b8_11 && b9_20 && b10_65 && b11_14 && b12_56) {
matched = true;
pattern_id = 1073;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_40 && b6_21 && b7_31 && b8_35) {
matched = true;
pattern_id = 1074;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_40 && b6_21 && b7_31 && b8_35 && b9_4 && b10_44 && b11_10 && b12_10) {
matched = true;
pattern_id = 1075;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 1076;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 1077;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 1078;
}
if(b0_35 && b1_6 && b2_25 && b3_46 && b4_6 && b5_51 && b6_3 && b7_21 && b8_7 && b9_10 && b10_17 && b11_23 && b12_12 && b13_6 && b14_18) {
matched = true;
pattern_id = 1079;
}
if(b0_35 && b1_6 && b2_15 && b3_15 && b4_3 && b5_20 && b6_7 && b7_8 && b8_15 && b9_10 && b10_50 && b11_4 && b12_7 && b13_18 && b14_40 && b15_35 && b16_39 && b17_33 && b18_60) {
matched = true;
pattern_id = 1080;
}
if(b0_35 && b1_6 && b2_6 && b3_50 && b4_35 && b5_16 && b6_18 && b7_31 && b8_58 && b9_5 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1081;
}
if(b0_35 && b1_6 && b2_6 && b3_50 && b4_2 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 1082;
}
if(b0_35 && b1_6 && b2_20 && b3_19 && b4_12 && b5_20 && b6_23 && b7_9 && b8_14 && b9_55 && b10_17 && b11_27 && b12_12 && b13_3 && b14_25 && b15_20 && b16_8 && b17_2 && b18_66 && b19_20 && b20_63 && b21_60 && b22_4 && b23_12 && b24_25 && b25_16 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3 && b33_50 && b34_23 && b35_33 && b36_22 && b37_48 && b38_11 && b39_33 && b40_15 && b41_16 && b42_10 && b43_37 && b44_18) {
matched = true;
pattern_id = 1083;
}
if(b0_35 && b1_6 && b2_20 && b3_34 && b4_14 && b5_11 && b6_11 && b7_63 && b8_47 && b9_6 && b10_43 && b11_5 && b12_28 && b13_27 && b14_28 && b15_18 && b16_29 && b17_40 && b18_18 && b19_19 && b20_30 && b21_42 && b22_46 && b23_39) {
matched = true;
pattern_id = 1084;
}
if(b0_35 && b1_6 && b2_20 && b3_43 && b4_19 && b5_62 && b6_35 && b7_15 && b8_13 && b9_9) {
matched = true;
pattern_id = 1085;
}
if(b0_35 && b1_6 && b2_23 && b3_26 && b4_14 && b5_6 && b6_2 && b7_31 && b8_55 && b9_40) {
matched = true;
pattern_id = 1086;
}
if(b0_35 && b1_6 && b2_23 && b3_26 && b4_14 && b5_6 && b6_23 && b7_16 && b8_35 && b9_27 && b10_4 && b11_40 && b12_6 && b13_72 && b14_44 && b15_23 && b16_28 && b17_28 && b18_24 && b19_44 && b20_5 && b21_4 && b22_2 && b23_1 && b24_2 && b25_2 && b26_18 && b27_8 && b28_57 && b29_34 && b30_15 && b31_32 && b32_51 && b33_8) {
matched = true;
pattern_id = 1087;
}
if(b0_35 && b1_6 && b2_23 && b3_26 && b4_3 && b5_26 && b6_20 && b7_31 && b8_35 && b9_49 && b10_6 && b11_27 && b12_16 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 1088;
}
if(b0_35 && b1_6 && b2_23 && b3_21 && b4_7 && b5_8 && b6_23 && b7_9 && b8_8 && b9_40 && b10_17 && b11_57 && b12_50 && b13_38 && b14_12 && b15_15) {
matched = true;
pattern_id = 1089;
}
if(b0_35 && b1_6 && b2_8 && b3_8 && b4_26 && b5_54 && b6_8 && b7_9) {
matched = true;
pattern_id = 1090;
}
if(b0_35 && b1_6 && b2_3 && b3_26 && b4_31 && b5_6 && b6_21 && b7_9 && b8_14 && b9_43 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1091;
}
if(b0_35 && b1_6 && b2_62 && b3_20 && b4_51 && b5_11 && b6_23 && b7_7 && b8_35 && b9_27 && b10_13 && b11_4 && b12_16 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 1092;
}
if(b0_35 && b1_6 && b2_19 && b3_8 && b4_35 && b5_8 && b6_7 && b7_31 && b8_47 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 1093;
}
if(b0_35 && b1_6 && b2_19 && b3_8 && b4_36 && b5_7 && b6_11 && b7_39 && b8_34 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1094;
}
if(b0_35 && b1_56 && b2_26 && b3_29 && b4_15 && b5_42 && b6_18) {
matched = true;
pattern_id = 1095;
}
if(b0_35 && b1_56 && b2_24 && b3_29 && b4_15 && b5_42 && b6_18) {
matched = true;
pattern_id = 1096;
}
if(b0_35 && b1_56 && b2_24 && b3_8 && b4_17 && b5_11 && b6_21 && b7_14 && b8_42 && b9_14 && b10_7) {
matched = true;
pattern_id = 1097;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7) {
matched = true;
pattern_id = 1098;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_44 && b8_11 && b9_40 && b10_6 && b11_57 && b12_38 && b13_6 && b14_18) {
matched = true;
pattern_id = 1099;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_44 && b8_16 && b9_41 && b10_26 && b11_27 && b12_52 && b13_36 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1100;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_44 && b8_40 && b9_27 && b10_4 && b11_46 && b12_7 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52) {
matched = true;
pattern_id = 1101;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_35 && b8_48 && b9_45 && b10_35 && b11_30 && b12_22) {
matched = true;
pattern_id = 1102;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 1103;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1104;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_15 && b8_40 && b9_34) {
matched = true;
pattern_id = 1105;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_44 && b8_16 && b9_6 && b10_7 && b11_4 && b12_25 && b13_5) {
matched = true;
pattern_id = 1106;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_10 && b8_8 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 1107;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_11 && b8_16 && b9_27 && b10_38 && b11_3 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1108;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_37 && b6_39 && b7_47 && b8_47 && b9_27 && b10_13 && b11_3 && b12_49 && b13_43 && b14_51 && b15_20 && b16_24 && b17_49 && b18_18 && b19_2 && b20_37) {
matched = true;
pattern_id = 1109;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_37 && b6_39 && b7_47 && b8_47 && b9_27 && b10_13 && b11_3 && b12_49 && b13_6 && b14_20 && b15_32 && b16_2 && b17_46 && b18_20 && b19_44 && b20_34 && b21_15) {
matched = true;
pattern_id = 1110;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_16 && b6_55 && b7_55 && b8_14 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 1111;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_26 && b6_2 && b7_47 && b8_49 && b9_40) {
matched = true;
pattern_id = 1112;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_26 && b6_2 && b7_51 && b8_16 && b9_34) {
matched = true;
pattern_id = 1113;
}
if(b0_35 && b1_56 && b2_8 && b3_8 && b4_44 && b5_8 && b6_7 && b7_30 && b8_5 && b9_5 && b10_5 && b11_3 && b12_20 && b13_40 && b14_36 && b15_15) {
matched = true;
pattern_id = 1114;
}
if(b0_35 && b1_56 && b2_3 && b3_40 && b4_35 && b5_20 && b6_3 && b7_53 && b8_3 && b9_63 && b10_36 && b11_52 && b12_47 && b13_52 && b14_30 && b15_36 && b16_7 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7 && b24_39 && b25_36 && b26_27 && b27_19 && b28_56 && b29_7 && b30_48 && b31_25 && b32_44 && b33_12 && b34_31 && b35_2 && b36_11 && b37_21 && b38_19 && b39_14 && b40_20 && b41_39 && b42_9 && b43_22 && b44_31 && b45_4 && b46_4 && b47_7 && b48_2 && b49_3 && b50_4 && b51_3 && b52_2 && b53_21 && b54_17 && b55_22 && b56_20 && b57_15 && b58_21 && b59_13 && b60_16 && b61_11 && b62_16 && b63_2 && b64_14 && b65_9 && b66_9 && b67_14 && b68_12 && b69_12 && b70_16 && b71_13 && b72_11 && b73_13 && b74_3 && b75_3 && b76_10 && b77_5 && b78_5 && b79_10 && b80_5 && b81_2 && b82_12 && b83_5 && b84_3 && b85_9 && b86_3) {
matched = true;
pattern_id = 1115;
}
if(b0_35 && b1_56 && b2_3 && b3_15 && b4_22 && b5_40 && b6_46 && b7_54) {
matched = true;
pattern_id = 1116;
}
if(b0_35 && b1_56 && b2_3 && b3_15 && b4_22 && b5_26 && b6_21 && b7_31 && b8_8 && b9_20 && b10_45 && b11_46 && b12_67 && b13_5 && b14_18 && b15_62 && b16_5 && b17_18 && b18_18 && b19_9 && b20_43 && b21_29) {
matched = true;
pattern_id = 1117;
}
if(b0_35 && b1_32 && b2_27) {
matched = true;
pattern_id = 1118;
}
if(b0_35 && b1_32 && b2_46 && b3_53 && b4_35 && b5_27 && b6_39 && b7_9 && b8_42 && b9_50 && b10_26 && b11_48 && b12_17 && b13_52) {
matched = true;
pattern_id = 1119;
}
if(b0_35 && b1_32 && b2_46 && b3_53 && b4_35 && b5_27 && b6_39 && b7_9 && b8_42 && b9_50 && b10_26 && b11_48 && b12_17 && b13_52 && b14_30 && b15_41 && b16_46 && b17_7 && b18_31 && b19_34 && b20_13) {
matched = true;
pattern_id = 1120;
}
if(b0_35 && b1_32 && b2_25 && b3_20 && b4_27 && b5_3 && b6_35 && b7_32 && b8_42 && b9_20 && b10_26 && b11_27 && b12_39 && b13_5 && b14_42 && b15_36 && b16_16 && b17_21 && b18_19 && b19_60 && b20_27 && b21_20 && b22_57) {
matched = true;
pattern_id = 1121;
}
if(b0_35 && b1_32 && b2_14 && b3_40 && b4_6 && b5_16 && b6_18 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52) {
matched = true;
pattern_id = 1122;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_43 && b6_24 && b7_14 && b8_12 && b9_14 && b10_43 && b11_3) {
matched = true;
pattern_id = 1123;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_37 && b6_21 && b7_8 && b8_14 && b9_27 && b10_7 && b11_47 && b12_17 && b13_16 && b14_25 && b15_36 && b16_25 && b17_33 && b18_10) {
matched = true;
pattern_id = 1124;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_37 && b6_24 && b7_14 && b8_12 && b9_14 && b10_43 && b11_3) {
matched = true;
pattern_id = 1125;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_51 && b6_3 && b7_29 && b8_5 && b9_42 && b10_28 && b11_5 && b12_32) {
matched = true;
pattern_id = 1126;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_3 && b6_3 && b7_8 && b8_12 && b9_28 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1127;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_26 && b6_3 && b7_21 && b8_8 && b9_17 && b10_17 && b11_13 && b12_4 && b13_5 && b14_12 && b15_5 && b16_8 && b17_10 && b18_9 && b19_9 && b20_10 && b21_7 && b22_3 && b23_9 && b24_8 && b25_9) {
matched = true;
pattern_id = 1128;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_42 && b6_3 && b7_47 && b8_11 && b9_17 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1129;
}
if(b0_35 && b1_32 && b2_14 && b3_6 && b4_22 && b5_11 && b6_11 && b7_11 && b8_14 && b9_11 && b10_48 && b11_35 && b12_50 && b13_6 && b14_33) {
matched = true;
pattern_id = 1130;
}
if(b0_35 && b1_32 && b2_14 && b3_50 && b4_26 && b5_62 && b6_46 && b7_46) {
matched = true;
pattern_id = 1131;
}
if(b0_35 && b1_32 && b2_14 && b3_20 && b4_18 && b5_25 && b6_8 && b7_9 && b8_14 && b9_14 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1132;
}
if(b0_35 && b1_32 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 1133;
}
if(b0_35 && b1_32 && b2_21 && b3_40 && b4_11 && b5_16 && b6_7 && b7_53 && b8_5 && b9_14 && b10_48 && b11_64 && b12_17 && b13_4) {
matched = true;
pattern_id = 1134;
}
if(b0_35 && b1_32 && b2_50 && b3_26 && b4_2 && b5_26 && b6_56 && b7_29 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1135;
}
if(b0_35 && b1_59 && b2_10 && b3_51 && b4_24 && b5_26 && b6_57 && b7_54 && b8_15) {
matched = true;
pattern_id = 1136;
}
if(b0_35 && b1_59 && b2_10 && b3_8 && b4_11 && b5_11 && b6_10 && b7_7 && b8_48 && b9_43 && b10_35) {
matched = true;
pattern_id = 1137;
}
if(b0_35 && b1_59 && b2_10 && b3_2 && b4_15 && b5_10 && b6_2 && b7_29 && b8_34 && b9_34 && b10_64) {
matched = true;
pattern_id = 1138;
}
if(b0_35 && b1_59 && b2_43 && b3_15 && b4_2 && b5_40 && b6_46 && b7_54) {
matched = true;
pattern_id = 1139;
}
if(b0_35 && b1_59 && b2_43 && b3_45 && b4_46 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40) {
matched = true;
pattern_id = 1140;
}
if(b0_35 && b1_59 && b2_43 && b3_45 && b4_46 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1141;
}
if(b0_35 && b1_59 && b2_43 && b3_45 && b4_46 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_22 && b11_61 && b12_17 && b13_47 && b14_54 && b15_52 && b16_30 && b17_10 && b18_22 && b19_42 && b20_10 && b21_35 && b22_41 && b23_19) {
matched = true;
pattern_id = 1142;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_46 && b5_27 && b6_8 && b7_47 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1143;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_35 && b5_47 && b6_3 && b7_14 && b8_58 && b9_34 && b10_17 && b11_44 && b12_17 && b13_22 && b14_20 && b15_15 && b16_55 && b17_37 && b18_10 && b19_40 && b20_30 && b21_18 && b22_40 && b23_3 && b24_27) {
matched = true;
pattern_id = 1144;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_59 && b5_26 && b6_11 && b7_14 && b8_8 && b9_5 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1145;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 1146;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_12 && b11_5 && b12_52) {
matched = true;
pattern_id = 1147;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_18 && b5_25 && b6_35 && b7_69 && b8_5 && b9_14 && b10_22) {
matched = true;
pattern_id = 1148;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_14 && b5_11 && b6_10 && b7_9 && b8_39 && b9_34 && b10_26 && b11_40 && b12_5 && b13_52) {
matched = true;
pattern_id = 1149;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_14 && b5_11 && b6_10 && b7_9 && b8_15) {
matched = true;
pattern_id = 1150;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_16 && b5_16 && b6_24 && b7_9 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1151;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_16 && b5_8 && b6_35 && b7_52 && b8_5 && b9_14) {
matched = true;
pattern_id = 1152;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_21 && b5_16 && b6_55 && b7_29 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 1153;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_19 && b5_11 && b6_35 && b7_7) {
matched = true;
pattern_id = 1154;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_15 && b5_52 && b6_12 && b7_37 && b8_29 && b9_51 && b10_61 && b11_13 && b12_66 && b13_40 && b14_30 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4 && b22_17 && b23_27 && b24_20 && b25_33 && b26_24 && b27_19 && b28_56 && b29_7 && b30_50 && b31_9 && b32_53 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7 && b40_7 && b41_28 && b42_19 && b43_12 && b44_14 && b45_11 && b46_14 && b47_19 && b48_1 && b49_12 && b50_34 && b51_2 && b52_2 && b53_27 && b54_22 && b55_1 && b56_20 && b57_4 && b58_4 && b59_20 && b60_2 && b61_3 && b62_20 && b63_18 && b64_18 && b65_11 && b66_9 && b67_19 && b68_12 && b69_12 && b70_22 && b71_12 && b72_8 && b73_15 && b74_19 && b75_5 && b76_14 && b77_14 && b78_16 && b79_8 && b80_15 && b81_9 && b82_16 && b83_17 && b84_12 && b85_13 && b86_4 && b87_2 && b88_12) {
matched = true;
pattern_id = 1155;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_15 && b5_52 && b6_61 && b7_8 && b8_5 && b9_34 && b10_29) {
matched = true;
pattern_id = 1156;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_7 && b5_25 && b6_39 && b7_7 && b8_48 && b9_17 && b10_38 && b11_37 && b12_22) {
matched = true;
pattern_id = 1157;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_7 && b5_25 && b6_39 && b7_7 && b8_48 && b9_5 && b10_47 && b11_3 && b12_22) {
matched = true;
pattern_id = 1158;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_7 && b5_25 && b6_39 && b7_7 && b8_18 && b9_27 && b10_32 && b11_6 && b12_37 && b13_38) {
matched = true;
pattern_id = 1159;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_7 && b5_25 && b6_39 && b7_7 && b8_18 && b9_9 && b10_43 && b11_23 && b12_38 && b13_6 && b14_25) {
matched = true;
pattern_id = 1160;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_2 && b5_6 && b6_55 && b7_29 && b8_16 && b9_27 && b10_26 && b11_30) {
matched = true;
pattern_id = 1161;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_2 && b5_52 && b6_35 && b7_8 && b8_2 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1162;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_2 && b5_42 && b6_8 && b7_9 && b8_15 && b9_52 && b10_26 && b11_29) {
matched = true;
pattern_id = 1163;
}
if(b0_35 && b1_59 && b2_12 && b3_7 && b4_12 && b5_26 && b6_11 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 1164;
}
if(b0_35 && b1_59 && b2_15 && b3_11 && b4_17 && b5_6 && b6_8 && b7_39 && b8_11 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1165;
}
if(b0_35 && b1_59 && b2_15 && b3_11 && b4_17 && b5_6 && b6_8 && b7_39 && b8_11 && b9_42 && b10_43 && b11_49 && b12_38 && b13_39) {
matched = true;
pattern_id = 1166;
}
if(b0_35 && b1_59 && b2_15 && b3_6 && b4_27 && b5_26 && b6_54 && b7_8 && b8_42 && b9_33 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1167;
}
if(b0_35 && b1_59 && b2_15 && b3_6 && b4_27 && b5_26 && b6_54 && b7_8 && b8_42 && b9_33 && b10_48 && b11_47 && b12_36 && b13_27 && b14_40) {
matched = true;
pattern_id = 1168;
}
if(b0_35 && b1_59 && b2_14 && b3_43 && b4_46 && b5_51 && b6_37 && b7_7 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_40 && b14_17 && b15_37 && b16_29) {
matched = true;
pattern_id = 1169;
}
if(b0_35 && b1_59 && b2_14 && b3_43 && b4_16 && b5_27 && b6_8 && b7_11 && b8_34 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 1170;
}
if(b0_35 && b1_59 && b2_14 && b3_43 && b4_16 && b5_10 && b6_56 && b7_7 && b8_15 && b9_19 && b10_5 && b11_34 && b12_17 && b13_38 && b14_17 && b15_38 && b16_2 && b17_29 && b18_32 && b19_21 && b20_25 && b21_7 && b22_46 && b23_3 && b24_8 && b25_40) {
matched = true;
pattern_id = 1171;
}
if(b0_35 && b1_59 && b2_20 && b3_20 && b4_60 && b5_6 && b6_10 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22 && b13_21 && b14_20 && b15_22 && b16_52) {
matched = true;
pattern_id = 1172;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7) {
matched = true;
pattern_id = 1173;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_20) {
matched = true;
pattern_id = 1174;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_14 && b5_10 && b6_55 && b7_9 && b8_5 && b9_11 && b10_13) {
matched = true;
pattern_id = 1175;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_27 && b5_20 && b6_36 && b7_54 && b8_12 && b9_40 && b10_17 && b11_5) {
matched = true;
pattern_id = 1176;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_27 && b5_20 && b6_36 && b7_54 && b8_12 && b9_40 && b10_17 && b11_5 && b12_12 && b13_6 && b14_37 && b15_5 && b16_47 && b17_47 && b18_60) {
matched = true;
pattern_id = 1177;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_70 && b5_26 && b6_3 && b7_45 && b8_15) {
matched = true;
pattern_id = 1178;
}
if(b0_35 && b1_59 && b2_23 && b3_26 && b4_7) {
matched = true;
pattern_id = 1179;
}
if(b0_35 && b1_59 && b2_23 && b3_6 && b4_44 && b5_42 && b6_23 && b7_52 && b8_25) {
matched = true;
pattern_id = 1180;
}
if(b0_35 && b1_59 && b2_8 && b3_35 && b4_21 && b5_42 && b6_46 && b7_15 && b8_11 && b9_11 && b10_26) {
matched = true;
pattern_id = 1181;
}
if(b0_35 && b1_59 && b2_8 && b3_35 && b4_21 && b5_42 && b6_46 && b7_15 && b8_34 && b9_6 && b10_38) {
matched = true;
pattern_id = 1182;
}
if(b0_35 && b1_59 && b2_8 && b3_35 && b4_24 && b5_11 && b6_35 && b7_54 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1183;
}
if(b0_35 && b1_59 && b2_8 && b3_15 && b4_2 && b5_11 && b6_2 && b7_29 && b8_34 && b9_34 && b10_22 && b11_45 && b12_35 && b13_5 && b14_35 && b15_34 && b16_24 && b17_4 && b18_4 && b19_33) {
matched = true;
pattern_id = 1184;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_46 && b5_26 && b6_57 && b7_54) {
matched = true;
pattern_id = 1185;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 1186;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_51 && b5_10 && b6_8 && b7_8 && b8_47 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 1187;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_51 && b5_10 && b6_8 && b7_8 && b8_47 && b9_20 && b10_5 && b11_46 && b12_16 && b13_16 && b14_39 && b15_18 && b16_32 && b17_37 && b18_30 && b19_34) {
matched = true;
pattern_id = 1188;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_31 && b5_11 && b6_35 && b7_7) {
matched = true;
pattern_id = 1189;
}
if(b0_35 && b1_54 && b2_29) {
matched = true;
pattern_id = 1190;
}
if(b0_35 && b1_54 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15) {
matched = true;
pattern_id = 1191;
}
if(b0_35 && b1_71 && b2_6 && b3_24 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 1192;
}
if(b0_35 && b1_71 && b2_8 && b3_17) {
matched = true;
pattern_id = 1193;
}
if(b0_35 && b1_68 && b2_49 && b3_8 && b4_7) {
matched = true;
pattern_id = 1194;
}
if(b0_35 && b1_68 && b2_21 && b3_6 && b4_51 && b5_10 && b6_34 && b7_12) {
matched = true;
pattern_id = 1195;
}
if(b0_35 && b1_68 && b2_23 && b3_6 && b4_44 && b5_42) {
matched = true;
pattern_id = 1196;
}
if(b0_42) {
matched = true;
pattern_id = 1197;
}
if(b0_42 && b1_72 && b2_4 && b3_1 && b4_36 && b5_4 && b6_1 && b7_33 && b8_3 && b9_1 && b10_10 && b11_2 && b12_2 && b13_33 && b14_3 && b15_1 && b16_51 && b17_8 && b18_19 && b19_28 && b20_47 && b21_15 && b22_27 && b23_27 && b24_9 && b25_17 && b26_2 && b27_2 && b28_17 && b29_11 && b30_5 && b31_11 && b32_15 && b33_8 && b34_1 && b35_30 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_12 && b42_4 && b43_4 && b44_4 && b45_3 && b46_4 && b47_3 && b48_2 && b49_3 && b50_11 && b51_2 && b52_4 && b53_8 && b54_2 && b55_4 && b56_2 && b57_4 && b58_4 && b59_3 && b60_5 && b61_7 && b62_3 && b63_3 && b64_3 && b65_3 && b66_6 && b67_5 && b68_4 && b69_5 && b70_6 && b71_3 && b72_4 && b73_5 && b74_5 && b75_4 && b76_3 && b77_4 && b78_4 && b79_4 && b80_4 && b81_3 && b82_4 && b83_4 && b84_2 && b85_2 && b86_2 && b87_2 && b88_2 && b89_2 && b90_2 && b91_2 && b92_2 && b93_2 && b94_2 && b95_2 && b96_2 && b97_2 && b98_2 && b99_2 && b100_2 && b101_2 && b102_2) {
matched = true;
pattern_id = 1198;
}
if(b0_42 && b1_15) {
matched = true;
pattern_id = 1199;
}
if(b0_42 && b1_17 && b2_46 && b3_36 && b4_42 && b5_9 && b6_40 && b7_24 && b8_17 && b9_24 && b10_28 && b11_28 && b12_18 && b13_19 && b14_17 && b15_16 && b16_18 && b17_21 && b18_10 && b19_19 && b20_20 && b21_15 && b22_14 && b23_16 && b24_17 && b25_18) {
matched = true;
pattern_id = 1200;
}
if(b0_42 && b1_17 && b2_46 && b3_36 && b4_42 && b5_9 && b6_40 && b7_24 && b8_17 && b9_24 && b10_28 && b11_28 && b12_18 && b13_19 && b14_17 && b15_16 && b16_18 && b17_21 && b18_10 && b19_19 && b20_20 && b21_15 && b22_14 && b23_16 && b24_17 && b25_18 && b26_47 && b27_33 && b28_1 && b29_25 && b30_20 && b31_31) {
matched = true;
pattern_id = 1201;
}
if(b0_42 && b1_51 && b2_10 && b3_22 && b4_8 && b5_35 && b6_40 && b7_33 && b8_39 && b9_18 && b10_41 && b11_10 && b12_58 && b13_55 && b14_13 && b15_29 && b16_51 && b17_19 && b18_55 && b19_15 && b20_5 && b21_13 && b22_47 && b23_43 && b24_14 && b25_43 && b26_12 && b27_38 && b28_11 && b29_38 && b30_34 && b31_3 && b32_12 && b33_30 && b34_27 && b35_7) {
matched = true;
pattern_id = 1202;
}
if(b0_42 && b1_25 && b2_4 && b3_1 && b4_36 && b5_4 && b6_1 && b7_33 && b8_3 && b9_1 && b10_10 && b11_2 && b12_2 && b13_33 && b14_3 && b15_1 && b16_51 && b17_8 && b18_19 && b19_28 && b20_47 && b21_15 && b22_27 && b23_27 && b24_9 && b25_17 && b26_16 && b27_8 && b28_36 && b29_1 && b30_9 && b31_34 && b32_3) {
matched = true;
pattern_id = 1203;
}
if(b0_42 && b1_2 && b2_63 && b3_4 && b4_22 && b5_56) {
matched = true;
pattern_id = 1204;
}
if(b0_25) {
matched = true;
pattern_id = 1205;
}
if(b0_25 && b1_36 && b2_49 && b3_15 && b4_22 && b5_6 && b6_5 && b7_18 && b8_17 && b9_4 && b10_11 && b11_20 && b12_15 && b13_9 && b14_2 && b15_4 && b16_25 && b17_27 && b18_19 && b19_22 && b20_2 && b21_20) {
matched = true;
pattern_id = 1206;
}
if(b0_25 && b1_18 && b2_10 && b3_22) {
matched = true;
pattern_id = 1207;
}
if(b0_25 && b1_66 && b2_4 && b3_39 && b4_4 && b5_4 && b6_49 && b7_49 && b8_10) {
matched = true;
pattern_id = 1208;
}
if(b0_25 && b1_1 && b2_32 && b3_1 && b4_1 && b5_32 && b6_1 && b7_1 && b8_1 && b9_16 && b10_1 && b11_10 && b12_9 && b13_1 && b14_8 && b15_1 && b16_1 && b17_6 && b18_6 && b19_1 && b20_6 && b21_1 && b22_1 && b23_6 && b24_5 && b25_6 && b26_6 && b27_5 && b28_6 && b29_4 && b30_4 && b31_4 && b32_4 && b33_1 && b34_3) {
matched = true;
pattern_id = 1209;
}
if(b0_25 && b1_1 && b2_32 && b3_1 && b4_1 && b5_32 && b6_1 && b7_3 && b8_18 && b9_15 && b10_2 && b11_9 && b12_8 && b13_1 && b14_7 && b15_6 && b16_1 && b17_5 && b18_5 && b19_6 && b20_5 && b21_4 && b22_5 && b23_5 && b24_2 && b25_5 && b26_5 && b27_2 && b28_5 && b29_2 && b30_2 && b31_3 && b32_3 && b33_3 && b34_1 && b35_1) {
matched = true;
pattern_id = 1210;
}
if(b0_1 && b1_15 && b2_1) {
matched = true;
pattern_id = 1211;
}
if(b0_1 && b1_18 && b2_1 && b3_28 && b4_36 && b5_1 && b6_5) {
matched = true;
pattern_id = 1212;
}
if(b0_1 && b1_18 && b2_27 && b3_14 && b4_67 && b5_10 && b6_3 && b7_29 && b8_61 && b9_41 && b10_17 && b11_2 && b12_50 && b13_43 && b14_36 && b15_5 && b16_55 && b17_2 && b18_22 && b19_3 && b20_1 && b21_36 && b22_27 && b23_16 && b24_37) {
matched = true;
pattern_id = 1213;
}
if(b0_1 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_1 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_1 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1 && b23_1 && b24_1 && b25_1 && b26_1 && b27_1 && b28_1 && b29_1 && b30_1 && b31_1 && b32_1 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 1214;
}
if(b0_1 && b1_1 && b2_28 && b3_63 && b4_32 && b5_7 && b6_11 && b7_9 && b8_40 && b9_72 && b10_22 && b11_13) {
matched = true;
pattern_id = 1215;
}
if(b0_36 && b1_15 && b2_46) {
matched = true;
pattern_id = 1216;
}
if(b0_36 && b1_15 && b2_28) {
matched = true;
pattern_id = 1217;
}
if(b0_36 && b1_1 && b2_32 && b3_31 && b4_1 && b5_32 && b6_26 && b7_1 && b8_22 && b9_1 && b10_2 && b11_14 && b12_10 && b13_10 && b14_9 && b15_4 && b16_4 && b17_11 && b18_8 && b19_10 && b20_11 && b21_4 && b22_6 && b23_10 && b24_9 && b25_10 && b26_9 && b27_8 && b28_10 && b29_2 && b30_2 && b31_6 && b32_3 && b33_5 && b34_6 && b35_5 && b36_5 && b37_4 && b38_2 && b39_3) {
matched = true;
pattern_id = 1218;
}
if(b0_61 && b1_15 && b2_10) {
matched = true;
pattern_id = 1219;
}
if(b0_61 && b1_27 && b2_12 && b3_15 && b4_21 && b5_42 && b6_24) {
matched = true;
pattern_id = 1220;
}
if(b0_50 && b1_37 && b2_1 && b3_14) {
matched = true;
pattern_id = 1221;
}
if(b0_50 && b1_51 && b2_1 && b3_14 && b4_47 && b5_40 && b6_51 && b7_15 && b8_22) {
matched = true;
pattern_id = 1222;
}
if(b0_48 && b1_51 && b2_57) {
matched = true;
pattern_id = 1223;
}
if(b0_48 && b1_29 && b2_4 && b3_36 && b4_20 && b5_4 && b6_16 && b7_27 && b8_10 && b9_32 && b10_29 && b11_32 && b12_22) {
matched = true;
pattern_id = 1224;
}
if(b0_60 && b1_36 && b2_4 && b3_39 && b4_4 && b5_4 && b6_1 && b7_4 && b8_3 && b9_24 && b10_3 && b11_2 && b12_2 && b13_14 && b14_3 && b15_11 && b16_27 && b17_2 && b18_1 && b19_3 && b20_9 && b21_25 && b22_1 && b23_2 && b24_15 && b25_6 && b26_23 && b27_8 && b28_2 && b29_2 && b30_2 && b31_7 && b32_1 && b33_4 && b34_9 && b35_6 && b36_6 && b37_4 && b38_5 && b39_7) {
matched = true;
pattern_id = 1225;
}
if(b0_73 && b1_75) {
matched = true;
pattern_id = 1226;
}
if(b0_73 && b1_75 && b2_47 && b3_51 && b4_16 && b5_6 && b6_34 && b7_68 && b8_1 && b9_24 && b10_59 && b11_69 && b12_59) {
matched = true;
pattern_id = 1227;
}
if(b0_73 && b1_61 && b2_41 && b3_15 && b4_11 && b5_74 && b6_66 && b7_11 && b8_67 && b9_32 && b10_22 && b11_37 && b12_59 && b13_69 && b14_5 && b15_25 && b16_55 && b17_26 && b18_4 && b19_57 && b20_32 && b21_27 && b22_42 && b23_59 && b24_17 && b25_44 && b26_25 && b27_33 && b28_27 && b29_40 && b30_17 && b31_25 && b32_3 && b33_43 && b34_12 && b35_1 && b36_24 && b37_14 && b38_24 && b39_21 && b40_15 && b41_16 && b42_3 && b43_8 && b44_9 && b45_4 && b46_31 && b47_19 && b48_19 && b49_21 && b50_29 && b51_3 && b52_20 && b53_20 && b54_3 && b55_21 && b56_4 && b57_13 && b58_9 && b59_15 && b60_14 && b61_4) {
matched = true;
pattern_id = 1228;
}
if(b0_73 && b1_61 && b2_8 && b3_40 && b4_17 && b5_16 && b6_46 && b7_9 && b8_67 && b9_32 && b10_8 && b11_9 && b12_53 && b13_15 && b14_44 && b15_58 && b16_28 && b17_23) {
matched = true;
pattern_id = 1229;
}
if(b0_73 && b1_67 && b2_19 && b3_34 && b4_22) {
matched = true;
pattern_id = 1230;
}
if(b0_73 && b1_20 && b2_34 && b3_69 && b4_40 && b5_31 && b6_62) {
matched = true;
pattern_id = 1231;
}
if(b0_73 && b1_57) {
matched = true;
pattern_id = 1232;
}
if(b0_73 && b1_9 && b2_22 && b3_12 && b4_10 && b5_71 && b6_6 && b7_50 && b8_29 && b9_22 && b10_69) {
matched = true;
pattern_id = 1233;
}
if(b0_73 && b1_9 && b2_40 && b3_9 && b4_40 && b5_19 && b6_13 && b7_36 && b8_28 && b9_37 && b10_36 && b11_18 && b12_59) {
matched = true;
pattern_id = 1234;
}
if(b0_73 && b1_9 && b2_16 && b3_9 && b4_27 && b5_56 && b6_11 && b7_41 && b8_40 && b9_14 && b10_6 && b11_26 && b12_32 && b13_38 && b14_61) {
matched = true;
pattern_id = 1235;
}
if(b0_73 && b1_2 && b2_50 && b3_50 && b4_22 && b5_6 && b6_11 && b7_1 && b8_49 && b9_49 && b10_7 && b11_40 && b12_50 && b13_20) {
matched = true;
pattern_id = 1236;
}
if(b0_73 && b1_47 && b2_20 && b3_21 && b4_62 && b5_74 && b6_66 && b7_35 && b8_67 && b9_32 && b10_22 && b11_28 && b12_59 && b13_69 && b14_5 && b15_25 && b16_55 && b17_26 && b18_4 && b19_57 && b20_32 && b21_27 && b22_42 && b23_59 && b24_17 && b25_44 && b26_25 && b27_33 && b28_27 && b29_40 && b30_17 && b31_25 && b32_3 && b33_43 && b34_12 && b35_1 && b36_24 && b37_14 && b38_24 && b39_21 && b40_15 && b41_16 && b42_3 && b43_8 && b44_9 && b45_4 && b46_31 && b47_19 && b48_19 && b49_21 && b50_29 && b51_3 && b52_20 && b53_20 && b54_3 && b55_21 && b56_4 && b57_13 && b58_9 && b59_15 && b60_14 && b61_4 && b62_13 && b63_12 && b64_11 && b65_15 && b66_5 && b67_12 && b68_6 && b69_11 && b70_15 && b71_4 && b72_10 && b73_12 && b74_13 && b75_10 && b76_9 && b77_2 && b78_2 && b79_9 && b80_10 && b81_9 && b82_10 && b83_10 && b84_7 && b85_7 && b86_8 && b87_6 && b88_6) {
matched = true;
pattern_id = 1237;
}
if(b0_73 && b1_58 && b2_14 && b3_27 && b4_1 && b5_16 && b6_34 && b7_34 && b8_10 && b9_16 && b10_3 && b11_20 && b12_65 && b13_27 && b14_51 && b15_3 && b16_31 && b17_29 && b18_50 && b19_9 && b20_28 && b21_36 && b22_19 && b23_46 && b24_9 && b25_8 && b26_13 && b27_8 && b28_54) {
matched = true;
pattern_id = 1238;
}
if(b0_73 && b1_14 && b2_3 && b3_34 && b4_22 && b5_74 && b6_66 && b7_35 && b8_14 && b9_40 && b10_34 && b11_32 && b12_61 && b13_43 && b14_36 && b15_5 && b16_8 && b17_29 && b18_9 && b19_6 && b20_29 && b21_1 && b22_1 && b23_27 && b24_17 && b25_24 && b26_25 && b27_46) {
matched = true;
pattern_id = 1239;
}
if(b0_73 && b1_14 && b2_3 && b3_34 && b4_22 && b5_74 && b6_66 && b7_35 && b8_14 && b9_40 && b10_34 && b11_32 && b12_61 && b13_16 && b14_38 && b15_31 && b16_24 && b17_34 && b18_9 && b19_57 && b20_9 && b21_1 && b22_17 && b23_7 && b24_40 && b25_22 && b26_34 && b27_2) {
matched = true;
pattern_id = 1240;
}
if(b0_73 && b1_14 && b2_3 && b3_34 && b4_22 && b5_74 && b6_66 && b7_2 && b8_5 && b9_27 && b10_7 && b11_32 && b12_61 && b13_21 && b14_17 && b15_25 && b16_5 && b17_2 && b18_37 && b19_34 && b20_28 && b21_42 && b22_52 && b23_18 && b24_47 && b25_42 && b26_35 && b27_43 && b28_47 && b29_1 && b30_1 && b31_15 && b32_3 && b33_20 && b34_24 && b35_26 && b36_22 && b37_21 && b38_22 && b39_29) {
matched = true;
pattern_id = 1241;
}
if(b0_73 && b1_21 && b2_49 && b3_20 && b4_18 && b5_27 && b6_7) {
matched = true;
pattern_id = 1242;
}
if(b0_73 && b1_21 && b2_49 && b3_20 && b4_18 && b5_27 && b6_7 && b7_1 && b8_2 && b9_14 && b10_43 && b11_29 && b12_10 && b13_31 && b14_27 && b15_7 && b16_65 && b17_63 && b18_63 && b19_30 && b20_9 && b21_41 && b22_56 && b23_7 && b24_16 && b25_2 && b26_17 && b27_53 && b28_52 && b29_51 && b30_47 && b31_48 && b32_47 && b33_4 && b34_14 && b35_3 && b36_3 && b37_6 && b38_5 && b39_37 && b40_8 && b41_37 && b42_3 && b43_30 && b44_19 && b45_4 && b46_29 && b47_3 && b48_18 && b49_18 && b50_28 && b51_18 && b52_5 && b53_13 && b54_15 && b55_17 && b56_17 && b57_3 && b58_18 && b59_14 && b60_13 && b61_14 && b62_12 && b63_5) {
matched = true;
pattern_id = 1243;
}
if(b0_73 && b1_1 && b2_26 && b3_63 && b4_32 && b5_23 && b6_68 && b7_19 && b8_10 && b9_4 && b10_62 && b11_10 && b12_10 && b13_67 && b14_31 && b15_8 && b16_26 && b17_23 && b18_62 && b19_6 && b20_12 && b21_45 && b22_1 && b23_7 && b24_49 && b25_5 && b26_11 && b27_8 && b28_51 && b29_6 && b30_2 && b31_47) {
matched = true;
pattern_id = 1244;
}
if(b0_44 && b1_36 && b2_61 && b3_5 && b4_52 && b5_56 && b6_23 && b7_33 && b8_48) {
matched = true;
pattern_id = 1245;
}
if(b0_44 && b1_36 && b2_4 && b3_53 && b4_36 && b5_23 && b6_8 && b7_47 && b8_40 && b9_34 && b10_17 && b11_40 && b12_10 && b13_31 && b14_27 && b15_4 && b16_14 && b17_14 && b18_3 && b19_26 && b20_1 && b21_4) {
matched = true;
pattern_id = 1246;
}
if(b0_44 && b1_15 && b2_31 && b3_37 && b4_4 && b5_19) {
matched = true;
pattern_id = 1247;
}
if(b0_44 && b1_15 && b2_31 && b3_37 && b4_4 && b5_19 && b6_41 && b7_4 && b8_45 && b9_29 && b10_10 && b11_22) {
matched = true;
pattern_id = 1248;
}
if(b0_44 && b1_15 && b2_31 && b3_37 && b4_4 && b5_19 && b6_9 && b7_54 && b8_11 && b9_43 && b10_32 && b11_6 && b12_17 && b13_4 && b14_51) {
matched = true;
pattern_id = 1249;
}
if(b0_44 && b1_45) {
matched = true;
pattern_id = 1250;
}
if(b0_44 && b1_45 && b2_48 && b3_37 && b4_43 && b5_45 && b6_41 && b7_34 && b8_37 && b9_29 && b10_29 && b11_29 && b12_19 && b13_20 && b14_19 && b15_17) {
matched = true;
pattern_id = 1251;
}
if(b0_44 && b1_39 && b2_25 && b3_27 && b4_18 && b5_25 && b6_74 && b7_35 && b8_42 && b9_9 && b10_17 && b11_11 && b12_44 && b13_58 && b14_51 && b15_3 && b16_25 && b17_27 && b18_20 && b19_9 && b20_65 && b21_63 && b22_43 && b23_42 && b24_58 && b25_32 && b26_60) {
matched = true;
pattern_id = 1252;
}
if(b0_44 && b1_39 && b2_25 && b3_27 && b4_18 && b5_25 && b6_74 && b7_46 && b8_5 && b9_10 && b10_46 && b11_26 && b12_17 && b13_53 && b14_24 && b15_22 && b16_37 && b17_30 && b18_23 && b19_31 && b20_28 && b21_29 && b22_22 && b23_49 && b24_37 && b25_18 && b26_30 && b27_47 && b28_65 && b29_62 && b30_15 && b31_32 && b32_40 && b33_16 && b34_17 && b35_20 && b36_9 && b37_28 && b38_22 && b39_29 && b40_15 && b41_33 && b42_42 && b43_49 && b44_45 && b45_42 && b46_44 && b47_27 && b48_15 && b49_40) {
matched = true;
pattern_id = 1253;
}
if(b0_44 && b1_49 && b2_13 && b3_63 && b4_39 && b5_38 && b6_62 && b7_34) {
matched = true;
pattern_id = 1254;
}
if(b0_31) {
matched = true;
pattern_id = 1255;
}
if(b0_31 && b1_45 && b2_4 && b3_52 && b4_8 && b5_23 && b6_59 && b7_31 && b8_27) {
matched = true;
pattern_id = 1256;
}
if(b0_65 && b1_67 && b2_65 && b3_55 && b4_55 && b5_64 && b6_61 && b7_62 && b8_18 && b9_52) {
matched = true;
pattern_id = 1257;
}
if(b0_65 && b1_27 && b2_25 && b3_24 && b4_12 && b5_42 && b6_7 && b7_22 && b8_14 && b9_17 && b10_9 && b11_26 && b12_5 && b13_22 && b14_25) {
matched = true;
pattern_id = 1258;
}
if(b0_65 && b1_28 && b2_41 && b3_15 && b4_6 && b5_41 && b6_3 && b7_32 && b8_12 && b9_28 && b10_17 && b11_27 && b12_4) {
matched = true;
pattern_id = 1259;
}
if(b0_65 && b1_49 && b2_43 && b3_16 && b4_12 && b5_5 && b6_7 && b7_8 && b8_54 && b9_49 && b10_43 && b11_3 && b12_16) {
matched = true;
pattern_id = 1260;
}
if(b0_65 && b1_9 && b2_40 && b3_9 && b4_40 && b5_63 && b6_44 && b7_61 && b8_43) {
matched = true;
pattern_id = 1261;
}
if(b0_65 && b1_35 && b2_25 && b3_18 && b4_2 && b5_11 && b6_38 && b7_10 && b8_37) {
matched = true;
pattern_id = 1262;
}
if(b0_65 && b1_59 && b2_50 && b3_51) {
matched = true;
pattern_id = 1263;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_14 && b5_26 && b6_37 && b7_29 && b8_12 && b9_28 && b10_5) {
matched = true;
pattern_id = 1264;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_15 && b5_42 && b6_18 && b7_54 && b8_39 && b9_14 && b10_17 && b11_27 && b12_39) {
matched = true;
pattern_id = 1265;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_2 && b5_42 && b6_8 && b7_8 && b8_35 && b9_44 && b10_56 && b11_3 && b12_20) {
matched = true;
pattern_id = 1266;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_2 && b5_42 && b6_3 && b7_47 && b8_39 && b9_53 && b10_17 && b11_23) {
matched = true;
pattern_id = 1267;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_50 && b5_20 && b6_36 && b7_2 && b8_5 && b9_17 && b10_30 && b11_6 && b12_37 && b13_38) {
matched = true;
pattern_id = 1268;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_50 && b5_26 && b6_10 && b7_63 && b8_40 && b9_14 && b10_6 && b11_35) {
matched = true;
pattern_id = 1269;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_11 && b5_6 && b6_10 && b7_63 && b8_47 && b9_49 && b10_25 && b11_59) {
matched = true;
pattern_id = 1270;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_11 && b5_6 && b6_10 && b7_63 && b8_11 && b9_11 && b10_25 && b11_6) {
matched = true;
pattern_id = 1271;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_11 && b5_6 && b6_10 && b7_11 && b8_36 && b9_41 && b10_59 && b11_30 && b12_38 && b13_22 && b14_50) {
matched = true;
pattern_id = 1272;
}
if(b0_41) {
matched = true;
pattern_id = 1273;
}
if(b0_41 && b1_39) {
matched = true;
pattern_id = 1274;
}
if(b0_41 && b1_49 && b2_51 && b3_25 && b4_1 && b5_18 && b6_49 && b7_43 && b8_44 && b9_35 && b10_37 && b11_2 && b12_9 && b13_28 && b14_29 && b15_19 && b16_26 && b17_24 && b18_21 && b19_1 && b20_26) {
matched = true;
pattern_id = 1275;
}
if(b0_41 && b1_1 && b2_9 && b3_31 && b4_1 && b5_1 && b6_16 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_13 && b23_2 && b24_15 && b25_13 && b26_2 && b27_7 && b28_8 && b29_2 && b30_9 && b31_10 && b32_10 && b33_56 && b34_3) {
matched = true;
pattern_id = 1276;
}
if(b0_16) {
matched = true;
pattern_id = 1277;
}
if(b0_16 && b1_19 && b2_5 && b3_12 && b4_20 && b5_19 && b6_15 && b7_13 && b8_4 && b9_8) {
matched = true;
pattern_id = 1278;
}
if(b0_16 && b1_19 && b2_5 && b3_12 && b4_20 && b5_19 && b6_15 && b7_13 && b8_4 && b9_8 && b10_33 && b11_22 && b12_29 && b13_17 && b14_10 && b15_24) {
matched = true;
pattern_id = 1279;
}
if(b0_16 && b1_19 && b2_5 && b3_12 && b4_20 && b5_19 && b6_15 && b7_13 && b8_4 && b9_8 && b10_33 && b11_22 && b12_29 && b13_17 && b14_10 && b15_24 && b16_21 && b17_24 && b18_35 && b19_13 && b20_22 && b21_28 && b22_17 && b23_10 && b24_38 && b25_17 && b26_18 && b27_32 && b28_11 && b29_13 && b30_31) {
matched = true;
pattern_id = 1280;
}
if(b0_16 && b1_12 && b2_32 && b3_39 && b4_40 && b5_35 && b6_44 && b7_37 && b8_38 && b9_31 && b10_31 && b11_31 && b12_21 && b13_23 && b14_22 && b15_19 && b16_19 && b17_22 && b18_16 && b19_20 && b20_21 && b21_16 && b22_16 && b23_10 && b24_13 && b25_5 && b26_5 && b27_15 && b28_7 && b29_15 && b30_11 && b31_12) {
matched = true;
pattern_id = 1281;
}
if(b0_16 && b1_12 && b2_32 && b3_69 && b4_68 && b5_41 && b6_15 && b7_5 && b8_52 && b9_60 && b10_70) {
matched = true;
pattern_id = 1282;
}
if(b0_16 && b1_27 && b2_30 && b3_3 && b4_9 && b5_49 && b6_29 && b7_5 && b8_43 && b9_8 && b10_36 && b11_36 && b12_27) {
matched = true;
pattern_id = 1283;
}
if(b0_16 && b1_27 && b2_30 && b3_9 && b4_28 && b5_31 && b6_25 && b7_16) {
matched = true;
pattern_id = 1284;
}
if(b0_16 && b1_63 && b2_44 && b3_13) {
matched = true;
pattern_id = 1285;
}
if(b0_16 && b1_49 && b2_54 && b3_38) {
matched = true;
pattern_id = 1286;
}
if(b0_16 && b1_49 && b2_11 && b3_30) {
matched = true;
pattern_id = 1287;
}
if(b0_16 && b1_49 && b2_11 && b3_30 && b4_9 && b5_41) {
matched = true;
pattern_id = 1288;
}
if(b0_16 && b1_57 && b2_69 && b3_12 && b4_34 && b5_68 && b6_4 && b7_73 && b8_57 && b9_64 && b10_45 && b11_52 && b12_49) {
matched = true;
pattern_id = 1289;
}
if(b0_16 && b1_57 && b2_69 && b3_44 && b4_54 && b5_23 && b6_1 && b7_4 && b8_10 && b9_14 && b10_6 && b11_6 && b12_4 && b13_26 && b14_1 && b15_1 && b16_15 && b17_18 && b18_15 && b19_31 && b20_28) {
matched = true;
pattern_id = 1290;
}
if(b0_16 && b1_73 && b2_40 && b3_65) {
matched = true;
pattern_id = 1291;
}
if(b0_16 && b1_73 && b2_40 && b3_65 && b4_40 && b5_63 && b6_62 && b7_64 && b8_32 && b9_8 && b10_36 && b11_18) {
matched = true;
pattern_id = 1292;
}
if(b0_16 && b1_73 && b2_40 && b3_65 && b4_5 && b5_63 && b6_60 && b7_50) {
matched = true;
pattern_id = 1293;
}
if(b0_16 && b1_11 && b2_16 && b3_11 && b4_7 && b5_42 && b6_37 && b7_17 && b8_7 && b9_17 && b10_6 && b11_34 && b12_38 && b13_22 && b14_41 && b15_7 && b16_14 && b17_24 && b18_8 && b19_1 && b20_27 && b21_20 && b22_19 && b23_16 && b24_32 && b25_1 && b26_19 && b27_54 && b28_55 && b29_7 && b30_50 && b31_4 && b32_12 && b33_7 && b34_3 && b35_42 && b36_35 && b37_4 && b38_2 && b39_4 && b40_38 && b41_5 && b42_8 && b43_6 && b44_5) {
matched = true;
pattern_id = 1294;
}
if(b0_16 && b1_11 && b2_16 && b3_11 && b4_7 && b5_42 && b6_37 && b7_57 && b8_42 && b9_11 && b10_38 && b11_4 && b12_17 && b13_53 && b14_17 && b15_61 && b16_1 && b17_29 && b18_11 && b19_49 && b20_35 && b21_10 && b22_1 && b23_23 && b24_13 && b25_13 && b26_2 && b27_49 && b28_8 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 1295;
}
if(b0_16 && b1_11 && b2_16 && b3_11 && b4_7 && b5_42 && b6_69 && b7_1 && b8_42 && b9_43 && b10_5 && b11_30 && b12_38 && b13_30 && b14_20 && b15_25 && b16_24 && b17_27 && b18_11 && b19_43 && b20_43 && b21_19 && b22_28 && b23_54 && b24_22 && b25_18 && b26_24 && b27_31 && b28_18 && b29_26 && b30_27 && b31_32 && b32_27 && b33_11 && b34_37 && b35_17 && b36_37 && b37_26 && b38_21 && b39_9 && b40_30 && b41_36 && b42_30 && b43_31 && b44_36 && b45_28 && b46_14 && b47_14 && b48_14 && b49_21 && b50_23 && b51_1 && b52_17 && b53_15 && b54_10 && b55_17 && b56_14 && b57_10 && b58_9 && b59_11 && b60_9 && b61_3 && b62_10 && b63_9 && b64_9 && b65_12 && b66_9 && b67_9 && b68_9 && b69_8 && b70_12 && b71_8 && b72_7 && b73_8 && b74_9 && b75_4 && b76_7 && b77_9 && b78_9 && b79_7 && b80_8 && b81_2 && b82_8 && b83_9 && b84_6 && b85_6 && b86_7 && b87_5 && b88_4 && b89_7 && b90_6 && b91_4 && b92_4 && b93_5 && b94_5 && b95_5 && b96_5 && b97_4 && b98_5 && b99_5 && b100_5 && b101_4 && b102_6 && b103_4 && b104_2 && b105_4 && b106_5 && b107_3 && b108_2 && b109_4 && b110_4 && b111_3 && b112_3 && b113_4) {
matched = true;
pattern_id = 1296;
}
if(b0_16 && b1_11 && b2_16 && b3_11 && b4_7 && b5_42 && b6_5 && b7_6 && b8_4 && b9_13 && b10_3 && b11_1 && b12_10 && b13_49 && b14_49 && b15_69 && b16_15 && b17_1 && b18_42 && b19_1 && b20_1 && b21_28 && b22_1 && b23_63 && b24_38 && b25_54 && b26_61 && b27_60 && b28_62 && b29_1 && b30_10 && b31_5 && b32_1 && b33_27 && b34_1 && b35_1) {
matched = true;
pattern_id = 1297;
}
if(b0_16 && b1_11 && b2_62 && b3_43 && b4_12 && b5_42 && b6_35 && b7_51 && b8_39) {
matched = true;
pattern_id = 1298;
}
if(b0_16 && b1_14 && b2_15 && b3_17 && b4_15 && b5_4 && b6_13 && b7_12 && b8_3 && b9_7 && b10_6 && b11_4 && b12_4 && b13_3 && b14_3 && b15_2 && b16_2 && b17_2 && b18_2 && b19_2 && b20_2 && b21_2) {
matched = true;
pattern_id = 1299;
}
if(b0_16 && b1_35 && b2_43 && b3_43 && b4_16 && b5_11) {
matched = true;
pattern_id = 1300;
}
if(b0_16 && b1_16 && b2_12 && b3_7 && b4_24 && b5_6 && b6_55 && b7_9) {
matched = true;
pattern_id = 1301;
}
if(b0_16 && b1_56 && b2_3 && b3_17 && b4_12 && b5_20 && b6_11 && b7_11 && b8_41 && b9_27 && b10_13 && b11_37 && b12_26 && b13_22 && b14_3 && b15_50 && b16_22 && b17_36 && b18_23 && b19_40 && b20_25 && b21_29 && b22_22 && b23_24 && b24_41 && b25_42 && b26_45) {
matched = true;
pattern_id = 1302;
}
if(b0_16 && b1_56 && b2_3 && b3_17 && b4_44 && b5_8 && b6_35 && b7_69 && b8_42 && b9_10 && b10_26 && b11_6 && b12_3 && b13_26 && b14_33 && b15_24 && b16_15) {
matched = true;
pattern_id = 1303;
}
if(b0_16 && b1_56 && b2_3 && b3_17 && b4_44 && b5_8 && b6_35 && b7_69 && b8_42 && b9_10 && b10_26 && b11_6 && b12_3 && b13_26 && b14_33 && b15_24 && b16_15 && b17_2 && b18_50 && b19_35 && b20_30 && b21_27 && b22_39) {
matched = true;
pattern_id = 1304;
}
if(b0_4 && b1_28 && b2_5 && b3_61 && b4_5 && b5_5) {
matched = true;
pattern_id = 1305;
}
if(b0_4 && b1_46) {
matched = true;
pattern_id = 1306;
}
if(b0_4 && b1_4 && b2_7 && b3_28 && b4_4 && b5_1 && b6_12 && b7_4 && b8_27 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 1307;
}
if(b0_4 && b1_4 && b2_4 && b3_4 && b4_4 && b5_4 && b6_1 && b7_4 && b8_3 && b9_1 && b10_3 && b11_2 && b12_2 && b13_2 && b14_2) {
matched = true;
pattern_id = 1308;
}
if(b0_4 && b1_57 && b2_5 && b3_10 && b4_5 && b5_50) {
matched = true;
pattern_id = 1309;
}
if(b0_4 && b1_73 && b2_58 && b3_25 && b4_34 && b5_4 && b6_67 && b7_40 && b8_20 && b9_4 && b10_10 && b11_22 && b12_10) {
matched = true;
pattern_id = 1310;
}
if(b0_4 && b1_2 && b2_41 && b3_14 && b4_14 && b5_10 && b6_18 && b7_39 && b8_42 && b9_11 && b10_7 && b11_2 && b12_26 && b13_4 && b14_3 && b15_16 && b16_24 && b17_26 && b18_4 && b19_12 && b20_24 && b21_19 && b22_19) {
matched = true;
pattern_id = 1311;
}
if(b0_4 && b1_2 && b2_3 && b3_8 && b4_22 && b5_6 && b6_13 && b7_31 && b8_11 && b9_34) {
matched = true;
pattern_id = 1312;
}
if(b0_4 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_32 && b7_3) {
matched = true;
pattern_id = 1313;
}
if(b0_39 && b1_19 && b2_44 && b3_14) {
matched = true;
pattern_id = 1314;
}
if(b0_39 && b1_19 && b2_11 && b3_12) {
matched = true;
pattern_id = 1315;
}
if(b0_39 && b1_7 && b2_32 && b3_63 && b4_8 && b5_31 && b6_9 && b7_19 && b8_32 && b9_36 && b10_15 && b11_10 && b12_51 && b13_15 && b14_15 && b15_11 && b16_17 && b17_16 && b18_7 && b19_27 && b20_6 && b21_45 && b22_5 && b23_30) {
matched = true;
pattern_id = 1316;
}
if(b0_39 && b1_28 && b2_44) {
matched = true;
pattern_id = 1317;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_45 && b9_46 && b10_15 && b11_36 && b12_23 && b13_23 && b14_23 && b15_11 && b16_35 && b17_42 && b18_2 && b19_36 && b20_38 && b21_31 && b22_6 && b23_29 && b24_26 && b25_32 && b26_31 && b27_8 && b28_9 && b29_8 && b30_5 && b31_15 && b32_13 && b33_4) {
matched = true;
pattern_id = 1318;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_45 && b9_22 && b10_15 && b11_51 && b12_43 && b13_45 && b14_44 && b15_7 && b16_27 && b17_6 && b18_3 && b19_26 && b20_7 && b21_4) {
matched = true;
pattern_id = 1319;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_52 && b9_47 && b10_15 && b11_51 && b12_43 && b13_45 && b14_44 && b15_7 && b16_27 && b17_6 && b18_3 && b19_26 && b20_7 && b21_4) {
matched = true;
pattern_id = 1320;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_51 && b9_22 && b10_36 && b11_36 && b12_9 && b13_34 && b14_15 && b15_8 && b16_34 && b17_41 && b18_8 && b19_26 && b20_16 && b21_3 && b22_10 && b23_5 && b24_9) {
matched = true;
pattern_id = 1321;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_51 && b9_22 && b10_36 && b11_36 && b12_9 && b13_34 && b14_15 && b15_2 && b16_36 && b17_42 && b18_8 && b19_26 && b20_16 && b21_3 && b22_10 && b23_5 && b24_9) {
matched = true;
pattern_id = 1322;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_53 && b9_22 && b10_36 && b11_36 && b12_9 && b13_34 && b14_15 && b15_2 && b16_36 && b17_42 && b18_8 && b19_26 && b20_16 && b21_3 && b22_10 && b23_5 && b24_9) {
matched = true;
pattern_id = 1323;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_53 && b9_22 && b10_36 && b11_52 && b12_42 && b13_23 && b14_45 && b15_39 && b16_37 && b17_22 && b18_17 && b19_5 && b20_42 && b21_17 && b22_35 && b23_33 && b24_9 && b25_8 && b26_14 && b27_2 && b28_9 && b29_11 && b30_2) {
matched = true;
pattern_id = 1324;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_31 && b9_22 && b10_53 && b11_53 && b12_14 && b13_46 && b14_46 && b15_24 && b16_38 && b17_45 && b18_8 && b19_26 && b20_16 && b21_3 && b22_10 && b23_5 && b24_9) {
matched = true;
pattern_id = 1325;
}
if(b0_39 && b1_31 && b2_59 && b3_3 && b4_54 && b5_31 && b6_42 && b7_57 && b8_45 && b9_39 && b10_52 && b11_50 && b12_42 && b13_44 && b14_43 && b15_8 && b16_21 && b17_43 && b18_35 && b19_37 && b20_40 && b21_33 && b22_32 && b23_30 && b24_18 && b25_6 && b26_13 && b27_25 && b28_8 && b29_5 && b30_8 && b31_4) {
matched = true;
pattern_id = 1326;
}
if(b0_39 && b1_31 && b2_59 && b3_10 && b4_40 && b5_58 && b6_49 && b7_13 && b8_29 && b9_8 && b10_51 && b11_36 && b12_40 && b13_42 && b14_15 && b15_12 && b16_28 && b17_24 && b18_16 && b19_37 && b20_39 && b21_32 && b22_32 && b23_1 && b24_9 && b25_8 && b26_14 && b27_2 && b28_9 && b29_11 && b30_2) {
matched = true;
pattern_id = 1327;
}
if(b0_39 && b1_31 && b2_59 && b3_10 && b4_40 && b5_58 && b6_49 && b7_13 && b8_29 && b9_8 && b10_51 && b11_36 && b12_40 && b13_42 && b14_15 && b15_12 && b16_33 && b17_20 && b18_17 && b19_30 && b20_36 && b21_28 && b22_29 && b23_17 && b24_9 && b25_8 && b26_14 && b27_2 && b28_9 && b29_11 && b30_2) {
matched = true;
pattern_id = 1328;
}
if(b0_39 && b1_46 && b2_31) {
matched = true;
pattern_id = 1329;
}
if(b0_39 && b1_20 && b2_22 && b3_64 && b4_40 && b5_31 && b6_62) {
matched = true;
pattern_id = 1330;
}
if(b0_39 && b1_20 && b2_11 && b3_68) {
matched = true;
pattern_id = 1331;
}
if(b0_39 && b1_57 && b2_9 && b3_12 && b4_52 && b5_67) {
matched = true;
pattern_id = 1332;
}
if(b0_39 && b1_41 && b2_31) {
matched = true;
pattern_id = 1333;
}
if(b0_39 && b1_41 && b2_31 && b3_14 && b4_1) {
matched = true;
pattern_id = 1334;
}
if(b0_39 && b1_21 && b2_63 && b3_11 && b4_51 && b5_61 && b6_35 && b7_9 && b8_2 && b9_39 && b10_26 && b11_30 && b12_5 && b13_20) {
matched = true;
pattern_id = 1335;
}
if(b0_39 && b1_21 && b2_21 && b3_40 && b4_44 && b5_4 && b6_47 && b7_10 && b8_35 && b9_33 && b10_6 && b11_23 && b12_24 && b13_25 && b14_3 && b15_2 && b16_22 && b17_4 && b18_18) {
matched = true;
pattern_id = 1336;
}
if(b0_39 && b1_8 && b2_6 && b3_34 && b4_18 && b5_20 && b6_34 && b7_1 && b8_41 && b9_6 && b10_35 && b11_35 && b12_25 && b13_5 && b14_25 && b15_3 && b16_23) {
matched = true;
pattern_id = 1337;
}
if(b0_39 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_38 && b13_19 && b14_19) {
matched = true;
pattern_id = 1338;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_45 && b9_49 && b10_11 && b11_35 && b12_26 && b13_16 && b14_24 && b15_25 && b16_24 && b17_27 && b18_11 && b19_6 && b20_51 && b21_28 && b22_1) {
matched = true;
pattern_id = 1339;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_52 && b9_11 && b10_43 && b11_6 && b12_39 && b13_27 && b14_28 && b15_40) {
matched = true;
pattern_id = 1340;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3) {
matched = true;
pattern_id = 1341;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_7 && b17_7 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 1342;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_7 && b17_19 && b18_1 && b19_6 && b20_1 && b21_59 && b22_13 && b23_2 && b24_38 && b25_6) {
matched = true;
pattern_id = 1343;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_7 && b17_11) {
matched = true;
pattern_id = 1344;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_7 && b17_11 && b18_65) {
matched = true;
pattern_id = 1345;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_27 && b17_1 && b18_24 && b19_6 && b20_1 && b21_59 && b22_13 && b23_2 && b24_38 && b25_6) {
matched = true;
pattern_id = 1346;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_14 && b17_1) {
matched = true;
pattern_id = 1347;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_51 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7) {
matched = true;
pattern_id = 1348;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_2 && b15_6 && b16_21 && b17_8) {
matched = true;
pattern_id = 1349;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_14 && b10_28 && b11_27 && b12_16 && b13_37 && b14_17 && b15_31 && b16_50 && b17_23 && b18_11 && b19_40 && b20_3 && b21_20 && b22_27 && b23_16 && b24_37) {
matched = true;
pattern_id = 1350;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3) {
matched = true;
pattern_id = 1351;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_4 && b16_27 && b17_1 && b18_8 && b19_22 && b20_33 && b21_14 && b22_41 && b23_18 && b24_23) {
matched = true;
pattern_id = 1352;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_4 && b16_27 && b17_1 && b18_8 && b19_34 && b20_2 && b21_44 && b22_3 && b23_39 && b24_27 && b25_23 && b26_29 && b27_18 && b28_23) {
matched = true;
pattern_id = 1353;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_4 && b16_27 && b17_1 && b18_8 && b19_51 && b20_27 && b21_20 && b22_19 && b23_31 && b24_23 && b25_63 && b26_41 && b27_18 && b28_28 && b29_53 && b30_36 && b31_29 && b32_23 && b33_34 && b34_3 && b35_7 && b36_5 && b37_3 && b38_5 && b39_20 && b40_2 && b41_4 && b42_13 && b43_2 && b44_3 && b45_35 && b46_2) {
matched = true;
pattern_id = 1354;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_7) {
matched = true;
pattern_id = 1355;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_7 && b16_1 && b17_10 && b18_19 && b19_2 && b20_37 && b21_27 && b22_39 && b23_32 && b24_32 && b25_1 && b26_3 && b27_37 && b28_32 && b29_32 && b30_33 && b31_29 && b32_34 && b33_28) {
matched = true;
pattern_id = 1356;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_35 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_7) {
matched = true;
pattern_id = 1357;
}
if(b0_39 && b1_8 && b2_20 && b3_19 && b4_27 && b5_6 && b6_69 && b7_1 && b8_41 && b9_27 && b10_43 && b11_54 && b12_5 && b13_20 && b14_38 && b15_22 && b16_27 && b17_55) {
matched = true;
pattern_id = 1358;
}
if(b0_39 && b1_16 && b2_20 && b3_6 && b4_6 && b5_23 && b6_1 && b7_49 && b8_3 && b9_1 && b10_40 && b11_2 && b12_2 && b13_9 && b14_3 && b15_1 && b16_10 && b17_2 && b18_1 && b19_8 && b20_8 && b21_1 && b22_7 && b23_8 && b24_15 && b25_11 && b26_11 && b27_20 && b28_25 && b29_19 && b30_17 && b31_20 && b32_19 && b33_15 && b34_15 && b35_17 && b36_7 && b37_14 && b38_16) {
matched = true;
pattern_id = 1359;
}
if(b0_39 && b1_16 && b2_20 && b3_6 && b4_6 && b5_23 && b6_1 && b7_22 && b8_3 && b9_1 && b10_33 && b11_20 && b12_21 && b13_6 && b14_35 && b15_30 && b16_18 && b17_32 && b18_3 && b19_29 && b20_26 && b21_24 && b22_25 && b23_19 && b24_21 && b25_20) {
matched = true;
pattern_id = 1360;
}
if(b0_39 && b1_1 && b2_1 && b3_32 && b4_1 && b5_39 && b6_27 && b7_3 && b8_26 && b9_4 && b10_10 && b11_16 && b12_6 && b13_8 && b14_14 && b15_7 && b16_12 && b17_8 && b18_1 && b19_7 && b20_8 && b21_6 && b22_7 && b23_7 && b24_12 && b25_6 && b26_2 && b27_12 && b28_8 && b29_9 && b30_9 && b31_10 && b32_7 && b33_7 && b34_5 && b35_6 && b36_5 && b37_3 && b38_4 && b39_4 && b40_3 && b41_3 && b42_3 && b43_3 && b44_3 && b45_3 && b46_3 && b47_2 && b48_2 && b49_2 && b50_2 && b51_2 && b52_2 && b53_2 && b54_2 && b55_2 && b56_2 && b57_2 && b58_2 && b59_2 && b60_2 && b61_2 && b62_2 && b63_2 && b64_2 && b65_2 && b66_2 && b67_2 && b68_2 && b69_2 && b70_2 && b71_2 && b72_2 && b73_2 && b74_2 && b75_2 && b76_2 && b77_2 && b78_2 && b79_2 && b80_2 && b81_2 && b82_2 && b83_2) {
matched = true;
pattern_id = 1361;
}
if(b0_46 && b1_28 && b2_44 && b3_30) {
matched = true;
pattern_id = 1362;
}
if(b0_46 && b1_28 && b2_44 && b3_30 && b4_52 && b5_67) {
matched = true;
pattern_id = 1363;
}
if(b0_46 && b1_28 && b2_44 && b3_30 && b4_52 && b5_67 && b6_12) {
matched = true;
pattern_id = 1364;
}
if(b0_46 && b1_28 && b2_45 && b3_63 && b4_58 && b5_49 && b6_30 && b7_17) {
matched = true;
pattern_id = 1365;
}
if(b0_46 && b1_28 && b2_39 && b3_5 && b4_25 && b5_33) {
matched = true;
pattern_id = 1366;
}
if(b0_46 && b1_43 && b2_45 && b3_5 && b4_4 && b5_1 && b6_1 && b7_4 && b8_1 && b9_1 && b10_10 && b11_7) {
matched = true;
pattern_id = 1367;
}
if(b0_46 && b1_2 && b2_3 && b3_26 && b4_32 && b5_1 && b6_1 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_13 && b23_2 && b24_15 && b25_13 && b26_2 && b27_7 && b28_8 && b29_2 && b30_9 && b31_10 && b32_7 && b33_1 && b34_5 && b35_7 && b36_4 && b37_3 && b38_5 && b39_4 && b40_3) {
matched = true;
pattern_id = 1368;
}
if(b0_67 && b1_36 && b2_36 && b3_26 && b4_6 && b5_11 && b6_20 && b7_1 && b8_5 && b9_14 && b10_4 && b11_6 && b12_20 && b13_25 && b14_3 && b15_33 && b16_54 && b17_27 && b18_22 && b19_34 && b20_27 && b21_2 && b22_41 && b23_34) {
matched = true;
pattern_id = 1369;
}
if(b0_67 && b1_36 && b2_16 && b3_27 && b4_2 && b5_4 && b6_24 && b7_10 && b8_8 && b9_53 && b10_17 && b11_23 && b12_10 && b13_11 && b14_10 && b15_7 && b16_1 && b17_46 && b18_32 && b19_21 && b20_41 && b21_27 && b22_20 && b23_44 && b24_9 && b25_15 && b26_18 && b27_8 && b28_8 && b29_26 && b30_27 && b31_21 && b32_36 && b33_11 && b34_31 && b35_5 && b36_11 && b37_28 && b38_29 && b39_12 && b40_2 && b41_21 && b42_16 && b43_22 && b44_14 && b45_11 && b46_14 && b47_15 && b48_7 && b49_7 && b50_12 && b51_7 && b52_8 && b53_9 && b54_2 && b55_10 && b56_7 && b57_2 && b58_7) {
matched = true;
pattern_id = 1370;
}
if(b0_67 && b1_36 && b2_50 && b3_20 && b4_44 && b5_42 && b6_3 && b7_32 && b8_14 && b9_34 && b10_1 && b11_3 && b12_20 && b13_4 && b14_21 && b15_31 && b16_15 && b17_7 && b18_35 && b19_6 && b20_8 && b21_25 && b22_45 && b23_31 && b24_32 && b25_13 && b26_34 && b27_1 && b28_38 && b29_37 && b30_19 && b31_28 && b32_20 && b33_8 && b34_32 && b35_2 && b36_12 && b37_27 && b38_20 && b39_19 && b40_26) {
matched = true;
pattern_id = 1371;
}
if(b0_67 && b1_36 && b2_50 && b3_20 && b4_44 && b5_42 && b6_3 && b7_32 && b8_14 && b9_34 && b10_1 && b11_3 && b12_20 && b13_4 && b14_21 && b15_31 && b16_15 && b17_7 && b18_35 && b19_6 && b20_8 && b21_27 && b22_20 && b23_38 && b24_22 && b25_23 && b26_35 && b27_17 && b28_8 && b29_29 && b30_13 && b31_23 && b32_25 && b33_18 && b34_31 && b35_27 && b36_22 && b37_1 && b38_25 && b39_11 && b40_25 && b41_16 && b42_10 && b43_1 && b44_21 && b45_3 && b46_13 && b47_1) {
matched = true;
pattern_id = 1372;
}
if(b0_67 && b1_10 && b2_56 && b3_64) {
matched = true;
pattern_id = 1373;
}
if(b0_67 && b1_34 && b2_5 && b3_67 && b4_5 && b5_63 && b6_31) {
matched = true;
pattern_id = 1374;
}
if(b0_67 && b1_34 && b2_9 && b3_63 && b4_63 && b5_58 && b6_31 && b7_56 && b8_53 && b9_61 && b10_51 && b11_52 && b12_11 && b13_13) {
matched = true;
pattern_id = 1375;
}
if(b0_67 && b1_34 && b2_11 && b3_64) {
matched = true;
pattern_id = 1376;
}
if(b0_67 && b1_64 && b2_4 && b3_1 && b4_4 && b5_4 && b6_1 && b7_6 && b8_3 && b9_1 && b10_62 && b11_20) {
matched = true;
pattern_id = 1377;
}
if(b0_67 && b1_16 && b2_23 && b3_6 && b4_17) {
matched = true;
pattern_id = 1378;
}
if(b0_67 && b1_54 && b2_3 && b3_11 && b4_3 && b5_12 && b6_7 && b7_29 && b8_3 && b9_7 && b10_6 && b11_34 && b12_37 && b13_41 && b14_17 && b15_7 && b16_14 && b17_24 && b18_3 && b19_26 && b20_1 && b21_4) {
matched = true;
pattern_id = 1379;
}
if(b0_67 && b1_1 && b2_1 && b3_1 && b4_32 && b5_63 && b6_5 && b7_4 && b8_1 && b9_4 && b10_14 && b11_20 && b12_2 && b13_2 && b14_2 && b15_39 && b16_15 && b17_1 && b18_1 && b19_6 && b20_14 && b21_4 && b22_2 && b23_2 && b24_9 && b25_58 && b26_11 && b27_7 && b28_2 && b29_1 && b30_25 && b31_4 && b32_7 && b33_1 && b34_3 && b35_46 && b36_3 && b37_4 && b38_5 && b39_7 && b40_44 && b41_13 && b42_8 && b43_4 && b44_5 && b45_36 && b46_2 && b47_3 && b48_4 && b49_4 && b50_31 && b51_3 && b52_4 && b53_4 && b54_3 && b55_31 && b56_3 && b57_3 && b58_4 && b59_3 && b60_23 && b61_4 && b62_4 && b63_3 && b64_3 && b65_24 && b66_4 && b67_4 && b68_4 && b69_3 && b70_24 && b71_4 && b72_3 && b73_4 && b74_3) {
matched = true;
pattern_id = 1380;
}
if(b0_7 && b1_7 && b2_7) {
matched = true;
pattern_id = 1381;
}
if(b0_7 && b1_28 && b2_40 && b3_63 && b4_64) {
matched = true;
pattern_id = 1382;
}
if(b0_7 && b1_43 && b2_22 && b3_39) {
matched = true;
pattern_id = 1383;
}
if(b0_7 && b1_57 && b2_54 && b3_67 && b4_59 && b5_58 && b6_65) {
matched = true;
pattern_id = 1384;
}
if(b0_7 && b1_10 && b2_11 && b3_14 && b4_10 && b5_10 && b6_10 && b7_9 && b8_3 && b9_6 && b10_5 && b11_3 && b12_3) {
matched = true;
pattern_id = 1385;
}
if(b0_7 && b1_10 && b2_11 && b3_13 && b4_9) {
matched = true;
pattern_id = 1386;
}
if(b0_7 && b1_3 && b2_14 && b3_43 && b4_6 && b5_6 && b6_34 && b7_17 && b8_2 && b9_17 && b10_28 && b11_30 && b12_17 && b13_38 && b14_21 && b15_31) {
matched = true;
pattern_id = 1387;
}
if(b0_7 && b1_16 && b2_43 && b3_16) {
matched = true;
pattern_id = 1388;
}
if(b0_7 && b1_16 && b2_20 && b3_34 && b4_32 && b5_38 && b6_15 && b7_3) {
matched = true;
pattern_id = 1389;
}
if(b0_3 && b1_28 && b2_40) {
matched = true;
pattern_id = 1390;
}
if(b0_3 && b1_28 && b2_40 && b3_14) {
matched = true;
pattern_id = 1391;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14) {
matched = true;
pattern_id = 1392;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_8 && b21_1 && b22_49 && b23_8 && b24_15 && b25_17 && b26_11) {
matched = true;
pattern_id = 1393;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_28 && b22_39 && b23_27 && b24_3 && b25_18 && b26_19 && b27_55 && b28_8 && b29_52 && b30_23 && b31_52 && b32_3 && b33_1 && b34_27 && b35_5 && b36_4 && b37_9 && b38_2 && b39_20 && b40_27 && b41_24 && b42_1 && b43_16 && b44_16 && b45_32 && b46_34 && b47_26 && b48_9 && b49_24 && b50_15 && b51_14 && b52_23 && b53_11 && b54_19) {
matched = true;
pattern_id = 1394;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_18 && b45_31 && b46_33 && b47_15 && b48_22 && b49_13 && b50_7 && b51_20 && b52_1 && b53_24 && b54_10 && b55_8 && b56_3 && b57_18 && b58_24 && b59_3 && b60_2 && b61_18 && b62_18 && b63_16 && b64_15 && b65_6 && b66_23 && b67_17 && b68_4 && b69_3 && b70_19 && b71_15 && b72_2 && b73_16 && b74_17 && b75_2 && b76_2 && b77_13 && b78_1 && b79_12 && b80_16 && b81_3 && b82_15 && b83_14 && b84_2 && b85_11 && b86_9 && b87_10 && b88_9 && b89_9 && b90_9 && b91_3 && b92_5 && b93_17 && b94_18 && b95_17 && b96_3 && b97_14 && b98_16 && b99_3 && b100_16 && b101_9 && b102_13 && b103_14 && b104_15 && b105_14 && b106_13 && b107_1 && b108_14 && b109_2 && b110_14 && b111_13 && b112_4 && b113_12 && b114_9 && b115_13 && b116_14 && b117_12 && b118_9 && b119_11 && b120_10 && b121_12 && b122_3 && b123_12 && b124_12 && b125_1 && b126_12 && b127_11 && b128_12 && b129_10 && b130_12 && b131_1 && b132_11 && b133_9 && b134_10 && b135_8 && b136_1 && b137_9 && b138_1 && b139_11 && b140_9 && b141_1 && b142_8 && b143_10 && b144_10 && b145_10 && b146_9 && b147_10 && b148_9 && b149_1 && b150_6 && b151_8 && b152_7 && b153_6 && b154_8 && b155_8 && b156_8 && b157_7 && b158_1 && b159_7 && b160_6 && b161_6 && b162_7 && b163_4 && b164_7 && b165_1 && b166_5 && b167_5 && b168_5 && b169_5 && b170_6 && b171_5 && b172_5 && b173_4 && b174_5 && b175_4 && b176_1 && b177_3 && b178_4 && b179_4 && b180_4 && b181_3 && b182_3 && b183_3 && b184_3 && b185_1 && b186_4 && b187_3 && b188_4 && b189_4 && b190_1 && b191_3 && b192_2 && b193_2 && b194_3 && b195_3 && b196_2 && b197_2 && b198_3 && b199_3 && b200_3 && b201_3 && b202_3 && b203_3 && b204_3 && b205_3 && b206_3 && b207_2 && b208_3 && b209_3 && b210_3 && b211_3 && b212_3 && b213_2 && b214_3 && b215_3 && b216_3 && b217_2 && b218_3 && b219_2 && b220_3 && b221_3 && b222_2 && b223_1 && b224_3 && b225_3 && b226_1 && b227_3 && b228_2 && b229_3 && b230_3 && b231_3 && b232_3 && b233_3 && b234_3 && b235_3 && b236_3 && b237_2 && b238_3 && b239_2 && b240_2 && b241_2 && b242_2 && b243_2 && b244_2 && b245_2 && b246_2 && b247_2 && b248_2 && b249_2 && b250_2 && b251_2 && b252_2 && b253_2 && b254_2 && b255_2 && b256_2 && b257_2 && b258_2 && b259_2 && b260_2 && b261_2) {
matched = true;
pattern_id = 1395;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_18 && b45_31 && b46_33 && b47_15 && b48_22 && b49_13 && b50_7 && b51_20 && b52_1 && b53_24 && b54_10 && b55_8 && b56_3 && b57_18 && b58_24 && b59_3 && b60_2 && b61_18 && b62_18 && b63_16 && b64_15 && b65_6 && b66_15 && b67_17 && b68_4 && b69_3 && b70_19 && b71_15 && b72_2 && b73_16 && b74_17 && b75_2 && b76_2 && b77_13 && b78_1 && b79_12 && b80_16 && b81_3 && b82_15 && b83_14 && b84_2 && b85_11 && b86_9 && b87_10 && b88_9 && b89_9 && b90_9 && b91_3 && b92_5 && b93_9 && b94_7 && b95_9 && b96_7 && b97_7 && b98_9 && b99_7 && b100_6 && b101_8 && b102_8 && b103_2 && b104_6 && b105_7 && b106_2 && b107_5 && b108_1 && b109_1 && b110_7 && b111_2 && b112_5 && b113_5 && b114_4 && b115_6 && b116_5 && b117_1 && b118_4 && b119_4 && b120_5 && b121_4 && b122_4 && b123_5 && b124_4 && b125_5 && b126_4 && b127_4 && b128_5 && b129_4 && b130_5 && b131_4 && b132_4 && b133_4 && b134_3 && b135_4 && b136_2 && b137_3 && b138_4 && b139_5 && b140_4 && b141_5 && b142_4 && b143_4 && b144_5 && b145_5 && b146_3 && b147_4 && b148_4 && b149_2 && b150_4 && b151_4 && b152_4 && b153_3 && b154_3 && b155_4 && b156_4 && b157_3 && b158_4 && b159_4 && b160_4 && b161_4 && b162_4 && b163_3 && b164_4 && b165_3 && b166_2 && b167_2 && b168_2 && b169_3 && b170_3 && b171_3 && b172_3 && b173_2 && b174_3 && b175_2 && b176_3 && b177_2 && b178_3) {
matched = true;
pattern_id = 1396;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_18 && b45_31 && b46_33 && b47_15 && b48_22 && b49_13 && b50_7 && b51_20 && b52_1 && b53_24 && b54_10 && b55_8 && b56_3 && b57_18 && b58_24 && b59_3 && b60_2 && b61_18 && b62_18 && b63_16 && b64_15 && b65_6 && b66_15 && b67_17 && b68_4 && b69_3 && b70_19 && b71_15 && b72_2 && b73_16 && b74_17 && b75_2 && b76_2 && b77_13 && b78_1 && b79_12 && b80_16 && b81_3 && b82_15 && b83_14 && b84_2 && b85_11 && b86_9 && b87_10 && b88_9 && b89_9 && b90_9 && b91_3 && b92_5 && b93_9 && b94_7 && b95_9 && b96_7 && b97_7 && b98_9 && b99_7 && b100_6 && b101_8 && b102_8 && b103_2 && b104_6 && b105_7 && b106_2 && b107_5 && b108_1 && b109_1 && b110_7 && b111_2 && b112_5 && b113_5 && b114_4 && b115_6 && b116_5 && b117_1 && b118_5 && b119_5 && b120_6 && b121_5 && b122_5 && b123_6 && b124_5 && b125_5 && b126_5 && b127_5 && b128_6 && b129_2 && b130_6 && b131_5 && b132_5 && b133_1 && b134_4 && b135_5 && b136_3 && b137_4 && b138_5 && b139_6 && b140_5 && b141_6 && b142_5 && b143_5 && b144_6 && b145_6 && b146_4 && b147_5 && b148_5 && b149_4 && b150_2 && b151_4 && b152_5 && b153_4 && b154_4 && b155_3 && b156_5 && b157_4 && b158_5 && b159_3 && b160_1 && b161_5 && b162_5 && b163_1 && b164_5 && b165_4 && b166_3 && b167_3 && b168_3 && b169_1 && b170_4 && b171_2) {
matched = true;
pattern_id = 1397;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_18 && b45_31 && b46_33 && b47_15 && b48_22 && b49_13 && b50_7 && b51_20 && b52_1 && b53_24 && b54_10 && b55_8 && b56_3 && b57_18 && b58_24 && b59_3 && b60_2 && b61_18 && b62_18 && b63_16 && b64_15 && b65_6 && b66_15 && b67_17 && b68_4 && b69_3 && b70_19 && b71_15 && b72_2 && b73_16 && b74_17 && b75_2 && b76_2 && b77_13 && b78_1 && b79_12 && b80_16 && b81_3 && b82_15 && b83_14 && b84_2 && b85_20 && b86_9 && b87_3 && b88_18 && b89_4 && b90_15 && b91_16 && b92_5 && b93_3 && b94_17 && b95_16 && b96_11 && b97_1 && b98_15 && b99_7 && b100_15 && b101_14 && b102_12 && b103_9 && b104_14 && b105_13 && b106_7 && b107_13 && b108_13 && b109_14 && b110_13 && b111_12 && b112_7 && b113_7 && b114_5 && b115_11 && b116_13 && b117_11 && b118_4 && b119_10 && b120_12 && b121_11 && b122_12 && b123_10 && b124_11 && b125_5 && b126_5 && b127_5 && b128_6 && b129_2 && b130_6 && b131_5 && b132_5 && b133_1 && b134_4 && b135_5 && b136_3 && b137_8 && b138_8 && b139_10 && b140_5 && b141_9 && b142_2 && b143_9 && b144_9 && b145_9 && b146_8 && b147_9 && b148_8 && b149_7 && b150_4 && b151_7 && b152_6 && b153_2 && b154_7 && b155_7 && b156_7 && b157_1 && b158_6 && b159_6 && b160_1 && b161_5 && b162_5 && b163_1 && b164_5 && b165_5) {
matched = true;
pattern_id = 1398;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_5 && b45_5 && b46_35 && b47_16 && b48_4 && b49_26 && b50_21 && b51_24 && b52_9 && b53_1 && b54_14 && b55_28 && b56_6 && b57_15 && b58_26 && b59_1 && b60_18 && b61_20 && b62_22 && b63_21 && b64_19 && b65_10 && b66_19 && b67_20 && b68_20 && b69_14 && b70_14 && b71_5 && b72_15 && b73_18 && b74_21 && b75_4 && b76_3 && b77_15 && b78_4 && b79_4 && b80_18 && b81_3 && b82_4 && b83_18 && b84_2 && b85_2 && b86_13 && b87_8) {
matched = true;
pattern_id = 1399;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_28 && b6_32 && b7_6 && b8_62 && b9_66 && b10_73 && b11_8 && b12_13 && b13_9 && b14_34 && b15_16 && b16_40 && b17_49 && b18_31 && b19_34 && b20_27 && b21_21 && b22_20 && b23_24 && b24_24) {
matched = true;
pattern_id = 1400;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_38 && b6_1 && b7_4 && b8_22) {
matched = true;
pattern_id = 1401;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_64) {
matched = true;
pattern_id = 1402;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_64 && b6_26 && b7_1 && b8_64 && b9_51 && b10_36 && b11_70 && b12_28 && b13_14 && b14_34 && b15_27) {
matched = true;
pattern_id = 1403;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_15 && b5_42 && b6_11 && b7_47 && b8_10 && b9_57 && b10_33 && b11_2 && b12_15 && b13_7 && b14_3 && b15_9 && b16_6 && b17_8) {
matched = true;
pattern_id = 1404;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_53 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_2) {
matched = true;
pattern_id = 1405;
}
if(b0_3 && b1_28 && b2_40 && b3_38 && b4_58 && b5_24 && b6_45 && b7_17 && b8_43 && b9_51 && b10_57 && b11_18 && b12_35) {
matched = true;
pattern_id = 1406;
}
if(b0_3 && b1_4 && b2_40) {
matched = true;
pattern_id = 1407;
}
if(b0_3 && b1_4 && b2_55 && b3_5 && b4_40 && b5_50 && b6_50 && b7_13) {
matched = true;
pattern_id = 1408;
}
if(b0_3 && b1_4 && b2_55 && b3_5 && b4_40 && b5_50 && b6_50 && b7_13 && b8_3 && b9_36 && b10_39 && b11_38 && b12_23 && b13_10 && b14_15 && b15_23) {
matched = true;
pattern_id = 1409;
}
if(b0_3 && b1_4 && b2_55 && b3_5 && b4_40 && b5_50 && b6_50 && b7_13 && b8_3 && b9_37 && b10_31) {
matched = true;
pattern_id = 1410;
}
if(b0_3 && b1_20 && b2_34 && b3_47 && b4_23 && b5_67 && b6_29) {
matched = true;
pattern_id = 1411;
}
if(b0_3 && b1_20 && b2_31 && b3_71 && b4_5 && b5_50 && b6_50 && b7_13 && b8_37) {
matched = true;
pattern_id = 1412;
}
if(b0_3 && b1_77 && b2_58 && b3_38 && b4_28 && b5_76 && b6_5 && b7_6 && b8_4 && b9_13 && b10_3 && b11_1 && b12_10) {
matched = true;
pattern_id = 1413;
}
if(b0_3 && b1_2 && b2_3 && b3_11 && b4_8 && b5_8 && b6_8 && b7_7 && b8_6 && b9_5 && b10_4) {
matched = true;
pattern_id = 1414;
}
if(b0_3 && b1_3 && b2_3 && b3_3 && b4_3 && b5_3 && b6_3 && b7_3 && b8_1 && b9_3 && b10_2) {
matched = true;
pattern_id = 1415;
}
if(b0_3 && b1_14 && b2_1 && b3_18 && b4_6) {
matched = true;
pattern_id = 1416;
}
if(b0_3 && b1_16 && b2_20 && b3_7 && b4_7 && b5_23 && b6_16 && b7_22 && b8_10) {
matched = true;
pattern_id = 1417;
}
if(b0_3 && b1_1 && b2_36 && b3_44 && b4_1 && b5_1 && b6_53 && b7_1 && b8_22 && b9_39 && b10_2 && b11_43 && b12_10 && b13_7 && b14_6 && b15_4 && b16_4 && b17_31 && b18_3 && b19_18 && b20_4 && b21_4 && b22_24 && b23_7 && b24_11 && b25_12 && b26_8 && b27_7 && b28_22 && b29_7 && b30_14 && b31_16 && b32_3 && b33_14 && b34_3 && b35_15 && b36_2 && b37_3 && b38_5 && b39_8 && b40_2 && b41_3 && b42_2 && b43_11) {
matched = true;
pattern_id = 1418;
}
if(b0_56 && b1_28 && b2_5 && b3_39) {
matched = true;
pattern_id = 1419;
}
if(b0_56 && b1_28 && b2_5 && b3_39 && b4_35 && b5_40 && b6_23) {
matched = true;
pattern_id = 1420;
}
if(b0_56 && b1_28 && b2_44 && b3_25 && b4_28 && b5_23 && b6_1 && b7_13 && b8_10) {
matched = true;
pattern_id = 1421;
}
if(b0_56 && b1_28 && b2_44 && b3_13) {
matched = true;
pattern_id = 1422;
}
if(b0_56 && b1_28 && b2_44 && b3_38) {
matched = true;
pattern_id = 1423;
}
if(b0_56 && b1_5 && b2_64 && b3_4 && b4_71) {
matched = true;
pattern_id = 1424;
}
if(b0_56 && b1_10 && b2_40 && b3_38 && b4_35) {
matched = true;
pattern_id = 1425;
}
if(b0_56 && b1_10 && b2_40 && b3_38 && b4_35 && b5_28) {
matched = true;
pattern_id = 1426;
}
if(b0_56 && b1_10 && b2_40 && b3_38 && b4_35 && b5_28 && b6_2 && b7_33 && b8_3 && b9_16 && b10_10 && b11_1 && b12_6 && b13_44 && b14_66 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4 && b22_5 && b23_31 && b24_21 && b25_30 && b26_25 && b27_37 && b28_30 && b29_48 && b30_56 && b31_14 && b32_36 && b33_32 && b34_31 && b35_21 && b36_46 && b37_3) {
matched = true;
pattern_id = 1427;
}
if(b0_56 && b1_10 && b2_40 && b3_38 && b4_35 && b5_28 && b6_2 && b7_33 && b8_10 && b9_1 && b10_33 && b11_20 && b12_51 && b13_36 && b14_28 && b15_25 && b16_29 && b17_49 && b18_9 && b19_49 && b20_28 && b21_37 && b22_40 && b23_18 && b24_9 && b25_15 && b26_18 && b27_8 && b28_8 && b29_25 && b30_19 && b31_36 && b32_20 && b33_29 && b34_33 && b35_24 && b36_9 && b37_10 && b38_5 && b39_20 && b40_3 && b41_22 && b42_15 && b43_20 && b44_22 && b45_4 && b46_8 && b47_8 && b48_3) {
matched = true;
pattern_id = 1428;
}
if(b0_56 && b1_2 && b2_17 && b3_19 && b4_40 && b5_17 && b6_7 && b7_1 && b8_63 && b9_5 && b10_34 && b11_30 && b12_26 && b13_53 && b14_41 && b15_3 && b16_3) {
matched = true;
pattern_id = 1429;
}
if(b0_56 && b1_3 && b2_24 && b3_24 && b4_44 && b5_40 && b6_2 && b7_15) {
matched = true;
pattern_id = 1430;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_71 && b5_4 && b6_21 && b7_11 && b8_35 && b9_42 && b10_49 && b11_33 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_8 && b19_13 && b20_25 && b21_35 && b22_19 && b23_35 && b24_32 && b25_55 && b26_8 && b27_19 && b28_21 && b29_32 && b30_36 && b31_9 && b32_29 && b33_25 && b34_32 && b35_31 && b36_43 && b37_3 && b38_45 && b39_39 && b40_42 && b41_13 && b42_8 && b43_39 && b44_18 && b45_5 && b46_7 && b47_9 && b48_23 && b49_25 && b50_16 && b51_21 && b52_24 && b53_16 && b54_20 && b55_26 && b56_7 && b57_15 && b58_6 && b59_5 && b60_8 && b61_11 && b62_19 && b63_17 && b64_16 && b65_20 && b66_16 && b67_18 && b68_16 && b69_6 && b70_20 && b71_11 && b72_12 && b73_5 && b74_4 && b75_14 && b76_13 && b77_7 && b78_14 && b79_3 && b80_17 && b81_10 && b82_10 && b83_15 && b84_10 && b85_9 && b86_11 && b87_11 && b88_10 && b89_10 && b90_10 && b91_8 && b92_8 && b93_10 && b94_8 && b95_9 && b96_8 && b97_8 && b98_1 && b99_8 && b100_9 && b101_9 && b102_4 && b103_7 && b104_5 && b105_8 && b106_7 && b107_6 && b108_6 && b109_6 && b110_8 && b111_6 && b112_6 && b113_6 && b114_5 && b115_7 && b116_6 && b117_5 && b118_6 && b119_6 && b120_7 && b121_6 && b122_6 && b123_7 && b124_3 && b125_6 && b126_6 && b127_6 && b128_7 && b129_5 && b130_4 && b131_6 && b132_6) {
matched = true;
pattern_id = 1431;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_71 && b5_4 && b6_21 && b7_11 && b8_35 && b9_34 && b10_34 && b11_57 && b12_18 && b13_36 && b14_12 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4 && b22_17 && b23_27 && b24_20 && b25_33 && b26_24 && b27_19 && b28_56 && b29_7 && b30_36 && b31_14 && b32_33 && b33_25 && b34_46 && b35_21 && b36_15 && b37_37 && b38_34 && b39_40 && b40_2 && b41_41 && b42_34 && b43_40 && b44_5 && b45_5 && b46_35 && b47_16 && b48_4 && b49_26 && b50_21 && b51_22 && b52_25 && b53_25 && b54_21 && b55_27 && b56_22 && b57_19 && b58_2 && b59_19 && b60_18 && b61_15 && b62_9 && b63_7 && b64_1 && b65_15 && b66_17 && b67_5 && b68_17 && b69_15 && b70_21 && b71_16 && b72_13 && b73_8 && b74_18 && b75_15 && b76_5 && b77_7 && b78_15 && b79_13 && b80_3 && b81_12 && b82_3 && b83_16 && b84_11 && b85_12 && b86_12 && b87_12 && b88_11 && b89_11 && b90_11 && b91_9 && b92_9 && b93_11 && b94_4 && b95_10 && b96_9 && b97_9 && b98_10 && b99_1 && b100_1 && b101_10 && b102_9 && b103_8 && b104_7 && b105_9 && b106_8 && b107_7 && b108_7 && b109_7 && b110_6 && b111_7 && b112_7 && b113_7 && b114_3 && b115_8 && b116_7 && b117_6 && b118_6 && b119_7 && b120_8 && b121_2 && b122_7 && b123_8 && b124_6 && b125_7 && b126_7 && b127_7 && b128_8 && b129_6 && b130_7 && b131_7 && b132_7 && b133_5 && b134_5 && b135_6) {
matched = true;
pattern_id = 1432;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_71 && b5_4 && b6_18 && b7_35 && b8_36 && b9_17 && b10_17 && b11_42 && b12_44 && b13_4 && b14_41 && b15_41 && b16_51 && b17_19 && b18_38 && b19_39 && b20_51 && b21_38 && b22_37) {
matched = true;
pattern_id = 1433;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_1 && b8_27 && b9_1 && b10_2 && b11_47 && b12_50 && b13_5 && b14_38 && b15_63 && b16_24 && b17_34 && b18_18 && b19_42 && b20_49 && b21_2 && b22_18 && b23_16 && b24_24 && b25_31 && b26_3 && b27_33 && b28_39) {
matched = true;
pattern_id = 1434;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_16 && b10_10 && b11_19 && b12_12 && b13_51 && b14_33 && b15_36 && b16_7 && b17_3 && b18_12 && b19_44 && b20_29 && b21_41 && b22_21 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 1435;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_50 && b10_50 && b11_57 && b12_3 && b13_43 && b14_12 && b15_3 && b16_45 && b17_35 && b18_4 && b19_21 && b20_49 && b21_18 && b22_39 && b23_31 && b24_28 && b25_6 && b26_2 && b27_49 && b28_8 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 1436;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_11 && b10_28 && b11_26 && b12_5 && b13_56 && b14_55 && b15_3 && b16_3 && b17_51 && b18_18 && b19_12 && b20_2 && b21_36 && b22_3 && b23_46 && b24_22 && b25_19 && b26_25 && b27_16 && b28_28 && b29_34 && b30_22 && b31_45 && b32_28 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7) {
matched = true;
pattern_id = 1437;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_36 && b16_23 && b17_49 && b18_29 && b19_41 && b20_2 && b21_14 && b22_34 && b23_27 && b24_31 && b25_31 && b26_3 && b27_33 && b28_39 && b29_1 && b30_9 && b31_44 && b32_1 && b33_1 && b34_12 && b35_1) {
matched = true;
pattern_id = 1438;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_36 && b16_22 && b17_10 && b18_33 && b19_9 && b20_50 && b21_30 && b22_19 && b23_46 && b24_44 && b25_31 && b26_30 && b27_36 && b28_29 && b29_1 && b30_9 && b31_44 && b32_1 && b33_1 && b34_12 && b35_1) {
matched = true;
pattern_id = 1439;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_36 && b16_40 && b17_36 && b18_18 && b19_12 && b20_24 && b21_19 && b22_19 && b23_61 && b24_43 && b25_33 && b26_34 && b27_54 && b28_45 && b29_26 && b30_17 && b31_55 && b32_3 && b33_1 && b34_27 && b35_5 && b36_4 && b37_9 && b38_2) {
matched = true;
pattern_id = 1440;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_9 && b16_32 && b17_49 && b18_32 && b19_25 && b20_2 && b21_49 && b22_38 && b23_18 && b24_1 && b25_47 && b26_26 && b27_3 && b28_31 && b29_21 && b30_2 && b31_11 && b32_32 && b33_8 && b34_1 && b35_13 && b36_3) {
matched = true;
pattern_id = 1441;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_74 && b16_13 && b17_38 && b18_11 && b19_35 && b20_33 && b21_29 && b22_51 && b23_6 && b24_3 && b25_27 && b26_43 && b27_16 && b28_28 && b29_34 && b30_21 && b31_4 && b32_7 && b33_42 && b34_5 && b35_7 && b36_33 && b37_10) {
matched = true;
pattern_id = 1442;
}
if(b0_56 && b1_1 && b2_1 && b3_1 && b4_32 && b5_53 && b6_5 && b7_4 && b8_1 && b9_4 && b10_47 && b11_20 && b12_2 && b13_2 && b14_2 && b15_21 && b16_15 && b17_1 && b18_1 && b19_1 && b20_7 && b21_1 && b22_13 && b23_2 && b24_15 && b25_13 && b26_7 && b27_7 && b28_8 && b29_2 && b30_9 && b31_10 && b32_13 && b33_1 && b34_5 && b35_7 && b36_4 && b37_3 && b38_6 && b39_4 && b40_2 && b41_4 && b42_8 && b43_2 && b44_11 && b45_5 && b46_9 && b47_3 && b48_4 && b49_4 && b50_9 && b51_3 && b52_4 && b53_4 && b54_2 && b55_7 && b56_2 && b57_2 && b58_4 && b59_4 && b60_4 && b61_5 && b62_3 && b63_3 && b64_4 && b65_5 && b66_5 && b67_3 && b68_4 && b69_4 && b70_5 && b71_5 && b72_2 && b73_4 && b74_4 && b75_4) {
matched = true;
pattern_id = 1443;
}
if(b0_47 && b1_27 && b2_59 && b3_67 && b4_20 && b5_71 && b6_6 && b7_64 && b8_70 && b9_8 && b10_29) {
matched = true;
pattern_id = 1444;
}
if(b0_47 && b1_4 && b2_31 && b3_30 && b4_57 && b5_4) {
matched = true;
pattern_id = 1445;
}
if(b0_47 && b1_4 && b2_40 && b3_30 && b4_58 && b5_63 && b6_15 && b7_19 && b8_38 && b9_37 && b10_71 && b11_22 && b12_69) {
matched = true;
pattern_id = 1446;
}
if(b0_47 && b1_4 && b2_64 && b3_3 && b4_52 && b5_67) {
matched = true;
pattern_id = 1447;
}
if(b0_47 && b1_9 && b2_45 && b3_38 && b4_9 && b5_46 && b6_43 && b7_36) {
matched = true;
pattern_id = 1448;
}
if(b0_47 && b1_50 && b2_41 && b3_11 && b4_53 && b5_4 && b6_3 && b7_55 && b8_3 && b9_20 && b10_43 && b11_49 && b12_38 && b13_55 && b14_52 && b15_35 && b16_22 && b17_28) {
matched = true;
pattern_id = 1449;
}
if(b0_47 && b1_50 && b2_8 && b3_26 && b4_3 && b5_6 && b6_12 && b7_73 && b8_5 && b9_10 && b10_54 && b11_6 && b12_20 && b13_62 && b14_3 && b15_34 && b16_2 && b17_2 && b18_58 && b19_44 && b20_1 && b21_3 && b22_25 && b23_52 && b24_2 && b25_32 && b26_41 && b27_18 && b28_19 && b29_7 && b30_28 && b31_22 && b32_24 && b33_9 && b34_3 && b35_7 && b36_33 && b37_3 && b38_5 && b39_16 && b40_3 && b41_35 && b42_26 && b43_33 && b44_12 && b45_18 && b46_18 && b47_26 && b48_12 && b49_9 && b50_16 && b51_8 && b52_11 && b53_11 && b54_7 && b55_12 && b56_9 && b57_7 && b58_9 && b59_4 && b60_7 && b61_9 && b62_4 && b63_5 && b64_3 && b65_7 && b66_7 && b67_4 && b68_4 && b69_6 && b70_7 && b71_4 && b72_6 && b73_3 && b74_3) {
matched = true;
pattern_id = 1450;
}
if(b0_47 && b1_50 && b2_52 && b3_26 && b4_22 && b5_16 && b6_34 && b7_1 && b8_28 && b9_58 && b10_60) {
matched = true;
pattern_id = 1451;
}
if(b0_47 && b1_50 && b2_52 && b3_26 && b4_22 && b5_16 && b6_34 && b7_1 && b8_34 && b9_6 && b10_38 && b11_37 && b12_3) {
matched = true;
pattern_id = 1452;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1) {
matched = true;
pattern_id = 1453;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1 && b5_75 && b6_21 && b7_11 && b8_50 && b9_13 && b10_28 && b11_28 && b12_18 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 1454;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1 && b5_75 && b6_55 && b7_1 && b8_13 && b9_6 && b10_32 && b11_5 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_8) {
matched = true;
pattern_id = 1455;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1 && b5_75 && b6_11 && b7_10 && b8_2 && b9_10 && b10_27 && b11_20 && b12_15 && b13_2 && b14_3 && b15_29 && b16_17 && b17_2 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7 && b24_53 && b25_56 && b26_52 && b27_56 && b28_8 && b29_54 && b30_36 && b31_14 && b32_9 && b33_25 && b34_14 && b35_1 && b36_40 && b37_4 && b38_25 && b39_41 && b40_7 && b41_5 && b42_8 && b43_39 && b44_18 && b45_5 && b46_7 && b47_9 && b48_24 && b49_27 && b50_33 && b51_18 && b52_3 && b53_26 && b54_14 && b55_8 && b56_15 && b57_6 && b58_12 && b59_6 && b60_19 && b61_11 && b62_11 && b63_10 && b64_17 && b65_21 && b66_4 && b67_4 && b68_18 && b69_2 && b70_3 && b71_17 && b72_2) {
matched = true;
pattern_id = 1456;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1 && b5_23 && b6_16 && b7_13 && b8_10 && b9_70) {
matched = true;
pattern_id = 1457;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_32 && b5_44 && b6_1 && b7_3 && b8_71 && b9_53 && b10_12 && b11_47 && b12_10 && b13_2 && b14_10 && b15_7) {
matched = true;
pattern_id = 1458;
}
if(b0_80 && b1_16 && b2_14 && b3_18 && b4_58) {
matched = true;
pattern_id = 1459;
}
if(b0_51 && b1_43 && b2_45 && b3_5) {
matched = true;
pattern_id = 1460;
}
if(b0_51 && b1_20 && b2_32 && b3_42) {
matched = true;
pattern_id = 1461;
}
if(b0_51 && b1_20 && b2_32 && b3_42 && b4_1) {
matched = true;
pattern_id = 1462;
}
if(b0_51 && b1_20 && b2_53 && b3_3 && b4_9) {
matched = true;
pattern_id = 1463;
}
if(b0_51 && b1_9 && b2_55 && b3_47) {
matched = true;
pattern_id = 1464;
}
if(b0_51 && b1_21 && b2_21 && b3_7 && b4_53 && b5_23 && b6_32 && b7_4 && b8_10) {
matched = true;
pattern_id = 1465;
}
if(b0_51 && b1_8 && b2_16 && b3_26 && b4_6 && b5_16 && b6_3 && b7_45) {
matched = true;
pattern_id = 1466;
}
if(b0_51 && b1_8 && b2_16 && b3_26 && b4_6 && b5_16 && b6_3 && b7_45 && b8_10 && b9_57 && b10_33 && b11_20) {
matched = true;
pattern_id = 1467;
}
if(b0_51 && b1_8 && b2_12 && b3_15 && b4_3 && b5_4 && b6_48 && b7_31 && b8_11 && b9_34 && b10_17 && b11_34) {
matched = true;
pattern_id = 1468;
}
if(b0_51 && b1_8 && b2_12 && b3_15 && b4_3 && b5_4 && b6_48 && b7_31 && b8_11 && b9_34 && b10_17 && b11_34 && b12_6 && b13_37 && b14_21 && b15_31 && b16_1 && b17_35 && b18_29 && b19_9 && b20_17 && b21_3 && b22_26 && b23_24 && b24_22 && b25_26) {
matched = true;
pattern_id = 1469;
}
if(b0_51 && b1_8 && b2_12 && b3_15 && b4_3 && b5_4 && b6_35 && b7_45 && b8_41 && b9_6 && b10_4 && b11_23 && b12_5 && b13_30 && b14_25) {
matched = true;
pattern_id = 1470;
}
if(b0_51 && b1_1 && b2_1 && b3_1 && b4_32 && b5_10 && b6_5 && b7_4 && b8_1 && b9_4 && b10_38 && b11_20 && b12_2 && b13_2 && b14_2 && b15_35 && b16_15 && b17_1 && b18_1 && b19_6 && b20_41 && b21_4 && b22_2 && b23_2 && b24_9 && b25_13 && b26_11 && b27_7 && b28_2 && b29_1 && b30_40 && b31_4 && b32_7 && b33_1 && b34_3 && b35_28 && b36_3 && b37_4 && b38_5 && b39_7 && b40_20 && b41_13 && b42_8 && b43_4 && b44_5 && b45_9 && b46_2 && b47_3 && b48_4 && b49_4 && b50_17 && b51_3 && b52_4 && b53_4 && b54_3 && b55_13 && b56_3 && b57_3 && b58_4 && b59_3 && b60_2 && b61_4 && b62_4 && b63_3 && b64_3 && b65_8 && b66_4 && b67_4 && b68_4 && b69_3 && b70_8 && b71_4 && b72_3 && b73_4 && b74_3 && b75_6 && b76_5 && b77_7 && b78_5 && b79_3 && b80_5 && b81_4 && b82_4 && b83_6 && b84_4 && b85_3 && b86_3 && b87_3 && b88_2 && b89_4 && b90_3 && b91_3 && b92_3 && b93_3 && b94_3 && b95_3 && b96_3 && b97_2 && b98_3 && b99_3 && b100_3 && b101_4 && b102_4 && b103_2 && b104_3 && b105_2 && b106_3 && b107_1 && b108_2 && b109_2 && b110_2 && b111_2 && b112_1 && b113_2 && b114_2 && b115_2 && b116_2 && b117_2 && b118_1 && b119_2 && b120_2 && b121_2 && b122_1 && b123_2 && b124_2 && b125_2 && b126_2 && b127_2 && b128_2 && b129_2) {
matched = true;
pattern_id = 1471;
}
if(b0_53 && b1_44 && b2_45 && b3_30 && b4_20 && b5_18 && b6_9 && b7_37 && b8_3) {
matched = true;
pattern_id = 1472;
}
if(b0_53 && b1_19 && b2_58 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_72 && b10_1 && b11_72 && b12_27 && b13_5 && b14_20 && b15_18 && b16_29 && b17_25 && b18_32 && b19_32 && b20_10 && b21_35 && b22_45 && b23_9 && b24_56 && b25_6 && b26_2 && b27_49 && b28_8 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 1473;
}
if(b0_53 && b1_19 && b2_58 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1474;
}
if(b0_53 && b1_19 && b2_58 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10 && b13_1 && b14_2 && b15_29 && b16_17 && b17_8 && b18_28 && b19_28 && b20_30 && b21_5 && b22_4 && b23_6 && b24_20 && b25_21 && b26_4 && b27_19 && b28_24 && b29_3 && b30_16) {
matched = true;
pattern_id = 1475;
}
if(b0_53 && b1_27 && b2_40 && b3_67) {
matched = true;
pattern_id = 1476;
}
if(b0_53 && b1_43 && b2_40 && b3_51 && b4_61 && b5_19 && b6_44 && b7_64 && b8_32 && b9_44 && b10_15 && b11_36 && b12_53 && b13_54 && b14_31 && b15_12 && b16_50 && b17_3) {
matched = true;
pattern_id = 1477;
}
if(b0_53 && b1_53 && b2_32 && b3_13 && b4_23) {
matched = true;
pattern_id = 1478;
}
if(b0_53 && b1_53 && b2_31) {
matched = true;
pattern_id = 1479;
}
if(b0_53 && b1_53 && b2_31 && b3_14 && b4_1) {
matched = true;
pattern_id = 1480;
}
if(b0_53 && b1_53 && b2_31 && b3_14 && b4_26) {
matched = true;
pattern_id = 1481;
}
if(b0_53 && b1_20 && b2_31 && b3_30) {
matched = true;
pattern_id = 1482;
}
if(b0_53 && b1_20 && b2_64 && b3_30) {
matched = true;
pattern_id = 1483;
}
if(b0_53 && b1_9 && b2_53 && b3_14) {
matched = true;
pattern_id = 1484;
}
if(b0_53 && b1_77) {
matched = true;
pattern_id = 1485;
}
if(b0_53 && b1_2 && b2_19 && b3_51 && b4_16 && b5_10 && b6_11 && b7_29 && b8_14 && b9_10) {
matched = true;
pattern_id = 1486;
}
if(b0_53 && b1_21 && b2_16 && b3_20 && b4_44 && b5_26 && b6_3 && b7_55 && b8_35 && b9_13 && b10_68 && b11_37 && b12_3 && b13_19 && b14_21 && b15_21 && b16_2) {
matched = true;
pattern_id = 1487;
}
if(b0_53 && b1_8 && b2_41 && b3_11 && b4_43 && b5_12 && b6_7 && b7_35 && b8_12 && b9_12) {
matched = true;
pattern_id = 1488;
}
if(b0_53 && b1_8 && b2_2 && b3_15 && b4_22 && b5_25 && b6_8 && b7_44 && b8_62 && b9_42 && b10_10 && b11_2 && b12_71 && b13_30 && b14_21 && b15_20 && b16_16 && b17_10 && b18_9 && b19_22 && b20_47 && b21_15 && b22_19 && b23_7 && b24_19 && b25_61 && b26_11 && b27_2 && b28_59 && b29_60 && b30_55 && b31_48 && b32_1 && b33_41 && b34_51 && b35_7 && b36_3 && b37_11 && b38_10 && b39_7 && b40_2 && b41_48 && b42_16 && b43_12 && b44_26 && b45_16 && b46_31 && b47_13 && b48_2 && b49_38 && b50_40 && b51_2 && b52_18 && b53_6 && b54_30 && b55_17 && b56_14 && b57_10 && b58_9 && b59_6 && b60_26 && b61_31 && b62_22 && b63_27 && b64_12 && b65_30 && b66_21 && b67_25 && b68_24 && b69_22 && b70_3 && b71_4 && b72_21 && b73_24 && b74_3 && b75_5 && b76_24 && b77_23 && b78_21 && b79_5 && b80_12 && b81_4 && b82_21 && b83_23 && b84_4 && b85_21 && b86_9 && b87_17 && b88_19 && b89_19 && b90_2 && b91_13 && b92_17 && b93_18 && b94_4 && b95_4 && b96_12 && b97_2 && b98_17 && b99_12 && b100_2 && b101_13 && b102_11 && b103_15 && b104_3 && b105_15 && b106_14 && b107_3 && b108_1 && b109_8 && b110_15 && b111_14 && b112_12 && b113_12 && b114_10 && b115_14 && b116_15 && b117_1 && b118_10 && b119_11 && b120_13 && b121_5 && b122_11 && b123_2 && b124_13 && b125_3 && b126_13 && b127_3 && b128_9 && b129_7 && b130_8 && b131_1 && b132_4 && b133_10 && b134_11 && b135_11 && b136_7 && b137_10 && b138_9 && b139_12 && b140_1 && b141_10 && b142_9 && b143_3 && b144_8 && b145_11 && b146_10 && b147_11 && b148_10 && b149_8 && b150_7 && b151_9 && b152_8 && b153_2 && b154_8 && b155_9 && b156_9 && b157_8 && b158_7 && b159_8 && b160_2 && b161_7 && b162_8 && b163_5 && b164_8 && b165_3 && b166_6 && b167_1 && b168_6 && b169_6 && b170_1 && b171_6 && b172_6 && b173_2 && b174_6) {
matched = true;
pattern_id = 1489;
}
if(b0_53 && b1_8 && b2_2 && b3_15 && b4_22 && b5_25 && b6_8 && b7_44 && b8_62 && b9_42 && b10_10 && b11_2 && b12_10 && b13_31 && b14_8 && b15_7 && b16_25 && b17_27 && b18_33 && b19_2 && b20_24 && b21_36 && b22_27 && b23_4 && b24_8 && b25_33 && b26_11 && b27_13 && b28_15 && b29_1 && b30_5 && b31_54 && b32_54 && b33_47 && b34_9 && b35_5 && b36_44 && b37_17 && b38_5 && b39_42 && b40_3 && b41_42 && b42_36 && b43_11 && b44_18 && b45_34 && b46_13 && b47_1 && b48_19 && b49_14 && b50_35 && b51_23 && b52_3 && b53_5 && b54_23 && b55_17 && b56_17 && b57_20 && b58_13 && b59_4 && b60_20 && b61_9 && b62_4 && b63_19 && b64_3) {
matched = true;
pattern_id = 1490;
}
if(b0_53 && b1_8 && b2_2 && b3_15 && b4_22 && b5_25 && b6_8 && b7_3 && b8_27 && b9_39 && b10_2 && b11_17 && b12_12 && b13_2 && b14_3 && b15_7 && b16_27 && b17_6 && b18_8 && b19_27 && b20_3 && b21_19 && b22_40 && b23_32 && b24_32 && b25_1 && b26_22 && b27_31 && b28_21 && b29_1 && b30_1 && b31_7 && b32_1 && b33_43 && b34_43 && b35_1 && b36_38 && b37_31 && b38_30 && b39_10 && b40_28 && b41_33 && b42_3 && b43_30 && b44_2 && b45_4 && b46_7 && b47_2 && b48_15) {
matched = true;
pattern_id = 1491;
}
if(b0_10 && b1_19 && b2_30 && b3_30 && b4_9 && b5_19 && b6_13 && b7_17) {
matched = true;
pattern_id = 1492;
}
if(b0_10 && b1_43 && b2_32 && b3_42 && b4_1) {
matched = true;
pattern_id = 1493;
}
if(b0_10 && b1_63 && b2_45 && b3_5) {
matched = true;
pattern_id = 1494;
}
if(b0_10 && b1_20 && b2_40 && b3_3 && b4_29 && b5_66 && b6_12 && b7_66 && b8_3) {
matched = true;
pattern_id = 1495;
}
if(b0_10 && b1_73 && b2_30 && b3_5 && b4_28) {
matched = true;
pattern_id = 1496;
}
if(b0_10 && b1_3 && b2_3 && b3_10 && b4_7 && b5_7 && b6_7 && b7_8 && b8_5) {
matched = true;
pattern_id = 1497;
}
if(b0_45 && b1_46 && b2_25 && b3_8 && b4_12 && b5_8 && b6_42 && b7_35 && b8_5 && b9_9 && b10_17 && b11_22 && b12_20 && b13_21 && b14_20 && b15_18) {
matched = true;
pattern_id = 1498;
}
if(b0_45 && b1_13 && b2_25 && b3_20 && b4_18 && b5_30 && b6_26 && b7_4 && b8_10 && b9_16 && b10_10 && b11_20) {
matched = true;
pattern_id = 1499;
}
if(b0_45 && b1_16 && b2_43 && b3_40 && b4_22 && b5_6 && b6_12 && b7_13 && b8_40 && b9_43 && b10_49 && b11_37 && b12_18 && b13_43 && b14_25 && b15_35 && b16_30 && b17_49 && b18_29 && b19_1 && b20_40 && b21_2 && b22_19 && b23_43 && b24_39 && b25_36 && b26_41 && b27_33 && b28_8 && b29_33 && b30_3 && b31_28 && b32_20 && b33_17 && b34_21 && b35_31) {
matched = true;
pattern_id = 1500;
}
if(b0_45 && b1_56 && b2_3 && b3_13 && b4_21 && b5_32 && b6_3 && b7_51) {
matched = true;
pattern_id = 1501;
}
if(b0_45 && b1_1 && b2_36 && b3_44 && b4_1 && b5_35 && b6_30 && b7_1 && b8_17 && b9_16 && b10_2 && b11_36 && b12_10 && b13_7 && b14_6 && b15_4 && b16_6 && b17_14 && b18_3 && b19_7 && b20_29 && b21_4 && b22_23 && b23_7 && b24_11 && b25_12 && b26_8 && b27_9 && b28_15 && b29_7 && b30_7 && b31_15 && b32_3 && b33_13 && b34_3 && b35_15 && b36_2 && b37_3 && b38_13 && b39_6 && b40_2 && b41_11 && b42_6 && b43_11) {
matched = true;
pattern_id = 1502;
}
if(b0_26 && b1_19 && b2_56 && b3_5 && b4_5 && b5_19 && b6_50) {
matched = true;
pattern_id = 1503;
}
if(b0_26 && b1_19 && b2_45 && b3_10) {
matched = true;
pattern_id = 1504;
}
if(b0_26 && b1_19 && b2_45 && b3_10 && b4_1) {
matched = true;
pattern_id = 1505;
}
if(b0_26 && b1_19 && b2_45 && b3_10 && b4_1 && b5_46 && b6_3 && b7_14 && b8_47 && b9_28 && b10_28 && b11_27 && b12_66 && b13_9 && b14_8 && b15_74 && b16_15 && b17_1 && b18_42 && b19_1 && b20_1 && b21_28 && b22_1) {
matched = true;
pattern_id = 1506;
}
if(b0_26 && b1_19 && b2_45 && b3_10 && b4_1 && b5_12 && b6_34 && b7_29 && b8_33 && b9_4 && b10_10 && b11_22 && b12_10) {
matched = true;
pattern_id = 1507;
}
if(b0_26 && b1_19 && b2_45 && b3_10 && b4_32 && b5_44 && b6_1 && b7_3 && b8_11 && b9_28 && b10_28 && b11_49 && b12_5 && b13_16 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9) {
matched = true;
pattern_id = 1508;
}
if(b0_26 && b1_19 && b2_40 && b3_28 && b4_36 && b5_1 && b6_5) {
matched = true;
pattern_id = 1509;
}
if(b0_26 && b1_7 && b2_56 && b3_26 && b4_6 && b5_12) {
matched = true;
pattern_id = 1510;
}
if(b0_26 && b1_5 && b2_22 && b3_60 && b4_14 && b5_27 && b6_20 && b7_53 && b8_47 && b9_3) {
matched = true;
pattern_id = 1511;
}
if(b0_26 && b1_5 && b2_11 && b3_35 && b4_20 && b5_48 && b6_62 && b7_37 && b8_57 && b9_54 && b10_51 && b11_18 && b12_27 && b13_20 && b14_52 && b15_30 && b16_30 && b17_33 && b18_10 && b19_9 && b20_33 && b21_14 && b22_20) {
matched = true;
pattern_id = 1512;
}
if(b0_26 && b1_53) {
matched = true;
pattern_id = 1513;
}
if(b0_26 && b1_20 && b2_22 && b3_23) {
matched = true;
pattern_id = 1514;
}
if(b0_26 && b1_20 && b2_45 && b3_5) {
matched = true;
pattern_id = 1515;
}
if(b0_26 && b1_20 && b2_45 && b3_5 && b4_1 && b5_30) {
matched = true;
pattern_id = 1516;
}
if(b0_26 && b1_20 && b2_45 && b3_5 && b4_1 && b5_30 && b6_12 && b7_37 && b8_29 && b9_51 && b10_61 && b11_13 && b12_66 && b13_40 && b14_1 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4 && b22_62 && b23_31 && b24_24 && b25_30 && b26_54 && b27_2) {
matched = true;
pattern_id = 1517;
}
if(b0_26 && b1_20 && b2_45 && b3_5 && b4_1 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36 && b15_4 && b16_60 && b17_43 && b18_51 && b19_29 && b20_13 && b21_9 && b22_37 && b23_12 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2 && b31_18 && b32_24 && b33_35 && b34_31 && b35_33 && b36_1 && b37_30 && b38_42 && b39_36 && b40_25 && b41_18 && b42_1 && b43_37 && b44_18 && b45_20 && b46_23 && b47_28 && b48_16 && b49_6 && b50_13 && b51_14 && b52_10 && b53_16 && b54_11 && b55_18 && b56_9 && b57_8 && b58_1 && b59_12 && b60_10 && b61_12 && b62_1 && b63_1 && b64_3 && b65_13 && b66_10 && b67_3 && b68_5 && b69_9 && b70_8 && b71_9 && b72_8 && b73_9 && b74_10 && b75_6 && b76_8 && b77_10) {
matched = true;
pattern_id = 1518;
}
if(b0_26 && b1_57 && b2_58 && b3_61 && b4_61 && b5_5 && b6_44) {
matched = true;
pattern_id = 1519;
}
if(b0_26 && b1_57 && b2_58 && b3_61 && b4_61 && b5_5 && b6_44 && b7_1) {
matched = true;
pattern_id = 1520;
}
if(b0_26 && b1_73 && b2_40) {
matched = true;
pattern_id = 1521;
}
if(b0_26 && b1_41 && b2_31) {
matched = true;
pattern_id = 1522;
}
if(b0_26 && b1_2 && b2_8 && b3_18 && b4_31 && b5_10 && b6_10 && b7_29 && b8_2 && b9_13 && b10_53 && b11_3 && b12_18 && b13_36 && b14_35 && b15_18 && b16_29 && b17_47 && b18_3 && b19_61 && b20_41 && b21_3) {
matched = true;
pattern_id = 1523;
}
if(b0_26 && b1_21 && b2_21 && b3_16 && b4_27 && b5_20 && b6_38 && b7_1 && b8_36 && b9_14 && b10_6 && b11_26 && b12_6 && b13_12 && b14_17 && b15_15) {
matched = true;
pattern_id = 1524;
}
if(b0_6 && b1_7 && b2_11 && b3_5 && b4_1 && b5_58 && b6_42 && b7_3 && b8_25 && b9_8 && b10_2) {
matched = true;
pattern_id = 1525;
}
if(b0_6 && b1_28 && b2_5 && b3_39 && b4_34 && b5_23 && b6_1 && b7_13 && b8_10) {
matched = true;
pattern_id = 1526;
}
if(b0_6 && b1_28 && b2_5 && b3_39 && b4_75 && b5_23 && b6_1 && b7_13 && b8_10) {
matched = true;
pattern_id = 1527;
}
if(b0_6 && b1_28 && b2_22 && b3_12 && b4_61 && b5_67) {
matched = true;
pattern_id = 1528;
}
if(b0_6 && b1_28 && b2_45 && b3_5) {
matched = true;
pattern_id = 1529;
}
if(b0_6 && b1_28 && b2_40 && b3_9) {
matched = true;
pattern_id = 1530;
}
if(b0_6 && b1_28 && b2_64 && b3_25 && b4_28 && b5_46 && b6_12 && b7_44 && b8_3) {
matched = true;
pattern_id = 1531;
}
if(b0_6 && b1_31 && b2_34 && b3_14 && b4_4) {
matched = true;
pattern_id = 1532;
}
if(b0_6 && b1_43 && b2_36 && b3_44) {
matched = true;
pattern_id = 1533;
}
if(b0_6 && b1_46 && b2_31) {
matched = true;
pattern_id = 1534;
}
if(b0_6 && b1_46 && b2_31 && b3_3 && b4_58) {
matched = true;
pattern_id = 1535;
}
if(b0_6 && b1_4 && b2_36 && b3_9) {
matched = true;
pattern_id = 1536;
}
if(b0_6 && b1_4 && b2_36 && b3_9 && b4_1) {
matched = true;
pattern_id = 1537;
}
if(b0_6 && b1_4 && b2_40 && b3_13) {
matched = true;
pattern_id = 1538;
}
if(b0_6 && b1_76 && b2_45) {
matched = true;
pattern_id = 1539;
}
if(b0_6 && b1_9 && b2_9 && b3_5) {
matched = true;
pattern_id = 1540;
}
if(b0_6 && b1_3 && b2_16 && b3_11 && b4_27 && b5_52 && b6_11) {
matched = true;
pattern_id = 1541;
}
if(b0_6 && b1_3 && b2_49 && b3_11 && b4_17 && b5_6 && b6_10 && b7_78 && b8_3 && b9_63 && b10_36 && b11_52 && b12_47 && b13_52 && b14_30 && b15_36 && b16_4 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7) {
matched = true;
pattern_id = 1542;
}
if(b0_6 && b1_3 && b2_6 && b3_6 && b4_6 && b5_6 && b6_47 && b7_19 && b8_3 && b9_36 && b10_6 && b11_27 && b12_4 && b13_4 && b14_21 && b15_15 && b16_1 && b17_56 && b18_32 && b19_41 && b20_30 && b21_48 && b22_45 && b23_46 && b24_29 && b25_6 && b26_9 && b27_32 && b28_6) {
matched = true;
pattern_id = 1543;
}
if(b0_6 && b1_3 && b2_6 && b3_6 && b4_6 && b5_6 && b6_5 && b7_6 && b8_4 && b9_4 && b10_1) {
matched = true;
pattern_id = 1544;
}
if(b0_6 && b1_1 && b2_1 && b3_1 && b4_32 && b5_49 && b6_5 && b7_4 && b8_1 && b9_4 && b10_15 && b11_20 && b12_2 && b13_2 && b14_2 && b15_51 && b16_15 && b17_1 && b18_1 && b19_6 && b20_14 && b21_4 && b22_2 && b23_2 && b24_9 && b25_39 && b26_11 && b27_7 && b28_2 && b29_1 && b30_1 && b31_4 && b32_7 && b33_1 && b34_3 && b35_7 && b36_3 && b37_4 && b38_5 && b39_7 && b40_22 && b41_13 && b42_8 && b43_4 && b44_5 && b45_15 && b46_2 && b47_3 && b48_4 && b49_4 && b50_10 && b51_3 && b52_4 && b53_4 && b54_3 && b55_9) {
matched = true;
pattern_id = 1545;
}
if(b0_24 && b1_19 && b2_30 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1546;
}
if(b0_24 && b1_28 && b2_5 && b3_9 && b4_8 && b5_61 && b6_12) {
matched = true;
pattern_id = 1547;
}
if(b0_24 && b1_28 && b2_5 && b3_9 && b4_8 && b5_61 && b6_12 && b7_44 && b8_3 && b9_63 && b10_36 && b11_52 && b12_47 && b13_52 && b14_30 && b15_36 && b16_7 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7 && b24_39 && b25_36 && b26_27 && b27_19 && b28_6 && b29_20 && b30_31 && b31_4) {
matched = true;
pattern_id = 1548;
}
if(b0_24 && b1_28 && b2_5 && b3_9 && b4_8 && b5_61 && b6_5 && b7_18 && b8_1 && b9_4) {
matched = true;
pattern_id = 1549;
}
if(b0_24 && b1_28 && b2_22 && b3_39 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1550;
}
if(b0_24 && b1_43 && b2_11 && b3_56 && b4_36 && b5_40 && b6_1) {
matched = true;
pattern_id = 1551;
}
if(b0_24 && b1_43 && b2_40 && b3_30) {
matched = true;
pattern_id = 1552;
}
if(b0_24 && b1_43 && b2_40 && b3_30 && b4_1 && b5_5 && b6_31 && b7_5 && b8_32) {
matched = true;
pattern_id = 1553;
}
if(b0_24 && b1_20 && b2_30 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1554;
}
if(b0_24 && b1_9 && b2_61 && b3_51) {
matched = true;
pattern_id = 1555;
}
if(b0_24 && b1_10) {
matched = true;
pattern_id = 1556;
}
if(b0_24 && b1_10 && b2_5 && b3_5) {
matched = true;
pattern_id = 1557;
}
if(b0_24 && b1_10 && b2_5 && b3_5 && b4_63 && b5_5) {
matched = true;
pattern_id = 1558;
}
if(b0_24 && b1_10 && b2_54 && b3_9) {
matched = true;
pattern_id = 1559;
}
if(b0_24 && b1_10 && b2_54 && b3_9 && b4_1 && b5_5 && b6_36 && b7_8 && b8_5 && b9_5 && b10_12 && b11_5 && b12_50 && b13_36 && b14_25 && b15_4 && b16_46 && b17_18 && b18_15 && b19_25 && b20_9 && b21_47 && b22_17 && b23_8 && b24_16 && b25_2 && b26_11) {
matched = true;
pattern_id = 1560;
}
if(b0_24 && b1_10 && b2_54 && b3_57) {
matched = true;
pattern_id = 1561;
}
if(b0_24 && b1_73 && b2_34 && b3_10 && b4_8 && b5_18 && b6_4 && b7_27 && b8_52) {
matched = true;
pattern_id = 1562;
}
if(b0_24 && b1_60 && b2_45 && b3_39 && b4_5 && b5_18) {
matched = true;
pattern_id = 1563;
}
if(b0_24 && b1_60 && b2_45 && b3_5) {
matched = true;
pattern_id = 1564;
}
if(b0_24 && b1_3 && b2_23 && b3_27 && b4_12 && b5_8 && b6_12 && b7_77 && b8_8 && b9_5 && b10_12 && b11_40 && b12_6 && b13_69 && b14_36 && b15_15 && b16_29 && b17_10 && b18_29 && b19_9 && b20_66 && b21_4 && b22_2 && b23_1 && b24_2 && b25_2 && b26_18 && b27_8) {
matched = true;
pattern_id = 1565;
}
if(b0_24 && b1_3 && b2_23 && b3_27 && b4_12 && b5_8 && b6_5 && b7_6 && b8_4 && b9_4 && b10_1 && b11_3 && b12_21 && b13_32 && b14_18 && b15_3) {
matched = true;
pattern_id = 1566;
}
if(b0_24 && b1_3 && b2_3 && b3_51 && b4_8 && b5_10 && b6_3 && b7_30 && b8_11 && b9_5 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_25 && b18_4 && b19_42 && b20_27 && b21_14 && b22_40 && b23_25 && b24_22 && b25_4 && b26_17 && b27_32 && b28_63 && b29_1 && b30_10 && b31_44 && b32_3) {
matched = true;
pattern_id = 1567;
}
if(b0_24 && b1_14 && b2_14 && b3_50 && b4_7 && b5_16 && b6_55 && b7_46) {
matched = true;
pattern_id = 1568;
}
if(b0_24 && b1_24 && b2_25 && b3_11 && b4_7 && b5_17 && b6_73 && b7_48 && b8_71 && b9_2 && b10_28 && b11_68 && b12_66 && b13_11 && b14_13 && b15_1 && b16_27 && b17_36 && b18_31 && b19_51 && b20_30 && b21_20 && b22_19 && b23_13 && b24_7 && b25_2) {
matched = true;
pattern_id = 1569;
}
if(b0_24 && b1_8 && b2_24 && b3_26 && b4_17 && b5_70 && b6_35 && b7_45 && b8_47 && b9_9 && b10_48 && b11_38 && b12_5 && b13_38) {
matched = true;
pattern_id = 1570;
}
if(b0_24 && b1_6 && b2_20 && b3_6 && b4_19 && b5_18) {
matched = true;
pattern_id = 1571;
}
if(b0_24 && b1_56 && b2_42 && b3_60 && b4_12 && b5_51 && b6_11 && b7_78 && b8_3 && b9_63 && b10_28 && b11_61 && b12_24 && b13_10 && b14_57 && b15_3 && b16_1 && b17_61 && b18_4 && b19_45 && b20_37 && b21_21 && b22_41 && b23_44 && b24_3 && b25_27 && b26_8 && b27_8 && b28_46 && b29_6 && b30_2) {
matched = true;
pattern_id = 1572;
}
if(b0_24 && b1_56 && b2_42 && b3_60 && b4_12 && b5_51 && b6_11 && b7_3 && b8_25 && b9_8 && b10_1 && b11_42 && b12_2 && b13_26 && b14_19 && b15_54 && b16_40 && b17_37 && b18_56 && b19_49 && b20_16 && b21_46 && b22_47 && b23_62) {
matched = true;
pattern_id = 1573;
}
if(b0_24 && b1_56 && b2_42 && b3_60 && b4_12 && b5_51 && b6_11 && b7_3 && b8_25 && b9_8 && b10_1 && b11_42 && b12_2 && b13_26 && b14_19 && b15_54 && b16_40 && b17_37 && b18_56 && b19_49 && b20_16 && b21_46 && b22_47 && b23_62 && b24_59 && b25_10 && b26_12 && b27_13 && b28_24 && b29_2 && b30_25 && b31_57 && b32_58 && b33_55 && b34_43 && b35_48 && b36_7 && b37_6 && b38_24 && b39_19 && b40_49 && b41_49 && b42_38 && b43_28) {
matched = true;
pattern_id = 1574;
}
if(b0_49 && b1_28 && b2_22 && b3_34 && b4_18 && b5_20 && b6_6 && b7_20 && b8_42 && b9_17 && b10_13 && b11_36 && b12_20 && b13_47 && b14_59 && b15_56 && b16_56 && b17_23 && b18_54) {
matched = true;
pattern_id = 1575;
}
if(b0_49 && b1_28 && b2_56 && b3_67 && b4_43 && b5_2 && b6_11 && b7_10 && b8_8 && b9_28) {
matched = true;
pattern_id = 1576;
}
if(b0_49 && b1_43 && b2_30 && b3_30 && b4_59 && b5_72 && b6_42 && b7_73 && b8_52) {
matched = true;
pattern_id = 1577;
}
if(b0_49 && b1_48 && b2_11 && b3_15 && b4_3 && b5_47 && b6_45 && b7_8 && b8_14 && b9_13 && b10_32 && b11_33 && b12_6 && b13_24 && b14_24 && b15_20) {
matched = true;
pattern_id = 1578;
}
if(b0_49 && b1_20 && b2_11) {
matched = true;
pattern_id = 1579;
}
if(b0_49 && b1_20 && b2_59 && b3_63 && b4_64 && b5_19 && b6_43) {
matched = true;
pattern_id = 1580;
}
if(b0_49 && b1_57 && b2_5 && b3_63 && b4_40) {
matched = true;
pattern_id = 1581;
}
if(b0_49 && b1_16 && b2_43 && b3_43 && b4_2 && b5_3 && b6_7 && b7_8 && b8_39 && b9_22 && b10_12 && b11_47 && b12_26 && b13_19 && b14_24 && b15_41 && b16_18 && b17_66 && b18_3 && b19_27 && b20_48 && b21_30 && b22_20 && b23_50 && b24_3 && b25_24) {
matched = true;
pattern_id = 1582;
}
if(b0_49 && b1_16 && b2_43 && b3_43 && b4_2 && b5_3 && b6_7 && b7_8 && b8_39 && b9_22 && b10_12 && b11_47 && b12_26 && b13_19 && b14_24 && b15_41 && b16_18 && b17_8 && b18_12 && b19_13 && b20_9) {
matched = true;
pattern_id = 1583;
}
if(b0_49 && b1_16 && b2_43 && b3_43 && b4_2 && b5_25 && b6_8 && b7_9 && b8_5 && b9_4 && b10_41 && b11_22 && b12_10 && b13_1 && b14_6) {
matched = true;
pattern_id = 1584;
}
if(b0_9 && b1_43 && b2_31 && b3_25) {
matched = true;
pattern_id = 1585;
}
if(b0_9 && b1_4 && b2_45 && b3_57 && b4_13 && b5_5 && b6_9 && b7_74 && b8_38 && b9_46 && b10_45) {
matched = true;
pattern_id = 1586;
}
if(b0_9 && b1_49 && b2_31 && b3_12 && b4_52 && b5_67 && b6_5 && b7_24 && b8_32 && b9_4) {
matched = true;
pattern_id = 1587;
}
if(b0_9 && b1_9 && b2_9 && b3_9) {
matched = true;
pattern_id = 1588;
}
if(b0_9 && b1_9 && b2_9 && b3_9 && b4_1) {
matched = true;
pattern_id = 1589;
}
if(b0_9 && b1_9 && b2_9 && b3_9 && b4_1 && b5_10 && b6_21 && b7_11 && b8_35 && b9_5 && b10_47 && b11_21 && b12_46 && b13_5 && b14_28 && b15_16 && b16_30 && b17_27 && b18_20 && b19_41 && b20_10 && b21_36 && b22_36 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 1590;
}
if(b0_9 && b1_9 && b2_9 && b3_9 && b4_64 && b5_24 && b6_29 && b7_5 && b8_3) {
matched = true;
pattern_id = 1591;
}
if(b0_9 && b1_9 && b2_9 && b3_9 && b4_32 && b5_44 && b6_1 && b7_3 && b8_11 && b9_28 && b10_28 && b11_49 && b12_5 && b13_16 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9) {
matched = true;
pattern_id = 1592;
}
if(b0_9 && b1_9 && b2_56 && b3_14) {
matched = true;
pattern_id = 1593;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10) {
matched = true;
pattern_id = 1594;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_8 && b13_74 && b14_59 && b15_48 && b16_54 && b17_13 && b18_15 && b19_34) {
matched = true;
pattern_id = 1595;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_63 && b13_36 && b14_21 && b15_40 && b16_8 && b17_29 && b18_3 && b19_61 && b20_33 && b21_14 && b22_11 && b23_32 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2) {
matched = true;
pattern_id = 1596;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_63 && b13_36 && b14_21 && b15_40 && b16_8 && b17_29 && b18_3 && b19_2 && b20_24 && b21_38 && b22_19 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 1597;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_43 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 1598;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_54 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_45 && b41_37 && b42_38 && b43_43 && b44_18 && b45_37 && b46_4 && b47_30 && b48_4 && b49_4 && b50_9 && b51_19 && b52_5 && b53_3 && b54_26 && b55_10 && b56_7 && b57_14 && b58_6 && b59_23 && b60_24 && b61_9 && b62_23 && b63_23 && b64_16 && b65_25 && b66_11 && b67_21 && b68_6 && b69_11 && b70_25 && b71_4 && b72_5 && b73_20 && b74_1 && b75_2 && b76_17 && b77_18 && b78_19 && b79_9 && b80_20 && b81_14 && b82_8 && b83_6 && b84_4 && b85_2 && b86_6 && b87_2 && b88_2 && b89_6 && b90_5) {
matched = true;
pattern_id = 1599;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_54 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_45 && b41_1 && b42_40 && b43_16 && b44_32 && b45_26 && b46_2 && b47_3 && b48_31 && b49_22 && b50_2 && b51_22 && b52_3 && b53_4 && b54_32 && b55_3 && b56_2 && b57_26 && b58_9) {
matched = true;
pattern_id = 1600;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_54 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_37 && b41_15 && b42_19 && b43_8 && b44_33 && b45_4 && b46_8 && b47_6 && b48_3 && b49_22 && b50_27 && b51_17 && b52_19 && b53_19 && b54_14 && b55_20 && b56_4 && b57_12 && b58_17 && b59_13 && b60_12 && b61_13 && b62_1 && b63_11 && b64_5 && b65_14 && b66_9 && b67_11 && b68_10 && b69_10 && b70_14 && b71_11 && b72_9 && b73_11 && b74_12) {
matched = true;
pattern_id = 1601;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_54 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_45 && b40_46 && b41_46 && b42_39 && b43_2 && b44_41 && b45_12 && b46_4 && b47_9 && b48_27 && b49_31 && b50_21 && b51_27 && b52_1 && b53_28 && b54_6 && b55_29 && b56_5 && b57_23 && b58_13 && b59_29 && b60_26 && b61_9 && b62_27 && b63_26 && b64_4 && b65_21 && b66_4 && b67_4 && b68_18 && b69_2 && b70_3 && b71_17 && b72_2) {
matched = true;
pattern_id = 1602;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_8 && b24_48 && b25_53 && b26_35 && b27_37 && b28_19 && b29_34 && b30_48 && b31_28 && b32_1 && b33_44 && b34_44 && b35_5 && b36_42 && b37_17 && b38_44 && b39_7 && b40_9 && b41_2 && b42_3 && b43_2 && b44_38 && b45_30 && b46_32 && b47_10 && b48_21 && b49_4 && b50_9 && b51_19 && b52_5 && b53_3 && b54_9 && b55_24 && b56_21 && b57_16 && b58_12 && b59_18 && b60_5 && b61_17 && b62_6 && b63_15 && b64_12 && b65_18 && b66_14 && b67_15 && b68_14 && b69_13 && b70_3 && b71_14 && b72_3 && b73_4 && b74_15 && b75_3 && b76_12 && b77_5 && b78_13 && b79_8 && b80_14 && b81_6 && b82_13 && b83_11 && b84_9 && b85_10 && b86_10 && b87_9 && b88_7 && b89_8) {
matched = true;
pattern_id = 1603;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_8 && b24_48 && b25_53 && b26_35 && b27_37 && b28_19 && b29_34 && b30_48 && b31_28 && b32_1 && b33_44 && b34_44 && b35_5 && b36_42 && b37_17 && b38_44 && b39_7 && b40_9 && b41_2 && b42_3 && b43_2 && b44_23 && b45_21 && b46_30 && b47_5 && b48_29 && b49_3 && b50_42 && b51_29 && b52_32 && b53_3 && b54_31 && b55_8 && b56_24 && b57_25 && b58_6 && b59_21 && b60_17 && b61_3 && b62_33 && b63_3 && b64_4 && b65_31 && b66_3 && b67_27 && b68_5 && b69_23 && b70_20 && b71_24 && b72_23 && b73_25 && b74_28 && b75_21 && b76_25 && b77_21 && b78_23 && b79_4 && b80_27 && b81_18 && b82_3 && b83_6 && b84_17 && b85_21 && b86_4 && b87_19 && b88_9) {
matched = true;
pattern_id = 1604;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_8 && b24_48 && b25_53 && b26_35 && b27_37 && b28_19 && b29_34 && b30_48 && b31_28 && b32_1 && b33_44 && b34_44 && b35_5 && b36_42 && b37_17 && b38_14 && b39_7 && b40_9 && b41_2 && b42_3 && b43_2 && b44_38 && b45_30 && b46_32 && b47_10 && b48_21 && b49_37 && b50_12 && b51_22 && b52_24 && b53_38 && b54_10 && b55_8 && b56_33 && b57_9 && b58_34 && b59_34 && b60_8 && b61_24 && b62_31 && b63_25 && b64_23 && b65_27 && b66_11 && b67_13 && b68_26 && b69_2 && b70_31 && b71_23 && b72_20 && b73_20 && b74_26 && b75_20 && b76_23 && b77_5 && b78_12 && b79_8 && b80_25 && b81_6 && b82_19 && b83_22 && b84_16 && b85_19 && b86_19 && b87_16 && b88_18 && b89_18 && b90_14 && b91_15 && b92_16 && b93_10 && b94_16 && b95_3 && b96_5 && b97_14 && b98_2 && b99_11 && b100_2 && b101_9 && b102_7 && b103_13 && b104_13 && b105_12 && b106_13 && b107_12 && b108_12 && b109_13 && b110_4 && b111_11 && b112_7 && b113_11 && b114_8 && b115_12 && b116_12 && b117_10 && b118_7 && b119_7 && b120_11 && b121_5 && b122_11 && b123_11 && b124_2 && b125_11 && b126_11 && b127_7 && b128_2 && b129_9 && b130_8 && b131_10 && b132_10 && b133_8 && b134_9 && b135_10 && b136_7 && b137_7 && b138_7 && b139_9 && b140_8 && b141_8 && b142_7 && b143_8 && b144_8 && b145_8 && b146_7 && b147_8 && b148_7 && b149_6 && b150_5 && b151_6 && b152_5 && b153_3 && b154_6 && b155_6 && b156_1 && b157_6 && b158_1 && b159_1 && b160_5 && b161_3) {
matched = true;
pattern_id = 1605;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_45 && b41_37 && b42_38 && b43_43 && b44_18 && b45_39 && b46_36 && b47_3 && b48_3 && b49_5 && b50_36 && b51_3 && b52_3 && b53_32 && b54_1 && b55_22 && b56_28 && b57_21 && b58_31 && b59_26 && b60_2 && b61_27 && b62_26 && b63_2 && b64_21 && b65_26 && b66_22 && b67_3 && b68_23 && b69_21 && b70_5 && b71_6 && b72_19 && b73_18 && b74_16 && b75_18 && b76_20 && b77_20 && b78_20 && b79_17 && b80_22 && b81_17 && b82_4 && b83_8 && b84_4 && b85_2 && b86_6 && b87_2 && b88_2 && b89_6 && b90_5 && b91_13 && b92_11 && b93_16 && b94_13 && b95_3 && b96_10 && b97_10 && b98_13 && b99_10 && b100_13 && b101_12 && b102_5 && b103_11 && b104_11 && b105_11 && b106_12 && b107_9 && b108_11 && b109_11 && b110_11 && b111_10 && b112_11 && b113_10 && b114_7 && b115_9 && b116_11 && b117_9 && b118_8 && b119_5 && b120_6 && b121_10 && b122_10 && b123_10 && b124_10 && b125_10 && b126_10 && b127_10 && b128_11 && b129_8 && b130_11 && b131_9 && b132_9 && b133_7 && b134_8 && b135_9 && b136_6 && b137_6 && b138_6 && b139_8 && b140_7 && b141_7 && b142_1 && b143_7 && b144_4 && b145_7 && b146_6 && b147_7 && b148_6 && b149_4 && b150_2) {
matched = true;
pattern_id = 1606;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_53 && b13_6 && b14_17 && b15_31 && b16_5 && b17_28 && b18_24 && b19_18 && b20_8 && b21_4 && b22_10 && b23_13 && b24_9 && b25_53 && b26_35 && b27_37 && b28_19 && b29_34 && b30_48 && b31_28 && b32_1 && b33_44 && b34_44 && b35_5 && b36_39 && b37_17 && b38_44 && b39_7 && b40_9 && b41_2 && b42_4 && b43_30 && b44_3 && b45_3 && b46_8 && b47_6 && b48_3 && b49_22 && b50_24 && b51_15 && b52_18 && b53_17 && b54_12 && b55_19 && b56_3) {
matched = true;
pattern_id = 1607;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_27 && b13_59 && b14_36 && b15_18 && b16_5 && b17_37 && b18_4 && b19_6 && b20_1 && b21_59 && b22_13 && b23_2 && b24_38 && b25_6) {
matched = true;
pattern_id = 1608;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_62 && b13_27 && b14_42 && b15_8 && b16_8 && b17_26 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 1609;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_40 && b13_16 && b14_17 && b15_31 && b16_50 && b17_24 && b18_41 && b19_9 && b20_41 && b21_36 && b22_59 && b23_8 && b24_55 && b25_36 && b26_50 && b27_18 && b28_26 && b29_40 && b30_27 && b31_9) {
matched = true;
pattern_id = 1610;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_52 && b13_36 && b14_35 && b15_25 && b16_24 && b17_36 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 1611;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_50 && b13_5 && b14_18 && b15_15 && b16_30 && b17_2 && b18_31 && b19_21 && b20_24 && b21_51 && b22_33 && b23_50 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2) {
matched = true;
pattern_id = 1612;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_25 && b13_47 && b14_28 && b15_37 && b16_15 && b17_1 && b18_42 && b19_1 && b20_1 && b21_28 && b22_1) {
matched = true;
pattern_id = 1613;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_32 && b13_18 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9) {
matched = true;
pattern_id = 1614;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15) {
matched = true;
pattern_id = 1615;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_24 && b18_68 && b19_56 && b20_64 && b21_17 && b22_32 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 1616;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_16 && b18_59 && b19_6 && b20_12 && b21_45 && b22_1) {
matched = true;
pattern_id = 1617;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_12 && b18_69 && b19_37 && b20_8 && b21_45 && b22_11 && b23_18 && b24_20 && b25_45 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3) {
matched = true;
pattern_id = 1618;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_12 && b18_32 && b19_34 && b20_24 && b21_45 && b22_11 && b23_32 && b24_15 && b25_3) {
matched = true;
pattern_id = 1619;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_23 && b18_67 && b19_14 && b20_42 && b21_62 && b22_1 && b23_2 && b24_52 && b25_13 && b26_2 && b27_32 && b28_6) {
matched = true;
pattern_id = 1620;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_10 && b19_12 && b20_32 && b21_10 && b22_40 && b23_32 && b24_1 && b25_45 && b26_8 && b27_20 && b28_33 && b29_56 && b30_5) {
matched = true;
pattern_id = 1621;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32) {
matched = true;
pattern_id = 1622;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_8 && b29_59 && b30_12 && b31_38 && b32_23 && b33_38 && b34_22 && b35_18 && b36_19 && b37_36 && b38_34 && b39_12 && b40_3 && b41_42 && b42_36 && b43_11 && b44_18 && b45_40 && b46_41 && b47_36 && b48_28 && b49_22 && b50_37 && b51_28 && b52_4 && b53_17 && b54_18 && b55_25 && b56_3 && b57_2 && b58_17 && b59_13 && b60_12 && b61_25 && b62_7 && b63_20 && b64_25 && b65_6 && b66_24 && b67_26 && b68_5 && b69_7 && b70_32 && b71_14 && b72_25 && b73_5 && b74_4 && b75_14 && b76_13 && b77_7 && b78_14 && b79_3) {
matched = true;
pattern_id = 1623;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_8 && b29_59 && b30_12 && b31_38 && b32_23 && b33_38 && b34_22 && b35_18 && b36_19 && b37_36 && b38_34 && b39_12 && b40_3 && b41_42 && b42_36 && b43_11 && b44_18 && b45_40 && b46_41 && b47_36 && b48_28 && b49_22 && b50_41 && b51_28 && b52_4 && b53_17 && b54_18 && b55_25 && b56_3 && b57_2 && b58_17 && b59_13 && b60_12 && b61_25 && b62_7 && b63_20 && b64_25 && b65_6 && b66_24 && b67_26 && b68_5 && b69_7 && b70_32 && b71_14 && b72_2 && b73_3 && b74_27 && b75_4 && b76_13 && b77_24 && b78_22 && b79_19 && b80_26 && b81_4 && b82_4 && b83_18 && b84_2 && b85_2 && b86_13 && b87_8) {
matched = true;
pattern_id = 1624;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_8 && b29_59 && b30_12 && b31_38 && b32_23 && b33_38 && b34_22 && b35_18 && b36_19 && b37_36 && b38_34 && b39_12 && b40_3 && b41_42 && b42_36 && b43_11 && b44_18 && b45_40 && b46_41 && b47_36 && b48_28 && b49_22 && b50_44 && b51_28 && b52_4 && b53_39) {
matched = true;
pattern_id = 1625;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_8 && b29_59 && b30_12 && b31_38 && b32_23 && b33_38 && b34_22 && b35_18 && b36_19 && b37_36 && b38_34 && b39_12 && b40_3 && b41_42 && b42_36 && b43_11 && b44_43 && b45_4 && b46_4 && b47_7 && b48_2 && b49_3 && b50_4 && b51_3) {
matched = true;
pattern_id = 1626;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_6 && b29_2 && b30_44 && b31_10 && b32_7 && b33_54 && b34_3) {
matched = true;
pattern_id = 1627;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_41 && b18_16 && b19_56 && b20_38 && b21_31 && b22_54 && b23_16 && b24_3 && b25_30 && b26_30 && b27_2 && b28_61 && b29_36 && b30_17 && b31_45 && b32_27 && b33_24 && b34_21 && b35_28 && b36_48 && b37_10 && b38_5 && b39_16 && b40_2 && b41_4 && b42_40 && b43_11) {
matched = true;
pattern_id = 1628;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_41 && b18_4 && b19_48 && b20_15 && b21_5 && b22_31 && b23_16 && b24_29 && b25_52 && b26_25 && b27_4 && b28_30 && b29_1 && b30_9 && b31_44 && b32_1 && b33_1 && b34_12 && b35_1) {
matched = true;
pattern_id = 1629;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_20 && b18_4 && b19_35 && b20_17 && b21_35 && b22_11 && b23_42 && b24_1 && b25_36 && b26_19 && b27_1 && b28_28 && b29_25 && b30_2 && b31_13 && b32_4 && b33_4) {
matched = true;
pattern_id = 1630;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_20 && b18_4 && b19_12 && b20_32 && b21_21 && b22_34 && b23_19 && b24_45 && b25_5 && b26_45 && b27_18 && b28_21 && b29_16 && b30_36 && b31_50 && b32_55 && b33_16 && b34_37 && b35_12 && b36_40) {
matched = true;
pattern_id = 1631;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_70 && b18_29 && b19_9 && b20_17 && b21_14 && b22_41 && b23_18 && b24_21 && b25_30 && b26_27) {
matched = true;
pattern_id = 1632;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_17 && b18_10 && b19_34 && b20_17 && b21_30 && b22_42 && b23_19 && b24_22 && b25_4) {
matched = true;
pattern_id = 1633;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_4 && b18_15 && b19_21 && b20_2 && b21_55 && b22_40 && b23_46 && b24_17 && b25_49 && b26_25 && b27_3 && b28_30) {
matched = true;
pattern_id = 1634;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_25 && b18_32 && b19_40 && b20_17 && b21_21 && b22_3 && b23_18 && b24_24 && b25_30 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3) {
matched = true;
pattern_id = 1635;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26) {
matched = true;
pattern_id = 1636;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3) {
matched = true;
pattern_id = 1637;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_65 && b16_34 && b17_16 && b18_54 && b19_56 && b20_58 && b21_58 && b22_12) {
matched = true;
pattern_id = 1638;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_62 && b16_3 && b17_27 && b18_11 && b19_34 && b20_3 && b21_52 && b22_37 && b23_10 && b24_10 && b25_13 && b26_17 && b27_33 && b28_31 && b29_47 && b30_15 && b31_14 && b32_40 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7) {
matched = true;
pattern_id = 1639;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_51 && b16_44 && b17_37 && b18_19 && b19_15 && b20_17 && b21_21 && b22_48 && b23_24 && b24_3 && b25_27 && b26_4 && b27_6 && b28_45 && b29_2) {
matched = true;
pattern_id = 1640;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_46 && b16_5 && b17_54 && b18_32 && b19_18 && b20_10 && b21_41 && b22_37 && b23_12 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2) {
matched = true;
pattern_id = 1641;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_24 && b17_4 && b18_22 && b19_31 && b20_30 && b21_21 && b22_50 && b23_28 && b24_2 && b25_61 && b26_52 && b27_52 && b28_64) {
matched = true;
pattern_id = 1642;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_18 && b20_37 && b21_14 && b22_4 && b23_20 && b24_25 && b25_2 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3) {
matched = true;
pattern_id = 1643;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_32 && b20_37 && b21_14 && b22_4 && b23_20 && b24_25 && b25_2 && b26_8 && b27_47 && b28_28 && b29_34 && b30_21 && b31_27 && b32_28 && b33_25 && b34_35 && b35_41 && b36_9 && b37_21 && b38_2 && b39_2 && b40_34 && b41_5 && b42_6 && b43_4 && b44_5 && b45_26) {
matched = true;
pattern_id = 1644;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_32 && b20_37 && b21_14 && b22_4 && b23_20 && b24_25 && b25_2 && b26_8 && b27_8 && b28_9 && b29_8 && b30_2 && b31_40 && b32_24 && b33_19 && b34_17 && b35_28 && b36_15 && b37_14 && b38_37 && b39_22 && b40_15 && b41_13 && b42_6 && b43_19 && b44_18 && b45_5 && b46_35 && b47_16 && b48_4 && b49_26 && b50_21) {
matched = true;
pattern_id = 1645;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_32 && b20_37 && b21_14 && b22_4 && b23_55 && b24_25 && b25_2 && b26_8 && b27_47 && b28_49 && b29_3 && b30_3 && b31_24 && b32_24 && b33_9 && b34_23 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_35 && b41_13 && b42_28 && b43_35 && b44_5 && b45_3 && b46_27 && b47_27 && b48_13 && b49_18 && b50_12 && b51_11 && b52_15 && b53_4 && b54_3 && b55_14 && b56_12 && b57_4 && b58_13 && b59_10 && b60_8 && b61_11 && b62_9 && b63_8 && b64_8 && b65_11 && b66_2 && b67_8 && b68_8 && b69_2 && b70_11 && b71_5 && b72_3 && b73_5 && b74_8 && b75_8 && b76_5 && b77_5 && b78_8 && b79_6 && b80_7 && b81_7 && b82_7 && b83_8 && b84_4 && b85_2 && b86_6 && b87_2 && b88_2 && b89_6 && b90_5) {
matched = true;
pattern_id = 1646;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_32 && b20_37 && b21_14 && b22_4 && b23_55 && b24_25 && b25_2 && b26_8 && b27_8 && b28_9 && b29_8 && b30_2 && b31_43 && b32_27 && b33_35 && b34_19 && b35_27 && b36_32 && b37_27 && b38_2 && b39_2 && b40_34 && b41_13 && b42_4 && b43_34 && b44_5 && b45_27 && b46_26 && b47_9 && b48_2 && b49_17 && b50_20 && b51_10 && b52_14 && b53_3 && b54_8 && b55_11 && b56_2 && b57_4 && b58_12 && b59_9 && b60_4 && b61_9 && b62_8 && b63_7 && b64_1 && b65_10 && b66_8 && b67_7 && b68_7 && b69_2 && b70_10 && b71_7 && b72_5 && b73_7 && b74_7 && b75_3 && b76_5 && b77_8 && b78_7 && b79_3 && b80_5 && b81_6 && b82_6 && b83_7 && b84_5 && b85_5 && b86_3 && b87_4 && b88_5 && b89_4) {
matched = true;
pattern_id = 1647;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_66 && b16_64 && b17_61 && b18_45 && b19_13 && b20_36 && b21_13 && b22_56 && b23_7 && b24_16 && b25_12 && b26_11 && b27_51 && b28_16 && b29_9) {
matched = true;
pattern_id = 1648;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_66 && b16_29 && b17_37 && b18_16 && b19_28 && b20_34 && b21_42 && b22_45 && b23_46 && b24_32 && b25_13 && b26_63 && b27_22 && b28_23 && b29_41 && b30_41 && b31_14 && b32_40 && b33_29) {
matched = true;
pattern_id = 1649;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_56 && b16_16 && b17_29 && b18_22 && b19_35 && b20_13 && b21_9 && b22_2 && b23_34 && b24_10 && b25_2 && b26_8 && b27_8 && b28_9 && b29_8 && b30_2 && b31_43 && b32_27 && b33_35 && b34_19 && b35_27 && b36_32 && b37_27 && b38_25 && b39_38 && b40_39 && b41_5 && b42_32 && b43_13 && b44_4 && b45_4 && b46_8 && b47_6 && b48_3 && b49_22 && b50_31 && b51_3 && b52_20 && b53_22 && b54_3 && b55_3 && b56_19 && b57_14 && b58_20 && b59_17 && b60_8 && b61_15 && b62_15 && b63_2 && b64_13 && b65_16 && b66_4 && b67_13 && b68_11 && b69_3 && b70_6 && b71_12 && b72_8 && b73_5 && b74_14 && b75_11 && b76_5 && b77_5 && b78_11 && b79_1 && b80_11 && b81_10 && b82_11 && b83_11 && b84_8 && b85_8 && b86_9 && b87_7 && b88_7 && b89_2 && b90_7 && b91_5 && b92_5 && b93_6 && b94_6 && b95_6 && b96_1 && b97_5 && b98_6 && b99_6 && b100_6 && b101_3 && b102_7 && b103_5 && b104_4 && b105_5 && b106_3 && b107_1 && b108_4 && b109_5 && b110_1 && b111_4 && b112_4) {
matched = true;
pattern_id = 1650;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_56 && b16_16 && b17_29 && b18_22 && b19_35 && b20_9 && b21_54 && b22_5 && b23_7 && b24_7 && b25_31 && b26_21 && b27_45 && b28_6 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 1651;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_53 && b16_40 && b17_44 && b18_31 && b19_47 && b20_28 && b21_27 && b22_14 && b23_18) {
matched = true;
pattern_id = 1652;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_55 && b16_5 && b17_51 && b18_55 && b19_50 && b20_3 && b21_48 && b22_20 && b23_18 && b24_1 && b25_6 && b26_2 && b27_49 && b28_8 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 1653;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_39 && b16_20 && b17_60 && b18_8 && b19_26 && b20_4 && b21_4 && b22_15) {
matched = true;
pattern_id = 1654;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_64 && b16_46 && b17_10 && b18_29 && b19_31 && b20_44 && b21_36) {
matched = true;
pattern_id = 1655;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_64 && b16_16 && b17_47 && b18_32 && b19_34 && b20_2 && b21_10 && b22_13 && b23_26 && b24_17 && b25_48 && b26_32 && b27_31 && b28_31 && b29_41 && b30_29 && b31_14 && b32_40 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7) {
matched = true;
pattern_id = 1656;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_47 && b16_29 && b17_13 && b18_9 && b19_21 && b20_2 && b21_2 && b22_18 && b23_24 && b24_2 && b25_32 && b26_25 && b27_3 && b28_35 && b29_19 && b30_13 && b31_32 && b32_26 && b33_8 && b34_12 && b35_22 && b36_20 && b37_25 && b38_26 && b39_17 && b40_15 && b41_17 && b42_3 && b43_4 && b44_17 && b45_3 && b46_4 && b47_8 && b48_3) {
matched = true;
pattern_id = 1657;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_47 && b16_24 && b17_49 && b18_66 && b19_34 && b20_28 && b21_42 && b22_5 && b23_25 && b24_4 && b25_33 && b26_32 && b27_19) {
matched = true;
pattern_id = 1658;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_70 && b16_30 && b17_26 && b18_36 && b19_35 && b20_17 && b21_20 && b22_1 && b23_2 && b24_52 && b25_13 && b26_2 && b27_32 && b28_6) {
matched = true;
pattern_id = 1659;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_33 && b16_2 && b17_10 && b18_56 && b19_35 && b20_45 && b21_29 && b22_25 && b23_34 && b24_20 && b25_36 && b26_33) {
matched = true;
pattern_id = 1660;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_52 && b16_33 && b17_69 && b18_14 && b19_10 && b20_33 && b21_50 && b22_64 && b23_35 && b24_60 && b25_43 && b26_55 && b27_39 && b28_19 && b29_51 && b30_28 && b31_36 && b32_59 && b33_48 && b34_53 && b35_49 && b36_28 && b37_1 && b38_50 && b39_16 && b40_50 && b41_24 && b42_28 && b43_48 && b44_44 && b45_14 && b46_40) {
matched = true;
pattern_id = 1661;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_68 && b16_4 && b17_1 && b18_29 && b19_13 && b20_31 && b21_29 && b22_20 && b23_28) {
matched = true;
pattern_id = 1662;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_31 && b15_11 && b16_19) {
matched = true;
pattern_id = 1663;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_3 && b5_11 && b6_18 && b7_10 && b8_10 && b9_57 && b10_33 && b11_20) {
matched = true;
pattern_id = 1664;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_32 && b5_44 && b6_49 && b7_3 && b8_4 && b9_12 && b10_17 && b11_27 && b12_4 && b13_26 && b14_33 && b15_24 && b16_1 && b17_9 && b18_1 && b19_6 && b20_53 && b21_21 && b22_34 && b23_51 && b24_3 && b25_42 && b26_27 && b27_8 && b28_9 && b29_2 && b30_2 && b31_16 && b32_41 && b33_18 && b34_41 && b35_2 && b36_1 && b37_32 && b38_2 && b39_34 && b40_4 && b41_13 && b42_27 && b43_27 && b44_25 && b45_23 && b46_17 && b47_14 && b48_7) {
matched = true;
pattern_id = 1665;
}
if(b0_38 && b1_28 && b2_56 && b3_10 && b4_5 && b5_24 && b6_47 && b7_3 && b8_1 && b9_8 && b10_2) {
matched = true;
pattern_id = 1666;
}
if(b0_38 && b1_57 && b2_36 && b3_68) {
matched = true;
pattern_id = 1667;
}
if(b0_38 && b1_2 && b2_6 && b3_50 && b4_27 && b5_8 && b6_7 && b7_1 && b8_54 && b9_15 && b10_48 && b11_42 && b12_6 && b13_63 && b14_17 && b15_31 && b16_58 && b17_29 && b18_22 && b19_1 && b20_40 && b21_2 && b22_52 && b23_29 && b24_4 && b25_4 && b26_25 && b27_16 && b28_45 && b29_23 && b30_22 && b31_26) {
matched = true;
pattern_id = 1668;
}
if(b0_38 && b1_3 && b2_23 && b3_18 && b4_27 && b5_10 && b6_55 && b7_56 && b8_44 && b9_27 && b10_5 && b11_35 && b12_5 && b13_4) {
matched = true;
pattern_id = 1669;
}
if(b0_38 && b1_8 && b2_24 && b3_7 && b4_24 && b5_6 && b6_12 && b7_16 && b8_5 && b9_14 && b10_26 && b11_46 && b12_25 && b13_1 && b14_43 && b15_50 && b16_39 && b17_13 && b18_4 && b19_21) {
matched = true;
pattern_id = 1670;
}
if(b0_38 && b1_1 && b2_1 && b3_30 && b4_32 && b5_28 && b6_5 && b7_19 && b8_1 && b9_13 && b10_18 && b11_1 && b12_6 && b13_11 && b14_7 && b15_4 && b16_9 && b17_12 && b18_8 && b19_11 && b20_9 && b21_9 && b22_10 && b23_8 && b24_10 && b25_11 && b26_8 && b27_9 && b28_12 && b29_7 && b30_7 && b31_7 && b32_1 && b33_5 && b34_7 && b35_1) {
matched = true;
pattern_id = 1671;
}
if(b0_5 && b1_5 && b2_5 && b3_5 && b4_5 && b5_5 && b6_4 && b7_5) {
matched = true;
pattern_id = 1672;
}
if(b0_5 && b1_43 && b2_22 && b3_39 && b4_5 && b5_18) {
matched = true;
pattern_id = 1673;
}
if(b0_5 && b1_57 && b2_5 && b3_18 && b4_2 && b5_6 && b6_18 && b7_35 && b8_34 && b9_41) {
matched = true;
pattern_id = 1674;
}
if(b0_5 && b1_2 && b2_8 && b3_17 && b4_27 && b5_20 && b6_38 && b7_5 && b8_14 && b9_11) {
matched = true;
pattern_id = 1675;
}
if(b0_5 && b1_3 && b2_42 && b3_42 && b4_27 && b5_42 && b6_60 && b7_14 && b8_8 && b9_28 && b10_18 && b11_6 && b12_37 && b13_22 && b14_51 && b15_33 && b16_3 && b17_51) {
matched = true;
pattern_id = 1676;
}
if(b0_5 && b1_3 && b2_24 && b3_40 && b4_44 && b5_27 && b6_7 && b7_38 && b8_40 && b9_9 && b10_34 && b11_24 && b12_23 && b13_15 && b14_26 && b15_15 && b16_5 && b17_25 && b18_12 && b19_21 && b20_23 && b21_18 && b22_18 && b23_18) {
matched = true;
pattern_id = 1677;
}
if(b0_5 && b1_14 && b2_43 && b3_8 && b4_2 && b5_48 && b6_46 && b7_1 && b8_39 && b9_13 && b10_33 && b11_2 && b12_23 && b13_5 && b14_25 && b15_21) {
matched = true;
pattern_id = 1678;
}
if(b0_5 && b1_21 && b2_21 && b3_23 && b4_18 && b5_42 && b6_7 && b7_41) {
matched = true;
pattern_id = 1679;
}
if(b0_5 && b1_6 && b2_2 && b3_7 && b4_7 && b5_4 && b6_6 && b7_7 && b8_5) {
matched = true;
pattern_id = 1680;
}
if(b0_40 && b1_44 && b2_32 && b3_63 && b4_8 && b5_31 && b6_9 && b7_19 && b8_32 && b9_4 && b10_41 && b11_22 && b12_6 && b13_31 && b14_1 && b15_7) {
matched = true;
pattern_id = 1681;
}
if(b0_40 && b1_44 && b2_36 && b3_6 && b4_17 && b5_21 && b6_8 && b7_8 && b8_47 && b9_5 && b10_7 && b11_69 && b12_14 && b13_36 && b14_35) {
matched = true;
pattern_id = 1682;
}
if(b0_40 && b1_7 && b2_63 && b3_39) {
matched = true;
pattern_id = 1683;
}
if(b0_40 && b1_28 && b2_39 && b3_63 && b4_64 && b5_9 && b6_1) {
matched = true;
pattern_id = 1684;
}
if(b0_40 && b1_46 && b2_69 && b3_39) {
matched = true;
pattern_id = 1685;
}
if(b0_40 && b1_10 && b2_22 && b3_39) {
matched = true;
pattern_id = 1686;
}
if(b0_40 && b1_34 && b2_39 && b3_33 && b4_37 && b5_40 && b6_26 && b7_24 && b8_27 && b9_19 && b10_20 && b11_17 && b12_2 && b13_2 && b14_2 && b15_9 && b16_13 && b17_8 && b18_11) {
matched = true;
pattern_id = 1687;
}
if(b0_72 && b1_46 && b2_45 && b3_23) {
matched = true;
pattern_id = 1688;
}
if(b0_72 && b1_41 && b2_56 && b3_8 && b4_18 && b5_70 && b6_53 && b7_67 && b8_60 && b9_62 && b10_53 && b11_40 && b12_17 && b13_29 && b14_13) {
matched = true;
pattern_id = 1689;
}
if(b0_75 && b1_35 && b2_43 && b3_18 && b4_2 && b5_51 && b6_8 && b7_45 && b8_15 && b9_15 && b10_48 && b11_1 && b12_68) {
matched = true;
pattern_id = 1690;
}
if(b0_37 && b1_1 && b2_1 && b3_30 && b4_32 && b5_28 && b6_5 && b7_19 && b8_1 && b9_13 && b10_18 && b11_1 && b12_6 && b13_11 && b14_7 && b15_4 && b16_9 && b17_12 && b18_8 && b19_11 && b20_9 && b21_1 && b22_9 && b23_8 && b24_10 && b25_11 && b26_8 && b27_9 && b28_11 && b29_7 && b30_7 && b31_7 && b32_1 && b33_5 && b34_7 && b35_1) {
matched = true;
pattern_id = 1691;
}
if(b0_37 && b1_1 && b2_34 && b3_1 && b4_1 && b5_1 && b6_32 && b7_1 && b8_17 && b9_24 && b10_1 && b11_1 && b12_1 && b13_1 && b14_6 && b15_12 && b16_1 && b17_16 && b18_14 && b19_1 && b20_16 && b21_13 && b22_1 && b23_14 && b24_9 && b25_2 && b26_16 && b27_2 && b28_15 && b29_2 && b30_5 && b31_11 && b32_10 && b33_8 && b34_11 && b35_8 && b36_3 && b37_7) {
matched = true;
pattern_id = 1692;
}
if(b0_62 && b1_15 && b2_1 && b3_1 && b4_4 && b5_45) {
matched = true;
pattern_id = 1693;
}
if(b0_62 && b1_19 && b2_62 && b3_8 && b4_15 && b5_31 && b6_19 && b7_31 && b8_7 && b9_12 && b10_17 && b11_58 && b12_20 && b13_41 && b14_40) {
matched = true;
pattern_id = 1694;
}
if(b0_62 && b1_49 && b2_61 && b3_38 && b4_23 && b5_49 && b6_30 && b7_65 && b8_34 && b9_49 && b10_32 && b11_34 && b12_38 && b13_4 && b14_53) {
matched = true;
pattern_id = 1695;
}
if(b0_62 && b1_57 && b2_44 && b3_39) {
matched = true;
pattern_id = 1696;
}
if(b0_62 && b1_11 && b2_20 && b3_43 && b4_21 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 1697;
}
if(b0_62 && b1_13 && b2_41 && b3_49 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 1698;
}
if(b0_62 && b1_13 && b2_23 && b3_15 && b4_11 && b5_11 && b6_11 && b7_10 && b8_15 && b9_9 && b10_50 && b11_6 && b12_32 && b13_6 && b14_24 && b15_41 && b16_18 && b17_53 && b18_31 && b19_35 && b20_17 && b21_36 && b22_37 && b23_9 && b24_29 && b25_21) {
matched = true;
pattern_id = 1699;
}
if(b0_12 && b1_36 && b2_42 && b3_14 && b4_14 && b5_4 && b6_34 && b7_1 && b8_5 && b9_13 && b10_25) {
matched = true;
pattern_id = 1700;
}
if(b0_12 && b1_45 && b2_70 && b3_58 && b4_68 && b5_27 && b6_8 && b7_58 && b8_68 && b9_24 && b10_66 && b11_9 && b12_40 && b13_47 && b14_22 && b15_8 && b16_18) {
matched = true;
pattern_id = 1701;
}
if(b0_12 && b1_45 && b2_8 && b3_11 && b4_22 && b5_6 && b6_36 && b7_9 && b8_3 && b9_36 && b10_33 && b11_67 && b12_47 && b13_44 && b14_3 && b15_16 && b16_3 && b17_27 && b18_33 && b19_1 && b20_58 && b21_28 && b22_24 && b23_56 && b24_6 && b25_17 && b26_8 && b27_30 && b28_4 && b29_30 && b30_18 && b31_14 && b32_1 && b33_3 && b34_42 && b35_4 && b36_16 && b37_41 && b38_43 && b39_5 && b40_36 && b41_5) {
matched = true;
pattern_id = 1702;
}
if(b0_12 && b1_47 && b2_16 && b3_21 && b4_12 && b5_3 && b6_38 && b7_2 && b8_11 && b9_30 && b10_30 && b11_30 && b12_7 && b13_22 && b14_21 && b15_5) {
matched = true;
pattern_id = 1703;
}
if(b0_12 && b1_47 && b2_16 && b3_21 && b4_12 && b5_3 && b6_38 && b7_2 && b8_11 && b9_30 && b10_30 && b11_30 && b12_7 && b13_22 && b14_21 && b15_5 && b16_45 && b17_18 && b18_29 && b19_34 && b20_35 && b21_50 && b22_48 && b23_32 && b24_33 && b25_19 && b26_36 && b27_1 && b28_27 && b29_46 && b30_26 && b31_29) {
matched = true;
pattern_id = 1704;
}
if(b0_12 && b1_47 && b2_20 && b3_7 && b4_6 && b5_73) {
matched = true;
pattern_id = 1705;
}
if(b0_12 && b1_11 && b2_3 && b3_15 && b4_11 && b5_11 && b6_11 && b7_10) {
matched = true;
pattern_id = 1706;
}
if(b0_12 && b1_58 && b2_41 && b3_30 && b4_11 && b5_6 && b6_55 && b7_9 && b8_65 && b9_49 && b10_11 && b11_40 && b12_5 && b13_22 && b14_17 && b15_31 && b16_15 && b17_9 && b18_14 && b19_6) {
matched = true;
pattern_id = 1707;
}
if(b0_12 && b1_21 && b2_6 && b3_28 && b4_45 && b5_19 && b6_5 && b7_13 && b8_47 && b9_40 && b10_45 && b11_48 && b12_4 && b13_5 && b14_35 && b15_41 && b16_5 && b17_26 && b18_35 && b19_2 && b20_34 && b21_46) {
matched = true;
pattern_id = 1708;
}
if(b0_12 && b1_21 && b2_6 && b3_28 && b4_45 && b5_19 && b6_5 && b7_13 && b8_47 && b9_40 && b10_37 && b11_46 && b12_7 && b13_5 && b14_40) {
matched = true;
pattern_id = 1709;
}
if(b0_12 && b1_21 && b2_6 && b3_28 && b4_45 && b5_19 && b6_5 && b7_46 && b8_14 && b9_27 && b10_54 && b11_46 && b12_60 && b13_39 && b14_12 && b15_3 && b16_2 && b17_36 && b18_32 && b19_17 && b20_2 && b21_53) {
matched = true;
pattern_id = 1710;
}
if(b0_12 && b1_24 && b2_14 && b3_27 && b4_12) {
matched = true;
pattern_id = 1711;
}
if(b0_12 && b1_24 && b2_14 && b3_27 && b4_12 && b5_4 && b6_11 && b7_11 && b8_13 && b9_12 && b10_9) {
matched = true;
pattern_id = 1712;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_14 && b5_10 && b6_55 && b7_7 && b8_35 && b9_14 && b10_28 && b11_37 && b12_3 && b13_38 && b14_5) {
matched = true;
pattern_id = 1713;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_2 && b5_10 && b6_39 && b7_8 && b8_41 && b9_5) {
matched = true;
pattern_id = 1714;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_6 && b5_11 && b6_21 && b7_56 && b8_41 && b9_6 && b10_49 && b11_4 && b12_7 && b13_22 && b14_5) {
matched = true;
pattern_id = 1715;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_6 && b5_11 && b6_21 && b7_56 && b8_40 && b9_14 && b10_26 && b11_55 && b12_16) {
matched = true;
pattern_id = 1716;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_6 && b5_11 && b6_21 && b7_54 && b8_5 && b9_9) {
matched = true;
pattern_id = 1717;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_11 && b5_16 && b6_7 && b7_53 && b8_2) {
matched = true;
pattern_id = 1718;
}
if(b0_12 && b1_24 && b2_24 && b3_17 && b4_6 && b5_42 && b6_46 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1719;
}
if(b0_12 && b1_24 && b2_3 && b3_11 && b4_17) {
matched = true;
pattern_id = 1720;
}
if(b0_12 && b1_24 && b2_3 && b3_11 && b4_17 && b5_4 && b6_34 && b7_31 && b8_35 && b9_27 && b10_32 && b11_46 && b12_16 && b13_5) {
matched = true;
pattern_id = 1721;
}
if(b0_12 && b1_24 && b2_3 && b3_11 && b4_17 && b5_4 && b6_11 && b7_31 && b8_61 && b9_34 && b10_17) {
matched = true;
pattern_id = 1722;
}
if(b0_12 && b1_24 && b2_3 && b3_11 && b4_17 && b5_4 && b6_39 && b7_7 && b8_5 && b9_14) {
matched = true;
pattern_id = 1723;
}
if(b0_12 && b1_50 && b2_3 && b3_15 && b4_16 && b5_12 && b6_3 && b7_7 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1724;
}
if(b0_12 && b1_13 && b2_50 && b3_24 && b4_27 && b5_51 && b6_8 && b7_9 && b8_11 && b9_6 && b10_12 && b11_13 && b12_16 && b13_21 && b14_24) {
matched = true;
pattern_id = 1725;
}
if(b0_12 && b1_13 && b2_50 && b3_24 && b4_27 && b5_51 && b6_8 && b7_9 && b8_11 && b9_6 && b10_12 && b11_13 && b12_45 && b13_55 && b14_12 && b15_32 && b16_22 && b17_25 && b18_29 && b19_17 && b20_17 && b21_42 && b22_10 && b23_35) {
matched = true;
pattern_id = 1726;
}
if(b0_12 && b1_69 && b2_48 && b3_28 && b4_36 && b5_44 && b6_5 && b7_4 && b8_55 && b9_4 && b10_3 && b11_42 && b12_6 && b13_11 && b14_7 && b15_7 && b16_46 && b17_39 && b18_60 && b19_37 && b20_28 && b21_5 && b22_27 && b23_16 && b24_37 && b25_6 && b26_9 && b27_5 && b28_6) {
matched = true;
pattern_id = 1727;
}
if(b0_12 && b1_6 && b2_3 && b3_26 && b4_14 && b5_7 && b6_18 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_8 && b13_26) {
matched = true;
pattern_id = 1728;
}
if(b0_12 && b1_56 && b2_3 && b3_17 && b4_44 && b5_8 && b6_35 && b7_69 && b8_5 && b9_40 && b10_46 && b11_65 && b12_5 && b13_47 && b14_5) {
matched = true;
pattern_id = 1729;
}
if(b0_12 && b1_56 && b2_3 && b3_6 && b4_59 && b5_52 && b6_10 && b7_10 && b8_40 && b9_5 && b10_12 && b11_34 && b12_49 && b13_37 && b14_24 && b15_15 && b16_29) {
matched = true;
pattern_id = 1730;
}
if(b0_19 && b1_2 && b2_16 && b3_19 && b4_16 && b5_10 && b6_3 && b7_8) {
matched = true;
pattern_id = 1731;
}
if(b0_19 && b1_3 && b2_3 && b3_26 && b4_18 && b5_25 && b6_18 && b7_14 && b8_2 && b9_10 && b10_7 && b11_6 && b12_3 && b13_5) {
matched = true;
pattern_id = 1732;
}
if(b0_19 && b1_21 && b2_21 && b3_28 && b4_4 && b5_1 && b6_5 && b7_35 && b8_11 && b9_11 && b10_2 && b11_1 && b12_2 && b13_26) {
matched = true;
pattern_id = 1733;
}
if(b0_19 && b1_24 && b2_20 && b3_48 && b4_15 && b5_6 && b6_8 && b7_29 && b8_5 && b9_14 && b10_12 && b11_46 && b12_7 && b13_5 && b14_27 && b15_17 && b16_26 && b17_27 && b18_31 && b19_35 && b20_28 && b21_27 && b22_45 && b23_16) {
matched = true;
pattern_id = 1734;
}
if(b0_19 && b1_24 && b2_20 && b3_48 && b4_15 && b5_6 && b6_8 && b7_29 && b8_5 && b9_14 && b10_12 && b11_46 && b12_7 && b13_5 && b14_27 && b15_17 && b16_63 && b17_29 && b18_56 && b19_21 && b20_2 && b21_10 && b22_11) {
matched = true;
pattern_id = 1735;
}
if(b0_19 && b1_6 && b2_8 && b3_8 && b4_43) {
matched = true;
pattern_id = 1736;
}
if(b0_11 && b1_2 && b2_24 && b3_11 && b4_3 && b5_12 && b6_8 && b7_8) {
matched = true;
pattern_id = 1737;
}
if(b0_11 && b1_2 && b2_3 && b3_14) {
matched = true;
pattern_id = 1738;
}
if(b0_11 && b1_58 && b2_60 && b3_29) {
matched = true;
pattern_id = 1739;
}
if(b0_11 && b1_14 && b2_43 && b3_20 && b4_2 && b5_6 && b6_11 && b7_1 && b8_37 && b9_13 && b10_2 && b11_42 && b12_15 && b13_1 && b14_27 && b15_9 && b16_15) {
matched = true;
pattern_id = 1740;
}
if(b0_11 && b1_14 && b2_25 && b3_40 && b4_60 && b5_47 && b6_10 && b7_14 && b8_12 && b9_43 && b10_11) {
matched = true;
pattern_id = 1741;
}
if(b0_11 && b1_24 && b2_14 && b3_11 && b4_3 && b5_42) {
matched = true;
pattern_id = 1742;
}
if(b0_11 && b1_24 && b2_8 && b3_15 && b4_16 && b5_73 && b6_8 && b7_29 && b8_61 && b9_18 && b10_21 && b11_1 && b12_17 && b13_64 && b14_54 && b15_18 && b16_9 && b17_39 && b18_56 && b19_49 && b20_5 && b21_9 && b22_39 && b23_51 && b24_45 && b25_11 && b26_9 && b27_38 && b28_46 && b29_48 && b30_9 && b31_11 && b32_28 && b33_17 && b34_1 && b35_7 && b36_34 && b37_36 && b38_40 && b39_1 && b40_6 && b41_3) {
matched = true;
pattern_id = 1743;
}
if(b0_11 && b1_35 && b2_41 && b3_29 && b4_12 && b5_2 && b6_7) {
matched = true;
pattern_id = 1744;
}
if(b0_11 && b1_35 && b2_41 && b3_36 && b4_36 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 1745;
}
if(b0_11 && b1_35 && b2_41 && b3_35 && b4_17 && b5_10 && b6_3 && b7_9 && b8_2 && b9_25) {
matched = true;
pattern_id = 1746;
}
if(b0_11 && b1_8 && b2_6 && b3_34 && b4_18 && b5_20 && b6_34 && b7_64 && b8_47 && b9_29) {
matched = true;
pattern_id = 1747;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_56 && b8_47 && b9_27 && b10_13 && b11_46) {
matched = true;
pattern_id = 1748;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_56 && b8_47 && b9_27 && b10_13 && b11_46 && b12_10 && b13_31 && b14_8 && b15_7 && b16_25 && b17_27 && b18_33 && b19_25 && b20_24 && b21_2 && b22_18 && b23_45 && b24_40 && b25_33 && b26_34 && b27_4 && b28_18 && b29_34 && b30_3 && b31_4 && b32_15 && b33_26 && b34_3) {
matched = true;
pattern_id = 1749;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_10 && b8_47) {
matched = true;
pattern_id = 1750;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_10 && b8_47 && b9_42 && b10_1 && b11_40 && b12_38 && b13_21 && b14_17 && b15_38 && b16_23 && b17_10 && b18_9 && b19_9 && b20_9 && b21_47 && b22_17 && b23_7 && b24_2) {
matched = true;
pattern_id = 1751;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1752;
}
if(b0_11 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_9 && b8_46 && b9_43 && b10_17 && b11_29) {
matched = true;
pattern_id = 1753;
}
if(b0_11 && b1_8 && b2_21 && b3_27 && b4_12 && b5_8 && b6_11 && b7_3 && b8_27 && b9_18 && b10_2) {
matched = true;
pattern_id = 1754;
}
if(b0_11 && b1_16 && b2_25 && b3_26 && b4_6 && b5_6) {
matched = true;
pattern_id = 1755;
}
if(b0_11 && b1_16 && b2_25 && b3_26 && b4_6 && b5_6 && b6_12 && b7_29 && b8_42 && b9_10 && b10_28 && b11_28 && b12_17 && b13_16 && b14_17) {
matched = true;
pattern_id = 1756;
}
if(b0_11 && b1_16 && b2_25 && b3_26 && b4_6 && b5_6 && b6_12 && b7_9 && b8_42 && b9_50 && b10_49 && b11_3) {
matched = true;
pattern_id = 1757;
}
if(b0_11 && b1_52 && b2_3 && b3_45 && b4_7 && b5_6 && b6_41) {
matched = true;
pattern_id = 1758;
}
if(b0_11 && b1_6 && b2_19 && b3_35 && b4_44 && b5_29 && b6_11 && b7_47 && b8_12 && b9_10 && b10_48 && b11_5 && b12_4 && b13_43 && b14_35 && b15_25 && b16_37 && b17_26 && b18_15 && b19_17) {
matched = true;
pattern_id = 1759;
}
if(b0_11 && b1_6 && b2_19 && b3_18 && b4_62 && b5_26 && b6_2 && b7_29 && b8_8 && b9_49 && b10_7 && b11_34 && b12_25 && b13_4 && b14_34 && b15_32 && b16_40 && b17_13 && b18_10 && b19_12 && b20_32 && b21_29 && b22_30 && b23_35 && b24_17 && b25_18 && b26_41 && b27_31 && b28_24 && b29_25 && b30_19) {
matched = true;
pattern_id = 1760;
}
if(b0_11 && b1_32 && b2_8 && b3_14 && b4_2 && b5_6 && b6_10 && b7_52 && b8_5 && b9_14 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_22 && b16_5 && b17_49 && b18_11 && b19_31 && b20_28 && b21_3 && b22_50 && b23_19 && b24_21 && b25_24 && b26_8 && b27_23 && b28_31 && b29_29 && b30_20 && b31_22 && b32_25) {
matched = true;
pattern_id = 1761;
}
if(b0_11 && b1_59 && b2_16 && b3_18 && b4_21 && b5_43 && b6_55 && b7_31 && b8_35 && b9_49 && b10_56 && b11_3 && b12_7 && b13_16 && b14_41 && b15_14 && b16_24 && b17_39 && b18_22 && b19_35 && b20_33 && b21_29 && b22_52 && b23_20 && b24_19 && b25_19 && b26_14 && b27_11 && b28_28 && b29_2 && b30_29 && b31_50 && b32_2 && b33_10 && b34_13 && b35_12 && b36_45 && b37_28 && b38_17 && b39_47 && b40_15 && b41_43 && b42_31 && b43_4 && b44_19 && b45_41 && b46_43 && b47_11 && b48_32 && b49_29 && b50_16 && b51_31 && b52_6 && b53_14 && b54_33 && b55_33 && b56_31 && b57_3 && b58_34 && b59_18 && b60_30 && b61_24 && b62_32 && b63_10) {
matched = true;
pattern_id = 1762;
}
if(b0_11 && b1_55 && b2_42 && b3_11 && b4_17 && b5_51 && b6_3 && b7_47) {
matched = true;
pattern_id = 1763;
}
if(b0_11 && b1_1 && b2_10 && b3_12 && b4_1 && b5_9 && b6_9 && b7_3) {
matched = true;
pattern_id = 1764;
}
if(b0_21 && b1_17 && b2_10 && b3_17 && b4_15 && b5_15) {
matched = true;
pattern_id = 1765;
}
if(b0_21 && b1_2 && b2_41 && b3_6 && b4_2 && b5_45) {
matched = true;
pattern_id = 1766;
}
if(b0_21 && b1_2 && b2_3 && b3_26 && b4_19 && b5_6 && b6_11 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1767;
}
if(b0_21 && b1_2 && b2_3 && b3_26 && b4_7 && b5_10 && b6_24 && b7_9 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1768;
}
if(b0_21 && b1_2 && b2_3 && b3_26 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1769;
}
if(b0_21 && b1_47 && b2_59 && b3_21 && b4_12 && b5_42 && b6_8 && b7_11 && b8_34 && b9_9 && b10_46 && b11_37 && b12_7 && b13_6 && b14_21 && b15_31 && b16_44 && b17_47 && b18_15 && b19_40 && b20_30 && b21_49 && b22_28 && b23_34 && b24_27 && b25_28 && b26_24) {
matched = true;
pattern_id = 1770;
}
if(b0_21 && b1_47 && b2_43 && b3_35 && b4_6 && b5_11 && b6_21 && b7_54 && b8_5 && b9_9) {
matched = true;
pattern_id = 1771;
}
if(b0_21 && b1_47 && b2_43 && b3_35 && b4_6 && b5_11 && b6_21 && b7_54 && b8_5 && b9_9 && b10_5 && b11_46 && b12_18 && b13_5) {
matched = true;
pattern_id = 1772;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_54 && b17_29 && b18_41 && b19_22 && b20_41 && b21_31 && b22_50 && b23_25 && b24_22 && b25_44 && b26_3 && b27_33 && b28_37 && b29_26 && b30_26 && b31_2 && b32_36 && b33_32 && b34_24) {
matched = true;
pattern_id = 1773;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_54 && b17_29 && b18_41 && b19_22 && b20_41 && b21_31 && b22_27 && b23_16 && b24_24 && b25_30 && b26_29 && b27_37 && b28_30 && b29_3 && b30_27 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1774;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_54 && b17_29 && b18_41 && b19_22 && b20_41 && b21_31 && b22_28 && b23_31 && b24_22 && b25_24) {
matched = true;
pattern_id = 1775;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_29 && b17_49 && b18_20 && b19_46 && b20_44 && b21_15 && b22_31 && b23_38 && b24_17 && b25_27 && b26_46 && b27_3 && b28_4 && b29_41 && b30_3 && b31_20 && b32_25) {
matched = true;
pattern_id = 1776;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_29 && b17_49 && b18_20 && b19_46 && b20_27 && b21_2 && b22_22 && b23_28 && b24_22 && b25_4 && b26_19 && b27_18 && b28_24 && b29_25 && b30_13 && b31_38 && b32_36) {
matched = true;
pattern_id = 1777;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_29 && b17_49 && b18_20 && b19_46 && b20_37 && b21_21 && b22_31 && b23_26) {
matched = true;
pattern_id = 1778;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_3 && b17_29 && b18_29 && b19_28 && b20_33 && b21_29 && b22_43 && b23_24 && b24_43 && b25_21 && b26_27 && b27_1 && b28_30 && b29_43 && b30_17 && b31_8 && b32_37 && b33_19 && b34_22 && b35_20 && b36_15 && b37_21 && b38_28 && b39_11) {
matched = true;
pattern_id = 1779;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_16 && b14_28 && b15_33 && b16_16 && b17_36 && b18_37 && b19_31 && b20_28 && b21_18 && b22_25 && b23_18 && b24_37 && b25_1 && b26_32 && b27_27 && b28_26 && b29_34 && b30_27 && b31_24) {
matched = true;
pattern_id = 1780;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_16 && b14_28 && b15_33 && b16_16 && b17_36 && b18_37 && b19_31 && b20_28 && b21_18 && b22_19 && b23_16 && b24_29 && b25_46 && b26_45 && b27_36 && b28_24 && b29_29) {
matched = true;
pattern_id = 1781;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_32 && b8_35 && b9_49 && b10_25 && b11_37 && b12_5 && b13_4 && b14_48 && b15_18 && b16_24 && b17_39 && b18_56 && b19_44 && b20_32 && b21_27 && b22_50 && b23_51 && b24_3 && b25_27 && b26_25 && b27_37 && b28_28 && b29_30 && b30_15) {
matched = true;
pattern_id = 1782;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_32 && b8_35 && b9_49 && b10_25 && b11_37 && b12_5 && b13_4 && b14_48 && b15_18 && b16_24 && b17_39 && b18_56 && b19_44 && b20_17 && b21_29 && b22_39 && b23_28 && b24_4 && b25_34 && b26_43) {
matched = true;
pattern_id = 1783;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_18 && b14_21 && b15_31 && b16_44 && b17_53 && b18_56 && b19_32 && b20_24 && b21_50 && b22_45 && b23_46 && b24_42 && b25_24 && b26_25 && b27_24 && b28_18 && b29_16 && b30_13 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1784;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_25 && b17_27 && b18_36 && b19_28 && b20_33 && b21_2 && b22_43 && b23_44 && b24_1 && b25_36 && b26_41 && b27_21 && b28_37 && b29_25 && b30_17 && b31_39 && b32_43 && b33_24 && b34_22 && b35_37 && b36_26 && b37_31) {
matched = true;
pattern_id = 1785;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_25 && b17_27 && b18_36 && b19_28 && b20_33 && b21_2 && b22_22 && b23_49 && b24_32 && b25_36 && b26_46 && b27_24 && b28_26 && b29_41 && b30_32 && b31_38 && b32_40) {
matched = true;
pattern_id = 1786;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_23 && b17_29 && b18_36 && b19_9 && b20_28 && b21_29 && b22_43 && b23_46 && b24_3 && b25_3 && b26_3 && b27_31 && b28_35 && b29_25 && b30_13 && b31_38 && b32_36) {
matched = true;
pattern_id = 1787;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_18 && b17_18 && b18_15 && b19_28 && b20_34 && b21_29 && b22_18 && b23_49 && b24_20 && b25_36 && b26_45 && b27_39 && b28_29 && b29_16) {
matched = true;
pattern_id = 1788;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_30 && b17_13 && b18_53 && b19_9 && b20_25 && b21_36 && b22_43 && b23_28 && b24_17 && b25_46 && b26_28 && b27_31 && b28_24 && b29_44 && b30_17 && b31_23) {
matched = true;
pattern_id = 1789;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_19 && b26_37 && b27_22 && b28_34) {
matched = true;
pattern_id = 1790;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_24 && b26_29 && b27_19 && b28_21) {
matched = true;
pattern_id = 1791;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_4 && b26_30 && b27_28 && b28_24 && b29_19) {
matched = true;
pattern_id = 1792;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_4 && b26_41 && b27_23 && b28_13 && b29_30 && b30_18) {
matched = true;
pattern_id = 1793;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_4 && b26_1 && b27_22 && b28_34 && b29_26 && b30_26 && b31_2 && b32_40 && b33_27) {
matched = true;
pattern_id = 1794;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_27 && b26_29 && b27_30) {
matched = true;
pattern_id = 1795;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_44 && b26_29 && b27_33 && b28_28 && b29_45 && b30_27 && b31_23 && b32_15) {
matched = true;
pattern_id = 1796;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_2 && b17_44 && b18_9 && b19_9 && b20_52 && b21_42 && b22_34 && b23_19 && b24_17 && b25_27 && b26_35 && b27_19 && b28_41 && b29_43 && b30_15 && b31_29 && b32_20 && b33_34) {
matched = true;
pattern_id = 1797;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_40 && b17_49 && b18_10 && b19_52 && b20_35 && b21_29 && b22_43 && b23_46 && b24_3 && b25_3 && b26_3 && b27_31 && b28_35 && b29_25 && b30_13 && b31_38 && b32_36) {
matched = true;
pattern_id = 1798;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_40 && b17_34 && b18_20 && b19_35 && b20_28 && b21_29 && b22_43 && b23_46 && b24_3 && b25_3 && b26_3 && b27_31 && b28_35 && b29_25 && b30_13 && b31_38 && b32_36) {
matched = true;
pattern_id = 1799;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_33 && b19_35 && b20_30 && b21_36 && b22_19 && b23_46 && b24_42 && b25_18 && b26_34 && b27_36 && b28_25 && b29_41 && b30_41 && b31_2 && b32_20 && b33_16 && b34_16 && b35_22) {
matched = true;
pattern_id = 1800;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_33 && b19_35 && b20_30 && b21_36 && b22_19 && b23_46 && b24_42 && b25_27 && b26_25 && b27_21 && b28_31 && b29_27 && b30_37 && b31_14 && b32_34 && b33_25) {
matched = true;
pattern_id = 1801;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_33 && b19_51 && b20_27 && b21_29 && b22_48 && b23_49 && b24_27 && b25_27 && b26_3 && b27_21 && b28_24 && b29_46 && b30_27 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1802;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47) {
matched = true;
pattern_id = 1803;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_3 && b28_4 && b29_41 && b30_18) {
matched = true;
pattern_id = 1804;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_17 && b28_24 && b29_25 && b30_19) {
matched = true;
pattern_id = 1805;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_37 && b28_28 && b29_45 && b30_27 && b31_23) {
matched = true;
pattern_id = 1806;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_37 && b28_35 && b29_21 && b30_42 && b31_14 && b32_40) {
matched = true;
pattern_id = 1807;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_37 && b28_42 && b29_41 && b30_18 && b31_40 && b32_29 && b33_17 && b34_2 && b35_38) {
matched = true;
pattern_id = 1808;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_33 && b28_24 && b29_47) {
matched = true;
pattern_id = 1809;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_43 && b28_24 && b29_19 && b30_12 && b31_19 && b32_28 && b33_20 && b34_14) {
matched = true;
pattern_id = 1810;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_29 && b19_22 && b20_28 && b21_29 && b22_43 && b23_35 && b24_1 && b25_1 && b26_3 && b27_33 && b28_18 && b29_25 && b30_39) {
matched = true;
pattern_id = 1811;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_29 && b19_22 && b20_28 && b21_29 && b22_43 && b23_35 && b24_1 && b25_1 && b26_3 && b27_33 && b28_18 && b29_25 && b30_39 && b31_39 && b32_9 && b33_16 && b34_31 && b35_33) {
matched = true;
pattern_id = 1812;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_29 && b19_12 && b20_24 && b21_42 && b22_22 && b23_3 && b24_17 && b25_30 && b26_46 && b27_21 && b28_34 && b29_34 && b30_24 && b31_2 && b32_38 && b33_17 && b34_31 && b35_2 && b36_26 && b37_20) {
matched = true;
pattern_id = 1813;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_46 && b13_5 && b14_41 && b15_35 && b16_22 && b17_53 && b18_56 && b19_32 && b20_24 && b21_50 && b22_45 && b23_46 && b24_42 && b25_24 && b26_25 && b27_24 && b28_18 && b29_16 && b30_13 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1814;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_43 && b14_28 && b15_22 && b16_29 && b17_26 && b18_44 && b19_41 && b20_28 && b21_14 && b22_3 && b23_19 && b24_24 && b25_30 && b26_35 && b27_3 && b28_1) {
matched = true;
pattern_id = 1815;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_27 && b24_17 && b25_23 && b26_41 && b27_23 && b28_23 && b29_43 && b30_41 && b31_23 && b32_24 && b33_37 && b34_17) {
matched = true;
pattern_id = 1816;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_26 && b24_3 && b25_23 && b26_25 && b27_19 && b28_21 && b29_43 && b30_18 && b31_14 && b32_9 && b33_11 && b34_21 && b35_39 && b36_15 && b37_14 && b38_32 && b39_19) {
matched = true;
pattern_id = 1817;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_9 && b24_40 && b25_1 && b26_25 && b27_30 && b28_37 && b29_19 && b30_19 && b31_27 && b32_9 && b33_16 && b34_31 && b35_33 && b36_12) {
matched = true;
pattern_id = 1818;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_35 && b24_1 && b25_1 && b26_3 && b27_33 && b28_18 && b29_25 && b30_39 && b31_39 && b32_38 && b33_20 && b34_16 && b35_39 && b36_13) {
matched = true;
pattern_id = 1819;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_46 && b24_3 && b25_18 && b26_39 && b27_33 && b28_31 && b29_37 && b30_24) {
matched = true;
pattern_id = 1820;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_46 && b24_3 && b25_18 && b26_3 && b27_41 && b28_40 && b29_30 && b30_12 && b31_32) {
matched = true;
pattern_id = 1821;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_46 && b24_3 && b25_18 && b26_27 && b27_18 && b28_30 && b29_30 && b30_15) {
matched = true;
pattern_id = 1822;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_24 && b24_4 && b25_30 && b26_25 && b27_27 && b28_25 && b29_19 && b30_13 && b31_38 && b32_40 && b33_16 && b34_31 && b35_40) {
matched = true;
pattern_id = 1823;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_6 && b24_21 && b25_1 && b26_47 && b27_39 && b28_21 && b29_43 && b30_18 && b31_14 && b32_9 && b33_11 && b34_21 && b35_39 && b36_15 && b37_14 && b38_32 && b39_19) {
matched = true;
pattern_id = 1824;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_6 && b24_27 && b25_24 && b26_29 && b27_19 && b28_21 && b29_43 && b30_18 && b31_14 && b32_9 && b33_11 && b34_21 && b35_39 && b36_15 && b37_14 && b38_32 && b39_19) {
matched = true;
pattern_id = 1825;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_5 && b16_5 && b17_18 && b18_4 && b19_46 && b20_3 && b21_15 && b22_18 && b23_49 && b24_40 && b25_22 && b26_45 && b27_39 && b28_21 && b29_35) {
matched = true;
pattern_id = 1826;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_25 && b20_24 && b21_10 && b22_3 && b23_18 && b24_1 && b25_46 && b26_34 && b27_1 && b28_25 && b29_46 && b30_18 && b31_38 && b32_41 && b33_38) {
matched = true;
pattern_id = 1827;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_25 && b20_24 && b21_10 && b22_3 && b23_18 && b24_1 && b25_46 && b26_34 && b27_1 && b28_25 && b29_34 && b30_42 && b31_41 && b32_25 && b33_18 && b34_31) {
matched = true;
pattern_id = 1828;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_25 && b20_46 && b21_27 && b22_19 && b23_36 && b24_42 && b25_27 && b26_25 && b27_21 && b28_39 && b29_19 && b30_17 && b31_37 && b32_31) {
matched = true;
pattern_id = 1829;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_25 && b20_46 && b21_27 && b22_19 && b23_36 && b24_42 && b25_27 && b26_25 && b27_21 && b28_31 && b29_27 && b30_37 && b31_14 && b32_34 && b33_25) {
matched = true;
pattern_id = 1830;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_41 && b20_41 && b21_14 && b22_40 && b23_24 && b24_31 && b25_36 && b26_19 && b27_27 && b28_34 && b29_30 && b30_24 && b31_20 && b32_40 && b33_11 && b34_34 && b35_23) {
matched = true;
pattern_id = 1831;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_41 && b20_41 && b21_14 && b22_40 && b23_24 && b24_31 && b25_36 && b26_19 && b27_27 && b28_34 && b29_30 && b30_24 && b31_38 && b32_45 && b33_40 && b34_24 && b35_36 && b36_15) {
matched = true;
pattern_id = 1832;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_5 && b14_47 && b15_35 && b16_22 && b17_29 && b18_44 && b19_40 && b20_3 && b21_15 && b22_38 && b23_9 && b24_21 && b25_46 && b26_39 && b27_33 && b28_31 && b29_37 && b30_24) {
matched = true;
pattern_id = 1833;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_5 && b14_47 && b15_35 && b16_22 && b17_29 && b18_44 && b19_2 && b20_17 && b21_27 && b22_45 && b23_46 && b24_4 && b25_30 && b26_43 && b27_27 && b28_39 && b29_19 && b30_17 && b31_37 && b32_31) {
matched = true;
pattern_id = 1834;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_5 && b14_47 && b15_35 && b16_22 && b17_29 && b18_44 && b19_41 && b20_27 && b21_36 && b22_19 && b23_49 && b24_27 && b25_27 && b26_35 && b27_36 && b28_34 && b29_3 && b30_36 && b31_42) {
matched = true;
pattern_id = 1835;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_36 && b14_48 && b15_18 && b16_29 && b17_39 && b18_4 && b19_21 && b20_17 && b21_29 && b22_18 && b23_49 && b24_1 && b25_33 && b26_24 && b27_3 && b28_24 && b29_25 && b30_35 && b31_2 && b32_2 && b33_19 && b34_35 && b35_22) {
matched = true;
pattern_id = 1836;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_4 && b18_15 && b19_32 && b20_35 && b21_19 && b22_20 && b23_49 && b24_37 && b25_27 && b26_3 && b27_39 && b28_25) {
matched = true;
pattern_id = 1837;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_4 && b18_15 && b19_32 && b20_35 && b21_19 && b22_20 && b23_49 && b24_37 && b25_27 && b26_3 && b27_39 && b28_25 && b29_43 && b30_40 && b31_23 && b32_24 && b33_19 && b34_38 && b35_26 && b36_9 && b37_28 && b38_31 && b39_13 && b40_19) {
matched = true;
pattern_id = 1838;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_4 && b18_15 && b19_32 && b20_35 && b21_19 && b22_20 && b23_24 && b24_42 && b25_34 && b26_34 && b27_36 && b28_29 && b29_43 && b30_40 && b31_22 && b32_28 && b33_39 && b34_16 && b35_29) {
matched = true;
pattern_id = 1839;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_47 && b18_4 && b19_32 && b20_2 && b21_36 && b22_19 && b23_49 && b24_1 && b25_33 && b26_27 && b27_36 && b28_26 && b29_37 && b30_36 && b31_29 && b32_24 && b33_35) {
matched = true;
pattern_id = 1840;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_33 && b18_22 && b19_31 && b20_35 && b21_42 && b22_19 && b23_26 && b24_42 && b25_19 && b26_3 && b27_31 && b28_35 && b29_21 && b30_3) {
matched = true;
pattern_id = 1841;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_25 && b18_32 && b19_41 && b20_28 && b21_29 && b22_34 && b23_49 && b24_1 && b25_33 && b26_24 && b27_40 && b28_34 && b29_34 && b30_20 && b31_27) {
matched = true;
pattern_id = 1842;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_25 && b18_32 && b19_41 && b20_28 && b21_29 && b22_34 && b23_49 && b24_1 && b25_33 && b26_24 && b27_36 && b28_13 && b29_39 && b30_19 && b31_40 && b32_20) {
matched = true;
pattern_id = 1843;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_25 && b18_34 && b19_22 && b20_2 && b21_48 && b22_43 && b23_46 && b24_3 && b25_18 && b26_39 && b27_33 && b28_31 && b29_37 && b30_24) {
matched = true;
pattern_id = 1844;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_25 && b18_34 && b19_22 && b20_2 && b21_48 && b22_43 && b23_46 && b24_3 && b25_18 && b26_3 && b27_41 && b28_40 && b29_30 && b30_12 && b31_32) {
matched = true;
pattern_id = 1845;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_27 && b18_38 && b19_19 && b20_2 && b21_35 && b22_3 && b23_49 && b24_41 && b25_27 && b26_3 && b27_23 && b28_37 && b29_22 && b30_16 && b31_2 && b32_39 && b33_11 && b34_2) {
matched = true;
pattern_id = 1846;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44) {
matched = true;
pattern_id = 1847;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_30 && b27_28 && b28_24 && b29_19) {
matched = true;
pattern_id = 1848;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_36 && b27_22 && b28_30 && b29_30) {
matched = true;
pattern_id = 1849;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_32 && b27_3 && b28_4 && b29_41 && b30_18) {
matched = true;
pattern_id = 1850;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_32 && b27_39 && b28_29 && b29_27 && b30_19 && b31_23) {
matched = true;
pattern_id = 1851;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_32 && b27_43 && b28_24 && b29_19 && b30_12 && b31_19 && b32_28 && b33_20 && b34_14) {
matched = true;
pattern_id = 1852;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_34 && b27_22 && b28_43) {
matched = true;
pattern_id = 1853;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_1 && b27_22 && b28_34 && b29_26 && b30_26 && b31_2 && b32_40 && b33_27) {
matched = true;
pattern_id = 1854;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_36 && b18_10 && b19_34 && b20_2 && b21_31 && b22_40 && b23_46 && b24_4 && b25_36 && b26_34 && b27_18 && b28_30 && b29_28) {
matched = true;
pattern_id = 1855;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_36 && b18_10 && b19_34 && b20_2 && b21_31 && b22_40 && b23_46 && b24_4 && b25_36 && b26_34 && b27_18 && b28_30 && b29_28 && b30_35 && b31_28 && b32_27 && b33_25 && b34_24) {
matched = true;
pattern_id = 1856;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_36 && b18_11 && b19_35 && b20_34 && b21_10 && b22_11 && b23_31 && b24_32 && b25_46 && b26_34 && b27_1 && b28_25 && b29_46 && b30_18 && b31_38 && b32_41 && b33_38) {
matched = true;
pattern_id = 1857;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_36 && b18_11 && b19_35 && b20_34 && b21_10 && b22_11 && b23_31 && b24_32 && b25_46 && b26_34 && b27_1 && b28_25 && b29_34 && b30_42 && b31_41 && b32_25 && b33_18 && b34_31) {
matched = true;
pattern_id = 1858;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_35 && b18_11 && b19_22 && b20_50 && b21_30 && b22_19 && b23_49 && b24_1 && b25_33 && b26_27 && b27_36 && b28_26 && b29_37 && b30_36 && b31_29 && b32_24 && b33_35) {
matched = true;
pattern_id = 1859;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_35 && b18_19 && b19_42 && b20_24 && b21_36 && b22_19 && b23_49 && b24_1 && b25_33 && b26_27 && b27_36 && b28_26 && b29_37 && b30_36 && b31_29 && b32_24 && b33_35) {
matched = true;
pattern_id = 1860;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_5 && b13_50 && b14_17 && b15_22 && b16_40 && b17_37 && b18_4 && b19_46 && b20_32 && b21_20 && b22_28) {
matched = true;
pattern_id = 1861;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_19 && b22_42 && b23_19 && b24_3 && b25_48 && b26_46 && b27_4 && b28_35 && b29_24 && b30_24 && b31_38 && b32_40 && b33_25) {
matched = true;
pattern_id = 1862;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_5 && b22_19 && b23_35 && b24_8 && b25_1 && b26_30 && b27_22 && b28_30 && b29_3 && b30_17 && b31_21 && b32_37 && b33_38 && b34_22 && b35_36 && b36_27 && b37_28 && b38_33 && b39_12) {
matched = true;
pattern_id = 1863;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_5 && b22_19 && b23_35 && b24_8 && b25_1 && b26_30 && b27_22 && b28_30 && b29_3 && b30_17 && b31_21 && b32_37 && b33_22 && b34_34 && b35_23 && b36_13 && b37_16 && b38_28 && b39_10) {
matched = true;
pattern_id = 1864;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_5 && b22_19 && b23_35 && b24_8 && b25_1 && b26_30 && b27_22 && b28_30 && b29_3 && b30_17 && b31_21 && b32_37 && b33_25 && b34_2 && b35_2 && b36_29 && b37_32 && b38_1 && b39_15) {
matched = true;
pattern_id = 1865;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_10 && b22_20 && b23_32 && b24_27 && b25_3 && b26_37 && b27_36 && b28_30 && b29_43 && b30_15 && b31_37 && b32_31 && b33_38 && b34_16 && b35_29 && b36_15) {
matched = true;
pattern_id = 1866;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_7 && b13_43 && b14_50 && b15_3 && b16_37 && b17_4 && b18_15 && b19_32 && b20_35 && b21_19 && b22_20 && b23_49 && b24_37 && b25_27 && b26_3 && b27_39 && b28_25) {
matched = true;
pattern_id = 1867;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_26 && b13_18 && b14_5 && b15_30 && b16_8 && b17_29 && b18_9 && b19_9 && b20_52 && b21_34 && b22_28 && b23_32 && b24_40 && b25_36 && b26_34 && b27_27 && b28_19 && b29_30 && b30_40 && b31_29 && b32_36 && b33_16 && b34_31 && b35_2 && b36_26 && b37_20) {
matched = true;
pattern_id = 1868;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_32 && b13_32 && b14_52 && b15_15 && b16_24 && b17_36 && b18_37 && b19_46 && b20_44 && b21_15 && b22_31 && b23_38 && b24_17 && b25_27 && b26_46 && b27_17 && b28_21 && b29_22 && b30_13 && b31_21 && b32_27 && b33_25 && b34_35 && b35_27 && b36_1) {
matched = true;
pattern_id = 1869;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_32 && b13_32 && b14_35 && b15_40 && b16_29 && b17_53 && b18_56 && b19_32 && b20_24 && b21_50 && b22_45 && b23_46 && b24_42 && b25_24 && b26_25 && b27_24 && b28_18 && b29_16 && b30_13 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1870;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_32 && b13_32 && b14_35 && b15_40 && b16_29 && b17_53 && b18_33 && b19_35 && b20_30 && b21_36 && b22_19 && b23_46 && b24_42 && b25_23 && b26_3 && b27_40) {
matched = true;
pattern_id = 1871;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_32 && b13_32 && b14_35 && b15_40 && b16_29 && b17_53 && b18_29 && b19_34 && b20_24 && b21_36 && b22_27 && b23_24 && b24_32 && b25_1 && b26_30 && b27_4) {
matched = true;
pattern_id = 1872;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_47 && b15_31 && b16_29 && b17_36 && b18_37 && b19_46 && b20_33 && b21_50 && b22_27 && b23_18 && b24_34 && b25_46 && b26_34 && b27_1 && b28_25 && b29_46 && b30_18 && b31_38 && b32_41 && b33_38) {
matched = true;
pattern_id = 1873;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_47 && b15_31 && b16_29 && b17_36 && b18_37 && b19_46 && b20_30 && b21_2 && b22_31 && b23_35 && b24_24 && b25_28 && b26_3 && b27_19 && b28_37 && b29_19 && b30_19 && b31_27 && b32_38 && b33_20 && b34_16 && b35_39 && b36_13) {
matched = true;
pattern_id = 1874;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_41 && b15_35 && b16_2 && b17_37 && b18_4 && b19_21 && b20_52 && b21_19 && b22_42 && b23_19 && b24_3 && b25_48 && b26_46 && b27_33 && b28_21 && b29_24 && b30_41 && b31_23 && b32_24 && b33_37 && b34_17) {
matched = true;
pattern_id = 1875;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_41 && b15_35 && b16_2 && b17_37 && b18_4 && b19_21 && b20_52 && b21_10 && b22_20 && b23_32 && b24_27 && b25_3 && b26_37 && b27_36 && b28_30 && b29_43 && b30_18 && b31_14 && b32_31 && b33_32 && b34_2 && b35_27 && b36_28 && b37_23) {
matched = true;
pattern_id = 1876;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_41 && b15_35 && b16_2 && b17_37 && b18_4 && b19_21 && b20_52 && b21_10 && b22_3 && b23_32 && b24_32 && b25_1 && b26_27 && b27_19 && b28_18 && b29_26 && b30_15) {
matched = true;
pattern_id = 1877;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_18 && b15_30 && b16_25 && b17_10 && b18_9 && b19_9 && b20_52 && b21_19 && b22_31 && b23_24 && b24_32 && b25_33 && b26_34 && b27_17 && b28_21 && b29_22) {
matched = true;
pattern_id = 1878;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_12 && b15_30 && b16_58 && b17_29 && b18_44 && b19_25 && b20_24 && b21_10 && b22_3 && b23_18 && b24_1 && b25_46 && b26_36 && b27_22 && b28_30 && b29_41 && b30_42 && b31_2 && b32_9 && b33_34 && b34_23) {
matched = true;
pattern_id = 1879;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_28 && b15_33 && b16_39 && b17_29 && b18_44 && b19_41 && b20_48 && b21_14 && b22_18 && b23_31 && b24_34 && b25_46 && b26_30 && b27_36 && b28_26 && b29_37 && b30_21 && b31_21 && b32_37 && b33_32 && b34_2 && b35_27 && b36_28 && b37_23) {
matched = true;
pattern_id = 1880;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_36 && b15_22 && b16_5 && b17_37 && b18_44 && b19_22 && b20_33 && b21_42 && b22_45 && b23_46 && b24_32 && b25_46 && b26_30 && b27_28 && b28_21 && b29_26 && b30_38) {
matched = true;
pattern_id = 1881;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_5 && b15_50 && b16_39 && b17_29 && b18_44 && b19_25 && b20_24 && b21_10 && b22_3 && b23_18 && b24_1 && b25_46 && b26_29 && b27_3 && b28_30 && b29_3 && b30_32 && b31_29 && b32_20 && b33_36) {
matched = true;
pattern_id = 1882;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_5 && b14_28 && b15_18 && b16_37 && b17_10 && b18_11 && b19_42 && b20_52 && b21_35 && b22_45 && b23_9 && b24_27 && b25_22 && b26_34 && b27_1 && b28_37 && b29_34 && b30_16 && b31_24 && b32_37 && b33_39 && b34_22 && b35_31 && b36_28 && b37_21 && b38_22) {
matched = true;
pattern_id = 1883;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_5 && b14_28 && b15_18 && b16_37 && b17_27 && b18_36 && b19_42 && b20_52 && b21_50 && b22_31 && b23_25 && b24_43 && b25_33 && b26_27) {
matched = true;
pattern_id = 1884;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_5 && b14_25 && b15_48 && b16_25 && b17_27 && b18_36 && b19_28 && b20_33 && b21_2 && b22_22) {
matched = true;
pattern_id = 1885;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_5 && b14_25 && b15_48 && b16_8 && b17_27 && b18_31 && b19_35 && b20_37 && b21_31 && b22_50 && b23_25 && b24_22 && b25_44 && b26_3 && b27_33) {
matched = true;
pattern_id = 1886;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_6 && b14_17 && b15_22 && b16_24 && b17_39 && b18_57 && b19_46 && b20_41 && b21_29 && b22_48 && b23_49 && b24_28 && b25_22 && b26_27 && b27_19 && b28_21 && b29_19 && b30_15) {
matched = true;
pattern_id = 1887;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_32 && b14_5 && b15_5 && b16_29 && b17_49 && b18_20 && b19_46 && b20_33 && b21_14 && b22_22 && b23_28 && b24_3 && b25_27 && b26_46 && b27_22 && b28_28 && b29_25 && b30_13 && b31_31 && b32_27 && b33_25 && b34_39) {
matched = true;
pattern_id = 1888;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_60 && b14_24 && b15_25 && b16_25 && b17_21 && b18_44 && b19_25 && b20_46 && b21_27 && b22_19 && b23_36 && b24_42 && b25_35 && b26_29 && b27_4 && b28_30 && b29_30 && b30_18) {
matched = true;
pattern_id = 1889;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_60 && b14_24 && b15_25 && b16_25 && b17_21 && b18_44 && b19_41 && b20_41 && b21_14 && b22_40 && b23_24 && b24_31 && b25_36 && b26_19 && b27_27 && b28_29 && b29_41 && b30_15 && b31_32 && b32_25 && b33_20) {
matched = true;
pattern_id = 1890;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_37 && b13_22 && b14_35 && b15_3 && b16_18 && b17_44 && b18_29 && b19_34 && b20_2 && b21_5 && b22_43 && b23_9 && b24_40 && b25_1 && b26_25 && b27_30 && b28_37 && b29_19 && b30_19 && b31_27 && b32_38 && b33_20 && b34_16 && b35_39 && b36_13) {
matched = true;
pattern_id = 1891;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_37 && b13_22 && b14_35 && b15_3 && b16_18 && b17_44 && b18_29 && b19_34 && b20_2 && b21_5 && b22_43 && b23_24 && b24_21 && b25_22 && b26_24 && b27_4 && b28_4 && b29_34 && b30_36 && b31_39 && b32_40 && b33_34 && b34_17 && b35_35 && b36_22 && b37_16 && b38_30 && b39_14) {
matched = true;
pattern_id = 1892;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_41 && b13_43 && b14_18 && b15_35 && b16_23 && b17_10 && b18_9 && b19_9 && b20_52 && b21_34 && b22_28 && b23_32 && b24_40 && b25_36 && b26_34 && b27_27 && b28_19 && b29_30 && b30_40 && b31_29 && b32_36 && b33_16 && b34_31 && b35_2 && b36_26 && b37_20) {
matched = true;
pattern_id = 1893;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_41 && b13_43 && b14_18 && b15_35 && b16_23 && b17_10 && b18_9 && b19_9 && b20_52 && b21_34 && b22_45 && b23_46 && b24_42 && b25_23 && b26_3 && b27_3 && b28_24 && b29_40 && b30_35 && b31_8 && b32_42 && b33_17 && b34_40 && b35_27 && b36_22) {
matched = true;
pattern_id = 1894;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_38 && b18_22 && b19_9 && b20_31 && b21_27 && b22_22 && b23_28 && b24_3 && b25_27 && b26_46 && b27_39 && b28_1 && b29_30 && b30_18 && b31_39 && b32_40 && b33_34 && b34_17 && b35_35 && b36_22 && b37_16 && b38_30 && b39_14) {
matched = true;
pattern_id = 1895;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_38 && b18_23 && b19_12 && b20_17 && b21_29 && b22_41 && b23_19 && b24_24 && b25_30 && b26_25 && b27_33 && b28_37 && b29_37 && b30_15 && b31_14 && b32_40 && b33_33 && b34_2 && b35_33 && b36_13 && b37_32 && b38_28 && b39_13 && b40_28 && b41_18) {
matched = true;
pattern_id = 1896;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_17 && b13_32 && b14_25 && b15_44 && b16_32 && b17_18 && b18_4 && b19_51 && b20_3 && b21_52 && b22_19 && b23_49 && b24_24 && b25_42 && b26_34 && b27_33 && b28_31 && b29_46 && b30_27 && b31_32 && b32_25 && b33_33 && b34_2 && b35_33 && b36_13 && b37_15 && b38_19 && b39_10) {
matched = true;
pattern_id = 1897;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_38 && b13_22 && b14_5 && b15_25 && b16_5 && b17_49 && b18_9 && b19_22 && b20_24 && b21_36 && b22_19 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_35 && b30_13 && b31_32 && b32_25 && b33_33 && b34_35 && b35_22 && b36_12 && b37_30 && b38_19 && b39_19 && b40_16 && b41_15 && b42_11 && b43_17 && b44_24 && b45_16 && b46_17) {
matched = true;
pattern_id = 1898;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_38 && b13_22 && b14_5 && b15_25 && b16_5 && b17_49 && b18_9 && b19_22 && b20_24 && b21_36 && b22_19 && b23_34 && b24_4 && b25_4 && b26_27 && b27_19 && b28_24 && b29_16 && b30_36 && b31_29 && b32_28 && b33_25 && b34_24 && b35_34 && b36_26 && b37_5 && b38_17 && b39_22 && b40_20 && b41_16 && b42_1) {
matched = true;
pattern_id = 1899;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_38 && b13_22 && b14_5 && b15_25 && b16_5 && b17_49 && b18_9 && b19_22 && b20_24 && b21_36 && b22_19 && b23_34 && b24_4 && b25_4 && b26_27 && b27_19 && b28_24 && b29_16 && b30_36 && b31_29 && b32_28 && b33_25 && b34_24 && b35_34 && b36_26 && b37_20 && b38_34 && b39_24 && b40_29 && b41_25) {
matched = true;
pattern_id = 1900;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_20 && b13_53 && b14_25 && b15_36 && b16_25 && b17_21 && b18_4 && b19_40 && b20_20 && b21_31 && b22_18 && b23_26 && b24_8 && b25_46 && b26_19 && b27_1 && b28_44 && b29_25) {
matched = true;
pattern_id = 1901;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_20 && b13_53 && b14_25 && b15_36 && b16_23 && b17_18 && b18_15 && b19_2 && b20_52 && b21_10 && b22_27 && b23_28 && b24_3 && b25_46 && b26_35 && b27_37 && b28_1 && b29_25 && b30_27 && b31_21 && b32_20 && b33_16 && b34_22 && b35_18 && b36_19 && b37_16 && b38_16) {
matched = true;
pattern_id = 1902;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_20 && b13_53 && b14_25 && b15_36 && b16_24 && b17_49 && b18_29 && b19_34 && b20_24 && b21_2 && b22_3 && b23_19 && b24_22 && b25_30 && b26_25 && b27_27 && b28_31 && b29_22 && b30_40 && b31_22 && b32_27 && b33_35 && b34_24) {
matched = true;
pattern_id = 1903;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_20 && b13_53 && b14_25 && b15_36 && b16_24 && b17_49 && b18_29 && b19_34 && b20_24 && b21_2 && b22_3 && b23_19 && b24_22 && b25_30 && b26_25 && b27_27 && b28_31 && b29_16 && b30_16 && b31_29 && b32_36 && b33_34) {
matched = true;
pattern_id = 1904;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_16 && b13_22 && b14_20 && b15_48 && b16_40 && b17_37 && b18_36 && b19_44 && b20_17 && b21_29 && b22_41 && b23_19 && b24_24 && b25_30 && b26_25 && b27_33 && b28_37 && b29_22 && b30_16 && b31_2 && b32_39 && b33_11 && b34_2 && b35_34 && b36_10 && b37_26 && b38_19 && b39_19 && b40_26 && b41_25) {
matched = true;
pattern_id = 1905;
}
if(b0_21 && b1_3 && b2_8 && b3_40 && b4_17 && b5_16 && b6_21 && b7_10 && b8_3) {
matched = true;
pattern_id = 1906;
}
if(b0_21 && b1_3 && b2_8 && b3_40 && b4_17 && b5_16 && b6_46 && b7_9 && b8_11 && b9_6 && b10_12 && b11_29 && b12_10 && b13_31 && b14_8 && b15_7) {
matched = true;
pattern_id = 1907;
}
if(b0_21 && b1_21 && b2_41 && b3_37) {
matched = true;
pattern_id = 1908;
}
if(b0_21 && b1_21 && b2_25 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 1909;
}
if(b0_21 && b1_50 && b2_8 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 1910;
}
if(b0_21 && b1_8 && b2_48 && b3_11 && b4_53 && b5_42) {
matched = true;
pattern_id = 1911;
}
if(b0_21 && b1_8 && b2_16 && b3_8 && b4_44 && b5_12 && b6_7 && b7_47 && b8_48 && b9_50 && b10_13 && b11_23) {
matched = true;
pattern_id = 1912;
}
if(b0_21 && b1_8 && b2_16 && b3_7 && b4_24 && b5_6 && b6_55 && b7_9 && b8_48 && b9_40 && b10_6 && b11_26 && b12_17 && b13_27 && b14_28 && b15_7 && b16_27 && b17_6 && b18_8) {
matched = true;
pattern_id = 1913;
}
if(b0_21 && b1_8 && b2_16 && b3_7 && b4_24 && b5_6 && b6_55 && b7_9 && b8_48 && b9_34 && b10_6 && b11_47 && b12_17 && b13_38 && b14_24 && b15_30 && b16_22 && b17_55) {
matched = true;
pattern_id = 1914;
}
if(b0_21 && b1_8 && b2_17 && b3_43 && b4_22 && b5_10 && b6_8 && b7_29 && b8_48 && b9_17 && b10_6 && b11_27 && b12_52) {
matched = true;
pattern_id = 1915;
}
if(b0_21 && b1_8 && b2_17 && b3_43 && b4_22 && b5_10 && b6_8 && b7_29 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1916;
}
if(b0_21 && b1_16 && b2_20 && b3_50 && b4_1 && b5_42 && b6_8 && b7_35 && b8_34 && b9_5) {
matched = true;
pattern_id = 1917;
}
if(b0_54 && b1_11 && b2_15 && b3_6 && b4_1 && b5_23 && b6_32 && b7_18 && b8_10 && b9_13 && b10_42 && b11_2 && b12_30 && b13_1 && b14_2 && b15_9 && b16_27 && b17_8) {
matched = true;
pattern_id = 1918;
}
if(b0_54 && b1_11 && b2_15 && b3_6 && b4_1 && b5_23 && b6_32 && b7_18 && b8_10 && b9_38 && b10_1 && b11_41 && b12_10 && b13_31 && b14_27 && b15_7) {
matched = true;
pattern_id = 1919;
}
if(b0_54 && b1_14 && b2_24 && b3_6 && b4_1 && b5_51 && b6_52 && b7_35 && b8_5 && b9_14 && b10_43 && b11_6 && b12_32 && b13_26 && b14_1 && b15_24 && b16_15 && b17_30 && b18_23 && b19_22 && b20_28 && b21_4 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 1920;
}
if(b0_54 && b1_13 && b2_24 && b3_45 && b4_46 && b5_42 && b6_3 && b7_3 && b8_25 && b9_8 && b10_2 && b11_2 && b12_17 && b13_35 && b14_34 && b15_28 && b16_11 && b17_13 && b18_10 && b19_12 && b20_13) {
matched = true;
pattern_id = 1921;
}
if(b0_54 && b1_16 && b2_23 && b3_6 && b4_17 && b5_4) {
matched = true;
pattern_id = 1922;
}
if(b0_54 && b1_32 && b2_43 && b3_24 && b4_69 && b5_3 && b6_39 && b7_45 && b8_41 && b9_10 && b10_26 && b11_6 && b12_3 && b13_66 && b14_36 && b15_59 && b16_5 && b17_32 && b18_31 && b19_55 && b20_20 && b21_56 && b22_19 && b23_54 && b24_1 && b25_51) {
matched = true;
pattern_id = 1923;
}
if(b0_54 && b1_54 && b2_25 && b3_40 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1924;
}
if(b0_54 && b1_54 && b2_50 && b3_43) {
matched = true;
pattern_id = 1925;
}
if(b0_54 && b1_54 && b2_50 && b3_43 && b4_1 && b5_51 && b6_52 && b7_35 && b8_5 && b9_14 && b10_43 && b11_6 && b12_32) {
matched = true;
pattern_id = 1926;
}
if(b0_23 && b1_2 && b2_16 && b3_11 && b4_51 && b5_10 && b6_3 && b7_30 && b8_48 && b9_17 && b10_6 && b11_26 && b12_12 && b13_5 && b14_42 && b15_3) {
matched = true;
pattern_id = 1927;
}
if(b0_23 && b1_2 && b2_8 && b3_8 && b4_16 && b5_12 && b6_3 && b7_7 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1928;
}
if(b0_23 && b1_21 && b2_16 && b3_19 && b4_12 && b5_20) {
matched = true;
pattern_id = 1929;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_59 && b5_27 && b6_8 && b7_45 && b8_42 && b9_12 && b10_17 && b11_23 && b12_49) {
matched = true;
pattern_id = 1930;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37) {
matched = true;
pattern_id = 1931;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37 && b9_39 && b10_9 && b11_27 && b12_5 && b13_4 && b14_20 && b15_15 && b16_17 && b17_29 && b18_22 && b19_9 && b20_33 && b21_21 && b22_20 && b23_52 && b24_42) {
matched = true;
pattern_id = 1932;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37 && b9_27 && b10_13 && b11_6 && b12_7 && b13_40 && b14_63 && b15_33 && b16_3) {
matched = true;
pattern_id = 1933;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37 && b9_9 && b10_26 && b11_40 && b12_5 && b13_40 && b14_63 && b15_33 && b16_3) {
matched = true;
pattern_id = 1934;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37 && b9_4 && b10_3 && b11_42 && b12_10 && b13_37 && b14_55 && b15_15 && b16_8 && b17_53 && b18_44 && b19_41 && b20_2 && b21_36 && b22_38 && b23_35 && b24_25 && b25_57 && b26_35 && b27_21 && b28_6 && b29_5 && b30_1 && b31_10 && b32_7 && b33_42 && b34_5 && b35_7 && b36_33 && b37_10) {
matched = true;
pattern_id = 1935;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_32 && b5_38 && b6_15 && b7_3 && b8_15 && b9_20) {
matched = true;
pattern_id = 1936;
}
if(b0_23 && b1_8 && b2_23 && b3_34 && b4_46 && b5_12 && b6_8 && b7_9 && b8_42 && b9_4 && b10_41 && b11_24 && b12_10 && b13_1 && b14_28 && b15_33 && b16_39 && b17_29 && b18_60 && b19_6 && b20_29 && b21_41 && b22_1 && b23_42 && b24_5 && b25_41 && b26_56 && b27_8 && b28_9 && b29_5 && b30_5 && b31_11 && b32_32 && b33_8 && b34_1 && b35_13 && b36_3) {
matched = true;
pattern_id = 1937;
}
if(b0_23 && b1_8 && b2_23 && b3_7 && b4_24 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 1938;
}
if(b0_23 && b1_8 && b2_23 && b3_7 && b4_24 && b5_37 && b6_34 && b7_10 && b8_35 && b9_27 && b10_26 && b11_30 && b12_16 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 1939;
}
if(b0_23 && b1_8 && b2_23 && b3_7 && b4_24 && b5_12 && b6_35 && b7_7 && b8_40 && b9_34 && b10_28 && b11_33 && b12_12 && b13_6 && b14_37 && b15_5 && b16_47 && b17_39 && b18_10 && b19_42 && b20_26) {
matched = true;
pattern_id = 1940;
}
if(b0_23 && b1_16 && b2_25 && b3_11 && b4_32 && b5_44 && b6_64 && b7_1 && b8_27 && b9_24 && b10_1 && b11_17 && b12_29 && b13_26 && b14_3 && b15_21 && b16_5 && b17_18 && b18_11 && b19_22 && b20_41 && b21_38 && b22_1 && b23_23 && b24_38 && b25_6 && b26_8 && b27_3 && b28_4 && b29_37 && b30_3 && b31_35 && b32_1 && b33_16 && b34_23 && b35_5 && b36_20 && b37_25 && b38_28 && b39_12 && b40_24 && b41_21 && b42_14 && b43_2 && b44_20 && b45_7 && b46_16 && b47_14) {
matched = true;
pattern_id = 1941;
}
if(b0_23 && b1_16 && b2_14 && b3_21 && b4_18 && b5_17) {
matched = true;
pattern_id = 1942;
}
if(b0_23 && b1_16 && b2_20 && b3_34 && b4_43 && b5_53 && b6_32 && b7_4 && b8_70 && b9_6 && b10_35 && b11_3 && b12_12 && b13_40 && b14_64) {
matched = true;
pattern_id = 1943;
}
if(b0_23 && b1_16 && b2_20 && b3_34 && b4_32 && b5_38 && b6_15 && b7_1 && b8_19 && b9_1 && b10_1 && b11_19 && b12_2 && b13_1 && b14_9 && b15_1 && b16_1 && b17_15 && b18_1 && b19_1 && b20_7 && b21_1 && b22_13 && b23_5 && b24_15 && b25_13 && b26_7 && b27_7 && b28_8 && b29_11 && b30_9 && b31_10 && b32_13 && b33_1 && b34_5 && b35_8 && b36_4 && b37_3 && b38_6 && b39_4 && b40_3) {
matched = true;
pattern_id = 1944;
}
if(b0_23 && b1_6 && b2_50 && b3_29 && b4_12 && b5_2 && b6_7) {
matched = true;
pattern_id = 1945;
}
if(b0_23 && b1_6 && b2_50 && b3_28 && b4_45 && b5_19 && b6_5) {
matched = true;
pattern_id = 1946;
}
if(b0_23 && b1_6 && b2_50 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 1947;
}
if(b0_23 && b1_56 && b2_24 && b3_24 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1948;
}
if(b0_23 && b1_56 && b2_21 && b3_40 && b4_6 && b5_16 && b6_3 && b7_45 && b8_3 && b9_39 && b10_26 && b11_27 && b12_39 && b13_45 && b14_35 && b15_30 && b16_43 && b17_51 && b18_5 && b19_31 && b20_17 && b21_33 && b22_32 && b23_29 && b24_48 && b25_42 && b26_34 && b27_31 && b28_55 && b29_7 && b30_26 && b31_38 && b32_9 && b33_25 && b34_47) {
matched = true;
pattern_id = 1949;
}
if(b0_28 && b1_20 && b2_23 && b3_26 && b4_11 && b5_6) {
matched = true;
pattern_id = 1950;
}
if(b0_28 && b1_2 && b2_3 && b3_11 && b4_26 && b5_52 && b6_19 && b7_47 && b8_10 && b9_57 && b10_16 && b11_20 && b12_38 && b13_19 && b14_19) {
matched = true;
pattern_id = 1951;
}
if(b0_28 && b1_2 && b2_3 && b3_11 && b4_26 && b5_52 && b6_19 && b7_47 && b8_10 && b9_57 && b10_16 && b11_20 && b12_20 && b13_5 && b14_41 && b15_17) {
matched = true;
pattern_id = 1952;
}
if(b0_28 && b1_3 && b2_8 && b3_7 && b4_3 && b5_12 && b6_19 && b7_10 && b8_11 && b9_10 && b10_8) {
matched = true;
pattern_id = 1953;
}
if(b0_28 && b1_3 && b2_3 && b3_40 && b4_22 && b5_16 && b6_7 && b7_45 && b8_35) {
matched = true;
pattern_id = 1954;
}
if(b0_28 && b1_8 && b2_20 && b3_16 && b4_22 && b5_6 && b6_39 && b7_7 && b8_5 && b9_14 && b10_43 && b11_6 && b12_3 && b13_38 && b14_17 && b15_41 && b16_44) {
matched = true;
pattern_id = 1955;
}
if(b0_28 && b1_16 && b2_43 && b3_43 && b4_6 && b5_4) {
matched = true;
pattern_id = 1956;
}
if(b0_28 && b1_52 && b2_3 && b3_18 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6) {
matched = true;
pattern_id = 1957;
}
if(b0_8 && b1_33 && b2_37 && b3_28 && b4_29 && b5_35 && b6_12 && b7_22 && b8_23 && b9_13 && b10_16 && b11_12 && b12_6 && b13_12 && b14_13 && b15_4 && b16_6 && b17_5 && b18_3 && b19_5 && b20_12 && b21_3 && b22_8 && b23_11 && b24_2 && b25_12 && b26_10 && b27_2 && b28_12 && b29_2 && b30_2 && b31_8 && b32_8) {
matched = true;
pattern_id = 1958;
}
if(b0_8 && b1_2 && b2_19 && b3_1 && b4_17) {
matched = true;
pattern_id = 1959;
}
if(b0_8 && b1_21 && b2_1 && b3_1) {
matched = true;
pattern_id = 1960;
}
if(b0_8 && b1_8 && b2_8 && b3_8) {
matched = true;
pattern_id = 1961;
}
if(b0_8 && b1_8 && b2_8 && b3_8 && b4_27 && b5_12 && b6_41) {
matched = true;
pattern_id = 1962;
}
if(b0_8 && b1_6 && b2_3 && b3_50 && b4_71 && b5_30 && b6_56 && b7_53 && b8_49 && b9_42 && b10_28 && b11_47 && b12_37 && b13_22 && b14_17 && b15_25 && b16_24 && b17_40 && b18_18 && b19_40 && b20_3 && b21_19) {
matched = true;
pattern_id = 1963;
}
if(b0_8 && b1_6 && b2_3 && b3_50 && b4_32 && b5_38 && b6_15 && b7_1 && b8_27 && b9_39 && b10_1 && b11_42 && b12_14 && b13_26 && b14_30 && b15_36 && b16_40 && b17_36 && b18_32 && b19_44 && b20_31 && b21_21 && b22_42) {
matched = true;
pattern_id = 1964;
}
if(b0_8 && b1_6 && b2_3 && b3_50 && b4_32 && b5_38 && b6_15 && b7_3 && b8_15 && b9_20) {
matched = true;
pattern_id = 1965;
}
if(b0_8 && b1_6 && b2_3 && b3_50 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1966;
}
if(b0_68 && b1_9 && b2_50 && b3_45 && b4_39 && b5_6 && b6_20 && b7_14 && b8_58 && b9_12 && b10_17 && b11_23) {
matched = true;
pattern_id = 1967;
}
if(b0_68 && b1_11 && b2_6 && b3_50 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1968;
}
if(b0_68 && b1_14 && b2_43 && b3_27 && b4_12) {
matched = true;
pattern_id = 1969;
}
if(b0_68 && b1_35 && b2_12 && b3_14 && b4_2 && b5_8 && b6_36 && b7_34 && b8_13 && b9_27 && b10_56 && b11_46 && b12_16 && b13_30 && b14_35 && b15_35 && b16_16 && b17_37) {
matched = true;
pattern_id = 1970;
}
if(b0_68 && b1_50 && b2_41 && b3_11 && b4_53 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 1971;
}
if(b0_68 && b1_50 && b2_8 && b3_11 && b4_17 && b5_42 && b6_12 && b7_11 && b8_7 && b9_10 && b10_6 && b11_2 && b12_17 && b13_48 && b14_5 && b15_4 && b16_66 && b17_44 && b18_20 && b19_55 && b20_8 && b21_42 && b22_39 && b23_54 && b24_29 && b25_22 && b26_19 && b27_22 && b28_55 && b29_19 && b30_19 && b31_8 && b32_19 && b33_18 && b34_16 && b35_39 && b36_1 && b37_30 && b38_28 && b39_32 && b40_2 && b41_38 && b42_4 && b43_26 && b44_26 && b45_8 && b46_23 && b47_13 && b48_20 && b49_10 && b50_30 && b51_2 && b52_21 && b53_21 && b54_16 && b55_20 && b56_18 && b57_1 && b58_19 && b59_16 && b60_15 && b61_12 && b62_14 && b63_13 && b64_12 && b65_11 && b66_12) {
matched = true;
pattern_id = 1972;
}
if(b0_68 && b1_50 && b2_8 && b3_8 && b4_18 && b5_25 && b6_20 && b7_44 && b8_12 && b9_43 && b10_38 && b11_23 && b12_17 && b13_19 && b14_17 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 1973;
}
if(b0_68 && b1_13 && b2_47 && b3_2 && b4_15 && b5_10 && b6_37 && b7_11 && b8_2 && b9_42 && b10_43 && b11_6 && b12_7 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 1974;
}
if(b0_68 && b1_13 && b2_3 && b3_7 && b4_53) {
matched = true;
pattern_id = 1975;
}
if(b0_70) {
matched = true;
pattern_id = 1976;
}
if(b0_70 && b1_2 && b2_52 && b3_26 && b4_2 && b5_51 && b6_10 && b7_11 && b8_40 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_49 && b15_38) {
matched = true;
pattern_id = 1977;
}
if(b0_29 && b1_21 && b2_24 && b3_24 && b4_24 && b5_6) {
matched = true;
pattern_id = 1978;
}
if(b0_13 && b1_23 && b2_13) {
matched = true;
pattern_id = 1979;
}
if(b0_13 && b1_23 && b2_13 && b3_26 && b4_16 && b5_26 && b6_20) {
matched = true;
pattern_id = 1980;
}
if(b0_13 && b1_58 && b2_59 && b3_24 && b4_27 && b5_54 && b6_10 && b7_31 && b8_8 && b9_41 && b10_46 && b11_35 && b12_17 && b13_38 && b14_37) {
matched = true;
pattern_id = 1981;
}
if(b0_13 && b1_40 && b2_8 && b3_8 && b4_17 && b5_6 && b6_8 && b7_39 && b8_10 && b9_16 && b10_73 && b11_20) {
matched = true;
pattern_id = 1982;
}
if(b0_13 && b1_21 && b2_42 && b3_29 && b4_27 && b5_20 && b6_36 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1983;
}
if(b0_13 && b1_21 && b2_8 && b3_8 && b4_18) {
matched = true;
pattern_id = 1984;
}
if(b0_13 && b1_8 && b2_12 && b3_16 && b4_12 && b5_12 && b6_12 && b7_11 && b8_7) {
matched = true;
pattern_id = 1985;
}
if(b0_13 && b1_8 && b2_12 && b3_16 && b4_12 && b5_12 && b6_63 && b7_9 && b8_8 && b9_19 && b10_17) {
matched = true;
pattern_id = 1986;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_4 && b6_35 && b7_45 && b8_41 && b9_6 && b10_4 && b11_23 && b12_5 && b13_30 && b14_25) {
matched = true;
pattern_id = 1987;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_45 && b6_1) {
matched = true;
pattern_id = 1988;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_52 && b6_3 && b7_7 && b8_35 && b9_4 && b10_44 && b11_10 && b12_10) {
matched = true;
pattern_id = 1989;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_23 && b6_16 && b7_13 && b8_10) {
matched = true;
pattern_id = 1990;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_23 && b6_16 && b7_13 && b8_10 && b9_13 && b10_4 && b11_6 && b12_26 && b13_38) {
matched = true;
pattern_id = 1991;
}
if(b0_13 && b1_16 && b2_18 && b3_20 && b4_4 && b5_2) {
matched = true;
pattern_id = 1992;
}
if(b0_13 && b1_52 && b2_67 && b3_53 && b4_4 && b5_43 && b6_20) {
matched = true;
pattern_id = 1993;
}
if(b0_13 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_30 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_13 && b23_2 && b24_15 && b25_13 && b26_2 && b27_7 && b28_8 && b29_2 && b30_9 && b31_10 && b32_7 && b33_1 && b34_3) {
matched = true;
pattern_id = 1994;
}
if(b0_57 && b1_2 && b2_16 && b3_64 && b4_18 && b5_27 && b6_7 && b7_34) {
matched = true;
pattern_id = 1995;
}
if(b0_57 && b1_2 && b2_14 && b3_24 && b4_1 && b5_3 && b6_10 && b7_14 && b8_16 && b9_4 && b10_41 && b11_22 && b12_10 && b13_1 && b14_2 && b15_9 && b16_27 && b17_2 && b18_27 && b19_27 && b20_9) {
matched = true;
pattern_id = 1996;
}
if(b0_57 && b1_2 && b2_14 && b3_24 && b4_6 && b5_10 && b6_5 && b7_6 && b8_4 && b9_4 && b10_6 && b11_35 && b12_16 && b13_57 && b14_51 && b15_35 && b16_18 && b17_44 && b18_29 && b19_32 && b20_2 && b21_18 && b22_39 && b23_31 && b24_28) {
matched = true;
pattern_id = 1997;
}
if(b0_57 && b1_2 && b2_8 && b3_17 && b4_27 && b5_20 && b6_7 && b7_34) {
matched = true;
pattern_id = 1998;
}
if(b0_57 && b1_58 && b2_8 && b3_45 && b4_2 && b5_40 && b6_18 && b7_29 && b8_27 && b9_42 && b10_11 && b11_34 && b12_26 && b13_58 && b14_38 && b15_30 && b16_23 && b17_29 && b18_44 && b19_41 && b20_27 && b21_51 && b22_19) {
matched = true;
pattern_id = 1999;
}
if(b0_57 && b1_58 && b2_8 && b3_45 && b4_2 && b5_40 && b6_18 && b7_29 && b8_27 && b9_42 && b10_56 && b11_46 && b12_25 && b13_27 && b14_51 && b15_33 && b16_44 && b17_29 && b18_44 && b19_17 && b20_2 && b21_21 && b22_14) {
matched = true;
pattern_id = 2000;
}
if(b0_57 && b1_58 && b2_8 && b3_45 && b4_2 && b5_40 && b6_24 && b7_29 && b8_14 && b9_56 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_2 && b17_47 && b18_15 && b19_46 && b20_25 && b21_21 && b22_18 && b23_18 && b24_42 && b25_3 && b26_35 && b27_42 && b28_21) {
matched = true;
pattern_id = 2001;
}
if(b0_57 && b1_8 && b2_2 && b3_15 && b4_22 && b5_25 && b6_8) {
matched = true;
pattern_id = 2002;
}
if(b0_57 && b1_55 && b2_43 && b3_40 && b4_14 && b5_10 && b6_39 && b7_45 && b8_35 && b9_20 && b10_49 && b11_6 && b12_36 && b13_27 && b14_28 && b15_36 && b16_5 && b17_36 && b18_19) {
matched = true;
pattern_id = 2003;
}
if(b0_57 && b1_55 && b2_52 && b3_11 && b4_17 && b5_26 && b6_35 && b7_14 && b8_7 && b9_4 && b10_44 && b11_10 && b12_10) {
matched = true;
pattern_id = 2004;
}
if(b0_57 && b1_55 && b2_52 && b3_11 && b4_17 && b5_26 && b6_35 && b7_14 && b8_7 && b9_4 && b10_44 && b11_10 && b12_10 && b13_31 && b14_34 && b15_71 && b16_32 && b17_9 && b18_18) {
matched = true;
pattern_id = 2005;
}
if(b0_30 && b1_2 && b2_6 && b3_11 && b4_43 && b5_26 && b6_36 && b7_8 && b8_5 && b9_5 && b10_12 && b11_5 && b12_50 && b13_36 && b14_25) {
matched = true;
pattern_id = 2006;
}
if(b0_30 && b1_2 && b2_6 && b3_11 && b4_43 && b5_23 && b6_68 && b7_19 && b8_3 && b9_16 && b10_3 && b11_20 && b12_62 && b13_60 && b14_24 && b15_25 && b16_44 && b17_29 && b18_22 && b19_6 && b20_12 && b21_45 && b22_13 && b23_21 && b24_16 && b25_6 && b26_8 && b27_4 && b28_28 && b29_19 && b30_17 && b31_22 && b32_42 && b33_16 && b34_37 && b35_35 && b36_35 && b37_10 && b38_41 && b39_35 && b40_2 && b41_12 && b42_6 && b43_11 && b44_25 && b45_14 && b46_14 && b47_15 && b48_3 && b49_16 && b50_19 && b51_2 && b52_13 && b53_13 && b54_3 && b55_3 && b56_11 && b57_8 && b58_11 && b59_8 && b60_6 && b61_10 && b62_7 && b63_6 && b64_7 && b65_9 && b66_7 && b67_6 && b68_6 && b69_7 && b70_9 && b71_6 && b72_6 && b73_6 && b74_3 && b75_7 && b76_6 && b77_3 && b78_6 && b79_5 && b80_5 && b81_5 && b82_5 && b83_2 && b84_2 && b85_4 && b86_5 && b87_1 && b88_4 && b89_5 && b90_4 && b91_3 && b92_2 && b93_4 && b94_4 && b95_4 && b96_4 && b97_3 && b98_4 && b99_4 && b100_4 && b101_5 && b102_5 && b103_3 && b104_3 && b105_3 && b106_4 && b107_2 && b108_3 && b109_3 && b110_3 && b111_1 && b112_2 && b113_3 && b114_3 && b115_3 && b116_3 && b117_3 && b118_2 && b119_3 && b120_1 && b121_2 && b122_2 && b123_3 && b124_3 && b125_3 && b126_3 && b127_3 && b128_3 && b129_3 && b130_2 && b131_2 && b132_2 && b133_2 && b134_1 && b135_2 && b136_1 && b137_2 && b138_2 && b139_2 && b140_2 && b141_2 && b142_2 && b143_2 && b144_2 && b145_2 && b146_1 && b147_2 && b148_2 && b149_2 && b150_2 && b151_2 && b152_2 && b153_2 && b154_1 && b155_2 && b156_2 && b157_2 && b158_2 && b159_2 && b160_2 && b161_2 && b162_2 && b163_2 && b164_2) {
matched = true;
pattern_id = 2007;
}
if(b0_30 && b1_11 && b2_60 && b3_11 && b4_53 && b5_6) {
matched = true;
pattern_id = 2008;
}
if(b0_30 && b1_3 && b2_3 && b3_29 && b4_12 && b5_2 && b6_7) {
matched = true;
pattern_id = 2009;
}
if(b0_30 && b1_3 && b2_17 && b3_14 && b4_57 && b5_68 && b6_50 && b7_37 && b8_35 && b9_10 && b10_5 && b11_51 && b12_5 && b13_56 && b14_55 && b15_3 && b16_2 && b17_37 && b18_8 && b19_26 && b20_16 && b21_4) {
matched = true;
pattern_id = 2010;
}
if(b0_30 && b1_3 && b2_17 && b3_35 && b4_15 && b5_10 && b6_39 && b7_29 && b8_11 && b9_11 && b10_26 && b11_20 && b12_2 && b13_12 && b14_3 && b15_1 && b16_21 && b17_8) {
matched = true;
pattern_id = 2011;
}
if(b0_30 && b1_3 && b2_17 && b3_35 && b4_17 && b5_16 && b6_38 && b7_2 && b8_35 && b9_9 && b10_29 && b11_46 && b12_39 && b13_21 && b14_24 && b15_41) {
matched = true;
pattern_id = 2012;
}
if(b0_30 && b1_3 && b2_17 && b3_35 && b4_2 && b5_25 && b6_8 && b7_52 && b8_5 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7) {
matched = true;
pattern_id = 2013;
}
if(b0_30 && b1_3 && b2_17 && b3_16 && b4_17 && b5_10 && b6_39 && b7_47) {
matched = true;
pattern_id = 2014;
}
if(b0_30 && b1_3 && b2_17 && b3_18 && b4_12 && b5_8 && b6_22 && b7_10 && b8_8) {
matched = true;
pattern_id = 2015;
}
if(b0_30 && b1_3 && b2_17 && b3_18 && b4_22 && b5_6 && b6_11 && b7_9 && b8_5 && b9_14 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 2016;
}
if(b0_30 && b1_21 && b2_12 && b3_16 && b4_18 && b5_7 && b6_21 && b7_11 && b8_35 && b9_17 && b10_50) {
matched = true;
pattern_id = 2017;
}
if(b0_30 && b1_8 && b2_3 && b3_14 && b4_44 && b5_20 && b6_12 && b7_7 && b8_46 && b9_9 && b10_13 && b11_3 && b12_7 && b13_1 && b14_38 && b15_30 && b16_22 && b17_36 && b18_15 && b19_32 && b20_2) {
matched = true;
pattern_id = 2018;
}
if(b0_74 && b1_13 && b2_48) {
matched = true;
pattern_id = 2019;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_43 && b6_36 && b7_30 && b8_34 && b9_27 && b10_9 && b11_5) {
matched = true;
pattern_id = 2020;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_43 && b6_35 && b7_7 && b8_2 && b9_26 && b10_26 && b11_5 && b12_16) {
matched = true;
pattern_id = 2021;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_43 && b6_24 && b7_31 && b8_11 && b9_11 && b10_13) {
matched = true;
pattern_id = 2022;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_43 && b6_24 && b7_31 && b8_35 && b9_27 && b10_12) {
matched = true;
pattern_id = 2023;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_21 && b6_19 && b7_4 && b8_1 && b9_10) {
matched = true;
pattern_id = 2024;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_31 && b5_10 && b6_10 && b7_29 && b8_37 && b9_12 && b10_10 && b11_1 && b12_39 && b13_45 && b14_20 && b15_60 && b16_61 && b17_46 && b18_1 && b19_21 && b20_56) {
matched = true;
pattern_id = 2025;
}
if(b0_17 && b1_11 && b2_16 && b3_18 && b4_24 && b5_17 && b6_24 && b7_42 && b8_34 && b9_27 && b10_7 && b11_26 && b12_28 && b13_27 && b14_28 && b15_22 && b16_2 && b17_28 && b18_20 && b19_23 && b20_25 && b21_21 && b22_20 && b23_16 && b24_3 && b25_19 && b26_19 && b27_16 && b28_18 && b29_16 && b30_12) {
matched = true;
pattern_id = 2026;
}
if(b0_17 && b1_58 && b2_49 && b3_35 && b4_12 && b5_3 && b6_8 && b7_51 && b8_57) {
matched = true;
pattern_id = 2027;
}
if(b0_17 && b1_14 && b2_5 && b3_18 && b4_12 && b5_4 && b6_14 && b7_10 && b8_8 && b9_6 && b10_1 && b11_5 && b12_5 && b13_4 && b14_4 && b15_3 && b16_3) {
matched = true;
pattern_id = 2028;
}
if(b0_17 && b1_21 && b2_21 && b3_16) {
matched = true;
pattern_id = 2029;
}
if(b0_17 && b1_24 && b2_62 && b3_16 && b4_43 && b5_63 && b6_15 && b7_50) {
matched = true;
pattern_id = 2030;
}
if(b0_17 && b1_50 && b2_12 && b3_14 && b4_65 && b5_69 && b6_2 && b7_15 && b8_63 && b9_9 && b10_1 && b11_30 && b12_44 && b13_33) {
matched = true;
pattern_id = 2031;
}
if(b0_17 && b1_8 && b2_21 && b3_16) {
matched = true;
pattern_id = 2032;
}
if(b0_17 && b1_8 && b2_8 && b3_8 && b4_43) {
matched = true;
pattern_id = 2033;
}
if(b0_17 && b1_16 && b2_14 && b3_27 && b4_18 && b5_42 && b6_7) {
matched = true;
pattern_id = 2034;
}
if(b0_17 && b1_16 && b2_20 && b3_50 && b4_21 && b5_16 && b6_55 && b7_29) {
matched = true;
pattern_id = 2035;
}
if(b0_17 && b1_16 && b2_20 && b3_8 && b4_44 && b5_51 && b6_3 && b7_54 && b8_31 && b9_5 && b10_4 && b11_5 && b12_38 && b13_36 && b14_28 && b15_7 && b16_27 && b17_9 && b18_8) {
matched = true;
pattern_id = 2036;
}
if(b0_17 && b1_16 && b2_20 && b3_8 && b4_44 && b5_42 && b6_52 && b7_47 && b8_5) {
matched = true;
pattern_id = 2037;
}
if(b0_17 && b1_52 && b2_1 && b3_37) {
matched = true;
pattern_id = 2038;
}
if(b0_17 && b1_52 && b2_48 && b3_28 && b4_36 && b5_44 && b6_5 && b7_7 && b8_40 && b9_34 && b10_26 && b11_40 && b12_10 && b13_31 && b14_27 && b15_4 && b16_14 && b17_14 && b18_8 && b19_35 && b20_30 && b21_20 && b22_57 && b23_51 && b24_43 && b25_4 && b26_30 && b27_19 && b28_18 && b29_34 && b30_3 && b31_49 && b32_46) {
matched = true;
pattern_id = 2039;
}
if(b0_17 && b1_52 && b2_49 && b3_15 && b4_22 && b5_6 && b6_41 && b7_3 && b8_27 && b9_16 && b10_2 && b11_63) {
matched = true;
pattern_id = 2040;
}
if(b0_17 && b1_56 && b2_42 && b3_24 && b4_27 && b5_51) {
matched = true;
pattern_id = 2041;
}
if(b0_2 && b1_2 && b2_2 && b3_2 && b4_2 && b5_2 && b6_2 && b7_2 && b8_2 && b9_2) {
matched = true;
pattern_id = 2042;
}
if(b0_20 && b1_15 && b2_1 && b3_8) {
matched = true;
pattern_id = 2043;
}
if(b0_20 && b1_2 && b2_21 && b3_16 && b4_12 && b5_23 && b6_51 && b7_19 && b8_10) {
matched = true;
pattern_id = 2044;
}
if(b0_20 && b1_2 && b2_17 && b3_15 && b4_3 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_32 && b11_29) {
matched = true;
pattern_id = 2045;
}
if(b0_20 && b1_11 && b2_6 && b3_21 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 2046;
}
if(b0_20 && b1_11 && b2_50 && b3_8 && b4_1 && b5_42 && b6_3 && b7_3 && b8_25 && b9_8 && b10_2) {
matched = true;
pattern_id = 2047;
}
if(b0_20 && b1_3 && b2_49 && b3_54 && b4_45 && b5_31 && b6_24 && b7_32 && b8_8 && b9_49 && b10_5 && b11_40 && b12_48 && b13_31 && b14_1 && b15_15 && b16_5 && b17_49 && b18_41 && b19_28 && b20_24 && b21_38 && b22_19 && b23_40 && b24_19 && b25_39 && b26_42 && b27_29 && b28_9 && b29_31 && b30_27 && b31_31 && b32_28 && b33_22 && b34_20 && b35_29 && b36_19 && b37_23 && b38_21) {
matched = true;
pattern_id = 2048;
}
if(b0_20 && b1_3 && b2_8 && b3_6 && b4_22 && b5_55 && b6_54 && b7_2 && b8_14 && b9_9 && b10_13 && b11_44 && b12_18 && b13_36 && b14_28 && b15_16) {
matched = true;
pattern_id = 2049;
}
if(b0_20 && b1_3 && b2_8 && b3_6 && b4_22 && b5_55 && b6_7 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 2050;
}
if(b0_20 && b1_3 && b2_3 && b3_7 && b4_17 && b5_20 && b6_12 && b7_3 && b8_27 && b9_16 && b10_2 && b11_9 && b12_42 && b13_42 && b14_23 && b15_11 && b16_35 && b17_8 && b18_25 && b19_26 && b20_9) {
matched = true;
pattern_id = 2051;
}
if(b0_20 && b1_3 && b2_17 && b3_8) {
matched = true;
pattern_id = 2052;
}
if(b0_20 && b1_35 && b2_12 && b3_20 && b4_44 && b5_29 && b6_46) {
matched = true;
pattern_id = 2053;
}
if(b0_20 && b1_8 && b2_20 && b3_8) {
matched = true;
pattern_id = 2054;
}
if(b0_20 && b1_8 && b2_20 && b3_8 && b4_32 && b5_1 && b6_1 && b7_3 && b8_8 && b9_6 && b10_6 && b11_40 && b12_10 && b13_2 && b14_1 && b15_7) {
matched = true;
pattern_id = 2055;
}
if(b0_20 && b1_8 && b2_3 && b3_15 && b4_3 && b5_11 && b6_41 && b7_61 && b8_56 && b9_3 && b10_33 && b11_52 && b12_11 && b13_71 && b14_25 && b15_35 && b16_16 && b17_55 && b18_29 && b19_34 && b20_24 && b21_36 && b22_58 && b23_16 && b24_17 && b25_35 && b26_25 && b27_46) {
matched = true;
pattern_id = 2056;
}
if(b0_20 && b1_8 && b2_3 && b3_15 && b4_3 && b5_11 && b6_41 && b7_47 && b8_34 && b9_6 && b10_38 && b11_37 && b12_3 && b13_71 && b14_18 && b15_30 && b16_18 && b17_44 && b18_11 && b19_33) {
matched = true;
pattern_id = 2057;
}
if(b0_20 && b1_6 && b2_8 && b3_50 && b4_32 && b5_38 && b6_15 && b7_3 && b8_15 && b9_20) {
matched = true;
pattern_id = 2058;
}
if(b0_20 && b1_1 && b2_1 && b3_1 && b4_32 && b5_11 && b6_5 && b7_4 && b8_1 && b9_4 && b10_26 && b11_20 && b12_2 && b13_2 && b14_2 && b15_32 && b16_15 && b17_1 && b18_1 && b19_6 && b20_2 && b21_4 && b22_2 && b23_2 && b24_9 && b25_27 && b26_11 && b27_7 && b28_2 && b29_1 && b30_18 && b31_4 && b32_7 && b33_1 && b34_3 && b35_27 && b36_3 && b37_4 && b38_5 && b39_7 && b40_19 && b41_13 && b42_8 && b43_4 && b44_5) {
matched = true;
pattern_id = 2059;
}
if(b0_22 && b1_64 && b2_43 && b3_24 && b4_27 && b5_55 && b6_7 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_38 && b13_19 && b14_19) {
matched = true;
pattern_id = 2060;
}
if(b0_22 && b1_64 && b2_3 && b3_26 && b4_2 && b5_57 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64 && b11_37 && b12_39 && b13_20) {
matched = true;
pattern_id = 2061;
}
if(b0_22 && b1_2 && b2_3 && b3_6 && b4_17 && b5_16) {
matched = true;
pattern_id = 2062;
}
if(b0_22 && b1_11 && b2_23 && b3_11 && b4_12 && b5_20 && b6_54 && b7_9 && b8_6 && b9_19 && b10_35 && b11_28 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_8) {
matched = true;
pattern_id = 2063;
}
if(b0_22 && b1_11 && b2_23 && b3_11 && b4_12 && b5_20 && b6_24 && b7_2 && b8_14 && b9_10 && b10_46 && b11_37 && b12_3 && b13_27 && b14_25 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4) {
matched = true;
pattern_id = 2064;
}
if(b0_22 && b1_3 && b2_43 && b3_20 && b4_14 && b5_7) {
matched = true;
pattern_id = 2065;
}
if(b0_22 && b1_3 && b2_16 && b3_7 && b4_17 && b5_6 && b6_54 && b7_7 && b8_11 && b9_10 && b10_17 && b11_62 && b12_6 && b13_36 && b14_50) {
matched = true;
pattern_id = 2066;
}
if(b0_22 && b1_3 && b2_24 && b3_11 && b4_14 && b5_42 && b6_12) {
matched = true;
pattern_id = 2067;
}
if(b0_22 && b1_3 && b2_21 && b3_21 && b4_24 && b5_6) {
matched = true;
pattern_id = 2068;
}
if(b0_22 && b1_3 && b2_21 && b3_21 && b4_2 && b5_17 && b6_24) {
matched = true;
pattern_id = 2069;
}
if(b0_22 && b1_3 && b2_21 && b3_21 && b4_50 && b5_29 && b6_55 && b7_31 && b8_16 && b9_5) {
matched = true;
pattern_id = 2070;
}
if(b0_22 && b1_3 && b2_21 && b3_21 && b4_32 && b5_33 && b6_9 && b7_3 && b8_51 && b9_4 && b10_44 && b11_10 && b12_6 && b13_68 && b14_15 && b15_7 && b16_17 && b17_27 && b18_11 && b19_34 && b20_9 && b21_61 && b22_5 && b23_7 && b24_22 && b25_19 && b26_19 && b27_4 && b28_6 && b29_58 && b30_51 && b31_4) {
matched = true;
pattern_id = 2071;
}
if(b0_22 && b1_3 && b2_23 && b3_27 && b4_22 && b5_6 && b6_11 && b7_44 && b8_48 && b9_42 && b10_48 && b11_57 && b12_12 && b13_40 && b14_34) {
matched = true;
pattern_id = 2072;
}
if(b0_22 && b1_3 && b2_3 && b3_5 && b4_27 && b5_27 && b6_7 && b7_14 && b8_12 && b9_10 && b10_2 && b11_42 && b12_13 && b13_26) {
matched = true;
pattern_id = 2073;
}
if(b0_22 && b1_14 && b2_25 && b3_24 && b4_22 && b5_4 && b6_21 && b7_14 && b8_12 && b9_11 && b10_7) {
matched = true;
pattern_id = 2074;
}
if(b0_22 && b1_21 && b2_16 && b3_19 && b4_12 && b5_20) {
matched = true;
pattern_id = 2075;
}
if(b0_22 && b1_21 && b2_24 && b3_11 && b4_3 && b5_51 && b6_7 && b7_56 && b8_9 && b9_5 && b10_34 && b11_30 && b12_26 && b13_53 && b14_41 && b15_3 && b16_3 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7) {
matched = true;
pattern_id = 2076;
}
if(b0_22 && b1_21 && b2_24 && b3_11 && b4_3 && b5_51 && b6_7 && b7_56 && b8_2 && b9_17 && b10_4 && b11_3 && b12_5 && b13_22 && b14_5 && b15_44 && b16_30 && b17_37 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 2077;
}
if(b0_22 && b1_21 && b2_6 && b3_50 && b4_22 && b5_6 && b6_5 && b7_24 && b8_32 && b9_4) {
matched = true;
pattern_id = 2078;
}
if(b0_22 && b1_22 && b2_14 && b3_24 && b4_22 && b5_22) {
matched = true;
pattern_id = 2079;
}
if(b0_22 && b1_24 && b2_25 && b3_11 && b4_7 && b5_23 && b6_51 && b7_19 && b8_10) {
matched = true;
pattern_id = 2080;
}
if(b0_22 && b1_24 && b2_20 && b3_2 && b4_15 && b5_42 && b6_11 && b7_47 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 2081;
}
if(b0_22 && b1_35 && b2_8) {
matched = true;
pattern_id = 2082;
}
if(b0_22 && b1_50 && b2_43 && b3_34 && b4_12 && b5_45) {
matched = true;
pattern_id = 2083;
}
if(b0_22 && b1_8 && b2_6 && b3_11 && b4_59 && b5_27 && b6_8 && b7_46 && b8_11 && b9_17 && b10_46 && b11_47 && b12_26 && b13_19 && b14_17 && b15_27) {
matched = true;
pattern_id = 2084;
}
if(b0_22 && b1_8 && b2_62 && b3_18 && b4_27 && b5_40 && b6_7 && b7_51 && b8_35 && b9_27 && b10_11 && b11_37 && b12_45 && b13_40 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7) {
matched = true;
pattern_id = 2085;
}
if(b0_22 && b1_13 && b2_20 && b3_6 && b4_21 && b5_21 && b6_3 && b7_8 && b8_9 && b9_9) {
matched = true;
pattern_id = 2086;
}
if(b0_22 && b1_16 && b2_16 && b3_37 && b4_35 && b5_42 && b6_7 && b7_7 && b8_35 && b9_27 && b10_11 && b11_35 && b12_12 && b13_48 && b14_55 && b15_15 && b16_22 && b17_46 && b18_4 && b19_23 && b20_10 && b21_35 && b22_45 && b23_9 && b24_23) {
matched = true;
pattern_id = 2087;
}
if(b0_22 && b1_6 && b2_43 && b3_8 && b4_12 && b5_27 && b6_7 && b7_45 && b8_35) {
matched = true;
pattern_id = 2088;
}
if(b0_22 && b1_6 && b2_20 && b3_50 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 2089;
}
if(b0_22 && b1_6 && b2_23 && b3_11 && b4_18 && b5_27 && b6_23) {
matched = true;
pattern_id = 2090;
}
if(b0_22 && b1_55 && b2_21 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 2091;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_18 && b5_25 && b6_20 && b7_56 && b8_12 && b9_9 && b10_17 && b11_23 && b12_16) {
matched = true;
pattern_id = 2092;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_27 && b10_63 && b11_44 && b12_38 && b13_21 && b14_36 && b15_30 && b16_3 && b17_37 && b18_44 && b19_22 && b20_41 && b21_36 && b22_19 && b23_46 && b24_21 && b25_22 && b26_45 && b27_16 && b28_24 && b29_42 && b30_35 && b31_32 && b32_28 && b33_21 && b34_21 && b35_33 && b36_25 && b37_35 && b38_1 && b39_23 && b40_29 && b41_27 && b42_18 && b43_16 && b44_26 && b45_19 && b46_14 && b47_14) {
matched = true;
pattern_id = 2093;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_27 && b10_63 && b11_46 && b12_39 && b13_21 && b14_34 && b15_34 && b16_29 && b17_18 && b18_10 && b19_4 && b20_49 && b21_31 && b22_51 && b23_6 && b24_3 && b25_42 && b26_25 && b27_27 && b28_30 && b29_28 && b30_24 && b31_14 && b32_9 && b33_33 && b34_30 && b35_33 && b36_15 && b37_29 && b38_16 && b39_15 && b40_17) {
matched = true;
pattern_id = 2094;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_27 && b10_63 && b11_46 && b12_39 && b13_21 && b14_34 && b15_34 && b16_29 && b17_18 && b18_10 && b19_4 && b20_49 && b21_31 && b22_51 && b23_6 && b24_3 && b25_42 && b26_25 && b27_27 && b28_30 && b29_28 && b30_24 && b31_14 && b32_9 && b33_33 && b34_37 && b35_27 && b36_25 && b37_34 && b38_30 && b39_12 && b40_28 && b41_25) {
matched = true;
pattern_id = 2095;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_27 && b10_63 && b11_46 && b12_39 && b13_21 && b14_48 && b15_32 && b16_55 && b17_36 && b18_18 && b19_51 && b20_2 && b21_5 && b22_27 && b23_51 && b24_44 && b25_46 && b26_47 && b27_39 && b28_21 && b29_37 && b30_19 && b31_39 && b32_20 && b33_36 && b34_17 && b35_33 && b36_12) {
matched = true;
pattern_id = 2096;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_40 && b10_17 && b11_59 && b12_5 && b13_4 && b14_48 && b15_35 && b16_22 && b17_37 && b18_4 && b19_21 && b20_41 && b21_14 && b22_28 && b23_49 && b24_24 && b25_47 && b26_27 && b27_16 && b28_25 && b29_41 && b30_18 && b31_2 && b32_42 && b33_24 && b34_24 && b35_31 && b36_25 && b37_23 && b38_30 && b39_11 && b40_1 && b41_27 && b42_17 && b43_23 && b44_13 && b45_16 && b46_19 && b47_14 && b48_7 && b49_7) {
matched = true;
pattern_id = 2097;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_40 && b10_17 && b11_59 && b12_5 && b13_4 && b14_48 && b15_31 && b16_29 && b17_34 && b18_31 && b19_35 && b20_28 && b21_18 && b22_19 && b23_16 && b24_22 && b25_21 && b26_45 && b27_1 && b28_37 && b29_24 && b30_18 && b31_38 && b32_31 && b33_17 && b34_30 && b35_28 && b36_15 && b37_14 && b38_32 && b39_19 && b40_13 && b41_26 && b42_9 && b43_24 && b44_26 && b45_18 && b46_18 && b47_19 && b48_9 && b49_9) {
matched = true;
pattern_id = 2098;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_49 && b10_12 && b11_40 && b12_5 && b13_4 && b14_28 && b15_33 && b16_8 && b17_53 && b18_22 && b19_9 && b20_34 && b21_35 && b22_31 && b23_28 && b24_25 && b25_24 && b26_35 && b27_4 && b28_24 && b29_27 && b30_16 && b31_14 && b32_37 && b33_20 && b34_24 && b35_36 && b36_23 && b37_14 && b38_31 && b39_12 && b40_19 && b41_27 && b42_10 && b43_22 && b44_25 && b45_11 && b46_16) {
matched = true;
pattern_id = 2099;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_49 && b10_12 && b11_40 && b12_5 && b13_4 && b14_28 && b15_33 && b16_8 && b17_53 && b18_22 && b19_9 && b20_34 && b21_35 && b22_31 && b23_28 && b24_25 && b25_33 && b26_32 && b27_22 && b28_13 && b29_40 && b30_19 && b31_39 && b32_40 && b33_34 && b34_20 && b35_33 && b36_19 && b37_33 && b38_1 && b39_15 && b40_13 && b41_26 && b42_17 && b43_1 && b44_13 && b45_17) {
matched = true;
pattern_id = 2100;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_49 && b10_12 && b11_40 && b12_5 && b13_4 && b14_28 && b15_33 && b16_8 && b17_53 && b18_22 && b19_9 && b20_34 && b21_35 && b22_31 && b23_28 && b24_25 && b25_44 && b26_29 && b27_31 && b28_18 && b29_29 && b30_27 && b31_32 && b32_25) {
matched = true;
pattern_id = 2101;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_47 && b12_4 && b13_27 && b14_47 && b15_35 && b16_29 && b17_18 && b18_44 && b19_42 && b20_27 && b21_34 && b22_50 && b23_34 && b24_29 && b25_1 && b26_28 && b27_24 && b28_21 && b29_19 && b30_19 && b31_21 && b32_34 && b33_34 && b34_23) {
matched = true;
pattern_id = 2102;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_47 && b12_4 && b13_27 && b14_47 && b15_35 && b16_29 && b17_18 && b18_44 && b19_42 && b20_27 && b21_34 && b22_50 && b23_34 && b24_1 && b25_33 && b26_30 && b27_19 && b28_18 && b29_22 && b30_39) {
matched = true;
pattern_id = 2103;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_36 && b16_5 && b17_26 && b18_9 && b19_9 && b20_17 && b21_31 && b22_14 && b23_38 && b24_4 && b25_33 && b26_40 && b27_27 && b28_25 && b29_19 && b30_17 && b31_27 && b32_28 && b33_32 && b34_22 && b35_18 && b36_19 && b37_16 && b38_16) {
matched = true;
pattern_id = 2104;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_5 && b17_35 && b18_9 && b19_38 && b20_10 && b21_38 && b22_34 && b23_32 && b24_21 && b25_30 && b26_46 && b27_4 && b28_35 && b29_19 && b30_18 && b31_38 && b32_38 && b33_17 && b34_31 && b35_33 && b36_25 && b37_31 && b38_1 && b39_14 && b40_27 && b41_19 && b42_10) {
matched = true;
pattern_id = 2105;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_5 && b17_35 && b18_9 && b19_38 && b20_10 && b21_5 && b22_19 && b23_38 && b24_17 && b25_45 && b26_25 && b27_27 && b28_1 && b29_37 && b30_18 && b31_23 && b32_24 && b33_32 && b34_22 && b35_18 && b36_23 && b37_29 && b38_28 && b39_12 && b40_17 && b41_24 && b42_11 && b43_17) {
matched = true;
pattern_id = 2106;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_24 && b26_25 && b27_31 && b28_21 && b29_25 && b30_19 && b31_39 && b32_40 && b33_34 && b34_23 && b35_27 && b36_9 && b37_19 && b38_21 && b39_24 && b40_14 && b41_16) {
matched = true;
pattern_id = 2107;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_20 && b35_21 && b36_20 && b37_31) {
matched = true;
pattern_id = 2108;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_19 && b35_28 && b36_15 && b37_21) {
matched = true;
pattern_id = 2109;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_37 && b35_36 && b36_24 && b37_28 && b38_28) {
matched = true;
pattern_id = 2110;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_37 && b35_39 && b36_11 && b37_36 && b38_1 && b39_15) {
matched = true;
pattern_id = 2111;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_37 && b35_37 && b36_20 && b37_31 && b38_18 && b39_29 && b40_24 && b41_17 && b42_6) {
matched = true;
pattern_id = 2112;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_2 && b35_28 && b36_32) {
matched = true;
pattern_id = 2113;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_40 && b35_28 && b36_22 && b37_15 && b38_39 && b39_1 && b40_19 && b41_12) {
matched = true;
pattern_id = 2114;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_3 && b26_35 && b27_19 && b28_21 && b29_43 && b30_24 && b31_23 && b32_27 && b33_11 && b34_2 && b35_2 && b36_15 && b37_1 && b38_35 && b39_11 && b40_20 && b41_26 && b42_1) {
matched = true;
pattern_id = 2115;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_42 && b26_32 && b27_18 && b28_38 && b29_37 && b30_19 && b31_39 && b32_40 && b33_34 && b34_23 && b35_27 && b36_9 && b37_19 && b38_21 && b39_24 && b40_14 && b41_16) {
matched = true;
pattern_id = 2116;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_42 && b26_24 && b27_17 && b28_24 && b29_25 && b30_19 && b31_39 && b32_40 && b33_34 && b34_23 && b35_27 && b36_9 && b37_19 && b38_21 && b39_24 && b40_14 && b41_16) {
matched = true;
pattern_id = 2117;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39) {
matched = true;
pattern_id = 2118;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_10 && b37_26 && b38_19 && b39_15) {
matched = true;
pattern_id = 2119;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_17 && b37_28 && b38_21 && b39_12) {
matched = true;
pattern_id = 2120;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_1 && b37_15 && b38_39 && b39_1 && b40_19) {
matched = true;
pattern_id = 2121;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_1 && b37_19 && b38_38 && b39_30 && b40_15 && b41_17) {
matched = true;
pattern_id = 2122;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_1 && b37_33 && b38_19 && b39_15 && b40_27 && b41_32 && b42_11 && b43_22 && b44_33) {
matched = true;
pattern_id = 2123;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_22 && b37_28 && b38_12) {
matched = true;
pattern_id = 2124;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_30 && b37_28 && b38_28 && b39_31 && b40_1 && b41_19 && b42_17 && b43_30) {
matched = true;
pattern_id = 2125;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_4 && b28_18 && b29_25 && b30_19 && b31_39 && b32_31 && b33_20 && b34_35 && b35_27 && b36_22 && b37_14 && b38_21 && b39_32) {
matched = true;
pattern_id = 2126;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_4 && b28_18 && b29_25 && b30_19 && b31_39 && b32_31 && b33_20 && b34_35 && b35_27 && b36_22 && b37_14 && b38_21 && b39_32 && b40_13 && b41_33 && b42_16 && b43_17 && b44_14) {
matched = true;
pattern_id = 2127;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_31 && b23_16 && b24_20 && b25_33 && b26_45 && b27_27 && b28_1 && b29_25 && b30_27 && b31_32 && b32_27 && b33_22 && b34_31 && b35_2 && b36_10 && b37_27) {
matched = true;
pattern_id = 2128;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_2 && b33_34 && b34_21 && b35_33 && b36_15 && b37_21 && b38_35 && b39_15 && b40_15 && b41_33 && b42_9 && b43_15 && b44_30 && b45_22 && b46_13 && b47_15 && b48_9) {
matched = true;
pattern_id = 2129;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_31 && b33_20 && b34_35 && b35_27 && b36_22 && b37_14 && b38_21 && b39_32 && b40_13 && b41_31 && b42_17 && b43_25 && b44_30 && b45_24) {
matched = true;
pattern_id = 2130;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_9 && b33_16 && b34_31 && b35_33 && b36_25 && b37_23 && b38_28 && b39_24 && b40_14 && b41_17 && b42_16 && b43_17 && b44_34) {
matched = true;
pattern_id = 2131;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_41 && b33_35 && b34_35 && b35_42 && b36_28 && b37_21 && b38_35 && b39_15 && b40_15 && b41_33 && b42_9 && b43_15 && b44_30 && b45_22 && b46_13 && b47_15 && b48_9) {
matched = true;
pattern_id = 2132;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_41 && b33_38 && b34_19 && b35_28 && b36_15 && b37_21 && b38_35 && b39_15 && b40_15 && b41_33 && b42_9 && b43_15 && b44_30 && b45_22 && b46_13 && b47_15 && b48_9) {
matched = true;
pattern_id = 2133;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_19 && b23_51 && b24_4 && b25_4 && b26_25 && b27_27 && b28_25 && b29_19 && b30_13 && b31_38 && b32_40 && b33_16 && b34_31 && b35_40 && b36_25 && b37_32 && b38_28 && b39_13 && b40_28 && b41_18) {
matched = true;
pattern_id = 2134;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_19 && b23_51 && b24_4 && b25_4 && b26_25 && b27_27 && b28_1 && b29_3 && b30_36 && b31_14 && b32_37 && b33_38 && b34_2 && b35_2 && b36_26 && b37_31 && b38_20 && b39_10 && b40_25) {
matched = true;
pattern_id = 2135;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_36 && b27_1 && b28_26 && b29_30 && b30_36 && b31_14 && b32_37 && b33_20 && b34_24 && b35_20 && b36_26 && b37_25 && b38_30 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 2136;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36) {
matched = true;
pattern_id = 2137;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_36 && b36_24 && b37_28 && b38_28) {
matched = true;
pattern_id = 2138;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_25 && b36_20 && b37_30 && b38_1) {
matched = true;
pattern_id = 2139;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_22 && b36_10 && b37_26 && b38_19 && b39_15) {
matched = true;
pattern_id = 2140;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_22 && b36_28 && b37_37 && b38_37 && b39_12 && b40_19) {
matched = true;
pattern_id = 2141;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_22 && b36_30 && b37_28 && b38_28 && b39_31 && b40_1 && b41_19 && b42_17 && b43_30) {
matched = true;
pattern_id = 2142;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_29 && b36_20 && b37_38) {
matched = true;
pattern_id = 2143;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_37 && b36_20 && b37_31 && b38_18 && b39_29 && b40_24 && b41_17 && b42_6) {
matched = true;
pattern_id = 2144;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_27 && b27_18 && b28_30 && b29_30 && b30_35 && b31_27 && b32_40 && b33_16 && b34_16 && b35_29 && b36_19 && b37_30 && b38_26) {
matched = true;
pattern_id = 2145;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_27 && b27_18 && b28_30 && b29_30 && b30_35 && b31_27 && b32_40 && b33_16 && b34_16 && b35_29 && b36_19 && b37_30 && b38_26 && b39_26 && b40_21 && b41_15 && b42_10 && b43_23) {
matched = true;
pattern_id = 2146;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_41 && b27_37 && b28_18 && b29_42 && b30_20 && b31_14 && b32_37 && b33_20 && b34_24 && b35_20 && b36_26 && b37_25 && b38_30 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 2147;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_41 && b27_21 && b28_19 && b29_41 && b30_36 && b31_14 && b32_37 && b33_20 && b34_24 && b35_20 && b36_26 && b37_25 && b38_30 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 2148;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_42 && b22_38 && b23_46 && b24_37 && b25_33 && b26_46 && b27_4 && b28_30 && b29_41 && b30_36 && b31_29 && b32_9 && b33_25 && b34_35 && b35_36 && b36_12) {
matched = true;
pattern_id = 2149;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_5 && b22_19 && b23_44 && b24_4 && b25_3 && b26_19 && b27_1 && b28_34 && b29_43 && b30_15 && b31_32 && b32_28 && b33_25 && b34_35 && b35_20 && b36_15 && b37_14 && b38_18 && b39_11) {
matched = true;
pattern_id = 2150;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_24 && b21_26 && b22_45 && b23_46 && b24_32 && b25_46 && b26_28 && b27_31 && b28_24 && b29_44 && b30_17 && b31_23 && b32_37 && b33_2 && b34_24 && b35_26 && b36_19 && b37_20 && b38_20 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 2151;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_24 && b21_20 && b22_18 && b23_49 && b24_17 && b25_21 && b26_48 && b27_1 && b28_28 && b29_25 && b30_35 && b31_32 && b32_24 && b33_33 && b34_18 && b35_31 && b36_20 && b37_33 && b38_32 && b39_15) {
matched = true;
pattern_id = 2152;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_47 && b21_29 && b22_41 && b23_19 && b24_21 && b25_46 && b26_28 && b27_31 && b28_24 && b29_44 && b30_17 && b31_23 && b32_37 && b33_2 && b34_24 && b35_26 && b36_19 && b37_20 && b38_20 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 2153;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_36 && b26_22 && b27_44 && b28_21 && b29_26 && b30_36 && b31_39 && b32_43 && b33_20 && b34_16 && b35_24 && b36_25 && b37_5 && b38_34 && b39_1 && b40_23 && b41_28 && b42_17) {
matched = true;
pattern_id = 2154;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_2 && b21_2 && b22_22 && b23_6 && b24_1 && b25_33 && b26_46 && b27_37 && b28_31 && b29_25 && b30_35 && b31_27 && b32_41 && b33_21 && b34_21 && b35_2 && b36_12 && b37_26 && b38_1 && b39_21) {
matched = true;
pattern_id = 2155;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_30 && b21_29 && b22_3 && b23_49 && b24_8 && b25_36 && b26_30 && b27_22 && b28_26 && b29_43 && b30_40 && b31_22 && b32_28 && b33_39 && b34_16 && b35_29) {
matched = true;
pattern_id = 2156;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_46 && b21_14 && b22_28 && b23_19 && b24_29 && b25_22 && b26_19 && b27_1 && b28_37 && b29_22 && b30_16 && b31_2 && b32_39 && b33_11 && b34_2 && b35_34 && b36_17 && b37_21 && b38_17 && b39_24 && b40_29 && b41_15 && b42_10 && b43_26 && b44_27 && b45_23) {
matched = true;
pattern_id = 2157;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_46 && b21_14 && b22_28 && b23_19 && b24_29 && b25_22 && b26_19 && b27_1 && b28_37 && b29_22 && b30_17 && b31_23 && b32_37 && b33_24 && b34_16 && b35_36 && b36_20 && b37_25 && b38_35 && b39_23 && b40_30 && b41_19 && b42_20 && b43_25 && b44_23) {
matched = true;
pattern_id = 2158;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_22 && b25_24 && b26_36 && b27_27 && b28_28 && b29_34 && b30_16 && b31_37 && b32_23 && b33_35 && b34_38 && b35_35 && b36_22 && b37_16 && b38_30 && b39_14 && b40_13 && b41_26 && b42_9 && b43_24 && b44_20 && b45_9 && b46_12 && b47_20 && b48_1 && b49_10) {
matched = true;
pattern_id = 2159;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_22 && b25_24 && b26_36 && b27_27 && b28_28 && b29_34 && b30_16 && b31_37 && b32_23 && b33_35 && b34_23 && b35_34 && b36_15 && b37_16 && b38_35 && b39_23 && b40_30 && b41_19 && b42_20 && b43_25 && b44_23) {
matched = true;
pattern_id = 2160;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_26 && b30_17 && b31_22 && b32_41 && b33_19 && b34_37 && b35_34 && b36_29 && b37_31 && b38_32 && b39_25 && b40_17 && b41_27 && b42_21 && b43_22 && b44_27 && b45_20 && b46_20 && b47_21 && b48_10 && b49_11 && b50_14 && b51_8 && b52_10) {
matched = true;
pattern_id = 2161;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_26 && b30_17 && b31_22 && b32_41 && b33_19 && b34_37 && b35_20 && b36_25 && b37_5 && b38_28 && b39_13 && b40_31 && b41_27 && b42_21 && b43_15 && b44_25 && b45_21 && b46_21 && b47_22) {
matched = true;
pattern_id = 2162;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_17 && b25_21 && b26_27 && b27_36 && b28_26 && b29_30 && b30_36 && b31_14 && b32_37 && b33_31 && b34_21 && b35_28 && b36_30 && b37_16 && b38_28 && b39_26 && b40_32 && b41_25 && b42_21 && b43_26 && b44_28 && b45_1 && b46_14 && b47_19 && b48_1 && b49_12) {
matched = true;
pattern_id = 2163;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_27 && b25_42 && b26_22 && b27_31 && b28_18 && b29_35 && b30_26 && b31_39 && b32_43 && b33_24 && b34_22 && b35_37 && b36_26 && b37_31 && b38_35 && b39_21 && b40_15 && b41_29 && b42_16 && b43_12 && b44_24 && b45_22 && b46_13 && b47_15 && b48_9) {
matched = true;
pattern_id = 2164;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_27 && b25_42 && b26_34 && b27_40 && b28_21 && b29_43 && b30_40 && b31_22 && b32_28 && b33_39 && b34_16 && b35_29 && b36_25 && b37_35 && b38_1 && b39_23 && b40_20 && b41_16 && b42_16 && b43_17 && b44_24 && b45_16 && b46_17) {
matched = true;
pattern_id = 2165;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_24 && b21_15 && b22_3 && b23_18 && b24_1 && b25_46 && b26_33 && b27_22 && b28_1 && b29_25 && b30_19 && b31_23 && b32_37 && b33_20 && b34_24 && b35_23 && b36_26 && b37_36 && b38_36 && b39_12 && b40_27 && b41_26) {
matched = true;
pattern_id = 2166;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_25 && b21_21 && b22_14 && b23_9 && b24_3 && b25_4 && b26_19 && b27_27 && b28_31 && b29_16 && b30_35 && b31_23 && b32_25 && b33_38 && b34_30 && b35_29 && b36_26 && b37_19 && b38_27) {
matched = true;
pattern_id = 2167;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_25 && b21_21 && b22_14 && b23_9 && b24_3 && b25_4 && b26_19 && b27_27 && b28_31 && b29_16 && b30_35 && b31_23 && b32_25 && b33_38 && b34_16 && b35_41 && b36_31 && b37_21 && b38_18 && b39_10) {
matched = true;
pattern_id = 2168;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_23 && b28_24 && b29_35 && b30_36 && b31_14 && b32_40 && b33_33 && b34_2 && b35_33 && b36_13 && b37_32 && b38_28 && b39_13 && b40_28 && b41_18) {
matched = true;
pattern_id = 2169;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_23 && b28_24 && b29_35 && b30_36 && b31_14 && b32_40 && b33_33 && b34_2 && b35_33 && b36_13 && b37_16 && b38_37 && b39_27 && b40_15 && b41_24 && b42_10) {
matched = true;
pattern_id = 2170;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_32 && b21_21 && b22_43 && b23_26 && b24_3 && b25_34 && b26_25 && b27_33 && b28_34 && b29_30 && b30_29 && b31_39 && b32_40 && b33_34 && b34_17 && b35_36 && b36_20 && b37_30 && b38_35 && b39_1 && b40_32 && b41_30 && b42_16 && b43_12) {
matched = true;
pattern_id = 2171;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_35 && b26_29 && b27_4 && b28_30 && b29_30 && b30_18 && b31_39 && b32_40 && b33_34 && b34_17 && b35_35 && b36_22 && b37_16 && b38_30 && b39_14) {
matched = true;
pattern_id = 2172;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_31 && b21_29 && b22_20 && b23_18 && b24_1 && b25_22 && b26_19 && b27_1 && b28_37 && b29_19 && b30_19 && b31_27 && b32_42 && b33_16 && b34_20 && b35_28 && b36_15 && b37_14 && b38_32 && b39_19 && b40_13 && b41_18 && b42_11 && b43_27 && b44_29 && b45_19 && b46_22 && b47_14) {
matched = true;
pattern_id = 2173;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_34 && b21_30 && b22_34 && b23_44 && b24_3 && b25_46 && b26_33 && b27_22 && b28_1 && b29_25 && b30_19 && b31_23 && b32_37 && b33_24 && b34_16 && b35_35) {
matched = true;
pattern_id = 2174;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_17 && b21_29 && b22_28 && b23_31 && b24_20 && b25_22 && b26_19 && b27_1 && b28_37 && b29_21 && b30_27 && b31_28 && b32_20 && b33_34 && b34_2 && b35_25 && b36_23 && b37_5) {
matched = true;
pattern_id = 2175;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_17 && b21_29 && b22_20 && b23_32 && b24_28 && b25_33 && b26_46 && b27_4 && b28_4 && b29_41 && b30_29 && b31_38 && b32_44 && b33_33 && b34_20 && b35_27 && b36_9 && b37_19 && b38_38 && b39_19 && b40_13 && b41_31 && b42_17 && b43_25 && b44_30 && b45_24) {
matched = true;
pattern_id = 2176;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_17 && b21_29 && b22_22 && b23_6 && b24_28 && b25_33 && b26_46 && b27_23 && b28_24 && b29_35 && b30_36 && b31_14 && b32_40 && b33_33 && b34_22 && b35_36 && b36_15 && b37_14 && b38_31 && b39_24 && b40_16 && b41_1) {
matched = true;
pattern_id = 2177;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_30 && b21_30 && b22_22 && b23_35 && b24_3 && b25_4 && b26_36 && b27_27 && b28_29 && b29_41 && b30_15 && b31_32 && b32_25 && b33_20 && b34_38 && b35_28 && b36_10 && b37_30 && b38_20 && b39_28 && b40_20 && b41_26 && b42_14) {
matched = true;
pattern_id = 2178;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_3 && b17_30 && b18_18 && b19_35 && b20_32 && b21_20 && b22_43 && b23_27 && b24_17 && b25_23 && b26_41 && b27_23 && b28_23) {
matched = true;
pattern_id = 2179;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_24 && b21_15 && b22_3 && b23_18 && b24_1 && b25_46 && b26_27 && b27_37 && b28_24 && b29_24 && b30_15 && b31_19 && b32_24 && b33_25 && b34_38 && b35_23 && b36_22 && b37_16 && b38_27 && b39_1 && b40_26 && b41_19 && b42_10 && b43_26 && b44_27 && b45_23) {
matched = true;
pattern_id = 2180;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_4 && b28_23 && b29_41 && b30_24 && b31_28 && b32_29 && b33_11 && b34_31 && b35_34 && b36_22 && b37_21 && b38_27 && b39_33 && b40_19 && b41_28 && b42_18 && b43_16) {
matched = true;
pattern_id = 2181;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_4 && b28_23 && b29_41 && b30_24 && b31_28 && b32_29 && b33_11 && b34_31 && b35_34 && b36_22 && b37_21 && b38_27 && b39_13 && b40_33 && b41_34 && b42_1 && b43_27 && b44_16) {
matched = true;
pattern_id = 2182;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_4 && b28_23 && b29_41 && b30_24 && b31_28 && b32_29 && b33_11 && b34_31 && b35_34 && b36_22 && b37_21 && b38_27 && b39_11 && b40_27 && b41_32 && b42_1 && b43_31 && b44_25) {
matched = true;
pattern_id = 2183;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_3 && b26_32 && b27_22 && b28_25 && b29_35 && b30_26 && b31_38 && b32_20 && b33_33 && b34_2 && b35_33 && b36_13 && b37_32 && b38_28 && b39_13 && b40_28 && b41_18) {
matched = true;
pattern_id = 2184;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_3 && b26_32 && b27_22 && b28_25 && b29_35 && b30_26 && b31_38 && b32_20 && b33_33 && b34_2 && b35_33 && b36_13 && b37_16 && b38_37 && b39_27 && b40_15 && b41_24 && b42_10) {
matched = true;
pattern_id = 2185;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_3 && b26_32 && b27_22 && b28_25 && b29_35 && b30_26 && b31_38 && b32_20 && b33_33 && b34_2 && b35_33 && b36_13 && b37_27 && b38_18 && b39_29 && b40_15 && b41_30 && b42_11) {
matched = true;
pattern_id = 2186;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_31 && b21_29 && b22_20 && b23_18 && b24_1 && b25_22 && b26_19 && b27_1 && b28_37 && b29_35 && b30_3 && b31_2 && b32_31 && b33_22 && b34_36 && b35_27 && b36_15 && b37_29 && b38_22 && b39_25 && b40_17 && b41_18 && b42_9 && b43_22 && b44_16) {
matched = true;
pattern_id = 2187;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_17 && b21_29 && b22_50 && b23_46 && b24_3 && b25_3 && b26_37 && b27_27 && b28_1 && b29_16 && b30_27 && b31_27 && b32_9 && b33_6 && b34_16 && b35_18 && b36_25 && b37_31 && b38_1 && b39_14 && b40_26 && b41_17 && b42_9 && b43_32 && b44_32) {
matched = true;
pattern_id = 2188;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_17 && b21_29 && b22_50 && b23_46 && b24_3 && b25_3 && b26_37 && b27_27 && b28_1 && b29_16 && b30_27 && b31_27 && b32_9 && b33_6 && b34_16 && b35_18 && b36_25 && b37_31 && b38_1 && b39_14 && b40_21 && b41_24 && b42_25 && b43_23 && b44_35 && b45_19) {
matched = true;
pattern_id = 2189;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_17 && b21_29 && b22_41 && b23_19 && b24_24 && b25_30 && b26_25 && b27_33 && b28_37 && b29_35 && b30_3 && b31_2 && b32_31 && b33_22 && b34_36 && b35_27 && b36_15 && b37_29 && b38_28 && b39_12 && b40_17 && b41_31 && b42_17 && b43_25 && b44_30 && b45_24) {
matched = true;
pattern_id = 2190;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_17 && b21_29 && b22_40 && b23_27 && b24_22 && b25_30 && b26_46 && b27_18 && b28_29 && b29_24 && b30_17 && b31_23 && b32_20 && b33_33 && b34_20 && b35_21 && b36_23 && b37_15 && b38_29) {
matched = true;
pattern_id = 2191;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_30 && b21_29 && b22_3 && b23_49 && b24_8 && b25_36 && b26_30 && b27_22 && b28_26 && b29_43 && b30_40 && b31_22 && b32_28 && b33_39 && b34_16 && b35_29) {
matched = true;
pattern_id = 2192;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_30 && b21_48 && b22_27 && b23_28 && b24_20 && b25_28 && b26_46 && b27_4 && b28_23 && b29_41 && b30_24 && b31_28 && b32_29 && b33_11 && b34_31 && b35_34 && b36_11 && b37_28 && b38_22 && b39_10 && b40_15 && b41_17) {
matched = true;
pattern_id = 2193;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_35 && b21_2 && b22_34 && b23_18 && b24_37 && b25_1 && b26_27 && b27_19 && b28_21 && b29_19 && b30_35 && b31_28 && b32_36 && b33_17 && b34_17 && b35_20 && b36_24 && b37_16 && b38_21 && b39_26 && b40_19 && b41_25 && b42_22 && b43_28 && b44_23 && b45_16 && b46_23 && b47_23) {
matched = true;
pattern_id = 2194;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_46 && b21_14 && b22_28 && b23_19 && b24_29 && b25_22 && b26_19 && b27_1 && b28_37 && b29_22 && b30_17 && b31_23 && b32_37 && b33_24 && b34_16 && b35_36 && b36_20 && b37_25 && b38_35 && b39_23 && b40_30 && b41_19 && b42_20 && b43_25 && b44_23) {
matched = true;
pattern_id = 2195;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_22 && b25_23 && b26_19 && b27_1 && b28_34 && b29_43 && b30_15 && b31_21 && b32_28 && b33_38 && b34_23 && b35_21 && b36_26 && b37_30 && b38_35 && b39_14 && b40_19 && b41_28 && b42_22 && b43_1 && b44_31 && b45_19 && b46_14 && b47_19 && b48_1 && b49_12) {
matched = true;
pattern_id = 2196;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_20 && b25_27 && b26_25 && b27_22 && b28_30 && b29_30 && b30_35 && b31_28 && b32_36 && b33_17 && b34_17 && b35_20 && b36_24 && b37_16 && b38_21 && b39_26 && b40_19 && b41_25 && b42_22 && b43_28 && b44_23 && b45_16 && b46_23 && b47_23) {
matched = true;
pattern_id = 2197;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_35 && b30_3 && b31_2 && b32_31 && b33_22 && b34_36 && b35_27 && b36_15 && b37_29 && b38_28 && b39_12 && b40_17 && b41_31 && b42_17 && b43_25 && b44_30 && b45_24) {
matched = true;
pattern_id = 2198;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_35 && b30_3 && b31_2 && b32_31 && b33_22 && b34_36 && b35_27 && b36_15 && b37_29 && b38_28 && b39_12 && b40_17 && b41_28 && b42_23 && b43_29 && b44_14 && b45_11 && b46_14) {
matched = true;
pattern_id = 2199;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_1 && b25_33 && b26_28 && b27_33 && b28_21 && b29_35 && b30_26 && b31_39 && b32_9 && b33_35 && b34_22 && b35_23 && b36_12 && b37_26 && b38_32 && b39_10 && b40_13 && b41_17 && b42_1 && b43_16 && b44_31 && b45_7 && b46_21 && b47_24 && b48_5) {
matched = true;
pattern_id = 2200;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_1 && b25_33 && b26_39 && b27_18 && b28_1 && b29_25 && b30_19 && b31_23 && b32_37 && b33_22 && b34_37 && b35_28 && b36_13 && b37_27 && b38_39 && b39_13 && b40_16 && b41_27 && b42_17 && b43_23 && b44_32 && b45_25 && b46_24 && b47_15 && b48_11 && b49_13) {
matched = true;
pattern_id = 2201;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_1 && b25_33 && b26_24 && b27_3 && b28_24 && b29_25 && b30_35 && b31_29 && b32_23 && b33_38 && b34_16 && b35_29 && b36_15 && b37_29 && b38_18 && b39_29 && b40_15 && b41_24 && b42_24) {
matched = true;
pattern_id = 2202;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_24 && b25_48 && b26_35 && b27_19 && b28_28 && b29_45 && b30_35 && b31_28 && b32_36 && b33_17 && b34_17 && b35_20 && b36_24 && b37_16 && b38_21 && b39_26 && b40_31 && b41_19 && b42_12 && b43_17 && b44_14 && b45_7) {
matched = true;
pattern_id = 2203;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_43 && b25_4 && b26_34 && b27_1 && b28_39 && b29_3 && b30_15 && b31_32 && b32_25 && b33_20 && b34_38 && b35_20 && b36_1 && b37_28 && b38_27 && b39_11 && b40_1 && b41_28 && b42_10 && b43_24 && b44_23 && b45_17 && b46_25 && b47_25 && b48_7 && b49_14 && b50_15 && b51_9) {
matched = true;
pattern_id = 2204;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_40 && b17_49 && b18_9 && b19_21 && b20_35 && b21_10 && b22_3 && b23_18 && b24_29 && b25_31 && b26_34 && b27_1 && b28_39 && b29_3 && b30_15 && b31_32 && b32_25 && b33_20 && b34_38 && b35_20 && b36_1 && b37_28 && b38_27 && b39_11 && b40_1 && b41_28 && b42_10 && b43_24 && b44_23 && b45_17 && b46_25 && b47_25 && b48_7 && b49_14 && b50_15 && b51_9) {
matched = true;
pattern_id = 2205;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_40 && b17_37 && b18_36 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_22 && b26_32 && b27_27 && b28_31 && b29_27 && b30_37 && b31_14 && b32_34 && b33_25) {
matched = true;
pattern_id = 2206;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_40 && b17_37 && b18_36 && b19_44 && b20_27 && b21_10 && b22_43 && b23_9 && b24_22 && b25_3 && b26_19 && b27_1 && b28_34) {
matched = true;
pattern_id = 2207;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_40 && b17_37 && b18_36 && b19_16 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_33 && b27_22 && b28_1 && b29_25 && b30_19 && b31_23 && b32_37 && b33_20 && b34_24 && b35_23 && b36_26 && b37_36 && b38_36 && b39_12 && b40_27 && b41_26) {
matched = true;
pattern_id = 2208;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_9 && b10_34 && b11_5 && b12_4 && b13_5 && b14_12 && b15_36 && b16_57 && b17_36 && b18_20 && b19_48 && b20_17 && b21_36) {
matched = true;
pattern_id = 2209;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_22 && b5_42 && b6_39 && b7_9 && b8_11 && b9_34 && b10_48 && b11_35 && b12_37 && b13_16 && b14_37 && b15_18 && b16_29 && b17_39 && b18_4 && b19_21 && b20_17 && b21_29 && b22_18 && b23_28 && b24_30 && b25_4 && b26_27) {
matched = true;
pattern_id = 2210;
}
if(b0_22 && b1_55 && b2_8 && b3_21 && b4_51 && b5_27 && b6_24 && b7_56 && b8_8 && b9_5 && b10_5 && b11_47 && b12_17 && b13_38 && b14_48 && b15_31 && b16_18 && b17_37 && b18_18 && b19_40 && b20_48 && b21_29 && b22_39 && b23_50 && b24_42 && b25_24 && b26_36 && b27_31 && b28_37 && b29_25 && b30_19 && b31_36 && b32_20) {
matched = true;
pattern_id = 2211;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_6 && b6_5 && b7_4 && b8_1 && b9_4 && b10_49 && b11_20 && b12_2 && b13_2 && b14_2 && b15_3 && b16_15 && b17_1 && b18_1 && b19_6 && b20_25 && b21_4 && b22_2 && b23_2 && b24_9 && b25_30 && b26_11 && b27_7 && b28_2 && b29_1 && b30_5 && b31_4 && b32_7 && b33_1 && b34_3 && b35_37 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_7 && b46_2 && b47_3 && b48_4 && b49_4 && b50_32 && b51_3 && b52_4 && b53_4 && b54_3 && b55_18 && b56_3 && b57_3 && b58_4 && b59_3 && b60_8 && b61_4 && b62_4 && b63_3 && b64_3 && b65_18 && b66_4 && b67_4 && b68_4 && b69_3 && b70_17 && b71_4 && b72_3 && b73_4 && b74_3 && b75_7 && b76_5 && b77_7 && b78_5 && b79_3 && b80_13 && b81_4 && b82_4 && b83_6 && b84_4 && b85_1 && b86_3 && b87_3 && b88_2 && b89_4 && b90_2 && b91_3 && b92_3 && b93_3 && b94_3 && b95_7 && b96_3 && b97_2 && b98_3 && b99_3 && b100_3 && b101_4 && b102_4 && b103_2 && b104_3 && b105_1 && b106_3 && b107_1 && b108_2 && b109_2 && b110_6 && b111_2 && b112_1 && b113_2 && b114_2 && b115_5 && b116_2 && b117_2 && b118_1 && b119_2 && b120_4 && b121_2 && b122_1 && b123_2 && b124_2 && b125_4 && b126_2 && b127_2 && b128_2 && b129_2 && b130_4 && b131_2 && b132_1 && b133_1 && b134_2 && b135_3 && b136_2 && b137_3 && b138_1 && b139_4 && b140_3 && b141_4 && b142_1 && b143_3 && b144_4 && b145_4 && b146_2 && b147_3 && b148_3 && b149_3 && b150_3 && b151_3 && b152_3 && b153_1 && b154_2 && b155_3 && b156_3 && b157_1 && b158_3 && b159_3 && b160_3 && b161_3 && b162_3 && b163_1 && b164_3 && b165_2 && b166_2 && b167_2 && b168_1 && b169_2 && b170_2 && b171_2 && b172_2 && b173_2 && b174_2 && b175_2 && b176_2 && b177_1 && b178_2 && b179_2 && b180_2 && b181_2 && b182_2 && b183_1 && b184_2 && b185_2 && b186_2 && b187_1 && b188_2 && b189_2 && b190_2 && b191_2 && b192_1 && b193_1 && b194_2 && b195_2 && b196_2 && b197_2 && b198_2 && b199_2 && b200_2 && b201_2 && b202_2 && b203_2 && b204_2 && b205_2 && b206_2 && b207_1 && b208_2 && b209_2 && b210_2 && b211_2 && b212_2 && b213_1 && b214_2 && b215_2 && b216_2 && b217_1 && b218_2 && b219_2 && b220_2 && b221_2 && b222_1 && b223_1 && b224_2 && b225_2 && b226_2 && b227_2 && b228_1 && b229_2 && b230_2 && b231_2 && b232_2 && b233_2 && b234_2 && b235_2 && b236_2 && b237_1 && b238_2 && b239_1) {
matched = true;
pattern_id = 2212;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_33 && b16_15 && b17_1 && b18_1 && b19_6 && b20_32 && b21_4 && b22_2 && b23_2 && b24_9 && b25_24 && b26_11 && b27_7 && b28_2 && b29_1 && b30_20 && b31_4 && b32_7 && b33_1 && b34_3 && b35_20 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_7 && b46_2 && b47_3 && b48_4 && b49_4) {
matched = true;
pattern_id = 2213;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_18 && b16_15 && b17_1 && b18_1 && b19_6 && b20_2 && b21_4 && b22_2 && b23_2 && b24_9 && b25_23 && b26_11 && b27_7 && b28_2 && b29_1 && b30_19 && b31_4 && b32_7 && b33_1 && b34_3 && b35_18 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_8 && b46_2 && b47_3 && b48_4 && b49_4 && b50_7 && b51_3 && b52_4 && b53_4 && b54_3 && b55_6 && b56_3 && b57_3 && b58_4 && b59_3 && b60_6 && b61_4 && b62_4 && b63_3 && b64_3) {
matched = true;
pattern_id = 2214;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_18 && b16_15 && b17_1 && b18_1 && b19_6 && b20_2 && b21_4 && b22_2 && b23_2 && b24_9 && b25_23 && b26_11 && b27_7 && b28_2 && b29_1 && b30_19 && b31_4 && b32_7 && b33_1 && b34_3 && b35_18 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_8 && b46_2 && b47_3 && b48_4 && b49_4 && b50_7 && b51_3 && b52_4 && b53_4 && b54_3 && b55_6 && b56_3 && b57_3 && b58_4 && b59_3 && b60_6 && b61_4 && b62_4 && b63_3 && b64_3 && b65_4 && b66_4 && b67_4 && b68_4 && b69_3 && b70_4 && b71_4 && b72_3 && b73_4 && b74_3) {
matched = true;
pattern_id = 2215;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_5 && b16_15 && b17_1 && b18_1 && b19_6 && b20_24 && b21_4 && b22_2 && b23_2 && b24_9 && b25_3 && b26_11 && b27_7 && b28_2 && b29_1 && b30_15 && b31_4 && b32_7 && b33_1 && b34_3 && b35_19 && b36_3 && b37_4 && b38_5 && b39_7 && b40_14 && b41_13 && b42_8 && b43_4 && b44_5 && b45_7 && b46_2 && b47_3 && b48_4 && b49_4 && b50_6 && b51_3 && b52_4 && b53_4 && b54_3) {
matched = true;
pattern_id = 2216;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_32 && b16_15 && b17_1 && b18_1 && b19_6 && b20_28 && b21_4 && b22_2 && b23_2 && b24_9 && b25_22 && b26_11 && b27_7 && b28_2 && b29_1 && b30_18 && b31_4 && b32_7 && b33_1 && b34_3 && b35_18 && b36_3 && b37_4 && b38_5 && b39_7 && b40_13 && b41_13 && b42_8 && b43_4 && b44_5 && b45_6 && b46_2 && b47_3 && b48_4 && b49_4 && b50_5 && b51_3 && b52_4 && b53_4 && b54_3 && b55_5 && b56_3 && b57_3 && b58_4 && b59_3) {
matched = true;
pattern_id = 2217;
}
if(b0_33 && b1_2 && b2_18 && b3_11 && b4_6 && b5_7 && b6_35 && b7_7) {
matched = true;
pattern_id = 2218;
}
if(b0_33 && b1_11 && b2_50 && b3_21 && b4_18 && b5_42 && b6_8 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 2219;
}
if(b0_33 && b1_3 && b2_24 && b3_43 && b4_12 && b5_42 && b6_2 && b7_10 && b8_55 && b9_5) {
matched = true;
pattern_id = 2220;
}
if(b0_33 && b1_3 && b2_19 && b3_8 && b4_44 && b5_45 && b6_72 && b7_4 && b8_45 && b9_65 && b10_10 && b11_22) {
matched = true;
pattern_id = 2221;
}
if(b0_33 && b1_40 && b2_3 && b3_50 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 2222;
}
if(b0_33 && b1_14 && b2_14 && b3_18 && b4_27 && b5_26 && b6_24 && b7_14 && b8_16 && b9_5 && b10_13 && b11_3 && b12_7 && b13_6 && b14_5 && b15_5 && b16_5 && b17_4 && b18_4 && b19_4 && b20_3 && b21_5 && b22_3 && b23_3 && b24_3 && b25_3 && b26_3 && b27_3 && b28_3 && b29_3 && b30_3 && b31_2 && b32_2 && b33_2 && b34_2 && b35_2 && b36_1 && b37_1 && b38_1 && b39_1 && b40_1 && b41_1 && b42_1 && b43_1 && b44_1 && b45_1 && b46_1 && b47_1 && b48_1 && b49_1 && b50_1 && b51_1 && b52_1 && b53_1 && b54_1 && b55_1 && b56_1 && b57_1 && b58_1 && b59_1 && b60_1 && b61_1 && b62_1 && b63_1 && b64_1 && b65_1 && b66_1 && b67_1 && b68_1 && b69_1 && b70_1 && b71_1 && b72_1 && b73_1 && b74_1 && b75_1 && b76_1 && b77_1 && b78_1 && b79_1 && b80_1 && b81_1 && b82_1 && b83_1 && b84_1 && b85_1 && b86_1 && b87_1 && b88_1 && b89_1 && b90_1 && b91_1 && b92_1 && b93_1 && b94_1 && b95_1 && b96_1 && b97_1 && b98_1 && b99_1 && b100_1 && b101_1 && b102_1 && b103_1 && b104_1 && b105_1 && b106_1) {
matched = true;
pattern_id = 2223;
}
if(b0_33 && b1_21 && b2_6 && b3_11 && b4_32 && b5_38 && b6_15 && b7_1 && b8_27 && b9_1 && b10_2) {
matched = true;
pattern_id = 2224;
}
if(b0_33 && b1_21 && b2_50 && b3_6 && b4_43 && b5_47 && b6_7 && b7_9 && b8_41 && b9_6 && b10_35 && b11_46 && b12_3 && b13_19 && b14_21 && b15_67) {
matched = true;
pattern_id = 2225;
}
if(b0_33 && b1_8 && b2_7 && b3_18 && b4_50 && b5_4 && b6_10 && b7_14 && b8_14 && b9_10) {
matched = true;
pattern_id = 2226;
}
if(b0_33 && b1_16 && b2_62 && b3_43 && b4_14 && b5_11 && b6_11 && b7_10 && b8_3 && b9_10 && b10_28 && b11_28 && b12_25 && b13_5) {
matched = true;
pattern_id = 2227;
}
if(b0_33 && b1_16 && b2_66) {
matched = true;
pattern_id = 2228;
}
if(b0_33 && b1_52 && b2_3 && b3_15 && b4_2 && b5_11 && b6_46 && b7_11 && b8_48 && b9_40 && b10_49 && b11_30) {
matched = true;
pattern_id = 2229;
}
if(b0_52 && b1_58 && b2_50 && b3_21 && b4_18 && b5_42 && b6_8 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 2230;
}
if(b0_52 && b1_58 && b2_50 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 2231;
}
if(b0_52 && b1_21 && b2_41 && b3_37) {
matched = true;
pattern_id = 2232;
}
if(b0_52 && b1_21 && b2_41 && b3_37 && b4_4 && b5_23 && b6_32 && b7_40 && b8_10 && b9_14 && b10_6 && b11_6 && b12_4 && b13_26 && b14_27 && b15_10 && b16_15) {
matched = true;
pattern_id = 2233;
}
if(b0_52 && b1_50 && b2_43 && b3_34 && b4_12) {
matched = true;
pattern_id = 2234;
}
if(b0_52 && b1_52 && b2_25 && b3_20 && b4_59 && b5_42 && b6_8 && b7_35 && b8_34 && b9_5 && b10_11 && b11_35 && b12_17 && b13_30 && b14_17) {
matched = true;
pattern_id = 2235;
}
if(b0_52 && b1_52 && b2_25 && b3_20 && b4_3 && b5_11 && b6_18 && b7_10 && b8_3 && b9_10 && b10_6 && b11_6 && b12_6 && b13_41 && b14_21 && b15_41 && b16_18) {
matched = true;
pattern_id = 2236;
}
if(b0_58 && b1_3 && b2_23 && b3_18 && b4_27 && b5_10 && b6_55) {
matched = true;
pattern_id = 2237;
}
if(b0_58 && b1_8 && b2_14 && b3_40 && b4_12 && b5_27 && b6_8 && b7_11 && b8_34) {
matched = true;
pattern_id = 2238;
}
if(b0_58 && b1_16 && b2_49 && b3_45) {
matched = true;
pattern_id = 2239;
}
if(b0_18 && b1_15 && b2_1 && b3_2 && b4_4 && b5_1) {
matched = true;
pattern_id = 2240;
}
if(b0_18 && b1_2 && b2_14 && b3_8 && b4_10 && b5_16 && b6_55 && b7_46 && b8_69 && b9_14 && b10_34) {
matched = true;
pattern_id = 2241;
}
if(b0_18 && b1_2 && b2_21 && b3_19) {
matched = true;
pattern_id = 2242;
}
if(b0_18 && b1_14 && b2_1 && b3_1 && b4_6 && b5_14) {
matched = true;
pattern_id = 2243;
}
if(b0_18 && b1_14 && b2_20 && b3_15 && b4_2 && b5_23 && b6_16 && b7_13 && b8_10 && b9_20 && b10_22) {
matched = true;
pattern_id = 2244;
}
if(b0_18 && b1_21 && b2_21 && b3_21 && b4_44 && b5_21 && b6_2 && b7_14 && b8_40 && b9_5 && b10_12 && b11_20 && b12_15 && b13_8 && b14_3 && b15_9 && b16_27 && b17_8 && b18_22 && b19_9 && b20_24 && b21_20 && b22_14 && b23_18 && b24_25 && b25_33 && b26_33 && b27_31 && b28_6 && b29_5 && b30_1 && b31_4) {
matched = true;
pattern_id = 2245;
}
if(b0_18 && b1_52 && b2_15 && b3_29 && b4_12 && b5_2 && b6_7) {
matched = true;
pattern_id = 2246;
}
if(b0_59 && b1_13 && b2_59 && b3_26 && b4_11 && b5_11 && b6_35 && b7_54 && b8_42 && b9_50 && b10_49 && b11_3 && b12_7 && b13_5 && b14_51 && b15_35 && b16_5) {
matched = true;
pattern_id = 2247;
}
if(b0_59 && b1_13 && b2_59 && b3_40 && b4_24 && b5_12 && b6_24 && b7_2 && b8_5 && b9_34 && b10_49) {
matched = true;
pattern_id = 2248;
}
if(b0_59 && b1_13 && b2_59 && b3_11 && b4_3 && b5_29 && b6_18 && b7_29 && b8_2 && b9_11) {
matched = true;
pattern_id = 2249;
}
if(b0_59 && b1_13 && b2_59 && b3_49 && b4_27 && b5_25 && b6_7 && b7_54 && b8_11 && b9_9 && b10_13) {
matched = true;
pattern_id = 2250;
}
if(b0_59 && b1_13 && b2_59 && b3_20 && b4_12 && b5_47 && b6_34 && b7_10 && b8_34 && b9_5 && b10_13 && b11_3 && b12_24 && b13_5 && b14_57) {
matched = true;
pattern_id = 2251;
}
if(b0_59 && b1_13 && b2_59 && b3_20 && b4_12 && b5_47 && b6_10 && b7_10 && b8_42 && b9_40) {
matched = true;
pattern_id = 2252;
}
if(b0_59 && b1_13 && b2_59 && b3_20 && b4_12 && b5_47 && b6_56 && b7_8 && b8_11 && b9_10 && b10_17) {
matched = true;
pattern_id = 2253;
}
if(b0_59 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_22 && b16_15 && b17_1 && b18_1 && b19_6 && b20_33 && b21_4 && b22_2 && b23_2 && b24_9 && b25_24 && b26_11 && b27_7 && b28_2 && b29_1 && b30_15 && b31_4 && b32_7 && b33_1 && b34_3 && b35_21 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_9 && b46_2 && b47_3 && b48_4 && b49_4 && b50_8 && b51_3 && b52_4 && b53_4 && b54_3) {
matched = true;
pattern_id = 2254;
}
if(b0_59 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_31 && b16_15 && b17_1 && b18_1 && b19_6 && b20_2 && b21_4 && b22_2 && b23_2 && b24_9 && b25_25 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2255;
}
if(b0_59 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_32 && b16_15 && b17_1 && b18_1 && b19_6 && b20_34 && b21_4 && b22_2 && b23_2 && b24_9 && b25_27 && b26_11 && b27_7 && b28_2 && b29_1 && b30_13 && b31_4 && b32_7 && b33_1 && b34_3 && b35_22 && b36_3 && b37_4 && b38_5 && b39_7 && b40_16 && b41_13 && b42_8 && b43_4 && b44_5 && b45_10 && b46_2 && b47_3 && b48_4 && b49_4) {
matched = true;
pattern_id = 2256;
}
if(b0_15 && b1_8 && b2_54 && b3_22 && b4_52 && b5_19 && b6_21 && b7_45 && b8_27 && b9_10 && b10_5 && b11_30 && b12_58 && b13_12 && b14_18 && b15_25 && b16_17 && b17_39 && b18_35 && b19_37 && b20_57 && b21_57 && b22_55 && b23_21 && b24_24 && b25_18 && b26_6 && b27_50 && b28_50 && b29_4 && b30_47 && b31_21) {
matched = true;
pattern_id = 2257;
}
if(b0_15 && b1_13 && b2_14 && b3_1 && b4_14 && b5_11) {
matched = true;
pattern_id = 2258;
}
if(b0_81 && b1_59 && b2_24 && b3_27 && b4_27 && b5_6 && b6_56 && b7_55 && b8_14 && b9_14 && b10_9 && b11_26 && b12_26 && b13_53 && b14_20 && b15_16 && b16_32 && b17_34 && b18_37 && b19_2) {
matched = true;
pattern_id = 2259;
}
if(b0_77 && b1_78 && b2_21 && b3_11 && b4_31 && b5_4 && b6_4 && b7_39 && b8_42 && b9_12 && b10_17 && b11_73 && b12_12 && b13_16 && b14_35 && b15_22 && b16_52 && b17_8 && b18_25 && b19_26 && b20_9 && b21_24) {
matched = true;
pattern_id = 2260;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_3 && b45_3 && b46_4 && b47_3 && b48_2 && b49_3 && b50_2 && b51_2 && b52_4 && b53_4 && b54_2 && b55_4 && b56_2 && b57_2 && b58_4 && b59_4 && b60_4) {
matched = true;
pattern_id = 2261;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_3 && b45_3 && b46_4 && b47_3 && b48_2 && b49_3 && b50_2 && b51_2 && b52_4 && b53_4 && b54_3) {
matched = true;
pattern_id = 2262;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_4 && b45_3 && b46_5 && b47_3 && b48_2 && b49_3 && b50_11 && b51_2 && b52_4 && b53_4 && b54_2 && b55_4 && b56_2 && b57_2 && b58_4 && b59_4 && b60_2 && b61_3 && b62_4 && b63_2 && b64_4 && b65_3 && b66_2 && b67_4 && b68_4 && b69_2 && b70_3 && b71_3 && b72_5 && b73_4 && b74_4 && b75_5 && b76_4 && b77_6 && b78_4 && b79_4 && b80_6 && b81_3 && b82_4 && b83_6 && b84_2 && b85_2 && b86_4 && b87_2 && b88_3 && b89_3 && b90_2 && b91_2 && b92_3 && b93_2 && b94_2 && b95_2 && b96_2 && b97_2 && b98_3 && b99_2 && b100_2 && b101_3 && b102_3 && b103_2 && b104_2 && b105_2 && b106_2 && b107_1 && b108_1 && b109_1 && b110_1 && b111_1 && b112_1 && b113_1 && b114_1 && b115_1 && b116_1 && b117_1 && b118_1 && b119_1 && b120_1 && b121_1 && b122_1 && b123_1 && b124_1 && b125_1 && b126_1 && b127_1 && b128_1 && b129_1 && b130_1 && b131_1 && b132_1 && b133_1 && b134_1 && b135_1 && b136_1 && b137_1 && b138_1 && b139_1 && b140_1 && b141_1 && b142_1 && b143_1 && b144_1 && b145_1 && b146_1 && b147_1 && b148_1 && b149_1 && b150_1 && b151_1 && b152_1 && b153_1 && b154_1 && b155_1 && b156_1 && b157_1 && b158_1 && b159_1 && b160_1 && b161_1 && b162_1 && b163_1 && b164_1 && b165_1 && b166_1 && b167_1 && b168_1 && b169_1 && b170_1 && b171_1 && b172_1 && b173_1 && b174_1 && b175_1 && b176_1 && b177_1 && b178_1 && b179_1 && b180_1 && b181_1 && b182_1 && b183_1 && b184_1 && b185_1 && b186_1 && b187_1 && b188_1 && b189_1 && b190_1 && b191_1 && b192_1 && b193_1 && b194_1 && b195_1 && b196_1 && b197_1 && b198_1 && b199_1 && b200_1 && b201_1 && b202_1 && b203_1 && b204_1 && b205_1 && b206_1 && b207_1 && b208_1 && b209_1 && b210_1 && b211_1 && b212_1 && b213_1 && b214_1 && b215_1 && b216_1 && b217_1 && b218_1 && b219_1 && b220_1 && b221_1 && b222_1 && b223_1 && b224_1 && b225_1 && b226_1 && b227_1 && b228_1 && b229_1 && b230_1 && b231_1 && b232_1 && b233_1 && b234_1 && b235_1 && b236_1 && b237_1 && b238_1 && b239_1 && b240_1 && b241_1 && b242_1 && b243_1 && b244_1 && b245_1 && b246_1 && b247_1 && b248_1 && b249_1 && b250_1 && b251_1 && b252_1 && b253_1 && b254_1 && b255_1 && b256_1 && b257_1 && b258_1 && b259_1 && b260_1 && b261_1 && b262_1 && b263_1 && b264_1 && b265_1 && b266_1 && b267_1 && b268_1 && b269_1 && b270_1 && b271_1 && b272_1 && b273_1 && b274_1 && b275_1 && b276_1 && b277_1 && b278_1 && b279_1 && b280_1 && b281_1 && b282_1 && b283_1 && b284_1 && b285_1 && b286_1 && b287_1 && b288_1 && b289_1 && b290_1 && b291_1 && b292_1 && b293_1 && b294_1 && b295_1 && b296_1 && b297_1 && b298_1 && b299_1 && b300_1 && b301_1 && b302_1 && b303_1 && b304_1 && b305_1 && b306_1 && b307_1 && b308_1 && b309_1 && b310_1 && b311_1 && b312_1 && b313_1 && b314_1 && b315_1 && b316_1 && b317_1 && b318_1 && b319_1 && b320_1 && b321_1 && b322_1 && b323_1 && b324_1 && b325_1 && b326_1 && b327_1 && b328_1 && b329_1 && b330_1 && b331_1 && b332_1 && b333_1 && b334_1 && b335_1 && b336_1 && b337_1 && b338_1 && b339_1 && b340_1 && b341_1 && b342_1 && b343_1 && b344_1 && b345_1 && b346_1 && b347_1 && b348_1 && b349_1 && b350_1 && b351_1 && b352_1 && b353_1 && b354_1 && b355_1 && b356_1 && b357_1 && b358_1 && b359_1 && b360_1 && b361_1 && b362_1 && b363_1) {
matched = true;
pattern_id = 2263;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_4 && b39_5 && b40_4 && b41_9 && b42_4 && b43_4 && b44_8 && b45_3 && b46_4 && b47_6 && b48_3) {
matched = true;
pattern_id = 2264;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2265;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 2266;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10 && b13_10 && b14_23 && b15_12 && b16_20 && b17_23 && b18_17 && b19_14 && b20_14 && b21_17 && b22_9 && b23_17 && b24_18) {
matched = true;
pattern_id = 2267;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10 && b13_29 && b14_2 && b15_1 && b16_4 && b17_8 && b18_10 && b19_6 && b20_1 && b21_1 && b22_1 && b23_16 && b24_9 && b25_2 && b26_2 && b27_8 && b28_19 && b29_1 && b30_9 && b31_11 && b32_3 && b33_11 && b34_3 && b35_7 && b36_4 && b37_10 && b38_12 && b39_7 && b40_4 && b41_4 && b42_3 && b43_7 && b44_5 && b45_5 && b46_4 && b47_9 && b48_2 && b49_4 && b50_2 && b51_4 && b52_5 && b53_5 && b54_3 && b55_4 && b56_2 && b57_4 && b58_5 && b59_3 && b60_5 && b61_3 && b62_3 && b63_2 && b64_3 && b65_3 && b66_3 && b67_3 && b68_3 && b69_3 && b70_3 && b71_3 && b72_2 && b73_3 && b74_3 && b75_3 && b76_3 && b77_3 && b78_3 && b79_3 && b80_3 && b81_2 && b82_3 && b83_3) {
matched = true;
pattern_id = 2268;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_38 && b36_3) {
matched = true;
pattern_id = 2269;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_12 && b36_3) {
matched = true;
pattern_id = 2270;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_10 && b36_3) {
matched = true;
pattern_id = 2271;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 2272;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_42 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_3 && b36_3) {
matched = true;
pattern_id = 2273;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_16 && b12_10) {
matched = true;
pattern_id = 2274;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_27 && b11_7 && b12_6 && b13_15 && b14_8 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_3 && b45_3 && b46_4 && b47_3 && b48_3) {
matched = true;
pattern_id = 2275;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_27 && b11_7 && b12_6 && b13_12 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2276;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_25 && b9_13 && b10_45 && b11_8 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_4 && b34_24 && b35_1 && b36_4 && b37_4 && b38_25 && b39_4 && b40_4 && b41_5 && b42_8 && b43_4 && b44_18 && b45_5 && b46_4 && b47_16 && b48_4 && b49_3 && b50_12 && b51_4 && b52_4 && b53_3 && b54_5 && b55_4 && b56_6 && b57_3 && b58_4 && b59_6 && b60_5 && b61_8 && b62_6 && b63_3 && b64_6 && b65_6 && b66_3 && b67_4 && b68_5 && b69_4 && b70_3 && b71_6 && b72_3 && b73_4 && b74_6 && b75_3 && b76_3 && b77_5 && b78_5 && b79_4 && b80_5 && b81_2 && b82_4 && b83_5 && b84_3 && b85_2 && b86_3) {
matched = true;
pattern_id = 2277;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 2278;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_5 && b7_17 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_2 && b15_12 && b16_15 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1 && b23_48 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2279;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 2280;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_42 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 2281;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_17 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 2282;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_1 && b12_6 && b13_2 && b14_1 && b15_7) {
matched = true;
pattern_id = 2283;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_1 && b12_10) {
matched = true;
pattern_id = 2284;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_42 && b12_10) {
matched = true;
pattern_id = 2285;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_25 && b12_10) {
matched = true;
pattern_id = 2286;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_39 && b12_6 && b13_2 && b14_1 && b15_7) {
matched = true;
pattern_id = 2287;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_39 && b12_10) {
matched = true;
pattern_id = 2288;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_19 && b12_10) {
matched = true;
pattern_id = 2289;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_24 && b12_10) {
matched = true;
pattern_id = 2290;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_18 && b11_16 && b12_10) {
matched = true;
pattern_id = 2291;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_18 && b11_10 && b12_10) {
matched = true;
pattern_id = 2292;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_45 && b11_25 && b12_10) {
matched = true;
pattern_id = 2293;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_16 && b11_17 && b12_10) {
matched = true;
pattern_id = 2294;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_30 && b9_13 && b10_21 && b11_11 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_3 && b36_3) {
matched = true;
pattern_id = 2295;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_30 && b9_13 && b10_21 && b11_16 && b12_10) {
matched = true;
pattern_id = 2296;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_30 && b9_13 && b10_40 && b11_19 && b12_10) {
matched = true;
pattern_id = 2297;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_30 && b9_4 && b10_67) {
matched = true;
pattern_id = 2298;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5) {
matched = true;
pattern_id = 2299;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5 && b7_44) {
matched = true;
pattern_id = 2300;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5 && b7_19) {
matched = true;
pattern_id = 2301;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5 && b7_58 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_3 && b15_1 && b16_4 && b17_2 && b18_24 && b19_7 && b20_9) {
matched = true;
pattern_id = 2302;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_44 && b6_5) {
matched = true;
pattern_id = 2303;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_45 && b9_4 && b10_5) {
matched = true;
pattern_id = 2304;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_13 && b6_12 && b7_49 && b8_25 && b9_13 && b10_16 && b11_17 && b12_10) {
matched = true;
pattern_id = 2305;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_9 && b6_12 && b7_20 && b8_30 && b9_4 && b10_50) {
matched = true;
pattern_id = 2306;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_30 && b5_1 && b6_5 && b7_79 && b8_21 && b9_60 && b10_16) {
matched = true;
pattern_id = 2307;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_42 && b5_39 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_6 && b15_7) {
matched = true;
pattern_id = 2308;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_8 && b5_1 && b6_12 && b7_4 && b8_23 && b9_13 && b10_10 && b11_16 && b12_6 && b13_2 && b14_1 && b15_4 && b16_17 && b17_1 && b18_3 && b19_3 && b20_12 && b21_3 && b22_2 && b23_13 && b24_2 && b25_2 && b26_2 && b27_2 && b28_10 && b29_2 && b30_5 && b31_11 && b32_35 && b33_8 && b34_1 && b35_10 && b36_6 && b37_4 && b38_5 && b39_5 && b40_7 && b41_4 && b42_4 && b43_4 && b44_19 && b45_3 && b46_4 && b47_17 && b48_3) {
matched = true;
pattern_id = 2309;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_34 && b5_38 && b6_12 && b7_67 && b8_27 && b9_13 && b10_23 && b11_8 && b12_6 && b13_12 && b14_10 && b15_4 && b16_51 && b17_9 && b18_3 && b19_16 && b20_22 && b21_3 && b22_17 && b23_12 && b24_2 && b25_15 && b26_16 && b27_8) {
matched = true;
pattern_id = 2310;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_34 && b5_67 && b6_12 && b7_19 && b8_23 && b9_13 && b10_23 && b11_39 && b12_6 && b13_9 && b14_9 && b15_4 && b16_7 && b17_31 && b18_3 && b19_18 && b20_14 && b21_3 && b22_6 && b23_55 && b24_2 && b25_62 && b26_6 && b27_2 && b28_51 && b29_61 && b30_5 && b31_46 && b32_14 && b33_8 && b34_27 && b35_15 && b36_6 && b37_6 && b38_14 && b39_5 && b40_7 && b41_8 && b42_4 && b43_46 && b44_8 && b45_3 && b46_5 && b47_29 && b48_3) {
matched = true;
pattern_id = 2311;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_40 && b5_28 && b6_5 && b7_15 && b8_48 && b9_4 && b10_18 && b11_25 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 2312;
}
if(b0_14 && b1_15 && b2_1 && b3_28) {
matched = true;
pattern_id = 2313;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_26 && b5_62 && b6_24 && b7_47) {
matched = true;
pattern_id = 2314;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_72 && b5_26 && b6_36 && b7_8 && b8_11 && b9_43 && b10_13 && b11_2 && b12_4 && b13_47 && b14_36 && b15_3 && b16_52 && b17_8 && b18_25 && b19_26 && b20_9 && b21_36 && b22_19 && b23_37 && b24_32 && b25_20 && b26_48 && b27_22 && b28_42 && b29_41 && b30_15 && b31_40 && b32_40 && b33_16 && b34_17 && b35_18 && b36_3 && b37_6 && b38_3 && b39_7 && b40_2 && b41_33 && b42_17 && b43_27 && b44_37 && b45_4 && b46_29 && b47_29 && b48_3 && b49_23 && b50_25 && b51_16 && b52_10 && b53_18 && b54_13 && b55_20 && b56_15 && b57_11 && b58_16 && b59_1 && b60_11 && b61_12 && b62_11 && b63_10 && b64_10 && b65_3 && b66_11 && b67_10 && b68_7 && b69_3 && b70_13 && b71_10 && b72_2 && b73_10 && b74_11 && b75_9 && b76_1 && b77_11 && b78_10 && b79_8 && b80_9 && b81_8 && b82_9 && b83_2 && b84_3 && b85_2 && b86_3) {
matched = true;
pattern_id = 2315;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_61) {
matched = true;
pattern_id = 2316;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_52) {
matched = true;
pattern_id = 2317;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_63 && b5_23 && b6_1 && b7_4 && b8_10 && b9_11 && b10_2 && b11_1 && b12_2 && b13_26 && b14_51 && b15_7 && b16_4 && b17_1 && b18_8 && b19_9 && b20_9 && b21_1 && b22_2 && b23_7 && b24_1 && b25_6 && b26_2 && b27_7 && b28_8 && b29_5 && b30_9 && b31_10 && b32_7 && b33_1 && b34_3 && b35_6 && b36_3 && b37_4 && b38_5 && b39_7 && b40_14 && b41_13 && b42_8 && b43_4 && b44_5 && b45_23 && b46_2 && b47_3 && b48_4 && b49_4 && b50_25 && b51_3 && b52_4 && b53_4 && b54_3 && b55_20 && b56_3 && b57_3 && b58_4 && b59_3 && b60_27 && b61_4 && b62_4 && b63_3 && b64_3 && b65_29 && b66_4 && b67_4 && b68_4 && b69_3 && b70_30 && b71_4 && b72_3 && b73_4 && b74_3 && b75_19 && b76_5 && b77_7 && b78_5 && b79_3 && b80_1 && b81_4 && b82_4 && b83_6 && b84_4 && b85_1 && b86_3 && b87_3 && b88_2 && b89_4 && b90_13 && b91_3 && b92_3 && b93_3 && b94_3 && b95_15 && b96_3 && b97_2 && b98_3 && b99_3 && b100_6) {
matched = true;
pattern_id = 2318;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_17 && b5_10 && b6_3 && b7_9 && b8_10 && b9_1 && b10_10 && b11_20) {
matched = true;
pattern_id = 2319;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_30 && b15_7) {
matched = true;
pattern_id = 2320;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_11 && b14_15 && b15_7) {
matched = true;
pattern_id = 2321;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_11 && b14_14 && b15_7) {
matched = true;
pattern_id = 2322;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_33 && b14_30 && b15_7) {
matched = true;
pattern_id = 2323;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_8 && b14_30 && b15_7) {
matched = true;
pattern_id = 2324;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_27 && b9_4) {
matched = true;
pattern_id = 2325;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2326;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_1 && b9_13 && b10_27 && b11_25 && b12_10) {
matched = true;
pattern_id = 2327;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2328;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_25 && b9_13 && b10_10 && b11_25 && b12_6 && b13_2 && b14_16 && b15_4 && b16_4 && b17_11 && b18_3 && b19_3 && b20_19 && b21_3 && b22_2 && b23_13 && b24_2 && b25_2 && b26_7 && b27_2 && b28_2 && b29_13 && b30_5 && b31_11 && b32_4 && b33_8 && b34_1 && b35_6 && b36_6 && b37_4 && b38_9 && b39_5 && b40_4 && b41_8 && b42_4 && b43_4 && b44_2 && b45_3 && b46_5 && b47_3 && b48_3) {
matched = true;
pattern_id = 2329;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_25 && b9_13 && b10_10 && b11_25 && b12_6 && b13_2 && b14_16 && b15_4 && b16_4 && b17_11 && b18_3 && b19_3 && b20_19 && b21_3 && b22_2 && b23_13 && b24_2 && b25_2 && b26_7 && b27_2 && b28_2 && b29_13 && b30_5 && b31_11 && b32_4 && b33_8 && b34_1 && b35_6 && b36_6 && b37_4 && b38_9 && b39_5 && b40_4 && b41_8 && b42_4 && b43_4 && b44_2 && b45_4) {
matched = true;
pattern_id = 2330;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_5 && b30_5 && b31_11 && b32_15 && b33_8 && b34_9 && b35_10 && b36_3) {
matched = true;
pattern_id = 2331;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_30 && b5_1 && b6_12 && b7_4 && b8_17 && b9_13 && b10_10 && b11_1 && b12_6 && b13_15 && b14_15 && b15_4 && b16_17 && b17_16 && b18_3 && b19_27 && b20_6 && b21_3 && b22_5 && b23_30 && b24_9) {
matched = true;
pattern_id = 2332;
}
if(b0_14 && b1_15 && b2_27 && b3_28) {
matched = true;
pattern_id = 2333;
}
if(b0_14 && b1_15 && b2_27 && b3_28 && b4_30 && b5_23 && b6_49 && b7_27 && b8_3 && b9_36 && b10_14 && b11_2 && b12_13 && b13_2 && b14_3 && b15_12 && b16_9 && b17_8 && b18_47 && b19_6 && b20_4 && b21_8 && b22_13 && b23_14 && b24_11 && b25_13 && b26_12 && b27_9 && b28_6) {
matched = true;
pattern_id = 2334;
}
if(b0_14 && b1_15 && b2_27 && b3_28 && b4_17 && b5_25 && b6_3 && b7_46 && b8_11 && b9_11 && b10_7 && b11_20 && b12_31 && b13_17 && b14_2 && b15_4 && b16_28 && b17_29 && b18_22 && b19_25 && b20_27 && b21_10 && b22_22 && b23_19 && b24_17 && b25_4 && b26_8 && b27_17 && b28_21 && b29_16 && b30_13 && b31_14 && b32_2 && b33_12) {
matched = true;
pattern_id = 2335;
}
if(b0_14 && b1_15 && b2_46 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 2336;
}
if(b0_14 && b1_15 && b2_46 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_25 && b12_6 && b13_8 && b14_27 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 2337;
}
if(b0_14 && b1_15 && b2_46 && b3_28) {
matched = true;
pattern_id = 2338;
}
if(b0_14 && b1_15 && b2_46 && b3_28 && b4_2 && b5_55 && b6_5 && b7_4 && b8_17 && b9_4 && b10_11 && b11_3 && b12_20 && b13_48 && b14_17 && b15_16 && b16_44 && b17_34 && b18_8 && b19_3 && b20_51 && b21_4 && b22_45 && b23_46 && b24_37 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2339;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_24 && b12_6 && b13_2 && b14_11 && b15_4 && b16_20 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2340;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2341;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_22 && b9_4) {
matched = true;
pattern_id = 2342;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 2343;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_36 && b5_32 && b6_12 && b7_40 && b8_27 && b9_13 && b10_21 && b11_11 && b12_6 && b13_2 && b14_27 && b15_4 && b16_21 && b17_1 && b18_3 && b19_3 && b20_12 && b21_4) {
matched = true;
pattern_id = 2344;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_40 && b5_1 && b6_12 && b7_20 && b8_17 && b9_4 && b10_20 && b11_20 && b12_2 && b13_11 && b14_3 && b15_12 && b16_4 && b17_2 && b18_5 && b19_7 && b20_9 && b21_22 && b22_1 && b23_2 && b24_19 && b25_13 && b26_6 && b27_7 && b28_8 && b29_12 && b30_7 && b31_4 && b32_17 && b33_4 && b34_1 && b35_12 && b36_6 && b37_2 && b38_5 && b39_5 && b40_10 && b41_11 && b42_3 && b43_9) {
matched = true;
pattern_id = 2345;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_4 && b5_33 && b6_3 && b7_3 && b8_1 && b9_66 && b10_2 && b11_27 && b12_26 && b13_55 && b14_24 && b15_5 && b16_15 && b17_1 && b18_58 && b19_6 && b20_27 && b21_2 && b22_50 && b23_31 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2346;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_18 && b5_52 && b6_35 && b7_3 && b8_1 && b9_18 && b10_2 && b11_61 && b12_38 && b13_6 && b14_12 && b15_33 && b16_22 && b17_44 && b18_32 && b19_6 && b20_1 && b21_47 && b22_1 && b23_27 && b24_17 && b25_35) {
matched = true;
pattern_id = 2347;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_18 && b5_55 && b6_53 && b7_3 && b8_1 && b9_36 && b10_2 && b11_26 && b12_38 && b13_30 && b14_35 && b15_30 && b16_2 && b17_27 && b18_56 && b19_34 && b20_30 && b21_42 && b22_21 && b23_7 && b24_15 && b25_15 && b26_11 && b27_3 && b28_31 && b29_21 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2348;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_21 && b5_42 && b6_46 && b7_3 && b8_1 && b9_24 && b10_2 && b11_34 && b12_26 && b13_30 && b14_55 && b15_20 && b16_29 && b17_49 && b18_9 && b19_41 && b20_9 && b21_1 && b22_7 && b23_7 && b24_28 && b25_47 && b26_51 && b27_18 && b28_28 && b29_25 && b30_20 && b31_23 && b32_25 && b33_4 && b34_1 && b35_14 && b36_3 && b37_14 && b38_16 && b39_23 && b40_14 && b41_13 && b42_8 && b43_4 && b44_5) {
matched = true;
pattern_id = 2349;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_3 && b5_26 && b6_1 && b7_3 && b8_1 && b9_67 && b10_2 && b11_35 && b12_26 && b13_41 && b14_18 && b15_30 && b16_2 && b17_25 && b18_8 && b19_3 && b20_29 && b21_4 && b22_14 && b23_18 && b24_9 && b25_2 && b26_13 && b27_8 && b28_35 && b29_53 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2350;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_3 && b5_26 && b6_26 && b7_3 && b8_1 && b9_67 && b10_2 && b11_35 && b12_26 && b13_41 && b14_18 && b15_30 && b16_2 && b17_25 && b18_8 && b19_3 && b20_29 && b21_4 && b22_14 && b23_18 && b24_9 && b25_2 && b26_13 && b27_8 && b28_35 && b29_53 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2351;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_3 && b5_26 && b6_26 && b7_3 && b8_1 && b9_8 && b10_2 && b11_28 && b12_26 && b13_50 && b14_21 && b15_41 && b16_8 && b17_44 && b18_11 && b19_9) {
matched = true;
pattern_id = 2352;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_77 && b5_1 && b6_22 && b7_3 && b8_1 && b9_16 && b10_2 && b11_35 && b12_25) {
matched = true;
pattern_id = 2353;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_77 && b5_10 && b6_22 && b7_3 && b8_1 && b9_16 && b10_2 && b11_54 && b12_37 && b13_26 && b14_1 && b15_6 && b16_15 && b17_4 && b18_15 && b19_25) {
matched = true;
pattern_id = 2354;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_59 && b6_57 && b7_3 && b8_1 && b9_71 && b10_2 && b11_34 && b12_60 && b13_22 && b14_51 && b15_41 && b16_2 && b17_8 && b18_1 && b19_24 && b20_9 && b21_21 && b22_34 && b23_44 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2355;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_66 && b10_2 && b11_49 && b12_50 && b13_61 && b14_41 && b15_16 && b16_15 && b17_1 && b18_58 && b19_6 && b20_27 && b21_2 && b22_50 && b23_31 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2356;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_67 && b10_2 && b11_46 && b12_24 && b13_60 && b14_12 && b15_27 && b16_14 && b17_15 && b18_8 && b19_3 && b20_51 && b21_4 && b22_39 && b23_31 && b24_28 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2357;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_67 && b10_2 && b11_47 && b12_17 && b13_16 && b14_25 && b15_35 && b16_22 && b17_33 && b18_8 && b19_3 && b20_14 && b21_4 && b22_18 && b23_19 && b24_22 && b25_35 && b26_3 && b27_37 && b28_19 && b29_45 && b30_17 && b31_28 && b32_20 && b33_34 && b34_23 && b35_20 && b36_3 && b37_4 && b38_3 && b39_7 && b40_1 && b41_45 && b42_3 && b43_4 && b44_3 && b45_4) {
matched = true;
pattern_id = 2358;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_18 && b10_2 && b11_7 && b12_13 && b13_64 && b14_1 && b15_25 && b16_30 && b17_35 && b18_22 && b19_6 && b20_1 && b21_47 && b22_1 && b23_27 && b24_17 && b25_35 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2359;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_18 && b10_2 && b11_23 && b12_5 && b13_62 && b14_55 && b15_31 && b16_24 && b17_33 && b18_15 && b19_6 && b20_1 && b21_47 && b22_1 && b23_27 && b24_17 && b25_35 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2360;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_24 && b10_2 && b11_34 && b12_26 && b13_30 && b14_55 && b15_20 && b16_29 && b17_49 && b18_9 && b19_41 && b20_9 && b21_1 && b22_7 && b23_7 && b24_28 && b25_47 && b26_51 && b27_18 && b28_28 && b29_25 && b30_20 && b31_23 && b32_25 && b33_4 && b34_1 && b35_14 && b36_3 && b37_14 && b38_16 && b39_23 && b40_14 && b41_13 && b42_8 && b43_4 && b44_5) {
matched = true;
pattern_id = 2361;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_24 && b10_2 && b11_48 && b12_38 && b13_43 && b14_21 && b15_5 && b16_24 && b17_64 && b18_10 && b19_35 && b20_9 && b21_1 && b22_21 && b23_7 && b24_20 && b25_36 && b26_33 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2362;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_3 && b10_2 && b11_4 && b12_16 && b13_41 && b14_55 && b15_40 && b16_24 && b17_67 && b18_22 && b19_45 && b20_24 && b21_51 && b22_31 && b23_16 && b24_9 && b25_2 && b26_13 && b27_8 && b28_34 && b29_37 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2363;
}
if(b0_14 && b1_15 && b2_13 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 2364;
}
if(b0_14 && b1_15 && b2_13 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2365;
}
if(b0_14 && b1_15 && b2_13 && b3_28) {
matched = true;
pattern_id = 2366;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_4 && b5_22 && b6_14 && b7_4 && b8_10 && b9_1 && b10_41 && b11_20 && b12_18 && b13_36 && b14_12 && b15_7 && b16_4 && b17_1 && b18_8) {
matched = true;
pattern_id = 2367;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_16 && b5_3 && b6_39 && b7_47 && b8_10 && b9_1 && b10_73 && b11_20 && b12_16 && b13_5 && b14_18 && b15_16 && b16_24 && b17_34 && b18_8 && b19_3 && b20_51 && b21_4 && b22_45 && b23_46 && b24_37 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2368;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_19 && b5_10 && b6_3 && b7_29 && b8_10 && b9_1 && b10_62 && b11_20 && b12_7 && b13_47 && b14_47 && b15_25 && b16_16 && b17_8 && b18_1 && b19_24 && b20_9 && b21_21 && b22_34 && b23_44 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2369;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_15 && b5_26 && b6_20 && b7_2 && b8_10 && b9_1 && b10_62 && b11_20 && b12_16 && b13_47 && b14_25 && b15_3 && b16_2 && b17_8 && b18_1 && b19_24 && b20_9 && b21_2 && b22_19 && b23_28 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2370;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_27 && b5_20 && b6_34 && b7_14 && b8_10 && b9_1 && b10_73 && b11_20 && b12_7 && b13_16 && b14_28 && b15_33 && b16_39 && b17_29 && b18_8 && b19_3 && b20_51 && b21_4 && b22_45 && b23_46 && b24_37 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2371;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_27 && b5_20 && b6_48 && b7_14 && b8_10 && b9_1 && b10_23 && b11_20 && b12_45 && b13_50 && b14_55 && b15_68 && b16_15 && b17_1 && b18_12 && b19_6 && b20_25 && b21_21 && b22_14 && b23_7 && b24_15 && b25_2 && b26_11) {
matched = true;
pattern_id = 2372;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_70 && b5_11 && b6_22 && b7_31 && b8_10 && b9_1 && b10_41 && b11_20 && b12_3 && b13_16 && b14_30 && b15_7 && b16_4 && b17_31 && b18_8 && b19_12 && b20_24 && b21_19 && b22_19 && b23_7 && b24_15 && b25_2 && b26_11) {
matched = true;
pattern_id = 2373;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_60 && b5_11 && b6_10 && b7_31 && b8_10 && b9_1 && b10_62 && b11_20 && b12_3 && b13_36 && b14_54 && b15_35 && b16_16 && b17_8 && b18_1 && b19_16 && b20_9 && b21_27 && b22_20 && b23_51 && b24_17 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2374;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_24 && b5_11 && b6_35 && b7_54 && b8_10 && b9_1 && b10_41 && b11_20 && b12_36 && b13_2 && b14_4 && b15_7 && b16_4 && b17_9 && b18_8 && b19_2 && b20_37) {
matched = true;
pattern_id = 2375;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_17 && b5_6 && b6_56 && b7_9 && b8_10 && b9_1 && b10_3 && b11_20 && b12_20 && b13_32 && b14_2 && b15_1 && b16_4 && b17_8) {
matched = true;
pattern_id = 2376;
}
if(b0_14 && b1_15 && b2_26 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 2377;
}
if(b0_14 && b1_15 && b2_26 && b3_14 && b4_4 && b5_1 && b6_5 && b7_41) {
matched = true;
pattern_id = 2378;
}
if(b0_14 && b1_15 && b2_26 && b3_14 && b4_36 && b5_36 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_19 && b18_3 && b19_26 && b20_7 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2379;
}
if(b0_14 && b1_15 && b2_26 && b3_14 && b4_36 && b5_36 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_7) {
matched = true;
pattern_id = 2380;
}
if(b0_14 && b1_15 && b2_26 && b3_28) {
matched = true;
pattern_id = 2381;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_18 && b5_20 && b6_11 && b7_11 && b8_69 && b9_4 && b10_10 && b11_39 && b12_10 && b13_16 && b14_38 && b15_35 && b16_46 && b17_44 && b18_8 && b19_3 && b20_29 && b21_4 && b22_34 && b23_31 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2382;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_21 && b5_11 && b6_24 && b7_9 && b8_17 && b9_4 && b10_10 && b11_8 && b12_10 && b13_3 && b14_21 && b15_20 && b16_29 && b17_39 && b18_9 && b19_2 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2383;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_21 && b5_29 && b6_55 && b7_45 && b8_46 && b9_4 && b10_10 && b11_39 && b12_10 && b13_5 && b14_4 && b15_35 && b16_8 && b17_36 && b18_8 && b19_3 && b20_29 && b21_4 && b22_27 && b23_16 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2384;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_7 && b5_25 && b6_53 && b7_4 && b8_1 && b9_4 && b10_10 && b11_11 && b12_10 && b13_19 && b14_57 && b15_41 && b16_23 && b17_49 && b18_29 && b19_6 && b20_1 && b21_47 && b22_1 && b23_31 && b24_1 && b25_25 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2385;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_2 && b5_25 && b6_8 && b7_29 && b8_5 && b9_4 && b10_10 && b11_12 && b12_10 && b13_16 && b14_20 && b15_16 && b16_29 && b17_21 && b18_15 && b19_28 && b20_30 && b21_29 && b22_20 && b23_6 && b24_28 && b25_21 && b26_25 && b27_33 && b28_6 && b29_2 && b30_10 && b31_4 && b32_34 && b33_11 && b34_32 && b35_1 && b36_4 && b37_4 && b38_2) {
matched = true;
pattern_id = 2386;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_2 && b5_29 && b6_46 && b7_47 && b8_40 && b9_4 && b10_10 && b11_10 && b12_10 && b13_30 && b14_20 && b15_41 && b16_44 && b17_54 && b18_4 && b19_12 && b20_37 && b21_27 && b22_20 && b23_18 && b24_22 && b25_6 && b26_2 && b27_13 && b28_6 && b29_27 && b30_13 && b31_45 && b32_3 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 2387;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_6 && b5_29 && b6_55 && b7_46 && b8_42 && b9_4 && b10_10 && b11_8 && b12_10 && b13_3 && b14_21 && b15_20 && b16_29 && b17_47 && b18_11 && b19_41 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2388;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_31 && b5_21 && b6_55 && b7_31 && b8_54 && b9_4 && b10_10 && b11_11 && b12_10 && b13_16 && b14_17 && b15_15 && b16_46 && b17_44 && b18_19 && b19_6 && b20_1 && b21_47 && b22_1 && b23_16 && b24_3 && b25_30 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2389;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_53 && b5_16 && b6_59 && b7_35 && b8_6 && b9_4 && b10_10 && b11_17 && b12_10 && b13_30 && b14_21 && b15_20) {
matched = true;
pattern_id = 2390;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_53 && b5_16 && b6_59 && b7_35 && b8_6 && b9_4 && b10_10 && b11_17 && b12_10 && b13_22 && b14_17 && b15_25) {
matched = true;
pattern_id = 2391;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_73 && b5_11 && b6_20 && b7_11 && b8_34 && b9_4 && b10_10 && b11_42 && b12_10 && b13_4 && b14_55 && b15_7 && b16_4 && b17_1 && b18_8) {
matched = true;
pattern_id = 2392;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_14 && b5_11 && b6_10 && b7_8 && b8_12 && b9_9 && b10_2 && b11_1 && b12_1 && b13_26 && b14_41 && b15_30 && b16_44 && b17_47 && b18_11 && b19_41 && b20_9 && b21_1 && b22_21 && b23_7 && b24_20 && b25_36 && b26_33 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2393;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_16 && b5_16 && b6_24 && b7_30 && b8_23 && b9_67 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2394;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_19 && b5_10 && b6_3 && b7_35 && b8_50 && b9_6 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2395;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_19 && b5_2 && b6_68 && b7_67 && b8_25 && b9_24 && b10_2 && b11_1 && b12_1 && b13_26 && b14_51 && b15_42 && b16_22 && b17_47 && b18_11 && b19_41 && b20_9 && b21_1 && b22_10 && b23_7 && b24_32 && b25_44 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2396;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_70 && b5_6 && b6_21 && b7_10 && b8_7 && b9_27 && b10_2 && b11_1 && b12_29 && b13_26 && b14_20 && b15_41 && b16_5 && b17_49 && b18_10 && b19_47 && b20_3 && b21_15 && b22_27 && b23_27 && b24_9 && b25_2 && b26_13 && b27_8 && b28_1 && b29_37 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2397;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_24 && b5_26 && b6_39 && b7_47 && b8_47 && b9_10 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2398;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_3 && b5_42 && b6_19 && b7_14 && b8_2 && b9_10 && b10_2 && b11_1 && b12_13 && b13_26 && b14_5 && b15_44 && b16_5 && b17_4 && b18_46 && b19_12 && b20_2 && b21_36 && b22_1 && b23_2 && b24_16 && b25_6 && b26_32 && b27_39 && b28_6 && b29_2 && b30_9 && b31_4) {
matched = true;
pattern_id = 2399;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_7 && b5_10 && b6_10 && b7_9 && b8_42 && b9_34 && b10_2 && b11_1 && b12_11 && b13_26 && b14_35 && b15_30 && b16_30 && b17_25 && b18_29 && b19_38 && b20_3 && b21_48 && b22_19 && b23_46 && b24_33 && b25_36 && b26_34 && b27_17 && b28_6 && b29_2 && b30_10 && b31_4 && b32_34 && b33_11 && b34_32 && b35_1 && b36_4 && b37_4 && b38_2) {
matched = true;
pattern_id = 2400;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_7 && b5_29 && b6_21 && b7_54 && b8_11 && b9_17) {
matched = true;
pattern_id = 2401;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_17 && b5_16 && b6_36 && b7_21 && b8_2 && b9_25 && b10_2 && b11_1 && b12_31 && b13_26 && b14_20 && b15_25 && b16_41 && b17_8 && b18_1 && b19_26 && b20_9 && b21_35 && b22_30 && b23_7 && b24_15 && b25_2 && b26_11) {
matched = true;
pattern_id = 2402;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_2 && b5_21 && b6_39 && b7_47 && b8_47 && b9_10 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2403;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_6 && b5_11 && b6_71 && b7_31 && b8_16 && b9_49 && b10_2 && b11_1 && b12_54 && b13_26 && b14_36 && b15_30 && b16_23 && b17_59 && b18_15 && b19_12 && b20_2 && b21_4 && b22_2 && b23_23 && b24_9 && b25_4 && b26_25 && b27_19 && b28_6 && b29_2 && b30_9 && b31_4) {
matched = true;
pattern_id = 2404;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_50 && b5_52 && b6_34 && b7_31 && b8_35 && b9_5 && b10_2 && b11_1 && b12_9 && b13_26 && b14_39 && b15_35 && b16_22 && b17_10 && b18_19 && b19_2 && b20_35 && b21_42 && b22_18 && b23_32 && b24_32 && b25_33 && b26_34 && b27_8 && b28_2 && b29_20 && b30_2 && b31_40 && b32_24 && b33_19 && b34_3 && b35_7 && b36_4 && b37_10) {
matched = true;
pattern_id = 2405;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_31 && b5_10 && b6_20 && b7_55 && b8_54 && b9_14 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2406;
}
if(b0_14 && b1_15 && b2_28 && b3_28) {
matched = true;
pattern_id = 2407;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_18 && b5_29 && b6_11 && b7_2 && b8_14 && b9_14 && b10_11) {
matched = true;
pattern_id = 2408;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_51 && b5_16 && b6_38 && b7_39 && b8_42 && b9_17 && b10_30 && b11_20 && b12_2 && b13_68 && b14_2 && b15_30 && b16_16 && b17_29 && b18_11 && b19_42 && b20_41 && b21_10 && b22_1 && b23_2 && b24_16 && b25_6 && b26_22 && b27_1 && b28_6 && b29_2 && b30_9 && b31_4) {
matched = true;
pattern_id = 2409;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_51 && b5_10 && b6_38 && b7_68 && b8_22 && b9_66 && b10_27 && b11_20 && b12_2 && b13_51 && b14_2 && b15_68 && b16_5 && b17_34 && b18_9 && b19_31 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2410;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_19 && b5_16 && b6_38 && b7_31 && b8_2 && b9_50 && b10_50 && b11_57 && b12_26 && b13_4 && b14_41 && b15_7 && b16_4 && b17_7 && b18_8 && b19_31 && b20_17 && b21_38) {
matched = true;
pattern_id = 2411;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_22 && b5_10 && b6_22 && b7_10 && b8_2 && b9_41 && b10_4 && b11_20 && b12_2 && b13_51 && b14_2 && b15_32 && b16_55 && b17_37 && b18_4 && b19_41 && b20_9 && b21_1 && b22_21 && b23_7 && b24_21 && b25_33 && b26_19 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2412;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_24 && b5_11 && b6_55 && b7_46 && b8_14 && b9_71 && b10_73 && b11_20 && b12_2 && b13_64 && b14_2 && b15_18 && b16_55 && b17_49 && b18_20 && b19_12 && b20_30 && b21_4 && b22_2 && b23_23 && b24_9 && b25_36 && b26_34 && b27_40 && b28_6 && b29_2 && b30_9 && b31_4) {
matched = true;
pattern_id = 2413;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_24 && b5_17 && b6_18 && b7_14 && b8_7 && b9_5 && b10_34 && b11_20 && b12_2 && b13_33 && b14_2 && b15_1 && b16_4 && b17_1 && b18_32 && b19_6 && b20_1 && b21_41 && b22_1 && b23_26 && b24_3 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2414;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_3 && b5_11 && b6_22 && b7_33 && b8_1 && b9_1 && b10_3 && b11_20 && b12_2 && b13_11 && b14_2 && b15_33 && b16_44 && b17_21 && b18_8 && b19_3 && b20_29 && b21_4 && b22_39 && b23_37 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2415;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_2 && b5_52 && b6_19 && b7_10 && b8_8 && b9_27 && b10_49 && b11_20 && b12_2 && b13_31 && b14_2 && b15_31 && b16_40 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2416;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_6 && b5_10 && b6_3 && b7_9 && b8_11 && b9_15 && b10_62 && b11_20 && b12_2 && b13_51 && b14_2 && b15_41 && b16_30 && b17_67 && b18_10 && b19_2 && b20_9 && b21_1 && b22_21 && b23_7 && b24_33 && b25_1 && b26_50 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2417;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_11 && b5_6 && b6_10 && b7_7 && b8_11 && b9_6 && b10_12) {
matched = true;
pattern_id = 2418;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_31 && b14_32 && b15_4 && b16_17 && b17_62 && b18_3 && b19_27 && b20_6 && b21_3 && b22_63 && b23_11 && b24_2 && b25_5 && b26_13 && b27_2 && b28_7 && b29_14 && b30_5 && b31_3 && b32_12 && b33_8 && b34_1 && b35_46 && b36_3) {
matched = true;
pattern_id = 2419;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_8 && b14_11 && b15_4 && b16_17 && b17_16 && b18_3 && b19_3 && b20_29 && b21_3 && b22_8 && b23_5 && b24_2 && b25_7 && b26_12 && b27_2 && b28_7 && b29_58 && b30_5 && b31_5 && b32_10 && b33_8 && b34_52 && b35_47 && b36_3) {
matched = true;
pattern_id = 2420;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_12 && b14_32 && b15_4 && b16_48 && b17_19 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_15 && b24_2 && b25_5 && b26_55 && b27_2 && b28_60 && b29_5 && b30_5 && b31_56 && b32_13 && b33_8 && b34_11 && b35_38 && b36_3) {
matched = true;
pattern_id = 2421;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_4 && b5_36 && b6_12 && b7_4 && b8_4 && b9_13 && b10_10 && b11_24 && b12_6 && b13_2 && b14_15 && b15_4 && b16_4 && b17_12 && b18_3 && b19_3 && b20_14 && b21_3 && b22_2 && b23_14 && b24_2 && b25_16 && b26_2 && b27_2 && b28_17 && b29_10 && b30_5 && b31_3 && b32_15 && b33_8 && b34_10 && b35_12 && b36_6 && b37_8 && b38_8 && b39_5 && b40_6 && b41_7 && b42_4 && b43_5 && b44_7 && b45_3 && b46_5 && b47_5 && b48_3) {
matched = true;
pattern_id = 2422;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_40 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_8) {
matched = true;
pattern_id = 2423;
}
if(b0_14 && b1_15 && b2_38 && b3_28) {
matched = true;
pattern_id = 2424;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_48 && b5_23 && b6_1 && b7_18 && b8_3 && b9_18 && b10_10 && b11_2 && b12_2 && b13_8 && b14_2 && b15_26 && b16_15 && b17_1 && b18_25 && b19_1 && b20_16 && b21_1 && b22_13 && b23_2 && b24_10 && b25_6 && b26_20 && b27_8 && b28_2 && b29_5 && b30_5 && b31_17 && b32_7 && b33_8 && b34_1 && b35_10 && b36_3 && b37_12 && b38_2 && b39_4 && b40_11 && b41_5 && b42_7 && b43_4 && b44_5) {
matched = true;
pattern_id = 2425;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_14 && b5_16 && b6_55 && b7_45 && b8_42 && b9_28 && b10_34 && b11_27 && b12_10 && b13_2 && b14_33 && b15_7 && b16_25 && b17_27 && b18_33 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2426;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_16 && b5_11 && b6_11 && b7_31 && b8_41 && b9_34 && b10_9 && b11_28 && b12_10 && b13_2 && b14_33 && b15_7 && b16_54 && b17_44 && b18_64) {
matched = true;
pattern_id = 2427;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_21 && b5_6 && b6_55 && b7_2 && b8_5 && b9_34 && b10_9 && b11_46 && b12_10 && b13_2 && b14_33 && b15_7 && b16_25 && b17_27 && b18_33) {
matched = true;
pattern_id = 2428;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_44 && b5_7 && b6_11 && b7_2 && b8_5 && b9_49 && b10_38 && b11_54 && b12_10 && b13_2 && b14_27 && b15_7 && b16_25 && b17_4 && b18_8 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 2429;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_17 && b5_6 && b6_24 && b7_9 && b8_34 && b9_5 && b10_11 && b11_5 && b12_10 && b13_2 && b14_27 && b15_7 && b16_2 && b17_35 && b18_8 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 2430;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_2 && b5_6 && b6_10 && b7_52 && b8_11 && b9_17 && b10_17 && b11_5 && b12_10 && b13_2 && b14_8 && b15_7 && b16_2 && b17_29 && b18_22 && b19_51 && b20_2 && b21_34 && b22_3 && b23_35 && b24_9 && b25_2 && b26_9 && b27_8 && b28_31 && b29_19 && b30_41 && b31_4 && b32_7 && b33_1 && b34_3) {
matched = true;
pattern_id = 2431;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_6 && b5_21 && b6_35 && b7_45 && b8_9 && b9_17 && b10_28 && b11_26 && b12_10 && b13_2 && b14_33 && b15_7 && b16_22 && b17_29 && b18_9 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2432;
}
if(b0_14 && b1_15 && b2_33 && b3_14 && b4_36 && b5_44 && b6_12 && b7_6 && b8_25 && b9_13 && b10_41 && b11_1 && b12_6 && b13_31 && b14_8 && b15_4 && b16_14 && b17_19 && b18_3 && b19_26 && b20_6 && b21_4) {
matched = true;
pattern_id = 2433;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_18 && b5_52 && b6_46 && b7_54 && b8_5 && b9_19 && b10_5 && b11_34 && b12_4 && b13_26 && b14_1 && b15_6 && b16_15 && b17_4 && b18_15 && b19_25 && b20_9 && b21_1 && b22_2 && b23_7) {
matched = true;
pattern_id = 2434;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_16 && b5_10 && b6_36 && b7_21 && b8_16 && b9_5 && b10_12 && b11_40 && b12_16 && b13_26 && b14_1 && b15_10 && b16_15 && b17_25 && b18_57 && b19_29 && b20_27 && b21_35 && b22_3 && b23_6 && b24_1 && b25_33 && b26_11 && b27_7 && b28_22 && b29_1 && b30_13 && b31_21 && b32_43 && b33_11 && b34_3 && b35_7 && b36_4 && b37_10) {
matched = true;
pattern_id = 2435;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_19 && b5_10 && b6_20 && b7_11 && b8_46 && b9_6 && b10_12 && b11_68 && b12_26 && b13_26 && b14_1 && b15_9 && b16_15 && b17_34 && b18_40 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2436;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_70 && b5_16 && b6_8 && b7_45 && b8_58 && b9_44 && b10_74 && b11_3 && b12_7 && b13_26 && b14_1 && b15_9 && b16_15 && b17_44 && b18_11 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2437;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_24 && b5_11 && b6_35 && b7_45 && b8_5 && b9_11 && b10_32 && b11_54 && b12_17 && b13_26 && b14_1 && b15_6 && b16_15 && b17_4 && b18_15 && b19_25 && b20_9 && b21_1 && b22_2 && b23_7) {
matched = true;
pattern_id = 2438;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_3 && b5_11 && b6_55 && b7_14 && b8_2 && b9_5 && b10_30 && b11_30 && b12_26 && b13_26 && b14_1 && b15_6 && b16_15 && b17_49 && b18_4 && b19_34 && b20_9 && b21_1 && b22_2 && b23_7) {
matched = true;
pattern_id = 2439;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_2 && b5_16 && b6_34 && b7_11 && b8_2 && b9_27 && b10_49 && b11_37 && b12_7 && b13_26 && b14_1 && b15_71 && b16_15 && b17_25 && b18_57 && b19_51 && b20_41 && b21_35 && b22_1 && b23_2 && b24_19 && b25_6 && b26_30 && b27_36 && b28_29 && b29_1 && b30_9 && b31_11 && b32_3) {
matched = true;
pattern_id = 2440;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_6 && b5_16 && b6_46 && b7_9 && b8_8 && b9_6 && b10_12 && b11_37 && b12_18 && b13_26 && b14_1 && b15_73 && b16_15 && b17_36 && b18_15 && b19_39 && b20_43 && b21_4 && b22_2 && b23_21 && b24_9 && b25_42 && b26_27 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2441;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_6 && b5_16 && b6_11 && b7_31 && b8_7 && b9_16 && b10_10 && b11_7 && b12_44 && b13_26 && b14_1 && b15_71 && b16_15 && b17_36 && b18_57 && b19_34 && b20_2 && b21_10 && b22_1 && b23_2 && b24_19 && b25_6 && b26_32 && b27_1 && b28_30 && b29_1 && b30_9 && b31_11 && b32_3) {
matched = true;
pattern_id = 2442;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_11 && b5_26 && b6_7 && b7_55 && b8_14 && b9_14 && b10_34 && b11_6 && b12_37 && b13_26 && b14_1 && b15_9 && b16_15 && b17_18 && b18_23 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2443;
}
if(b0_14 && b1_15 && b2_5 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_8 && b14_16 && b15_4 && b16_4 && b17_31 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_7 && b26_2 && b27_8 && b28_34 && b29_34 && b30_17 && b31_32 && b32_3 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 2444;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_1 && b5_4 && b6_12 && b7_1 && b8_3) {
matched = true;
pattern_id = 2445;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_26 && b5_52 && b6_20) {
matched = true;
pattern_id = 2446;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_20 && b5_47 && b6_11 && b7_11 && b8_47 && b9_4 && b10_41 && b11_22 && b12_6 && b13_31 && b14_1 && b15_7) {
matched = true;
pattern_id = 2447;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_20 && b5_8 && b6_10 && b7_31 && b8_46 && b9_4 && b10_10 && b11_22 && b12_6 && b13_31 && b14_8 && b15_4 && b16_4 && b17_24 && b18_3 && b19_26 && b20_1 && b21_3 && b22_10 && b23_2 && b24_2 && b25_8 && b26_2 && b27_2 && b28_9 && b29_2 && b30_5 && b31_57 && b32_4 && b33_4) {
matched = true;
pattern_id = 2448;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_8 && b5_8 && b6_3 && b7_14 && b8_35 && b9_4 && b10_10 && b11_22 && b12_10 && b13_13 && b14_36 && b15_31 && b16_30 && b17_33) {
matched = true;
pattern_id = 2449;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_8 && b5_8 && b6_3 && b7_14 && b8_35 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7 && b16_31 && b17_34 && b18_22 && b19_31 && b20_31) {
matched = true;
pattern_id = 2450;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_8 && b5_23 && b6_16 && b7_13 && b8_10 && b9_40 && b10_28 && b11_3 && b12_7 && b13_36 && b14_28 && b15_7 && b16_4 && b17_24 && b18_8 && b19_30) {
matched = true;
pattern_id = 2451;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_34 && b5_30) {
matched = true;
pattern_id = 2452;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_10 && b5_8 && b6_3 && b7_51 && b8_46 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 2453;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_58 && b5_6 && b6_48 && b7_10 && b8_8 && b9_5 && b10_4 && b11_20 && b12_31 && b13_17 && b14_2 && b15_4 && b16_3 && b17_29 && b18_29 && b19_6 && b20_51 && b21_28 && b22_1 && b23_39 && b24_12 && b25_6 && b26_9 && b27_32 && b28_6) {
matched = true;
pattern_id = 2454;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_14 && b5_7 && b6_7 && b7_8 && b8_8 && b9_41 && b10_27 && b11_19 && b12_1 && b13_31 && b14_2 && b15_1 && b16_51 && b17_8 && b18_20 && b19_45 && b20_41 && b21_20 && b22_20 && b23_24 && b24_9 && b25_2 && b26_9 && b27_8 && b28_31 && b29_19 && b30_41 && b31_4 && b32_7 && b33_1 && b34_3) {
matched = true;
pattern_id = 2455;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_15 && b5_11 && b6_11 && b7_9 && b8_14 && b9_19 && b10_35 && b11_46 && b12_66 && b13_31 && b14_2 && b15_1 && b16_67 && b17_8 && b18_11 && b19_31 && b20_62 && b21_27 && b22_40 && b23_7 && b24_15 && b25_15 && b26_11 && b27_41 && b28_18 && b29_55 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2456;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_15 && b5_6 && b6_20 && b7_47 && b8_10 && b9_1 && b10_33 && b11_20 && b12_33 && b13_32 && b14_24 && b15_25 && b16_29 && b17_8 && b18_1 && b19_13 && b20_9) {
matched = true;
pattern_id = 2457;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_15 && b5_16 && b6_34 && b7_31 && b8_35 && b9_27 && b10_32 && b11_46 && b12_16 && b13_5 && b14_2 && b15_1 && b16_27 && b17_8 && b18_31 && b19_12 && b20_9 && b21_1 && b22_2 && b23_7) {
matched = true;
pattern_id = 2458;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_44 && b5_51 && b6_3 && b7_63 && b8_27 && b9_57 && b10_27 && b11_69 && b12_7 && b13_16 && b14_2 && b15_1 && b16_67 && b17_8 && b18_30 && b19_12 && b20_30 && b21_1 && b22_15 && b23_7 && b24_15 && b25_15 && b26_11 && b27_3 && b28_31 && b29_21 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2459;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_7 && b5_8 && b6_3 && b7_7 && b8_14 && b9_17 && b10_43 && b11_3 && b12_20 && b13_14 && b14_2 && b15_1 && b16_51 && b17_8 && b18_20 && b19_45 && b20_41 && b21_20 && b22_20 && b23_24 && b24_9 && b25_2 && b26_16 && b27_8 && b28_18 && b29_16 && b30_40 && b31_38 && b32_3 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 2460;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_2 && b5_11 && b6_20 && b7_9 && b8_2 && b9_5 && b10_43 && b11_6 && b12_3 && b13_19 && b14_2 && b15_1 && b16_14 && b17_8 && b18_11 && b19_9 && b20_28 && b21_4 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2461;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_2 && b5_27 && b6_24 && b7_46 && b8_8 && b9_27 && b10_32 && b11_28 && b12_5 && b13_4 && b14_2 && b15_1 && b16_14 && b17_8 && b18_23 && b19_21 && b20_37 && b21_4 && b22_2 && b23_21 && b24_9 && b25_18 && b26_37 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2462;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_2 && b5_10 && b6_39 && b7_9 && b8_6 && b9_50 && b10_49 && b11_6 && b12_26 && b13_19 && b14_2 && b15_1 && b16_14 && b17_8 && b18_11 && b19_9 && b20_28 && b21_4 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2463;
}
if(b0_14 && b1_15 && b2_34 && b3_14 && b4_30 && b5_1 && b6_12 && b7_4 && b8_23 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 2464;
}
if(b0_14 && b1_15 && b2_34 && b3_28) {
matched = true;
pattern_id = 2465;
}
if(b0_14 && b1_15 && b2_34 && b3_28 && b4_49 && b5_23 && b6_1 && b7_18 && b8_3 && b9_18 && b10_10 && b11_2 && b12_2 && b13_34 && b14_2 && b15_10 && b16_15 && b17_1 && b18_25 && b19_1 && b20_16 && b21_1 && b22_13 && b23_2 && b24_13 && b25_6 && b26_7 && b27_8 && b28_2 && b29_5 && b30_5 && b31_17 && b32_7 && b33_8 && b34_1 && b35_11 && b36_3 && b37_13 && b38_2 && b39_4 && b40_11 && b41_5 && b42_7 && b43_4 && b44_5) {
matched = true;
pattern_id = 2466;
}
if(b0_14 && b1_15 && b2_34 && b3_28 && b4_24 && b5_26 && b6_55 && b7_7 && b8_14 && b9_34 && b10_9 && b11_40 && b12_38 && b13_36 && b14_28 && b15_7 && b16_4 && b17_11 && b18_8 && b19_12 && b20_27 && b21_35 && b22_31 && b23_58 && b24_3 && b25_6 && b26_2 && b27_13 && b28_6 && b29_16 && b30_19 && b31_32 && b32_3 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 2467;
}
if(b0_14 && b1_15 && b2_34 && b3_28 && b4_24 && b5_23 && b6_1 && b7_4 && b8_10 && b9_27 && b10_2 && b11_1 && b12_2 && b13_26 && b14_38 && b15_7 && b16_4 && b17_1 && b18_8 && b19_35 && b20_9 && b21_1 && b22_2 && b23_7 && b24_40 && b25_6 && b26_2 && b27_7 && b28_6 && b29_30 && b30_2 && b31_11 && b32_7 && b33_4 && b34_2 && b35_1 && b36_4 && b37_4 && b38_2 && b39_21 && b40_3 && b41_4 && b42_8 && b43_11 && b44_14 && b45_4 && b46_4 && b47_3 && b48_3 && b49_39 && b50_21 && b51_4 && b52_4 && b53_17 && b54_12 && b55_17 && b56_2 && b57_3 && b58_13 && b59_4 && b60_28 && b61_4 && b62_32 && b63_18 && b64_4 && b65_3 && b66_4 && b67_1 && b68_6 && b69_4 && b70_3 && b71_4 && b72_22 && b73_5 && b74_4 && b75_3 && b76_5 && b77_16 && b78_9 && b79_4 && b80_3 && b81_4 && b82_10 && b83_2 && b84_3 && b85_2 && b86_3 && b87_18 && b88_9 && b89_8 && b90_15 && b91_3) {
matched = true;
pattern_id = 2468;
}
if(b0_14 && b1_15 && b2_34 && b3_28 && b4_7 && b5_16 && b6_55 && b7_11 && b8_7 && b9_48 && b10_28 && b11_23 && b12_38 && b13_22 && b14_20 && b15_7 && b16_4 && b17_6 && b18_8 && b19_42 && b20_49 && b21_2 && b22_31 && b23_25 && b24_4 && b25_22 && b26_27 && b27_8 && b28_2 && b29_20 && b30_2 && b31_40 && b32_24 && b33_19 && b34_3 && b35_7 && b36_4 && b37_10) {
matched = true;
pattern_id = 2469;
}
if(b0_14 && b1_15 && b2_32 && b3_14 && b4_30 && b5_35 && b6_12 && b7_33 && b8_21 && b9_13 && b10_27 && b11_12 && b12_6 && b13_33 && b14_14 && b15_4 && b16_67 && b17_24 && b18_3 && b19_16 && b20_6 && b21_3 && b22_60 && b23_14 && b24_2 && b25_43 && b26_2 && b27_2 && b28_51 && b29_10 && b30_5 && b31_1 && b32_5 && b33_8 && b34_49 && b35_13 && b36_6 && b37_11 && b38_13 && b39_5 && b40_11 && b41_6 && b42_4 && b43_30 && b44_2 && b45_3 && b46_29 && b47_4 && b48_2 && b49_5 && b50_18 && b51_2 && b52_28 && b53_4 && b54_2 && b55_33 && b56_30 && b57_2 && b58_12 && b59_30 && b60_2 && b61_29 && b62_12 && b63_2 && b64_23 && b65_24 && b66_4) {
matched = true;
pattern_id = 2470;
}
if(b0_14 && b1_15 && b2_32 && b3_14 && b4_30 && b5_35 && b6_12 && b7_33 && b8_21 && b9_13 && b10_27 && b11_12 && b12_6 && b13_33 && b14_6 && b15_4 && b16_67 && b17_1 && b18_3 && b19_16 && b20_6 && b21_3 && b22_60 && b23_11 && b24_2 && b25_15 && b26_12 && b27_2 && b28_51 && b29_58 && b30_5 && b31_1 && b32_4 && b33_8 && b34_50 && b35_11 && b36_6 && b37_49 && b38_13 && b39_5 && b40_9 && b41_23 && b42_4 && b43_10 && b44_17 && b45_3 && b46_40 && b47_8 && b48_2 && b49_33 && b50_28 && b51_2 && b52_30 && b53_20 && b54_2 && b55_33 && b56_16 && b57_2 && b58_32 && b59_32 && b60_2 && b61_30 && b62_30 && b63_2 && b64_24 && b65_3 && b66_4) {
matched = true;
pattern_id = 2471;
}
if(b0_14 && b1_15 && b2_32 && b3_28 && b4_22 && b5_10 && b6_20 && b7_32 && b8_42 && b9_11 && b10_13 && b11_35 && b12_55 && b13_22 && b14_12 && b15_3 && b16_15 && b17_1 && b18_12 && b19_6 && b20_41 && b21_29 && b22_3 && b23_7 && b24_15 && b25_2 && b26_11) {
matched = true;
pattern_id = 2472;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_23 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 2473;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_12 && b7_4 && b8_45 && b9_13 && b10_10 && b11_22 && b12_10 && b13_71 && b14_28 && b15_30 && b16_39 && b17_29 && b18_60) {
matched = true;
pattern_id = 2474;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_13 && b8_41 && b9_17 && b10_17 && b11_35 && b12_4 && b13_70 && b14_3 && b15_69 && b16_11 && b17_65 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9 && b25_17 && b26_30 && b27_3 && b28_21 && b29_24 && b30_36 && b31_50 && b32_50 && b33_35 && b34_20 && b35_27 && b36_17 && b37_14 && b38_16 && b39_33 && b40_40 && b41_5 && b42_16 && b43_14 && b44_14 && b45_23 && b46_14 && b47_19 && b48_16 && b49_7 && b50_30 && b51_2 && b52_22 && b53_17 && b54_18 && b55_25 && b56_3 && b57_17 && b58_23 && b59_4 && b60_4 && b61_3 && b62_17 && b63_2 && b64_4 && b65_19 && b66_4 && b67_16 && b68_15 && b69_14 && b70_18 && b71_12 && b72_1 && b73_15 && b74_16 && b75_13 && b76_2 && b77_12 && b78_4 && b79_11 && b80_15 && b81_11 && b82_14 && b83_13 && b84_4 && b85_2 && b86_6 && b87_2 && b88_2 && b89_6 && b90_5 && b91_7 && b92_7 && b93_8 && b94_7 && b95_8 && b96_6 && b97_6 && b98_8 && b99_6 && b100_8 && b101_7 && b102_3) {
matched = true;
pattern_id = 2475;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_13 && b8_41 && b9_17 && b10_17 && b11_35 && b12_4 && b13_70 && b14_3 && b15_25 && b16_29 && b17_40 && b18_9 && b19_43 && b20_48 && b21_36 && b22_14 && b23_25 && b24_57 && b25_13 && b26_53 && b27_10 && b28_58 && b29_1 && b30_9 && b31_44 && b32_1 && b33_1 && b34_12 && b35_1 && b36_33 && b37_15 && b38_18 && b39_12 && b40_17 && b41_26 && b42_41 && b43_43 && b44_28 && b45_11 && b46_21 && b47_37 && b48_30 && b49_12 && b50_43 && b51_30 && b52_3 && b53_18 && b54_6 && b55_8 && b56_7 && b57_6 && b58_20 && b59_17 && b60_29 && b61_4 && b62_4 && b63_5 && b64_16 && b65_3 && b66_25 && b67_3 && b68_27 && b69_24 && b70_21 && b71_24 && b72_24 && b73_21 && b74_21 && b75_1 && b76_2 && b77_16 && b78_18 && b79_13 && b80_28 && b81_11 && b82_22 && b83_24 && b84_18 && b85_22 && b86_20 && b87_20 && b88_3 && b89_20 && b90_15 && b91_8 && b92_18 && b93_19 && b94_10 && b95_18 && b96_7 && b97_1 && b98_18 && b99_13 && b100_16 && b101_15 && b102_14 && b103_7 && b104_16 && b105_4 && b106_15 && b107_3 && b108_15 && b109_15 && b110_3 && b111_1 && b112_13 && b113_13 && b114_11 && b115_15 && b116_16 && b117_4 && b118_10 && b119_12 && b120_14 && b121_13 && b122_13 && b123_13 && b124_14 && b125_12 && b126_3 && b127_11 && b128_2 && b129_11 && b130_13 && b131_11 && b132_12 && b133_7 && b134_12 && b135_12 && b136_8 && b137_11 && b138_1 && b139_13 && b140_4 && b141_1 && b142_10 && b143_3 && b144_11 && b145_12 && b146_11 && b147_12 && b148_11 && b149_9 && b150_8 && b151_10 && b152_9 && b153_7 && b154_1 && b155_10 && b156_10 && b157_1 && b158_8 && b159_1 && b160_7 && b161_1 && b162_3 && b163_6 && b164_1 && b165_1 && b166_7 && b167_1 && b168_1 && b169_7 && b170_7) {
matched = true;
pattern_id = 2476;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_61 && b8_2 && b9_5 && b10_4 && b11_69 && b12_29 && b13_53 && b14_17 && b15_41 && b16_44 && b17_66 && b18_3 && b19_58 && b20_3 && b21_51 && b22_27 && b23_25 && b24_8 && b25_22 && b26_4 && b27_11 && b28_45 && b29_2 && b30_5 && b31_49 && b32_55 && b33_16 && b34_37 && b35_25 && b36_26 && b37_38 && b38_22 && b39_7 && b40_9 && b41_2 && b42_3 && b43_2 && b44_39 && b45_4 && b46_8 && b47_6 && b48_3 && b49_22 && b50_27 && b51_17 && b52_19 && b53_30 && b54_22 && b55_30 && b56_15 && b57_2 && b58_27 && b59_22 && b60_2 && b61_23 && b62_10 && b63_22 && b64_3 && b65_13 && b66_10 && b67_3 && b68_5 && b69_19 && b70_4 && b71_19 && b72_17 && b73_19 && b74_3 && b75_16 && b76_16 && b77_3 && b78_4 && b79_1 && b80_19 && b81_13 && b82_18 && b83_19 && b84_14 && b85_13 && b86_10 && b87_14 && b88_3 && b89_14 && b90_2 && b91_11 && b92_12 && b93_14 && b94_11 && b95_12 && b96_5 && b97_12 && b98_3 && b99_9 && b100_12 && b101_3 && b102_11 && b103_2 && b104_10 && b105_2 && b106_11 && b107_10 && b108_10 && b109_10 && b110_10 && b111_9 && b112_10 && b113_9 && b114_6 && b115_11 && b116_10 && b117_8 && b118_7 && b119_2 && b120_10 && b121_9 && b122_7 && b123_2 && b124_9 && b125_9 && b126_1 && b127_9 && b128_1 && b129_1 && b130_10 && b131_2) {
matched = true;
pattern_id = 2477;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_65 && b8_60 && b9_5 && b10_11 && b11_60 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_17 && b24_2 && b25_2 && b26_14 && b27_2 && b28_7 && b29_12 && b30_5 && b31_16 && b32_32 && b33_4 && b34_26) {
matched = true;
pattern_id = 2478;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_35 && b8_12 && b9_49 && b10_49 && b11_34 && b12_39 && b13_43 && b14_25 && b15_3 && b16_68) {
matched = true;
pattern_id = 2479;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_21 && b8_12 && b9_49 && b10_7 && b11_71 && b12_6) {
matched = true;
pattern_id = 2480;
}
if(b0_14 && b1_15 && b2_31 && b3_28 && b4_14 && b5_42 && b6_10 && b7_14 && b8_7 && b9_34 && b10_26 && b11_27 && b12_5 && b13_22 && b14_17 && b15_21 && b16_2 && b17_8 && b18_1 && b19_54 && b20_9 && b21_20 && b22_33 && b23_16 && b24_29 && b25_4 && b26_27 && b27_8 && b28_2 && b29_5 && b30_2 && b31_32 && b32_39 && b33_4 && b34_1 && b35_7 && b36_3) {
matched = true;
pattern_id = 2481;
}
if(b0_14 && b1_15 && b2_31 && b3_28 && b4_50 && b5_20 && b6_35 && b7_52 && b8_5 && b9_14 && b10_11 && b11_46 && b12_25 && b13_31 && b14_1 && b15_27 && b16_4 && b17_8 && b18_1 && b19_59 && b20_9 && b21_2 && b22_45 && b23_43 && b24_4 && b25_18 && b26_11 && b27_7 && b28_20 && b29_1 && b30_17 && b31_23 && b32_38 && b33_4 && b34_1 && b35_7 && b36_3) {
matched = true;
pattern_id = 2482;
}
if(b0_14 && b1_15 && b2_9 && b3_28 && b4_18 && b5_52 && b6_46 && b7_8 && b8_14 && b9_43 && b10_4 && b11_37 && b12_17 && b13_38 && b14_24 && b15_30 && b16_22 && b17_36 && b18_8 && b19_3 && b20_29 && b21_4 && b22_39 && b23_31 && b24_9 && b25_2 && b26_13 && b27_8 && b28_28 && b29_26 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2483;
}
if(b0_14 && b1_15 && b2_9 && b3_28 && b4_16 && b5_28 && b6_70 && b7_7 && b8_27 && b9_15 && b10_11 && b11_68 && b12_33 && b13_8 && b14_16 && b15_44 && b16_55 && b17_49 && b18_8 && b19_3 && b20_22 && b21_4 && b22_39 && b23_25 && b24_17 && b25_42 && b26_36 && b27_24 && b28_34 && b29_34 && b30_3 && b31_32 && b32_3 && b33_1 && b34_13 && b35_1 && b36_1 && b37_21 && b38_21) {
matched = true;
pattern_id = 2484;
}
if(b0_14 && b1_15 && b2_9 && b3_28 && b4_15 && b5_11 && b6_22 && b7_11 && b8_7 && b9_12 && b10_32 && b11_3 && b12_26 && b13_38 && b14_37 && b15_3 && b16_3 && b17_36 && b18_8 && b19_3 && b20_29 && b21_4 && b22_39 && b23_31 && b24_9 && b25_2 && b26_13 && b27_8 && b28_28 && b29_26 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2485;
}
if(b0_14 && b1_15 && b2_9 && b3_28 && b4_2 && b5_51 && b6_8 && b7_8 && b8_11 && b9_44 && b10_17 && b11_30 && b12_5 && b13_53 && b14_20 && b15_41 && b16_44 && b17_29 && b18_8 && b19_3 && b20_29 && b21_4 && b22_34 && b23_31 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2486;
}
if(b0_14 && b1_15 && b2_36 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_33 && b15_7 && b16_2 && b17_21 && b18_15 && b19_48 && b20_8 && b21_20 && b22_31 && b23_28 && b24_22 && b25_21 && b26_29 && b27_4 && b28_21 && b29_35) {
matched = true;
pattern_id = 2487;
}
if(b0_14 && b1_15 && b2_36 && b3_28 && b4_60 && b5_29 && b6_71 && b7_21 && b8_35 && b9_14 && b10_9 && b11_5 && b12_4 && b13_22 && b14_17 && b15_25 && b16_48 && b17_62 && b18_27 && b19_6 && b20_1 && b21_23 && b22_1 && b23_19 && b24_21 && b25_34 && b26_3 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2488;
}
if(b0_14 && b1_15 && b2_36 && b3_28 && b4_6 && b5_7 && b6_7 && b7_11 && b8_16 && b9_27 && b10_38 && b11_3 && b12_32 && b13_43 && b14_35 && b15_15 && b16_30 && b17_35 && b18_22 && b19_6 && b20_1 && b21_47 && b22_1 && b23_16 && b24_3 && b25_30 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2489;
}
if(b0_14 && b1_17 && b2_1 && b3_14 && b4_4 && b5_9 && b6_5) {
matched = true;
pattern_id = 2490;
}
if(b0_14 && b1_17 && b2_1 && b3_14 && b4_30 && b5_28 && b6_12 && b7_33 && b8_27 && b9_13 && b10_27 && b11_17 && b12_6 && b13_14 && b14_13 && b15_4 && b16_7 && b17_19 && b18_3 && b19_18 && b20_18 && b21_3 && b22_15 && b23_15 && b24_2 && b25_16 && b26_14 && b27_2 && b28_17 && b29_11 && b30_5 && b31_3 && b32_16 && b33_8 && b34_10 && b35_11 && b36_6 && b37_8 && b38_7 && b39_5 && b40_6 && b41_6 && b42_4 && b43_5 && b44_6 && b45_3 && b46_5 && b47_4 && b48_3) {
matched = true;
pattern_id = 2491;
}
if(b0_14 && b1_17 && b2_1 && b3_28 && b4_12 && b5_16 && b6_18 && b7_42 && b8_69 && b9_27 && b10_30 && b11_4 && b12_36 && b13_5 && b14_38 && b15_22 && b16_18 && b17_46 && b18_32 && b19_47 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2492;
}
if(b0_14 && b1_17 && b2_1 && b3_28 && b4_6 && b5_8 && b6_8 && b7_55 && b8_36 && b9_49 && b10_43 && b11_47 && b12_26 && b13_22 && b14_4 && b15_3 && b16_3 && b17_37 && b18_4 && b19_21 && b20_9 && b21_1 && b22_21 && b23_7 && b24_33 && b25_1 && b26_50 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2493;
}
if(b0_14 && b1_17 && b2_1 && b3_28 && b4_50 && b5_10 && b6_38 && b7_53 && b8_14 && b9_49 && b10_38 && b11_37 && b12_37 && b13_60 && b14_17 && b15_42 && b16_25 && b17_4 && b18_29 && b19_48 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2494;
}
if(b0_14 && b1_17 && b2_27 && b3_28 && b4_12 && b5_12 && b6_39 && b7_31 && b8_8 && b9_40 && b10_26 && b11_40 && b12_26 && b13_6 && b14_20 && b15_15 && b16_8 && b17_10 && b18_22 && b19_9 && b20_30 && b21_4 && b22_2 && b23_20 && b24_9 && b25_35 && b26_3 && b27_36 && b28_31 && b29_1 && b30_9 && b31_13 && b32_3 && b33_18 && b34_16 && b35_24 && b36_3 && b37_4 && b38_5 && b39_7) {
matched = true;
pattern_id = 2495;
}
if(b0_14 && b1_17 && b2_27 && b3_28 && b4_15 && b5_6 && b6_20 && b7_47 && b8_41 && b9_5 && b10_12 && b11_40 && b12_5 && b13_4 && b14_30 && b15_35 && b16_44 && b17_11 && b18_25 && b19_24 && b20_16 && b21_4 && b22_2 && b23_21 && b24_9 && b25_19 && b26_50 && b27_8 && b28_2 && b29_5 && b30_2 && b31_40 && b32_34 && b33_4 && b34_1 && b35_7 && b36_3) {
matched = true;
pattern_id = 2496;
}
if(b0_14 && b1_17 && b2_46 && b3_28 && b4_3 && b5_11 && b6_11 && b7_14 && b8_5 && b9_45 && b10_50 && b11_37 && b12_46 && b13_27 && b14_25 && b15_35 && b16_30 && b17_49 && b18_56 && b19_4 && b20_5 && b21_23 && b22_1 && b23_2 && b24_19 && b25_6 && b26_30 && b27_36 && b28_29) {
matched = true;
pattern_id = 2497;
}
if(b0_14 && b1_17 && b2_46 && b3_28 && b4_6 && b5_8 && b6_8 && b7_32 && b8_9 && b9_49 && b10_12 && b11_49 && b12_70 && b13_4 && b14_17 && b15_22 && b16_24 && b17_34 && b18_10 && b19_9 && b20_41 && b21_36 && b22_1 && b23_2 && b24_49 && b25_6 && b26_32 && b27_1 && b28_30 && b29_38 && b30_6 && b31_4 && b32_7 && b33_43 && b34_3 && b35_22 && b36_23 && b37_30 && b38_2 && b39_4 && b40_4 && b41_13) {
matched = true;
pattern_id = 2498;
}
if(b0_14 && b1_17 && b2_10 && b3_14 && b4_36 && b5_35 && b6_12 && b7_18 && b8_27 && b9_13 && b10_41 && b11_39 && b12_6 && b13_31 && b14_27 && b15_4 && b16_51 && b17_62 && b18_3 && b19_26 && b20_18 && b21_3 && b22_21 && b23_55 && b24_2 && b25_8 && b26_13 && b27_2 && b28_9 && b29_11 && b30_5 && b31_15 && b32_57 && b33_8 && b34_13 && b35_12 && b36_6 && b37_40 && b38_40 && b39_5 && b40_11 && b41_11 && b42_4 && b43_8 && b44_41 && b45_3 && b46_29 && b47_29 && b48_2 && b49_35 && b50_38 && b51_2 && b52_18 && b53_36 && b54_2 && b55_14 && b56_31 && b57_2 && b58_3 && b59_2 && b60_2 && b61_29 && b62_28 && b63_2 && b64_23 && b65_13 && b66_2 && b67_13 && b68_24 && b69_2 && b70_28 && b71_22 && b72_2) {
matched = true;
pattern_id = 2499;
}
if(b0_14 && b1_17 && b2_10 && b3_14 && b4_8 && b5_1 && b6_12 && b7_33 && b8_32 && b9_13 && b10_33 && b11_11 && b12_6 && b13_14 && b14_33 && b15_4 && b16_17 && b17_1 && b18_3 && b19_18 && b20_6 && b21_3 && b22_17 && b23_22 && b24_2 && b25_16 && b26_9 && b27_2 && b28_10 && b29_2 && b30_5 && b31_3 && b32_5 && b33_8 && b34_12 && b35_16 && b36_6 && b37_8 && b38_14 && b39_5 && b40_7 && b41_4 && b42_4 && b43_5 && b44_10 && b45_3 && b46_7 && b47_10 && b48_3) {
matched = true;
pattern_id = 2500;
}
if(b0_14 && b1_17 && b2_10 && b3_28) {
matched = true;
pattern_id = 2501;
}
if(b0_14 && b1_17 && b2_10 && b3_28 && b4_13 && b5_16 && b6_11 && b7_5 && b8_14 && b9_14 && b10_4 && b11_3 && b12_3 && b13_38 && b14_3 && b15_5 && b16_3 && b17_27 && b18_9 && b19_31 && b20_25 && b21_21 && b22_28) {
matched = true;
pattern_id = 2502;
}
if(b0_14 && b1_17 && b2_26 && b3_14 && b4_4 && b5_44 && b6_12 && b7_33 && b8_62 && b9_13 && b10_27 && b11_8 && b12_6 && b13_2 && b14_8 && b15_4 && b16_4 && b17_15 && b18_3 && b19_18 && b20_54 && b21_3 && b22_2 && b23_21 && b24_2 && b25_50 && b26_55 && b27_2 && b28_46 && b29_49 && b30_5 && b31_46 && b32_57 && b33_8 && b34_6 && b35_47 && b36_6 && b37_40 && b38_40 && b39_5 && b40_4 && b41_11 && b42_4 && b43_4 && b44_10 && b45_3 && b46_39 && b47_10 && b48_2 && b49_34 && b50_37 && b51_2 && b52_18 && b53_35 && b54_3) {
matched = true;
pattern_id = 2503;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2504;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_22 && b9_13 && b10_10 && b11_1 && b12_6 && b13_51 && b14_30 && b15_4 && b16_4 && b17_9 && b18_8) {
matched = true;
pattern_id = 2505;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_22 && b9_4) {
matched = true;
pattern_id = 2506;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_27 && b9_4) {
matched = true;
pattern_id = 2507;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_25 && b9_4) {
matched = true;
pattern_id = 2508;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_5) {
matched = true;
pattern_id = 2509;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2510;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_22 && b9_4) {
matched = true;
pattern_id = 2511;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_27 && b9_4) {
matched = true;
pattern_id = 2512;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_25 && b9_4) {
matched = true;
pattern_id = 2513;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_39 && b6_12 && b7_33 && b8_62 && b9_13 && b10_27 && b11_17 && b12_6 && b13_64 && b14_32 && b15_4 && b16_4 && b17_5 && b18_3 && b19_18 && b20_51 && b21_3 && b22_15 && b23_23 && b24_2 && b25_16 && b26_55 && b27_2 && b28_60 && b29_58 && b30_5 && b31_3 && b32_35 && b33_8 && b34_1 && b35_38 && b36_6 && b37_8 && b38_15 && b39_5 && b40_6 && b41_12 && b42_4 && b43_4 && b44_33 && b45_3 && b46_5 && b47_34 && b48_2 && b49_32 && b50_9 && b51_2 && b52_29 && b53_34 && b54_2 && b55_34 && b56_31 && b57_2 && b58_32 && b59_31 && b60_4) {
matched = true;
pattern_id = 2514;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_39 && b6_12 && b7_33 && b8_62 && b9_13 && b10_27 && b11_17 && b12_6 && b13_64 && b14_32 && b15_4 && b16_4 && b17_5 && b18_3 && b19_18 && b20_51 && b21_3 && b22_15 && b23_23 && b24_2 && b25_16 && b26_55 && b27_2 && b28_60 && b29_58 && b30_5 && b31_3 && b32_35 && b33_8 && b34_1 && b35_38 && b36_6 && b37_8 && b38_15 && b39_5 && b40_6 && b41_12 && b42_4 && b43_4 && b44_33 && b45_3 && b46_5 && b47_34 && b48_2 && b49_32 && b50_9 && b51_2 && b52_29 && b53_34 && b54_3) {
matched = true;
pattern_id = 2515;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2516;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_22 && b9_4) {
matched = true;
pattern_id = 2517;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_27 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_33 && b15_4 && b16_4 && b17_3 && b18_3 && b19_16 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2518;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_27 && b9_4) {
matched = true;
pattern_id = 2519;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_25 && b9_13 && b10_10 && b11_1 && b12_6 && b13_33 && b14_1 && b15_7) {
matched = true;
pattern_id = 2520;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_25 && b9_4) {
matched = true;
pattern_id = 2521;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_30 && b5_33 && b6_12 && b7_17 && b8_19 && b9_13 && b10_45 && b11_19 && b12_6 && b13_10 && b14_9 && b15_4 && b16_20 && b17_15 && b18_8) {
matched = true;
pattern_id = 2522;
}
if(b0_14 && b1_17 && b2_34 && b3_14 && b4_30 && b5_33 && b6_12 && b7_17 && b8_19 && b9_13 && b10_45 && b11_19 && b12_6 && b13_10 && b14_9 && b15_4 && b16_20 && b17_15 && b18_8) {
matched = true;
pattern_id = 2523;
}
if(b0_14 && b1_18 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_31 && b14_7 && b15_4 && b16_6 && b17_5 && b18_3 && b19_16 && b20_15 && b21_3 && b22_6 && b23_20 && b24_9) {
matched = true;
pattern_id = 2524;
}
if(b0_14 && b1_18 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_17 && b14_14 && b15_7) {
matched = true;
pattern_id = 2525;
}
if(b0_14 && b1_18 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_23 && b15_4 && b16_21 && b17_19 && b18_3 && b19_3 && b20_56 && b21_3 && b22_56 && b23_55 && b24_2 && b25_61 && b26_17 && b27_2 && b28_17 && b29_2 && b30_5 && b31_5 && b32_18 && b33_8 && b34_1 && b35_8 && b36_6 && b37_24 && b38_11 && b39_5 && b40_38 && b41_9 && b42_4 && b43_46 && b44_7 && b45_3 && b46_3 && b47_4 && b48_2 && b49_34 && b50_19 && b51_2 && b52_33 && b53_8 && b54_2 && b55_26 && b56_36 && b57_2 && b58_33 && b59_31 && b60_2 && b61_28 && b62_34 && b63_2 && b64_28 && b65_31 && b66_2 && b67_29 && b68_32 && b69_2 && b70_26 && b71_17 && b72_5 && b73_26 && b74_29 && b75_5 && b76_4 && b77_25 && b78_4 && b79_4 && b80_24 && b81_3 && b82_5 && b83_25 && b84_4) {
matched = true;
pattern_id = 2526;
}
if(b0_14 && b1_18 && b2_1 && b3_28 && b4_28 && b5_5 && b6_5 && b7_6 && b8_4 && b9_13 && b10_3 && b11_1 && b12_10) {
matched = true;
pattern_id = 2527;
}
if(b0_14 && b1_18 && b2_27 && b3_14 && b4_36 && b5_19 && b6_12 && b7_18 && b8_1 && b9_4 && b10_51 && b11_10 && b12_29 && b13_23 && b14_43 && b15_12 && b16_63 && b17_2 && b18_2 && b19_36) {
matched = true;
pattern_id = 2528;
}
if(b0_14 && b1_18 && b2_46 && b3_28 && b4_14 && b5_23 && b6_32 && b7_18 && b8_10 && b9_38 && b10_2 && b11_42 && b12_15 && b13_26 && b14_35 && b15_7 && b16_27 && b17_9 && b18_3 && b19_24 && b20_22 && b21_4 && b22_10 && b23_60 && b24_9 && b25_8 && b26_13 && b27_8 && b28_21 && b29_1 && b30_1 && b31_15 && b32_3 && b33_45 && b34_3 && b35_38 && b36_40 && b37_10 && b38_19 && b39_7 && b40_11 && b41_12 && b42_3 && b43_38 && b44_5 && b45_29 && b46_29 && b47_9 && b48_16 && b49_4 && b50_11 && b51_12 && b52_5 && b53_23 && b54_3 && b55_23 && b56_17 && b57_4 && b58_22 && b59_3 && b60_17 && b61_16 && b62_3 && b63_14 && b64_3 && b65_17 && b66_13 && b67_3 && b68_13 && b69_3 && b70_13 && b71_10 && b72_2 && b73_14 && b74_3 && b75_12 && b76_11 && b77_3 && b78_12 && b79_3 && b80_12 && b81_5 && b82_3 && b83_12 && b84_4 && b85_8 && b86_10 && b87_8 && b88_8 && b89_4 && b90_8 && b91_6 && b92_6 && b93_7 && b94_3 && b95_4 && b96_4 && b97_3 && b98_7 && b99_3 && b100_7 && b101_6 && b102_2 && b103_6 && b104_5 && b105_6 && b106_6 && b107_4 && b108_5 && b109_2 && b110_5 && b111_5 && b112_4 && b113_3 && b114_2 && b115_4 && b116_4 && b117_4 && b118_3 && b119_2 && b120_3 && b121_3 && b122_3 && b123_4 && b124_2 && b125_3 && b126_3 && b127_3 && b128_4 && b129_2 && b130_3 && b131_3 && b132_3 && b133_3 && b134_2 && b135_2 && b136_1 && b137_1 && b138_3 && b139_3 && b140_1 && b141_3 && b142_3 && b143_1 && b144_3 && b145_3 && b146_2) {
matched = true;
pattern_id = 2529;
}
if(b0_14 && b1_18 && b2_46 && b3_28 && b4_21 && b5_8 && b6_5 && b7_18 && b8_27 && b9_4 && b10_42 && b11_20 && b12_15 && b13_31 && b14_2 && b15_30 && b16_39 && b17_16 && b18_37 && b19_6 && b20_29 && b21_41 && b22_1 && b23_60 && b24_9 && b25_8 && b26_13 && b27_8 && b28_24 && b29_19 && b30_51 && b31_38 && b32_3 && b33_27 && b34_14 && b35_1 && b36_41 && b37_10 && b38_3 && b39_34 && b40_3 && b41_21 && b42_1 && b43_11 && b44_33 && b45_29 && b46_2) {
matched = true;
pattern_id = 2530;
}
if(b0_14 && b1_18 && b2_10 && b3_28 && b4_21 && b5_16 && b6_20 && b7_10 && b8_7 && b9_27 && b10_35 && b11_3 && b12_19 && b13_49 && b14_34 && b15_33 && b16_2 && b17_34) {
matched = true;
pattern_id = 2531;
}
if(b0_14 && b1_18 && b2_10 && b3_28 && b4_21 && b5_16 && b6_20 && b7_10 && b8_7 && b9_27 && b10_35 && b11_3 && b12_19 && b13_49 && b14_34 && b15_3 && b16_43 && b17_29) {
matched = true;
pattern_id = 2532;
}
if(b0_14 && b1_18 && b2_10 && b3_28 && b4_21 && b5_16 && b6_20 && b7_10 && b8_7 && b9_27 && b10_35 && b11_3 && b12_19 && b13_49 && b14_34 && b15_35 && b16_23 && b17_4) {
matched = true;
pattern_id = 2533;
}
if(b0_14 && b1_18 && b2_10 && b3_28 && b4_22 && b5_16 && b6_24 && b7_9) {
matched = true;
pattern_id = 2534;
}
if(b0_14 && b1_18 && b2_13 && b3_14 && b4_4 && b5_35 && b6_12 && b7_33 && b8_27 && b9_4 && b10_23 && b11_20 && b12_15 && b13_33 && b14_3 && b15_1 && b16_6 && b17_2 && b18_24 && b19_26 && b20_9 && b21_23 && b22_1 && b23_21 && b24_14 && b25_13 && b26_2 && b27_9 && b28_8 && b29_10 && b30_1 && b31_4 && b32_18 && b33_4 && b34_14 && b35_14 && b36_6 && b37_4 && b38_13 && b39_5 && b40_6 && b41_12 && b42_3 && b43_10) {
matched = true;
pattern_id = 2535;
}
if(b0_14 && b1_18 && b2_57 && b3_28 && b4_21 && b5_16 && b6_20 && b7_10 && b8_37 && b9_35 && b10_17 && b11_27 && b12_39 && b13_5 && b14_35 && b15_11 && b16_8 && b17_44 && b18_4 && b19_12 && b20_28 && b21_18 && b22_39 && b23_31 && b24_21 && b25_34) {
matched = true;
pattern_id = 2536;
}
if(b0_14 && b1_18 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_22 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_13 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_3) {
matched = true;
pattern_id = 2537;
}
if(b0_14 && b1_18 && b2_38 && b3_14 && b4_49 && b5_13 && b6_12 && b7_40 && b8_45 && b9_13 && b10_33 && b11_24 && b12_10) {
matched = true;
pattern_id = 2538;
}
if(b0_14 && b1_18 && b2_33 && b3_14 && b4_36 && b5_1 && b6_5 && b7_19 && b8_6 && b9_14 && b10_6 && b11_26 && b12_5 && b13_26 && b14_27 && b15_45 && b16_15) {
matched = true;
pattern_id = 2539;
}
if(b0_14 && b1_18 && b2_33 && b3_14 && b4_45 && b5_32 && b6_12 && b7_18 && b8_17 && b9_4 && b10_32 && b11_20 && b12_31 && b13_17 && b14_2 && b15_6 && b16_48 && b17_15 && b18_1 && b19_6 && b20_51 && b21_39 && b22_1 && b23_27 && b24_9 && b25_15 && b26_18 && b27_8 && b28_33 && b29_50 && b30_46 && b31_4 && b32_15 && b33_42 && b34_3 && b35_16 && b36_36 && b37_40 && b38_5 && b39_7 && b40_9 && b41_2 && b42_3 && b43_15 && b44_5 && b45_27 && b46_7 && b47_9 && b48_4 && b49_19 && b50_21 && b51_12 && b52_16 && b53_3 && b54_5 && b55_15 && b56_6 && b57_3 && b58_14 && b59_3) {
matched = true;
pattern_id = 2540;
}
if(b0_14 && b1_18 && b2_36 && b3_28) {
matched = true;
pattern_id = 2541;
}
if(b0_14 && b1_18 && b2_36 && b3_28 && b4_8 && b5_10 && b6_55 && b7_55 && b8_11 && b9_12 && b10_2 && b11_42 && b12_11 && b13_26 && b14_25 && b15_37 && b16_44) {
matched = true;
pattern_id = 2542;
}
if(b0_14 && b1_37 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_31 && b14_7 && b15_4 && b16_6 && b17_5 && b18_3 && b19_16 && b20_15 && b21_3 && b22_6 && b23_20 && b24_9) {
matched = true;
pattern_id = 2543;
}
if(b0_14 && b1_37 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_8 && b14_16 && b15_7) {
matched = true;
pattern_id = 2544;
}
if(b0_14 && b1_37 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_16 && b15_4 && b16_7 && b17_7 && b18_3 && b19_7 && b20_7 && b21_3 && b22_56 && b23_23 && b24_9) {
matched = true;
pattern_id = 2545;
}
if(b0_14 && b1_37 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_23 && b15_4 && b16_21 && b17_19 && b18_3 && b19_3 && b20_56 && b21_3 && b22_56 && b23_55 && b24_2 && b25_61 && b26_17 && b27_2 && b28_17 && b29_2 && b30_5 && b31_5 && b32_18 && b33_8 && b34_1 && b35_8 && b36_6 && b37_24 && b38_11 && b39_5 && b40_38 && b41_9 && b42_4 && b43_46 && b44_7 && b45_3 && b46_3 && b47_4 && b48_2 && b49_34 && b50_19 && b51_2 && b52_33 && b53_8 && b54_2 && b55_26 && b56_36 && b57_2 && b58_33 && b59_31 && b60_2 && b61_28 && b62_34 && b63_2 && b64_28 && b65_31 && b66_2 && b67_29 && b68_32 && b69_2 && b70_26 && b71_17 && b72_5 && b73_26 && b74_29 && b75_5 && b76_4 && b77_25 && b78_4 && b79_4 && b80_24 && b81_3 && b82_5 && b83_25 && b84_4) {
matched = true;
pattern_id = 2546;
}
if(b0_14 && b1_37 && b2_33 && b3_14 && b4_78 && b5_13 && b6_12 && b7_6 && b8_1 && b9_13 && b10_41 && b11_17 && b12_6 && b13_64 && b14_11 && b15_4 && b16_51 && b17_19 && b18_3 && b19_54 && b20_18 && b21_3 && b22_21 && b23_55 && b24_2 && b25_15 && b26_2 && b27_2 && b28_20 && b29_2 && b30_5 && b31_34 && b32_15 && b33_8 && b34_13 && b35_8 && b36_6 && b37_11 && b38_5 && b39_5 && b40_9 && b41_4 && b42_4 && b43_8 && b44_42 && b45_3 && b46_8 && b47_10 && b48_2 && b49_5 && b50_11 && b51_2 && b52_20 && b53_36 && b54_2 && b55_14 && b56_35 && b57_2 && b58_12 && b59_28 && b60_2 && b61_29 && b62_4 && b63_2 && b64_23 && b65_13 && b66_2 && b67_13 && b68_30 && b69_2 && b70_19 && b71_25 && b72_2) {
matched = true;
pattern_id = 2547;
}
if(b0_14 && b1_37 && b2_5 && b3_14 && b4_45 && b5_19 && b6_12 && b7_6 && b8_4 && b9_13 && b10_41 && b11_22 && b12_6 && b13_11 && b14_10 && b15_4 && b16_14 && b17_24 && b18_3 && b19_24 && b20_22 && b21_3 && b22_21 && b23_10 && b24_2 && b25_2 && b26_2 && b27_2 && b28_20 && b29_13 && b30_5 && b31_13 && b32_16 && b33_8 && b34_13 && b35_13 && b36_6 && b37_11 && b38_11 && b39_5 && b40_9 && b41_10 && b42_4 && b43_8 && b44_8 && b45_3 && b46_8 && b47_8 && b48_2 && b49_5 && b50_4 && b51_3) {
matched = true;
pattern_id = 2548;
}
if(b0_14 && b1_37 && b2_5 && b3_28) {
matched = true;
pattern_id = 2549;
}
if(b0_14 && b1_37 && b2_5 && b3_28 && b4_35) {
matched = true;
pattern_id = 2550;
}
if(b0_14 && b1_37 && b2_5 && b3_28 && b4_51 && b5_52 && b6_8 && b7_7 && b8_2 && b9_4 && b10_10 && b11_22 && b12_10) {
matched = true;
pattern_id = 2551;
}
if(b0_14 && b1_37 && b2_5 && b3_28 && b4_27 && b5_8 && b6_36 && b7_3 && b8_27 && b9_3 && b10_2 && b11_5 && b12_38 && b13_22 && b14_50 && b15_44 && b16_30 && b17_26 && b18_4 && b19_6 && b20_29 && b21_17 && b22_1 && b23_27 && b24_3 && b25_27 && b26_19 && b27_8 && b28_9 && b29_57 && b30_2 && b31_27 && b32_42) {
matched = true;
pattern_id = 2552;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_16 && b15_7) {
matched = true;
pattern_id = 2553;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_58 && b8_11 && b9_11 && b10_7 && b11_6 && b12_55 && b13_16 && b14_3 && b15_66 && b16_35 && b17_2 && b18_6 && b19_44 && b20_1 && b21_4 && b22_2 && b23_1 && b24_2 && b25_2 && b26_18 && b27_8 && b28_57 && b29_34 && b30_15 && b31_32 && b32_51) {
matched = true;
pattern_id = 2554;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_62 && b17_27 && b18_15 && b19_47 && b20_27 && b21_2 && b22_41 && b23_1 && b24_3 && b25_30 && b26_29 && b27_18 && b28_26 && b29_35 && b30_22 && b31_45 && b32_27 && b33_38 && b34_3 && b35_7 && b36_5 && b37_3 && b38_5 && b39_20 && b40_3) {
matched = true;
pattern_id = 2555;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_62 && b17_27 && b18_15 && b19_47 && b20_27 && b21_2 && b22_41 && b23_56 && b24_21 && b25_34 && b26_3 && b27_16 && b28_48 && b29_3 && b30_24 && b31_4 && b32_7 && b33_42 && b34_5 && b35_7 && b36_33 && b37_10) {
matched = true;
pattern_id = 2556;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_17 && b17_27 && b18_29 && b19_34 && b20_25 && b21_21 && b22_6 && b23_31 && b24_1 && b25_35 && b26_26 && b27_42 && b28_18 && b29_24 && b30_2 && b31_11 && b32_32 && b33_8 && b34_1 && b35_13 && b36_3) {
matched = true;
pattern_id = 2557;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_28 && b17_27 && b18_29 && b19_34 && b20_24 && b21_15 && b22_52 && b23_57 && b24_3 && b25_19 && b26_25 && b27_18 && b28_25 && b29_25 && b30_22 && b31_45 && b32_27 && b33_38 && b34_3 && b35_7 && b36_5 && b37_3 && b38_5 && b39_20 && b40_3) {
matched = true;
pattern_id = 2558;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_28 && b17_27 && b18_29 && b19_34 && b20_24 && b21_15 && b22_32 && b23_18 && b24_20 && b25_33 && b26_35 && b27_21 && b28_30 && b29_23 && b30_45 && b31_29 && b32_31 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7) {
matched = true;
pattern_id = 2559;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_29 && b17_40 && b18_4 && b19_44 && b20_2 && b21_44 && b22_19 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 2560;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_7 && b8_54 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 2561;
}
if(b0_14 && b1_37 && b2_34 && b3_28) {
matched = true;
pattern_id = 2562;
}
if(b0_14 && b1_37 && b2_34 && b3_28 && b4_1 && b5_68 && b6_29 && b7_64 && b8_52 && b9_13 && b10_73 && b11_57 && b12_2 && b13_26 && b14_33 && b15_62 && b16_15 && b17_2 && b18_61 && b19_22 && b20_41 && b21_20 && b22_45 && b23_36 && b24_24 && b25_13 && b26_49 && b27_52 && b28_8 && b29_49 && b30_22 && b31_3 && b32_46 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7 && b40_8 && b41_24 && b42_31 && b43_23 && b44_32 && b45_22 && b46_30 && b47_16 && b48_17 && b49_23 && b50_26 && b51_3 && b52_4 && b53_2 && b54_2 && b55_4 && b56_16 && b57_4) {
matched = true;
pattern_id = 2563;
}
if(b0_14 && b1_37 && b2_34 && b3_28 && b4_1 && b5_3 && b6_35 && b7_54 && b8_5 && b9_11 && b10_28 && b11_26 && b12_5 && b13_20) {
matched = true;
pattern_id = 2564;
}
if(b0_14 && b1_37 && b2_34 && b3_28 && b4_1 && b5_20 && b6_8 && b7_39 && b8_5 && b9_29 && b10_2 && b11_42 && b12_15 && b13_26 && b14_20 && b15_31 && b16_45 && b17_35 && b18_10 && b19_51 && b20_3 && b21_4 && b22_10 && b23_21 && b24_2 && b25_15 && b26_17 && b27_8 && b28_8 && b29_22 && b30_13 && b31_22 && b32_25 && b33_35 && b34_22 && b35_24 && b36_23 && b37_44 && b38_2 && b39_34 && b40_11 && b41_13 && b42_35 && b43_37 && b44_5 && b45_33 && b46_6 && b47_9) {
matched = true;
pattern_id = 2565;
}
if(b0_14 && b1_37 && b2_32 && b3_28 && b4_24 && b5_6 && b6_11 && b7_2 && b8_14 && b9_40 && b10_71 && b11_46 && b12_7 && b13_5 && b14_2 && b15_6 && b16_20 && b17_8 && b18_24 && b19_3 && b20_24 && b21_61 && b22_18 && b23_2 && b24_19 && b25_2 && b26_59 && b27_6 && b28_24 && b29_61 && b30_14 && b31_50 && b32_8 && b33_53 && b34_24 && b35_12 && b36_45 && b37_36 && b38_1 && b39_12 && b40_24 && b41_43 && b42_8 && b43_4 && b44_4 && b45_11 && b46_38 && b47_29 && b48_20 && b49_35 && b50_7 && b51_4 && b52_33 && b53_24 && b54_3 && b55_14 && b56_34 && b57_2 && b58_3 && b59_7 && b60_4 && b61_32 && b62_25 && b63_11 && b64_26 && b65_32 && b66_16 && b67_8 && b68_28 && b69_16 && b70_21 && b71_4 && b72_21 && b73_26 && b74_3) {
matched = true;
pattern_id = 2566;
}
if(b0_14 && b1_37 && b2_9 && b3_14 && b4_4 && b5_1 && b6_5 && b7_10 && b8_10 && b9_1 && b10_10 && b11_20 && b12_18 && b13_26 && b14_1 && b15_1 && b16_15 && b17_21 && b18_8 && b19_3 && b20_1 && b21_4 && b22_45 && b23_7 && b24_15 && b25_2 && b26_8 && b27_29 && b28_2 && b29_7 && b30_9 && b31_11 && b32_3 && b33_18 && b34_3 && b35_7 && b36_4 && b37_10 && b38_38 && b39_7 && b40_4 && b41_4 && b42_3 && b43_14 && b44_5 && b45_5 && b46_4 && b47_16 && b48_26 && b49_15 && b50_12 && b51_4 && b52_4 && b53_17 && b54_27 && b55_17 && b56_2 && b57_3 && b58_9 && b59_1 && b60_4 && b61_3 && b62_4 && b63_18 && b64_20 && b65_5 && b66_3 && b67_4 && b68_6 && b69_18 && b70_5 && b71_3 && b72_3 && b73_5 && b74_9 && b75_4 && b76_3 && b77_7 && b78_9) {
matched = true;
pattern_id = 2567;
}
if(b0_14 && b1_23 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_23 && b15_4 && b16_21 && b17_19 && b18_3 && b19_3 && b20_56 && b21_3 && b22_56 && b23_55 && b24_2 && b25_61 && b26_17 && b27_2 && b28_17 && b29_2 && b30_5 && b31_5 && b32_18 && b33_8 && b34_1 && b35_8 && b36_6 && b37_24 && b38_11 && b39_5 && b40_38 && b41_9 && b42_4 && b43_46 && b44_7 && b45_3 && b46_3 && b47_4 && b48_2 && b49_34 && b50_19 && b51_2 && b52_33 && b53_8 && b54_2 && b55_26 && b56_36 && b57_2 && b58_33 && b59_31 && b60_2 && b61_28 && b62_34 && b63_2 && b64_28 && b65_31 && b66_2 && b67_29 && b68_32 && b69_2 && b70_26 && b71_17 && b72_5 && b73_26 && b74_29 && b75_5 && b76_4 && b77_25 && b78_4 && b79_4 && b80_24 && b81_3 && b82_5 && b83_25 && b84_4) {
matched = true;
pattern_id = 2568;
}
if(b0_14 && b1_23 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 2569;
}
if(b0_14 && b1_23 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_8 && b14_33 && b15_7) {
matched = true;
pattern_id = 2570;
}
if(b0_14 && b1_23 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_16 && b15_7) {
matched = true;
pattern_id = 2571;
}
if(b0_14 && b1_23 && b2_10 && b3_14 && b4_42 && b5_33 && b6_12 && b7_26 && b8_30 && b9_13 && b10_23 && b11_8 && b12_6 && b13_33 && b14_27 && b15_4 && b16_51 && b17_62 && b18_3 && b19_16 && b20_19 && b21_3 && b22_60 && b23_15 && b24_2 && b25_60 && b26_9 && b27_2 && b28_22 && b29_58 && b30_5 && b31_1 && b32_57 && b33_8 && b34_50 && b35_47 && b36_6 && b37_49 && b38_13 && b39_5 && b40_48 && b41_47 && b42_4 && b43_10 && b44_41 && b45_3 && b46_38 && b47_5 && b48_2 && b49_33 && b50_9 && b51_2 && b52_30 && b53_36 && b54_2 && b55_34 && b56_31 && b57_2 && b58_32 && b59_31 && b60_2 && b61_30 && b62_29 && b63_2 && b64_21 && b65_27 && b66_2 && b67_23 && b68_25 && b69_2 && b70_29 && b71_21 && b72_5 && b73_22 && b74_8 && b75_5 && b76_21 && b77_21 && b78_4 && b79_18 && b80_23 && b81_3 && b82_20 && b83_20 && b84_2 && b85_17 && b86_17 && b87_2 && b88_16 && b89_16 && b90_2 && b91_14 && b92_14 && b93_2 && b94_14 && b95_13 && b96_3) {
matched = true;
pattern_id = 2572;
}
if(b0_14 && b1_23 && b2_10 && b3_14 && b4_42 && b5_33 && b6_12 && b7_26 && b8_30 && b9_13 && b10_23 && b11_8 && b12_6 && b13_33 && b14_16 && b15_4 && b16_51 && b17_62 && b18_3 && b19_16 && b20_19 && b21_3 && b22_60 && b23_15 && b24_2 && b25_60 && b26_9 && b27_2 && b28_22 && b29_58 && b30_5 && b31_1 && b32_57 && b33_8 && b34_50 && b35_47 && b36_6 && b37_49 && b38_8 && b39_5 && b40_48 && b41_47 && b42_4 && b43_10 && b44_41 && b45_3 && b46_38 && b47_5 && b48_3) {
matched = true;
pattern_id = 2573;
}
if(b0_14 && b1_23 && b2_32 && b3_14 && b4_42 && b5_39 && b6_12 && b7_26 && b8_27 && b9_13 && b10_21 && b11_1 && b12_6 && b13_68 && b14_30 && b15_4 && b16_17 && b17_9 && b18_3 && b19_13 && b20_12 && b21_3 && b22_49 && b23_14 && b24_9) {
matched = true;
pattern_id = 2574;
}
if(b0_14 && b1_23 && b2_32 && b3_14 && b4_42 && b5_31 && b6_5) {
matched = true;
pattern_id = 2575;
}
if(b0_14 && b1_23 && b2_9 && b3_14 && b4_4 && b5_35 && b6_12 && b7_26 && b8_27 && b9_13 && b10_10 && b11_8 && b12_6 && b13_31 && b14_32 && b15_7) {
matched = true;
pattern_id = 2576;
}
if(b0_14 && b1_23 && b2_36 && b3_14 && b4_47 && b5_1 && b6_12 && b7_26 && b8_32 && b9_13 && b10_23 && b11_24 && b12_6 && b13_11 && b14_6 && b15_4 && b16_67 && b17_62 && b18_3 && b19_16 && b20_15 && b21_3 && b22_60 && b23_11 && b24_2 && b25_60 && b26_12 && b27_2 && b28_20 && b29_12 && b30_5 && b31_1 && b32_32 && b33_8 && b34_49 && b35_13 && b36_6 && b37_49 && b38_48 && b39_5 && b40_47 && b41_10 && b42_4 && b43_45 && b44_8 && b45_3 && b46_38 && b47_35 && b48_2 && b49_33 && b50_36 && b51_2 && b52_13 && b53_4 && b54_2 && b55_21 && b56_32 && b57_4) {
matched = true;
pattern_id = 2577;
}
if(b0_14 && b1_51 && b2_13 && b3_14 && b4_36 && b5_1 && b6_5) {
matched = true;
pattern_id = 2578;
}
if(b0_14 && b1_51 && b2_26 && b3_14 && b4_4 && b5_13 && b6_12 && b7_4 && b8_4 && b9_4) {
matched = true;
pattern_id = 2579;
}
if(b0_14 && b1_51 && b2_34 && b3_14 && b4_36 && b5_33 && b6_5 && b7_47 && b8_42 && b9_14 && b10_11 && b11_3 && b12_10 && b13_31 && b14_32 && b15_4 && b16_27 && b17_14 && b18_3 && b19_26 && b20_19 && b21_4 && b22_54 && b23_16 && b24_32 && b25_6 && b26_13 && b27_38 && b28_8 && b29_49 && b30_44 && b31_10 && b32_15 && b33_41 && b34_3) {
matched = true;
pattern_id = 2580;
}
if(b0_14 && b1_51 && b2_32 && b3_28 && b4_26 && b5_40 && b6_2 && b7_3 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_15) {
matched = true;
pattern_id = 2581;
}
if(b0_14 && b1_51 && b2_32 && b3_28 && b4_26 && b5_40 && b6_23 && b7_3 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_15) {
matched = true;
pattern_id = 2582;
}
if(b0_14 && b1_51 && b2_32 && b3_28 && b4_2 && b5_6 && b6_36 && b7_21 && b8_8 && b9_5 && b10_2 && b11_39 && b12_51 && b13_26) {
matched = true;
pattern_id = 2583;
}
if(b0_14 && b1_51 && b2_31 && b3_14 && b4_4 && b5_1 && b6_12 && b7_18 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10 && b13_3 && b14_2 && b15_1 && b16_4 && b17_8 && b18_10 && b19_6 && b20_1 && b21_1 && b22_1 && b23_50 && b24_9 && b25_2 && b26_2 && b27_8 && b28_18 && b29_1 && b30_9 && b31_11 && b32_3 && b33_25 && b34_3 && b35_7 && b36_4 && b37_10 && b38_47 && b39_7 && b40_4 && b41_4 && b42_3) {
matched = true;
pattern_id = 2584;
}
if(b0_14 && b1_80 && b2_1 && b3_14 && b4_34 && b5_32 && b6_12 && b7_6 && b8_30 && b9_13 && b10_41 && b11_8 && b12_6 && b13_11 && b14_32 && b15_4 && b16_14 && b17_62 && b18_3 && b19_24 && b20_19 && b21_3 && b22_21 && b23_15 && b24_9) {
matched = true;
pattern_id = 2585;
}
if(b0_14 && b1_80 && b2_27 && b3_14 && b4_78 && b5_38 && b6_12 && b7_6 && b8_20 && b9_13 && b10_73 && b11_42 && b12_6 && b13_64 && b14_11 && b15_4 && b16_14 && b17_31 && b18_3 && b19_54 && b20_54 && b21_3 && b22_21 && b23_2 && b24_2 && b25_50 && b26_21 && b27_2 && b28_20 && b29_49 && b30_5 && b31_13 && b32_10 && b33_8 && b34_13 && b35_7 && b36_6 && b37_11 && b38_5 && b39_5 && b40_9 && b41_4 && b42_4 && b43_8 && b44_42 && b45_3 && b46_8 && b47_10 && b48_2 && b49_5 && b50_11 && b51_2 && b52_20 && b53_36 && b54_2 && b55_14 && b56_35 && b57_2 && b58_12 && b59_28 && b60_2 && b61_29 && b62_4 && b63_2 && b64_23 && b65_13 && b66_2 && b67_13 && b68_31 && b69_2 && b70_19 && b71_22 && b72_2) {
matched = true;
pattern_id = 2586;
}
if(b0_14 && b1_80 && b2_26 && b3_14 && b4_34 && b5_32 && b6_12 && b7_6 && b8_30 && b9_13 && b10_41 && b11_8 && b12_6 && b13_11 && b14_32 && b15_4 && b16_14 && b17_62 && b18_3 && b19_24 && b20_19 && b21_3 && b22_21 && b23_15 && b24_9) {
matched = true;
pattern_id = 2587;
}
if(b0_14 && b1_38 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_67 && b8_52 && b9_13 && b10_10 && b11_1 && b12_6 && b13_64 && b14_7 && b15_4 && b16_4 && b17_1 && b18_3 && b19_54 && b20_29 && b21_3 && b22_2 && b23_2 && b24_2 && b25_15 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_46 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_24 && b38_8 && b39_5 && b40_4 && b41_4 && b42_4 && b43_36 && b44_8 && b45_3 && b46_4 && b47_3 && b48_3) {
matched = true;
pattern_id = 2588;
}
if(b0_14 && b1_38 && b2_5 && b3_14 && b4_25 && b5_41 && b6_12 && b7_49 && b8_24 && b9_13 && b10_14 && b11_10 && b12_10) {
matched = true;
pattern_id = 2589;
}
if(b0_14 && b1_38 && b2_34 && b3_14 && b4_4 && b5_39 && b6_12 && b7_18 && b8_4 && b9_13 && b10_3 && b11_22 && b12_10) {
matched = true;
pattern_id = 2590;
}
if(b0_14 && b1_38 && b2_34 && b3_14 && b4_36 && b5_44 && b6_5 && b7_11 && b8_47 && b9_4 && b10_3 && b11_42 && b12_6 && b13_11 && b14_10 && b15_7) {
matched = true;
pattern_id = 2591;
}
if(b0_14 && b1_38 && b2_34 && b3_14 && b4_47 && b5_31 && b6_5 && b7_8 && b8_35 && b9_53 && b10_5 && b11_27) {
matched = true;
pattern_id = 2592;
}
if(b0_14 && b1_38 && b2_34 && b3_14 && b4_47 && b5_31 && b6_5 && b7_8 && b8_35 && b9_4 && b10_10 && b11_9 && b12_6 && b13_11 && b14_15 && b15_7) {
matched = true;
pattern_id = 2593;
}
if(b0_14 && b1_38 && b2_32 && b3_14 && b4_38 && b5_31 && b6_5 && b7_19 && b8_44 && b9_1 && b10_27 && b11_20 && b12_54 && b13_15 && b14_2 && b15_11 && b16_31 && b17_1 && b18_25 && b19_6 && b20_19 && b21_45 && b22_1 && b23_30 && b24_55 && b25_2 && b26_9 && b27_8 && b28_46 && b29_6 && b30_2) {
matched = true;
pattern_id = 2594;
}
if(b0_14 && b1_38 && b2_32 && b3_28) {
matched = true;
pattern_id = 2595;
}
if(b0_14 && b1_38 && b2_32 && b3_28 && b4_19 && b5_6 && b6_5 && b7_24 && b8_32 && b9_4 && b10_13 && b11_20 && b12_54 && b13_15 && b14_2 && b15_39 && b16_31 && b17_8 && b18_27 && b19_27 && b20_9 && b21_40 && b22_1 && b23_15 && b24_12 && b25_6) {
matched = true;
pattern_id = 2596;
}
if(b0_14 && b1_38 && b2_36 && b3_14 && b4_29 && b5_35 && b6_12 && b7_20 && b8_24 && b9_4 && b10_47 && b11_20 && b12_54 && b13_7 && b14_3 && b15_45 && b16_6 && b17_2 && b18_5 && b19_15 && b20_9 && b21_44 && b22_1 && b23_15 && b24_11 && b25_13 && b26_12 && b27_9 && b28_8 && b29_12 && b30_30 && b31_4 && b32_33 && b33_4 && b34_6 && b35_15 && b36_6 && b37_7 && b38_13 && b39_5 && b40_10 && b41_2 && b42_3 && b43_18) {
matched = true;
pattern_id = 2597;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_30 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_15 && b27_8 && b28_14 && b29_1 && b30_9 && b31_11 && b32_1 && b33_1 && b34_10 && b35_5 && b36_4 && b37_6 && b38_2) {
matched = true;
pattern_id = 2598;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5) {
matched = true;
pattern_id = 2599;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_4 && b5_44 && b6_5) {
matched = true;
pattern_id = 2600;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_4 && b5_33 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_32 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_20 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_7) {
matched = true;
pattern_id = 2601;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_30 && b5_31 && b6_5 && b7_48 && b8_10 && b9_15 && b10_27 && b11_2 && b12_13 && b13_2 && b14_3 && b15_27 && b16_17 && b17_8 && b18_26 && b19_6 && b20_5 && b21_9 && b22_13 && b23_13 && b24_15 && b25_13 && b26_15 && b27_12 && b28_6 && b29_17 && b30_2 && b31_3 && b32_8 && b33_8 && b34_11 && b35_7 && b36_6 && b37_8 && b38_7 && b39_7 && b40_12 && b41_13 && b42_5 && b43_5 && b44_5) {
matched = true;
pattern_id = 2602;
}
if(b0_14 && b1_25 && b2_27 && b3_14 && b4_25 && b5_1 && b6_5) {
matched = true;
pattern_id = 2603;
}
if(b0_14 && b1_25 && b2_46 && b3_14 && b4_30 && b5_1 && b6_5 && b7_1 && b8_10 && b9_15 && b10_44 && b11_2 && b12_34 && b13_14 && b14_3 && b15_8 && b16_4 && b17_8 && b18_3 && b19_6 && b20_1 && b21_6 && b22_1) {
matched = true;
pattern_id = 2604;
}
if(b0_14 && b1_25 && b2_46 && b3_14 && b4_29 && b5_13 && b6_12 && b7_22 && b8_52 && b9_13 && b10_14 && b11_25 && b12_6 && b13_12 && b14_33 && b15_4 && b16_17 && b17_9 && b18_3 && b19_27 && b20_22 && b21_3 && b22_6 && b23_55 && b24_2 && b25_5 && b26_14 && b27_2 && b28_10 && b29_8 && b30_5 && b31_44 && b32_12 && b33_8 && b34_11 && b35_38 && b36_6 && b37_7 && b38_10 && b39_5 && b40_10 && b41_40 && b42_4 && b43_39 && b44_6 && b45_3 && b46_35 && b47_34 && b48_2 && b49_28 && b50_9 && b51_2 && b52_2 && b53_13 && b54_2 && b55_7 && b56_16 && b57_2 && b58_33 && b59_33 && b60_2 && b61_2 && b62_28 && b63_2 && b64_2 && b65_28 && b66_2 && b67_24 && b68_24 && b69_2 && b70_26 && b71_14 && b72_5 && b73_23 && b74_25 && b75_5 && b76_22 && b77_22 && b78_4 && b79_5 && b80_24 && b81_3 && b82_12 && b83_21 && b84_2 && b85_18 && b86_18 && b87_2 && b88_17 && b89_17 && b90_2 && b91_13 && b92_15 && b93_2 && b94_15 && b95_14 && b96_2 && b97_13 && b98_14 && b99_2 && b100_14 && b101_13 && b102_3 && b103_12 && b104_12 && b105_2 && b106_4 && b107_11 && b108_1 && b109_12 && b110_12 && b111_1 && b112_1 && b113_2 && b114_2) {
matched = true;
pattern_id = 2605;
}
if(b0_14 && b1_25 && b2_26 && b3_14 && b4_30 && b5_38 && b6_5 && b7_72 && b8_10 && b9_24 && b10_45 && b11_2 && b12_29 && b13_31 && b14_2) {
matched = true;
pattern_id = 2606;
}
if(b0_14 && b1_25 && b2_26 && b3_14 && b4_30 && b5_36 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_31 && b14_16 && b15_4 && b16_4 && b17_31 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2607;
}
if(b0_14 && b1_25 && b2_26 && b3_14 && b4_25 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2608;
}
if(b0_14 && b1_25 && b2_57 && b3_14 && b4_30 && b5_36 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_13 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2609;
}
if(b0_14 && b1_25 && b2_38 && b3_14 && b4_4 && b5_13 && b6_5 && b7_1 && b8_3 && b9_13 && b10_1 && b11_2 && b12_6 && b13_1 && b14_3 && b15_4 && b16_1 && b17_2 && b18_3 && b19_1 && b20_8) {
matched = true;
pattern_id = 2610;
}
if(b0_14 && b1_25 && b2_33 && b3_14 && b4_29 && b5_33 && b6_12 && b7_18 && b8_19 && b9_13 && b10_15 && b11_8 && b12_6 && b13_8 && b14_9 && b15_4 && b16_6 && b17_7 && b18_3 && b19_7 && b20_7 && b21_3 && b22_6 && b23_5 && b24_2 && b25_7 && b26_7 && b27_2 && b28_7 && b29_5 && b30_5 && b31_5 && b32_5 && b33_4 && b34_4 && b35_1 && b36_2 && b37_2 && b38_2) {
matched = true;
pattern_id = 2611;
}
if(b0_14 && b1_25 && b2_33 && b3_28 && b4_10 && b5_63 && b6_44 && b7_3 && b8_1 && b9_3 && b10_1 && b11_1 && b12_29 && b13_1 && b14_30 && b15_24 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 2612;
}
if(b0_14 && b1_25 && b2_5 && b3_14 && b4_30 && b5_1 && b6_12 && b7_40 && b8_1 && b9_13 && b10_15 && b11_42 && b12_6 && b13_11 && b14_10 && b15_4 && b16_9 && b17_1 && b18_3 && b19_5 && b20_29 && b21_3 && b22_44 && b23_23 && b24_2 && b25_7 && b26_14 && b27_2 && b28_17 && b29_2 && b30_2) {
matched = true;
pattern_id = 2613;
}
if(b0_14 && b1_25 && b2_5 && b3_14 && b4_30 && b5_1 && b6_12 && b7_40 && b8_1 && b9_13 && b10_15 && b11_42 && b12_6 && b13_33 && b14_23 && b15_4 && b16_9 && b17_1 && b18_3 && b19_5 && b20_29 && b21_3 && b22_44 && b23_5 && b24_2 && b25_7 && b26_14 && b27_2 && b28_17 && b29_2 && b30_2) {
matched = true;
pattern_id = 2614;
}
if(b0_14 && b1_25 && b2_5 && b3_14 && b4_30 && b5_1 && b6_12 && b7_40 && b8_1 && b9_13 && b10_15 && b11_42 && b12_6 && b13_64 && b14_32 && b15_4 && b16_9 && b17_1 && b18_3 && b19_5 && b20_29 && b21_3 && b22_10 && b23_20 && b24_2 && b25_7 && b26_14 && b27_2 && b28_17 && b29_2 && b30_2) {
matched = true;
pattern_id = 2615;
}
if(b0_14 && b1_25 && b2_5 && b3_14 && b4_30 && b5_1 && b6_12 && b7_40 && b8_1 && b9_13 && b10_45 && b11_22 && b12_6 && b13_64 && b14_27 && b15_4 && b16_9 && b17_1 && b18_3 && b19_5 && b20_29 && b21_3 && b22_47 && b23_20 && b24_2 && b25_7 && b26_14 && b27_2 && b28_17 && b29_2 && b30_2) {
matched = true;
pattern_id = 2616;
}
if(b0_14 && b1_29 && b2_1 && b3_14 && b4_30 && b5_19 && b6_12 && b7_19 && b8_1 && b9_13 && b10_10 && b11_12 && b12_6 && b13_9 && b14_1 && b15_4 && b16_4 && b17_9 && b18_8 && b19_1 && b20_9 && b21_1 && b22_8 && b23_8 && b24_7 && b25_8 && b26_8 && b27_7 && b28_9 && b29_1 && b30_5 && b31_4 && b32_7 && b33_5 && b34_5 && b35_4 && b36_4 && b37_3 && b38_3 && b39_2 && b40_2 && b41_2 && b42_2 && b43_2 && b44_2 && b45_2 && b46_2) {
matched = true;
pattern_id = 2617;
}
if(b0_14 && b1_29 && b2_1 && b3_14 && b4_49 && b5_1 && b6_12 && b7_49 && b8_1 && b9_13 && b10_40 && b11_1 && b12_6 && b13_9 && b14_1 && b15_4 && b16_10 && b17_1 && b18_3 && b19_8 && b20_1 && b21_3 && b22_7 && b23_2 && b24_2 && b25_11 && b26_2 && b27_2 && b28_12 && b29_2 && b30_5 && b31_7 && b32_7 && b33_8 && b34_7 && b35_7 && b36_6 && b37_13 && b38_5 && b39_5 && b40_5 && b41_4 && b42_4 && b43_19 && b44_3 && b45_3 && b46_15 && b47_3 && b48_3) {
matched = true;
pattern_id = 2618;
}
if(b0_14 && b1_29 && b2_1 && b3_14 && b4_49 && b5_1 && b6_12 && b7_49 && b8_1 && b9_13 && b10_40 && b11_1 && b12_6 && b13_9 && b14_1 && b15_4 && b16_10 && b17_1 && b18_3 && b19_8 && b20_1 && b21_3 && b22_7 && b23_2 && b24_2 && b25_11 && b26_2 && b27_2 && b28_12 && b29_2 && b30_5 && b31_7 && b32_7 && b33_8 && b34_7 && b35_7 && b36_6 && b37_13 && b38_5 && b39_5 && b40_5 && b41_4 && b42_3) {
matched = true;
pattern_id = 2619;
}
if(b0_14 && b1_29 && b2_1 && b3_14 && b4_49 && b5_1 && b6_12 && b7_49 && b8_1 && b9_13 && b10_45 && b11_16 && b12_6 && b13_15 && b14_1 && b15_4 && b16_6 && b17_5 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_14 && b24_9 && b25_20 && b26_22 && b27_18 && b28_23 && b29_18 && b30_15 && b31_19) {
matched = true;
pattern_id = 2620;
}
if(b0_14 && b1_29 && b2_5 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 2621;
}
if(b0_14 && b1_29 && b2_34 && b3_14 && b4_42 && b5_35 && b6_12 && b7_27 && b8_1 && b9_13 && b10_44 && b11_39 && b12_6 && b13_10 && b14_27 && b15_4 && b16_48 && b17_11 && b18_3 && b19_8 && b20_18 && b21_3 && b22_2 && b23_20 && b24_2 && b25_43 && b26_18 && b27_2 && b28_7 && b29_10 && b30_5 && b31_16 && b32_13 && b33_8 && b34_50 && b35_12 && b36_6 && b37_50 && b38_8 && b39_5 && b40_8 && b41_12 && b42_4 && b43_47 && b44_9 && b45_4) {
matched = true;
pattern_id = 2622;
}
if(b0_14 && b1_29 && b2_9 && b3_14 && b4_49 && b5_39 && b6_5) {
matched = true;
pattern_id = 2623;
}
if(b0_14 && b1_19 && b2_57 && b3_14 && b4_30 && b5_31 && b6_12 && b7_19 && b8_1 && b9_13 && b10_27 && b11_17 && b12_6 && b13_17 && b14_11 && b15_4 && b16_7 && b17_16 && b18_3 && b19_27 && b20_1 && b21_3 && b22_15 && b23_23 && b24_2 && b25_17 && b26_21 && b27_2 && b28_17 && b29_6 && b30_5 && b31_18 && b32_7 && b33_8 && b34_10 && b35_12 && b36_6 && b37_9 && b38_15 && b39_5 && b40_6 && b41_14 && b42_4 && b43_3 && b44_3 && b45_3 && b46_5 && b47_11 && b48_3) {
matched = true;
pattern_id = 2624;
}
if(b0_14 && b1_19 && b2_57 && b3_14 && b4_42 && b5_41 && b6_12 && b7_13 && b8_4 && b9_13 && b10_45 && b11_7 && b12_6 && b13_64 && b14_16 && b15_4 && b16_67 && b17_9 && b18_3 && b19_13 && b20_12 && b21_3 && b22_9 && b23_12 && b24_2 && b25_59 && b26_9 && b27_2 && b28_51 && b29_8 && b30_5 && b31_46 && b32_10 && b33_8 && b34_9 && b35_30 && b36_6 && b37_51 && b38_44 && b39_5 && b40_47 && b41_6 && b42_4 && b43_6 && b44_19 && b45_3 && b46_42 && b47_33 && b48_2 && b49_2 && b50_28 && b51_2 && b52_30 && b53_34 && b54_2 && b55_19 && b56_34 && b57_2 && b58_2 && b59_28 && b60_2 && b61_33 && b62_30 && b63_2 && b64_27 && b65_33 && b66_2 && b67_28 && b68_29 && b69_2 && b70_33 && b71_14 && b72_5 && b73_23 && b74_29 && b75_5 && b76_21 && b77_6 && b78_4 && b79_10 && b80_29 && b81_3 && b82_23 && b83_3 && b84_2 && b85_9 && b86_2 && b87_2 && b88_20 && b89_21 && b90_2 && b91_17 && b92_2 && b93_2 && b94_19 && b95_17 && b96_3) {
matched = true;
pattern_id = 2625;
}
if(b0_14 && b1_19 && b2_33 && b3_28 && b4_1 && b5_5 && b6_39 && b7_7 && b8_35 && b9_27 && b10_26 && b11_27 && b12_17 && b13_18 && b14_18 && b15_3 && b16_1 && b17_20 && b18_15) {
matched = true;
pattern_id = 2626;
}
if(b0_14 && b1_19 && b2_5 && b3_14 && b4_78 && b5_13 && b6_12 && b7_27 && b8_4 && b9_13 && b10_16 && b11_42 && b12_6 && b13_51 && b14_11 && b15_7) {
matched = true;
pattern_id = 2627;
}
if(b0_14 && b1_19 && b2_5 && b3_14 && b4_38 && b5_13 && b6_12 && b7_27 && b8_4 && b9_13 && b10_16 && b11_42 && b12_6 && b13_34 && b14_9 && b15_4 && b16_48 && b17_19 && b18_8) {
matched = true;
pattern_id = 2628;
}
if(b0_14 && b1_19 && b2_5 && b3_14 && b4_20 && b5_19 && b6_12 && b7_13 && b8_4 && b9_13 && b10_33 && b11_22 && b12_6 && b13_17 && b14_10 && b15_4 && b16_21 && b17_24 && b18_3 && b19_13 && b20_22 && b21_3 && b22_17 && b23_10 && b24_2 && b25_17 && b26_18 && b27_2 && b28_11 && b29_13 && b30_5 && b31_5 && b32_16 && b33_8 && b34_12 && b35_13 && b36_6 && b37_9 && b38_11 && b39_5 && b40_8 && b41_10 && b42_4 && b43_6 && b44_8 && b45_3 && b46_7 && b47_8 && b48_3) {
matched = true;
pattern_id = 2629;
}
if(b0_14 && b1_19 && b2_34 && b3_14 && b4_8 && b5_41 && b6_12 && b7_4 && b8_19 && b9_13 && b10_21 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_4 && b45_3 && b46_4 && b47_3 && b48_2 && b49_3 && b50_3 && b51_3 && b52_3 && b53_3 && b54_2 && b55_3 && b56_3 && b57_3 && b58_3 && b59_3 && b60_3) {
matched = true;
pattern_id = 2630;
}
if(b0_14 && b1_19 && b2_34 && b3_14 && b4_8 && b5_41 && b6_12 && b7_13 && b8_24 && b9_13 && b10_15 && b11_9 && b12_6 && b13_17 && b14_7 && b15_4 && b16_17 && b17_12 && b18_3 && b19_13 && b20_15 && b21_3 && b22_5 && b23_1 && b24_2 && b25_17 && b26_17 && b27_2 && b28_10 && b29_14 && b30_5 && b31_5 && b32_4 && b33_8 && b34_8 && b35_4 && b36_6 && b37_9 && b38_10 && b39_5 && b40_7 && b41_6 && b42_4 && b43_6 && b44_9 && b45_3 && b46_6 && b47_7 && b48_3) {
matched = true;
pattern_id = 2631;
}
if(b0_14 && b1_12 && b2_1 && b3_14 && b4_30 && b5_33 && b6_12 && b7_19 && b8_45 && b9_13 && b10_21 && b11_1 && b12_10) {
matched = true;
pattern_id = 2632;
}
if(b0_14 && b1_12 && b2_1 && b3_14 && b4_13 && b5_9 && b6_12 && b7_19 && b8_45 && b9_13 && b10_21 && b11_1 && b12_10) {
matched = true;
pattern_id = 2633;
}
if(b0_14 && b1_12 && b2_13 && b3_14 && b4_13 && b5_13 && b6_5) {
matched = true;
pattern_id = 2634;
}
if(b0_14 && b1_12 && b2_13 && b3_28 && b4_1 && b5_23 && b6_30 && b7_26 && b8_10 && b9_23 && b10_2 && b11_16 && b12_8 && b13_1 && b14_15 && b15_11 && b16_1 && b17_6 && b18_12 && b19_1 && b20_14 && b21_13 && b22_13 && b23_2 && b24_14 && b25_13 && b26_14 && b27_5 && b28_8 && b29_10 && b30_8 && b31_4 && b32_12 && b33_4 && b34_8 && b35_8 && b36_3 && b37_5 && b38_2 && b39_6 && b40_5 && b41_5 && b42_5 && b43_4 && b44_5) {
matched = true;
pattern_id = 2635;
}
if(b0_14 && b1_12 && b2_5 && b3_28 && b4_5 && b5_23 && b6_60 && b7_17 && b8_3 && b9_39 && b10_16 && b11_2 && b12_14 && b13_7 && b14_3 && b15_45 && b16_48 && b17_2 && b18_42 && b19_26 && b20_8 && b21_39 && b22_7 && b23_8 && b24_13 && b25_12 && b26_8 && b27_9 && b28_7 && b29_7 && b30_28 && b31_16 && b32_1 && b33_5 && b34_25 && b35_5 && b36_2 && b37_24 && b38_25 && b39_16 && b40_6 && b41_13) {
matched = true;
pattern_id = 2636;
}
if(b0_14 && b1_7 && b2_1 && b3_28 && b4_10 && b5_18 && b6_5 && b7_40 && b8_19 && b9_13 && b10_45 && b11_7 && b12_10 && b13_45 && b14_56 && b15_55 && b16_28 && b17_8 && b18_50 && b19_7 && b20_8 && b21_47 && b22_47 && b23_8 && b24_15 && b25_2 && b26_8 && b27_7 && b28_2 && b29_7 && b30_9 && b31_11 && b32_1 && b33_3 && b34_27 && b35_5 && b36_21 && b37_4 && b38_2) {
matched = true;
pattern_id = 2637;
}
if(b0_14 && b1_7 && b2_33 && b3_14 && b4_4 && b5_65 && b6_12 && b7_22 && b8_19 && b9_13 && b10_40 && b11_11 && b12_6 && b13_7 && b14_15 && b15_4 && b16_14 && b17_62 && b18_3 && b19_26 && b20_51 && b21_3 && b22_56 && b23_10 && b24_2 && b25_12 && b26_6 && b27_2 && b28_7 && b29_11 && b30_5 && b31_1 && b32_7 && b33_8 && b34_43 && b35_13 && b36_6 && b37_49 && b38_7 && b39_5 && b40_5 && b41_40 && b42_4 && b43_5 && b44_42 && b45_3 && b46_15 && b47_17 && b48_3) {
matched = true;
pattern_id = 2638;
}
if(b0_14 && b1_7 && b2_31 && b3_14 && b4_25 && b5_1 && b6_12 && b7_17 && b8_17 && b9_13 && b10_14 && b11_8 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_5 && b18_3 && b19_5 && b20_4 && b21_4 && b22_4 && b23_4 && b24_4 && b25_4 && b26_4 && b27_4 && b28_4) {
matched = true;
pattern_id = 2639;
}
if(b0_14 && b1_27 && b2_27 && b3_14 && b4_8 && b5_67 && b6_12 && b7_22 && b8_27 && b9_13 && b10_14 && b11_39 && b12_6 && b13_17 && b14_30 && b15_4 && b16_17 && b17_15 && b18_3 && b19_50 && b20_12 && b21_3 && b22_49 && b23_55 && b24_2 && b25_39 && b26_15 && b27_2 && b28_11 && b29_10 && b30_5 && b31_44 && b32_12 && b33_8 && b34_8 && b35_14 && b36_6 && b37_50 && b38_5 && b39_5 && b40_38 && b41_40 && b42_4 && b43_3 && b44_42 && b45_3 && b46_35 && b47_29 && b48_2 && b49_28 && b50_39 && b51_2 && b52_31 && b53_37 && b54_3) {
matched = true;
pattern_id = 2640;
}
if(b0_14 && b1_27 && b2_10 && b3_14 && b4_8 && b5_13 && b6_12 && b7_22 && b8_27 && b9_13 && b10_14 && b11_7 && b12_6 && b13_15 && b14_23 && b15_4 && b16_17 && b17_5 && b18_3 && b19_50 && b20_29 && b21_3 && b22_5 && b23_20 && b24_2 && b25_17 && b26_15 && b27_2 && b28_15 && b29_20 && b30_5 && b31_56 && b32_8 && b33_8 && b34_43 && b35_30 && b36_6 && b37_9 && b38_44 && b39_5 && b40_7 && b41_8 && b42_4 && b43_3 && b44_8 && b45_3 && b46_7 && b47_3 && b48_2 && b49_26 && b50_2 && b51_2 && b52_26 && b53_4 && b54_3) {
matched = true;
pattern_id = 2641;
}
if(b0_14 && b1_27 && b2_26 && b3_14 && b4_13 && b5_28 && b6_12 && b7_20 && b8_17 && b9_13 && b10_3 && b11_25 && b12_6 && b13_8 && b14_9 && b15_4 && b16_27 && b17_6 && b18_3 && b19_18 && b20_12 && b21_3 && b22_60 && b23_15 && b24_9) {
matched = true;
pattern_id = 2642;
}
if(b0_14 && b1_27 && b2_38 && b3_28 && b4_33 && b5_23 && b6_9 && b7_22 && b8_3 && b9_18 && b10_10 && b11_2 && b12_11 && b13_8 && b14_3 && b15_8 && b16_10 && b17_2 && b18_5 && b19_5 && b20_8 && b21_8 && b22_6 && b23_8 && b24_11 && b25_12 && b26_11 && b27_10 && b28_13 && b29_3 && b30_3 && b31_9 && b32_9 && b33_6) {
matched = true;
pattern_id = 2643;
}
if(b0_14 && b1_27 && b2_32 && b3_14 && b4_8 && b5_33 && b6_12 && b7_68 && b8_52 && b9_13 && b10_23 && b11_8 && b12_6 && b13_17 && b14_1 && b15_4 && b16_53 && b17_14 && b18_3 && b19_50 && b20_29 && b21_3 && b22_56 && b23_12 && b24_9) {
matched = true;
pattern_id = 2644;
}
if(b0_14 && b1_28 && b2_38 && b3_14 && b4_34 && b5_36 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_12 && b12_6 && b13_7 && b14_6 && b15_7 && b16_11 && b17_13 && b18_10 && b19_12 && b20_13 && b21_10 && b22_11) {
matched = true;
pattern_id = 2645;
}
if(b0_14 && b1_28 && b2_34 && b3_14 && b4_36 && b5_38 && b6_5 && b7_23 && b8_25 && b9_4 && b10_15 && b11_1 && b12_6 && b13_8 && b14_8 && b15_7 && b16_6 && b17_8 && b18_5 && b19_13 && b20_8 && b21_6 && b22_7 && b23_7 && b24_11 && b25_6 && b26_12 && b27_11 && b28_8 && b29_8 && b30_8 && b31_4 && b32_10) {
matched = true;
pattern_id = 2646;
}
if(b0_14 && b1_28 && b2_34 && b3_14 && b4_38 && b5_35 && b6_5 && b7_25 && b8_28 && b9_4 && b10_16 && b11_18 && b12_10 && b13_13 && b14_2 && b15_10 && b16_9 && b17_2 && b18_5 && b19_14 && b20_9 && b21_11 && b22_1 && b23_5 && b24_13 && b25_6) {
matched = true;
pattern_id = 2647;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_35 && b5_37 && b6_5 && b7_17 && b8_24 && b9_4 && b10_19 && b11_15 && b12_10 && b13_8 && b14_9 && b15_4 && b16_6 && b17_14 && b18_3 && b19_7 && b20_7 && b21_4 && b22_12 && b23_7 && b24_10 && b25_11 && b26_8 && b27_9 && b28_9 && b29_1) {
matched = true;
pattern_id = 2648;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_33 && b5_34 && b6_26 && b7_3 && b8_32 && b9_1 && b10_2 && b11_21 && b12_10 && b13_8 && b14_9 && b15_7 && b16_6 && b17_8 && b18_1 && b19_16 && b20_8 && b21_6 && b22_7 && b23_8 && b24_12 && b25_15 && b26_11 && b27_14 && b28_6 && b29_8 && b30_8 && b31_10 && b32_7 && b33_10 && b34_3) {
matched = true;
pattern_id = 2649;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_40 && b5_23 && b6_31 && b7_27 && b8_10 && b9_13 && b10_24 && b11_20 && b12_14 && b13_15 && b14_2 && b15_6 && b16_15 && b17_16 && b18_13 && b19_1 && b20_15 && b21_9 && b22_13 && b23_13 && b24_16 && b25_13 && b26_14 && b27_5 && b28_8 && b29_12 && b30_10 && b31_10 && b32_14 && b33_1 && b34_3 && b35_9) {
matched = true;
pattern_id = 2650;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_39 && b5_15 && b6_29 && b7_18 && b8_10 && b9_22 && b10_23 && b11_2 && b12_13 && b13_11 && b14_3 && b15_11 && b16_14 && b17_2 && b18_1 && b19_15 && b20_9 && b21_12 && b22_1 && b23_13 && b24_10 && b25_13 && b26_13 && b27_13 && b28_8 && b29_9 && b30_7 && b31_4 && b32_11 && b33_9) {
matched = true;
pattern_id = 2651;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_41 && b5_34 && b6_33 && b7_28 && b8_31 && b9_15 && b10_2 && b11_9 && b12_15 && b13_1 && b14_8 && b15_13 && b16_15 && b17_17 && b18_8 && b19_3 && b20_15 && b21_3 && b22_8 && b23_13 && b24_9 && b25_14 && b26_11 && b27_6 && b28_16 && b29_1) {
matched = true;
pattern_id = 2652;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_59 && b5_23 && b6_27 && b7_13 && b8_3 && b9_39 && b10_16 && b11_2 && b12_14 && b13_7 && b14_3 && b15_45 && b16_6 && b17_2 && b18_5 && b19_5 && b20_8 && b21_1 && b22_44 && b23_8 && b24_11 && b25_12 && b26_8 && b27_12 && b28_20 && b29_1 && b30_4 && b31_3 && b32_3 && b33_3 && b34_1 && b35_5 && b36_21 && b37_13 && b38_2 && b39_18 && b40_3 && b41_9 && b42_13 && b43_11) {
matched = true;
pattern_id = 2653;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_3 && b5_34 && b6_5 && b7_19 && b8_20 && b9_13 && b10_10 && b11_11 && b12_6 && b13_9 && b14_10 && b15_7 && b16_7 && b17_8 && b18_7 && b19_8 && b20_8 && b21_6 && b22_7 && b23_7 && b24_6 && b25_6 && b26_2 && b27_6 && b28_8 && b29_6 && b30_6 && b31_4 && b32_6 && b33_4 && b34_1 && b35_3 && b36_3) {
matched = true;
pattern_id = 2654;
}
if(b0_14 && b1_28 && b2_36 && b3_14 && b4_13 && b5_32 && b6_12 && b7_27 && b8_21 && b9_13 && b10_62 && b11_1 && b12_6 && b13_33 && b14_7 && b15_4 && b16_4 && b17_7 && b18_3 && b19_3 && b20_54 && b21_4) {
matched = true;
pattern_id = 2655;
}
if(b0_14 && b1_31 && b2_46 && b3_14 && b4_29 && b5_33 && b6_12 && b7_49 && b8_62 && b9_13 && b10_44 && b11_39 && b12_6 && b13_14 && b14_11 && b15_4 && b16_48 && b17_23 && b18_3 && b19_7 && b20_14 && b21_3 && b22_15 && b23_55 && b24_9) {
matched = true;
pattern_id = 2656;
}
if(b0_14 && b1_31 && b2_9 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_62 && b9_1 && b10_1 && b11_1 && b12_2 && b13_26) {
matched = true;
pattern_id = 2657;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_5 && b21_4) {
matched = true;
pattern_id = 2658;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_38 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_17 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_7 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_23 && b24_2 && b25_12 && b26_12 && b27_2 && b28_7 && b29_20 && b30_2) {
matched = true;
pattern_id = 2659;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_13 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_9 && b12_6 && b13_2 && b14_11 && b15_7) {
matched = true;
pattern_id = 2660;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_65 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_11 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_14 && b18_3 && b19_3 && b20_16 && b21_3 && b22_6 && b23_14 && b24_2 && b25_12 && b26_21 && b27_8) {
matched = true;
pattern_id = 2661;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_19 && b6_5 && b7_75 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_2) {
matched = true;
pattern_id = 2662;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_19 && b6_5 && b7_75 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_2 && b15_23 && b16_35 && b17_58 && b18_43 && b19_30 && b20_40 && b21_11 && b22_53 && b23_53 && b24_9 && b25_2 && b26_15 && b27_8) {
matched = true;
pattern_id = 2663;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_35 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_12 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_5 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_12 && b26_6 && b27_2 && b28_7 && b29_12 && b30_5 && b31_16 && b32_6 && b33_8 && b34_25 && b35_15 && b36_6 && b37_7 && b38_13 && b39_5 && b40_10 && b41_23 && b42_4 && b43_21 && b44_2 && b45_3 && b46_3 && b47_4 && b48_2 && b49_15 && b50_18 && b51_2 && b52_12 && b53_12 && b54_2 && b55_2 && b56_10 && b57_2 && b58_10 && b59_7 && b60_4) {
matched = true;
pattern_id = 2664;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_35 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_12 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_5 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_14 && b24_2 && b25_12 && b26_12 && b27_2 && b28_7 && b29_12 && b30_5 && b31_16 && b32_6 && b33_8 && b34_25 && b35_15 && b36_6 && b37_7 && b38_13 && b39_5 && b40_10 && b41_23 && b42_4 && b43_21 && b44_2 && b45_3 && b46_3 && b47_4 && b48_3) {
matched = true;
pattern_id = 2665;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_35 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_12 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_5 && b18_8) {
matched = true;
pattern_id = 2666;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_35 && b6_5 && b7_60 && b8_4 && b9_3 && b10_66 && b11_1 && b12_12 && b13_2 && b14_10 && b15_7 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_6 && b23_11 && b24_2 && b25_2 && b26_9 && b27_8) {
matched = true;
pattern_id = 2667;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_71) {
matched = true;
pattern_id = 2668;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_6 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_3 && b15_1 && b16_4 && b17_2 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2669;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_7) {
matched = true;
pattern_id = 2670;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_30 && b9_57 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2671;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_30 && b9_66 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2672;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_4 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2673;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_4 && b9_1 && b10_2) {
matched = true;
pattern_id = 2674;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_4 && b9_16 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2675;
}
if(b0_66) {
matched = true;
pattern_id = 2676;
}
}

}