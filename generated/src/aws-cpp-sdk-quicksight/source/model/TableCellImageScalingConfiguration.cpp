/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableCellImageScalingConfiguration.h>
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
      namespace TableCellImageScalingConfigurationMapper
      {

        static const int FIT_TO_CELL_HEIGHT_HASH = HashingUtils::HashString("FIT_TO_CELL_HEIGHT");
        static const int FIT_TO_CELL_WIDTH_HASH = HashingUtils::HashString("FIT_TO_CELL_WIDTH");
        static const int DO_NOT_SCALE_HASH = HashingUtils::HashString("DO_NOT_SCALE");


        TableCellImageScalingConfiguration GetTableCellImageScalingConfigurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIT_TO_CELL_HEIGHT_HASH)
          {
            return TableCellImageScalingConfiguration::FIT_TO_CELL_HEIGHT;
          }
          else if (hashCode == FIT_TO_CELL_WIDTH_HASH)
          {
            return TableCellImageScalingConfiguration::FIT_TO_CELL_WIDTH;
          }
          else if (hashCode == DO_NOT_SCALE_HASH)
          {
            return TableCellImageScalingConfiguration::DO_NOT_SCALE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableCellImageScalingConfiguration>(hashCode);
          }

          return TableCellImageScalingConfiguration::NOT_SET;
        }

        Aws::String GetNameForTableCellImageScalingConfiguration(TableCellImageScalingConfiguration enumValue)
        {
          switch(enumValue)
          {
          case TableCellImageScalingConfiguration::FIT_TO_CELL_HEIGHT:
            return "FIT_TO_CELL_HEIGHT";
          case TableCellImageScalingConfiguration::FIT_TO_CELL_WIDTH:
            return "FIT_TO_CELL_WIDTH";
          case TableCellImageScalingConfiguration::DO_NOT_SCALE:
            return "DO_NOT_SCALE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableCellImageScalingConfigurationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
