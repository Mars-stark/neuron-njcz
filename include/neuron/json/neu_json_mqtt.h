/**
 * NEURON IIoT System for Industry 4.0
 * Copyright (C) 2020-2022 EMQ Technologies Co., Ltd All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 **/

/*
 * DO NOT EDIT THIS FILE MANUALLY!
 * It was automatically generated by `json-autotype`.
 */

#ifndef _NEU_JSON_API_NEU_MQTT_H_
#define _NEU_JSON_API_NEU_MQTT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef struct {
    char *uuid;
} neu_json_mqtt_t;

typedef struct {
    char *node;
    int   link;
    int   running;
} neu_json_node_state_t;

typedef struct {
    char *   version;
    uint64_t timpstamp;
} neu_json_states_head_t;

typedef struct {
    int                    n_state;
    neu_json_node_state_t *states;
} neu_json_states_t;

int  neu_json_decode_mqtt_req(char *buf, neu_json_mqtt_t **result);
void neu_json_decode_mqtt_req_free(neu_json_mqtt_t *req);

int neu_json_encode_mqtt_resp(void *json_object, void *param);

int neu_json_encode_state_header_resp(void *json_object, void *param);
int neu_json_encode_states_resp(void *json_object, void *param);

#ifdef __cplusplus
}
#endif

#endif