/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AssetBundleImportJobStatusMapper
      {

        static const int QUEUED_FOR_IMMEDIATE_EXECUTION_HASH = HashingUtils::HashString("QUEUED_FOR_IMMEDIATE_EXECUTION");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int FAILED_ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("FAILED_ROLLBACK_IN_PROGRESS");
        static const int FAILED_ROLLBACK_COMPLETED_HASH = HashingUtils::HashString("FAILED_ROLLBACK_COMPLETED");
        static const int FAILED_ROLLBACK_ERROR_HASH = HashingUtils::HashString("FAILED_ROLLBACK_ERROR");


        AssetBundleImportJobStatus GetAssetBundleImportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_FOR_IMMEDIATE_EXECUTION_HASH)
          {
            return AssetBundleImportJobStatus::QUEUED_FOR_IMMEDIATE_EXECUTION;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AssetBundleImportJobStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return AssetBundleImportJobStatus::SUCCESSFUL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssetBundleImportJobStatus::FAILED;
          }
          else if (hashCode == FAILED_ROLLBACK_IN_PROGRESS_HASH)
          {
            return AssetBundleImportJobStatus::FAILED_ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == FAILED_ROLLBACK_COMPLETED_HASH)
          {
            return AssetBundleImportJobStatus::FAILED_ROLLBACK_COMPLETED;
          }
          else if (hashCode == FAILED_ROLLBACK_ERROR_HASH)
          {
            return AssetBundleImportJobStatus::FAILED_ROLLBACK_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleImportJobStatus>(hashCode);
          }

          return AssetBundleImportJobStatus::NOT_SET;
        }

        Aws::String GetNameForAssetBundleImportJobStatus(AssetBundleImportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleImportJobStatus::NOT_SET:
            return {};
          case AssetBundleImportJobStatus::QUEUED_FOR_IMMEDIATE_EXECUTION:
            return "QUEUED_FOR_IMMEDIATE_EXECUTION";
          case AssetBundleImportJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AssetBundleImportJobStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case AssetBundleImportJobStatus::FAILED:
            return "FAILED";
          case AssetBundleImportJobStatus::FAILED_ROLLBACK_IN_PROGRESS:
            return "FAILED_ROLLBACK_IN_PROGRESS";
          case AssetBundleImportJobStatus::FAILED_ROLLBACK_COMPLETED:
            return "FAILED_ROLLBACK_COMPLETED";
          case AssetBundleImportJobStatus::FAILED_ROLLBACK_ERROR:
            return "FAILED_ROLLBACK_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetBundleImportJobStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
