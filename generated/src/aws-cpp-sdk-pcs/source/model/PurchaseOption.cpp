/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/PurchaseOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PCS
  {
    namespace Model
    {
      namespace PurchaseOptionMapper
      {

        static const int ONDEMAND_HASH = HashingUtils::HashString("ONDEMAND");
        static const int SPOT_HASH = HashingUtils::HashString("SPOT");
        static const int CAPACITY_BLOCK_HASH = HashingUtils::HashString("CAPACITY_BLOCK");


        PurchaseOption GetPurchaseOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONDEMAND_HASH)
          {
            return PurchaseOption::ONDEMAND;
          }
          else if (hashCode == SPOT_HASH)
          {
            return PurchaseOption::SPOT;
          }
          else if (hashCode == CAPACITY_BLOCK_HASH)
          {
            return PurchaseOption::CAPACITY_BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PurchaseOption>(hashCode);
          }

          return PurchaseOption::NOT_SET;
        }

        Aws::String GetNameForPurchaseOption(PurchaseOption enumValue)
        {
          switch(enumValue)
          {
          case PurchaseOption::NOT_SET:
            return {};
          case PurchaseOption::ONDEMAND:
            return "ONDEMAND";
          case PurchaseOption::SPOT:
            return "SPOT";
          case PurchaseOption::CAPACITY_BLOCK:
            return "CAPACITY_BLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PurchaseOptionMapper
    } // namespace Model
  } // namespace PCS
} // namespace Aws
