/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScalarType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace ScalarTypeMapper
      {

        static constexpr uint32_t VARCHAR_HASH = ConstExprHashingUtils::HashString("VARCHAR");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t BIGINT_HASH = ConstExprHashingUtils::HashString("BIGINT");
        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t TIME_HASH = ConstExprHashingUtils::HashString("TIME");
        static constexpr uint32_t INTERVAL_DAY_TO_SECOND_HASH = ConstExprHashingUtils::HashString("INTERVAL_DAY_TO_SECOND");
        static constexpr uint32_t INTERVAL_YEAR_TO_MONTH_HASH = ConstExprHashingUtils::HashString("INTERVAL_YEAR_TO_MONTH");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t INTEGER_HASH = ConstExprHashingUtils::HashString("INTEGER");


        ScalarType GetScalarTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VARCHAR_HASH)
          {
            return ScalarType::VARCHAR;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return ScalarType::BOOLEAN;
          }
          else if (hashCode == BIGINT_HASH)
          {
            return ScalarType::BIGINT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return ScalarType::DOUBLE;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return ScalarType::TIMESTAMP;
          }
          else if (hashCode == DATE_HASH)
          {
            return ScalarType::DATE;
          }
          else if (hashCode == TIME_HASH)
          {
            return ScalarType::TIME;
          }
          else if (hashCode == INTERVAL_DAY_TO_SECOND_HASH)
          {
            return ScalarType::INTERVAL_DAY_TO_SECOND;
          }
          else if (hashCode == INTERVAL_YEAR_TO_MONTH_HASH)
          {
            return ScalarType::INTERVAL_YEAR_TO_MONTH;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ScalarType::UNKNOWN;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return ScalarType::INTEGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalarType>(hashCode);
          }

          return ScalarType::NOT_SET;
        }

        Aws::String GetNameForScalarType(ScalarType enumValue)
        {
          switch(enumValue)
          {
          case ScalarType::NOT_SET:
            return {};
          case ScalarType::VARCHAR:
            return "VARCHAR";
          case ScalarType::BOOLEAN:
            return "BOOLEAN";
          case ScalarType::BIGINT:
            return "BIGINT";
          case ScalarType::DOUBLE:
            return "DOUBLE";
          case ScalarType::TIMESTAMP:
            return "TIMESTAMP";
          case ScalarType::DATE:
            return "DATE";
          case ScalarType::TIME:
            return "TIME";
          case ScalarType::INTERVAL_DAY_TO_SECOND:
            return "INTERVAL_DAY_TO_SECOND";
          case ScalarType::INTERVAL_YEAR_TO_MONTH:
            return "INTERVAL_YEAR_TO_MONTH";
          case ScalarType::UNKNOWN:
            return "UNKNOWN";
          case ScalarType::INTEGER:
            return "INTEGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalarTypeMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws
