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
  enum class Protocol
  {
    NOT_SET,
    DoH,
    Do53,
    DoH_FIPS
  };

namespace ProtocolMapper
{
AWS_ROUTE53RESOLVER_API Protocol GetProtocolForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
