/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ImportTaskStatus.h>
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
      namespace ImportTaskStatusMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int EXPORTING_HASH = HashingUtils::HashString("EXPORTING");
        static const int ANALYZING_DATA_HASH = HashingUtils::HashString("ANALYZING_DATA");
        static const int IMPORTING_HASH = HashingUtils::HashString("IMPORTING");
        static const int REPROVISIONING_HASH = HashingUtils::HashString("REPROVISIONING");
        static const int ROLLING_BACK_HASH = HashingUtils::HashString("ROLLING_BACK");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        ImportTaskStatus GetImportTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return ImportTaskStatus::INITIALIZING;
          }
          else if (hashCode == EXPORTING_HASH)
          {
            return ImportTaskStatus::EXPORTING;
          }
          else if (hashCode == ANALYZING_DATA_HASH)
          {
            return ImportTaskStatus::ANALYZING_DATA;
          }
          else if (hashCode == IMPORTING_HASH)
          {
            return ImportTaskStatus::IMPORTING;
          }
          else if (hashCode == REPROVISIONING_HASH)
          {
            return ImportTaskStatus::REPROVISIONING;
          }
          else if (hashCode == ROLLING_BACK_HASH)
          {
            return ImportTaskStatus::ROLLING_BACK;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ImportTaskStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImportTaskStatus::FAILED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ImportTaskStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ImportTaskStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportTaskStatus>(hashCode);
          }

          return ImportTaskStatus::NOT_SET;
        }

        Aws::String GetNameForImportTaskStatus(ImportTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportTaskStatus::NOT_SET:
            return {};
          case ImportTaskStatus::INITIALIZING:
            return "INITIALIZING";
          case ImportTaskStatus::EXPORTING:
            return "EXPORTING";
          case ImportTaskStatus::ANALYZING_DATA:
            return "ANALYZING_DATA";
          case ImportTaskStatus::IMPORTING:
            return "IMPORTING";
          case ImportTaskStatus::REPROVISIONING:
            return "REPROVISIONING";
          case ImportTaskStatus::ROLLING_BACK:
            return "ROLLING_BACK";
          case ImportTaskStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ImportTaskStatus::FAILED:
            return "FAILED";
          case ImportTaskStatus::CANCELLING:
            return "CANCELLING";
          case ImportTaskStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportTaskStatusMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
