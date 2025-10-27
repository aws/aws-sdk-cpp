/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>

namespace Aws {
namespace SSOAdmin {
namespace Model {
enum class PrincipalType { NOT_SET, USER, GROUP };

namespace PrincipalTypeMapper {
AWS_SSOADMIN_API PrincipalType GetPrincipalTypeForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForPrincipalType(PrincipalType value);
}  // namespace PrincipalTypeMapper
}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
