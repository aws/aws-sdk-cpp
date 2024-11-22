/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ParquetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace ParquetTypeMapper
      {

        static const int COLUMNAR_HASH = HashingUtils::HashString("COLUMNAR");


        ParquetType GetParquetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLUMNAR_HASH)
          {
            return ParquetType::COLUMNAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParquetType>(hashCode);
          }

          return ParquetType::NOT_SET;
        }

        Aws::String GetNameForParquetType(ParquetType enumValue)
        {
          switch(enumValue)
          {
          case ParquetType::NOT_SET:
            return {};
          case ParquetType::COLUMNAR:
            return "COLUMNAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParquetTypeMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
