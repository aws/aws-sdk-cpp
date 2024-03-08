/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ExportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace ExportStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        ExportStatus GetExportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ExportStatus::PENDING;
          }
          else if (hashCode == STARTED_HASH)
          {
            return ExportStatus::STARTED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExportStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ExportStatus::SUCCEEDED;
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
          case ExportStatus::NOT_SET:
            return {};
          case ExportStatus::PENDING:
            return "PENDING";
          case ExportStatus::STARTED:
            return "STARTED";
          case ExportStatus::FAILED:
            return "FAILED";
          case ExportStatus::SUCCEEDED:
            return "SUCCEEDED";
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
  } // namespace mgn
} // namespace Aws
