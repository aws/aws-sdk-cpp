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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");
        static const int DELETION_SCHEDULED_HASH = HashingUtils::HashString("DELETION_SCHEDULED");
        static const int ATTACHMENT_FAILED_ROLLBACK_FAILED_HASH = HashingUtils::HashString("ATTACHMENT_FAILED_ROLLBACK_FAILED");


        NetworkInterfaceStatus GetNetworkInterfaceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
