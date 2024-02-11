/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportFormat.h>
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
      namespace AssetBundleExportFormatMapper
      {

        static const int CLOUDFORMATION_JSON_HASH = HashingUtils::HashString("CLOUDFORMATION_JSON");
        static const int QUICKSIGHT_JSON_HASH = HashingUtils::HashString("QUICKSIGHT_JSON");


        AssetBundleExportFormat GetAssetBundleExportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFORMATION_JSON_HASH)
          {
            return AssetBundleExportFormat::CLOUDFORMATION_JSON;
          }
          else if (hashCode == QUICKSIGHT_JSON_HASH)
          {
            return AssetBundleExportFormat::QUICKSIGHT_JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportFormat>(hashCode);
          }

          return AssetBundleExportFormat::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportFormat(AssetBundleExportFormat enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportFormat::NOT_SET:
            return {};
          case AssetBundleExportFormat::CLOUDFORMATION_JSON:
            return "CLOUDFORMATION_JSON";
          case AssetBundleExportFormat::QUICKSIGHT_JSON:
            return "QUICKSIGHT_JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetBundleExportFormatMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
