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
  enum class OutpostResolverStatus
  {
    NOT_SET,
    CREATING,
    OPERATIONAL,
    UPDATING,
    DELETING,
    ACTION_NEEDED,
    FAILED_CREATION,
    FAILED_DELETION
  };

namespace OutpostResolverStatusMapper
{
AWS_ROUTE53RESOLVER_API OutpostResolverStatus GetOutpostResolverStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForOutpostResolverStatus(OutpostResolverStatus value);
} // namespace OutpostResolverStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
