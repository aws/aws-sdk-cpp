/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetImportJobItemStatus.h>
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
      namespace ReadSetImportJobItemStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReadSetImportJobItemStatus GetReadSetImportJobItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return ReadSetImportJobItemStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReadSetImportJobItemStatus::IN_PROGRESS;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return ReadSetImportJobItemStatus::FINISHED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReadSetImportJobItemStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetImportJobItemStatus>(hashCode);
          }

          return ReadSetImportJobItemStatus::NOT_SET;
        }

        Aws::String GetNameForReadSetImportJobItemStatus(ReadSetImportJobItemStatus enumValue)
        {
          switch(enumValue)
          {
          case ReadSetImportJobItemStatus::NOT_STARTED:
            return "NOT_STARTED";
          case ReadSetImportJobItemStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReadSetImportJobItemStatus::FINISHED:
            return "FINISHED";
          case ReadSetImportJobItemStatus::FAILED:
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

      } // namespace ReadSetImportJobItemStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
