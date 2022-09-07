/* Copyright (c) 2017-2018, 2020, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _AIS_IFE_CSID_DEV_H_
#define _AIS_IFE_CSID_DEV_H_

#include "ais_isp_hw.h"

irqreturn_t ais_ife_csid_irq(int irq_num, void *data);

int ais_ife_csid_probe(struct platform_device *pdev);
int ais_ife_csid_remove(struct platform_device *pdev);

#endif /*_AIS_IFE_CSID_DEV_H_ */
