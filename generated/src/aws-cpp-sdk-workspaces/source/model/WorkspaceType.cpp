/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceType.h>
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
      namespace WorkspaceTypeMapper
      {

        static const int PERSONAL_HASH = HashingUtils::HashString("PERSONAL");
        static const int POOLS_HASH = HashingUtils::HashString("POOLS");


        WorkspaceType GetWorkspaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERSONAL_HASH)
          {
            return WorkspaceType::PERSONAL;
          }
          else if (hashCode == POOLS_HASH)
          {
            return WorkspaceType::POOLS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceType>(hashCode);
          }

          return WorkspaceType::NOT_SET;
        }

        Aws::String GetNameForWorkspaceType(WorkspaceType enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceType::NOT_SET:
            return {};
          case WorkspaceType::PERSONAL:
            return "PERSONAL";
          case WorkspaceType::POOLS:
            return "POOLS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
