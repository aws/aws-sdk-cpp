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
  enum class ListInferenceRecommendationsJobsSortBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace ListInferenceRecommendationsJobsSortByMapper
{
AWS_SAGEMAKER_API ListInferenceRecommendationsJobsSortBy GetListInferenceRecommendationsJobsSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListInferenceRecommendationsJobsSortBy(ListInferenceRecommendationsJobsSortBy value);
} // namespace ListInferenceRecommendationsJobsSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
