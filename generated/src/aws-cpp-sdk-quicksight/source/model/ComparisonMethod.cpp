/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComparisonMethod.h>
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
      namespace ComparisonMethodMapper
      {

        static constexpr uint32_t DIFFERENCE_HASH = ConstExprHashingUtils::HashString("DIFFERENCE");
        static constexpr uint32_t PERCENT_DIFFERENCE_HASH = ConstExprHashingUtils::HashString("PERCENT_DIFFERENCE");
        static constexpr uint32_t PERCENT_HASH = ConstExprHashingUtils::HashString("PERCENT");


        ComparisonMethod GetComparisonMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIFFERENCE_HASH)
          {
            return ComparisonMethod::DIFFERENCE;
          }
          else if (hashCode == PERCENT_DIFFERENCE_HASH)
          {
            return ComparisonMethod::PERCENT_DIFFERENCE;
          }
          else if (hashCode == PERCENT_HASH)
          {
            return ComparisonMethod::PERCENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonMethod>(hashCode);
          }

          return ComparisonMethod::NOT_SET;
        }

        Aws::String GetNameForComparisonMethod(ComparisonMethod enumValue)
        {
          switch(enumValue)
          {
          case ComparisonMethod::NOT_SET:
            return {};
          case ComparisonMethod::DIFFERENCE:
            return "DIFFERENCE";
          case ComparisonMethod::PERCENT_DIFFERENCE:
            return "PERCENT_DIFFERENCE";
          case ComparisonMethod::PERCENT:
            return "PERCENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonMethodMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
