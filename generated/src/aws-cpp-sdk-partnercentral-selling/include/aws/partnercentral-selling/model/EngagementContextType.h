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
  enum class EngagementContextType
  {
    NOT_SET,
    CustomerProject
  };

namespace EngagementContextTypeMapper
{
AWS_PARTNERCENTRALSELLING_API EngagementContextType GetEngagementContextTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForEngagementContextType(EngagementContextType value);
} // namespace EngagementContextTypeMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
