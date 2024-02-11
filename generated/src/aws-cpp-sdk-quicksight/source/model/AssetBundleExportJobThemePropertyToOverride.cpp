/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobThemePropertyToOverride.h>
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
      namespace AssetBundleExportJobThemePropertyToOverrideMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");


        AssetBundleExportJobThemePropertyToOverride GetAssetBundleExportJobThemePropertyToOverrideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return AssetBundleExportJobThemePropertyToOverride::Name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobThemePropertyToOverride>(hashCode);
          }

          return AssetBundleExportJobThemePropertyToOverride::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobThemePropertyToOverride(AssetBundleExportJobThemePropertyToOverride enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobThemePropertyToOverride::NOT_SET:
            return {};
          case AssetBundleExportJobThemePropertyToOverride::Name:
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

      } // namespace AssetBundleExportJobThemePropertyToOverrideMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
