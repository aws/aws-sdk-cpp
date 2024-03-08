/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkSiteFilterKeys.h>
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
      namespace NetworkSiteFilterKeysMapper
      {

        static const int STATUS_HASH = HashingUtils::HashString("STATUS");


        NetworkSiteFilterKeys GetNetworkSiteFilterKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return NetworkSiteFilterKeys::STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkSiteFilterKeys>(hashCode);
          }

          return NetworkSiteFilterKeys::NOT_SET;
        }

        Aws::String GetNameForNetworkSiteFilterKeys(NetworkSiteFilterKeys enumValue)
        {
          switch(enumValue)
          {
          case NetworkSiteFilterKeys::NOT_SET:
            return {};
          case NetworkSiteFilterKeys::STATUS:
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

      } // namespace NetworkSiteFilterKeysMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
