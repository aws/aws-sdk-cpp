/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/ScalarMeasureValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamWrite
  {
    namespace Model
    {
      namespace ScalarMeasureValueTypeMapper
      {

        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t BIGINT_HASH = ConstExprHashingUtils::HashString("BIGINT");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t VARCHAR_HASH = ConstExprHashingUtils::HashString("VARCHAR");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");


        ScalarMeasureValueType GetScalarMeasureValueTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOUBLE_HASH)
          {
            return ScalarMeasureValueType::DOUBLE;
          }
          else if (hashCode == BIGINT_HASH)
          {
            return ScalarMeasureValueType::BIGINT;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return ScalarMeasureValueType::BOOLEAN;
          }
          else if (hashCode == VARCHAR_HASH)
          {
            return ScalarMeasureValueType::VARCHAR;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return ScalarMeasureValueType::TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalarMeasureValueType>(hashCode);
          }

          return ScalarMeasureValueType::NOT_SET;
        }

        Aws::String GetNameForScalarMeasureValueType(ScalarMeasureValueType enumValue)
        {
          switch(enumValue)
          {
          case ScalarMeasureValueType::NOT_SET:
            return {};
          case ScalarMeasureValueType::DOUBLE:
            return "DOUBLE";
          case ScalarMeasureValueType::BIGINT:
            return "BIGINT";
          case ScalarMeasureValueType::BOOLEAN:
            return "BOOLEAN";
          case ScalarMeasureValueType::VARCHAR:
            return "VARCHAR";
          case ScalarMeasureValueType::TIMESTAMP:
            return "TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalarMeasureValueTypeMapper
    } // namespace Model
  } // namespace TimestreamWrite
} // namespace Aws
