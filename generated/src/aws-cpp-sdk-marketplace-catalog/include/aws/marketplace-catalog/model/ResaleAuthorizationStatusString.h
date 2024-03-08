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
  enum class ResaleAuthorizationStatusString
  {
    NOT_SET,
    Draft,
    Active,
    Restricted
  };

namespace ResaleAuthorizationStatusStringMapper
{
AWS_MARKETPLACECATALOG_API ResaleAuthorizationStatusString GetResaleAuthorizationStatusStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForResaleAuthorizationStatusString(ResaleAuthorizationStatusString value);
} // namespace ResaleAuthorizationStatusStringMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
