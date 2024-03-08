/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FilterRequirement.h>
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
      namespace FilterRequirementMapper
      {

        static const int MEETS_ALL_HASH = HashingUtils::HashString("MEETS_ALL");
        static const int MEETS_ANY_HASH = HashingUtils::HashString("MEETS_ANY");


        FilterRequirement GetFilterRequirementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEETS_ALL_HASH)
          {
            return FilterRequirement::MEETS_ALL;
          }
          else if (hashCode == MEETS_ANY_HASH)
          {
            return FilterRequirement::MEETS_ANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterRequirement>(hashCode);
          }

          return FilterRequirement::NOT_SET;
        }

        Aws::String GetNameForFilterRequirement(FilterRequirement enumValue)
        {
          switch(enumValue)
          {
          case FilterRequirement::NOT_SET:
            return {};
          case FilterRequirement::MEETS_ALL:
            return "MEETS_ALL";
          case FilterRequirement::MEETS_ANY:
            return "MEETS_ANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterRequirementMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
