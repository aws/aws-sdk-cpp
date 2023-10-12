/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UserRole.h>
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
      namespace UserRoleMapper
      {

        static constexpr uint32_t ADMIN_HASH = ConstExprHashingUtils::HashString("ADMIN");
        static constexpr uint32_t AUTHOR_HASH = ConstExprHashingUtils::HashString("AUTHOR");
        static constexpr uint32_t READER_HASH = ConstExprHashingUtils::HashString("READER");
        static constexpr uint32_t RESTRICTED_AUTHOR_HASH = ConstExprHashingUtils::HashString("RESTRICTED_AUTHOR");
        static constexpr uint32_t RESTRICTED_READER_HASH = ConstExprHashingUtils::HashString("RESTRICTED_READER");


        UserRole GetUserRoleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADMIN_HASH)
          {
            return UserRole::ADMIN;
          }
          else if (hashCode == AUTHOR_HASH)
          {
            return UserRole::AUTHOR;
          }
          else if (hashCode == READER_HASH)
          {
            return UserRole::READER;
          }
          else if (hashCode == RESTRICTED_AUTHOR_HASH)
          {
            return UserRole::RESTRICTED_AUTHOR;
          }
          else if (hashCode == RESTRICTED_READER_HASH)
          {
            return UserRole::RESTRICTED_READER;
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
          case UserRole::ADMIN:
            return "ADMIN";
          case UserRole::AUTHOR:
            return "AUTHOR";
          case UserRole::READER:
            return "READER";
          case UserRole::RESTRICTED_AUTHOR:
            return "RESTRICTED_AUTHOR";
          case UserRole::RESTRICTED_READER:
            return "RESTRICTED_READER";
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
  } // namespace QuickSight
} // namespace Aws
