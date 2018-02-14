/* ----------------- */
/*                   */
/*      CDMA         */
/*                   */
/* ----------------- */
int cdma_func(
//  config register
	int f_pingpong                ,
    int cbuf_dat0_address         ,
    int cbuf_dat1_address         ,
    int cbuf_wt0_address          ,
    int cbuf_wt1_address          ,
	int ddr_dat_address           ,
	int ddr_wt_address            ,
	int ddr_wt_size_norm          ,	
    int ddr_wt_size_last          ,	
	int num_wt_tile               ,
	int num_adding_zero_input_channel_cdma ,
	int tile_dat_type             ,
    int tile_size_x_1_no_extend   ,
    int tile_size_y_1_no_extend   ,
    int tile_size_x_2_no_extend   ,
    int tile_size_y_2_no_extend   ,	
    int tile_size_x_3_no_extend   ,
    int tile_size_y_3_no_extend	  ,
    int tile_size_x_4_no_extend   ,
    int tile_size_y_4_no_extend	  ,
    int tile_size_x_5_no_extend   ,
    int tile_size_y_5_no_extend	  ,
    int tile_size_x_6_no_extend   ,
    int tile_size_y_6_no_extend   ,	
    int tile_size_x_7_no_extend   ,
    int tile_size_y_7_no_extend   ,	
    int tile_size_x_8_no_extend   ,
    int tile_size_y_8_no_extend   ,	
    int tile_size_x_9_no_extend   ,
    int tile_size_y_9_no_extend   ,		
    int tile_num_x_c              ,
    int tile_num_y_c              ,	
    int ddr_size_input_channel    ,	
	
	int extend_dat_type_1_num_1_r,
	int extend_dat_type_1_num_2_l,
	
	int extend_dat_type_2_num_1_b,
	int extend_dat_type_2_num_2_t,	
	
	int extend_dat_type_3_num_1_b,
	int extend_dat_type_3_num_1_r,			
	int extend_dat_type_3_num_2_b,
	int extend_dat_type_3_num_2_l,	
	int extend_dat_type_3_num_3_t,
	int extend_dat_type_3_num_3_r,	
	int extend_dat_type_3_num_4_t,
	int extend_dat_type_3_num_4_l,	
	
	int extend_dat_type_4_num_1_b,
	int extend_dat_type_4_num_1_r,			
	int extend_dat_type_4_num_2_b,
	int extend_dat_type_4_num_2_l,	
	int extend_dat_type_4_num_2_r,
	int extend_dat_type_4_num_3_b,	
	int extend_dat_type_4_num_3_l,
	int extend_dat_type_4_num_4_t,		
	int extend_dat_type_4_num_4_r,
	int extend_dat_type_4_num_5_t,			
	int extend_dat_type_4_num_5_l,
	int extend_dat_type_4_num_5_r,	
	int extend_dat_type_4_num_6_t,
	int extend_dat_type_4_num_6_l,	

	int extend_dat_type_5_num_1_b,
	int extend_dat_type_5_num_1_r,			
	int extend_dat_type_5_num_2_b,
	int extend_dat_type_5_num_2_l,	
	int extend_dat_type_5_num_3_t,
	int extend_dat_type_5_num_3_b,	
	int extend_dat_type_5_num_3_r,
	int extend_dat_type_5_num_4_t,		
	int extend_dat_type_5_num_4_b,
	int extend_dat_type_5_num_4_l,			
	int extend_dat_type_5_num_5_t,
	int extend_dat_type_5_num_5_r,	
	int extend_dat_type_5_num_6_t,
	int extend_dat_type_5_num_6_l,	

	int extend_dat_type_6_num_1_b,
	int extend_dat_type_6_num_1_r,			
	int extend_dat_type_6_num_2_b,
	int extend_dat_type_6_num_2_l,	
	int extend_dat_type_6_num_2_r,
	int extend_dat_type_6_num_3_b,	
	int extend_dat_type_6_num_3_l,
	int extend_dat_type_6_num_4_t,		
	int extend_dat_type_6_num_4_b,
	int extend_dat_type_6_num_4_r,			
	int extend_dat_type_6_num_5_t,
	int extend_dat_type_6_num_5_b,	
	int extend_dat_type_6_num_5_l,
	int extend_dat_type_6_num_5_r,	
	int extend_dat_type_6_num_6_t,
	int extend_dat_type_6_num_6_b,	
	int extend_dat_type_6_num_6_l,
	int extend_dat_type_6_num_7_t,		
	int extend_dat_type_6_num_7_r,
	int extend_dat_type_6_num_8_t,			
	int extend_dat_type_6_num_8_l,
	int extend_dat_type_6_num_8_r,	
	int extend_dat_type_6_num_9_t,
	int extend_dat_type_6_num_9_l,	

    int address_incr_dat_type_0_num_1,	
	int address_incr_dat_type_1_num_1,	
    int address_incr_dat_type_1_num_2,	
	int address_incr_dat_type_2_num_1,	
	int address_incr_dat_type_2_num_2,	
	int address_incr_dat_type_3_num_1,	
	int address_incr_dat_type_3_num_2,	   
	int address_incr_dat_type_3_num_3,	  
	int address_incr_dat_type_3_num_4,
	int address_incr_dat_type_4_num_1,	
	int address_incr_dat_type_4_num_2,	   
	int address_incr_dat_type_4_num_3,	  
	int address_incr_dat_type_4_num_4,
	int address_incr_dat_type_4_num_5,	  
	int address_incr_dat_type_4_num_6,
	int address_incr_dat_type_5_num_1,	
	int address_incr_dat_type_5_num_2,	   
	int address_incr_dat_type_5_num_3,	  
	int address_incr_dat_type_5_num_4,
	int address_incr_dat_type_5_num_5,	  
	int address_incr_dat_type_5_num_6,	
	int address_incr_dat_type_6_num_1,	
	int address_incr_dat_type_6_num_2,	   
	int address_incr_dat_type_6_num_3,	  
	int address_incr_dat_type_6_num_4,
	int address_incr_dat_type_6_num_5,	  
	int address_incr_dat_type_6_num_6,
	int address_incr_dat_type_6_num_7,
	int address_incr_dat_type_6_num_8,	  
	int address_incr_dat_type_6_num_9,
//  loop counter                  
    int *cnt_num_dat_tile          ,
	int *cnt_num_wt_tile           ,
    int *cnt_ddr_wt_address        ,
    int *cnt_ddr_dat_start_address ,	

//  data in
    int **ddr                      ,                
//  data out
    int **cbuf   
	);
	
/* ----------------- */
/*                   */
/*      CSC          */
/*                   */
/* ----------------- */	
	
	int csc_func(
//  config register
 	int len_dat_stride_norm_1        ,
    int num_dat_stride_norm_1        ,
    int len_dat_stride_last_1        ,
    int num_dat_stride_last_1        ,
	int len_dat_stride_norm_2        ,
    int num_dat_stride_norm_2        ,
    int len_dat_stride_last_2        ,
    int num_dat_stride_last_2        ,
	int len_dat_stride_norm_3        ,
    int num_dat_stride_norm_3        ,
    int len_dat_stride_last_3        ,
    int num_dat_stride_last_3        ,
	int len_dat_stride_norm_4        ,
    int num_dat_stride_norm_4        ,
    int len_dat_stride_last_4        ,
    int num_dat_stride_last_4        ,
	int len_dat_stride_norm_5        ,
    int num_dat_stride_norm_5        ,
    int len_dat_stride_last_5        ,
    int num_dat_stride_last_5        ,
	int len_dat_stride_norm_6        ,
    int num_dat_stride_norm_6        ,
    int len_dat_stride_last_6        ,
    int num_dat_stride_last_6        ,
	int len_dat_stride_norm_7        ,
    int num_dat_stride_norm_7        ,
    int len_dat_stride_last_7        ,
    int num_dat_stride_last_7        ,
	int len_dat_stride_norm_8        ,
    int num_dat_stride_norm_8        ,
    int len_dat_stride_last_8        ,
    int num_dat_stride_last_8        ,
	int len_dat_stride_norm_9        ,
    int num_dat_stride_norm_9        ,
    int len_dat_stride_last_9        ,
    int num_dat_stride_last_9        ,
    int index_enable                 ,
    int index_width                  ,
    int f_pingpong                   ,
//	int feature_size_x	             ,
//	int feature_size_y	             ,
	int kernel_size_x	             ,
	int kernel_size_y	             ,
	int kernel_stride_x	             ,
	int kernel_stride_y	             ,
	int padding_t	                 ,
	int padding_b	                 ,
	int padding_l	                 ,
	int padding_r	                 ,
	int padding_x	                 ,
	int padding_y	                 ,
	int dilated_x	                 ,
	int dilated_y	                 ,
	int input_channel	             ,
	int output_channel	             ,
	int computation_type	         ,
	int num_engine	                 ,
	int cbuf_dat0_address	         ,
	int cbuf_dat1_address	         ,
	int cbuf_wt0_address	         ,
	int cbuf_wt1_address	         ,
	int tile_dat_type	             ,
	int num_wt_tile	                 ,
	int compute_data_precision	     ,
	int compute_weight_precision	 ,											
  	int tile_num_wt_output_kernel	 ,
	int num_stride_output_kernel	 ,
	int num_input_folding	         ,
	int tile_size_x_1	             ,
	int tile_size_y_1	             ,
	int tile_size_x_2	             ,
	int tile_size_y_2	             ,
	int tile_size_x_3	             ,
	int tile_size_y_3	             ,
	int tile_size_x_4	             ,
	int tile_size_y_4	             ,
	int tile_size_x_5	             ,
	int tile_size_y_5	             ,
	int tile_size_x_6	             ,
	int tile_size_y_6	             ,
	int tile_size_x_7	             ,
	int tile_size_y_7	             ,
	int tile_size_x_8	             ,
	int tile_size_y_8	             ,
	int tile_size_x_9	             ,
	int tile_size_y_9	             ,
	int tile_num_x_c	             ,
	int tile_num_y_c	             ,
//  loop counter                  ,
    int *cnt_num_dat_tile          ,
	int *cnt_num_wt_tile           ,
	int *flag_cbuf_pingpong_dat    ,
	int *flag_cbuf_pingpong_wt     ,
//  data in
    //int cbuf2csc_wt_ready       ,
    //int cbuf2csc_dat_ready      ,
    int **cbuf                    ,
//  data out
    int *sc2cbuf_wt_req           ,
	int *sc2cbuf_wt_vld           ,
    int *sc2cbuf_dat_req          ,
	int *sc2cbuf_dat_vld          ,
	//int c2cmac_req                ,
    int **c2cmac_wt                ,
	int *c2cmac_wt_vld             ,
    int **c2cmac_dat               ,
    int *c2cmac_dat_vld       
	);
	
/* ----------------- */
/*                   */
/*      CSC init     */
/*                   */
/* ----------------- */	
int dla_csc_interface_init(
//config parameter
int para_tile_dat_type           ,
int para_num_dat_stride_norm_1   ,
int para_len_dat_stride_norm_1   ,
int para_num_dat_stride_last_1   ,
int para_len_dat_stride_last_1   ,
int para_num_dat_stride_norm_2   ,
int para_len_dat_stride_norm_2   ,
int para_num_dat_stride_last_2   ,
int para_len_dat_stride_last_2   ,
int para_num_dat_stride_norm_3   ,
int para_len_dat_stride_norm_3   ,
int para_num_dat_stride_last_3   ,
int para_len_dat_stride_last_3   ,
int para_num_dat_stride_norm_4   ,
int para_len_dat_stride_norm_4   ,
int para_num_dat_stride_last_4   ,
int para_len_dat_stride_last_4   ,
int para_num_dat_stride_norm_5   ,
int para_len_dat_stride_norm_5   ,
int para_num_dat_stride_last_5   ,
int para_len_dat_stride_last_5   ,
int para_num_dat_stride_norm_6   ,
int para_len_dat_stride_norm_6   ,
int para_num_dat_stride_last_6   ,
int para_len_dat_stride_last_6   ,
int para_num_dat_stride_norm_7   ,
int para_len_dat_stride_norm_7   ,
int para_num_dat_stride_last_7   ,
int para_len_dat_stride_last_7   ,
int para_num_dat_stride_norm_8   ,
int para_len_dat_stride_norm_8   ,
int para_num_dat_stride_last_8   ,
int para_len_dat_stride_last_8   ,
int para_num_dat_stride_norm_9   ,
int para_len_dat_stride_norm_9   ,
int para_num_dat_stride_last_9   ,
int para_len_dat_stride_last_9   ,
int para_tile_num_x_c             ,
int para_tile_num_y_c             ,
int para_tile_num_wt_output_kernel,
int para_num_stride_output_kernel ,
int para_num_wt_tile              ,
int para_computation_type         ,
int para_num_input_folding        ,
int para_kernel_size_y            ,
int para_kernel_size_x            ,
//constant 
int c2cmac_dat_width              ,
int c2cmac_wt_width               ,
//return depth
int *c2cmac_wt_depth               ,
int *c2cmac_dat_depth              ,
int *sc2cbuf_wt_req_depth          ,
int *sc2cbuf_dat_req_depth                   
);	





