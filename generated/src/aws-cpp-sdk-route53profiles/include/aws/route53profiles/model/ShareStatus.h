/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Profiles
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
AWS_ROUTE53PROFILES_API ShareStatus GetShareStatusForName(const Aws::String& name);

AWS_ROUTE53PROFILES_API Aws::String GetNameForShareStatus(ShareStatus value);
} // namespace ShareStatusMapper
} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
