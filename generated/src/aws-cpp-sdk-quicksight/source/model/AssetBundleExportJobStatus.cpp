/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobStatus.h>
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
      namespace AssetBundleExportJobStatusMapper
      {

        static const int QUEUED_FOR_IMMEDIATE_EXECUTION_HASH = HashingUtils::HashString("QUEUED_FOR_IMMEDIATE_EXECUTION");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AssetBundleExportJobStatus GetAssetBundleExportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_FOR_IMMEDIATE_EXECUTION_HASH)
          {
            return AssetBundleExportJobStatus::QUEUED_FOR_IMMEDIATE_EXECUTION;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AssetBundleExportJobStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return AssetBundleExportJobStatus::SUCCESSFUL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssetBundleExportJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobStatus>(hashCode);
          }

          return AssetBundleExportJobStatus::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobStatus(AssetBundleExportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobStatus::NOT_SET:
            return {};
          case AssetBundleExportJobStatus::QUEUED_FOR_IMMEDIATE_EXECUTION:
            return "QUEUED_FOR_IMMEDIATE_EXECUTION";
          case AssetBundleExportJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AssetBundleExportJobStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case AssetBundleExportJobStatus::FAILED:
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

      } // namespace AssetBundleExportJobStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
