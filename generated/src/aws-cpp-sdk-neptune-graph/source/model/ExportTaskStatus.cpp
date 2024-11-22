/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExportTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace ExportTaskStatusMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int EXPORTING_HASH = HashingUtils::HashString("EXPORTING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ExportTaskStatus GetExportTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return ExportTaskStatus::INITIALIZING;
          }
          else if (hashCode == EXPORTING_HASH)
          {
            return ExportTaskStatus::EXPORTING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ExportTaskStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExportTaskStatus::FAILED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ExportTaskStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ExportTaskStatus::CANCELLED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ExportTaskStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportTaskStatus>(hashCode);
          }

          return ExportTaskStatus::NOT_SET;
        }

        Aws::String GetNameForExportTaskStatus(ExportTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case ExportTaskStatus::NOT_SET:
            return {};
          case ExportTaskStatus::INITIALIZING:
            return "INITIALIZING";
          case ExportTaskStatus::EXPORTING:
            return "EXPORTING";
          case ExportTaskStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ExportTaskStatus::FAILED:
            return "FAILED";
          case ExportTaskStatus::CANCELLING:
            return "CANCELLING";
          case ExportTaskStatus::CANCELLED:
            return "CANCELLED";
          case ExportTaskStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportTaskStatusMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
