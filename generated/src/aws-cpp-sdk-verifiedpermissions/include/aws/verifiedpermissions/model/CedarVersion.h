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
enum class CedarVersion { NOT_SET, CEDAR_2, CEDAR_4 };

namespace CedarVersionMapper {
AWS_VERIFIEDPERMISSIONS_API CedarVersion GetCedarVersionForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForCedarVersion(CedarVersion value);
}  // namespace CedarVersionMapper
}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
