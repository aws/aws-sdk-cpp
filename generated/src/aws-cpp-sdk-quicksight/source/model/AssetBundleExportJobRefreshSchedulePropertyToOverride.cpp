/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobRefreshSchedulePropertyToOverride.h>
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
      namespace AssetBundleExportJobRefreshSchedulePropertyToOverrideMapper
      {

        static const int StartAfterDateTime_HASH = HashingUtils::HashString("StartAfterDateTime");


        AssetBundleExportJobRefreshSchedulePropertyToOverride GetAssetBundleExportJobRefreshSchedulePropertyToOverrideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StartAfterDateTime_HASH)
          {
            return AssetBundleExportJobRefreshSchedulePropertyToOverride::StartAfterDateTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobRefreshSchedulePropertyToOverride>(hashCode);
          }

          return AssetBundleExportJobRefreshSchedulePropertyToOverride::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobRefreshSchedulePropertyToOverride(AssetBundleExportJobRefreshSchedulePropertyToOverride enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobRefreshSchedulePropertyToOverride::NOT_SET:
            return {};
          case AssetBundleExportJobRefreshSchedulePropertyToOverride::StartAfterDateTime:
            return "StartAfterDateTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetBundleExportJobRefreshSchedulePropertyToOverrideMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
