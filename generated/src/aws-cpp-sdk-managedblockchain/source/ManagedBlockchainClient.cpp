/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/managedblockchain/ManagedBlockchainClient.h>
#include <aws/managedblockchain/ManagedBlockchainErrorMarshaller.h>
#include <aws/managedblockchain/ManagedBlockchainEndpointProvider.h>
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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ManagedBlockchain;
using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace ManagedBlockchain
  {
    const char ALLOCATION_TAG[] = "ManagedBlockchainClient";
    const char SERVICE_NAME[] = "managedblockchain";
  }
}
const char* ManagedBlockchainClient::GetServiceName() {return SERVICE_NAME;}
const char* ManagedBlockchainClient::GetAllocationTag() {return ALLOCATION_TAG;}

ManagedBlockchainClient::ManagedBlockchainClient(const ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration,
                           std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ManagedBlockchain",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

ManagedBlockchainClient::ManagedBlockchainClient(const AWSCredentials& credentials,
                           std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider,
                           const ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ManagedBlockchain",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

ManagedBlockchainClient::ManagedBlockchainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ManagedBlockchainEndpointProviderBase> endpointProvider,
                           const ManagedBlockchain::ManagedBlockchainClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ManagedBlockchain",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
ManagedBlockchainClient::ManagedBlockchainClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "ManagedBlockchain",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

ManagedBlockchainClient::ManagedBlockchainClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ManagedBlockchain",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

ManagedBlockchainClient::ManagedBlockchainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ManagedBlockchain",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<ManagedBlockchainEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

ManagedBlockchainClient::~ManagedBlockchainClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ManagedBlockchainEndpointProviderBase>& ManagedBlockchainClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ManagedBlockchainClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CreateAccessorOutcome ManagedBlockchainClient::CreateAccessor(const CreateAccessorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAccessor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAccessor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAccessor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAccessor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAccessorOutcome>(
    [&]()-> CreateAccessorOutcome {
      return CreateAccessorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/accessors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMemberOutcome ManagedBlockchainClient::CreateMember(const CreateMemberRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMember);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMember", "Required field: NetworkId, is not set");
    return CreateMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMember",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMemberOutcome>(
    [&]()-> CreateMemberOutcome {
      return CreateMemberOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/members");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkOutcome ManagedBlockchainClient::CreateNetwork(const CreateNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNetwork",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNetworkOutcome>(
    [&]()-> CreateNetworkOutcome {
      return CreateNetworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNodeOutcome ManagedBlockchainClient::CreateNode(const CreateNodeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNode", "Required field: NetworkId, is not set");
    return CreateNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNodeOutcome>(
    [&]()-> CreateNodeOutcome {
      return CreateNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/nodes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateProposalOutcome ManagedBlockchainClient::CreateProposal(const CreateProposalRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProposal);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProposal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProposal", "Required field: NetworkId, is not set");
    return CreateProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateProposal, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProposal, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProposal",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProposalOutcome>(
    [&]()-> CreateProposalOutcome {
      return CreateProposalOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/proposals");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAccessorOutcome ManagedBlockchainClient::DeleteAccessor(const DeleteAccessorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAccessor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessor", "Required field: AccessorId, is not set");
    return DeleteAccessorOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAccessor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAccessor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAccessor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAccessorOutcome>(
    [&]()-> DeleteAccessorOutcome {
      return DeleteAccessorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/accessors/");
      resolvedEndpoint.AddPathSegment(request.GetAccessorId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMemberOutcome ManagedBlockchainClient::DeleteMember(const DeleteMemberRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMember);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: NetworkId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: MemberId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMember",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMemberOutcome>(
    [&]()-> DeleteMemberOutcome {
      return DeleteMemberOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetMemberId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNodeOutcome ManagedBlockchainClient::DeleteNode(const DeleteNodeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: NetworkId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: NodeId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteNodeOutcome>(
    [&]()-> DeleteNodeOutcome {
      return DeleteNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetNodeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAccessorOutcome ManagedBlockchainClient::GetAccessor(const GetAccessorRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccessor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessor", "Required field: AccessorId, is not set");
    return GetAccessorOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAccessor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAccessor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAccessor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAccessorOutcome>(
    [&]()-> GetAccessorOutcome {
      return GetAccessorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/accessors/");
      resolvedEndpoint.AddPathSegment(request.GetAccessorId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMemberOutcome ManagedBlockchainClient::GetMember(const GetMemberRequest& request) const
{
  AWS_OPERATION_GUARD(GetMember);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: NetworkId, is not set");
    return GetMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: MemberId, is not set");
    return GetMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMember",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMemberOutcome>(
    [&]()-> GetMemberOutcome {
      return GetMemberOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetMemberId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetNetworkOutcome ManagedBlockchainClient::GetNetwork(const GetNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(GetNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetwork", "Required field: NetworkId, is not set");
    return GetNetworkOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetNetwork",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetNetworkOutcome>(
    [&]()-> GetNetworkOutcome {
      return GetNetworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetNodeOutcome ManagedBlockchainClient::GetNode(const GetNodeRequest& request) const
{
  AWS_OPERATION_GUARD(GetNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNode", "Required field: NetworkId, is not set");
    return GetNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNode", "Required field: NodeId, is not set");
    return GetNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetNodeOutcome>(
    [&]()-> GetNodeOutcome {
      return GetNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetNodeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProposalOutcome ManagedBlockchainClient::GetProposal(const GetProposalRequest& request) const
{
  AWS_OPERATION_GUARD(GetProposal);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProposal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProposal", "Required field: NetworkId, is not set");
    return GetProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProposal", "Required field: ProposalId, is not set");
    return GetProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProposal, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProposal, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProposal",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProposalOutcome>(
    [&]()-> GetProposalOutcome {
      return GetProposalOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/proposals/");
      resolvedEndpoint.AddPathSegment(request.GetProposalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAccessorsOutcome ManagedBlockchainClient::ListAccessors(const ListAccessorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccessors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAccessors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAccessors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAccessors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAccessorsOutcome>(
    [&]()-> ListAccessorsOutcome {
      return ListAccessorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/accessors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInvitationsOutcome ManagedBlockchainClient::ListInvitations(const ListInvitationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInvitations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListInvitations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInvitations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInvitations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInvitationsOutcome>(
    [&]()-> ListInvitationsOutcome {
      return ListInvitationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/invitations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMembersOutcome ManagedBlockchainClient::ListMembers(const ListMembersRequest& request) const
{
  AWS_OPERATION_GUARD(ListMembers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: NetworkId, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMembers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMembersOutcome>(
    [&]()-> ListMembersOutcome {
      return ListMembersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/members");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNetworksOutcome ManagedBlockchainClient::ListNetworks(const ListNetworksRequest& request) const
{
  AWS_OPERATION_GUARD(ListNetworks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNetworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNetworks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNetworks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNetworks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNetworksOutcome>(
    [&]()-> ListNetworksOutcome {
      return ListNetworksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNodesOutcome ManagedBlockchainClient::ListNodes(const ListNodesRequest& request) const
{
  AWS_OPERATION_GUARD(ListNodes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNodes", "Required field: NetworkId, is not set");
    return ListNodesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNodes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNodesOutcome>(
    [&]()-> ListNodesOutcome {
      return ListNodesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/nodes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProposalVotesOutcome ManagedBlockchainClient::ListProposalVotes(const ListProposalVotesRequest& request) const
{
  AWS_OPERATION_GUARD(ListProposalVotes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProposalVotes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProposalVotes", "Required field: NetworkId, is not set");
    return ListProposalVotesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProposalVotes", "Required field: ProposalId, is not set");
    return ListProposalVotesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProposalVotes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProposalVotes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProposalVotes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProposalVotesOutcome>(
    [&]()-> ListProposalVotesOutcome {
      return ListProposalVotesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/proposals/");
      resolvedEndpoint.AddPathSegment(request.GetProposalId());
      resolvedEndpoint.AddPathSegments("/votes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProposalsOutcome ManagedBlockchainClient::ListProposals(const ListProposalsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProposals);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProposals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProposals", "Required field: NetworkId, is not set");
    return ListProposalsOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProposals, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProposals, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProposals",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProposalsOutcome>(
    [&]()-> ListProposalsOutcome {
      return ListProposalsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/proposals");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome ManagedBlockchainClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectInvitationOutcome ManagedBlockchainClient::RejectInvitation(const RejectInvitationRequest& request) const
{
  AWS_OPERATION_GUARD(RejectInvitation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InvitationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInvitation", "Required field: InvitationId, is not set");
    return RejectInvitationOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InvitationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RejectInvitation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RejectInvitation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RejectInvitation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RejectInvitationOutcome>(
    [&]()-> RejectInvitationOutcome {
      return RejectInvitationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/invitations/");
      resolvedEndpoint.AddPathSegment(request.GetInvitationId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome ManagedBlockchainClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome ManagedBlockchainClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMemberOutcome ManagedBlockchainClient::UpdateMember(const UpdateMemberRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMember);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMember", "Required field: NetworkId, is not set");
    return UpdateMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMember", "Required field: MemberId, is not set");
    return UpdateMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMember",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMemberOutcome>(
    [&]()-> UpdateMemberOutcome {
      return UpdateMemberOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetMemberId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateNodeOutcome ManagedBlockchainClient::UpdateNode(const UpdateNodeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNode", "Required field: NetworkId, is not set");
    return UpdateNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNode", "Required field: NodeId, is not set");
    return UpdateNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateNodeOutcome>(
    [&]()-> UpdateNodeOutcome {
      return UpdateNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetNodeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

VoteOnProposalOutcome ManagedBlockchainClient::VoteOnProposal(const VoteOnProposalRequest& request) const
{
  AWS_OPERATION_GUARD(VoteOnProposal);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VoteOnProposal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("VoteOnProposal", "Required field: NetworkId, is not set");
    return VoteOnProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("VoteOnProposal", "Required field: ProposalId, is not set");
    return VoteOnProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, VoteOnProposal, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, VoteOnProposal, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".VoteOnProposal",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<VoteOnProposalOutcome>(
    [&]()-> VoteOnProposalOutcome {
      return VoteOnProposalOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      resolvedEndpoint.AddPathSegments("/proposals/");
      resolvedEndpoint.AddPathSegment(request.GetProposalId());
      resolvedEndpoint.AddPathSegments("/votes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


