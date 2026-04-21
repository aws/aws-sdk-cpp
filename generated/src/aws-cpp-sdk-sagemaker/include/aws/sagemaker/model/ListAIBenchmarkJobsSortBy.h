/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class ListAIBenchmarkJobsSortBy { NOT_SET, Name, CreationTime, Status };

namespace ListAIBenchmarkJobsSortByMapper {
AWS_SAGEMAKER_API ListAIBenchmarkJobsSortBy GetListAIBenchmarkJobsSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListAIBenchmarkJobsSortBy(ListAIBenchmarkJobsSortBy value);
}  // namespace ListAIBenchmarkJobsSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
