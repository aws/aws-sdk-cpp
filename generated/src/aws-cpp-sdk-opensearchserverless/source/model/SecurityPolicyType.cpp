/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/SecurityPolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace SecurityPolicyTypeMapper
      {

        static const int encryption_HASH = HashingUtils::HashString("encryption");
        static const int network_HASH = HashingUtils::HashString("network");


        SecurityPolicyType GetSecurityPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == encryption_HASH)
          {
            return SecurityPolicyType::encryption;
          }
          else if (hashCode == network_HASH)
          {
            return SecurityPolicyType::network;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityPolicyType>(hashCode);
          }

          return SecurityPolicyType::NOT_SET;
        }

        Aws::String GetNameForSecurityPolicyType(SecurityPolicyType enumValue)
        {
          switch(enumValue)
          {
          case SecurityPolicyType::encryption:
            return "encryption";
          case SecurityPolicyType::network:
            return "network";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityPolicyTypeMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
