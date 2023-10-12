/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace AuthTypeMapper
      {

        static constexpr uint32_t NTLM_HASH = ConstExprHashingUtils::HashString("NTLM");
        static constexpr uint32_t SSH_HASH = ConstExprHashingUtils::HashString("SSH");
        static constexpr uint32_t CERT_HASH = ConstExprHashingUtils::HashString("CERT");


        AuthType GetAuthTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NTLM_HASH)
          {
            return AuthType::NTLM;
          }
          else if (hashCode == SSH_HASH)
          {
            return AuthType::SSH;
          }
          else if (hashCode == CERT_HASH)
          {
            return AuthType::CERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthType>(hashCode);
          }

          return AuthType::NOT_SET;
        }

        Aws::String GetNameForAuthType(AuthType enumValue)
        {
          switch(enumValue)
          {
          case AuthType::NOT_SET:
            return {};
          case AuthType::NTLM:
            return "NTLM";
          case AuthType::SSH:
            return "SSH";
          case AuthType::CERT:
            return "CERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
