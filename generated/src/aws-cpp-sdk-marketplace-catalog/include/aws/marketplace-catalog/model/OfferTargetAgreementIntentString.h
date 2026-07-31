/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class OfferTargetAgreementIntentString { NOT_SET, Renew };

namespace OfferTargetAgreementIntentStringMapper {
AWS_MARKETPLACECATALOG_API OfferTargetAgreementIntentString GetOfferTargetAgreementIntentStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForOfferTargetAgreementIntentString(OfferTargetAgreementIntentString value);
}  // namespace OfferTargetAgreementIntentStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
