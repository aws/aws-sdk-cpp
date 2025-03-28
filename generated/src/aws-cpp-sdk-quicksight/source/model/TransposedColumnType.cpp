/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TransposedColumnType.h>
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
      namespace TransposedColumnTypeMapper
      {

        static const int ROW_HEADER_COLUMN_HASH = HashingUtils::HashString("ROW_HEADER_COLUMN");
        static const int VALUE_COLUMN_HASH = HashingUtils::HashString("VALUE_COLUMN");


        TransposedColumnType GetTransposedColumnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROW_HEADER_COLUMN_HASH)
          {
            return TransposedColumnType::ROW_HEADER_COLUMN;
          }
          else if (hashCode == VALUE_COLUMN_HASH)
          {
            return TransposedColumnType::VALUE_COLUMN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransposedColumnType>(hashCode);
          }

          return TransposedColumnType::NOT_SET;
        }

        Aws::String GetNameForTransposedColumnType(TransposedColumnType enumValue)
        {
          switch(enumValue)
          {
          case TransposedColumnType::NOT_SET:
            return {};
          case TransposedColumnType::ROW_HEADER_COLUMN:
            return "ROW_HEADER_COLUMN";
          case TransposedColumnType::VALUE_COLUMN:
            return "VALUE_COLUMN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransposedColumnTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
