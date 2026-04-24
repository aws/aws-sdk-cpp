/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/managedblockchain-query/ManagedBlockchainQueryClient.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryEndpointProvider.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryEndpointRules.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryErrorMarshaller.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryErrors.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryServiceClientModel.h>
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/AddressIdentifierFilter.h>
#include <aws/managedblockchain-query/model/AssetContract.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceErrorItem.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceInputItem.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceOutputItem.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceRequest.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceResult.h>
#include <aws/managedblockchain-query/model/BlockchainInstant.h>
#include <aws/managedblockchain-query/model/ConfirmationStatus.h>
#include <aws/managedblockchain-query/model/ConfirmationStatusFilter.h>
#include <aws/managedblockchain-query/model/ContractFilter.h>
#include <aws/managedblockchain-query/model/ContractIdentifier.h>
#include <aws/managedblockchain-query/model/ContractMetadata.h>
#include <aws/managedblockchain-query/model/ErrorType.h>
#include <aws/managedblockchain-query/model/ExecutionStatus.h>
#include <aws/managedblockchain-query/model/GetAssetContractRequest.h>
#include <aws/managedblockchain-query/model/GetAssetContractResult.h>
#include <aws/managedblockchain-query/model/GetTokenBalanceRequest.h>
#include <aws/managedblockchain-query/model/GetTokenBalanceResult.h>
#include <aws/managedblockchain-query/model/GetTransactionRequest.h>
#include <aws/managedblockchain-query/model/GetTransactionResult.h>
#include <aws/managedblockchain-query/model/InternalServerException.h>
#include <aws/managedblockchain-query/model/ListAssetContractsRequest.h>
#include <aws/managedblockchain-query/model/ListAssetContractsResult.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsRequest.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsResult.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsSort.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsSortBy.h>
#include <aws/managedblockchain-query/model/ListTokenBalancesRequest.h>
#include <aws/managedblockchain-query/model/ListTokenBalancesResult.h>
#include <aws/managedblockchain-query/model/ListTransactionEventsRequest.h>
#include <aws/managedblockchain-query/model/ListTransactionEventsResult.h>
#include <aws/managedblockchain-query/model/ListTransactionsRequest.h>
#include <aws/managedblockchain-query/model/ListTransactionsResult.h>
#include <aws/managedblockchain-query/model/ListTransactionsSort.h>
#include <aws/managedblockchain-query/model/ListTransactionsSortBy.h>
#include <aws/managedblockchain-query/model/OwnerFilter.h>
#include <aws/managedblockchain-query/model/OwnerIdentifier.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <aws/managedblockchain-query/model/QueryTokenStandard.h>
#include <aws/managedblockchain-query/model/QueryTransactionEventType.h>
#include <aws/managedblockchain-query/model/ResourceNotFoundException.h>
#include <aws/managedblockchain-query/model/ResourceType.h>
#include <aws/managedblockchain-query/model/ServiceQuotaExceededException.h>
#include <aws/managedblockchain-query/model/SortOrder.h>
#include <aws/managedblockchain-query/model/ThrottlingException.h>
#include <aws/managedblockchain-query/model/TimeFilter.h>
#include <aws/managedblockchain-query/model/TokenBalance.h>
#include <aws/managedblockchain-query/model/TokenFilter.h>
#include <aws/managedblockchain-query/model/TokenIdentifier.h>
#include <aws/managedblockchain-query/model/Transaction.h>
#include <aws/managedblockchain-query/model/TransactionEvent.h>
#include <aws/managedblockchain-query/model/TransactionOutputItem.h>
#include <aws/managedblockchain-query/model/ValidationException.h>
#include <aws/managedblockchain-query/model/ValidationExceptionField.h>
#include <aws/managedblockchain-query/model/ValidationExceptionReason.h>
#include <aws/managedblockchain-query/model/VoutFilter.h>

using ManagedBlockchainQueryIncludeTest = ::testing::Test;

TEST_F(ManagedBlockchainQueryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ManagedBlockchainQuery::ManagedBlockchainQueryClient>("ManagedBlockchainQueryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
