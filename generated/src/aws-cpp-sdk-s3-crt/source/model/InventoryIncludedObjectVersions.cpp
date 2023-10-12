/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/InventoryIncludedObjectVersions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace InventoryIncludedObjectVersionsMapper
      {

        static constexpr uint32_t All_HASH = ConstExprHashingUtils::HashString("All");
        static constexpr uint32_t Current_HASH = ConstExprHashingUtils::HashString("Current");


        InventoryIncludedObjectVersions GetInventoryIncludedObjectVersionsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return InventoryIncludedObjectVersions::All;
          }
          else if (hashCode == Current_HASH)
          {
            return InventoryIncludedObjectVersions::Current;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventoryIncludedObjectVersions>(hashCode);
          }

          return InventoryIncludedObjectVersions::NOT_SET;
        }

        Aws::String GetNameForInventoryIncludedObjectVersions(InventoryIncludedObjectVersions enumValue)
        {
          switch(enumValue)
          {
          case InventoryIncludedObjectVersions::NOT_SET:
            return {};
          case InventoryIncludedObjectVersions::All:
            return "All";
          case InventoryIncludedObjectVersions::Current:
            return "Current";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InventoryIncludedObjectVersionsMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
