/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/GrantType.h>
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
      namespace GrantTypeMapper
      {

        static const int authorization_code_HASH = HashingUtils::HashString("authorization_code");
        static const int refresh_token_HASH = HashingUtils::HashString("refresh_token");
        static const int urn_ietf_params_oauth_grant_type_jwt_bearer_HASH = HashingUtils::HashString("urn:ietf:params:oauth:grant-type:jwt-bearer");
        static const int urn_ietf_params_oauth_grant_type_token_exchange_HASH = HashingUtils::HashString("urn:ietf:params:oauth:grant-type:token-exchange");


        GrantType GetGrantTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == authorization_code_HASH)
          {
            return GrantType::authorization_code;
          }
          else if (hashCode == refresh_token_HASH)
          {
            return GrantType::refresh_token;
          }
          else if (hashCode == urn_ietf_params_oauth_grant_type_jwt_bearer_HASH)
          {
            return GrantType::urn_ietf_params_oauth_grant_type_jwt_bearer;
          }
          else if (hashCode == urn_ietf_params_oauth_grant_type_token_exchange_HASH)
          {
            return GrantType::urn_ietf_params_oauth_grant_type_token_exchange;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GrantType>(hashCode);
          }

          return GrantType::NOT_SET;
        }

        Aws::String GetNameForGrantType(GrantType enumValue)
        {
          switch(enumValue)
          {
          case GrantType::NOT_SET:
            return {};
          case GrantType::authorization_code:
            return "authorization_code";
          case GrantType::refresh_token:
            return "refresh_token";
          case GrantType::urn_ietf_params_oauth_grant_type_jwt_bearer:
            return "urn:ietf:params:oauth:grant-type:jwt-bearer";
          case GrantType::urn_ietf_params_oauth_grant_type_token_exchange:
            return "urn:ietf:params:oauth:grant-type:token-exchange";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GrantTypeMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
