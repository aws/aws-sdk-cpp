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

        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t IN_HASH = ConstExprHashingUtils::HashString("IN");
        static constexpr uint32_t BETWEEN_HASH = ConstExprHashingUtils::HashString("BETWEEN");
        static constexpr uint32_t BEGINS_WITH_HASH = ConstExprHashingUtils::HashString("BEGINS_WITH");


        FilterCondition GetFilterConditionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case FilterCondition::NOT_SET:
            return {};
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
