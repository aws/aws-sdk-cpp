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
enum class AuthorizationCodeGrantCredentialsSource { NOT_SET, PLAIN_CREDENTIALS };

namespace AuthorizationCodeGrantCredentialsSourceMapper {
AWS_QUICKSIGHT_API AuthorizationCodeGrantCredentialsSource GetAuthorizationCodeGrantCredentialsSourceForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAuthorizationCodeGrantCredentialsSource(AuthorizationCodeGrantCredentialsSource value);
}  // namespace AuthorizationCodeGrantCredentialsSourceMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
