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
  enum class HubContentSupportStatus
  {
    NOT_SET,
    Supported,
    Deprecated,
    Restricted
  };

namespace HubContentSupportStatusMapper
{
AWS_SAGEMAKER_API HubContentSupportStatus GetHubContentSupportStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHubContentSupportStatus(HubContentSupportStatus value);
} // namespace HubContentSupportStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
