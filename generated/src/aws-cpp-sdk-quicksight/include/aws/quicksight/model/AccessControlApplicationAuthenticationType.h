/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class AccessControlApplicationAuthenticationType { NOT_SET, OIDC };

namespace AccessControlApplicationAuthenticationTypeMapper {
AWS_QUICKSIGHT_API AccessControlApplicationAuthenticationType GetAccessControlApplicationAuthenticationTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAccessControlApplicationAuthenticationType(AccessControlApplicationAuthenticationType value);
}  // namespace AccessControlApplicationAuthenticationTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
