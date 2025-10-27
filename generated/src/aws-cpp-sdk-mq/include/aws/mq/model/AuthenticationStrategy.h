/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/MQ_EXPORTS.h>

namespace Aws {
namespace MQ {
namespace Model {
enum class AuthenticationStrategy { NOT_SET, SIMPLE, LDAP, CONFIG_MANAGED };

namespace AuthenticationStrategyMapper {
AWS_MQ_API AuthenticationStrategy GetAuthenticationStrategyForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForAuthenticationStrategy(AuthenticationStrategy value);
}  // namespace AuthenticationStrategyMapper
}  // namespace Model
}  // namespace MQ
}  // namespace Aws
