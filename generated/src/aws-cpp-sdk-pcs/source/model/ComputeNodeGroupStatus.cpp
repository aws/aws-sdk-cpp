/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/ComputeNodeGroupStatus.h>
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
      namespace ComputeNodeGroupStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int SUSPENDING_HASH = HashingUtils::HashString("SUSPENDING");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");


        ComputeNodeGroupStatus GetComputeNodeGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ComputeNodeGroupStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ComputeNodeGroupStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ComputeNodeGroupStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ComputeNodeGroupStatus::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ComputeNodeGroupStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ComputeNodeGroupStatus::DELETE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ComputeNodeGroupStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ComputeNodeGroupStatus::DELETED;
          }
          else if (hashCode == SUSPENDING_HASH)
          {
            return ComputeNodeGroupStatus::SUSPENDING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return ComputeNodeGroupStatus::SUSPENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeNodeGroupStatus>(hashCode);
          }

          return ComputeNodeGroupStatus::NOT_SET;
        }

        Aws::String GetNameForComputeNodeGroupStatus(ComputeNodeGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case ComputeNodeGroupStatus::NOT_SET:
            return {};
          case ComputeNodeGroupStatus::CREATING:
            return "CREATING";
          case ComputeNodeGroupStatus::ACTIVE:
            return "ACTIVE";
          case ComputeNodeGroupStatus::UPDATING:
            return "UPDATING";
          case ComputeNodeGroupStatus::DELETING:
            return "DELETING";
          case ComputeNodeGroupStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ComputeNodeGroupStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ComputeNodeGroupStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ComputeNodeGroupStatus::DELETED:
            return "DELETED";
          case ComputeNodeGroupStatus::SUSPENDING:
            return "SUSPENDING";
          case ComputeNodeGroupStatus::SUSPENDED:
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

      } // namespace ComputeNodeGroupStatusMapper
    } // namespace Model
  } // namespace PCS
} // namespace Aws
