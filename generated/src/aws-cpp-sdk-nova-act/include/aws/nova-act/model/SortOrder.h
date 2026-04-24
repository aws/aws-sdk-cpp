/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Model {
enum class SortOrder { NOT_SET, Ascending, Descending };

namespace SortOrderMapper {
AWS_NOVAACT_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_NOVAACT_API Aws::String GetNameForSortOrder(SortOrder value);
}  // namespace SortOrderMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
