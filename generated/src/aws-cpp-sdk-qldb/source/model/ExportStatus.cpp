/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/ExportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QLDB
  {
    namespace Model
    {
      namespace ExportStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        ExportStatus GetExportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ExportStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExportStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ExportStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportStatus>(hashCode);
          }

          return ExportStatus::NOT_SET;
        }

        Aws::String GetNameForExportStatus(ExportStatus enumValue)
        {
          switch(enumValue)
          {
          case ExportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ExportStatus::COMPLETED:
            return "COMPLETED";
          case ExportStatus::CANCELLED:
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

      } // namespace ExportStatusMapper
    } // namespace Model
  } // namespace QLDB
} // namespace Aws
