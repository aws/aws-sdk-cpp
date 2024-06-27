/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspacesPoolsFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace DescribeWorkspacesPoolsFilterOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOTEQUALS_HASH = HashingUtils::HashString("NOTEQUALS");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int NOTCONTAINS_HASH = HashingUtils::HashString("NOTCONTAINS");


        DescribeWorkspacesPoolsFilterOperator GetDescribeWorkspacesPoolsFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return DescribeWorkspacesPoolsFilterOperator::EQUALS;
          }
          else if (hashCode == NOTEQUALS_HASH)
          {
            return DescribeWorkspacesPoolsFilterOperator::NOTEQUALS;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return DescribeWorkspacesPoolsFilterOperator::CONTAINS;
          }
          else if (hashCode == NOTCONTAINS_HASH)
          {
            return DescribeWorkspacesPoolsFilterOperator::NOTCONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeWorkspacesPoolsFilterOperator>(hashCode);
          }

          return DescribeWorkspacesPoolsFilterOperator::NOT_SET;
        }

        Aws::String GetNameForDescribeWorkspacesPoolsFilterOperator(DescribeWorkspacesPoolsFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case DescribeWorkspacesPoolsFilterOperator::NOT_SET:
            return {};
          case DescribeWorkspacesPoolsFilterOperator::EQUALS:
            return "EQUALS";
          case DescribeWorkspacesPoolsFilterOperator::NOTEQUALS:
            return "NOTEQUALS";
          case DescribeWorkspacesPoolsFilterOperator::CONTAINS:
            return "CONTAINS";
          case DescribeWorkspacesPoolsFilterOperator::NOTCONTAINS:
            return "NOTCONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribeWorkspacesPoolsFilterOperatorMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
