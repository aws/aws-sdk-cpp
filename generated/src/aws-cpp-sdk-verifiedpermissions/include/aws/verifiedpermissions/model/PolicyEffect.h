/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>

namespace Aws {
namespace VerifiedPermissions {
namespace Model {
enum class PolicyEffect { NOT_SET, Permit, Forbid };

namespace PolicyEffectMapper {
AWS_VERIFIEDPERMISSIONS_API PolicyEffect GetPolicyEffectForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForPolicyEffect(PolicyEffect value);
}  // namespace PolicyEffectMapper
}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
