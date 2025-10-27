/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/WAF_EXPORTS.h>

namespace Aws {
namespace WAF {
namespace Model {
enum class ChangeTokenStatus { NOT_SET, PROVISIONED, PENDING, INSYNC };

namespace ChangeTokenStatusMapper {
AWS_WAF_API ChangeTokenStatus GetChangeTokenStatusForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForChangeTokenStatus(ChangeTokenStatus value);
}  // namespace ChangeTokenStatusMapper
}  // namespace Model
}  // namespace WAF
}  // namespace Aws
