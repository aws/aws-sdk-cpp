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
  enum class ResourceType
  {
    NOT_SET,
    Opportunity
  };

namespace ResourceTypeMapper
{
AWS_PARTNERCENTRALSELLING_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
