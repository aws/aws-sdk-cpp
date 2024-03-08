/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkResourceFilterKeys.h>
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
      namespace NetworkResourceFilterKeysMapper
      {

        static const int ORDER_HASH = HashingUtils::HashString("ORDER");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");


        NetworkResourceFilterKeys GetNetworkResourceFilterKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORDER_HASH)
          {
            return NetworkResourceFilterKeys::ORDER;
          }
          else if (hashCode == STATUS_HASH)
          {
            return NetworkResourceFilterKeys::STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkResourceFilterKeys>(hashCode);
          }

          return NetworkResourceFilterKeys::NOT_SET;
        }

        Aws::String GetNameForNetworkResourceFilterKeys(NetworkResourceFilterKeys enumValue)
        {
          switch(enumValue)
          {
          case NetworkResourceFilterKeys::NOT_SET:
            return {};
          case NetworkResourceFilterKeys::ORDER:
            return "ORDER";
          case NetworkResourceFilterKeys::STATUS:
            return "STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkResourceFilterKeysMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
