/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchainQuery
  {
    namespace Model
    {
      namespace QueryNetworkMapper
      {

        static constexpr uint32_t ETHEREUM_MAINNET_HASH = ConstExprHashingUtils::HashString("ETHEREUM_MAINNET");
        static constexpr uint32_t BITCOIN_MAINNET_HASH = ConstExprHashingUtils::HashString("BITCOIN_MAINNET");


        QueryNetwork GetQueryNetworkForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ETHEREUM_MAINNET_HASH)
          {
            return QueryNetwork::ETHEREUM_MAINNET;
          }
          else if (hashCode == BITCOIN_MAINNET_HASH)
          {
            return QueryNetwork::BITCOIN_MAINNET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryNetwork>(hashCode);
          }

          return QueryNetwork::NOT_SET;
        }

        Aws::String GetNameForQueryNetwork(QueryNetwork enumValue)
        {
          switch(enumValue)
          {
          case QueryNetwork::NOT_SET:
            return {};
          case QueryNetwork::ETHEREUM_MAINNET:
            return "ETHEREUM_MAINNET";
          case QueryNetwork::BITCOIN_MAINNET:
            return "BITCOIN_MAINNET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryNetworkMapper
    } // namespace Model
  } // namespace ManagedBlockchainQuery
} // namespace Aws
