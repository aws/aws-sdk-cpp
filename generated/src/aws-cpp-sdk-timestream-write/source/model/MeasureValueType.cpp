/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/MeasureValueType.h>
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
      namespace MeasureValueTypeMapper
      {

        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t BIGINT_HASH = ConstExprHashingUtils::HashString("BIGINT");
        static constexpr uint32_t VARCHAR_HASH = ConstExprHashingUtils::HashString("VARCHAR");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");
        static constexpr uint32_t MULTI_HASH = ConstExprHashingUtils::HashString("MULTI");


        MeasureValueType GetMeasureValueTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOUBLE_HASH)
          {
            return MeasureValueType::DOUBLE;
          }
          else if (hashCode == BIGINT_HASH)
          {
            return MeasureValueType::BIGINT;
          }
          else if (hashCode == VARCHAR_HASH)
          {
            return MeasureValueType::VARCHAR;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return MeasureValueType::BOOLEAN;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return MeasureValueType::TIMESTAMP;
          }
          else if (hashCode == MULTI_HASH)
          {
            return MeasureValueType::MULTI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MeasureValueType>(hashCode);
          }

          return MeasureValueType::NOT_SET;
        }

        Aws::String GetNameForMeasureValueType(MeasureValueType enumValue)
        {
          switch(enumValue)
          {
          case MeasureValueType::NOT_SET:
            return {};
          case MeasureValueType::DOUBLE:
            return "DOUBLE";
          case MeasureValueType::BIGINT:
            return "BIGINT";
          case MeasureValueType::VARCHAR:
            return "VARCHAR";
          case MeasureValueType::BOOLEAN:
            return "BOOLEAN";
          case MeasureValueType::TIMESTAMP:
            return "TIMESTAMP";
          case MeasureValueType::MULTI:
            return "MULTI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MeasureValueTypeMapper
    } // namespace Model
  } // namespace TimestreamWrite
} // namespace Aws
