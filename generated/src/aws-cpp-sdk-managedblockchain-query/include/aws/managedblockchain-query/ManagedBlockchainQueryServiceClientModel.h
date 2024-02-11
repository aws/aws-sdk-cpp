/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/managedblockchain-query/ManagedBlockchainQueryErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ManagedBlockchainQueryClient header */
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceResult.h>
#include <aws/managedblockchain-query/model/GetAssetContractResult.h>
#include <aws/managedblockchain-query/model/GetTokenBalanceResult.h>
#include <aws/managedblockchain-query/model/GetTransactionResult.h>
#include <aws/managedblockchain-query/model/ListAssetContractsResult.h>
#include <aws/managedblockchain-query/model/ListTokenBalancesResult.h>
#include <aws/managedblockchain-query/model/ListTransactionEventsResult.h>
#include <aws/managedblockchain-query/model/ListTransactionsResult.h>
/* End of service model headers required in ManagedBlockchainQueryClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace ManagedBlockchainQuery
  {
    using ManagedBlockchainQueryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ManagedBlockchainQueryEndpointProviderBase = Aws::ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryEndpointProviderBase;
    using ManagedBlockchainQueryEndpointProvider = Aws::ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ManagedBlockchainQueryClient header */
      class BatchGetTokenBalanceRequest;
      class GetAssetContractRequest;
      class GetTokenBalanceRequest;
      class GetTransactionRequest;
      class ListAssetContractsRequest;
      class ListTokenBalancesRequest;
      class ListTransactionEventsRequest;
      class ListTransactionsRequest;
      /* End of service model forward declarations required in ManagedBlockchainQueryClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetTokenBalanceResult, ManagedBlockchainQueryError> BatchGetTokenBalanceOutcome;
      typedef Aws::Utils::Outcome<GetAssetContractResult, ManagedBlockchainQueryError> GetAssetContractOutcome;
      typedef Aws::Utils::Outcome<GetTokenBalanceResult, ManagedBlockchainQueryError> GetTokenBalanceOutcome;
      typedef Aws::Utils::Outcome<GetTransactionResult, ManagedBlockchainQueryError> GetTransactionOutcome;
      typedef Aws::Utils::Outcome<ListAssetContractsResult, ManagedBlockchainQueryError> ListAssetContractsOutcome;
      typedef Aws::Utils::Outcome<ListTokenBalancesResult, ManagedBlockchainQueryError> ListTokenBalancesOutcome;
      typedef Aws::Utils::Outcome<ListTransactionEventsResult, ManagedBlockchainQueryError> ListTransactionEventsOutcome;
      typedef Aws::Utils::Outcome<ListTransactionsResult, ManagedBlockchainQueryError> ListTransactionsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetTokenBalanceOutcome> BatchGetTokenBalanceOutcomeCallable;
      typedef std::future<GetAssetContractOutcome> GetAssetContractOutcomeCallable;
      typedef std::future<GetTokenBalanceOutcome> GetTokenBalanceOutcomeCallable;
      typedef std::future<GetTransactionOutcome> GetTransactionOutcomeCallable;
      typedef std::future<ListAssetContractsOutcome> ListAssetContractsOutcomeCallable;
      typedef std::future<ListTokenBalancesOutcome> ListTokenBalancesOutcomeCallable;
      typedef std::future<ListTransactionEventsOutcome> ListTransactionEventsOutcomeCallable;
      typedef std::future<ListTransactionsOutcome> ListTransactionsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ManagedBlockchainQueryClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ManagedBlockchainQueryClient*, const Model::BatchGetTokenBalanceRequest&, const Model::BatchGetTokenBalanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetTokenBalanceResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainQueryClient*, const Model::GetAssetContractRequest&, const Model::GetAssetContractOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetContractResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainQueryClient*, const Model::GetTokenBalanceRequest&, const Model::GetTokenBalanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTokenBalanceResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainQueryClient*, const Model::GetTransactionRequest&, const Model::GetTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransactionResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainQueryClient*, const Model::ListAssetContractsRequest&, const Model::ListAssetContractsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetContractsResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainQueryClient*, const Model::ListTokenBalancesRequest&, const Model::ListTokenBalancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTokenBalancesResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainQueryClient*, const Model::ListTransactionEventsRequest&, const Model::ListTransactionEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTransactionEventsResponseReceivedHandler;
    typedef std::function<void(const ManagedBlockchainQueryClient*, const Model::ListTransactionsRequest&, const Model::ListTransactionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTransactionsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ManagedBlockchainQuery
} // namespace Aws
