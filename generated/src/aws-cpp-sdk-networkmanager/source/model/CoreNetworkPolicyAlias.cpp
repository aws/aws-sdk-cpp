/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkPolicyAlias.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace CoreNetworkPolicyAliasMapper
      {

        static constexpr uint32_t LIVE_HASH = ConstExprHashingUtils::HashString("LIVE");
        static constexpr uint32_t LATEST_HASH = ConstExprHashingUtils::HashString("LATEST");


        CoreNetworkPolicyAlias GetCoreNetworkPolicyAliasForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return CoreNetworkPolicyAlias::LIVE;
          }
          else if (hashCode == LATEST_HASH)
          {
            return CoreNetworkPolicyAlias::LATEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoreNetworkPolicyAlias>(hashCode);
          }

          return CoreNetworkPolicyAlias::NOT_SET;
        }

        Aws::String GetNameForCoreNetworkPolicyAlias(CoreNetworkPolicyAlias enumValue)
        {
          switch(enumValue)
          {
          case CoreNetworkPolicyAlias::NOT_SET:
            return {};
          case CoreNetworkPolicyAlias::LIVE:
            return "LIVE";
          case CoreNetworkPolicyAlias::LATEST:
            return "LATEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoreNetworkPolicyAliasMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
