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
#include <aws/mediapackage/MediaPackageClient.h>
#include <aws/mediapackage/MediaPackageEndpointProvider.h>
#include <aws/mediapackage/MediaPackageErrorMarshaller.h>
#include <aws/mediapackage/model/ConfigureLogsRequest.h>
#include <aws/mediapackage/model/CreateChannelRequest.h>
#include <aws/mediapackage/model/CreateHarvestJobRequest.h>
#include <aws/mediapackage/model/CreateOriginEndpointRequest.h>
#include <aws/mediapackage/model/DeleteChannelRequest.h>
#include <aws/mediapackage/model/DeleteOriginEndpointRequest.h>
#include <aws/mediapackage/model/DescribeChannelRequest.h>
#include <aws/mediapackage/model/DescribeHarvestJobRequest.h>
#include <aws/mediapackage/model/DescribeOriginEndpointRequest.h>
#include <aws/mediapackage/model/ListChannelsRequest.h>
#include <aws/mediapackage/model/ListHarvestJobsRequest.h>
#include <aws/mediapackage/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackage/model/ListTagsForResourceRequest.h>
#include <aws/mediapackage/model/RotateIngestEndpointCredentialsRequest.h>
#include <aws/mediapackage/model/TagResourceRequest.h>
#include <aws/mediapackage/model/UntagResourceRequest.h>
#include <aws/mediapackage/model/UpdateChannelRequest.h>
#include <aws/mediapackage/model/UpdateOriginEndpointRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaPackage;
using namespace Aws::MediaPackage::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MediaPackage {
const char SERVICE_NAME[] = "mediapackage";
const char ALLOCATION_TAG[] = "MediaPackageClient";
}  // namespace MediaPackage
}  // namespace Aws
const char* MediaPackageClient::GetServiceName() { return SERVICE_NAME; }
const char* MediaPackageClient::GetAllocationTag() { return ALLOCATION_TAG; }

MediaPackageClient::MediaPackageClient(const MediaPackage::MediaPackageClientConfiguration& clientConfiguration,
                                       std::shared_ptr<MediaPackageEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaPackageEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaPackageClient::MediaPackageClient(const AWSCredentials& credentials,
                                       std::shared_ptr<MediaPackageEndpointProviderBase> endpointProvider,
                                       const MediaPackage::MediaPackageClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaPackageEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaPackageClient::MediaPackageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MediaPackageEndpointProviderBase> endpointProvider,
                                       const MediaPackage::MediaPackageClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaPackageEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MediaPackageClient::MediaPackageClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaPackageEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaPackageClient::MediaPackageClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaPackageEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaPackageClient::MediaPackageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaPackageEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MediaPackageClient::~MediaPackageClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MediaPackageEndpointProviderBase>& MediaPackageClient::accessEndpointProvider() { return m_endpointProvider; }

void MediaPackageClient::init(const MediaPackage::MediaPackageClientConfiguration& config) {
  AWSClient::SetServiceClientName("MediaPackage");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mediapackage");
}

void MediaPackageClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MediaPackageClient::InvokeOperationOutcome MediaPackageClient::InvokeServiceOperation(
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

ConfigureLogsOutcome MediaPackageClient::ConfigureLogs(const ConfigureLogsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConfigureLogs", "Required field: Id, is not set");
    return ConfigureLogsOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configure_logs");
  };

  return ConfigureLogsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateChannelOutcome MediaPackageClient::CreateChannel(const CreateChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  return CreateChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHarvestJobOutcome MediaPackageClient::CreateHarvestJob(const CreateHarvestJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/harvest_jobs");
  };

  return CreateHarvestJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOriginEndpointOutcome MediaPackageClient::CreateOriginEndpoint(const CreateOriginEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/origin_endpoints");
  };

  return CreateOriginEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteChannelOutcome MediaPackageClient::DeleteChannel(const DeleteChannelRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: Id, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteOriginEndpointOutcome MediaPackageClient::DeleteOriginEndpoint(const DeleteOriginEndpointRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: Id, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/origin_endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteOriginEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeChannelOutcome MediaPackageClient::DescribeChannel(const DescribeChannelRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: Id, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeHarvestJobOutcome MediaPackageClient::DescribeHarvestJob(const DescribeHarvestJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeHarvestJob", "Required field: Id, is not set");
    return DescribeHarvestJobOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/harvest_jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeHarvestJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeOriginEndpointOutcome MediaPackageClient::DescribeOriginEndpoint(const DescribeOriginEndpointRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeOriginEndpoint", "Required field: Id, is not set");
    return DescribeOriginEndpointOutcome(Aws::Client::AWSError<MediaPackageErrors>(
        MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/origin_endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeOriginEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListChannelsOutcome MediaPackageClient::ListChannels(const ListChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  return ListChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListHarvestJobsOutcome MediaPackageClient::ListHarvestJobs(const ListHarvestJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/harvest_jobs");
  };

  return ListHarvestJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOriginEndpointsOutcome MediaPackageClient::ListOriginEndpoints(const ListOriginEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/origin_endpoints");
  };

  return ListOriginEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome MediaPackageClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RotateIngestEndpointCredentialsOutcome MediaPackageClient::RotateIngestEndpointCredentials(
    const RotateIngestEndpointCredentialsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RotateIngestEndpointCredentials", "Required field: Id, is not set");
    return RotateIngestEndpointCredentialsOutcome(Aws::Client::AWSError<MediaPackageErrors>(
        MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IngestEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RotateIngestEndpointCredentials", "Required field: IngestEndpointId, is not set");
    return RotateIngestEndpointCredentialsOutcome(Aws::Client::AWSError<MediaPackageErrors>(
        MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestEndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingest_endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestEndpointId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/credentials");
  };

  return RotateIngestEndpointCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome MediaPackageClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MediaPackageClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateChannelOutcome MediaPackageClient::UpdateChannel(const UpdateChannelRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: Id, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateOriginEndpointOutcome MediaPackageClient::UpdateOriginEndpoint(const UpdateOriginEndpointRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: Id, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/origin_endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateOriginEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
