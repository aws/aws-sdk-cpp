/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{
  enum class OfferStateString
  {
    NOT_SET,
    Draft,
    Released
  };

namespace OfferStateStringMapper
{
AWS_MARKETPLACECATALOG_API OfferStateString GetOfferStateStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForOfferStateString(OfferStateString value);
} // namespace OfferStateStringMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
