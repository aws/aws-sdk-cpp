/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkResourceStatus.h>
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
      namespace NetworkResourceStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t SHIPPED_HASH = ConstExprHashingUtils::HashString("SHIPPED");
        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t PROVISIONED_HASH = ConstExprHashingUtils::HashString("PROVISIONED");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t PENDING_RETURN_HASH = ConstExprHashingUtils::HashString("PENDING_RETURN");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t CREATING_SHIPPING_LABEL_HASH = ConstExprHashingUtils::HashString("CREATING_SHIPPING_LABEL");


        NetworkResourceStatus GetNetworkResourceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return NetworkResourceStatus::PENDING;
          }
          else if (hashCode == SHIPPED_HASH)
          {
            return NetworkResourceStatus::SHIPPED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return NetworkResourceStatus::PROVISIONING;
          }
          else if (hashCode == PROVISIONED_HASH)
          {
            return NetworkResourceStatus::PROVISIONED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return NetworkResourceStatus::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NetworkResourceStatus::DELETING;
          }
          else if (hashCode == PENDING_RETURN_HASH)
          {
            return NetworkResourceStatus::PENDING_RETURN;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NetworkResourceStatus::DELETED;
          }
          else if (hashCode == CREATING_SHIPPING_LABEL_HASH)
          {
            return NetworkResourceStatus::CREATING_SHIPPING_LABEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkResourceStatus>(hashCode);
          }

          return NetworkResourceStatus::NOT_SET;
        }

        Aws::String GetNameForNetworkResourceStatus(NetworkResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case NetworkResourceStatus::NOT_SET:
            return {};
          case NetworkResourceStatus::PENDING:
            return "PENDING";
          case NetworkResourceStatus::SHIPPED:
            return "SHIPPED";
          case NetworkResourceStatus::PROVISIONING:
            return "PROVISIONING";
          case NetworkResourceStatus::PROVISIONED:
            return "PROVISIONED";
          case NetworkResourceStatus::AVAILABLE:
            return "AVAILABLE";
          case NetworkResourceStatus::DELETING:
            return "DELETING";
          case NetworkResourceStatus::PENDING_RETURN:
            return "PENDING_RETURN";
          case NetworkResourceStatus::DELETED:
            return "DELETED";
          case NetworkResourceStatus::CREATING_SHIPPING_LABEL:
            return "CREATING_SHIPPING_LABEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkResourceStatusMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
