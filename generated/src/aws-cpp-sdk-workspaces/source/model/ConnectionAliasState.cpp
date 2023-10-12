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

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        ConnectionAliasState GetConnectionAliasStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConnectionAliasState::NOT_SET:
            return {};
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
