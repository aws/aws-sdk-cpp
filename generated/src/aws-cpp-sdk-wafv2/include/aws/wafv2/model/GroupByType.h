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
enum class GroupByType { NOT_SET, NAME, CATEGORY, INTENT, ORGANIZATION, WEBACL };

namespace GroupByTypeMapper {
AWS_WAFV2_API GroupByType GetGroupByTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForGroupByType(GroupByType value);
}  // namespace GroupByTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
