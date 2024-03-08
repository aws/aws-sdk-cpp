/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FilterBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace FilterBehaviorMapper
      {

        static const int KEEP_HASH = HashingUtils::HashString("KEEP");
        static const int DROP_HASH = HashingUtils::HashString("DROP");


        FilterBehavior GetFilterBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEEP_HASH)
          {
            return FilterBehavior::KEEP;
          }
          else if (hashCode == DROP_HASH)
          {
            return FilterBehavior::DROP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterBehavior>(hashCode);
          }

          return FilterBehavior::NOT_SET;
        }

        Aws::String GetNameForFilterBehavior(FilterBehavior enumValue)
        {
          switch(enumValue)
          {
          case FilterBehavior::NOT_SET:
            return {};
          case FilterBehavior::KEEP:
            return "KEEP";
          case FilterBehavior::DROP:
            return "DROP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterBehaviorMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
