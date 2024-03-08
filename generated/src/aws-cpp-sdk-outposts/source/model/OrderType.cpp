/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/OrderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace OrderTypeMapper
      {

        static const int OUTPOST_HASH = HashingUtils::HashString("OUTPOST");
        static const int REPLACEMENT_HASH = HashingUtils::HashString("REPLACEMENT");


        OrderType GetOrderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OUTPOST_HASH)
          {
            return OrderType::OUTPOST;
          }
          else if (hashCode == REPLACEMENT_HASH)
          {
            return OrderType::REPLACEMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderType>(hashCode);
          }

          return OrderType::NOT_SET;
        }

        Aws::String GetNameForOrderType(OrderType enumValue)
        {
          switch(enumValue)
          {
          case OrderType::NOT_SET:
            return {};
          case OrderType::OUTPOST:
            return "OUTPOST";
          case OrderType::REPLACEMENT:
            return "REPLACEMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderTypeMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
