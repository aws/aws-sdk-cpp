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
  enum class ProductSource
  {
    NOT_SET,
    ACCOUNT
  };

namespace ProductSourceMapper
{
AWS_SERVICECATALOG_API ProductSource GetProductSourceForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProductSource(ProductSource value);
} // namespace ProductSourceMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
