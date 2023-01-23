﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{
  enum class FirewallFailOpenStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace FirewallFailOpenStatusMapper
{
AWS_ROUTE53RESOLVER_API FirewallFailOpenStatus GetFirewallFailOpenStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForFirewallFailOpenStatus(FirewallFailOpenStatus value);
} // namespace FirewallFailOpenStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
