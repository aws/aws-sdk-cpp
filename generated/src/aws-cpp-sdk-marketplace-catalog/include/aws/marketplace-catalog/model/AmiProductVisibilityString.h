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
  enum class AmiProductVisibilityString
  {
    NOT_SET,
    Limited,
    Public,
    Restricted,
    Draft
  };

namespace AmiProductVisibilityStringMapper
{
AWS_MARKETPLACECATALOG_API AmiProductVisibilityString GetAmiProductVisibilityStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForAmiProductVisibilityString(AmiProductVisibilityString value);
} // namespace AmiProductVisibilityStringMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
