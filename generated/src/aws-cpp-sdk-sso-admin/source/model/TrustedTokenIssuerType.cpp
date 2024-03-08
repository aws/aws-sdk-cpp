/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/TrustedTokenIssuerType.h>
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
      namespace TrustedTokenIssuerTypeMapper
      {

        static const int OIDC_JWT_HASH = HashingUtils::HashString("OIDC_JWT");


        TrustedTokenIssuerType GetTrustedTokenIssuerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OIDC_JWT_HASH)
          {
            return TrustedTokenIssuerType::OIDC_JWT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustedTokenIssuerType>(hashCode);
          }

          return TrustedTokenIssuerType::NOT_SET;
        }

        Aws::String GetNameForTrustedTokenIssuerType(TrustedTokenIssuerType enumValue)
        {
          switch(enumValue)
          {
          case TrustedTokenIssuerType::NOT_SET:
            return {};
          case TrustedTokenIssuerType::OIDC_JWT:
            return "OIDC_JWT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrustedTokenIssuerTypeMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
