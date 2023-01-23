/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
namespace Model
{
  enum class SupportDataSetType
  {
    NOT_SET,
    customer_support_contacts_data,
    test_customer_support_contacts_data
  };

namespace SupportDataSetTypeMapper
{
AWS_MARKETPLACECOMMERCEANALYTICS_API SupportDataSetType GetSupportDataSetTypeForName(const Aws::String& name);

AWS_MARKETPLACECOMMERCEANALYTICS_API Aws::String GetNameForSupportDataSetType(SupportDataSetType value);
} // namespace SupportDataSetTypeMapper
} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
