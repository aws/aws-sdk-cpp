/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/OrderFilterKeys.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace OrderFilterKeysMapper
      {

        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int NETWORK_SITE_HASH = HashingUtils::HashString("NETWORK_SITE");


        OrderFilterKeys GetOrderFilterKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return OrderFilterKeys::STATUS;
          }
          else if (hashCode == NETWORK_SITE_HASH)
          {
            return OrderFilterKeys::NETWORK_SITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderFilterKeys>(hashCode);
          }

          return OrderFilterKeys::NOT_SET;
        }

        Aws::String GetNameForOrderFilterKeys(OrderFilterKeys enumValue)
        {
          switch(enumValue)
          {
          case OrderFilterKeys::NOT_SET:
            return {};
          case OrderFilterKeys::STATUS:
            return "STATUS";
          case OrderFilterKeys::NETWORK_SITE:
            return "NETWORK_SITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderFilterKeysMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
