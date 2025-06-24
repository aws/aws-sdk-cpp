/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/MarketTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace MarketTypeEnumMapper
      {

        static const int spot_HASH = HashingUtils::HashString("spot");
        static const int capacity_block_HASH = HashingUtils::HashString("capacity-block");


        MarketTypeEnum GetMarketTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == spot_HASH)
          {
            return MarketTypeEnum::spot;
          }
          else if (hashCode == capacity_block_HASH)
          {
            return MarketTypeEnum::capacity_block;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MarketTypeEnum>(hashCode);
          }

          return MarketTypeEnum::NOT_SET;
        }

        Aws::String GetNameForMarketTypeEnum(MarketTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case MarketTypeEnum::NOT_SET:
            return {};
          case MarketTypeEnum::spot:
            return "spot";
          case MarketTypeEnum::capacity_block:
            return "capacity-block";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MarketTypeEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
