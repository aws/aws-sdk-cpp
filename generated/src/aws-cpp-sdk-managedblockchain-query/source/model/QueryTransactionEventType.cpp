/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/QueryTransactionEventType.h>
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
      namespace QueryTransactionEventTypeMapper
      {

        static const int ERC20_TRANSFER_HASH = HashingUtils::HashString("ERC20_TRANSFER");
        static const int ERC20_MINT_HASH = HashingUtils::HashString("ERC20_MINT");
        static const int ERC20_BURN_HASH = HashingUtils::HashString("ERC20_BURN");
        static const int ERC20_DEPOSIT_HASH = HashingUtils::HashString("ERC20_DEPOSIT");
        static const int ERC20_WITHDRAWAL_HASH = HashingUtils::HashString("ERC20_WITHDRAWAL");
        static const int ERC721_TRANSFER_HASH = HashingUtils::HashString("ERC721_TRANSFER");
        static const int ERC1155_TRANSFER_HASH = HashingUtils::HashString("ERC1155_TRANSFER");
        static const int BITCOIN_VIN_HASH = HashingUtils::HashString("BITCOIN_VIN");
        static const int BITCOIN_VOUT_HASH = HashingUtils::HashString("BITCOIN_VOUT");
        static const int INTERNAL_ETH_TRANSFER_HASH = HashingUtils::HashString("INTERNAL_ETH_TRANSFER");
        static const int ETH_TRANSFER_HASH = HashingUtils::HashString("ETH_TRANSFER");


        QueryTransactionEventType GetQueryTransactionEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERC20_TRANSFER_HASH)
          {
            return QueryTransactionEventType::ERC20_TRANSFER;
          }
          else if (hashCode == ERC20_MINT_HASH)
          {
            return QueryTransactionEventType::ERC20_MINT;
          }
          else if (hashCode == ERC20_BURN_HASH)
          {
            return QueryTransactionEventType::ERC20_BURN;
          }
          else if (hashCode == ERC20_DEPOSIT_HASH)
          {
            return QueryTransactionEventType::ERC20_DEPOSIT;
          }
          else if (hashCode == ERC20_WITHDRAWAL_HASH)
          {
            return QueryTransactionEventType::ERC20_WITHDRAWAL;
          }
          else if (hashCode == ERC721_TRANSFER_HASH)
          {
            return QueryTransactionEventType::ERC721_TRANSFER;
          }
          else if (hashCode == ERC1155_TRANSFER_HASH)
          {
            return QueryTransactionEventType::ERC1155_TRANSFER;
          }
          else if (hashCode == BITCOIN_VIN_HASH)
          {
            return QueryTransactionEventType::BITCOIN_VIN;
          }
          else if (hashCode == BITCOIN_VOUT_HASH)
          {
            return QueryTransactionEventType::BITCOIN_VOUT;
          }
          else if (hashCode == INTERNAL_ETH_TRANSFER_HASH)
          {
            return QueryTransactionEventType::INTERNAL_ETH_TRANSFER;
          }
          else if (hashCode == ETH_TRANSFER_HASH)
          {
            return QueryTransactionEventType::ETH_TRANSFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryTransactionEventType>(hashCode);
          }

          return QueryTransactionEventType::NOT_SET;
        }

        Aws::String GetNameForQueryTransactionEventType(QueryTransactionEventType enumValue)
        {
          switch(enumValue)
          {
          case QueryTransactionEventType::NOT_SET:
            return {};
          case QueryTransactionEventType::ERC20_TRANSFER:
            return "ERC20_TRANSFER";
          case QueryTransactionEventType::ERC20_MINT:
            return "ERC20_MINT";
          case QueryTransactionEventType::ERC20_BURN:
            return "ERC20_BURN";
          case QueryTransactionEventType::ERC20_DEPOSIT:
            return "ERC20_DEPOSIT";
          case QueryTransactionEventType::ERC20_WITHDRAWAL:
            return "ERC20_WITHDRAWAL";
          case QueryTransactionEventType::ERC721_TRANSFER:
            return "ERC721_TRANSFER";
          case QueryTransactionEventType::ERC1155_TRANSFER:
            return "ERC1155_TRANSFER";
          case QueryTransactionEventType::BITCOIN_VIN:
            return "BITCOIN_VIN";
          case QueryTransactionEventType::BITCOIN_VOUT:
            return "BITCOIN_VOUT";
          case QueryTransactionEventType::INTERNAL_ETH_TRANSFER:
            return "INTERNAL_ETH_TRANSFER";
          case QueryTransactionEventType::ETH_TRANSFER:
            return "ETH_TRANSFER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryTransactionEventTypeMapper
    } // namespace Model
  } // namespace ManagedBlockchainQuery
} // namespace Aws
