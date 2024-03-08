/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GeneratedManifestFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace GeneratedManifestFormatMapper
      {

        static const int S3InventoryReport_CSV_20211130_HASH = HashingUtils::HashString("S3InventoryReport_CSV_20211130");


        GeneratedManifestFormat GetGeneratedManifestFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3InventoryReport_CSV_20211130_HASH)
          {
            return GeneratedManifestFormat::S3InventoryReport_CSV_20211130;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedManifestFormat>(hashCode);
          }

          return GeneratedManifestFormat::NOT_SET;
        }

        Aws::String GetNameForGeneratedManifestFormat(GeneratedManifestFormat enumValue)
        {
          switch(enumValue)
          {
          case GeneratedManifestFormat::NOT_SET:
            return {};
          case GeneratedManifestFormat::S3InventoryReport_CSV_20211130:
            return "S3InventoryReport_CSV_20211130";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeneratedManifestFormatMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
