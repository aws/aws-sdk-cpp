/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableBorderStyle.h>
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
      namespace TableBorderStyleMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SOLID_HASH = HashingUtils::HashString("SOLID");


        TableBorderStyle GetTableBorderStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TableBorderStyle::NONE;
          }
          else if (hashCode == SOLID_HASH)
          {
            return TableBorderStyle::SOLID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableBorderStyle>(hashCode);
          }

          return TableBorderStyle::NOT_SET;
        }

        Aws::String GetNameForTableBorderStyle(TableBorderStyle enumValue)
        {
          switch(enumValue)
          {
          case TableBorderStyle::NONE:
            return "NONE";
          case TableBorderStyle::SOLID:
            return "SOLID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableBorderStyleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
