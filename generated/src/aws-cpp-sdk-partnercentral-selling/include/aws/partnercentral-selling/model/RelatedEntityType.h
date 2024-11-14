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
  enum class RelatedEntityType
  {
    NOT_SET,
    Solutions,
    AwsProducts,
    AwsMarketplaceOffers
  };

namespace RelatedEntityTypeMapper
{
AWS_PARTNERCENTRALSELLING_API RelatedEntityType GetRelatedEntityTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForRelatedEntityType(RelatedEntityType value);
} // namespace RelatedEntityTypeMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
