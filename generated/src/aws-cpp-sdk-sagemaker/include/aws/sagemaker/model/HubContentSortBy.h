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
  enum class HubContentSortBy
  {
    NOT_SET,
    HubContentName,
    CreationTime,
    HubContentStatus
  };

namespace HubContentSortByMapper
{
AWS_SAGEMAKER_API HubContentSortBy GetHubContentSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHubContentSortBy(HubContentSortBy value);
} // namespace HubContentSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
