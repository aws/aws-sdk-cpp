﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mq/model/AuthenticationStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace MQ {
namespace Model {
namespace AuthenticationStrategyMapper {

static const int SIMPLE_HASH = HashingUtils::HashString("SIMPLE");
static const int LDAP_HASH = HashingUtils::HashString("LDAP");
static const int CONFIG_MANAGED_HASH = HashingUtils::HashString("CONFIG_MANAGED");

AuthenticationStrategy GetAuthenticationStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SIMPLE_HASH) {
    return AuthenticationStrategy::SIMPLE;
  } else if (hashCode == LDAP_HASH) {
    return AuthenticationStrategy::LDAP;
  } else if (hashCode == CONFIG_MANAGED_HASH) {
    return AuthenticationStrategy::CONFIG_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AuthenticationStrategy>(hashCode);
  }

  return AuthenticationStrategy::NOT_SET;
}

Aws::String GetNameForAuthenticationStrategy(AuthenticationStrategy enumValue) {
  switch (enumValue) {
    case AuthenticationStrategy::NOT_SET:
      return {};
    case AuthenticationStrategy::SIMPLE:
      return "SIMPLE";
    case AuthenticationStrategy::LDAP:
      return "LDAP";
    case AuthenticationStrategy::CONFIG_MANAGED:
      return "CONFIG_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AuthenticationStrategyMapper
}  // namespace Model
}  // namespace MQ
}  // namespace Aws
