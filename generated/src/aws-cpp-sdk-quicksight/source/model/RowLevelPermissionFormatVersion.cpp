/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RowLevelPermissionFormatVersion.h>
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
      namespace RowLevelPermissionFormatVersionMapper
      {

        static const int VERSION_1_HASH = HashingUtils::HashString("VERSION_1");
        static const int VERSION_2_HASH = HashingUtils::HashString("VERSION_2");


        RowLevelPermissionFormatVersion GetRowLevelPermissionFormatVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERSION_1_HASH)
          {
            return RowLevelPermissionFormatVersion::VERSION_1;
          }
          else if (hashCode == VERSION_2_HASH)
          {
            return RowLevelPermissionFormatVersion::VERSION_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RowLevelPermissionFormatVersion>(hashCode);
          }

          return RowLevelPermissionFormatVersion::NOT_SET;
        }

        Aws::String GetNameForRowLevelPermissionFormatVersion(RowLevelPermissionFormatVersion enumValue)
        {
          switch(enumValue)
          {
          case RowLevelPermissionFormatVersion::NOT_SET:
            return {};
          case RowLevelPermissionFormatVersion::VERSION_1:
            return "VERSION_1";
          case RowLevelPermissionFormatVersion::VERSION_2:
            return "VERSION_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RowLevelPermissionFormatVersionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
