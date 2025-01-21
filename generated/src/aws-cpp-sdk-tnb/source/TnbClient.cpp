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


#include <aws/tnb/TnbClient.h>
#include <aws/tnb/TnbErrorMarshaller.h>
#include <aws/tnb/TnbEndpointProvider.h>
#include <aws/tnb/model/CancelSolNetworkOperationRequest.h>
#include <aws/tnb/model/CreateSolFunctionPackageRequest.h>
#include <aws/tnb/model/CreateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/CreateSolNetworkPackageRequest.h>
#include <aws/tnb/model/DeleteSolFunctionPackageRequest.h>
#include <aws/tnb/model/DeleteSolNetworkInstanceRequest.h>
#include <aws/tnb/model/DeleteSolNetworkPackageRequest.h>
#include <aws/tnb/model/GetSolFunctionInstanceRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageDescriptorRequest.h>
#include <aws/tnb/model/GetSolNetworkInstanceRequest.h>
#include <aws/tnb/model/GetSolNetworkOperationRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageContentRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageDescriptorRequest.h>
#include <aws/tnb/model/InstantiateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/ListSolFunctionInstancesRequest.h>
#include <aws/tnb/model/ListSolFunctionPackagesRequest.h>
#include <aws/tnb/model/ListSolNetworkInstancesRequest.h>
#include <aws/tnb/model/ListSolNetworkOperationsRequest.h>
#include <aws/tnb/model/ListSolNetworkPackagesRequest.h>
#include <aws/tnb/model/ListTagsForResourceRequest.h>
#include <aws/tnb/model/PutSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/PutSolNetworkPackageContentRequest.h>
#include <aws/tnb/model/TagResourceRequest.h>
#include <aws/tnb/model/TerminateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/UntagResourceRequest.h>
#include <aws/tnb/model/UpdateSolFunctionPackageRequest.h>
#include <aws/tnb/model/UpdateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/UpdateSolNetworkPackageRequest.h>
#include <aws/tnb/model/ValidateSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/ValidateSolNetworkPackageContentRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::tnb;
using namespace Aws::tnb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace tnb
  {
    const char ALLOCATION_TAG[] = "TnbClient";
    const char SERVICE_NAME[] = "tnb";
  }
}
const char* TnbClient::GetServiceName() {return SERVICE_NAME;}
const char* TnbClient::GetAllocationTag() {return ALLOCATION_TAG;}

TnbClient::TnbClient(const tnb::TnbClientConfiguration& clientConfiguration,
                           std::shared_ptr<TnbEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "tnb",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

TnbClient::TnbClient(const AWSCredentials& credentials,
                           std::shared_ptr<TnbEndpointProviderBase> endpointProvider,
                           const tnb::TnbClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "tnb",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

TnbClient::TnbClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<TnbEndpointProviderBase> endpointProvider,
                           const tnb::TnbClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "tnb",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
TnbClient::TnbClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "tnb",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

TnbClient::TnbClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "tnb",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

TnbClient::TnbClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "tnb",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

TnbClient::~TnbClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<TnbEndpointProviderBase>& TnbClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TnbClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CancelSolNetworkOperationOutcome TnbClient::CancelSolNetworkOperation(const CancelSolNetworkOperationRequest& request) const
{
  AWS_OPERATION_GUARD(CancelSolNetworkOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSolNetworkOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsLcmOpOccIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelSolNetworkOperation", "Required field: NsLcmOpOccId, is not set");
    return CancelSolNetworkOperationOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsLcmOpOccId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelSolNetworkOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelSolNetworkOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelSolNetworkOperation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelSolNetworkOperationOutcome>(
    [&]()-> CancelSolNetworkOperationOutcome {
      return CancelSolNetworkOperationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs/");
      resolvedEndpoint.AddPathSegment(request.GetNsLcmOpOccId());
      resolvedEndpoint.AddPathSegments("/cancel");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSolFunctionPackageOutcome TnbClient::CreateSolFunctionPackage(const CreateSolFunctionPackageRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSolFunctionPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSolFunctionPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSolFunctionPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSolFunctionPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSolFunctionPackageOutcome>(
    [&]()-> CreateSolFunctionPackageOutcome {
      return CreateSolFunctionPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSolNetworkInstanceOutcome TnbClient::CreateSolNetworkInstance(const CreateSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSolNetworkInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSolNetworkInstanceOutcome>(
    [&]()-> CreateSolNetworkInstanceOutcome {
      return CreateSolNetworkInstanceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_instances");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSolNetworkPackageOutcome TnbClient::CreateSolNetworkPackage(const CreateSolNetworkPackageRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSolNetworkPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSolNetworkPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSolNetworkPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSolNetworkPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSolNetworkPackageOutcome>(
    [&]()-> CreateSolNetworkPackageOutcome {
      return CreateSolNetworkPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSolFunctionPackageOutcome TnbClient::DeleteSolFunctionPackage(const DeleteSolFunctionPackageRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSolFunctionPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return DeleteSolFunctionPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSolFunctionPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSolFunctionPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSolFunctionPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSolFunctionPackageOutcome>(
    [&]()-> DeleteSolFunctionPackageOutcome {
      return DeleteSolFunctionPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
      resolvedEndpoint.AddPathSegment(request.GetVnfPkgId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSolNetworkInstanceOutcome TnbClient::DeleteSolNetworkInstance(const DeleteSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return DeleteSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSolNetworkInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSolNetworkInstanceOutcome>(
    [&]()-> DeleteSolNetworkInstanceOutcome {
      return DeleteSolNetworkInstanceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_instances/");
      resolvedEndpoint.AddPathSegment(request.GetNsInstanceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSolNetworkPackageOutcome TnbClient::DeleteSolNetworkPackage(const DeleteSolNetworkPackageRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSolNetworkPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return DeleteSolNetworkPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSolNetworkPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSolNetworkPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSolNetworkPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSolNetworkPackageOutcome>(
    [&]()-> DeleteSolNetworkPackageOutcome {
      return DeleteSolNetworkPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors/");
      resolvedEndpoint.AddPathSegment(request.GetNsdInfoId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolFunctionInstanceOutcome TnbClient::GetSolFunctionInstance(const GetSolFunctionInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolFunctionInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionInstance", "Required field: VnfInstanceId, is not set");
    return GetSolFunctionInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfInstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolFunctionInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolFunctionInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolFunctionInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolFunctionInstanceOutcome>(
    [&]()-> GetSolFunctionInstanceOutcome {
      return GetSolFunctionInstanceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnflcm/v1/vnf_instances/");
      resolvedEndpoint.AddPathSegment(request.GetVnfInstanceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolFunctionPackageOutcome TnbClient::GetSolFunctionPackage(const GetSolFunctionPackageRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolFunctionPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolFunctionPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolFunctionPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolFunctionPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolFunctionPackageOutcome>(
    [&]()-> GetSolFunctionPackageOutcome {
      return GetSolFunctionPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
      resolvedEndpoint.AddPathSegment(request.GetVnfPkgId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolFunctionPackageContentOutcome TnbClient::GetSolFunctionPackageContent(const GetSolFunctionPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolFunctionPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageContent", "Required field: Accept, is not set");
    return GetSolFunctionPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolFunctionPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolFunctionPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolFunctionPackageContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolFunctionPackageContentOutcome>(
    [&]()-> GetSolFunctionPackageContentOutcome {
      return GetSolFunctionPackageContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
      resolvedEndpoint.AddPathSegment(request.GetVnfPkgId());
      resolvedEndpoint.AddPathSegments("/package_content");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolFunctionPackageDescriptorOutcome TnbClient::GetSolFunctionPackageDescriptor(const GetSolFunctionPackageDescriptorRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolFunctionPackageDescriptor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionPackageDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageDescriptor", "Required field: Accept, is not set");
    return GetSolFunctionPackageDescriptorOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageDescriptor", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageDescriptorOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolFunctionPackageDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolFunctionPackageDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolFunctionPackageDescriptor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolFunctionPackageDescriptorOutcome>(
    [&]()-> GetSolFunctionPackageDescriptorOutcome {
      return GetSolFunctionPackageDescriptorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
      resolvedEndpoint.AddPathSegment(request.GetVnfPkgId());
      resolvedEndpoint.AddPathSegments("/vnfd");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolNetworkInstanceOutcome TnbClient::GetSolNetworkInstance(const GetSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return GetSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolNetworkInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolNetworkInstanceOutcome>(
    [&]()-> GetSolNetworkInstanceOutcome {
      return GetSolNetworkInstanceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_instances/");
      resolvedEndpoint.AddPathSegment(request.GetNsInstanceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolNetworkOperationOutcome TnbClient::GetSolNetworkOperation(const GetSolNetworkOperationRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsLcmOpOccIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkOperation", "Required field: NsLcmOpOccId, is not set");
    return GetSolNetworkOperationOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsLcmOpOccId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolNetworkOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolNetworkOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolNetworkOperation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolNetworkOperationOutcome>(
    [&]()-> GetSolNetworkOperationOutcome {
      return GetSolNetworkOperationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs/");
      resolvedEndpoint.AddPathSegment(request.GetNsLcmOpOccId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolNetworkPackageOutcome TnbClient::GetSolNetworkPackage(const GetSolNetworkPackageRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolNetworkPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolNetworkPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolNetworkPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolNetworkPackageOutcome>(
    [&]()-> GetSolNetworkPackageOutcome {
      return GetSolNetworkPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors/");
      resolvedEndpoint.AddPathSegment(request.GetNsdInfoId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolNetworkPackageContentOutcome TnbClient::GetSolNetworkPackageContent(const GetSolNetworkPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageContent", "Required field: Accept, is not set");
    return GetSolNetworkPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolNetworkPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolNetworkPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolNetworkPackageContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolNetworkPackageContentOutcome>(
    [&]()-> GetSolNetworkPackageContentOutcome {
      return GetSolNetworkPackageContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors/");
      resolvedEndpoint.AddPathSegment(request.GetNsdInfoId());
      resolvedEndpoint.AddPathSegments("/nsd_content");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolNetworkPackageDescriptorOutcome TnbClient::GetSolNetworkPackageDescriptor(const GetSolNetworkPackageDescriptorRequest& request) const
{
  AWS_OPERATION_GUARD(GetSolNetworkPackageDescriptor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkPackageDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageDescriptor", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageDescriptorOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSolNetworkPackageDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolNetworkPackageDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolNetworkPackageDescriptor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolNetworkPackageDescriptorOutcome>(
    [&]()-> GetSolNetworkPackageDescriptorOutcome {
      return GetSolNetworkPackageDescriptorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors/");
      resolvedEndpoint.AddPathSegment(request.GetNsdInfoId());
      resolvedEndpoint.AddPathSegments("/nsd");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InstantiateSolNetworkInstanceOutcome TnbClient::InstantiateSolNetworkInstance(const InstantiateSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(InstantiateSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InstantiateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InstantiateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return InstantiateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InstantiateSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InstantiateSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InstantiateSolNetworkInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InstantiateSolNetworkInstanceOutcome>(
    [&]()-> InstantiateSolNetworkInstanceOutcome {
      return InstantiateSolNetworkInstanceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_instances/");
      resolvedEndpoint.AddPathSegment(request.GetNsInstanceId());
      resolvedEndpoint.AddPathSegments("/instantiate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSolFunctionInstancesOutcome TnbClient::ListSolFunctionInstances(const ListSolFunctionInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolFunctionInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolFunctionInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSolFunctionInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSolFunctionInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSolFunctionInstances",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSolFunctionInstancesOutcome>(
    [&]()-> ListSolFunctionInstancesOutcome {
      return ListSolFunctionInstancesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnflcm/v1/vnf_instances");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSolFunctionPackagesOutcome TnbClient::ListSolFunctionPackages(const ListSolFunctionPackagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolFunctionPackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolFunctionPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSolFunctionPackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSolFunctionPackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSolFunctionPackages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSolFunctionPackagesOutcome>(
    [&]()-> ListSolFunctionPackagesOutcome {
      return ListSolFunctionPackagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSolNetworkInstancesOutcome TnbClient::ListSolNetworkInstances(const ListSolNetworkInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolNetworkInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolNetworkInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSolNetworkInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSolNetworkInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSolNetworkInstances",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSolNetworkInstancesOutcome>(
    [&]()-> ListSolNetworkInstancesOutcome {
      return ListSolNetworkInstancesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_instances");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSolNetworkOperationsOutcome TnbClient::ListSolNetworkOperations(const ListSolNetworkOperationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolNetworkOperations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolNetworkOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSolNetworkOperations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSolNetworkOperations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSolNetworkOperations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSolNetworkOperationsOutcome>(
    [&]()-> ListSolNetworkOperationsOutcome {
      return ListSolNetworkOperationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSolNetworkPackagesOutcome TnbClient::ListSolNetworkPackages(const ListSolNetworkPackagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSolNetworkPackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolNetworkPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSolNetworkPackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSolNetworkPackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSolNetworkPackages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSolNetworkPackagesOutcome>(
    [&]()-> ListSolNetworkPackagesOutcome {
      return ListSolNetworkPackagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome TnbClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

PutSolFunctionPackageContentOutcome TnbClient::PutSolFunctionPackageContent(const PutSolFunctionPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(PutSolFunctionPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return PutSolFunctionPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutSolFunctionPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutSolFunctionPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutSolFunctionPackageContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutSolFunctionPackageContentOutcome>(
    [&]()-> PutSolFunctionPackageContentOutcome {
      return PutSolFunctionPackageContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
      resolvedEndpoint.AddPathSegment(request.GetVnfPkgId());
      resolvedEndpoint.AddPathSegments("/package_content");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutSolNetworkPackageContentOutcome TnbClient::PutSolNetworkPackageContent(const PutSolNetworkPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(PutSolNetworkPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return PutSolNetworkPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutSolNetworkPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutSolNetworkPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutSolNetworkPackageContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutSolNetworkPackageContentOutcome>(
    [&]()-> PutSolNetworkPackageContentOutcome {
      return PutSolNetworkPackageContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors/");
      resolvedEndpoint.AddPathSegment(request.GetNsdInfoId());
      resolvedEndpoint.AddPathSegments("/nsd_content");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome TnbClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

TerminateSolNetworkInstanceOutcome TnbClient::TerminateSolNetworkInstance(const TerminateSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(TerminateSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TerminateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return TerminateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TerminateSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TerminateSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TerminateSolNetworkInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TerminateSolNetworkInstanceOutcome>(
    [&]()-> TerminateSolNetworkInstanceOutcome {
      return TerminateSolNetworkInstanceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_instances/");
      resolvedEndpoint.AddPathSegment(request.GetNsInstanceId());
      resolvedEndpoint.AddPathSegments("/terminate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome TnbClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
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

UpdateSolFunctionPackageOutcome TnbClient::UpdateSolFunctionPackage(const UpdateSolFunctionPackageRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSolFunctionPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSolFunctionPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return UpdateSolFunctionPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSolFunctionPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSolFunctionPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSolFunctionPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSolFunctionPackageOutcome>(
    [&]()-> UpdateSolFunctionPackageOutcome {
      return UpdateSolFunctionPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
      resolvedEndpoint.AddPathSegment(request.GetVnfPkgId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSolNetworkInstanceOutcome TnbClient::UpdateSolNetworkInstance(const UpdateSolNetworkInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSolNetworkInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSolNetworkInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return UpdateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsInstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSolNetworkInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSolNetworkInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSolNetworkInstanceOutcome>(
    [&]()-> UpdateSolNetworkInstanceOutcome {
      return UpdateSolNetworkInstanceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nslcm/v1/ns_instances/");
      resolvedEndpoint.AddPathSegment(request.GetNsInstanceId());
      resolvedEndpoint.AddPathSegments("/update");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSolNetworkPackageOutcome TnbClient::UpdateSolNetworkPackage(const UpdateSolNetworkPackageRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSolNetworkPackage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSolNetworkPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return UpdateSolNetworkPackageOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSolNetworkPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSolNetworkPackage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSolNetworkPackage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSolNetworkPackageOutcome>(
    [&]()-> UpdateSolNetworkPackageOutcome {
      return UpdateSolNetworkPackageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors/");
      resolvedEndpoint.AddPathSegment(request.GetNsdInfoId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ValidateSolFunctionPackageContentOutcome TnbClient::ValidateSolFunctionPackageContent(const ValidateSolFunctionPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(ValidateSolFunctionPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VnfPkgIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ValidateSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return ValidateSolFunctionPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ValidateSolFunctionPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ValidateSolFunctionPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ValidateSolFunctionPackageContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ValidateSolFunctionPackageContentOutcome>(
    [&]()-> ValidateSolFunctionPackageContentOutcome {
      return ValidateSolFunctionPackageContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
      resolvedEndpoint.AddPathSegment(request.GetVnfPkgId());
      resolvedEndpoint.AddPathSegments("/package_content/validate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ValidateSolNetworkPackageContentOutcome TnbClient::ValidateSolNetworkPackageContent(const ValidateSolNetworkPackageContentRequest& request) const
{
  AWS_OPERATION_GUARD(ValidateSolNetworkPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ValidateSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return ValidateSolNetworkPackageContentOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ValidateSolNetworkPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ValidateSolNetworkPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ValidateSolNetworkPackageContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ValidateSolNetworkPackageContentOutcome>(
    [&]()-> ValidateSolNetworkPackageContentOutcome {
      return ValidateSolNetworkPackageContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/sol/nsd/v1/ns_descriptors/");
      resolvedEndpoint.AddPathSegment(request.GetNsdInfoId());
      resolvedEndpoint.AddPathSegments("/nsd_content/validate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


