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


#include <aws/opensearch/OpenSearchServiceClient.h>
#include <aws/opensearch/OpenSearchServiceErrorMarshaller.h>
#include <aws/opensearch/OpenSearchServiceEndpointProvider.h>
#include <aws/opensearch/model/AcceptInboundConnectionRequest.h>
#include <aws/opensearch/model/AddDataSourceRequest.h>
#include <aws/opensearch/model/AddTagsRequest.h>
#include <aws/opensearch/model/AssociatePackageRequest.h>
#include <aws/opensearch/model/AssociatePackagesRequest.h>
#include <aws/opensearch/model/AuthorizeVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/CancelDomainConfigChangeRequest.h>
#include <aws/opensearch/model/CancelServiceSoftwareUpdateRequest.h>
#include <aws/opensearch/model/CreateApplicationRequest.h>
#include <aws/opensearch/model/CreateDomainRequest.h>
#include <aws/opensearch/model/CreateOutboundConnectionRequest.h>
#include <aws/opensearch/model/CreatePackageRequest.h>
#include <aws/opensearch/model/CreateVpcEndpointRequest.h>
#include <aws/opensearch/model/DeleteApplicationRequest.h>
#include <aws/opensearch/model/DeleteDataSourceRequest.h>
#include <aws/opensearch/model/DeleteDomainRequest.h>
#include <aws/opensearch/model/DeleteInboundConnectionRequest.h>
#include <aws/opensearch/model/DeleteOutboundConnectionRequest.h>
#include <aws/opensearch/model/DeletePackageRequest.h>
#include <aws/opensearch/model/DeleteVpcEndpointRequest.h>
#include <aws/opensearch/model/DescribeDomainRequest.h>
#include <aws/opensearch/model/DescribeDomainAutoTunesRequest.h>
#include <aws/opensearch/model/DescribeDomainChangeProgressRequest.h>
#include <aws/opensearch/model/DescribeDomainConfigRequest.h>
#include <aws/opensearch/model/DescribeDomainHealthRequest.h>
#include <aws/opensearch/model/DescribeDomainNodesRequest.h>
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
#include <aws/opensearch/model/GetDomainMaintenanceStatusRequest.h>
#include <aws/opensearch/model/GetPackageVersionHistoryRequest.h>
#include <aws/opensearch/model/GetUpgradeHistoryRequest.h>
#include <aws/opensearch/model/GetUpgradeStatusRequest.h>
#include <aws/opensearch/model/ListApplicationsRequest.h>
#include <aws/opensearch/model/ListDataSourcesRequest.h>
#include <aws/opensearch/model/ListDomainMaintenancesRequest.h>
#include <aws/opensearch/model/ListDomainNamesRequest.h>
#include <aws/opensearch/model/ListDomainsForPackageRequest.h>
#include <aws/opensearch/model/ListInstanceTypeDetailsRequest.h>
#include <aws/opensearch/model/ListPackagesForDomainRequest.h>
#include <aws/opensearch/model/ListScheduledActionsRequest.h>
#include <aws/opensearch/model/ListTagsRequest.h>
#include <aws/opensearch/model/ListVersionsRequest.h>
#include <aws/opensearch/model/ListVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/ListVpcEndpointsRequest.h>
#include <aws/opensearch/model/ListVpcEndpointsForDomainRequest.h>
#include <aws/opensearch/model/PurchaseReservedInstanceOfferingRequest.h>
#include <aws/opensearch/model/RejectInboundConnectionRequest.h>
#include <aws/opensearch/model/RemoveTagsRequest.h>
#include <aws/opensearch/model/RevokeVpcEndpointAccessRequest.h>
#include <aws/opensearch/model/StartDomainMaintenanceRequest.h>
#include <aws/opensearch/model/StartServiceSoftwareUpdateRequest.h>
#include <aws/opensearch/model/UpdateApplicationRequest.h>
#include <aws/opensearch/model/UpdateDataSourceRequest.h>
#include <aws/opensearch/model/UpdateDomainConfigRequest.h>
#include <aws/opensearch/model/UpdatePackageRequest.h>
#include <aws/opensearch/model/UpdatePackageScopeRequest.h>
#include <aws/opensearch/model/UpdateScheduledActionRequest.h>
#include <aws/opensearch/model/UpdateVpcEndpointRequest.h>
#include <aws/opensearch/model/UpgradeDomainRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpenSearchService;
using namespace Aws::OpenSearchService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace OpenSearchService
  {
    const char ALLOCATION_TAG[] = "OpenSearchServiceClient";
    const char SERVICE_NAME[] = "es";
  }
}
const char* OpenSearchServiceClient::GetServiceName() {return SERVICE_NAME;}
const char* OpenSearchServiceClient::GetAllocationTag() {return ALLOCATION_TAG;}

OpenSearchServiceClient::OpenSearchServiceClient(const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration,
                           std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const AWSCredentials& credentials,
                           std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider,
                           const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider,
                           const OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OpenSearchServiceClient::OpenSearchServiceClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{
  init(m_clientConfiguration);
}

OpenSearchServiceClient::OpenSearchServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<OpenSearchServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<OpenSearchServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{
  init(m_clientConfiguration);
}
/* End of legacy constructors due deprecation */

OpenSearchServiceClient::~OpenSearchServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<OpenSearchServiceEndpointProviderBase>& OpenSearchServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void OpenSearchServiceClient::init(const OpenSearchService::OpenSearchServiceClientConfiguration& config)
{
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void OpenSearchServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptInboundConnectionOutcome OpenSearchServiceClient::AcceptInboundConnection(const AcceptInboundConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(AcceptInboundConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptInboundConnection", "Required field: ConnectionId, is not set");
    return AcceptInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AcceptInboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AcceptInboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AcceptInboundConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AcceptInboundConnectionOutcome>(
    [&]()-> AcceptInboundConnectionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/cc/inboundConnection/");
      endpointOverrides.AddPathSegment(request.GetConnectionId());
      endpointOverrides.AddPathSegment("/accept");
      return AcceptInboundConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddDataSourceOutcome OpenSearchServiceClient::AddDataSource(const AddDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(AddDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddDataSource", "Required field: DomainName, is not set");
    return AddDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AddDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddDataSourceOutcome>(
    [&]()-> AddDataSourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/dataSource");
      return AddDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddTagsOutcome OpenSearchServiceClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_GUARD(AddTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AddTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddTags",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddTagsOutcome>(
    [&]()-> AddTagsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/tags");
      return AddTagsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociatePackageOutcome OpenSearchServiceClient::AssociatePackage(const AssociatePackageRequest& request) const
{
  AWS_OPERATION_GUARD(AssociatePackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: PackageID, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePackage", "Required field: DomainName, is not set");
    return AssociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociatePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociatePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociatePackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociatePackageOutcome>(
    [&]()-> AssociatePackageOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/associate/");
      endpointOverrides.AddPathSegment(request.GetPackageID());
      endpointOverrides.AddPathSegment(request.GetDomainName());
      return AssociatePackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociatePackagesOutcome OpenSearchServiceClient::AssociatePackages(const AssociatePackagesRequest& request) const
{
  AWS_OPERATION_GUARD(AssociatePackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociatePackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociatePackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociatePackages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociatePackagesOutcome>(
    [&]()-> AssociatePackagesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/associateMultiple");
      return AssociatePackagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AuthorizeVpcEndpointAccessOutcome OpenSearchServiceClient::AuthorizeVpcEndpointAccess(const AuthorizeVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_GUARD(AuthorizeVpcEndpointAccess);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AuthorizeVpcEndpointAccess", "Required field: DomainName, is not set");
    return AuthorizeVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AuthorizeVpcEndpointAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AuthorizeVpcEndpointAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AuthorizeVpcEndpointAccess",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AuthorizeVpcEndpointAccessOutcome>(
    [&]()-> AuthorizeVpcEndpointAccessOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/authorizeVpcEndpointAccess");
      return AuthorizeVpcEndpointAccessOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelDomainConfigChangeOutcome OpenSearchServiceClient::CancelDomainConfigChange(const CancelDomainConfigChangeRequest& request) const
{
  AWS_OPERATION_GUARD(CancelDomainConfigChange);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelDomainConfigChange, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelDomainConfigChange", "Required field: DomainName, is not set");
    return CancelDomainConfigChangeOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelDomainConfigChange, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelDomainConfigChange, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelDomainConfigChange",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelDomainConfigChangeOutcome>(
    [&]()-> CancelDomainConfigChangeOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/config/cancel");
      return CancelDomainConfigChangeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelServiceSoftwareUpdateOutcome OpenSearchServiceClient::CancelServiceSoftwareUpdate(const CancelServiceSoftwareUpdateRequest& request) const
{
  AWS_OPERATION_GUARD(CancelServiceSoftwareUpdate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelServiceSoftwareUpdate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelServiceSoftwareUpdate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelServiceSoftwareUpdate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelServiceSoftwareUpdateOutcome>(
    [&]()-> CancelServiceSoftwareUpdateOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/serviceSoftwareUpdate/cancel");
      return CancelServiceSoftwareUpdateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateApplicationOutcome OpenSearchServiceClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateApplicationOutcome>(
    [&]()-> CreateApplicationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/application");
      return CreateApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDomainOutcome OpenSearchServiceClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDomainOutcome>(
    [&]()-> CreateDomainOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain");
      return CreateDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateOutboundConnectionOutcome OpenSearchServiceClient::CreateOutboundConnection(const CreateOutboundConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateOutboundConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOutboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateOutboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateOutboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateOutboundConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateOutboundConnectionOutcome>(
    [&]()-> CreateOutboundConnectionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/cc/outboundConnection");
      return CreateOutboundConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePackageOutcome OpenSearchServiceClient::CreatePackage(const CreatePackageRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreatePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePackageOutcome>(
    [&]()-> CreatePackageOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages");
      return CreatePackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcEndpointOutcome OpenSearchServiceClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVpcEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateVpcEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVpcEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVpcEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVpcEndpointOutcome>(
    [&]()-> CreateVpcEndpointOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/vpcEndpoints");
      return CreateVpcEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteApplicationOutcome OpenSearchServiceClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: Id, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteApplicationOutcome>(
    [&]()-> DeleteApplicationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/application/");
      endpointOverrides.AddPathSegment(request.GetId());
      return DeleteApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataSourceOutcome OpenSearchServiceClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DomainName, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: Name, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataSourceOutcome>(
    [&]()-> DeleteDataSourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/dataSource/");
      endpointOverrides.AddPathSegment(request.GetName());
      return DeleteDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDomainOutcome OpenSearchServiceClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainName, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDomainOutcome>(
    [&]()-> DeleteDomainOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      return DeleteDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInboundConnectionOutcome OpenSearchServiceClient::DeleteInboundConnection(const DeleteInboundConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteInboundConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInboundConnection", "Required field: ConnectionId, is not set");
    return DeleteInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteInboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteInboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteInboundConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteInboundConnectionOutcome>(
    [&]()-> DeleteInboundConnectionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/cc/inboundConnection/");
      endpointOverrides.AddPathSegment(request.GetConnectionId());
      return DeleteInboundConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteOutboundConnectionOutcome OpenSearchServiceClient::DeleteOutboundConnection(const DeleteOutboundConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteOutboundConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOutboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOutboundConnection", "Required field: ConnectionId, is not set");
    return DeleteOutboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteOutboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteOutboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteOutboundConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteOutboundConnectionOutcome>(
    [&]()-> DeleteOutboundConnectionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/cc/outboundConnection/");
      endpointOverrides.AddPathSegment(request.GetConnectionId());
      return DeleteOutboundConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePackageOutcome OpenSearchServiceClient::DeletePackage(const DeletePackageRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageID, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeletePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePackageOutcome>(
    [&]()-> DeletePackageOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/");
      endpointOverrides.AddPathSegment(request.GetPackageID());
      return DeletePackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcEndpointOutcome OpenSearchServiceClient::DeleteVpcEndpoint(const DeleteVpcEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVpcEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VpcEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVpcEndpoint", "Required field: VpcEndpointId, is not set");
    return DeleteVpcEndpointOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcEndpointId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteVpcEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVpcEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVpcEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVpcEndpointOutcome>(
    [&]()-> DeleteVpcEndpointOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/vpcEndpoints/");
      endpointOverrides.AddPathSegment(request.GetVpcEndpointId());
      return DeleteVpcEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDomainOutcome OpenSearchServiceClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomain", "Required field: DomainName, is not set");
    return DescribeDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDomainOutcome>(
    [&]()-> DescribeDomainOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      return DescribeDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDomainAutoTunesOutcome OpenSearchServiceClient::DescribeDomainAutoTunes(const DescribeDomainAutoTunesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDomainAutoTunes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainAutoTunes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainAutoTunes", "Required field: DomainName, is not set");
    return DescribeDomainAutoTunesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDomainAutoTunes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDomainAutoTunes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDomainAutoTunes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDomainAutoTunesOutcome>(
    [&]()-> DescribeDomainAutoTunesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/autoTunes");
      return DescribeDomainAutoTunesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDomainChangeProgressOutcome OpenSearchServiceClient::DescribeDomainChangeProgress(const DescribeDomainChangeProgressRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDomainChangeProgress);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainChangeProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainChangeProgress", "Required field: DomainName, is not set");
    return DescribeDomainChangeProgressOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDomainChangeProgress, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDomainChangeProgress, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDomainChangeProgress",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDomainChangeProgressOutcome>(
    [&]()-> DescribeDomainChangeProgressOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/progress");
      return DescribeDomainChangeProgressOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDomainConfigOutcome OpenSearchServiceClient::DescribeDomainConfig(const DescribeDomainConfigRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDomainConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainConfig", "Required field: DomainName, is not set");
    return DescribeDomainConfigOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDomainConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDomainConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDomainConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDomainConfigOutcome>(
    [&]()-> DescribeDomainConfigOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/config");
      return DescribeDomainConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDomainHealthOutcome OpenSearchServiceClient::DescribeDomainHealth(const DescribeDomainHealthRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDomainHealth);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainHealth", "Required field: DomainName, is not set");
    return DescribeDomainHealthOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDomainHealth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDomainHealth, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDomainHealth",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDomainHealthOutcome>(
    [&]()-> DescribeDomainHealthOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/health");
      return DescribeDomainHealthOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDomainNodesOutcome OpenSearchServiceClient::DescribeDomainNodes(const DescribeDomainNodesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDomainNodes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDomainNodes", "Required field: DomainName, is not set");
    return DescribeDomainNodesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDomainNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDomainNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDomainNodes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDomainNodesOutcome>(
    [&]()-> DescribeDomainNodesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/nodes");
      return DescribeDomainNodesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDomainsOutcome OpenSearchServiceClient::DescribeDomains(const DescribeDomainsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDomains);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDomains, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDomains, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDomains",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDomainsOutcome>(
    [&]()-> DescribeDomainsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain-info");
      return DescribeDomainsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDryRunProgressOutcome OpenSearchServiceClient::DescribeDryRunProgress(const DescribeDryRunProgressRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDryRunProgress);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDryRunProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDryRunProgress", "Required field: DomainName, is not set");
    return DescribeDryRunProgressOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDryRunProgress, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDryRunProgress, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDryRunProgress",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDryRunProgressOutcome>(
    [&]()-> DescribeDryRunProgressOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/dryRun");
      return DescribeDryRunProgressOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInboundConnectionsOutcome OpenSearchServiceClient::DescribeInboundConnections(const DescribeInboundConnectionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInboundConnections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInboundConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeInboundConnections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInboundConnections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeInboundConnections",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInboundConnectionsOutcome>(
    [&]()-> DescribeInboundConnectionsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/cc/inboundConnection/search");
      return DescribeInboundConnectionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInstanceTypeLimitsOutcome OpenSearchServiceClient::DescribeInstanceTypeLimits(const DescribeInstanceTypeLimitsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceTypeLimits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTypeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceTypeLimits", "Required field: InstanceType, is not set");
    return DescribeInstanceTypeLimitsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceType]", false));
  }
  if (!request.EngineVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInstanceTypeLimits", "Required field: EngineVersion, is not set");
    return DescribeInstanceTypeLimitsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EngineVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeInstanceTypeLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstanceTypeLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeInstanceTypeLimits",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstanceTypeLimitsOutcome>(
    [&]()-> DescribeInstanceTypeLimitsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/instanceTypeLimits/");
      endpointOverrides.AddPathSegment(request.GetEngineVersion());
      endpointOverrides.AddPathSegment(OpenSearchPartitionInstanceTypeMapper::GetNameForOpenSearchPartitionInstanceType(request.GetInstanceType()));
      return DescribeInstanceTypeLimitsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeOutboundConnectionsOutcome OpenSearchServiceClient::DescribeOutboundConnections(const DescribeOutboundConnectionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeOutboundConnections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOutboundConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeOutboundConnections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeOutboundConnections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeOutboundConnections",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeOutboundConnectionsOutcome>(
    [&]()-> DescribeOutboundConnectionsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/cc/outboundConnection/search");
      return DescribeOutboundConnectionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribePackagesOutcome OpenSearchServiceClient::DescribePackages(const DescribePackagesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribePackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribePackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribePackages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribePackagesOutcome>(
    [&]()-> DescribePackagesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/describe");
      return DescribePackagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReservedInstanceOfferingsOutcome OpenSearchServiceClient::DescribeReservedInstanceOfferings(const DescribeReservedInstanceOfferingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReservedInstanceOfferings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstanceOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeReservedInstanceOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReservedInstanceOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeReservedInstanceOfferings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReservedInstanceOfferingsOutcome>(
    [&]()-> DescribeReservedInstanceOfferingsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/reservedInstanceOfferings");
      return DescribeReservedInstanceOfferingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReservedInstancesOutcome OpenSearchServiceClient::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReservedInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeReservedInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReservedInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeReservedInstances",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReservedInstancesOutcome>(
    [&]()-> DescribeReservedInstancesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/reservedInstances");
      return DescribeReservedInstancesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVpcEndpointsOutcome OpenSearchServiceClient::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVpcEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeVpcEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVpcEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeVpcEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVpcEndpointsOutcome>(
    [&]()-> DescribeVpcEndpointsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/vpcEndpoints/describe");
      return DescribeVpcEndpointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DissociatePackageOutcome OpenSearchServiceClient::DissociatePackage(const DissociatePackageRequest& request) const
{
  AWS_OPERATION_GUARD(DissociatePackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DissociatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: PackageID, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DissociatePackage", "Required field: DomainName, is not set");
    return DissociatePackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DissociatePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DissociatePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DissociatePackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DissociatePackageOutcome>(
    [&]()-> DissociatePackageOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/dissociate/");
      endpointOverrides.AddPathSegment(request.GetPackageID());
      endpointOverrides.AddPathSegment(request.GetDomainName());
      return DissociatePackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DissociatePackagesOutcome OpenSearchServiceClient::DissociatePackages(const DissociatePackagesRequest& request) const
{
  AWS_OPERATION_GUARD(DissociatePackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DissociatePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DissociatePackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DissociatePackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DissociatePackages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DissociatePackagesOutcome>(
    [&]()-> DissociatePackagesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/dissociateMultiple");
      return DissociatePackagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetApplicationOutcome OpenSearchServiceClient::GetApplication(const GetApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(GetApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: Id, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetApplicationOutcome>(
    [&]()-> GetApplicationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/application/");
      endpointOverrides.AddPathSegment(request.GetId());
      return GetApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCompatibleVersionsOutcome OpenSearchServiceClient::GetCompatibleVersions(const GetCompatibleVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(GetCompatibleVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCompatibleVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCompatibleVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCompatibleVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCompatibleVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCompatibleVersionsOutcome>(
    [&]()-> GetCompatibleVersionsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/compatibleVersions");
      return GetCompatibleVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataSourceOutcome OpenSearchServiceClient::GetDataSource(const GetDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: DomainName, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: Name, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataSourceOutcome>(
    [&]()-> GetDataSourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/dataSource/");
      endpointOverrides.AddPathSegment(request.GetName());
      return GetDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDomainMaintenanceStatusOutcome OpenSearchServiceClient::GetDomainMaintenanceStatus(const GetDomainMaintenanceStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetDomainMaintenanceStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainMaintenanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainMaintenanceStatus", "Required field: DomainName, is not set");
    return GetDomainMaintenanceStatusOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.MaintenanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainMaintenanceStatus", "Required field: MaintenanceId, is not set");
    return GetDomainMaintenanceStatusOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MaintenanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDomainMaintenanceStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDomainMaintenanceStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDomainMaintenanceStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDomainMaintenanceStatusOutcome>(
    [&]()-> GetDomainMaintenanceStatusOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/domainMaintenance");
      return GetDomainMaintenanceStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPackageVersionHistoryOutcome OpenSearchServiceClient::GetPackageVersionHistory(const GetPackageVersionHistoryRequest& request) const
{
  AWS_OPERATION_GUARD(GetPackageVersionHistory);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPackageVersionHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPackageVersionHistory", "Required field: PackageID, is not set");
    return GetPackageVersionHistoryOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPackageVersionHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPackageVersionHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPackageVersionHistory",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPackageVersionHistoryOutcome>(
    [&]()-> GetPackageVersionHistoryOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/");
      endpointOverrides.AddPathSegment(request.GetPackageID());
      endpointOverrides.AddPathSegment("/history");
      return GetPackageVersionHistoryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUpgradeHistoryOutcome OpenSearchServiceClient::GetUpgradeHistory(const GetUpgradeHistoryRequest& request) const
{
  AWS_OPERATION_GUARD(GetUpgradeHistory);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUpgradeHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeHistory", "Required field: DomainName, is not set");
    return GetUpgradeHistoryOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetUpgradeHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUpgradeHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUpgradeHistory",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUpgradeHistoryOutcome>(
    [&]()-> GetUpgradeHistoryOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/upgradeDomain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/history");
      return GetUpgradeHistoryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUpgradeStatusOutcome OpenSearchServiceClient::GetUpgradeStatus(const GetUpgradeStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetUpgradeStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUpgradeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUpgradeStatus", "Required field: DomainName, is not set");
    return GetUpgradeStatusOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetUpgradeStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUpgradeStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUpgradeStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUpgradeStatusOutcome>(
    [&]()-> GetUpgradeStatusOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/upgradeDomain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/status");
      return GetUpgradeStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListApplicationsOutcome OpenSearchServiceClient::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListApplications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListApplications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListApplicationsOutcome>(
    [&]()-> ListApplicationsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/list-applications");
      return ListApplicationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSourcesOutcome OpenSearchServiceClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: DomainName, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourcesOutcome>(
    [&]()-> ListDataSourcesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/dataSource");
      return ListDataSourcesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDomainMaintenancesOutcome OpenSearchServiceClient::ListDomainMaintenances(const ListDomainMaintenancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDomainMaintenances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainMaintenances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainMaintenances", "Required field: DomainName, is not set");
    return ListDomainMaintenancesOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDomainMaintenances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDomainMaintenances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDomainMaintenances",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDomainMaintenancesOutcome>(
    [&]()-> ListDomainMaintenancesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/domainMaintenances");
      return ListDomainMaintenancesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDomainNamesOutcome OpenSearchServiceClient::ListDomainNames(const ListDomainNamesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDomainNames);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDomainNames, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDomainNames, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDomainNames",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDomainNamesOutcome>(
    [&]()-> ListDomainNamesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/domain");
      return ListDomainNamesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDomainsForPackageOutcome OpenSearchServiceClient::ListDomainsForPackage(const ListDomainsForPackageRequest& request) const
{
  AWS_OPERATION_GUARD(ListDomainsForPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainsForPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainsForPackage", "Required field: PackageID, is not set");
    return ListDomainsForPackageOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageID]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDomainsForPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDomainsForPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDomainsForPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDomainsForPackageOutcome>(
    [&]()-> ListDomainsForPackageOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/");
      endpointOverrides.AddPathSegment(request.GetPackageID());
      endpointOverrides.AddPathSegment("/domains");
      return ListDomainsForPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInstanceTypeDetailsOutcome OpenSearchServiceClient::ListInstanceTypeDetails(const ListInstanceTypeDetailsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInstanceTypeDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstanceTypeDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EngineVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInstanceTypeDetails", "Required field: EngineVersion, is not set");
    return ListInstanceTypeDetailsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EngineVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListInstanceTypeDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInstanceTypeDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInstanceTypeDetails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInstanceTypeDetailsOutcome>(
    [&]()-> ListInstanceTypeDetailsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/instanceTypeDetails/");
      endpointOverrides.AddPathSegment(request.GetEngineVersion());
      return ListInstanceTypeDetailsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPackagesForDomainOutcome OpenSearchServiceClient::ListPackagesForDomain(const ListPackagesForDomainRequest& request) const
{
  AWS_OPERATION_GUARD(ListPackagesForDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPackagesForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPackagesForDomain", "Required field: DomainName, is not set");
    return ListPackagesForDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPackagesForDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPackagesForDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPackagesForDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPackagesForDomainOutcome>(
    [&]()-> ListPackagesForDomainOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/packages");
      return ListPackagesForDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListScheduledActionsOutcome OpenSearchServiceClient::ListScheduledActions(const ListScheduledActionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListScheduledActions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListScheduledActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListScheduledActions", "Required field: DomainName, is not set");
    return ListScheduledActionsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListScheduledActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListScheduledActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListScheduledActions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListScheduledActionsOutcome>(
    [&]()-> ListScheduledActionsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/scheduledActions");
      return ListScheduledActionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsOutcome OpenSearchServiceClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ARN, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTags",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsOutcome>(
    [&]()-> ListTagsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/tags/");
      return ListTagsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVersionsOutcome OpenSearchServiceClient::ListVersions(const ListVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVersionsOutcome>(
    [&]()-> ListVersionsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/versions");
      return ListVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVpcEndpointAccessOutcome OpenSearchServiceClient::ListVpcEndpointAccess(const ListVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_GUARD(ListVpcEndpointAccess);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointAccess", "Required field: DomainName, is not set");
    return ListVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVpcEndpointAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVpcEndpointAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVpcEndpointAccess",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVpcEndpointAccessOutcome>(
    [&]()-> ListVpcEndpointAccessOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/listVpcEndpointAccess");
      return ListVpcEndpointAccessOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVpcEndpointsOutcome OpenSearchServiceClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVpcEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVpcEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVpcEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVpcEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVpcEndpointsOutcome>(
    [&]()-> ListVpcEndpointsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/vpcEndpoints");
      return ListVpcEndpointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVpcEndpointsForDomainOutcome OpenSearchServiceClient::ListVpcEndpointsForDomain(const ListVpcEndpointsForDomainRequest& request) const
{
  AWS_OPERATION_GUARD(ListVpcEndpointsForDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpointsForDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVpcEndpointsForDomain", "Required field: DomainName, is not set");
    return ListVpcEndpointsForDomainOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVpcEndpointsForDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVpcEndpointsForDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVpcEndpointsForDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVpcEndpointsForDomainOutcome>(
    [&]()-> ListVpcEndpointsForDomainOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/vpcEndpoints");
      return ListVpcEndpointsForDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseReservedInstanceOfferingOutcome OpenSearchServiceClient::PurchaseReservedInstanceOffering(const PurchaseReservedInstanceOfferingRequest& request) const
{
  AWS_OPERATION_GUARD(PurchaseReservedInstanceOffering);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseReservedInstanceOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PurchaseReservedInstanceOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PurchaseReservedInstanceOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PurchaseReservedInstanceOffering",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PurchaseReservedInstanceOfferingOutcome>(
    [&]()-> PurchaseReservedInstanceOfferingOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/purchaseReservedInstanceOffering");
      return PurchaseReservedInstanceOfferingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectInboundConnectionOutcome OpenSearchServiceClient::RejectInboundConnection(const RejectInboundConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(RejectInboundConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectInboundConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInboundConnection", "Required field: ConnectionId, is not set");
    return RejectInboundConnectionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RejectInboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RejectInboundConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RejectInboundConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RejectInboundConnectionOutcome>(
    [&]()-> RejectInboundConnectionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/cc/inboundConnection/");
      endpointOverrides.AddPathSegment(request.GetConnectionId());
      endpointOverrides.AddPathSegment("/reject");
      return RejectInboundConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveTagsOutcome OpenSearchServiceClient::RemoveTags(const RemoveTagsRequest& request) const
{
  AWS_OPERATION_GUARD(RemoveTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RemoveTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveTags",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveTagsOutcome>(
    [&]()-> RemoveTagsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/tags-removal");
      return RemoveTagsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RevokeVpcEndpointAccessOutcome OpenSearchServiceClient::RevokeVpcEndpointAccess(const RevokeVpcEndpointAccessRequest& request) const
{
  AWS_OPERATION_GUARD(RevokeVpcEndpointAccess);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeVpcEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeVpcEndpointAccess", "Required field: DomainName, is not set");
    return RevokeVpcEndpointAccessOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RevokeVpcEndpointAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RevokeVpcEndpointAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RevokeVpcEndpointAccess",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RevokeVpcEndpointAccessOutcome>(
    [&]()-> RevokeVpcEndpointAccessOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/revokeVpcEndpointAccess");
      return RevokeVpcEndpointAccessOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDomainMaintenanceOutcome OpenSearchServiceClient::StartDomainMaintenance(const StartDomainMaintenanceRequest& request) const
{
  AWS_OPERATION_GUARD(StartDomainMaintenance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDomainMaintenance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDomainMaintenance", "Required field: DomainName, is not set");
    return StartDomainMaintenanceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartDomainMaintenance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDomainMaintenance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDomainMaintenance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDomainMaintenanceOutcome>(
    [&]()-> StartDomainMaintenanceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/domainMaintenance");
      return StartDomainMaintenanceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartServiceSoftwareUpdateOutcome OpenSearchServiceClient::StartServiceSoftwareUpdate(const StartServiceSoftwareUpdateRequest& request) const
{
  AWS_OPERATION_GUARD(StartServiceSoftwareUpdate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartServiceSoftwareUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartServiceSoftwareUpdate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartServiceSoftwareUpdate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartServiceSoftwareUpdate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartServiceSoftwareUpdateOutcome>(
    [&]()-> StartServiceSoftwareUpdateOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/serviceSoftwareUpdate/start");
      return StartServiceSoftwareUpdateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateApplicationOutcome OpenSearchServiceClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: Id, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateApplicationOutcome>(
    [&]()-> UpdateApplicationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/application/");
      endpointOverrides.AddPathSegment(request.GetId());
      return UpdateApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataSourceOutcome OpenSearchServiceClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DomainName, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: Name, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSourceOutcome>(
    [&]()-> UpdateDataSourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/dataSource/");
      endpointOverrides.AddPathSegment(request.GetName());
      return UpdateDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDomainConfigOutcome OpenSearchServiceClient::UpdateDomainConfig(const UpdateDomainConfigRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDomainConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainConfig", "Required field: DomainName, is not set");
    return UpdateDomainConfigOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDomainConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDomainConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDomainConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDomainConfigOutcome>(
    [&]()-> UpdateDomainConfigOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/config");
      return UpdateDomainConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePackageOutcome OpenSearchServiceClient::UpdatePackage(const UpdatePackageRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdatePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePackageOutcome>(
    [&]()-> UpdatePackageOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/update");
      return UpdatePackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePackageScopeOutcome OpenSearchServiceClient::UpdatePackageScope(const UpdatePackageScopeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePackageScope);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePackageScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdatePackageScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePackageScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePackageScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePackageScopeOutcome>(
    [&]()-> UpdatePackageScopeOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/packages/updateScope");
      return UpdatePackageScopeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateScheduledActionOutcome OpenSearchServiceClient::UpdateScheduledAction(const UpdateScheduledActionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateScheduledAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateScheduledAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateScheduledAction", "Required field: DomainName, is not set");
    return UpdateScheduledActionOutcome(Aws::Client::AWSError<OpenSearchServiceErrors>(OpenSearchServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateScheduledAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateScheduledAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateScheduledAction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateScheduledActionOutcome>(
    [&]()-> UpdateScheduledActionOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/domain/");
      endpointOverrides.AddPathSegment(request.GetDomainName());
      endpointOverrides.AddPathSegment("/scheduledAction/update");
      return UpdateScheduledActionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateVpcEndpointOutcome OpenSearchServiceClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVpcEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateVpcEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateVpcEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateVpcEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateVpcEndpointOutcome>(
    [&]()-> UpdateVpcEndpointOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/vpcEndpoints/update");
      return UpdateVpcEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpgradeDomainOutcome OpenSearchServiceClient::UpgradeDomain(const UpgradeDomainRequest& request) const
{
  AWS_OPERATION_GUARD(UpgradeDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpgradeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpgradeDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpgradeDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpgradeDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpgradeDomainOutcome>(
    [&]()-> UpgradeDomainOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/2021-01-01/opensearch/upgradeDomain");
      return UpgradeDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


