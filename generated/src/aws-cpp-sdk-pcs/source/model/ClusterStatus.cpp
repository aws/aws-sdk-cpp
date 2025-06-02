/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/ClusterStatus.h>
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
      namespace ClusterStatusMapper
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


        ClusterStatus GetClusterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ClusterStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ClusterStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ClusterStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ClusterStatus::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ClusterStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ClusterStatus::DELETE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ClusterStatus::UPDATE_FAILED;
          }
          else if (hashCode == SUSPENDING_HASH)
          {
            return ClusterStatus::SUSPENDING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return ClusterStatus::SUSPENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterStatus>(hashCode);
          }

          return ClusterStatus::NOT_SET;
        }

        Aws::String GetNameForClusterStatus(ClusterStatus enumValue)
        {
          switch(enumValue)
          {
          case ClusterStatus::NOT_SET:
            return {};
          case ClusterStatus::CREATING:
            return "CREATING";
          case ClusterStatus::ACTIVE:
            return "ACTIVE";
          case ClusterStatus::UPDATING:
            return "UPDATING";
          case ClusterStatus::DELETING:
            return "DELETING";
          case ClusterStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ClusterStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ClusterStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ClusterStatus::SUSPENDING:
            return "SUSPENDING";
          case ClusterStatus::SUSPENDED:
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

      } // namespace ClusterStatusMapper
    } // namespace Model
  } // namespace PCS
} // namespace Aws
