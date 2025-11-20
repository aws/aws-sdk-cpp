/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class MIGProfileType {
  NOT_SET,
  mig_1g_5gb,
  mig_1g_10gb,
  mig_1g_18gb,
  mig_1g_20gb,
  mig_1g_23gb,
  mig_1g_35gb,
  mig_1g_45gb,
  mig_1g_47gb,
  mig_2g_10gb,
  mig_2g_20gb,
  mig_2g_35gb,
  mig_2g_45gb,
  mig_2g_47gb,
  mig_3g_20gb,
  mig_3g_40gb,
  mig_3g_71gb,
  mig_3g_90gb,
  mig_3g_93gb,
  mig_4g_20gb,
  mig_4g_40gb,
  mig_4g_71gb,
  mig_4g_90gb,
  mig_4g_93gb,
  mig_7g_40gb,
  mig_7g_80gb,
  mig_7g_141gb,
  mig_7g_180gb,
  mig_7g_186gb
};

namespace MIGProfileTypeMapper {
AWS_SAGEMAKER_API MIGProfileType GetMIGProfileTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMIGProfileType(MIGProfileType value);
}  // namespace MIGProfileTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
