/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ConnectionAliasState.h>
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
      namespace ConnectionAliasStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ConnectionAliasState GetConnectionAliasStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ConnectionAliasState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ConnectionAliasState::CREATED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConnectionAliasState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionAliasState>(hashCode);
          }

          return ConnectionAliasState::NOT_SET;
        }

        Aws::String GetNameForConnectionAliasState(ConnectionAliasState enumValue)
        {
          switch(enumValue)
          {
          case ConnectionAliasState::CREATING:
            return "CREATING";
          case ConnectionAliasState::CREATED:
            return "CREATED";
          case ConnectionAliasState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionAliasStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
