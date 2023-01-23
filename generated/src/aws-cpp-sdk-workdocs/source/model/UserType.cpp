/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/UserType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace UserTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int ADMIN_HASH = HashingUtils::HashString("ADMIN");
        static const int POWERUSER_HASH = HashingUtils::HashString("POWERUSER");
        static const int MINIMALUSER_HASH = HashingUtils::HashString("MINIMALUSER");
        static const int WORKSPACESUSER_HASH = HashingUtils::HashString("WORKSPACESUSER");


        UserType GetUserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return UserType::USER;
          }
          else if (hashCode == ADMIN_HASH)
          {
            return UserType::ADMIN;
          }
          else if (hashCode == POWERUSER_HASH)
          {
            return UserType::POWERUSER;
          }
          else if (hashCode == MINIMALUSER_HASH)
          {
            return UserType::MINIMALUSER;
          }
          else if (hashCode == WORKSPACESUSER_HASH)
          {
            return UserType::WORKSPACESUSER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserType>(hashCode);
          }

          return UserType::NOT_SET;
        }

        Aws::String GetNameForUserType(UserType enumValue)
        {
          switch(enumValue)
          {
          case UserType::USER:
            return "USER";
          case UserType::ADMIN:
            return "ADMIN";
          case UserType::POWERUSER:
            return "POWERUSER";
          case UserType::MINIMALUSER:
            return "MINIMALUSER";
          case UserType::WORKSPACESUSER:
            return "WORKSPACESUSER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
