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
  enum class MachineLearningProductSortBy
  {
    NOT_SET,
    EntityId,
    LastModifiedDate,
    ProductTitle,
    Visibility
  };

namespace MachineLearningProductSortByMapper
{
AWS_MARKETPLACECATALOG_API MachineLearningProductSortBy GetMachineLearningProductSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForMachineLearningProductSortBy(MachineLearningProductSortBy value);
} // namespace MachineLearningProductSortByMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
