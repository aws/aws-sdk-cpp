/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableOrientation.h>
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
      namespace TableOrientationMapper
      {

        static const int VERTICAL_HASH = HashingUtils::HashString("VERTICAL");
        static const int HORIZONTAL_HASH = HashingUtils::HashString("HORIZONTAL");


        TableOrientation GetTableOrientationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERTICAL_HASH)
          {
            return TableOrientation::VERTICAL;
          }
          else if (hashCode == HORIZONTAL_HASH)
          {
            return TableOrientation::HORIZONTAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableOrientation>(hashCode);
          }

          return TableOrientation::NOT_SET;
        }

        Aws::String GetNameForTableOrientation(TableOrientation enumValue)
        {
          switch(enumValue)
          {
          case TableOrientation::VERTICAL:
            return "VERTICAL";
          case TableOrientation::HORIZONTAL:
            return "HORIZONTAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableOrientationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
