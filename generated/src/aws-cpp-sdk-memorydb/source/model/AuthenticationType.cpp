/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/AuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MemoryDB
  {
    namespace Model
    {
      namespace AuthenticationTypeMapper
      {

        static constexpr uint32_t password_HASH = ConstExprHashingUtils::HashString("password");
        static constexpr uint32_t no_password_HASH = ConstExprHashingUtils::HashString("no-password");
        static constexpr uint32_t iam_HASH = ConstExprHashingUtils::HashString("iam");


        AuthenticationType GetAuthenticationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == password_HASH)
          {
            return AuthenticationType::password;
          }
          else if (hashCode == no_password_HASH)
          {
            return AuthenticationType::no_password;
          }
          else if (hashCode == iam_HASH)
          {
            return AuthenticationType::iam;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationType>(hashCode);
          }

          return AuthenticationType::NOT_SET;
        }

        Aws::String GetNameForAuthenticationType(AuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationType::NOT_SET:
            return {};
          case AuthenticationType::password:
            return "password";
          case AuthenticationType::no_password:
            return "no-password";
          case AuthenticationType::iam:
            return "iam";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationTypeMapper
    } // namespace Model
  } // namespace MemoryDB
} // namespace Aws
