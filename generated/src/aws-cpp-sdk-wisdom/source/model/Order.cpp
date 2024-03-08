/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/Order.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectWisdomService
  {
    namespace Model
    {
      namespace OrderMapper
      {

        static const int ASC_HASH = HashingUtils::HashString("ASC");
        static const int DESC_HASH = HashingUtils::HashString("DESC");


        Order GetOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASC_HASH)
          {
            return Order::ASC;
          }
          else if (hashCode == DESC_HASH)
          {
            return Order::DESC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Order>(hashCode);
          }

          return Order::NOT_SET;
        }

        Aws::String GetNameForOrder(Order enumValue)
        {
          switch(enumValue)
          {
          case Order::NOT_SET:
            return {};
          case Order::ASC:
            return "ASC";
          case Order::DESC:
            return "DESC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
