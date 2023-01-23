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
  enum class ShareStatus
  {
    NOT_SET,
    NOT_SHARED,
    SHARED_WITH_ME,
    SHARED_BY_ME
  };

namespace ShareStatusMapper
{
AWS_ROUTE53RESOLVER_API ShareStatus GetShareStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForShareStatus(ShareStatus value);
} // namespace ShareStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
