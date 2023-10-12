/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnOrderingType.h>
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
      namespace ColumnOrderingTypeMapper
      {

        static constexpr uint32_t GREATER_IS_BETTER_HASH = ConstExprHashingUtils::HashString("GREATER_IS_BETTER");
        static constexpr uint32_t LESSER_IS_BETTER_HASH = ConstExprHashingUtils::HashString("LESSER_IS_BETTER");
        static constexpr uint32_t SPECIFIED_HASH = ConstExprHashingUtils::HashString("SPECIFIED");


        ColumnOrderingType GetColumnOrderingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREATER_IS_BETTER_HASH)
          {
            return ColumnOrderingType::GREATER_IS_BETTER;
          }
          else if (hashCode == LESSER_IS_BETTER_HASH)
          {
            return ColumnOrderingType::LESSER_IS_BETTER;
          }
          else if (hashCode == SPECIFIED_HASH)
          {
            return ColumnOrderingType::SPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnOrderingType>(hashCode);
          }

          return ColumnOrderingType::NOT_SET;
        }

        Aws::String GetNameForColumnOrderingType(ColumnOrderingType enumValue)
        {
          switch(enumValue)
          {
          case ColumnOrderingType::NOT_SET:
            return {};
          case ColumnOrderingType::GREATER_IS_BETTER:
            return "GREATER_IS_BETTER";
          case ColumnOrderingType::LESSER_IS_BETTER:
            return "LESSER_IS_BETTER";
          case ColumnOrderingType::SPECIFIED:
            return "SPECIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnOrderingTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
