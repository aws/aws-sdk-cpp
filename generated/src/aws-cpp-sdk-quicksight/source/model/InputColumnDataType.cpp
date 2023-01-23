/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/InputColumnDataType.h>
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
      namespace InputColumnDataTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int DECIMAL_HASH = HashingUtils::HashString("DECIMAL");
        static const int DATETIME_HASH = HashingUtils::HashString("DATETIME");
        static const int BIT_HASH = HashingUtils::HashString("BIT");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        InputColumnDataType GetInputColumnDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return InputColumnDataType::STRING;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return InputColumnDataType::INTEGER;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return InputColumnDataType::DECIMAL;
          }
          else if (hashCode == DATETIME_HASH)
          {
            return InputColumnDataType::DATETIME;
          }
          else if (hashCode == BIT_HASH)
          {
            return InputColumnDataType::BIT;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return InputColumnDataType::BOOLEAN;
          }
          else if (hashCode == JSON_HASH)
          {
            return InputColumnDataType::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputColumnDataType>(hashCode);
          }

          return InputColumnDataType::NOT_SET;
        }

        Aws::String GetNameForInputColumnDataType(InputColumnDataType enumValue)
        {
          switch(enumValue)
          {
          case InputColumnDataType::STRING:
            return "STRING";
          case InputColumnDataType::INTEGER:
            return "INTEGER";
          case InputColumnDataType::DECIMAL:
            return "DECIMAL";
          case InputColumnDataType::DATETIME:
            return "DATETIME";
          case InputColumnDataType::BIT:
            return "BIT";
          case InputColumnDataType::BOOLEAN:
            return "BOOLEAN";
          case InputColumnDataType::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputColumnDataTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
