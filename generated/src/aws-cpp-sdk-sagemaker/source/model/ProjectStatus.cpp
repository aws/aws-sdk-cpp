/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProjectStatus.h>
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
      namespace ProjectStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int CreateInProgress_HASH = HashingUtils::HashString("CreateInProgress");
        static const int CreateCompleted_HASH = HashingUtils::HashString("CreateCompleted");
        static const int CreateFailed_HASH = HashingUtils::HashString("CreateFailed");
        static const int DeleteInProgress_HASH = HashingUtils::HashString("DeleteInProgress");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");
        static const int DeleteCompleted_HASH = HashingUtils::HashString("DeleteCompleted");
        static const int UpdateInProgress_HASH = HashingUtils::HashString("UpdateInProgress");
        static const int UpdateCompleted_HASH = HashingUtils::HashString("UpdateCompleted");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");


        ProjectStatus GetProjectStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ProjectStatus::Pending;
          }
          else if (hashCode == CreateInProgress_HASH)
          {
            return ProjectStatus::CreateInProgress;
          }
          else if (hashCode == CreateCompleted_HASH)
          {
            return ProjectStatus::CreateCompleted;
          }
          else if (hashCode == CreateFailed_HASH)
          {
            return ProjectStatus::CreateFailed;
          }
          else if (hashCode == DeleteInProgress_HASH)
          {
            return ProjectStatus::DeleteInProgress;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return ProjectStatus::DeleteFailed;
          }
          else if (hashCode == DeleteCompleted_HASH)
          {
            return ProjectStatus::DeleteCompleted;
          }
          else if (hashCode == UpdateInProgress_HASH)
          {
            return ProjectStatus::UpdateInProgress;
          }
          else if (hashCode == UpdateCompleted_HASH)
          {
            return ProjectStatus::UpdateCompleted;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return ProjectStatus::UpdateFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectStatus>(hashCode);
          }

          return ProjectStatus::NOT_SET;
        }

        Aws::String GetNameForProjectStatus(ProjectStatus enumValue)
        {
          switch(enumValue)
          {
          case ProjectStatus::NOT_SET:
            return {};
          case ProjectStatus::Pending:
            return "Pending";
          case ProjectStatus::CreateInProgress:
            return "CreateInProgress";
          case ProjectStatus::CreateCompleted:
            return "CreateCompleted";
          case ProjectStatus::CreateFailed:
            return "CreateFailed";
          case ProjectStatus::DeleteInProgress:
            return "DeleteInProgress";
          case ProjectStatus::DeleteFailed:
            return "DeleteFailed";
          case ProjectStatus::DeleteCompleted:
            return "DeleteCompleted";
          case ProjectStatus::UpdateInProgress:
            return "UpdateInProgress";
          case ProjectStatus::UpdateCompleted:
            return "UpdateCompleted";
          case ProjectStatus::UpdateFailed:
            return "UpdateFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
