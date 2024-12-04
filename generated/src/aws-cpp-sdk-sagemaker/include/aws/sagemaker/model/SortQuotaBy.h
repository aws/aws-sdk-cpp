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
  enum class SortQuotaBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status,
    ClusterArn
  };

namespace SortQuotaByMapper
{
AWS_SAGEMAKER_API SortQuotaBy GetSortQuotaByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortQuotaBy(SortQuotaBy value);
} // namespace SortQuotaByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
