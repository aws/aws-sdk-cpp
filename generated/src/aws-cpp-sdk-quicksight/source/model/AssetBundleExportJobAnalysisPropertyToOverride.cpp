/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobAnalysisPropertyToOverride.h>
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
      namespace AssetBundleExportJobAnalysisPropertyToOverrideMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");


        AssetBundleExportJobAnalysisPropertyToOverride GetAssetBundleExportJobAnalysisPropertyToOverrideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return AssetBundleExportJobAnalysisPropertyToOverride::Name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobAnalysisPropertyToOverride>(hashCode);
          }

          return AssetBundleExportJobAnalysisPropertyToOverride::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobAnalysisPropertyToOverride(AssetBundleExportJobAnalysisPropertyToOverride enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobAnalysisPropertyToOverride::NOT_SET:
            return {};
          case AssetBundleExportJobAnalysisPropertyToOverride::Name:
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

      } // namespace AssetBundleExportJobAnalysisPropertyToOverrideMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
