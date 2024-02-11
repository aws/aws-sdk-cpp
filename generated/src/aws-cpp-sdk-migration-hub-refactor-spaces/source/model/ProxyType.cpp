/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ProxyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubRefactorSpaces
  {
    namespace Model
    {
      namespace ProxyTypeMapper
      {

        static const int API_GATEWAY_HASH = HashingUtils::HashString("API_GATEWAY");


        ProxyType GetProxyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_GATEWAY_HASH)
          {
            return ProxyType::API_GATEWAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProxyType>(hashCode);
          }

          return ProxyType::NOT_SET;
        }

        Aws::String GetNameForProxyType(ProxyType enumValue)
        {
          switch(enumValue)
          {
          case ProxyType::NOT_SET:
            return {};
          case ProxyType::API_GATEWAY:
            return "API_GATEWAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProxyTypeMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
