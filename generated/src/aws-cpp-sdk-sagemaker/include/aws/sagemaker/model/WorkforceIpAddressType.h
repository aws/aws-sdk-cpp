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
  enum class WorkforceIpAddressType
  {
    NOT_SET,
    ipv4,
    dualstack
  };

namespace WorkforceIpAddressTypeMapper
{
AWS_SAGEMAKER_API WorkforceIpAddressType GetWorkforceIpAddressTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForWorkforceIpAddressType(WorkforceIpAddressType value);
} // namespace WorkforceIpAddressTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
