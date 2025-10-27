/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/Redshift_EXPORTS.h>

namespace Aws {
namespace Redshift {
namespace Model {
enum class AuthorizationStatus { NOT_SET, Authorized, Revoking };

namespace AuthorizationStatusMapper {
AWS_REDSHIFT_API AuthorizationStatus GetAuthorizationStatusForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForAuthorizationStatus(AuthorizationStatus value);
}  // namespace AuthorizationStatusMapper
}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
