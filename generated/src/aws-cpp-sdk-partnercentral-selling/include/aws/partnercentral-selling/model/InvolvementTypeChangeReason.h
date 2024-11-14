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
  enum class InvolvementTypeChangeReason
  {
    NOT_SET,
    Expansion_Opportunity,
    Change_in_Deal_Information,
    Customer_Requested,
    Technical_Complexity,
    Risk_Mitigation
  };

namespace InvolvementTypeChangeReasonMapper
{
AWS_PARTNERCENTRALSELLING_API InvolvementTypeChangeReason GetInvolvementTypeChangeReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForInvolvementTypeChangeReason(InvolvementTypeChangeReason value);
} // namespace InvolvementTypeChangeReasonMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
