/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProjectVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace ProjectVersionStatusMapper
      {

        static constexpr uint32_t TRAINING_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("TRAINING_IN_PROGRESS");
        static constexpr uint32_t TRAINING_COMPLETED_HASH = ConstExprHashingUtils::HashString("TRAINING_COMPLETED");
        static constexpr uint32_t TRAINING_FAILED_HASH = ConstExprHashingUtils::HashString("TRAINING_FAILED");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t COPYING_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("COPYING_IN_PROGRESS");
        static constexpr uint32_t COPYING_COMPLETED_HASH = ConstExprHashingUtils::HashString("COPYING_COMPLETED");
        static constexpr uint32_t COPYING_FAILED_HASH = ConstExprHashingUtils::HashString("COPYING_FAILED");
        static constexpr uint32_t DEPRECATED_HASH = ConstExprHashingUtils::HashString("DEPRECATED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        ProjectVersionStatus GetProjectVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAINING_IN_PROGRESS_HASH)
          {
            return ProjectVersionStatus::TRAINING_IN_PROGRESS;
          }
          else if (hashCode == TRAINING_COMPLETED_HASH)
          {
            return ProjectVersionStatus::TRAINING_COMPLETED;
          }
          else if (hashCode == TRAINING_FAILED_HASH)
          {
            return ProjectVersionStatus::TRAINING_FAILED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ProjectVersionStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ProjectVersionStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ProjectVersionStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ProjectVersionStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ProjectVersionStatus::STOPPED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ProjectVersionStatus::DELETING;
          }
          else if (hashCode == COPYING_IN_PROGRESS_HASH)
          {
            return ProjectVersionStatus::COPYING_IN_PROGRESS;
          }
          else if (hashCode == COPYING_COMPLETED_HASH)
          {
            return ProjectVersionStatus::COPYING_COMPLETED;
          }
          else if (hashCode == COPYING_FAILED_HASH)
          {
            return ProjectVersionStatus::COPYING_FAILED;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return ProjectVersionStatus::DEPRECATED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ProjectVersionStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectVersionStatus>(hashCode);
          }

          return ProjectVersionStatus::NOT_SET;
        }

        Aws::String GetNameForProjectVersionStatus(ProjectVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case ProjectVersionStatus::NOT_SET:
            return {};
          case ProjectVersionStatus::TRAINING_IN_PROGRESS:
            return "TRAINING_IN_PROGRESS";
          case ProjectVersionStatus::TRAINING_COMPLETED:
            return "TRAINING_COMPLETED";
          case ProjectVersionStatus::TRAINING_FAILED:
            return "TRAINING_FAILED";
          case ProjectVersionStatus::STARTING:
            return "STARTING";
          case ProjectVersionStatus::RUNNING:
            return "RUNNING";
          case ProjectVersionStatus::FAILED:
            return "FAILED";
          case ProjectVersionStatus::STOPPING:
            return "STOPPING";
          case ProjectVersionStatus::STOPPED:
            return "STOPPED";
          case ProjectVersionStatus::DELETING:
            return "DELETING";
          case ProjectVersionStatus::COPYING_IN_PROGRESS:
            return "COPYING_IN_PROGRESS";
          case ProjectVersionStatus::COPYING_COMPLETED:
            return "COPYING_COMPLETED";
          case ProjectVersionStatus::COPYING_FAILED:
            return "COPYING_FAILED";
          case ProjectVersionStatus::DEPRECATED:
            return "DEPRECATED";
          case ProjectVersionStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectVersionStatusMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
