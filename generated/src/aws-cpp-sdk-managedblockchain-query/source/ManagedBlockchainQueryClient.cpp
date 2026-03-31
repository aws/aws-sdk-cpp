/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryClient.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryEndpointProvider.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryErrorMarshaller.h>
#include <aws/managedblockchain-query/model/BatchGetTokenBalanceRequest.h>
#include <aws/managedblockchain-query/model/GetAssetContractRequest.h>
#include <aws/managedblockchain-query/model/GetTokenBalanceRequest.h>
#include <aws/managedblockchain-query/model/GetTransactionRequest.h>
#include <aws/managedblockchain-query/model/ListAssetContractsRequest.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsRequest.h>
#include <aws/managedblockchain-query/model/ListTokenBalancesRequest.h>
#include <aws/managedblockchain-query/model/ListTransactionEventsRequest.h>
#include <aws/managedblockchain-query/model/ListTransactionsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ManagedBlockchainQuery;
using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ManagedBlockchainQuery {
const char SERVICE_NAME[] = "managedblockchain-query";
const char ALLOCATION_TAG[] = "ManagedBlockchainQueryClient";
}  // namespace ManagedBlockchainQuery
}  // namespace Aws
const char* ManagedBlockchainQueryClient::GetServiceName() { return SERVICE_NAME; }
const char* ManagedBlockchainQueryClient::GetAllocationTag() { return ALLOCATION_TAG; }

ManagedBlockchainQueryClient::ManagedBlockchainQueryClient(
    const ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration& clientConfiguration,
    std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ManagedBlockchainQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedBlockchainQueryClient::ManagedBlockchainQueryClient(
    const AWSCredentials& credentials, std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase> endpointProvider,
    const ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ManagedBlockchainQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedBlockchainQueryClient::ManagedBlockchainQueryClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase> endpointProvider,
    const ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ManagedBlockchainQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ManagedBlockchainQueryClient::ManagedBlockchainQueryClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedBlockchainQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedBlockchainQueryClient::ManagedBlockchainQueryClient(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedBlockchainQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedBlockchainQueryClient::ManagedBlockchainQueryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedBlockchainQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ManagedBlockchainQueryClient::~ManagedBlockchainQueryClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ManagedBlockchainQueryEndpointProviderBase>& ManagedBlockchainQueryClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void ManagedBlockchainQueryClient::init(const ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration& config) {
  AWSClient::SetServiceClientName("ManagedBlockchain Query");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "managedblockchain-query");
}

void ManagedBlockchainQueryClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ManagedBlockchainQueryClient::InvokeOperationOutcome ManagedBlockchainQueryClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchGetTokenBalanceOutcome ManagedBlockchainQueryClient::BatchGetTokenBalance(const BatchGetTokenBalanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-get-token-balance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetTokenBalanceOutcome(result.GetResultWithOwnership())
                            : BatchGetTokenBalanceOutcome(std::move(result.GetError()));
}

GetAssetContractOutcome ManagedBlockchainQueryClient::GetAssetContract(const GetAssetContractRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-asset-contract");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAssetContractOutcome(result.GetResultWithOwnership())
                            : GetAssetContractOutcome(std::move(result.GetError()));
}

GetTokenBalanceOutcome ManagedBlockchainQueryClient::GetTokenBalance(const GetTokenBalanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-token-balance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTokenBalanceOutcome(result.GetResultWithOwnership())
                            : GetTokenBalanceOutcome(std::move(result.GetError()));
}

GetTransactionOutcome ManagedBlockchainQueryClient::GetTransaction(const GetTransactionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-transaction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransactionOutcome(result.GetResultWithOwnership()) : GetTransactionOutcome(std::move(result.GetError()));
}

ListAssetContractsOutcome ManagedBlockchainQueryClient::ListAssetContracts(const ListAssetContractsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-asset-contracts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssetContractsOutcome(result.GetResultWithOwnership())
                            : ListAssetContractsOutcome(std::move(result.GetError()));
}

ListFilteredTransactionEventsOutcome ManagedBlockchainQueryClient::ListFilteredTransactionEvents(
    const ListFilteredTransactionEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-filtered-transaction-events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFilteredTransactionEventsOutcome(result.GetResultWithOwnership())
                            : ListFilteredTransactionEventsOutcome(std::move(result.GetError()));
}

ListTokenBalancesOutcome ManagedBlockchainQueryClient::ListTokenBalances(const ListTokenBalancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-token-balances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTokenBalancesOutcome(result.GetResultWithOwnership())
                            : ListTokenBalancesOutcome(std::move(result.GetError()));
}

ListTransactionEventsOutcome ManagedBlockchainQueryClient::ListTransactionEvents(const ListTransactionEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-transaction-events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTransactionEventsOutcome(result.GetResultWithOwnership())
                            : ListTransactionEventsOutcome(std::move(result.GetError()));
}

ListTransactionsOutcome ManagedBlockchainQueryClient::ListTransactions(const ListTransactionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-transactions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTransactionsOutcome(result.GetResultWithOwnership())
                            : ListTransactionsOutcome(std::move(result.GetError()));
}
