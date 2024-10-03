/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobFolderPropertyToOverride.h>
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
      namespace AssetBundleExportJobFolderPropertyToOverrideMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int ParentFolderArn_HASH = HashingUtils::HashString("ParentFolderArn");


        AssetBundleExportJobFolderPropertyToOverride GetAssetBundleExportJobFolderPropertyToOverrideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return AssetBundleExportJobFolderPropertyToOverride::Name;
          }
          else if (hashCode == ParentFolderArn_HASH)
          {
            return AssetBundleExportJobFolderPropertyToOverride::ParentFolderArn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobFolderPropertyToOverride>(hashCode);
          }

          return AssetBundleExportJobFolderPropertyToOverride::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobFolderPropertyToOverride(AssetBundleExportJobFolderPropertyToOverride enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobFolderPropertyToOverride::NOT_SET:
            return {};
          case AssetBundleExportJobFolderPropertyToOverride::Name:
            return "Name";
          case AssetBundleExportJobFolderPropertyToOverride::ParentFolderArn:
            return "ParentFolderArn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetBundleExportJobFolderPropertyToOverrideMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
