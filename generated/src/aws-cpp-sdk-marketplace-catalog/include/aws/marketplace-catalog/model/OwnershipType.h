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
  enum class OwnershipType
  {
    NOT_SET,
    SELF,
    SHARED
  };

namespace OwnershipTypeMapper
{
AWS_MARKETPLACECATALOG_API OwnershipType GetOwnershipTypeForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForOwnershipType(OwnershipType value);
} // namespace OwnershipTypeMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
