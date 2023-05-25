/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableTotalsScrollStatus.h>
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
      namespace TableTotalsScrollStatusMapper
      {

        static const int PINNED_HASH = HashingUtils::HashString("PINNED");
        static const int SCROLLED_HASH = HashingUtils::HashString("SCROLLED");


        TableTotalsScrollStatus GetTableTotalsScrollStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PINNED_HASH)
          {
            return TableTotalsScrollStatus::PINNED;
          }
          else if (hashCode == SCROLLED_HASH)
          {
            return TableTotalsScrollStatus::SCROLLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableTotalsScrollStatus>(hashCode);
          }

          return TableTotalsScrollStatus::NOT_SET;
        }

        Aws::String GetNameForTableTotalsScrollStatus(TableTotalsScrollStatus enumValue)
        {
          switch(enumValue)
          {
          case TableTotalsScrollStatus::PINNED:
            return "PINNED";
          case TableTotalsScrollStatus::SCROLLED:
            return "SCROLLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableTotalsScrollStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
