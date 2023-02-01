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
  enum class HubContentStatus
  {
    NOT_SET,
    Available,
    Importing,
    Deleting,
    ImportFailed,
    DeleteFailed
  };

namespace HubContentStatusMapper
{
AWS_SAGEMAKER_API HubContentStatus GetHubContentStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHubContentStatus(HubContentStatus value);
} // namespace HubContentStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
