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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelSolNetworkOperationOutcome(result.GetResultWithOwnership())
                            : CancelSolNetworkOperationOutcome(std::move(result.GetError()));
}

CreateSolFunctionPackageOutcome TnbClient::CreateSolFunctionPackage(const CreateSolFunctionPackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSolFunctionPackageOutcome(result.GetResultWithOwnership())
                            : CreateSolFunctionPackageOutcome(std::move(result.GetError()));
}

CreateSolNetworkInstanceOutcome TnbClient::CreateSolNetworkInstance(const CreateSolNetworkInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSolNetworkInstanceOutcome(result.GetResultWithOwnership())
                            : CreateSolNetworkInstanceOutcome(std::move(result.GetError()));
}

CreateSolNetworkPackageOutcome TnbClient::CreateSolNetworkPackage(const CreateSolNetworkPackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSolNetworkPackageOutcome(result.GetResultWithOwnership())
                            : CreateSolNetworkPackageOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSolFunctionPackageOutcome(result.GetResultWithOwnership())
                            : DeleteSolFunctionPackageOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSolNetworkInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteSolNetworkInstanceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSolNetworkPackageOutcome(result.GetResultWithOwnership())
                            : DeleteSolNetworkPackageOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSolFunctionInstanceOutcome(result.GetResultWithOwnership())
                            : GetSolFunctionInstanceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSolFunctionPackageOutcome(result.GetResultWithOwnership())
                            : GetSolFunctionPackageOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetSolFunctionPackageContentOutcome(result.GetResultWithOwnership())
                                  : GetSolFunctionPackageContentOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetSolFunctionPackageDescriptorOutcome(result.GetResultWithOwnership())
                                  : GetSolFunctionPackageDescriptorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSolNetworkInstanceOutcome(result.GetResultWithOwnership())
                            : GetSolNetworkInstanceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSolNetworkOperationOutcome(result.GetResultWithOwnership())
                            : GetSolNetworkOperationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSolNetworkPackageOutcome(result.GetResultWithOwnership())
                            : GetSolNetworkPackageOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetSolNetworkPackageContentOutcome(result.GetResultWithOwnership())
                                  : GetSolNetworkPackageContentOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetSolNetworkPackageDescriptorOutcome(result.GetResultWithOwnership())
                                  : GetSolNetworkPackageDescriptorOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InstantiateSolNetworkInstanceOutcome(result.GetResultWithOwnership())
                            : InstantiateSolNetworkInstanceOutcome(std::move(result.GetError()));
}

ListSolFunctionInstancesOutcome TnbClient::ListSolFunctionInstances(const ListSolFunctionInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnflcm/v1/vnf_instances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSolFunctionInstancesOutcome(result.GetResultWithOwnership())
                            : ListSolFunctionInstancesOutcome(std::move(result.GetError()));
}

ListSolFunctionPackagesOutcome TnbClient::ListSolFunctionPackages(const ListSolFunctionPackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/vnfpkgm/v1/vnf_packages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSolFunctionPackagesOutcome(result.GetResultWithOwnership())
                            : ListSolFunctionPackagesOutcome(std::move(result.GetError()));
}

ListSolNetworkInstancesOutcome TnbClient::ListSolNetworkInstances(const ListSolNetworkInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_instances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSolNetworkInstancesOutcome(result.GetResultWithOwnership())
                            : ListSolNetworkInstancesOutcome(std::move(result.GetError()));
}

ListSolNetworkOperationsOutcome TnbClient::ListSolNetworkOperations(const ListSolNetworkOperationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nslcm/v1/ns_lcm_op_occs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSolNetworkOperationsOutcome(result.GetResultWithOwnership())
                            : ListSolNetworkOperationsOutcome(std::move(result.GetError()));
}

ListSolNetworkPackagesOutcome TnbClient::ListSolNetworkPackages(const ListSolNetworkPackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sol/nsd/v1/ns_descriptors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSolNetworkPackagesOutcome(result.GetResultWithOwnership())
                            : ListSolNetworkPackagesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutSolFunctionPackageContentOutcome(result.GetResultWithOwnership())
                            : PutSolFunctionPackageContentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutSolNetworkPackageContentOutcome(result.GetResultWithOwnership())
                            : PutSolNetworkPackageContentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateSolNetworkInstanceOutcome(result.GetResultWithOwnership())
                            : TerminateSolNetworkInstanceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSolFunctionPackageOutcome(result.GetResultWithOwnership())
                            : UpdateSolFunctionPackageOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSolNetworkInstanceOutcome(result.GetResultWithOwnership())
                            : UpdateSolNetworkInstanceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSolNetworkPackageOutcome(result.GetResultWithOwnership())
                            : UpdateSolNetworkPackageOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? ValidateSolFunctionPackageContentOutcome(result.GetResultWithOwnership())
                            : ValidateSolFunctionPackageContentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? ValidateSolNetworkPackageContentOutcome(result.GetResultWithOwnership())
                            : ValidateSolNetworkPackageContentOutcome(std::move(result.GetError()));
}
