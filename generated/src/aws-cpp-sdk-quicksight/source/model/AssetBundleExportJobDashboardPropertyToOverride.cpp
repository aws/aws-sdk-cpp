/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobDashboardPropertyToOverride.h>
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
      namespace AssetBundleExportJobDashboardPropertyToOverrideMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");


        AssetBundleExportJobDashboardPropertyToOverride GetAssetBundleExportJobDashboardPropertyToOverrideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return AssetBundleExportJobDashboardPropertyToOverride::Name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobDashboardPropertyToOverride>(hashCode);
          }

          return AssetBundleExportJobDashboardPropertyToOverride::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobDashboardPropertyToOverride(AssetBundleExportJobDashboardPropertyToOverride enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobDashboardPropertyToOverride::NOT_SET:
            return {};
          case AssetBundleExportJobDashboardPropertyToOverride::Name:
            return "Name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetBundleExportJobDashboardPropertyToOverrideMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
