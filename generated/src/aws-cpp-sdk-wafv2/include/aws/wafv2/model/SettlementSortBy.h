/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class SettlementSortBy { NOT_SET, TIMESTAMP, AMOUNT, NAME, STATUS };

namespace SettlementSortByMapper {
AWS_WAFV2_API SettlementSortBy GetSettlementSortByForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForSettlementSortBy(SettlementSortBy value);
}  // namespace SettlementSortByMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
