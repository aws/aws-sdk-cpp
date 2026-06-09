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
enum class DeletionMode { NOT_SET, SoftDelete, HardDelete };

namespace DeletionModeMapper {
AWS_VERIFIEDPERMISSIONS_API DeletionMode GetDeletionModeForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForDeletionMode(DeletionMode value);
}  // namespace DeletionModeMapper
}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
