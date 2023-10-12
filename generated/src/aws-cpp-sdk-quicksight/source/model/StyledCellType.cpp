/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StyledCellType.h>
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
      namespace StyledCellTypeMapper
      {

        static constexpr uint32_t TOTAL_HASH = ConstExprHashingUtils::HashString("TOTAL");
        static constexpr uint32_t METRIC_HEADER_HASH = ConstExprHashingUtils::HashString("METRIC_HEADER");
        static constexpr uint32_t VALUE_HASH = ConstExprHashingUtils::HashString("VALUE");


        StyledCellType GetStyledCellTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOTAL_HASH)
          {
            return StyledCellType::TOTAL;
          }
          else if (hashCode == METRIC_HEADER_HASH)
          {
            return StyledCellType::METRIC_HEADER;
          }
          else if (hashCode == VALUE_HASH)
          {
            return StyledCellType::VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StyledCellType>(hashCode);
          }

          return StyledCellType::NOT_SET;
        }

        Aws::String GetNameForStyledCellType(StyledCellType enumValue)
        {
          switch(enumValue)
          {
          case StyledCellType::NOT_SET:
            return {};
          case StyledCellType::TOTAL:
            return "TOTAL";
          case StyledCellType::METRIC_HEADER:
            return "METRIC_HEADER";
          case StyledCellType::VALUE:
            return "VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StyledCellTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
