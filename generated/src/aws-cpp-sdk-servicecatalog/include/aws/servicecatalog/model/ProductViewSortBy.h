/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class ProductViewSortBy
  {
    NOT_SET,
    Title,
    VersionCount,
    CreationDate
  };

namespace ProductViewSortByMapper
{
AWS_SERVICECATALOG_API ProductViewSortBy GetProductViewSortByForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProductViewSortBy(ProductViewSortBy value);
} // namespace ProductViewSortByMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
