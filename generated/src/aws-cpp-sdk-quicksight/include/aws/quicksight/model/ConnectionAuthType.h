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
enum class ConnectionAuthType { NOT_SET, BASIC, API_KEY, OAUTH2_CLIENT_CREDENTIALS, NONE, IAM, OAUTH2_AUTHORIZATION_CODE };

namespace ConnectionAuthTypeMapper {
AWS_QUICKSIGHT_API ConnectionAuthType GetConnectionAuthTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForConnectionAuthType(ConnectionAuthType value);
}  // namespace ConnectionAuthTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
