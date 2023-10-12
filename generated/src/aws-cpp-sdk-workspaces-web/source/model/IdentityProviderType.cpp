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

        static constexpr uint32_t SAML_HASH = ConstExprHashingUtils::HashString("SAML");
        static constexpr uint32_t Facebook_HASH = ConstExprHashingUtils::HashString("Facebook");
        static constexpr uint32_t Google_HASH = ConstExprHashingUtils::HashString("Google");
        static constexpr uint32_t LoginWithAmazon_HASH = ConstExprHashingUtils::HashString("LoginWithAmazon");
        static constexpr uint32_t SignInWithApple_HASH = ConstExprHashingUtils::HashString("SignInWithApple");
        static constexpr uint32_t OIDC_HASH = ConstExprHashingUtils::HashString("OIDC");


        IdentityProviderType GetIdentityProviderTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
