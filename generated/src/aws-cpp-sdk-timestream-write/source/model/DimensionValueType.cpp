/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DimensionValueType.h>
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
      namespace DimensionValueTypeMapper
      {

        static const int VARCHAR_HASH = HashingUtils::HashString("VARCHAR");


        DimensionValueType GetDimensionValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VARCHAR_HASH)
          {
            return DimensionValueType::VARCHAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionValueType>(hashCode);
          }

          return DimensionValueType::NOT_SET;
        }

        Aws::String GetNameForDimensionValueType(DimensionValueType enumValue)
        {
          switch(enumValue)
          {
          case DimensionValueType::VARCHAR:
            return "VARCHAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionValueTypeMapper
    } // namespace Model
  } // namespace TimestreamWrite
} // namespace Aws
