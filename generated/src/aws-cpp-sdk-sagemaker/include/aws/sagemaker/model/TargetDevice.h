/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class TargetDevice
  {
    NOT_SET,
    lambda,
    ml_m4,
    ml_m5,
    ml_m6g,
    ml_c4,
    ml_c5,
    ml_c6g,
    ml_p2,
    ml_p3,
    ml_g4dn,
    ml_inf1,
    ml_inf2,
    ml_trn1,
    ml_eia2,
    jetson_tx1,
    jetson_tx2,
    jetson_nano,
    jetson_xavier,
    rasp3b,
    rasp4b,
    imx8qm,
    deeplens,
    rk3399,
    rk3288,
    aisage,
    sbe_c,
    qcs605,
    qcs603,
    sitara_am57x,
    amba_cv2,
    amba_cv22,
    amba_cv25,
    x86_win32,
    x86_win64,
    coreml,
    jacinto_tda4vm,
    imx8mplus
  };

namespace TargetDeviceMapper
{
AWS_SAGEMAKER_API TargetDevice GetTargetDeviceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTargetDevice(TargetDevice value);
} // namespace TargetDeviceMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
