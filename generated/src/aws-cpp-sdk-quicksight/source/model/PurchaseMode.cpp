/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PurchaseMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace PurchaseModeMapper
      {

        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
        static const int AUTO_PURCHASE_HASH = HashingUtils::HashString("AUTO_PURCHASE");


        PurchaseMode GetPurchaseModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_HASH)
          {
            return PurchaseMode::MANUAL;
          }
          else if (hashCode == AUTO_PURCHASE_HASH)
          {
            return PurchaseMode::AUTO_PURCHASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PurchaseMode>(hashCode);
          }

          return PurchaseMode::NOT_SET;
        }

        Aws::String GetNameForPurchaseMode(PurchaseMode enumValue)
        {
          switch(enumValue)
          {
          case PurchaseMode::NOT_SET:
            return {};
          case PurchaseMode::MANUAL:
            return "MANUAL";
          case PurchaseMode::AUTO_PURCHASE:
            return "AUTO_PURCHASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PurchaseModeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
