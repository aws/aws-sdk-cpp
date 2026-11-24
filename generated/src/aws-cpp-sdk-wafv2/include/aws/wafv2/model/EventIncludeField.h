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
enum class EventIncludeField { NOT_SET, TIMELINE };

namespace EventIncludeFieldMapper {
AWS_WAFV2_API EventIncludeField GetEventIncludeFieldForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForEventIncludeField(EventIncludeField value);
}  // namespace EventIncludeFieldMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
