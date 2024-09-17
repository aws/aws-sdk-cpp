/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class PurchaseMode
  {
    NOT_SET,
    MANUAL,
    AUTO_PURCHASE
  };

namespace PurchaseModeMapper
{
AWS_QUICKSIGHT_API PurchaseMode GetPurchaseModeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPurchaseMode(PurchaseMode value);
} // namespace PurchaseModeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
