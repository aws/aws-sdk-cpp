/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
enum class TermType {
  NOT_SET,
  ByolPricingTerm,
  ConfigurableUpfrontPricingTerm,
  FixedUpfrontPricingTerm,
  UsageBasedPricingTerm,
  FreeTrialPricingTerm,
  LegalTerm,
  PaymentScheduleTerm,
  RecurringPaymentTerm,
  RenewalTerm,
  SupportTerm,
  ValidityTerm,
  VariablePaymentTerm
};

namespace TermTypeMapper {
AWS_MARKETPLACEDISCOVERY_API TermType GetTermTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForTermType(TermType value);
}  // namespace TermTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
