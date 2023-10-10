/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScalarMeasureValueType.h>
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
      namespace ScalarMeasureValueTypeMapper
      {

        static const int BIGINT_HASH = HashingUtils::HashString("BIGINT");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int VARCHAR_HASH = HashingUtils::HashString("VARCHAR");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");


        ScalarMeasureValueType GetScalarMeasureValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BIGINT_HASH)
          {
            return ScalarMeasureValueType::BIGINT;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return ScalarMeasureValueType::BOOLEAN;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return ScalarMeasureValueType::DOUBLE;
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
          case ScalarMeasureValueType::BIGINT:
            return "BIGINT";
          case ScalarMeasureValueType::BOOLEAN:
            return "BOOLEAN";
          case ScalarMeasureValueType::DOUBLE:
            return "DOUBLE";
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
  } // namespace TimestreamQuery
} // namespace Aws
