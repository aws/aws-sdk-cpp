/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/SortOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AugmentedAIRuntime
  {
    namespace Model
    {
      namespace SortOrderMapper
      {

        static constexpr uint32_t Ascending_HASH = ConstExprHashingUtils::HashString("Ascending");
        static constexpr uint32_t Descending_HASH = ConstExprHashingUtils::HashString("Descending");


        SortOrder GetSortOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return SortOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return SortOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortOrder>(hashCode);
          }

          return SortOrder::NOT_SET;
        }

        Aws::String GetNameForSortOrder(SortOrder enumValue)
        {
          switch(enumValue)
          {
          case SortOrder::NOT_SET:
            return {};
          case SortOrder::Ascending:
            return "Ascending";
          case SortOrder::Descending:
            return "Descending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortOrderMapper
    } // namespace Model
  } // namespace AugmentedAIRuntime
} // namespace Aws
