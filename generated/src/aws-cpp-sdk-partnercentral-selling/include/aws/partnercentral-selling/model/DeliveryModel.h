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
  enum class DeliveryModel
  {
    NOT_SET,
    SaaS_or_PaaS,
    BYOL_or_AMI,
    Managed_Services,
    Professional_Services,
    Resell,
    Other
  };

namespace DeliveryModelMapper
{
AWS_PARTNERCENTRALSELLING_API DeliveryModel GetDeliveryModelForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForDeliveryModel(DeliveryModel value);
} // namespace DeliveryModelMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
