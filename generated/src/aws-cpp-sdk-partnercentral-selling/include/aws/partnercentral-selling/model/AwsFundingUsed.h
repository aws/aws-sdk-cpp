/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class AwsFundingUsed
  {
    NOT_SET,
    Yes,
    No
  };

namespace AwsFundingUsedMapper
{
AWS_PARTNERCENTRALSELLING_API AwsFundingUsed GetAwsFundingUsedForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForAwsFundingUsed(AwsFundingUsed value);
} // namespace AwsFundingUsedMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
