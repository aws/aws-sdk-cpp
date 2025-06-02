/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/QueueStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PCS
  {
    namespace Model
    {
      namespace QueueStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int SUSPENDING_HASH = HashingUtils::HashString("SUSPENDING");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");


        QueueStatus GetQueueStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return QueueStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return QueueStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return QueueStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return QueueStatus::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return QueueStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return QueueStatus::DELETE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return QueueStatus::UPDATE_FAILED;
          }
          else if (hashCode == SUSPENDING_HASH)
          {
            return QueueStatus::SUSPENDING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return QueueStatus::SUSPENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueStatus>(hashCode);
          }

          return QueueStatus::NOT_SET;
        }

        Aws::String GetNameForQueueStatus(QueueStatus enumValue)
        {
          switch(enumValue)
          {
          case QueueStatus::NOT_SET:
            return {};
          case QueueStatus::CREATING:
            return "CREATING";
          case QueueStatus::ACTIVE:
            return "ACTIVE";
          case QueueStatus::UPDATING:
            return "UPDATING";
          case QueueStatus::DELETING:
            return "DELETING";
          case QueueStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case QueueStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case QueueStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case QueueStatus::SUSPENDING:
            return "SUSPENDING";
          case QueueStatus::SUSPENDED:
            return "SUSPENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueStatusMapper
    } // namespace Model
  } // namespace PCS
} // namespace Aws
