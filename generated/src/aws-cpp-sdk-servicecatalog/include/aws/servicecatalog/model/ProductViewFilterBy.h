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
  enum class ProductViewFilterBy
  {
    NOT_SET,
    FullTextSearch,
    Owner,
    ProductType,
    SourceProductId
  };

namespace ProductViewFilterByMapper
{
AWS_SERVICECATALOG_API ProductViewFilterBy GetProductViewFilterByForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProductViewFilterBy(ProductViewFilterBy value);
} // namespace ProductViewFilterByMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
