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
  enum class PartnerAppStatus
  {
    NOT_SET,
    Creating,
    Updating,
    Deleting,
    Available,
    Failed,
    UpdateFailed,
    Deleted
  };

namespace PartnerAppStatusMapper
{
AWS_SAGEMAKER_API PartnerAppStatus GetPartnerAppStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForPartnerAppStatus(PartnerAppStatus value);
} // namespace PartnerAppStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
