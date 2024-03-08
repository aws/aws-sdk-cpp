/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/AssetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace AssetTypeMapper
      {

        static const int COMPUTE_HASH = HashingUtils::HashString("COMPUTE");


        AssetType GetAssetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPUTE_HASH)
          {
            return AssetType::COMPUTE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetType>(hashCode);
          }

          return AssetType::NOT_SET;
        }

        Aws::String GetNameForAssetType(AssetType enumValue)
        {
          switch(enumValue)
          {
          case AssetType::NOT_SET:
            return {};
          case AssetType::COMPUTE:
            return "COMPUTE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetTypeMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
