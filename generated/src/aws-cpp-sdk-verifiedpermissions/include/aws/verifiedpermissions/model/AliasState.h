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
enum class AliasState { NOT_SET, Active, PendingDeletion };

namespace AliasStateMapper {
AWS_VERIFIEDPERMISSIONS_API AliasState GetAliasStateForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForAliasState(AliasState value);
}  // namespace AliasStateMapper
}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
