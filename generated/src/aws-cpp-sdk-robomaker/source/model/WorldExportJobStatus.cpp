/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldExportJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace WorldExportJobStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Canceling_HASH = HashingUtils::HashString("Canceling");
        static const int Canceled_HASH = HashingUtils::HashString("Canceled");


        WorldExportJobStatus GetWorldExportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return WorldExportJobStatus::Pending;
          }
          else if (hashCode == Running_HASH)
          {
            return WorldExportJobStatus::Running;
          }
          else if (hashCode == Completed_HASH)
          {
            return WorldExportJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return WorldExportJobStatus::Failed;
          }
          else if (hashCode == Canceling_HASH)
          {
            return WorldExportJobStatus::Canceling;
          }
          else if (hashCode == Canceled_HASH)
          {
            return WorldExportJobStatus::Canceled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorldExportJobStatus>(hashCode);
          }

          return WorldExportJobStatus::NOT_SET;
        }

        Aws::String GetNameForWorldExportJobStatus(WorldExportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case WorldExportJobStatus::Pending:
            return "Pending";
          case WorldExportJobStatus::Running:
            return "Running";
          case WorldExportJobStatus::Completed:
            return "Completed";
          case WorldExportJobStatus::Failed:
            return "Failed";
          case WorldExportJobStatus::Canceling:
            return "Canceling";
          case WorldExportJobStatus::Canceled:
            return "Canceled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorldExportJobStatusMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
