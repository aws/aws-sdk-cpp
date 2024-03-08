/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/MeasureValueType.h>
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
      namespace MeasureValueTypeMapper
      {

        static const int BIGINT_HASH = HashingUtils::HashString("BIGINT");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int VARCHAR_HASH = HashingUtils::HashString("VARCHAR");
        static const int MULTI_HASH = HashingUtils::HashString("MULTI");


        MeasureValueType GetMeasureValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BIGINT_HASH)
          {
            return MeasureValueType::BIGINT;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return MeasureValueType::BOOLEAN;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return MeasureValueType::DOUBLE;
          }
          else if (hashCode == VARCHAR_HASH)
          {
            return MeasureValueType::VARCHAR;
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
          case MeasureValueType::BIGINT:
            return "BIGINT";
          case MeasureValueType::BOOLEAN:
            return "BOOLEAN";
          case MeasureValueType::DOUBLE:
            return "DOUBLE";
          case MeasureValueType::VARCHAR:
            return "VARCHAR";
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
  } // namespace TimestreamQuery
} // namespace Aws
