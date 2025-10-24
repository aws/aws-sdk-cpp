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
enum class DataProtectionAction { NOT_SET, SUBSTITUTION, HASH };

namespace DataProtectionActionMapper {
AWS_WAFV2_API DataProtectionAction GetDataProtectionActionForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForDataProtectionAction(DataProtectionAction value);
}  // namespace DataProtectionActionMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
