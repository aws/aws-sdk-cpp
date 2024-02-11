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
  enum class SaaSProductVisibilityString
  {
    NOT_SET,
    Limited,
    Public,
    Restricted,
    Draft
  };

namespace SaaSProductVisibilityStringMapper
{
AWS_MARKETPLACECATALOG_API SaaSProductVisibilityString GetSaaSProductVisibilityStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForSaaSProductVisibilityString(SaaSProductVisibilityString value);
} // namespace SaaSProductVisibilityStringMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
