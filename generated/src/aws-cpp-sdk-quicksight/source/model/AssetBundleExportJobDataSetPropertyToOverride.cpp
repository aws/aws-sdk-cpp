/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobDataSetPropertyToOverride.h>
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
      namespace AssetBundleExportJobDataSetPropertyToOverrideMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int RefreshFailureEmailAlertStatus_HASH = HashingUtils::HashString("RefreshFailureEmailAlertStatus");


        AssetBundleExportJobDataSetPropertyToOverride GetAssetBundleExportJobDataSetPropertyToOverrideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return AssetBundleExportJobDataSetPropertyToOverride::Name;
          }
          else if (hashCode == RefreshFailureEmailAlertStatus_HASH)
          {
            return AssetBundleExportJobDataSetPropertyToOverride::RefreshFailureEmailAlertStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobDataSetPropertyToOverride>(hashCode);
          }

          return AssetBundleExportJobDataSetPropertyToOverride::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobDataSetPropertyToOverride(AssetBundleExportJobDataSetPropertyToOverride enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobDataSetPropertyToOverride::NOT_SET:
            return {};
          case AssetBundleExportJobDataSetPropertyToOverride::Name:
            return "Name";
          case AssetBundleExportJobDataSetPropertyToOverride::RefreshFailureEmailAlertStatus:
            return "RefreshFailureEmailAlertStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetBundleExportJobDataSetPropertyToOverrideMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
