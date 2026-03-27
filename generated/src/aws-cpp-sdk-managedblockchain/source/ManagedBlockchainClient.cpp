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
#include <aws/managedblockchain/ManagedBlockchainClient.h>
#include <aws/managedblockchain/ManagedBlockchainEndpointProvider.h>
#include <aws/managedblockchain/ManagedBlockchainErrorMarshaller.h>
#include <aws/managedblockchain/model/CreateAccessorRequest.h>
#include <aws/managedblockchain/model/CreateMemberRequest.h>
#include <aws/managedblockchain/model/CreateNetworkRequest.h>
#include <aws/managedblockchain/model/CreateNodeRequest.h>
#include <aws/managedblockchain/model/CreateProposalRequest.h>
#include <aws/managedblockchain/model/DeleteAccessorRequest.h>
#include <aws/managedblockchain/model/DeleteMemberRequest.h>
#include <aws/managedblockchain/model/DeleteNodeRequest.h>
#include <aws/managedblockchain/model/GetAccessorRequest.h>
#include <aws/managedblockchain/model/GetMemberRequest.h>
#include <aws/managedblockchain/model/GetNetworkRequest.h>
#include <aws/managedblockchain/model/GetNodeRequest.h>
#include <aws/managedblockchain/model/GetProposalRequest.h>
#include <aws/managedblockchain/model/ListAccessorsRequest.h>
#include <aws/managedblockchain/model/ListInvitationsRequest.h>
#include <aws/managedblockchain/model/ListMembersRequest.h>
#include <aws/managedblockchain/model/ListNetworksRequest.h>
#include <aws/managedblockchain/model/ListNodesRequest.h>
#include <aws/managedblockchain/model/ListProposalVotesRequest.h>
#include <aws/managedblockchain/model/ListProposalsRequest.h>
#include <aws/managedblockchain/model/ListTagsForResourceRequest.h>
#include <aws/managedblockchain/model/RejectInvitationRequest.h>
#include <aws/managedblockchain/model/TagResourceRequest.h>
#include <aws/managedblockchain/model/UntagResourceRequest.h>
#include <aws/managedblockchain/model/UpdateMemberRequest.h>
#include <aws/managedblockchain/model/UpdateNodeRequest.h>
#include <aws/managedblockchain/model/VoteOnProposalRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ManagedBlockchain;
using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ManagedBlockchain {
const char SERVICE_NAME[] = "managedblockchain";
const char ALLOCATION_TAG[] = "ManagedBlockchainClient";
}  // namespace ManagedBlockchain
}  // namespace Aws
const char* ManagedBlockchainClient::GetServiceName() { return SERVICE_NAME; }
const char* ManagedBlockchainClient::GetAllocationTag() { return ALLOCATION_TAG; }

ManagedBlockchainClient::ManagedBlockchainClient(const ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedBlockchainClient::ManagedBlockchainClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider,
                                                 const ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedBlockchainClient::ManagedBlockchainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider,
                                                 const ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ManagedBlockchainClient::ManagedBlockchainClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedBlockchainClient::ManagedBlockchainClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ManagedBlockchainClient::ManagedBlockchainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ManagedBlockchainClient::~ManagedBlockchainClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ManagedBlockchainEndpointProviderBase>& ManagedBlockchainClient::accessEndpointProvider() { return m_endpointProvider; }

void ManagedBlockchainClient::init(const ManagedBlockchain::ManagedBlockchainClientConfiguration& config) {
  AWSClient::SetServiceClientName("ManagedBlockchain");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "managedblockchain");
}

void ManagedBlockchainClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ManagedBlockchainClient::InvokeOperationOutcome ManagedBlockchainClient::InvokeServiceOperation(
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

CreateAccessorOutcome ManagedBlockchainClient::CreateAccessor(const CreateAccessorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessorOutcome(result.GetResultWithOwnership()) : CreateAccessorOutcome(std::move(result.GetError()));
}

CreateMemberOutcome ManagedBlockchainClient::CreateMember(const CreateMemberRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMember", "Required field: NetworkId, is not set");
    return CreateMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMemberOutcome(result.GetResultWithOwnership()) : CreateMemberOutcome(std::move(result.GetError()));
}

CreateNetworkOutcome ManagedBlockchainClient::CreateNetwork(const CreateNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkOutcome(result.GetResultWithOwnership()) : CreateNetworkOutcome(std::move(result.GetError()));
}

CreateNodeOutcome ManagedBlockchainClient::CreateNode(const CreateNodeRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateNode", "Required field: NetworkId, is not set");
    return CreateNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNodeOutcome(result.GetResultWithOwnership()) : CreateNodeOutcome(std::move(result.GetError()));
}

CreateProposalOutcome ManagedBlockchainClient::CreateProposal(const CreateProposalRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProposal", "Required field: NetworkId, is not set");
    return CreateProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proposals");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProposalOutcome(result.GetResultWithOwnership()) : CreateProposalOutcome(std::move(result.GetError()));
}

DeleteAccessorOutcome ManagedBlockchainClient::DeleteAccessor(const DeleteAccessorRequest& request) const {
  if (!request.AccessorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessor", "Required field: AccessorId, is not set");
    return DeleteAccessorOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessorOutcome(result.GetResultWithOwnership()) : DeleteAccessorOutcome(std::move(result.GetError()));
}

DeleteMemberOutcome ManagedBlockchainClient::DeleteMember(const DeleteMemberRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: NetworkId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: MemberId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMemberOutcome(result.GetResultWithOwnership()) : DeleteMemberOutcome(std::move(result.GetError()));
}

DeleteNodeOutcome ManagedBlockchainClient::DeleteNode(const DeleteNodeRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: NetworkId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NetworkId]", false));
  }
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: NodeId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NodeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNodeOutcome(result.GetResultWithOwnership()) : DeleteNodeOutcome(std::move(result.GetError()));
}

GetAccessorOutcome ManagedBlockchainClient::GetAccessor(const GetAccessorRequest& request) const {
  if (!request.AccessorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessor", "Required field: AccessorId, is not set");
    return GetAccessorOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessorOutcome(result.GetResultWithOwnership()) : GetAccessorOutcome(std::move(result.GetError()));
}

GetMemberOutcome ManagedBlockchainClient::GetMember(const GetMemberRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: NetworkId, is not set");
    return GetMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: MemberId, is not set");
    return GetMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MemberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMemberOutcome(result.GetResultWithOwnership()) : GetMemberOutcome(std::move(result.GetError()));
}

GetNetworkOutcome ManagedBlockchainClient::GetNetwork(const GetNetworkRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetwork", "Required field: NetworkId, is not set");
    return GetNetworkOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNetworkOutcome(result.GetResultWithOwnership()) : GetNetworkOutcome(std::move(result.GetError()));
}

GetNodeOutcome ManagedBlockchainClient::GetNode(const GetNodeRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNode", "Required field: NetworkId, is not set");
    return GetNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NetworkId]", false));
  }
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNode", "Required field: NodeId, is not set");
    return GetNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NodeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNodeOutcome(result.GetResultWithOwnership()) : GetNodeOutcome(std::move(result.GetError()));
}

GetProposalOutcome ManagedBlockchainClient::GetProposal(const GetProposalRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProposal", "Required field: NetworkId, is not set");
    return GetProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProposal", "Required field: ProposalId, is not set");
    return GetProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proposals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProposalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProposalOutcome(result.GetResultWithOwnership()) : GetProposalOutcome(std::move(result.GetError()));
}

ListAccessorsOutcome ManagedBlockchainClient::ListAccessors(const ListAccessorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accessors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessorsOutcome(result.GetResultWithOwnership()) : ListAccessorsOutcome(std::move(result.GetError()));
}

ListInvitationsOutcome ManagedBlockchainClient::ListInvitations(const ListInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInvitationsOutcome(result.GetResultWithOwnership())
                            : ListInvitationsOutcome(std::move(result.GetError()));
}

ListMembersOutcome ManagedBlockchainClient::ListMembers(const ListMembersRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: NetworkId, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMembersOutcome(result.GetResultWithOwnership()) : ListMembersOutcome(std::move(result.GetError()));
}

ListNetworksOutcome ManagedBlockchainClient::ListNetworks(const ListNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNetworksOutcome(result.GetResultWithOwnership()) : ListNetworksOutcome(std::move(result.GetError()));
}

ListNodesOutcome ManagedBlockchainClient::ListNodes(const ListNodesRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNodes", "Required field: NetworkId, is not set");
    return ListNodesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNodesOutcome(result.GetResultWithOwnership()) : ListNodesOutcome(std::move(result.GetError()));
}

ListProposalVotesOutcome ManagedBlockchainClient::ListProposalVotes(const ListProposalVotesRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProposalVotes", "Required field: NetworkId, is not set");
    return ListProposalVotesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProposalVotes", "Required field: ProposalId, is not set");
    return ListProposalVotesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proposals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProposalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/votes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProposalVotesOutcome(result.GetResultWithOwnership())
                            : ListProposalVotesOutcome(std::move(result.GetError()));
}

ListProposalsOutcome ManagedBlockchainClient::ListProposals(const ListProposalsRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProposals", "Required field: NetworkId, is not set");
    return ListProposalsOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proposals");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProposalsOutcome(result.GetResultWithOwnership()) : ListProposalsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ManagedBlockchainClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RejectInvitationOutcome ManagedBlockchainClient::RejectInvitation(const RejectInvitationRequest& request) const {
  if (!request.InvitationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectInvitation", "Required field: InvitationId, is not set");
    return RejectInvitationOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InvitationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInvitationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RejectInvitationOutcome(result.GetResultWithOwnership())
                            : RejectInvitationOutcome(std::move(result.GetError()));
}

TagResourceOutcome ManagedBlockchainClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ManagedBlockchainClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateMemberOutcome ManagedBlockchainClient::UpdateMember(const UpdateMemberRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMember", "Required field: NetworkId, is not set");
    return UpdateMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMember", "Required field: MemberId, is not set");
    return UpdateMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMemberOutcome(result.GetResultWithOwnership()) : UpdateMemberOutcome(std::move(result.GetError()));
}

UpdateNodeOutcome ManagedBlockchainClient::UpdateNode(const UpdateNodeRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNode", "Required field: NetworkId, is not set");
    return UpdateNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NetworkId]", false));
  }
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNode", "Required field: NodeId, is not set");
    return UpdateNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NodeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateNodeOutcome(result.GetResultWithOwnership()) : UpdateNodeOutcome(std::move(result.GetError()));
}

VoteOnProposalOutcome ManagedBlockchainClient::VoteOnProposal(const VoteOnProposalRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("VoteOnProposal", "Required field: NetworkId, is not set");
    return VoteOnProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("VoteOnProposal", "Required field: ProposalId, is not set");
    return VoteOnProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(
        ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/proposals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProposalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/votes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? VoteOnProposalOutcome(result.GetResultWithOwnership()) : VoteOnProposalOutcome(std::move(result.GetError()));
}
