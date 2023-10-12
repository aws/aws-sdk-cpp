/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/UserRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace UserRoleMapper
      {

        static constexpr uint32_t USER_HASH = ConstExprHashingUtils::HashString("USER");
        static constexpr uint32_t RESOURCE_HASH = ConstExprHashingUtils::HashString("RESOURCE");
        static constexpr uint32_t SYSTEM_USER_HASH = ConstExprHashingUtils::HashString("SYSTEM_USER");
        static constexpr uint32_t REMOTE_USER_HASH = ConstExprHashingUtils::HashString("REMOTE_USER");


        UserRole GetUserRoleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return UserRole::USER;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return UserRole::RESOURCE;
          }
          else if (hashCode == SYSTEM_USER_HASH)
          {
            return UserRole::SYSTEM_USER;
          }
          else if (hashCode == REMOTE_USER_HASH)
          {
            return UserRole::REMOTE_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserRole>(hashCode);
          }

          return UserRole::NOT_SET;
        }

        Aws::String GetNameForUserRole(UserRole enumValue)
        {
          switch(enumValue)
          {
          case UserRole::NOT_SET:
            return {};
          case UserRole::USER:
            return "USER";
          case UserRole::RESOURCE:
            return "RESOURCE";
          case UserRole::SYSTEM_USER:
            return "SYSTEM_USER";
          case UserRole::REMOTE_USER:
            return "REMOTE_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserRoleMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
