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
  enum class DataProductVisibilityString
  {
    NOT_SET,
    Limited,
    Public,
    Restricted,
    Unavailable,
    Draft
  };

namespace DataProductVisibilityStringMapper
{
AWS_MARKETPLACECATALOG_API DataProductVisibilityString GetDataProductVisibilityStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForDataProductVisibilityString(DataProductVisibilityString value);
} // namespace DataProductVisibilityStringMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
