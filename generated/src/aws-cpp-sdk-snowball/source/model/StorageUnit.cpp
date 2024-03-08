/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/StorageUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace StorageUnitMapper
      {

        static const int TB_HASH = HashingUtils::HashString("TB");


        StorageUnit GetStorageUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TB_HASH)
          {
            return StorageUnit::TB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageUnit>(hashCode);
          }

          return StorageUnit::NOT_SET;
        }

        Aws::String GetNameForStorageUnit(StorageUnit enumValue)
        {
          switch(enumValue)
          {
          case StorageUnit::NOT_SET:
            return {};
          case StorageUnit::TB:
            return "TB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageUnitMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
