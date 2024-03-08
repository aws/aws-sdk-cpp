/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace repostspace
{
namespace Model
{
  enum class VanityDomainStatus
  {
    NOT_SET,
    PENDING,
    APPROVED,
    UNAPPROVED
  };

namespace VanityDomainStatusMapper
{
AWS_REPOSTSPACE_API VanityDomainStatus GetVanityDomainStatusForName(const Aws::String& name);

AWS_REPOSTSPACE_API Aws::String GetNameForVanityDomainStatus(VanityDomainStatus value);
} // namespace VanityDomainStatusMapper
} // namespace Model
} // namespace repostspace
} // namespace Aws
