/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnDataSubType.h>
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
      namespace ColumnDataSubTypeMapper
      {

        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int FIXED_HASH = HashingUtils::HashString("FIXED");


        ColumnDataSubType GetColumnDataSubTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOAT_HASH)
          {
            return ColumnDataSubType::FLOAT;
          }
          else if (hashCode == FIXED_HASH)
          {
            return ColumnDataSubType::FIXED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnDataSubType>(hashCode);
          }

          return ColumnDataSubType::NOT_SET;
        }

        Aws::String GetNameForColumnDataSubType(ColumnDataSubType enumValue)
        {
          switch(enumValue)
          {
          case ColumnDataSubType::NOT_SET:
            return {};
          case ColumnDataSubType::FLOAT:
            return "FLOAT";
          case ColumnDataSubType::FIXED:
            return "FIXED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnDataSubTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
