/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/OpenIdIssuer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VerifiedPermissions
  {
    namespace Model
    {
      namespace OpenIdIssuerMapper
      {

        static const int COGNITO_HASH = HashingUtils::HashString("COGNITO");


        OpenIdIssuer GetOpenIdIssuerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COGNITO_HASH)
          {
            return OpenIdIssuer::COGNITO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenIdIssuer>(hashCode);
          }

          return OpenIdIssuer::NOT_SET;
        }

        Aws::String GetNameForOpenIdIssuer(OpenIdIssuer enumValue)
        {
          switch(enumValue)
          {
          case OpenIdIssuer::COGNITO:
            return "COGNITO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenIdIssuerMapper
    } // namespace Model
  } // namespace VerifiedPermissions
} // namespace Aws
