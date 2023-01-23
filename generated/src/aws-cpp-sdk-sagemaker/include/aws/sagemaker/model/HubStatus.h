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
  enum class HubStatus
  {
    NOT_SET,
    InService,
    Creating,
    Updating,
    Deleting,
    CreateFailed,
    UpdateFailed,
    DeleteFailed
  };

namespace HubStatusMapper
{
AWS_SAGEMAKER_API HubStatus GetHubStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHubStatus(HubStatus value);
} // namespace HubStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
