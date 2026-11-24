/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>

namespace Aws {
namespace Route53 {
namespace Model {
enum class ChangeHistorySortOrder { NOT_SET, ASCENDING, DESCENDING };

namespace ChangeHistorySortOrderMapper {
AWS_ROUTE53_API ChangeHistorySortOrder GetChangeHistorySortOrderForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForChangeHistorySortOrder(ChangeHistorySortOrder value);
}  // namespace ChangeHistorySortOrderMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
