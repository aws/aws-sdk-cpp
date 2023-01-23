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
  enum class PortfolioShareType
  {
    NOT_SET,
    IMPORTED,
    AWS_SERVICECATALOG,
    AWS_ORGANIZATIONS
  };

namespace PortfolioShareTypeMapper
{
AWS_SERVICECATALOG_API PortfolioShareType GetPortfolioShareTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForPortfolioShareType(PortfolioShareType value);
} // namespace PortfolioShareTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
