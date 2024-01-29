/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/EnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace EnvironmentStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int ROLLING_BACK_HASH = HashingUtils::HashString("ROLLING_BACK");
        static const int CREATING_SNAPSHOT_HASH = HashingUtils::HashString("CREATING_SNAPSHOT");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int MAINTENANCE_HASH = HashingUtils::HashString("MAINTENANCE");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EnvironmentStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return EnvironmentStatus::CREATE_FAILED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return EnvironmentStatus::AVAILABLE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EnvironmentStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EnvironmentStatus::DELETED;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return EnvironmentStatus::UNAVAILABLE;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return EnvironmentStatus::UPDATE_FAILED;
          }
          else if (hashCode == ROLLING_BACK_HASH)
          {
            return EnvironmentStatus::ROLLING_BACK;
          }
          else if (hashCode == CREATING_SNAPSHOT_HASH)
          {
            return EnvironmentStatus::CREATING_SNAPSHOT;
          }
          else if (hashCode == PENDING_HASH)
          {
            return EnvironmentStatus::PENDING;
          }
          else if (hashCode == MAINTENANCE_HASH)
          {
            return EnvironmentStatus::MAINTENANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentStatus>(hashCode);
          }

          return EnvironmentStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentStatus(EnvironmentStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentStatus::NOT_SET:
            return {};
          case EnvironmentStatus::CREATING:
            return "CREATING";
          case EnvironmentStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case EnvironmentStatus::AVAILABLE:
            return "AVAILABLE";
          case EnvironmentStatus::UPDATING:
            return "UPDATING";
          case EnvironmentStatus::DELETING:
            return "DELETING";
          case EnvironmentStatus::DELETED:
            return "DELETED";
          case EnvironmentStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          case EnvironmentStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case EnvironmentStatus::ROLLING_BACK:
            return "ROLLING_BACK";
          case EnvironmentStatus::CREATING_SNAPSHOT:
            return "CREATING_SNAPSHOT";
          case EnvironmentStatus::PENDING:
            return "PENDING";
          case EnvironmentStatus::MAINTENANCE:
            return "MAINTENANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentStatusMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws
