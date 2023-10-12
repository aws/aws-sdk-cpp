/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace AuthenticationTypeMapper
      {

        static constexpr uint32_t Standard_HASH = ConstExprHashingUtils::HashString("Standard");
        static constexpr uint32_t IAM_Identity_Center_HASH = ConstExprHashingUtils::HashString("IAM_Identity_Center");


        AuthenticationType GetAuthenticationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return AuthenticationType::Standard;
          }
          else if (hashCode == IAM_Identity_Center_HASH)
          {
            return AuthenticationType::IAM_Identity_Center;
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
          case AuthenticationType::Standard:
            return "Standard";
          case AuthenticationType::IAM_Identity_Center:
            return "IAM_Identity_Center";
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
  } // namespace WorkSpacesWeb
} // namespace Aws
