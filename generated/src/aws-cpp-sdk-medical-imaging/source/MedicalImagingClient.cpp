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
#include <aws/medical-imaging/MedicalImagingClient.h>
#include <aws/medical-imaging/MedicalImagingEndpointProvider.h>
#include <aws/medical-imaging/MedicalImagingErrorMarshaller.h>
#include <aws/medical-imaging/model/CopyImageSetRequest.h>
#include <aws/medical-imaging/model/CreateDatastoreRequest.h>
#include <aws/medical-imaging/model/DeleteDatastoreRequest.h>
#include <aws/medical-imaging/model/DeleteImageSetRequest.h>
#include <aws/medical-imaging/model/GetDICOMImportJobRequest.h>
#include <aws/medical-imaging/model/GetDatastoreRequest.h>
#include <aws/medical-imaging/model/GetImageFrameRequest.h>
#include <aws/medical-imaging/model/GetImageSetMetadataRequest.h>
#include <aws/medical-imaging/model/GetImageSetRequest.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsRequest.h>
#include <aws/medical-imaging/model/ListDatastoresRequest.h>
#include <aws/medical-imaging/model/ListImageSetVersionsRequest.h>
#include <aws/medical-imaging/model/ListTagsForResourceRequest.h>
#include <aws/medical-imaging/model/SearchImageSetsRequest.h>
#include <aws/medical-imaging/model/StartDICOMImportJobRequest.h>
#include <aws/medical-imaging/model/TagResourceRequest.h>
#include <aws/medical-imaging/model/UntagResourceRequest.h>
#include <aws/medical-imaging/model/UpdateImageSetMetadataRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MedicalImaging;
using namespace Aws::MedicalImaging::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MedicalImaging {
const char SERVICE_NAME[] = "medical-imaging";
const char ALLOCATION_TAG[] = "MedicalImagingClient";
}  // namespace MedicalImaging
}  // namespace Aws
const char* MedicalImagingClient::GetServiceName() { return SERVICE_NAME; }
const char* MedicalImagingClient::GetAllocationTag() { return ALLOCATION_TAG; }

MedicalImagingClient::MedicalImagingClient(const MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration,
                                           std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MedicalImagingClient::MedicalImagingClient(const AWSCredentials& credentials,
                                           std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider,
                                           const MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MedicalImagingClient::MedicalImagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider,
                                           const MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MedicalImagingClient::MedicalImagingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MedicalImagingClient::MedicalImagingClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MedicalImagingClient::MedicalImagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MedicalImagingClient::~MedicalImagingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MedicalImagingEndpointProviderBase>& MedicalImagingClient::accessEndpointProvider() { return m_endpointProvider; }

void MedicalImagingClient::init(const MedicalImaging::MedicalImagingClientConfiguration& config) {
  AWSClient::SetServiceClientName("Medical Imaging");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "medical-imaging");
}

void MedicalImagingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MedicalImagingClient::InvokeOperationOutcome MedicalImagingClient::InvokeServiceOperation(
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

CopyImageSetOutcome MedicalImagingClient::CopyImageSet(const CopyImageSetRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyImageSet", "Required field: DatastoreId, is not set");
    return CopyImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DatastoreId]", false));
  }
  if (!request.SourceImageSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyImageSet", "Required field: SourceImageSetId, is not set");
    return CopyImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SourceImageSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/imageSet/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceImageSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/copyImageSet");
  };

  return CopyImageSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatastoreOutcome MedicalImagingClient::CreateDatastore(const CreateDatastoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore");
  };

  return CreateDatastoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatastoreOutcome MedicalImagingClient::DeleteDatastore(const DeleteDatastoreRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDatastore", "Required field: DatastoreId, is not set");
    return DeleteDatastoreOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DatastoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
  };

  return DeleteDatastoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteImageSetOutcome MedicalImagingClient::DeleteImageSet(const DeleteImageSetRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImageSet", "Required field: DatastoreId, is not set");
    return DeleteImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImageSet", "Required field: ImageSetId, is not set");
    return DeleteImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ImageSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/imageSet/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteImageSet");
  };

  return DeleteImageSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDICOMImportJobOutcome MedicalImagingClient::GetDICOMImportJob(const GetDICOMImportJobRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDICOMImportJob", "Required field: DatastoreId, is not set");
    return GetDICOMImportJobOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDICOMImportJob", "Required field: JobId, is not set");
    return GetDICOMImportJobOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getDICOMImportJob/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/job/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetDICOMImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDatastoreOutcome MedicalImagingClient::GetDatastore(const GetDatastoreRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDatastore", "Required field: DatastoreId, is not set");
    return GetDatastoreOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DatastoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
  };

  return GetDatastoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImageFrameOutcome MedicalImagingClient::GetImageFrame(const GetImageFrameRequest& request) const {
  AWS_OPERATION_GUARD(GetImageFrame);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImageFrame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImageFrame", "Required field: DatastoreId, is not set");
    return GetImageFrameOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImageFrame", "Required field: ImageSetId, is not set");
    return GetImageFrameOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ImageSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetImageFrame, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetImageFrame, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetImageFrame",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetImageFrameOutcome>(
      [&]() -> GetImageFrameOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImageFrame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("runtime-");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetImageFrameOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/imageSet/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageSetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/getImageFrame");
        return GetImageFrameOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetImageSetOutcome MedicalImagingClient::GetImageSet(const GetImageSetRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImageSet", "Required field: DatastoreId, is not set");
    return GetImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImageSet", "Required field: ImageSetId, is not set");
    return GetImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ImageSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/imageSet/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/getImageSet");
  };

  return GetImageSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetImageSetMetadataOutcome MedicalImagingClient::GetImageSetMetadata(const GetImageSetMetadataRequest& request) const {
  AWS_OPERATION_GUARD(GetImageSetMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImageSetMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImageSetMetadata", "Required field: DatastoreId, is not set");
    return GetImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImageSetMetadata", "Required field: ImageSetId, is not set");
    return GetImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetImageSetMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetImageSetMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetImageSetMetadata",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetImageSetMetadataOutcome>(
      [&]() -> GetImageSetMetadataOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImageSetMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("runtime-");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetImageSetMetadataOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/imageSet/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageSetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/getImageSetMetadata");
        return GetImageSetMetadataOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDICOMImportJobsOutcome MedicalImagingClient::ListDICOMImportJobs(const ListDICOMImportJobsRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDICOMImportJobs", "Required field: DatastoreId, is not set");
    return ListDICOMImportJobsOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listDICOMImportJobs/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
  };

  return ListDICOMImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDatastoresOutcome MedicalImagingClient::ListDatastores(const ListDatastoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore");
  };

  return ListDatastoresOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListImageSetVersionsOutcome MedicalImagingClient::ListImageSetVersions(const ListImageSetVersionsRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListImageSetVersions", "Required field: DatastoreId, is not set");
    return ListImageSetVersionsOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListImageSetVersions", "Required field: ImageSetId, is not set");
    return ListImageSetVersionsOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/imageSet/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listImageSetVersions");
  };

  return ListImageSetVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome MedicalImagingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

SearchImageSetsOutcome MedicalImagingClient::SearchImageSets(const SearchImageSetsRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchImageSets", "Required field: DatastoreId, is not set");
    return SearchImageSetsOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DatastoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/searchImageSets");
  };

  return SearchImageSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDICOMImportJobOutcome MedicalImagingClient::StartDICOMImportJob(const StartDICOMImportJobRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDICOMImportJob", "Required field: DatastoreId, is not set");
    return StartDICOMImportJobOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/startDICOMImportJob/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
  };

  return StartDICOMImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MedicalImagingClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MedicalImagingClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateImageSetMetadataOutcome MedicalImagingClient::UpdateImageSetMetadata(const UpdateImageSetMetadataRequest& request) const {
  if (!request.DatastoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateImageSetMetadata", "Required field: DatastoreId, is not set");
    return UpdateImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateImageSetMetadata", "Required field: ImageSetId, is not set");
    return UpdateImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }
  if (!request.LatestVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateImageSetMetadata", "Required field: LatestVersionId, is not set");
    return UpdateImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(
        MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LatestVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datastore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/imageSet/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImageSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateImageSetMetadata");
  };

  return UpdateImageSetMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
