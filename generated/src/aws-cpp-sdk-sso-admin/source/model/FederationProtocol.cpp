/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/FederationProtocol.h>
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
      namespace FederationProtocolMapper
      {

        static const int SAML_HASH = HashingUtils::HashString("SAML");
        static const int OAUTH_HASH = HashingUtils::HashString("OAUTH");


        FederationProtocol GetFederationProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAML_HASH)
          {
            return FederationProtocol::SAML;
          }
          else if (hashCode == OAUTH_HASH)
          {
            return FederationProtocol::OAUTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FederationProtocol>(hashCode);
          }

          return FederationProtocol::NOT_SET;
        }

        Aws::String GetNameForFederationProtocol(FederationProtocol enumValue)
        {
          switch(enumValue)
          {
          case FederationProtocol::NOT_SET:
            return {};
          case FederationProtocol::SAML:
            return "SAML";
          case FederationProtocol::OAUTH:
            return "OAUTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FederationProtocolMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
