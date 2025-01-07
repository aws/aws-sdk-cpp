/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SchedulerResourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace SchedulerResourceStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int CreateFailed_HASH = HashingUtils::HashString("CreateFailed");
        static const int CreateRollbackFailed_HASH = HashingUtils::HashString("CreateRollbackFailed");
        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");
        static const int UpdateRollbackFailed_HASH = HashingUtils::HashString("UpdateRollbackFailed");
        static const int Updated_HASH = HashingUtils::HashString("Updated");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");
        static const int DeleteRollbackFailed_HASH = HashingUtils::HashString("DeleteRollbackFailed");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        SchedulerResourceStatus GetSchedulerResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return SchedulerResourceStatus::Creating;
          }
          else if (hashCode == CreateFailed_HASH)
          {
            return SchedulerResourceStatus::CreateFailed;
          }
          else if (hashCode == CreateRollbackFailed_HASH)
          {
            return SchedulerResourceStatus::CreateRollbackFailed;
          }
          else if (hashCode == Created_HASH)
          {
            return SchedulerResourceStatus::Created;
          }
          else if (hashCode == Updating_HASH)
          {
            return SchedulerResourceStatus::Updating;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return SchedulerResourceStatus::UpdateFailed;
          }
          else if (hashCode == UpdateRollbackFailed_HASH)
          {
            return SchedulerResourceStatus::UpdateRollbackFailed;
          }
          else if (hashCode == Updated_HASH)
          {
            return SchedulerResourceStatus::Updated;
          }
          else if (hashCode == Deleting_HASH)
          {
            return SchedulerResourceStatus::Deleting;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return SchedulerResourceStatus::DeleteFailed;
          }
          else if (hashCode == DeleteRollbackFailed_HASH)
          {
            return SchedulerResourceStatus::DeleteRollbackFailed;
          }
          else if (hashCode == Deleted_HASH)
          {
            return SchedulerResourceStatus::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchedulerResourceStatus>(hashCode);
          }

          return SchedulerResourceStatus::NOT_SET;
        }

        Aws::String GetNameForSchedulerResourceStatus(SchedulerResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case SchedulerResourceStatus::NOT_SET:
            return {};
          case SchedulerResourceStatus::Creating:
            return "Creating";
          case SchedulerResourceStatus::CreateFailed:
            return "CreateFailed";
          case SchedulerResourceStatus::CreateRollbackFailed:
            return "CreateRollbackFailed";
          case SchedulerResourceStatus::Created:
            return "Created";
          case SchedulerResourceStatus::Updating:
            return "Updating";
          case SchedulerResourceStatus::UpdateFailed:
            return "UpdateFailed";
          case SchedulerResourceStatus::UpdateRollbackFailed:
            return "UpdateRollbackFailed";
          case SchedulerResourceStatus::Updated:
            return "Updated";
          case SchedulerResourceStatus::Deleting:
            return "Deleting";
          case SchedulerResourceStatus::DeleteFailed:
            return "DeleteFailed";
          case SchedulerResourceStatus::DeleteRollbackFailed:
            return "DeleteRollbackFailed";
          case SchedulerResourceStatus::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchedulerResourceStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
