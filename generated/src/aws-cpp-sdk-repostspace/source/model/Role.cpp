/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/Role.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace repostspace
  {
    namespace Model
    {
      namespace RoleMapper
      {

        static const int EXPERT_HASH = HashingUtils::HashString("EXPERT");
        static const int MODERATOR_HASH = HashingUtils::HashString("MODERATOR");
        static const int ADMINISTRATOR_HASH = HashingUtils::HashString("ADMINISTRATOR");
        static const int SUPPORTREQUESTOR_HASH = HashingUtils::HashString("SUPPORTREQUESTOR");


        Role GetRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPERT_HASH)
          {
            return Role::EXPERT;
          }
          else if (hashCode == MODERATOR_HASH)
          {
            return Role::MODERATOR;
          }
          else if (hashCode == ADMINISTRATOR_HASH)
          {
            return Role::ADMINISTRATOR;
          }
          else if (hashCode == SUPPORTREQUESTOR_HASH)
          {
            return Role::SUPPORTREQUESTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Role>(hashCode);
          }

          return Role::NOT_SET;
        }

        Aws::String GetNameForRole(Role enumValue)
        {
          switch(enumValue)
          {
          case Role::NOT_SET:
            return {};
          case Role::EXPERT:
            return "EXPERT";
          case Role::MODERATOR:
            return "MODERATOR";
          case Role::ADMINISTRATOR:
            return "ADMINISTRATOR";
          case Role::SUPPORTREQUESTOR:
            return "SUPPORTREQUESTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoleMapper
    } // namespace Model
  } // namespace repostspace
} // namespace Aws
