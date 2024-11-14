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
  enum class SalesInvolvementType
  {
    NOT_SET,
    For_Visibility_Only,
    Co_Sell
  };

namespace SalesInvolvementTypeMapper
{
AWS_PARTNERCENTRALSELLING_API SalesInvolvementType GetSalesInvolvementTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForSalesInvolvementType(SalesInvolvementType value);
} // namespace SalesInvolvementTypeMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
