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
  enum class ProfileStatus
  {
    NOT_SET,
    COMPLETE,
    DELETING,
    UPDATING,
    CREATING,
    DELETED,
    FAILED
  };

namespace ProfileStatusMapper
{
AWS_ROUTE53PROFILES_API ProfileStatus GetProfileStatusForName(const Aws::String& name);

AWS_ROUTE53PROFILES_API Aws::String GetNameForProfileStatus(ProfileStatus value);
} // namespace ProfileStatusMapper
} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
