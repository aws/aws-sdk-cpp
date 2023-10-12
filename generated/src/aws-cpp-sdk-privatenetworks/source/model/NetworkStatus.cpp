/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkStatus.h>
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
      namespace NetworkStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t DEPROVISIONING_HASH = ConstExprHashingUtils::HashString("DEPROVISIONING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        NetworkStatus GetNetworkStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return NetworkStatus::CREATED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return NetworkStatus::PROVISIONING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return NetworkStatus::AVAILABLE;
          }
          else if (hashCode == DEPROVISIONING_HASH)
          {
            return NetworkStatus::DEPROVISIONING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NetworkStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkStatus>(hashCode);
          }

          return NetworkStatus::NOT_SET;
        }

        Aws::String GetNameForNetworkStatus(NetworkStatus enumValue)
        {
          switch(enumValue)
          {
          case NetworkStatus::NOT_SET:
            return {};
          case NetworkStatus::CREATED:
            return "CREATED";
          case NetworkStatus::PROVISIONING:
            return "PROVISIONING";
          case NetworkStatus::AVAILABLE:
            return "AVAILABLE";
          case NetworkStatus::DEPROVISIONING:
            return "DEPROVISIONING";
          case NetworkStatus::DELETED:
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

      } // namespace NetworkStatusMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
