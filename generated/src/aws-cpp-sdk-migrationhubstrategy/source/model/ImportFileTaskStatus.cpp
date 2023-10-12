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

        static constexpr uint32_t ImportInProgress_HASH = ConstExprHashingUtils::HashString("ImportInProgress");
        static constexpr uint32_t ImportFailed_HASH = ConstExprHashingUtils::HashString("ImportFailed");
        static constexpr uint32_t ImportPartialSuccess_HASH = ConstExprHashingUtils::HashString("ImportPartialSuccess");
        static constexpr uint32_t ImportSuccess_HASH = ConstExprHashingUtils::HashString("ImportSuccess");
        static constexpr uint32_t DeleteInProgress_HASH = ConstExprHashingUtils::HashString("DeleteInProgress");
        static constexpr uint32_t DeleteFailed_HASH = ConstExprHashingUtils::HashString("DeleteFailed");
        static constexpr uint32_t DeletePartialSuccess_HASH = ConstExprHashingUtils::HashString("DeletePartialSuccess");
        static constexpr uint32_t DeleteSuccess_HASH = ConstExprHashingUtils::HashString("DeleteSuccess");


        ImportFileTaskStatus GetImportFileTaskStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
