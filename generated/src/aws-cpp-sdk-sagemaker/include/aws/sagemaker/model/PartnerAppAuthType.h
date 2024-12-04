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
  enum class PartnerAppAuthType
  {
    NOT_SET,
    IAM
  };

namespace PartnerAppAuthTypeMapper
{
AWS_SAGEMAKER_API PartnerAppAuthType GetPartnerAppAuthTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForPartnerAppAuthType(PartnerAppAuthType value);
} // namespace PartnerAppAuthTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
