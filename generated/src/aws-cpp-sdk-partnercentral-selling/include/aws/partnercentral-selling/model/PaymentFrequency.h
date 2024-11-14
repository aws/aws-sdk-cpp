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
  enum class PaymentFrequency
  {
    NOT_SET,
    Monthly
  };

namespace PaymentFrequencyMapper
{
AWS_PARTNERCENTRALSELLING_API PaymentFrequency GetPaymentFrequencyForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForPaymentFrequency(PaymentFrequency value);
} // namespace PaymentFrequencyMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
