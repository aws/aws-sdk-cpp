/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SortByOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace SortByOrderMapper
      {

        static constexpr uint32_t ASC_HASH = ConstExprHashingUtils::HashString("ASC");
        static constexpr uint32_t DESC_HASH = ConstExprHashingUtils::HashString("DESC");


        SortByOrder GetSortByOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASC_HASH)
          {
            return SortByOrder::ASC;
          }
          else if (hashCode == DESC_HASH)
          {
            return SortByOrder::DESC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortByOrder>(hashCode);
          }

          return SortByOrder::NOT_SET;
        }

        Aws::String GetNameForSortByOrder(SortByOrder enumValue)
        {
          switch(enumValue)
          {
          case SortByOrder::NOT_SET:
            return {};
          case SortByOrder::ASC:
            return "ASC";
          case SortByOrder::DESC:
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

      } // namespace SortByOrderMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
