/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
namespace Model {
enum class SortOrder { NOT_SET, ASCENDING, DESCENDING };

namespace SortOrderMapper {
AWS_PAYMENTS_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForSortOrder(SortOrder value);
}  // namespace SortOrderMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
