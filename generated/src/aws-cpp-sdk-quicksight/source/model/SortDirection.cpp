/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SortDirection.h>
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
      namespace SortDirectionMapper
      {

        static const int ASC_HASH = HashingUtils::HashString("ASC");
        static const int DESC_HASH = HashingUtils::HashString("DESC");


        SortDirection GetSortDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASC_HASH)
          {
            return SortDirection::ASC;
          }
          else if (hashCode == DESC_HASH)
          {
            return SortDirection::DESC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortDirection>(hashCode);
          }

          return SortDirection::NOT_SET;
        }

        Aws::String GetNameForSortDirection(SortDirection enumValue)
        {
          switch(enumValue)
          {
          case SortDirection::ASC:
            return "ASC";
          case SortDirection::DESC:
            return "DESC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortDirectionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
