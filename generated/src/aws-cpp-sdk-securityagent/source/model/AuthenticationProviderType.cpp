/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/AuthenticationProviderType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace AuthenticationProviderTypeMapper {

static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");
static const int AWS_LAMBDA_HASH = HashingUtils::HashString("AWS_LAMBDA");
static const int AWS_IAM_ROLE_HASH = HashingUtils::HashString("AWS_IAM_ROLE");
static const int AWS_INTERNAL_HASH = HashingUtils::HashString("AWS_INTERNAL");

AuthenticationProviderType GetAuthenticationProviderTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SECRETS_MANAGER_HASH) {
    return AuthenticationProviderType::SECRETS_MANAGER;
  } else if (hashCode == AWS_LAMBDA_HASH) {
    return AuthenticationProviderType::AWS_LAMBDA;
  } else if (hashCode == AWS_IAM_ROLE_HASH) {
    return AuthenticationProviderType::AWS_IAM_ROLE;
  } else if (hashCode == AWS_INTERNAL_HASH) {
    return AuthenticationProviderType::AWS_INTERNAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AuthenticationProviderType>(hashCode);
  }

  return AuthenticationProviderType::NOT_SET;
}

Aws::String GetNameForAuthenticationProviderType(AuthenticationProviderType enumValue) {
  switch (enumValue) {
    case AuthenticationProviderType::NOT_SET:
      return {};
    case AuthenticationProviderType::SECRETS_MANAGER:
      return "SECRETS_MANAGER";
    case AuthenticationProviderType::AWS_LAMBDA:
      return "AWS_LAMBDA";
    case AuthenticationProviderType::AWS_IAM_ROLE:
      return "AWS_IAM_ROLE";
    case AuthenticationProviderType::AWS_INTERNAL:
      return "AWS_INTERNAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AuthenticationProviderTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
