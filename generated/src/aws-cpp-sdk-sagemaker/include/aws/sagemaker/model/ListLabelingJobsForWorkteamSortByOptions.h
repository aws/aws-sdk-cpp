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
  enum class ListLabelingJobsForWorkteamSortByOptions
  {
    NOT_SET,
    CreationTime
  };

namespace ListLabelingJobsForWorkteamSortByOptionsMapper
{
AWS_SAGEMAKER_API ListLabelingJobsForWorkteamSortByOptions GetListLabelingJobsForWorkteamSortByOptionsForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListLabelingJobsForWorkteamSortByOptions(ListLabelingJobsForWorkteamSortByOptions value);
} // namespace ListLabelingJobsForWorkteamSortByOptionsMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
