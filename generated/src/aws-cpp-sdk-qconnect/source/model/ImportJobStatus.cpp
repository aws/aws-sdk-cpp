/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ImportJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace ImportJobStatusMapper
      {

        static const int START_IN_PROGRESS_HASH = HashingUtils::HashString("START_IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ImportJobStatus GetImportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_IN_PROGRESS_HASH)
          {
            return ImportJobStatus::START_IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImportJobStatus::FAILED;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ImportJobStatus::COMPLETE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ImportJobStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ImportJobStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ImportJobStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportJobStatus>(hashCode);
          }

          return ImportJobStatus::NOT_SET;
        }

        Aws::String GetNameForImportJobStatus(ImportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportJobStatus::NOT_SET:
            return {};
          case ImportJobStatus::START_IN_PROGRESS:
            return "START_IN_PROGRESS";
          case ImportJobStatus::FAILED:
            return "FAILED";
          case ImportJobStatus::COMPLETE:
            return "COMPLETE";
          case ImportJobStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ImportJobStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ImportJobStatus::DELETED:
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

      } // namespace ImportJobStatusMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
