/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class AuthScheme { NOT_SET, SECRETS };

namespace AuthSchemeMapper {
AWS_RDS_API AuthScheme GetAuthSchemeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForAuthScheme(AuthScheme value);
}  // namespace AuthSchemeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
