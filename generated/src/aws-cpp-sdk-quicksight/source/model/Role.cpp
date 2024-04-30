/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Role.h>
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
      namespace RoleMapper
      {

        static const int ADMIN_HASH = HashingUtils::HashString("ADMIN");
        static const int AUTHOR_HASH = HashingUtils::HashString("AUTHOR");
        static const int READER_HASH = HashingUtils::HashString("READER");
        static const int ADMIN_PRO_HASH = HashingUtils::HashString("ADMIN_PRO");
        static const int AUTHOR_PRO_HASH = HashingUtils::HashString("AUTHOR_PRO");
        static const int READER_PRO_HASH = HashingUtils::HashString("READER_PRO");


        Role GetRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADMIN_HASH)
          {
            return Role::ADMIN;
          }
          else if (hashCode == AUTHOR_HASH)
          {
            return Role::AUTHOR;
          }
          else if (hashCode == READER_HASH)
          {
            return Role::READER;
          }
          else if (hashCode == ADMIN_PRO_HASH)
          {
            return Role::ADMIN_PRO;
          }
          else if (hashCode == AUTHOR_PRO_HASH)
          {
            return Role::AUTHOR_PRO;
          }
          else if (hashCode == READER_PRO_HASH)
          {
            return Role::READER_PRO;
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
          case Role::ADMIN:
            return "ADMIN";
          case Role::AUTHOR:
            return "AUTHOR";
          case Role::READER:
            return "READER";
          case Role::ADMIN_PRO:
            return "ADMIN_PRO";
          case Role::AUTHOR_PRO:
            return "AUTHOR_PRO";
          case Role::READER_PRO:
            return "READER_PRO";
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
  } // namespace QuickSight
} // namespace Aws
