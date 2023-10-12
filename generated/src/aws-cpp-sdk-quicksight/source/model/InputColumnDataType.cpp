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

        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t INTEGER_HASH = ConstExprHashingUtils::HashString("INTEGER");
        static constexpr uint32_t DECIMAL_HASH = ConstExprHashingUtils::HashString("DECIMAL");
        static constexpr uint32_t DATETIME_HASH = ConstExprHashingUtils::HashString("DATETIME");
        static constexpr uint32_t BIT_HASH = ConstExprHashingUtils::HashString("BIT");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");


        InputColumnDataType GetInputColumnDataTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case InputColumnDataType::NOT_SET:
            return {};
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
