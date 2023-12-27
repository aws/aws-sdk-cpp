/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/IdentityProviderType.h>
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
      namespace IdentityProviderTypeMapper
      {

        static const int SAML_HASH = HashingUtils::HashString("SAML");
        static const int Facebook_HASH = HashingUtils::HashString("Facebook");
        static const int Google_HASH = HashingUtils::HashString("Google");
        static const int LoginWithAmazon_HASH = HashingUtils::HashString("LoginWithAmazon");
        static const int SignInWithApple_HASH = HashingUtils::HashString("SignInWithApple");
        static const int OIDC_HASH = HashingUtils::HashString("OIDC");


        IdentityProviderType GetIdentityProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAML_HASH)
          {
            return IdentityProviderType::SAML;
          }
          else if (hashCode == Facebook_HASH)
          {
            return IdentityProviderType::Facebook;
          }
          else if (hashCode == Google_HASH)
          {
            return IdentityProviderType::Google;
          }
          else if (hashCode == LoginWithAmazon_HASH)
          {
            return IdentityProviderType::LoginWithAmazon;
          }
          else if (hashCode == SignInWithApple_HASH)
          {
            return IdentityProviderType::SignInWithApple;
          }
          else if (hashCode == OIDC_HASH)
          {
            return IdentityProviderType::OIDC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityProviderType>(hashCode);
          }

          return IdentityProviderType::NOT_SET;
        }

        Aws::String GetNameForIdentityProviderType(IdentityProviderType enumValue)
        {
          switch(enumValue)
          {
          case IdentityProviderType::NOT_SET:
            return {};
          case IdentityProviderType::SAML:
            return "SAML";
          case IdentityProviderType::Facebook:
            return "Facebook";
          case IdentityProviderType::Google:
            return "Google";
          case IdentityProviderType::LoginWithAmazon:
            return "LoginWithAmazon";
          case IdentityProviderType::SignInWithApple:
            return "SignInWithApple";
          case IdentityProviderType::OIDC:
            return "OIDC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityProviderTypeMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
