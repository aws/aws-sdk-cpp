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
  enum class SortTrackingServerBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace SortTrackingServerByMapper
{
AWS_SAGEMAKER_API SortTrackingServerBy GetSortTrackingServerByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortTrackingServerBy(SortTrackingServerBy value);
} // namespace SortTrackingServerByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
