/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AuthenticationMethodType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace AuthenticationMethodTypeMapper
      {

        static const int IAM_HASH = HashingUtils::HashString("IAM");


        AuthenticationMethodType GetAuthenticationMethodTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return AuthenticationMethodType::IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationMethodType>(hashCode);
          }

          return AuthenticationMethodType::NOT_SET;
        }

        Aws::String GetNameForAuthenticationMethodType(AuthenticationMethodType enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationMethodType::NOT_SET:
            return {};
          case AuthenticationMethodType::IAM:
            return "IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationMethodTypeMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
