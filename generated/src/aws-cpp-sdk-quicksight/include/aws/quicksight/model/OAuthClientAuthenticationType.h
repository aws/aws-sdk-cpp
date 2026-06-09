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
enum class OAuthClientAuthenticationType { NOT_SET, TOKEN };

namespace OAuthClientAuthenticationTypeMapper {
AWS_QUICKSIGHT_API OAuthClientAuthenticationType GetOAuthClientAuthenticationTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForOAuthClientAuthenticationType(OAuthClientAuthenticationType value);
}  // namespace OAuthClientAuthenticationTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
