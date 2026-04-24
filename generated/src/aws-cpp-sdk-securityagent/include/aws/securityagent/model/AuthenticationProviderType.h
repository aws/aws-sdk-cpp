/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class AuthenticationProviderType { NOT_SET, SECRETS_MANAGER, AWS_LAMBDA, AWS_IAM_ROLE, AWS_INTERNAL };

namespace AuthenticationProviderTypeMapper {
AWS_SECURITYAGENT_API AuthenticationProviderType GetAuthenticationProviderTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForAuthenticationProviderType(AuthenticationProviderType value);
}  // namespace AuthenticationProviderTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
