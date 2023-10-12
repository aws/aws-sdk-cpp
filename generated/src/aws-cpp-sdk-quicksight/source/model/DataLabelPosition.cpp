/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataLabelPosition.h>
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
      namespace DataLabelPositionMapper
      {

        static constexpr uint32_t INSIDE_HASH = ConstExprHashingUtils::HashString("INSIDE");
        static constexpr uint32_t OUTSIDE_HASH = ConstExprHashingUtils::HashString("OUTSIDE");
        static constexpr uint32_t LEFT_HASH = ConstExprHashingUtils::HashString("LEFT");
        static constexpr uint32_t TOP_HASH = ConstExprHashingUtils::HashString("TOP");
        static constexpr uint32_t BOTTOM_HASH = ConstExprHashingUtils::HashString("BOTTOM");
        static constexpr uint32_t RIGHT_HASH = ConstExprHashingUtils::HashString("RIGHT");


        DataLabelPosition GetDataLabelPositionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSIDE_HASH)
          {
            return DataLabelPosition::INSIDE;
          }
          else if (hashCode == OUTSIDE_HASH)
          {
            return DataLabelPosition::OUTSIDE;
          }
          else if (hashCode == LEFT_HASH)
          {
            return DataLabelPosition::LEFT;
          }
          else if (hashCode == TOP_HASH)
          {
            return DataLabelPosition::TOP;
          }
          else if (hashCode == BOTTOM_HASH)
          {
            return DataLabelPosition::BOTTOM;
          }
          else if (hashCode == RIGHT_HASH)
          {
            return DataLabelPosition::RIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLabelPosition>(hashCode);
          }

          return DataLabelPosition::NOT_SET;
        }

        Aws::String GetNameForDataLabelPosition(DataLabelPosition enumValue)
        {
          switch(enumValue)
          {
          case DataLabelPosition::NOT_SET:
            return {};
          case DataLabelPosition::INSIDE:
            return "INSIDE";
          case DataLabelPosition::OUTSIDE:
            return "OUTSIDE";
          case DataLabelPosition::LEFT:
            return "LEFT";
          case DataLabelPosition::TOP:
            return "TOP";
          case DataLabelPosition::BOTTOM:
            return "BOTTOM";
          case DataLabelPosition::RIGHT:
            return "RIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataLabelPositionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
