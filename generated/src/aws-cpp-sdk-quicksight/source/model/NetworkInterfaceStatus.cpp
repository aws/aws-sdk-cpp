/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NetworkInterfaceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace NetworkInterfaceStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t DELETION_FAILED_HASH = ConstExprHashingUtils::HashString("DELETION_FAILED");
        static constexpr uint32_t DELETION_SCHEDULED_HASH = ConstExprHashingUtils::HashString("DELETION_SCHEDULED");
        static constexpr uint32_t ATTACHMENT_FAILED_ROLLBACK_FAILED_HASH = ConstExprHashingUtils::HashString("ATTACHMENT_FAILED_ROLLBACK_FAILED");


        NetworkInterfaceStatus GetNetworkInterfaceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return NetworkInterfaceStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return NetworkInterfaceStatus::AVAILABLE;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return NetworkInterfaceStatus::CREATION_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return NetworkInterfaceStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return NetworkInterfaceStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NetworkInterfaceStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NetworkInterfaceStatus::DELETED;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return NetworkInterfaceStatus::DELETION_FAILED;
          }
          else if (hashCode == DELETION_SCHEDULED_HASH)
          {
            return NetworkInterfaceStatus::DELETION_SCHEDULED;
          }
          else if (hashCode == ATTACHMENT_FAILED_ROLLBACK_FAILED_HASH)
          {
            return NetworkInterfaceStatus::ATTACHMENT_FAILED_ROLLBACK_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceStatus>(hashCode);
          }

          return NetworkInterfaceStatus::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceStatus(NetworkInterfaceStatus enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceStatus::NOT_SET:
            return {};
          case NetworkInterfaceStatus::CREATING:
            return "CREATING";
          case NetworkInterfaceStatus::AVAILABLE:
            return "AVAILABLE";
          case NetworkInterfaceStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case NetworkInterfaceStatus::UPDATING:
            return "UPDATING";
          case NetworkInterfaceStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case NetworkInterfaceStatus::DELETING:
            return "DELETING";
          case NetworkInterfaceStatus::DELETED:
            return "DELETED";
          case NetworkInterfaceStatus::DELETION_FAILED:
            return "DELETION_FAILED";
          case NetworkInterfaceStatus::DELETION_SCHEDULED:
            return "DELETION_SCHEDULED";
          case NetworkInterfaceStatus::ATTACHMENT_FAILED_ROLLBACK_FAILED:
            return "ATTACHMENT_FAILED_ROLLBACK_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
