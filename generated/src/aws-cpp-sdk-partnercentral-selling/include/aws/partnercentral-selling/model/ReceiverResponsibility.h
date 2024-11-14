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
  enum class ReceiverResponsibility
  {
    NOT_SET,
    Distributor,
    Reseller,
    Hardware_Partner,
    Managed_Service_Provider,
    Software_Partner,
    Services_Partner,
    Training_Partner,
    Co_Sell_Facilitator,
    Facilitator
  };

namespace ReceiverResponsibilityMapper
{
AWS_PARTNERCENTRALSELLING_API ReceiverResponsibility GetReceiverResponsibilityForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForReceiverResponsibility(ReceiverResponsibility value);
} // namespace ReceiverResponsibilityMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
