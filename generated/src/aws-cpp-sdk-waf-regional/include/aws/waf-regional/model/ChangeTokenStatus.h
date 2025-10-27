/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/WAFRegional_EXPORTS.h>

namespace Aws {
namespace WAFRegional {
namespace Model {
enum class ChangeTokenStatus { NOT_SET, PROVISIONED, PENDING, INSYNC };

namespace ChangeTokenStatusMapper {
AWS_WAFREGIONAL_API ChangeTokenStatus GetChangeTokenStatusForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForChangeTokenStatus(ChangeTokenStatus value);
}  // namespace ChangeTokenStatusMapper
}  // namespace Model
}  // namespace WAFRegional
}  // namespace Aws
