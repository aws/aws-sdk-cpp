/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ImportFileTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace ImportFileTaskStatusMapper
      {

        static const int ImportInProgress_HASH = HashingUtils::HashString("ImportInProgress");
        static const int ImportFailed_HASH = HashingUtils::HashString("ImportFailed");
        static const int ImportPartialSuccess_HASH = HashingUtils::HashString("ImportPartialSuccess");
        static const int ImportSuccess_HASH = HashingUtils::HashString("ImportSuccess");
        static const int DeleteInProgress_HASH = HashingUtils::HashString("DeleteInProgress");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");
        static const int DeletePartialSuccess_HASH = HashingUtils::HashString("DeletePartialSuccess");
        static const int DeleteSuccess_HASH = HashingUtils::HashString("DeleteSuccess");


        ImportFileTaskStatus GetImportFileTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ImportInProgress_HASH)
          {
            return ImportFileTaskStatus::ImportInProgress;
          }
          else if (hashCode == ImportFailed_HASH)
          {
            return ImportFileTaskStatus::ImportFailed;
          }
          else if (hashCode == ImportPartialSuccess_HASH)
          {
            return ImportFileTaskStatus::ImportPartialSuccess;
          }
          else if (hashCode == ImportSuccess_HASH)
          {
            return ImportFileTaskStatus::ImportSuccess;
          }
          else if (hashCode == DeleteInProgress_HASH)
          {
            return ImportFileTaskStatus::DeleteInProgress;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return ImportFileTaskStatus::DeleteFailed;
          }
          else if (hashCode == DeletePartialSuccess_HASH)
          {
            return ImportFileTaskStatus::DeletePartialSuccess;
          }
          else if (hashCode == DeleteSuccess_HASH)
          {
            return ImportFileTaskStatus::DeleteSuccess;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportFileTaskStatus>(hashCode);
          }

          return ImportFileTaskStatus::NOT_SET;
        }

        Aws::String GetNameForImportFileTaskStatus(ImportFileTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportFileTaskStatus::NOT_SET:
            return {};
          case ImportFileTaskStatus::ImportInProgress:
            return "ImportInProgress";
          case ImportFileTaskStatus::ImportFailed:
            return "ImportFailed";
          case ImportFileTaskStatus::ImportPartialSuccess:
            return "ImportPartialSuccess";
          case ImportFileTaskStatus::ImportSuccess:
            return "ImportSuccess";
          case ImportFileTaskStatus::DeleteInProgress:
            return "DeleteInProgress";
          case ImportFileTaskStatus::DeleteFailed:
            return "DeleteFailed";
          case ImportFileTaskStatus::DeletePartialSuccess:
            return "DeletePartialSuccess";
          case ImportFileTaskStatus::DeleteSuccess:
            return "DeleteSuccess";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportFileTaskStatusMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
