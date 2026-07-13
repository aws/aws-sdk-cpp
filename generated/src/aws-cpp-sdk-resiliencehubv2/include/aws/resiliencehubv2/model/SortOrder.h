/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class SortOrder { NOT_SET, ASC, DESC };

namespace SortOrderMapper {
AWS_RESILIENCEHUBV2_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForSortOrder(SortOrder value);
}  // namespace SortOrderMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
