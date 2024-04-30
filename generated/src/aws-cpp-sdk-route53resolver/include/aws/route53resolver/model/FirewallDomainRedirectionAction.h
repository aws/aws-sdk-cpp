/**
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
  enum class FirewallDomainRedirectionAction
  {
    NOT_SET,
    INSPECT_REDIRECTION_DOMAIN,
    TRUST_REDIRECTION_DOMAIN
  };

namespace FirewallDomainRedirectionActionMapper
{
AWS_ROUTE53RESOLVER_API FirewallDomainRedirectionAction GetFirewallDomainRedirectionActionForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForFirewallDomainRedirectionAction(FirewallDomainRedirectionAction value);
} // namespace FirewallDomainRedirectionActionMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
