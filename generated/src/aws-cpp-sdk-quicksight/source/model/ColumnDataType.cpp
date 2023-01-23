/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnDataType.h>
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
      namespace ColumnDataTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int DECIMAL_HASH = HashingUtils::HashString("DECIMAL");
        static const int DATETIME_HASH = HashingUtils::HashString("DATETIME");


        ColumnDataType GetColumnDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return ColumnDataType::STRING;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return ColumnDataType::INTEGER;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return ColumnDataType::DECIMAL;
          }
          else if (hashCode == DATETIME_HASH)
          {
            return ColumnDataType::DATETIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnDataType>(hashCode);
          }

          return ColumnDataType::NOT_SET;
        }

        Aws::String GetNameForColumnDataType(ColumnDataType enumValue)
        {
          switch(enumValue)
          {
          case ColumnDataType::STRING:
            return "STRING";
          case ColumnDataType::INTEGER:
            return "INTEGER";
          case ColumnDataType::DECIMAL:
            return "DECIMAL";
          case ColumnDataType::DATETIME:
            return "DATETIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnDataTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
