/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkFilterKeys.h>
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
      namespace NetworkFilterKeysMapper
      {

        static const int STATUS_HASH = HashingUtils::HashString("STATUS");


        NetworkFilterKeys GetNetworkFilterKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return NetworkFilterKeys::STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkFilterKeys>(hashCode);
          }

          return NetworkFilterKeys::NOT_SET;
        }

        Aws::String GetNameForNetworkFilterKeys(NetworkFilterKeys enumValue)
        {
          switch(enumValue)
          {
          case NetworkFilterKeys::NOT_SET:
            return {};
          case NetworkFilterKeys::STATUS:
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

      } // namespace NetworkFilterKeysMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
