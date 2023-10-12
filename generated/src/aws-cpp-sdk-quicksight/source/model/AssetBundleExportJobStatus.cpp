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

        static constexpr uint32_t QUEUED_FOR_IMMEDIATE_EXECUTION_HASH = ConstExprHashingUtils::HashString("QUEUED_FOR_IMMEDIATE_EXECUTION");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("SUCCESSFUL");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        AssetBundleExportJobStatus GetAssetBundleExportJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
