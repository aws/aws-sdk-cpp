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
enum class SettlementStatus { NOT_SET, SETTLED, PENDING, FAILED, SERVICE_ERROR, SKIPPED_ORIGIN_ERROR, DUPLICATE };

namespace SettlementStatusMapper {
AWS_WAFV2_API SettlementStatus GetSettlementStatusForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForSettlementStatus(SettlementStatus value);
}  // namespace SettlementStatusMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
