/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspacesPoolsFilterName.h>
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
      namespace DescribeWorkspacesPoolsFilterNameMapper
      {

        static const int PoolName_HASH = HashingUtils::HashString("PoolName");


        DescribeWorkspacesPoolsFilterName GetDescribeWorkspacesPoolsFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PoolName_HASH)
          {
            return DescribeWorkspacesPoolsFilterName::PoolName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeWorkspacesPoolsFilterName>(hashCode);
          }

          return DescribeWorkspacesPoolsFilterName::NOT_SET;
        }

        Aws::String GetNameForDescribeWorkspacesPoolsFilterName(DescribeWorkspacesPoolsFilterName enumValue)
        {
          switch(enumValue)
          {
          case DescribeWorkspacesPoolsFilterName::NOT_SET:
            return {};
          case DescribeWorkspacesPoolsFilterName::PoolName:
            return "PoolName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribeWorkspacesPoolsFilterNameMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
