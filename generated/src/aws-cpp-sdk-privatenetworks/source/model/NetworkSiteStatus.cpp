/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkSiteStatus.h>
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
      namespace NetworkSiteStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DEPROVISIONING_HASH = HashingUtils::HashString("DEPROVISIONING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        NetworkSiteStatus GetNetworkSiteStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return NetworkSiteStatus::CREATED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return NetworkSiteStatus::PROVISIONING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return NetworkSiteStatus::AVAILABLE;
          }
          else if (hashCode == DEPROVISIONING_HASH)
          {
            return NetworkSiteStatus::DEPROVISIONING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NetworkSiteStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkSiteStatus>(hashCode);
          }

          return NetworkSiteStatus::NOT_SET;
        }

        Aws::String GetNameForNetworkSiteStatus(NetworkSiteStatus enumValue)
        {
          switch(enumValue)
          {
          case NetworkSiteStatus::NOT_SET:
            return {};
          case NetworkSiteStatus::CREATED:
            return "CREATED";
          case NetworkSiteStatus::PROVISIONING:
            return "PROVISIONING";
          case NetworkSiteStatus::AVAILABLE:
            return "AVAILABLE";
          case NetworkSiteStatus::DEPROVISIONING:
            return "DEPROVISIONING";
          case NetworkSiteStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkSiteStatusMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
