/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class SearchFilterOperator { NOT_SET, StringEquals, StringLike };

namespace SearchFilterOperatorMapper {
AWS_QUICKSIGHT_API SearchFilterOperator GetSearchFilterOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSearchFilterOperator(SearchFilterOperator value);
}  // namespace SearchFilterOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
