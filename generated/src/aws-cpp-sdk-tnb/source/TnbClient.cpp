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
#include <aws/tnb/TnbClient.h>
#include <aws/tnb/TnbEndpointProvider.h>
#include <aws/tnb/TnbErrorMarshaller.h>
#include <aws/tnb/model/CancelSolNetworkOperationRequest.h>
#include <aws/tnb/model/CreateSolFunctionPackageRequest.h>
#include <aws/tnb/model/CreateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/CreateSolNetworkPackageRequest.h>
#include <aws/tnb/model/DeleteSolFunctionPackageRequest.h>
#include <aws/tnb/model/DeleteSolNetworkInstanceRequest.h>
#include <aws/tnb/model/DeleteSolNetworkPackageRequest.h>
#include <aws/tnb/model/GetSolFunctionInstanceRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageDescriptorRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageRequest.h>
#include <aws/tnb/model/GetSolNetworkInstanceRequest.h>
#include <aws/tnb/model/GetSolNetworkOperationRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageContentRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageDescriptorRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageRequest.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::tnb;
using namespace Aws::tnb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace tnb {
const char SERVICE_NAME[] = "tnb";
const char ALLOCATION_TAG[] = "TnbClient";
}  // namespace tnb
}  // namespace Aws
const char* TnbClient::GetServiceName() { return SERVICE_NAME; }
const char* TnbClient::GetAllocationTag() { return ALLOCATION_TAG; }

TnbClient::TnbClient(const tnb::TnbClientConfiguration& clientConfiguration, std::shared_ptr<TnbEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TnbClient::TnbClient(const AWSCredentials& credentials, std::shared_ptr<TnbEndpointProviderBase> endpointProvider,
                     const tnb::TnbClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TnbClient::TnbClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<TnbEndpointProviderBase> endpointProvider, const tnb::TnbClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TnbClient::TnbClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TnbClient::TnbClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TnbClient::TnbClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TnbErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TnbEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TnbClient::~TnbClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TnbEndpointProviderBase>& TnbClient::accessEndpointProvider() { return m_endpointProvider; }

void TnbClient::init(const tnb::TnbClientConfiguration& config) {
  AWSClient::SetServiceClientName("tnb");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "tnb");
}

void TnbClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TnbClient::InvokeOperationOutcome TnbClient::InvokeServiceOperation(
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

CancelSolNetworkOperationOutcome TnbClient::CancelSolNetworkOperation(const CancelSolNetworkOperationRequest& request) const {
  if (!request.NsLcmOpOccIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSolNetworkOperation", "Required field: NsLcmOpOccId, is not set");
    return CancelSolNetworkOperationOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [NsLcmOpOccId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsLcmOpOccId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelSolNetworkOperationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSolFunctionPackageOutcome TnbClient::CreateSolFunctionPackage(const CreateSolFunctionPackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages");
  };

  return CreateSolFunctionPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSolNetworkInstanceOutcome TnbClient::CreateSolNetworkInstance(const CreateSolNetworkInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances");
  };

  return CreateSolNetworkInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSolNetworkPackageOutcome TnbClient::CreateSolNetworkPackage(const CreateSolNetworkPackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors");
  };

  return CreateSolNetworkPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSolFunctionPackageOutcome TnbClient::DeleteSolFunctionPackage(const DeleteSolFunctionPackageRequest& request) const {
  if (!request.VnfPkgIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return DeleteSolFunctionPackageOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  };

  return DeleteSolFunctionPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSolNetworkInstanceOutcome TnbClient::DeleteSolNetworkInstance(const DeleteSolNetworkInstanceRequest& request) const {
  if (!request.NsInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return DeleteSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NsInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
  };

  return DeleteSolNetworkInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSolNetworkPackageOutcome TnbClient::DeleteSolNetworkPackage(const DeleteSolNetworkPackageRequest& request) const {
  if (!request.NsdInfoIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return DeleteSolNetworkPackageOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  };

  return DeleteSolNetworkPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetSolFunctionInstanceOutcome TnbClient::GetSolFunctionInstance(const GetSolFunctionInstanceRequest& request) const {
  if (!request.VnfInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolFunctionInstance", "Required field: VnfInstanceId, is not set");
    return GetSolFunctionInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [VnfInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnflcm/v1/vnf_instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfInstanceId());
  };

  return GetSolFunctionInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSolFunctionPackageOutcome TnbClient::GetSolFunctionPackage(const GetSolFunctionPackageRequest& request) const {
  if (!request.VnfPkgIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  };

  return GetSolFunctionPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSolFunctionPackageContentOutcome TnbClient::GetSolFunctionPackageContent(const GetSolFunctionPackageContentRequest& request) const {
  AWS_OPERATION_GUARD(GetSolFunctionPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageContent", "Required field: Accept, is not set");
    return GetSolFunctionPackageContentOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.VnfPkgIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageContentOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSolFunctionPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolFunctionPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolFunctionPackageContent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolFunctionPackageContentOutcome>(
      [&]() -> GetSolFunctionPackageContentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolFunctionPackageContent, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/package_content");
        return GetSolFunctionPackageContentOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolFunctionPackageDescriptorOutcome TnbClient::GetSolFunctionPackageDescriptor(
    const GetSolFunctionPackageDescriptorRequest& request) const {
  AWS_OPERATION_GUARD(GetSolFunctionPackageDescriptor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolFunctionPackageDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageDescriptor", "Required field: Accept, is not set");
    return GetSolFunctionPackageDescriptorOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.VnfPkgIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolFunctionPackageDescriptor", "Required field: VnfPkgId, is not set");
    return GetSolFunctionPackageDescriptorOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSolFunctionPackageDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolFunctionPackageDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolFunctionPackageDescriptor",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolFunctionPackageDescriptorOutcome>(
      [&]() -> GetSolFunctionPackageDescriptorOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolFunctionPackageDescriptor, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/vnfd");
        return GetSolFunctionPackageDescriptorOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolNetworkInstanceOutcome TnbClient::GetSolNetworkInstance(const GetSolNetworkInstanceRequest& request) const {
  if (!request.NsInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return GetSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NsInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
  };

  return GetSolNetworkInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSolNetworkOperationOutcome TnbClient::GetSolNetworkOperation(const GetSolNetworkOperationRequest& request) const {
  if (!request.NsLcmOpOccIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolNetworkOperation", "Required field: NsLcmOpOccId, is not set");
    return GetSolNetworkOperationOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [NsLcmOpOccId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsLcmOpOccId());
  };

  return GetSolNetworkOperationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSolNetworkPackageOutcome TnbClient::GetSolNetworkPackage(const GetSolNetworkPackageRequest& request) const {
  if (!request.NsdInfoIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  };

  return GetSolNetworkPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSolNetworkPackageContentOutcome TnbClient::GetSolNetworkPackageContent(const GetSolNetworkPackageContentRequest& request) const {
  AWS_OPERATION_GUARD(GetSolNetworkPackageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkPackageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AcceptHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageContent", "Required field: Accept, is not set");
    return GetSolNetworkPackageContentOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  if (!request.NsdInfoIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageContentOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSolNetworkPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolNetworkPackageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolNetworkPackageContent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolNetworkPackageContentOutcome>(
      [&]() -> GetSolNetworkPackageContentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolNetworkPackageContent, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/nsd_content");
        return GetSolNetworkPackageContentOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSolNetworkPackageDescriptorOutcome TnbClient::GetSolNetworkPackageDescriptor(
    const GetSolNetworkPackageDescriptorRequest& request) const {
  AWS_OPERATION_GUARD(GetSolNetworkPackageDescriptor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolNetworkPackageDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NsdInfoIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSolNetworkPackageDescriptor", "Required field: NsdInfoId, is not set");
    return GetSolNetworkPackageDescriptorOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSolNetworkPackageDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSolNetworkPackageDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSolNetworkPackageDescriptor",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSolNetworkPackageDescriptorOutcome>(
      [&]() -> GetSolNetworkPackageDescriptorOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolNetworkPackageDescriptor, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/nsd");
        return GetSolNetworkPackageDescriptorOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InstantiateSolNetworkInstanceOutcome TnbClient::InstantiateSolNetworkInstance(const InstantiateSolNetworkInstanceRequest& request) const {
  if (!request.NsInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InstantiateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return InstantiateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [NsInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/instantiate");
  };

  return InstantiateSolNetworkInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSolFunctionInstancesOutcome TnbClient::ListSolFunctionInstances(const ListSolFunctionInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnflcm/v1/vnf_instances");
  };

  return ListSolFunctionInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSolFunctionPackagesOutcome TnbClient::ListSolFunctionPackages(const ListSolFunctionPackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages");
  };

  return ListSolFunctionPackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSolNetworkInstancesOutcome TnbClient::ListSolNetworkInstances(const ListSolNetworkInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances");
  };

  return ListSolNetworkInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSolNetworkOperationsOutcome TnbClient::ListSolNetworkOperations(const ListSolNetworkOperationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs");
  };

  return ListSolNetworkOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSolNetworkPackagesOutcome TnbClient::ListSolNetworkPackages(const ListSolNetworkPackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors");
  };

  return ListSolNetworkPackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome TnbClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutSolFunctionPackageContentOutcome TnbClient::PutSolFunctionPackageContent(const PutSolFunctionPackageContentRequest& request) const {
  if (!request.VnfPkgIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return PutSolFunctionPackageContentOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/package_content");
  };

  return PutSolFunctionPackageContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutSolNetworkPackageContentOutcome TnbClient::PutSolNetworkPackageContent(const PutSolNetworkPackageContentRequest& request) const {
  if (!request.NsdInfoIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return PutSolNetworkPackageContentOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nsd_content");
  };

  return PutSolNetworkPackageContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome TnbClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateSolNetworkInstanceOutcome TnbClient::TerminateSolNetworkInstance(const TerminateSolNetworkInstanceRequest& request) const {
  if (!request.NsInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TerminateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return TerminateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [NsInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/terminate");
  };

  return TerminateSolNetworkInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome TnbClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateSolFunctionPackageOutcome TnbClient::UpdateSolFunctionPackage(const UpdateSolFunctionPackageRequest& request) const {
  if (!request.VnfPkgIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSolFunctionPackage", "Required field: VnfPkgId, is not set");
    return UpdateSolFunctionPackageOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
  };

  return UpdateSolFunctionPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSolNetworkInstanceOutcome TnbClient::UpdateSolNetworkInstance(const UpdateSolNetworkInstanceRequest& request) const {
  if (!request.NsInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSolNetworkInstance", "Required field: NsInstanceId, is not set");
    return UpdateSolNetworkInstanceOutcome(Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NsInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update");
  };

  return UpdateSolNetworkInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSolNetworkPackageOutcome TnbClient::UpdateSolNetworkPackage(const UpdateSolNetworkPackageRequest& request) const {
  if (!request.NsdInfoIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSolNetworkPackage", "Required field: NsdInfoId, is not set");
    return UpdateSolNetworkPackageOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
  };

  return UpdateSolNetworkPackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

ValidateSolFunctionPackageContentOutcome TnbClient::ValidateSolFunctionPackageContent(
    const ValidateSolFunctionPackageContentRequest& request) const {
  if (!request.VnfPkgIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ValidateSolFunctionPackageContent", "Required field: VnfPkgId, is not set");
    return ValidateSolFunctionPackageContentOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VnfPkgId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVnfPkgId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/package_content/validate");
  };

  return ValidateSolFunctionPackageContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ValidateSolNetworkPackageContentOutcome TnbClient::ValidateSolNetworkPackageContent(
    const ValidateSolNetworkPackageContentRequest& request) const {
  if (!request.NsdInfoIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ValidateSolNetworkPackageContent", "Required field: NsdInfoId, is not set");
    return ValidateSolNetworkPackageContentOutcome(
        Aws::Client::AWSError<TnbErrors>(TnbErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NsdInfoId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNsdInfoId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nsd_content/validate");
  };

  return ValidateSolNetworkPackageContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
