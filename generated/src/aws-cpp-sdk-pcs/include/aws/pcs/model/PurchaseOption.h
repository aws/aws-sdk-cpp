/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PCS
{
namespace Model
{
  enum class PurchaseOption
  {
    NOT_SET,
    ONDEMAND,
    SPOT,
    CAPACITY_BLOCK
  };

namespace PurchaseOptionMapper
{
AWS_PCS_API PurchaseOption GetPurchaseOptionForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForPurchaseOption(PurchaseOption value);
} // namespace PurchaseOptionMapper
} // namespace Model
} // namespace PCS
} // namespace Aws
