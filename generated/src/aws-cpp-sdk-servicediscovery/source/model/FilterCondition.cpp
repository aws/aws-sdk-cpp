/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/FilterCondition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace FilterConditionMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");


        FilterCondition GetFilterConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return FilterCondition::EQ;
          }
          else if (hashCode == IN_HASH)
          {
            return FilterCondition::IN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return FilterCondition::BETWEEN;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return FilterCondition::BEGINS_WITH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterCondition>(hashCode);
          }

          return FilterCondition::NOT_SET;
        }

        Aws::String GetNameForFilterCondition(FilterCondition enumValue)
        {
          switch(enumValue)
          {
          case FilterCondition::EQ:
            return "EQ";
          case FilterCondition::IN:
            return "IN";
          case FilterCondition::BETWEEN:
            return "BETWEEN";
          case FilterCondition::BEGINS_WITH:
            return "BEGINS_WITH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterConditionMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
