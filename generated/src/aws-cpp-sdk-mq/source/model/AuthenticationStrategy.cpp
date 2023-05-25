/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace AuthenticationStrategyMapper
      {

        static const int SIMPLE_HASH = HashingUtils::HashString("SIMPLE");
        static const int LDAP_HASH = HashingUtils::HashString("LDAP");


        AuthenticationStrategy GetAuthenticationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIMPLE_HASH)
          {
            return AuthenticationStrategy::SIMPLE;
          }
          else if (hashCode == LDAP_HASH)
          {
            return AuthenticationStrategy::LDAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationStrategy>(hashCode);
          }

          return AuthenticationStrategy::NOT_SET;
        }

        Aws::String GetNameForAuthenticationStrategy(AuthenticationStrategy enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationStrategy::SIMPLE:
            return "SIMPLE";
          case AuthenticationStrategy::LDAP:
            return "LDAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationStrategyMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
