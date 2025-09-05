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
  enum class IPAddressType
  {
    NOT_SET,
    ipv4,
    dualstack
  };

namespace IPAddressTypeMapper
{
AWS_SAGEMAKER_API IPAddressType GetIPAddressTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForIPAddressType(IPAddressType value);
} // namespace IPAddressTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
