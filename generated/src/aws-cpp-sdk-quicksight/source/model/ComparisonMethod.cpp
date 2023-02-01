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

        static const int DIFFERENCE_HASH = HashingUtils::HashString("DIFFERENCE");
        static const int PERCENT_DIFFERENCE_HASH = HashingUtils::HashString("PERCENT_DIFFERENCE");
        static const int PERCENT_HASH = HashingUtils::HashString("PERCENT");


        ComparisonMethod GetComparisonMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
