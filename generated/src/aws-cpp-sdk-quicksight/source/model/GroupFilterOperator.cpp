/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GroupFilterOperator.h>
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
      namespace GroupFilterOperatorMapper
      {

        static constexpr uint32_t StartsWith_HASH = ConstExprHashingUtils::HashString("StartsWith");


        GroupFilterOperator GetGroupFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StartsWith_HASH)
          {
            return GroupFilterOperator::StartsWith;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupFilterOperator>(hashCode);
          }

          return GroupFilterOperator::NOT_SET;
        }

        Aws::String GetNameForGroupFilterOperator(GroupFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case GroupFilterOperator::NOT_SET:
            return {};
          case GroupFilterOperator::StartsWith:
            return "StartsWith";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupFilterOperatorMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
