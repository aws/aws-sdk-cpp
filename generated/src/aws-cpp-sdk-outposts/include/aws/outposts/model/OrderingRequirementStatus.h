/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class OrderingRequirementStatus { NOT_SET, PASS, FAIL, EXEMPT };

namespace OrderingRequirementStatusMapper {
AWS_OUTPOSTS_API OrderingRequirementStatus GetOrderingRequirementStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForOrderingRequirementStatus(OrderingRequirementStatus value);
}  // namespace OrderingRequirementStatusMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
