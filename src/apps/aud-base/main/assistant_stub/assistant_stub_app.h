/* Copyright Statement:                                                        
 *                                                                             
 * This software/firmware and related documentation ("MediaTek Software") are  
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without 
 * the prior written permission of MediaTek inc. and/or its licensors, any     
 * reproduction, modification, use or disclosure of MediaTek Software, and     
 * information contained herein, in whole or in part, shall be strictly        
 * prohibited.                                                                 
 *                                                                             
 * MediaTek Inc. (C) 2014. All rights reserved.                                
 *                                                                             
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES 
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")     
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER  
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL          
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED    
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR          
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH 
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,            
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.   
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK       
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE  
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR     
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S 
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE       
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE  
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE  
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.    
 *                                                                             
 * The following software/firmware and/or related documentation ("MediaTek     
 * Software") have been modified by MediaTek Inc. All revisions are subject to 
 * any receiver's applicable license agreements with MediaTek Inc.             
 */


/*-----------------------------------------------------------------------------
 * $RCSfile: assistant_stub_app.h $
 * $Revision:0.1
 * $Date:2017.01.05
 * $Author:pingan.liu
 * $CCRevision: $
 * $SWAuthor:  $
 * $MD5HEX: $
 *
 * Description:assistance stub app header file
 *---------------------------------------------------------------------------*/
#ifndef _ASSISTANT_STUB_APP_H_
#define _ASSISTANT_STUB_APP_H_
/*-----------------------------------------------------------------------------
                    include files
-----------------------------------------------------------------------------*/
#include "u_common.h"
#include "u_handle.h"
#include "u_appman.h"
#include "u_amb.h"
#include "u_app_thread.h"
#include "u_assistant_stub.h"

typedef struct _ASSISTANT_STUB_APP_OBJ_T
{
    HANDLE_T        h_app;
    HANDLE_T        h_iom;
    BOOL            b_app_init_ok;
    BOOL            b_recv_iom_msg;
}ASSISTANT_STUB_APP_OBJ_T;

/*assisstance json data recv thread*/
#define ASSISTANT_STUB_JSON_RECV_THREAD_NAME        "assistant_json_recv_thread"
#define ASSISTANT_STUB_JSON_RECV_THREAD_STACK_SIZE  (1024 * 40)
#define ASSISTANT_STUB_JSON_RECV_THREAD_PRIORATY     PRIORITY(PRIORITY_CLASS_HIGH, PRIORITY_LAYER_UI, 0)

/*assistance tts data recv thread*/
#define ASSISTANT_STUB_TTS_RECV_THREAD_NAME         "assistant_tts_recv_thread"
#define ASSISTANT_STUB_TTS_RECV_THREAD_STACK_SIZE   (1024 * 40)
#define ASSISTANT_STUB_TTS_RECV_THREAD_PRIORATY     PRIORITY(PRIORITY_CLASS_HIGH, PRIORITY_LAYER_UI, 0)

#endif
