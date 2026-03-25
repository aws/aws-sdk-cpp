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
#include <aws/opensearch/OpenSearchServiceClient.h>
#include <aws/opensearch/OpenSearchServiceEndpointProvider.h>
#include <aws/opensearch/OpenSearchServiceErrorMarshaller.h>
#include <aws/opensearch/model/AcceptInboundConnectionRequest.h>
#include <aws/opensearch/model/AddDataSourceRequest.h>
#include <aws/opensearch/model/AddDirectQueryDataSourceRequest.h>
#include <aws/opensearch/model/AddTagsRequest.h>
#include <aws/opensearch/model/AssociatePackageRequest.h>
#include <aws/opensearch/model/AssociatePackagesRequest.h>
#include <aws/opensearch/model/AuthorizeVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/CancelDomainConfigChangeRequest.h>
#include <aws/opensearch/model/CancelServiceSoftwareUpdateRequest.h>
#include <aws/opensearch/model/CreateApplicationRequest.h>
#include <aws/opensearch/model/CreateDomainRequest.h>
#include <aws/opensearch/model/CreateIndexRequest.h>
#include <aws/opensearch/model/CreateOutboundConnectionRequest.h>
#include <aws/opensearch/model/CreatePackageRequest.h>
#include <aws/opensearch/model/CreateVpcEndpointRequest.h>
#include <aws/opensearch/model/DeleteApplicationRequest.h>
#include <aws/opensearch/model/DeleteDataSourceRequest.h>
#include <aws/opensearch/model/DeleteDirectQueryDataSourceRequest.h>
#include <aws/opensearch/model/DeleteDomainRequest.h>
#include <aws/opensearch/model/DeleteInboundConnectionRequest.h>
#include <aws/opensearch/model/DeleteIndexRequest.h>
#include <aws/opensearch/model/DeleteOutboundConnectionRequest.h>
#include <aws/opensearch/model/DeletePackageRequest.h>
#include <aws/opensearch/model/DeleteVpcEndpointRequest.h>
#include <aws/opensearch/model/DescribeDomainAutoTunesRequest.h>
#include <aws/opensearch/model/DescribeDomainChangeProgressRequest.h>
#include <aws/opensearch/model/DescribeDomainConfigRequest.h>
#include <aws/opensearch/model/DescribeDomainHealthRequest.h>
#include <aws/opensearch/model/DescribeDomainNodesRequest.h>
#include <aws/opensearch/model/DescribeDomainRequest.h>
#include <aws/opensearch/model/DescribeDomainsRequest.h>
#include <aws/opensearch/model/DescribeDryRunProgressRequest.h>
#include <aws/opensearch/model/DescribeInboundConnectionsRequest.h>
#include <aws/opensearch/model/DescribeInstanceTypeLimitsRequest.h>
#include <aws/opensearch/model/DescribeOutboundConnectionsRequest.h>
#include <aws/opensearch/model/DescribePackagesRequest.h>
#include <aws/opensearch/model/DescribeReservedInstanceOfferingsRequest.h>
#include <aws/opensearch/model/DescribeReservedInstancesRequest.h>
#include <aws/opensearch/model/DescribeVpcEndpointsRequest.h>
#include <aws/opensearch/model/DissociatePackageRequest.h>
#include <aws/opensearch/model/DissociatePackagesRequest.h>
#include <aws/opensearch/model/GetApplicationRequest.h>
#include <aws/opensearch/model/GetCompatibleVersionsRequest.h>
#include <aws/opensearch/model/GetDataSourceRequest.h>
#include <aws/opensearch/model/GetDefaultApplicationSettingRequest.h>
#include <aws/opensearch/model/GetDirectQueryDataSourceRequest.h>
#include <aws/opensearch/model/GetDomainMaintenanceStatusRequest.h>
#include <aws/opensearch/model/GetIndexRequest.h>
#include <aws/opensearch/model/GetPackageVersionHistoryRequest.h>
#include <aws/opensearch/model/GetUpgradeHistoryRequest.h>
#include <aws/opensearch/model/GetUpgradeStatusRequest.h>
#include <aws/opensearch/model/ListApplicationsRequest.h>
#include <aws/opensearch/model/ListDataSourcesRequest.h>
#include <aws/opensearch/model/ListDirectQueryDataSourcesRequest.h>
#include <aws/opensearch/model/ListDomainMaintenancesRequest.h>
#include <aws/opensearch/model/ListDomainNamesRequest.h>
#include <aws/opensearch/model/ListDomainsForPackageRequest.h>
#include <aws/opensearch/model/ListInstanceTypeDetailsRequest.h>
#include <aws/opensearch/model/ListPackagesForDomainRequest.h>
#include <aws/opensearch/model/ListScheduledActionsRequest.h>
#include <aws/opensearch/model/ListTagsRequest.h>
#include <aws/opensearch/model/ListVersionsRequest.h>
#include <aws/opensearch/model/ListVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/ListVpcEndpointsForDomainRequest.h>
#include <aws/opensearch/model/ListVpcEndpointsRequest.h>
#include <aws/opensearch/model/PurchaseReservedInstanceOfferingRequest.h>
#include <aws/opensearch/model/PutDefaultApplicationSettingRequest.h>
#include <aws/opensearch/model/RejectInboundConnectionRequest.h>
#include <aws/opensearch/model/RemoveTagsRequest.h>
#include <aws/opensearch/model/RevokeVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/StartDomainMaintenanceRequest.h>
#include <aws/opensearch/model/StartServiceSoftwareUpdateRequest.h>
#include <aws/opensearch/model/UpdateApplicationRequest.h>
#include <aws/opensearch/model/UpdateDataSourceRequest.h>
#include <aws/opensearch/model/UpdateDirectQueryDataSourceRequest.h>
#include <aws/opensearch/model/UpdateDomainConfigRequest.h>
#include <aws/opensearch/model/UpdateIndexRequest.h>
#include <aws/opensearch/model/UpdatePackageRequest.h>
#include <aws/opensearch/model/UpdatePackageScopeRequest.h>
#include <aws/opensearch/model/UpdateScheduledActionRequest.h>
#include <aws/opensearch/model/UpdateVpcEndpointRequest.h>
#include <aws/opensearch/model/UpgradeDomainRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpenSearchService;
using namespace Aws::OpenSearchService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace OpenSearchService {
const char SERVICE_NAME[] = "es";
const char ALLOCATION_TAG[] = "OpenSearchServiceClient";
}  // namespace OpenSearchService
}  // namespace Aws
const char* OpenSearchServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* OpenSearchServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

OpenSearchServiceClient::OpenSearchServiceClient(const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider,
                                                 const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider,
                                                 const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OpenSearchServiceClient::OpenSearchServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
OpenSearchServiceClient::~OpenSearchServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<OpenSearchServiceEndpointProviderBase>& OpenSearchServiceClient::accessEndpointProvider() { return m_endpointProvider; }

void OpenSearchServiceClient::init(const OpenSearchService::OpenSearchServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("OpenSearch");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "es");
}

void OpenSearchServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
OpenSearchServiceClient::InvokeOperationOutcome OpenSearchServiceClient::InvokeServiceOperation(
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

AcceptInboundConnectionOutcome OpenSearchServiceClient::AcceptInboundConnection(const AcceptInboundConnectionRequest& request) const {
  if (!request.ConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptInboundConnection", "Required field: ConnectionId, is not set");
    return AcceptInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  };

  return AcceptInboundConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AddDataSourceOutcome OpenSearchServiceClient::AddDataSource(const AddDataSourceRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddDataSource", "Required field: DomainName, is not set");
    return AddDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataSource");
  };

  return AddDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddDirectQueryDataSourceOutcome OpenSearchServiceClient::AddDirectQueryDataSource(const AddDirectQueryDataSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/directQueryDataSource");
  };

  return AddDirectQueryDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsOutcome OpenSearchServiceClient::AddTags(const AddTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/tags");
  };

  return AddTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociatePackageOutcome OpenSearchServiceClient::AssociatePackage(const AssociatePackageRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: PackageID, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: DomainName, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/associate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return AssociatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociatePackagesOutcome OpenSearchServiceClient::AssociatePackages(const AssociatePackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/associateMultiple");
  };

  return AssociatePackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AuthorizeVpcEndpointAccessOutcome OpenSearchServiceClient::AuthorizeVpcEndpointAccess(
    const AuthorizeVpcEndpointAccessRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AuthorizeVpcEndpointAccess", "Required field: DomainName, is not set");
    return AuthorizeVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizeVpcEndpointAccess");
  };

  return AuthorizeVpcEndpointAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelDomainConfigChangeOutcome OpenSearchServiceClient::CancelDomainConfigChange(const CancelDomainConfigChangeRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelDomainConfigChange", "Required field: DomainName, is not set");
    return CancelDomainConfigChangeOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config/cancel");
  };

  return CancelDomainConfigChangeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelServiceSoftwareUpdateOutcome OpenSearchServiceClient::CancelServiceSoftwareUpdate(
    const CancelServiceSoftwareUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/serviceSoftwareUpdate/cancel");
  };

  return CancelServiceSoftwareUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome OpenSearchServiceClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/application");
  };

  return CreateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome OpenSearchServiceClient::CreateDomain(const CreateDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain");
  };

  return CreateDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIndexOutcome OpenSearchServiceClient::CreateIndex(const CreateIndexRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIndex", "Required field: DomainName, is not set");
    return CreateIndexOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index");
  };

  return CreateIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOutboundConnectionOutcome OpenSearchServiceClient::CreateOutboundConnection(const CreateOutboundConnectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection");
  };

  return CreateOutboundConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePackageOutcome OpenSearchServiceClient::CreatePackage(const CreatePackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages");
  };

  return CreatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcEndpointOutcome OpenSearchServiceClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints");
  };

  return CreateVpcEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome OpenSearchServiceClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: Id, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/application/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataSourceOutcome OpenSearchServiceClient::DeleteDataSource(const DeleteDataSourceRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DomainName, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: Name, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDirectQueryDataSourceOutcome OpenSearchServiceClient::DeleteDirectQueryDataSource(
    const DeleteDirectQueryDataSourceRequest& request) const {
  if (!request.DataSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDirectQueryDataSource", "Required field: DataSourceName, is not set");
    return DeleteDirectQueryDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/directQueryDataSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceName());
  };

  return DeleteDirectQueryDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainOutcome OpenSearchServiceClient::DeleteDomain(const DeleteDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainName, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return DeleteDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInboundConnectionOutcome OpenSearchServiceClient::DeleteInboundConnection(const DeleteInboundConnectionRequest& request) const {
  if (!request.ConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInboundConnection", "Required field: ConnectionId, is not set");
    return DeleteInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  };

  return DeleteInboundConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIndexOutcome OpenSearchServiceClient::DeleteIndex(const DeleteIndexRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIndex", "Required field: DomainName, is not set");
    return DeleteIndexOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIndex", "Required field: IndexName, is not set");
    return DeleteIndexOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
  };

  return DeleteIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteOutboundConnectionOutcome OpenSearchServiceClient::DeleteOutboundConnection(const DeleteOutboundConnectionRequest& request) const {
  if (!request.ConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOutboundConnection", "Required field: ConnectionId, is not set");
    return DeleteOutboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  };

  return DeleteOutboundConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePackageOutcome OpenSearchServiceClient::DeletePackage(const DeletePackageRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageID, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
  };

  return DeletePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVpcEndpointOutcome OpenSearchServiceClient::DeleteVpcEndpoint(const DeleteVpcEndpointRequest& request) const {
  if (!request.VpcEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVpcEndpoint", "Required field: VpcEndpointId, is not set");
    return DeleteVpcEndpointOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcEndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcEndpointId());
  };

  return DeleteVpcEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeDomainOutcome OpenSearchServiceClient::DescribeDomain(const DescribeDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomain", "Required field: DomainName, is not set");
    return DescribeDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return DescribeDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDomainAutoTunesOutcome OpenSearchServiceClient::DescribeDomainAutoTunes(const DescribeDomainAutoTunesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomainAutoTunes", "Required field: DomainName, is not set");
    return DescribeDomainAutoTunesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/autoTunes");
  };

  return DescribeDomainAutoTunesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDomainChangeProgressOutcome OpenSearchServiceClient::DescribeDomainChangeProgress(
    const DescribeDomainChangeProgressRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomainChangeProgress", "Required field: DomainName, is not set");
    return DescribeDomainChangeProgressOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/progress");
  };

  return DescribeDomainChangeProgressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDomainConfigOutcome OpenSearchServiceClient::DescribeDomainConfig(const DescribeDomainConfigRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomainConfig", "Required field: DomainName, is not set");
    return DescribeDomainConfigOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  return DescribeDomainConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDomainHealthOutcome OpenSearchServiceClient::DescribeDomainHealth(const DescribeDomainHealthRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomainHealth", "Required field: DomainName, is not set");
    return DescribeDomainHealthOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/health");
  };

  return DescribeDomainHealthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDomainNodesOutcome OpenSearchServiceClient::DescribeDomainNodes(const DescribeDomainNodesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomainNodes", "Required field: DomainName, is not set");
    return DescribeDomainNodesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  };

  return DescribeDomainNodesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDomainsOutcome OpenSearchServiceClient::DescribeDomains(const DescribeDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain-info");
  };

  return DescribeDomainsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDryRunProgressOutcome OpenSearchServiceClient::DescribeDryRunProgress(const DescribeDryRunProgressRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDryRunProgress", "Required field: DomainName, is not set");
    return DescribeDryRunProgressOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dryRun");
  };

  return DescribeDryRunProgressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInboundConnectionsOutcome OpenSearchServiceClient::DescribeInboundConnections(
    const DescribeInboundConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/search");
  };

  return DescribeInboundConnectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceTypeLimitsOutcome OpenSearchServiceClient::DescribeInstanceTypeLimits(
    const DescribeInstanceTypeLimitsRequest& request) const {
  if (!request.InstanceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInstanceTypeLimits", "Required field: InstanceType, is not set");
    return DescribeInstanceTypeLimitsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceType]", false));
  }
  if (!request.EngineVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInstanceTypeLimits", "Required field: EngineVersion, is not set");
    return DescribeInstanceTypeLimitsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EngineVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/instanceTypeLimits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEngineVersion());
    endpointResolutionOutcome.GetResult().AddPathSegment(
        OpenSearchPartitionInstanceTypeMapper::GetNameForOpenSearchPartitionInstanceType(request.GetInstanceType()));
  };

  return DescribeInstanceTypeLimitsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeOutboundConnectionsOutcome OpenSearchServiceClient::DescribeOutboundConnections(
    const DescribeOutboundConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/outboundConnection/search");
  };

  return DescribeOutboundConnectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePackagesOutcome OpenSearchServiceClient::DescribePackages(const DescribePackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/describe");
  };

  return DescribePackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedInstanceOfferingsOutcome OpenSearchServiceClient::DescribeReservedInstanceOfferings(
    const DescribeReservedInstanceOfferingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/reservedInstanceOfferings");
  };

  return DescribeReservedInstanceOfferingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeReservedInstancesOutcome OpenSearchServiceClient::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/reservedInstances");
  };

  return DescribeReservedInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVpcEndpointsOutcome OpenSearchServiceClient::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints/describe");
  };

  return DescribeVpcEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DissociatePackageOutcome OpenSearchServiceClient::DissociatePackage(const DissociatePackageRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: PackageID, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: DomainName, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/dissociate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return DissociatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DissociatePackagesOutcome OpenSearchServiceClient::DissociatePackages(const DissociatePackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/dissociateMultiple");
  };

  return DissociatePackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApplicationOutcome OpenSearchServiceClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: Id, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER,
                                                                                "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/application/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCompatibleVersionsOutcome OpenSearchServiceClient::GetCompatibleVersions(const GetCompatibleVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/compatibleVersions");
  };

  return GetCompatibleVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataSourceOutcome OpenSearchServiceClient::GetDataSource(const GetDataSourceRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: DomainName, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: Name, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDefaultApplicationSettingOutcome OpenSearchServiceClient::GetDefaultApplicationSetting(
    const GetDefaultApplicationSettingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/defaultApplicationSetting");
  };

  return GetDefaultApplicationSettingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDirectQueryDataSourceOutcome OpenSearchServiceClient::GetDirectQueryDataSource(const GetDirectQueryDataSourceRequest& request) const {
  if (!request.DataSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDirectQueryDataSource", "Required field: DataSourceName, is not set");
    return GetDirectQueryDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/directQueryDataSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceName());
  };

  return GetDirectQueryDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainMaintenanceStatusOutcome OpenSearchServiceClient::GetDomainMaintenanceStatus(
    const GetDomainMaintenanceStatusRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainMaintenanceStatus", "Required field: DomainName, is not set");
    return GetDomainMaintenanceStatusOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.MaintenanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainMaintenanceStatus", "Required field: MaintenanceId, is not set");
    return GetDomainMaintenanceStatusOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MaintenanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainMaintenance");
  };

  return GetDomainMaintenanceStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIndexOutcome OpenSearchServiceClient::GetIndex(const GetIndexRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIndex", "Required field: DomainName, is not set");
    return GetIndexOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainName]", false));
  }
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIndex", "Required field: IndexName, is not set");
    return GetIndexOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
  };

  return GetIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPackageVersionHistoryOutcome OpenSearchServiceClient::GetPackageVersionHistory(const GetPackageVersionHistoryRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPackageVersionHistory", "Required field: PackageID, is not set");
    return GetPackageVersionHistoryOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
    endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  };

  return GetPackageVersionHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUpgradeHistoryOutcome OpenSearchServiceClient::GetUpgradeHistory(const GetUpgradeHistoryRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUpgradeHistory", "Required field: DomainName, is not set");
    return GetUpgradeHistoryOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/upgradeDomain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  };

  return GetUpgradeHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUpgradeStatusOutcome OpenSearchServiceClient::GetUpgradeStatus(const GetUpgradeStatusRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUpgradeStatus", "Required field: DomainName, is not set");
    return GetUpgradeStatusOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/upgradeDomain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return GetUpgradeStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationsOutcome OpenSearchServiceClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/list-applications");
  };

  return ListApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataSourcesOutcome OpenSearchServiceClient::ListDataSources(const ListDataSourcesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: DomainName, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataSource");
  };

  return ListDataSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDirectQueryDataSourcesOutcome OpenSearchServiceClient::ListDirectQueryDataSources(
    const ListDirectQueryDataSourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/directQueryDataSource");
  };

  return ListDirectQueryDataSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainMaintenancesOutcome OpenSearchServiceClient::ListDomainMaintenances(const ListDomainMaintenancesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainMaintenances", "Required field: DomainName, is not set");
    return ListDomainMaintenancesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainMaintenances");
  };

  return ListDomainMaintenancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainNamesOutcome OpenSearchServiceClient::ListDomainNames(const ListDomainNamesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/domain");
  };

  return ListDomainNamesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainsForPackageOutcome OpenSearchServiceClient::ListDomainsForPackage(const ListDomainsForPackageRequest& request) const {
  if (!request.PackageIDHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainsForPackage", "Required field: PackageID, is not set");
    return ListDomainsForPackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageID());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  return ListDomainsForPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInstanceTypeDetailsOutcome OpenSearchServiceClient::ListInstanceTypeDetails(const ListInstanceTypeDetailsRequest& request) const {
  if (!request.EngineVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInstanceTypeDetails", "Required field: EngineVersion, is not set");
    return ListInstanceTypeDetailsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EngineVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/instanceTypeDetails/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEngineVersion());
  };

  return ListInstanceTypeDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPackagesForDomainOutcome OpenSearchServiceClient::ListPackagesForDomain(const ListPackagesForDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPackagesForDomain", "Required field: DomainName, is not set");
    return ListPackagesForDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  };

  return ListPackagesForDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListScheduledActionsOutcome OpenSearchServiceClient::ListScheduledActions(const ListScheduledActionsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListScheduledActions", "Required field: DomainName, is not set");
    return ListScheduledActionsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scheduledActions");
  };

  return ListScheduledActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsOutcome OpenSearchServiceClient::ListTags(const ListTagsRequest& request) const {
  if (!request.ARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ARN, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/tags/");
  };

  return ListTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVersionsOutcome OpenSearchServiceClient::ListVersions(const ListVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/versions");
  };

  return ListVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVpcEndpointAccessOutcome OpenSearchServiceClient::ListVpcEndpointAccess(const ListVpcEndpointAccessRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointAccess", "Required field: DomainName, is not set");
    return ListVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listVpcEndpointAccess");
  };

  return ListVpcEndpointAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVpcEndpointsOutcome OpenSearchServiceClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints");
  };

  return ListVpcEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVpcEndpointsForDomainOutcome OpenSearchServiceClient::ListVpcEndpointsForDomain(const ListVpcEndpointsForDomainRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointsForDomain", "Required field: DomainName, is not set");
    return ListVpcEndpointsForDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpcEndpoints");
  };

  return ListVpcEndpointsForDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PurchaseReservedInstanceOfferingOutcome OpenSearchServiceClient::PurchaseReservedInstanceOffering(
    const PurchaseReservedInstanceOfferingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/purchaseReservedInstanceOffering");
  };

  return PurchaseReservedInstanceOfferingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDefaultApplicationSettingOutcome OpenSearchServiceClient::PutDefaultApplicationSetting(
    const PutDefaultApplicationSettingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/defaultApplicationSetting");
  };

  return PutDefaultApplicationSettingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RejectInboundConnectionOutcome OpenSearchServiceClient::RejectInboundConnection(const RejectInboundConnectionRequest& request) const {
  if (!request.ConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectInboundConnection", "Required field: ConnectionId, is not set");
    return RejectInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/cc/inboundConnection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  };

  return RejectInboundConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveTagsOutcome OpenSearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/tags-removal");
  };

  return RemoveTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeVpcEndpointAccessOutcome OpenSearchServiceClient::RevokeVpcEndpointAccess(const RevokeVpcEndpointAccessRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeVpcEndpointAccess", "Required field: DomainName, is not set");
    return RevokeVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revokeVpcEndpointAccess");
  };

  return RevokeVpcEndpointAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDomainMaintenanceOutcome OpenSearchServiceClient::StartDomainMaintenance(const StartDomainMaintenanceRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDomainMaintenance", "Required field: DomainName, is not set");
    return StartDomainMaintenanceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainMaintenance");
  };

  return StartDomainMaintenanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartServiceSoftwareUpdateOutcome OpenSearchServiceClient::StartServiceSoftwareUpdate(
    const StartServiceSoftwareUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/serviceSoftwareUpdate/start");
  };

  return StartServiceSoftwareUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationOutcome OpenSearchServiceClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: Id, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/application/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDataSourceOutcome OpenSearchServiceClient::UpdateDataSource(const UpdateDataSourceRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DomainName, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: Name, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDirectQueryDataSourceOutcome OpenSearchServiceClient::UpdateDirectQueryDataSource(
    const UpdateDirectQueryDataSourceRequest& request) const {
  if (!request.DataSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDirectQueryDataSource", "Required field: DataSourceName, is not set");
    return UpdateDirectQueryDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/directQueryDataSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceName());
  };

  return UpdateDirectQueryDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDomainConfigOutcome OpenSearchServiceClient::UpdateDomainConfig(const UpdateDomainConfigRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainConfig", "Required field: DomainName, is not set");
    return UpdateDomainConfigOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  return UpdateDomainConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIndexOutcome OpenSearchServiceClient::UpdateIndex(const UpdateIndexRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIndex", "Required field: DomainName, is not set");
    return UpdateIndexOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.IndexNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIndex", "Required field: IndexName, is not set");
    return UpdateIndexOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexName());
  };

  return UpdateIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePackageOutcome OpenSearchServiceClient::UpdatePackage(const UpdatePackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/update");
  };

  return UpdatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePackageScopeOutcome OpenSearchServiceClient::UpdatePackageScope(const UpdatePackageScopeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/packages/updateScope");
  };

  return UpdatePackageScopeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateScheduledActionOutcome OpenSearchServiceClient::UpdateScheduledAction(const UpdateScheduledActionRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateScheduledAction", "Required field: DomainName, is not set");
    return UpdateScheduledActionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(
        OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/domain/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scheduledAction/update");
  };

  return UpdateScheduledActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVpcEndpointOutcome OpenSearchServiceClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/vpcEndpoints/update");
  };

  return UpdateVpcEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpgradeDomainOutcome OpenSearchServiceClient::UpgradeDomain(const UpgradeDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2021-01-01/opensearch/upgradeDomain");
  };

  return UpgradeDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
