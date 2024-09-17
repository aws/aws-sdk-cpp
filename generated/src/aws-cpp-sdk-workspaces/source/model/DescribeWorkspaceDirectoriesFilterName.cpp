/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspaceDirectoriesFilterName.h>
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
      namespace DescribeWorkspaceDirectoriesFilterNameMapper
      {

        static const int USER_IDENTITY_TYPE_HASH = HashingUtils::HashString("USER_IDENTITY_TYPE");
        static const int WORKSPACE_TYPE_HASH = HashingUtils::HashString("WORKSPACE_TYPE");


        DescribeWorkspaceDirectoriesFilterName GetDescribeWorkspaceDirectoriesFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_IDENTITY_TYPE_HASH)
          {
            return DescribeWorkspaceDirectoriesFilterName::USER_IDENTITY_TYPE;
          }
          else if (hashCode == WORKSPACE_TYPE_HASH)
          {
            return DescribeWorkspaceDirectoriesFilterName::WORKSPACE_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeWorkspaceDirectoriesFilterName>(hashCode);
          }

          return DescribeWorkspaceDirectoriesFilterName::NOT_SET;
        }

        Aws::String GetNameForDescribeWorkspaceDirectoriesFilterName(DescribeWorkspaceDirectoriesFilterName enumValue)
        {
          switch(enumValue)
          {
          case DescribeWorkspaceDirectoriesFilterName::NOT_SET:
            return {};
          case DescribeWorkspaceDirectoriesFilterName::USER_IDENTITY_TYPE:
            return "USER_IDENTITY_TYPE";
          case DescribeWorkspaceDirectoriesFilterName::WORKSPACE_TYPE:
            return "WORKSPACE_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribeWorkspaceDirectoriesFilterNameMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
