/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryServiceClientModel.h>

namespace Aws
{
namespace ManagedBlockchainQuery
{
  /**
   * <p>Amazon Managed Blockchain (AMB) Query provides you with convenient access to
   * multi-blockchain network data, which makes it easier for you to extract
   * contextual data related to blockchain activity. You can use AMB Query to read
   * data from public blockchain networks, such as Bitcoin Mainnet and Ethereum
   * Mainnet. You can also get information such as the current and historical
   * balances of addresses, or you can get a list of blockchain transactions for a
   * given time period. Additionally, you can get details of a given transaction,
   * such as transaction events, which you can further analyze or use in business
   * logic for your applications.</p>
   */
  class AWS_MANAGEDBLOCKCHAINQUERY_API ManagedBlockchainQueryClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ManagedBlockchainQueryClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ManagedBlockchainQueryClientConfiguration ClientConfigurationType;
      typedef ManagedBlockchainQueryEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainQueryClient(const Aws::ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration& clientConfiguration = Aws::ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration(),
                                     std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainQueryClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration& clientConfiguration = Aws::ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ManagedBlockchainQueryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration& clientConfiguration = Aws::ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainQueryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedBlockchainQueryClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ManagedBlockchainQueryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ManagedBlockchainQueryClient();

        /**
         * <p>Gets the token balance for a batch of tokens by using the
         * <code>BatchGetTokenBalance</code> action for every token in the request.</p>
         *  <p>Only the native tokens BTC and ETH, and the ERC-20, ERC-721, and ERC
         * 1155 token standards are supported.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/BatchGetTokenBalance">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetTokenBalanceOutcome BatchGetTokenBalance(const Model::BatchGetTokenBalanceRequest& request) const;

        /**
         * A Callable wrapper for BatchGetTokenBalance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetTokenBalanceRequestT = Model::BatchGetTokenBalanceRequest>
        Model::BatchGetTokenBalanceOutcomeCallable BatchGetTokenBalanceCallable(const BatchGetTokenBalanceRequestT& request) const
        {
            return SubmitCallable(&ManagedBlockchainQueryClient::BatchGetTokenBalance, request);
        }

        /**
         * An Async wrapper for BatchGetTokenBalance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetTokenBalanceRequestT = Model::BatchGetTokenBalanceRequest>
        void BatchGetTokenBalanceAsync(const BatchGetTokenBalanceRequestT& request, const BatchGetTokenBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ManagedBlockchainQueryClient::BatchGetTokenBalance, request, handler, context);
        }

        /**
         * <p>Gets the information about a specific contract deployed on the
         * blockchain.</p>  <ul> <li> <p>The Bitcoin blockchain networks do not
         * support this operation.</p> </li> <li> <p>Metadata is currently only available
         * for some <code>ERC-20</code> contracts. Metadata will be available for
         * additional contracts in the future.</p> </li> </ul> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/GetAssetContract">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetContractOutcome GetAssetContract(const Model::GetAssetContractRequest& request) const;

        /**
         * A Callable wrapper for GetAssetContract that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssetContractRequestT = Model::GetAssetContractRequest>
        Model::GetAssetContractOutcomeCallable GetAssetContractCallable(const GetAssetContractRequestT& request) const
        {
            return SubmitCallable(&ManagedBlockchainQueryClient::GetAssetContract, request);
        }

        /**
         * An Async wrapper for GetAssetContract that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssetContractRequestT = Model::GetAssetContractRequest>
        void GetAssetContractAsync(const GetAssetContractRequestT& request, const GetAssetContractResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ManagedBlockchainQueryClient::GetAssetContract, request, handler, context);
        }

        /**
         * <p>Gets the balance of a specific token, including native tokens, for a given
         * address (wallet or contract) on the blockchain.</p>  <p>Only the native
         * tokens BTC and ETH, and the ERC-20, ERC-721, and ERC 1155 token standards are
         * supported.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/GetTokenBalance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTokenBalanceOutcome GetTokenBalance(const Model::GetTokenBalanceRequest& request) const;

        /**
         * A Callable wrapper for GetTokenBalance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTokenBalanceRequestT = Model::GetTokenBalanceRequest>
        Model::GetTokenBalanceOutcomeCallable GetTokenBalanceCallable(const GetTokenBalanceRequestT& request) const
        {
            return SubmitCallable(&ManagedBlockchainQueryClient::GetTokenBalance, request);
        }

        /**
         * An Async wrapper for GetTokenBalance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTokenBalanceRequestT = Model::GetTokenBalanceRequest>
        void GetTokenBalanceAsync(const GetTokenBalanceRequestT& request, const GetTokenBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ManagedBlockchainQueryClient::GetTokenBalance, request, handler, context);
        }

        /**
         * <p>Gets the details of a transaction.</p>  <p>This action will return
         * transaction details for all transactions that are <i>confirmed</i> on the
         * blockchain, even if they have not reached <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">finality</a>.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/GetTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransactionOutcome GetTransaction(const Model::GetTransactionRequest& request) const;

        /**
         * A Callable wrapper for GetTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTransactionRequestT = Model::GetTransactionRequest>
        Model::GetTransactionOutcomeCallable GetTransactionCallable(const GetTransactionRequestT& request) const
        {
            return SubmitCallable(&ManagedBlockchainQueryClient::GetTransaction, request);
        }

        /**
         * An Async wrapper for GetTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTransactionRequestT = Model::GetTransactionRequest>
        void GetTransactionAsync(const GetTransactionRequestT& request, const GetTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ManagedBlockchainQueryClient::GetTransaction, request, handler, context);
        }

        /**
         * <p>Lists all the contracts for a given contract type deployed by an address
         * (either a contract address or a wallet address).</p> <p>The Bitcoin blockchain
         * networks do not support this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ListAssetContracts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetContractsOutcome ListAssetContracts(const Model::ListAssetContractsRequest& request) const;

        /**
         * A Callable wrapper for ListAssetContracts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssetContractsRequestT = Model::ListAssetContractsRequest>
        Model::ListAssetContractsOutcomeCallable ListAssetContractsCallable(const ListAssetContractsRequestT& request) const
        {
            return SubmitCallable(&ManagedBlockchainQueryClient::ListAssetContracts, request);
        }

        /**
         * An Async wrapper for ListAssetContracts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssetContractsRequestT = Model::ListAssetContractsRequest>
        void ListAssetContractsAsync(const ListAssetContractsRequestT& request, const ListAssetContractsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ManagedBlockchainQueryClient::ListAssetContracts, request, handler, context);
        }

        /**
         * <p>This action returns the following for a given blockchain network:</p> <ul>
         * <li> <p>Lists all token balances owned by an address (either a contract address
         * or a wallet address).</p> </li> <li> <p>Lists all token balances for all tokens
         * created by a contract.</p> </li> <li> <p>Lists all token balances for a given
         * token.</p> </li> </ul>  <p>You must always specify the network property of
         * the <code>tokenFilter</code> when using this operation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ListTokenBalances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTokenBalancesOutcome ListTokenBalances(const Model::ListTokenBalancesRequest& request) const;

        /**
         * A Callable wrapper for ListTokenBalances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTokenBalancesRequestT = Model::ListTokenBalancesRequest>
        Model::ListTokenBalancesOutcomeCallable ListTokenBalancesCallable(const ListTokenBalancesRequestT& request) const
        {
            return SubmitCallable(&ManagedBlockchainQueryClient::ListTokenBalances, request);
        }

        /**
         * An Async wrapper for ListTokenBalances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTokenBalancesRequestT = Model::ListTokenBalancesRequest>
        void ListTokenBalancesAsync(const ListTokenBalancesRequestT& request, const ListTokenBalancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ManagedBlockchainQueryClient::ListTokenBalances, request, handler, context);
        }

        /**
         * <p>An array of <code>TransactionEvent</code> objects. Each object contains
         * details about the transaction event.</p>  <p>This action will return
         * transaction details for all transactions that are <i>confirmed</i> on the
         * blockchain, even if they have not reached <a
         * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">finality</a>.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ListTransactionEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTransactionEventsOutcome ListTransactionEvents(const Model::ListTransactionEventsRequest& request) const;

        /**
         * A Callable wrapper for ListTransactionEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTransactionEventsRequestT = Model::ListTransactionEventsRequest>
        Model::ListTransactionEventsOutcomeCallable ListTransactionEventsCallable(const ListTransactionEventsRequestT& request) const
        {
            return SubmitCallable(&ManagedBlockchainQueryClient::ListTransactionEvents, request);
        }

        /**
         * An Async wrapper for ListTransactionEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTransactionEventsRequestT = Model::ListTransactionEventsRequest>
        void ListTransactionEventsAsync(const ListTransactionEventsRequestT& request, const ListTransactionEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ManagedBlockchainQueryClient::ListTransactionEvents, request, handler, context);
        }

        /**
         * <p>Lists all of the transactions on a given wallet address or to a specific
         * contract.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/ListTransactions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTransactionsOutcome ListTransactions(const Model::ListTransactionsRequest& request) const;

        /**
         * A Callable wrapper for ListTransactions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTransactionsRequestT = Model::ListTransactionsRequest>
        Model::ListTransactionsOutcomeCallable ListTransactionsCallable(const ListTransactionsRequestT& request) const
        {
            return SubmitCallable(&ManagedBlockchainQueryClient::ListTransactions, request);
        }

        /**
         * An Async wrapper for ListTransactions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTransactionsRequestT = Model::ListTransactionsRequest>
        void ListTransactionsAsync(const ListTransactionsRequestT& request, const ListTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ManagedBlockchainQueryClient::ListTransactions, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ManagedBlockchainQueryClient>;
      void init(const ManagedBlockchainQueryClientConfiguration& clientConfiguration);

      ManagedBlockchainQueryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase> m_endpointProvider;
  };

} // namespace ManagedBlockchainQuery
} // namespace Aws
