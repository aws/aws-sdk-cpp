/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnDataRole.h>
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
      namespace ColumnDataRoleMapper
      {

        static const int DIMENSION_HASH = HashingUtils::HashString("DIMENSION");
        static const int MEASURE_HASH = HashingUtils::HashString("MEASURE");


        ColumnDataRole GetColumnDataRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIMENSION_HASH)
          {
            return ColumnDataRole::DIMENSION;
          }
          else if (hashCode == MEASURE_HASH)
          {
            return ColumnDataRole::MEASURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnDataRole>(hashCode);
          }

          return ColumnDataRole::NOT_SET;
        }

        Aws::String GetNameForColumnDataRole(ColumnDataRole enumValue)
        {
          switch(enumValue)
          {
          case ColumnDataRole::NOT_SET:
            return {};
          case ColumnDataRole::DIMENSION:
            return "DIMENSION";
          case ColumnDataRole::MEASURE:
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

      } // namespace ColumnDataRoleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
