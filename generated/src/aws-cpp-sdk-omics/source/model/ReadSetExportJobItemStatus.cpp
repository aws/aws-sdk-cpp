/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetExportJobItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace ReadSetExportJobItemStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReadSetExportJobItemStatus GetReadSetExportJobItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return ReadSetExportJobItemStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReadSetExportJobItemStatus::IN_PROGRESS;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return ReadSetExportJobItemStatus::FINISHED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReadSetExportJobItemStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetExportJobItemStatus>(hashCode);
          }

          return ReadSetExportJobItemStatus::NOT_SET;
        }

        Aws::String GetNameForReadSetExportJobItemStatus(ReadSetExportJobItemStatus enumValue)
        {
          switch(enumValue)
          {
          case ReadSetExportJobItemStatus::NOT_STARTED:
            return "NOT_STARTED";
          case ReadSetExportJobItemStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReadSetExportJobItemStatus::FINISHED:
            return "FINISHED";
          case ReadSetExportJobItemStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReadSetExportJobItemStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
