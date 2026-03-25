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
#include <aws/sagemaker-geospatial/SageMakerGeospatialClient.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialEndpointProvider.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialErrorMarshaller.h>
#include <aws/sagemaker-geospatial/model/DeleteEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/DeleteVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/ExportEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/ExportVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/GetEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/GetRasterDataCollectionRequest.h>
#include <aws/sagemaker-geospatial/model/GetTileRequest.h>
#include <aws/sagemaker-geospatial/model/GetVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/ListEarthObservationJobsRequest.h>
#include <aws/sagemaker-geospatial/model/ListRasterDataCollectionsRequest.h>
#include <aws/sagemaker-geospatial/model/ListTagsForResourceRequest.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsRequest.h>
#include <aws/sagemaker-geospatial/model/SearchRasterDataCollectionRequest.h>
#include <aws/sagemaker-geospatial/model/StartEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/StartVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/StopEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/StopVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/TagResourceRequest.h>
#include <aws/sagemaker-geospatial/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerGeospatial;
using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SageMakerGeospatial {
const char SERVICE_NAME[] = "sagemaker-geospatial";
const char ALLOCATION_TAG[] = "SageMakerGeospatialClient";
}  // namespace SageMakerGeospatial
}  // namespace Aws
const char* SageMakerGeospatialClient::GetServiceName() { return SERVICE_NAME; }
const char* SageMakerGeospatialClient::GetAllocationTag() { return ALLOCATION_TAG; }

SageMakerGeospatialClient::SageMakerGeospatialClient(const SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerGeospatialClient::SageMakerGeospatialClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider,
                                                     const SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerGeospatialClient::SageMakerGeospatialClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider,
                                                     const SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SageMakerGeospatialClient::SageMakerGeospatialClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerGeospatialClient::SageMakerGeospatialClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerGeospatialClient::SageMakerGeospatialClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SageMakerGeospatialClient::~SageMakerGeospatialClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SageMakerGeospatialEndpointProviderBase>& SageMakerGeospatialClient::accessEndpointProvider() { return m_endpointProvider; }

void SageMakerGeospatialClient::init(const SageMakerGeospatial::SageMakerGeospatialClientConfiguration& config) {
  AWSClient::SetServiceClientName("SageMaker Geospatial");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sagemaker-geospatial");
}

void SageMakerGeospatialClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SageMakerGeospatialClient::InvokeOperationOutcome SageMakerGeospatialClient::InvokeServiceOperation(
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

DeleteEarthObservationJobOutcome SageMakerGeospatialClient::DeleteEarthObservationJob(
    const DeleteEarthObservationJobRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEarthObservationJob", "Required field: Arn, is not set");
    return DeleteEarthObservationJobOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/earth-observation-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteEarthObservationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVectorEnrichmentJobOutcome SageMakerGeospatialClient::DeleteVectorEnrichmentJob(
    const DeleteVectorEnrichmentJobRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVectorEnrichmentJob", "Required field: Arn, is not set");
    return DeleteVectorEnrichmentJobOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vector-enrichment-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteVectorEnrichmentJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ExportEarthObservationJobOutcome SageMakerGeospatialClient::ExportEarthObservationJob(
    const ExportEarthObservationJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/export-earth-observation-job");
  };

  return ExportEarthObservationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportVectorEnrichmentJobOutcome SageMakerGeospatialClient::ExportVectorEnrichmentJob(
    const ExportVectorEnrichmentJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/export-vector-enrichment-jobs");
  };

  return ExportVectorEnrichmentJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEarthObservationJobOutcome SageMakerGeospatialClient::GetEarthObservationJob(const GetEarthObservationJobRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEarthObservationJob", "Required field: Arn, is not set");
    return GetEarthObservationJobOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/earth-observation-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return GetEarthObservationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRasterDataCollectionOutcome SageMakerGeospatialClient::GetRasterDataCollection(const GetRasterDataCollectionRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRasterDataCollection", "Required field: Arn, is not set");
    return GetRasterDataCollectionOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/raster-data-collection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return GetRasterDataCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTileOutcome SageMakerGeospatialClient::GetTile(const GetTileRequest& request) const {
  AWS_OPERATION_GUARD(GetTile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Arn, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER,
                                                                           "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.ImageAssetsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: ImageAssets, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageAssets]", false));
  }
  if (!request.TargetHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Target, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER,
                                                                           "MISSING_PARAMETER", "Missing required field [Target]", false));
  }
  if (!request.XHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: X, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER,
                                                                           "MISSING_PARAMETER", "Missing required field [X]", false));
  }
  if (!request.YHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Y, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER,
                                                                           "MISSING_PARAMETER", "Missing required field [Y]", false));
  }
  if (!request.ZHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Z, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER,
                                                                           "MISSING_PARAMETER", "Missing required field [Z]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTileOutcome>(
      [&]() -> GetTileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tile/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZ());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetX());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetY());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetTileOutcome(GetTileResult(result.GetResultWithOwnership())) : GetTileOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVectorEnrichmentJobOutcome SageMakerGeospatialClient::GetVectorEnrichmentJob(const GetVectorEnrichmentJobRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVectorEnrichmentJob", "Required field: Arn, is not set");
    return GetVectorEnrichmentJobOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vector-enrichment-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return GetVectorEnrichmentJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEarthObservationJobsOutcome SageMakerGeospatialClient::ListEarthObservationJobs(const ListEarthObservationJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-earth-observation-jobs");
  };

  return ListEarthObservationJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRasterDataCollectionsOutcome SageMakerGeospatialClient::ListRasterDataCollections(
    const ListRasterDataCollectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/raster-data-collections");
  };

  return ListRasterDataCollectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome SageMakerGeospatialClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVectorEnrichmentJobsOutcome SageMakerGeospatialClient::ListVectorEnrichmentJobs(const ListVectorEnrichmentJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-vector-enrichment-jobs");
  };

  return ListVectorEnrichmentJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchRasterDataCollectionOutcome SageMakerGeospatialClient::SearchRasterDataCollection(
    const SearchRasterDataCollectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-raster-data-collection");
  };

  return SearchRasterDataCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEarthObservationJobOutcome SageMakerGeospatialClient::StartEarthObservationJob(const StartEarthObservationJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/earth-observation-jobs");
  };

  return StartEarthObservationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartVectorEnrichmentJobOutcome SageMakerGeospatialClient::StartVectorEnrichmentJob(const StartVectorEnrichmentJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vector-enrichment-jobs");
  };

  return StartVectorEnrichmentJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopEarthObservationJobOutcome SageMakerGeospatialClient::StopEarthObservationJob(const StopEarthObservationJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/earth-observation-jobs/stop");
  };

  return StopEarthObservationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopVectorEnrichmentJobOutcome SageMakerGeospatialClient::StopVectorEnrichmentJob(const StopVectorEnrichmentJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vector-enrichment-jobs/stop");
  };

  return StopVectorEnrichmentJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SageMakerGeospatialClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UntagResourceOutcome SageMakerGeospatialClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(
        SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
