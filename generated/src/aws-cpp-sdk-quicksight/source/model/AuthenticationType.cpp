/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AuthenticationType.h>
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
      namespace AuthenticationTypeMapper
      {

        static const int PASSWORD_HASH = HashingUtils::HashString("PASSWORD");
        static const int TOKEN_HASH = HashingUtils::HashString("TOKEN");
        static const int X509_HASH = HashingUtils::HashString("X509");


        AuthenticationType GetAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSWORD_HASH)
          {
            return AuthenticationType::PASSWORD;
          }
          else if (hashCode == TOKEN_HASH)
          {
            return AuthenticationType::TOKEN;
          }
          else if (hashCode == X509_HASH)
          {
            return AuthenticationType::X509;
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
          case AuthenticationType::PASSWORD:
            return "PASSWORD";
          case AuthenticationType::TOKEN:
            return "TOKEN";
          case AuthenticationType::X509:
            return "X509";
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
  } // namespace QuickSight
} // namespace Aws
