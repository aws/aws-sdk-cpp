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
  enum class DeviceSubsetType
  {
    NOT_SET,
    PERCENTAGE,
    SELECTION,
    NAMECONTAINS
  };

namespace DeviceSubsetTypeMapper
{
AWS_SAGEMAKER_API DeviceSubsetType GetDeviceSubsetTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDeviceSubsetType(DeviceSubsetType value);
} // namespace DeviceSubsetTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
