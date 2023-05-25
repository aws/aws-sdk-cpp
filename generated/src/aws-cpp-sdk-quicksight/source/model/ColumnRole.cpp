/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnRole.h>
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
      namespace ColumnRoleMapper
      {

        static const int DIMENSION_HASH = HashingUtils::HashString("DIMENSION");
        static const int MEASURE_HASH = HashingUtils::HashString("MEASURE");


        ColumnRole GetColumnRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIMENSION_HASH)
          {
            return ColumnRole::DIMENSION;
          }
          else if (hashCode == MEASURE_HASH)
          {
            return ColumnRole::MEASURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnRole>(hashCode);
          }

          return ColumnRole::NOT_SET;
        }

        Aws::String GetNameForColumnRole(ColumnRole enumValue)
        {
          switch(enumValue)
          {
          case ColumnRole::DIMENSION:
            return "DIMENSION";
          case ColumnRole::MEASURE:
            return "MEASURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnRoleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
