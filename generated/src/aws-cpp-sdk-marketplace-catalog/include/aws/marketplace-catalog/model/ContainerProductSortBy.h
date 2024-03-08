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
  enum class ContainerProductSortBy
  {
    NOT_SET,
    EntityId,
    LastModifiedDate,
    ProductTitle,
    Visibility
  };

namespace ContainerProductSortByMapper
{
AWS_MARKETPLACECATALOG_API ContainerProductSortBy GetContainerProductSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForContainerProductSortBy(ContainerProductSortBy value);
} // namespace ContainerProductSortByMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
