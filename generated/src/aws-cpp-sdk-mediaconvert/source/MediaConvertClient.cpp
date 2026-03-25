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
#include <aws/mediaconvert/MediaConvertClient.h>
#include <aws/mediaconvert/MediaConvertEndpointProvider.h>
#include <aws/mediaconvert/MediaConvertErrorMarshaller.h>
#include <aws/mediaconvert/model/AssociateCertificateRequest.h>
#include <aws/mediaconvert/model/CancelJobRequest.h>
#include <aws/mediaconvert/model/CreateJobRequest.h>
#include <aws/mediaconvert/model/CreateJobTemplateRequest.h>
#include <aws/mediaconvert/model/CreatePresetRequest.h>
#include <aws/mediaconvert/model/CreateQueueRequest.h>
#include <aws/mediaconvert/model/CreateResourceShareRequest.h>
#include <aws/mediaconvert/model/DeleteJobTemplateRequest.h>
#include <aws/mediaconvert/model/DeletePolicyRequest.h>
#include <aws/mediaconvert/model/DeletePresetRequest.h>
#include <aws/mediaconvert/model/DeleteQueueRequest.h>
#include <aws/mediaconvert/model/DisassociateCertificateRequest.h>
#include <aws/mediaconvert/model/GetJobRequest.h>
#include <aws/mediaconvert/model/GetJobTemplateRequest.h>
#include <aws/mediaconvert/model/GetJobsQueryResultsRequest.h>
#include <aws/mediaconvert/model/GetPolicyRequest.h>
#include <aws/mediaconvert/model/GetPresetRequest.h>
#include <aws/mediaconvert/model/GetQueueRequest.h>
#include <aws/mediaconvert/model/ListJobTemplatesRequest.h>
#include <aws/mediaconvert/model/ListJobsRequest.h>
#include <aws/mediaconvert/model/ListPresetsRequest.h>
#include <aws/mediaconvert/model/ListQueuesRequest.h>
#include <aws/mediaconvert/model/ListTagsForResourceRequest.h>
#include <aws/mediaconvert/model/ListVersionsRequest.h>
#include <aws/mediaconvert/model/ProbeRequest.h>
#include <aws/mediaconvert/model/PutPolicyRequest.h>
#include <aws/mediaconvert/model/SearchJobsRequest.h>
#include <aws/mediaconvert/model/StartJobsQueryRequest.h>
#include <aws/mediaconvert/model/TagResourceRequest.h>
#include <aws/mediaconvert/model/UntagResourceRequest.h>
#include <aws/mediaconvert/model/UpdateJobTemplateRequest.h>
#include <aws/mediaconvert/model/UpdatePresetRequest.h>
#include <aws/mediaconvert/model/UpdateQueueRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaConvert;
using namespace Aws::MediaConvert::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MediaConvert {
const char SERVICE_NAME[] = "mediaconvert";
const char ALLOCATION_TAG[] = "MediaConvertClient";
}  // namespace MediaConvert
}  // namespace Aws
const char* MediaConvertClient::GetServiceName() { return SERVICE_NAME; }
const char* MediaConvertClient::GetAllocationTag() { return ALLOCATION_TAG; }

MediaConvertClient::MediaConvertClient(const MediaConvert::MediaConvertClientConfiguration& clientConfiguration,
                                       std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const AWSCredentials& credentials,
                                       std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider,
                                       const MediaConvert::MediaConvertClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider,
                                       const MediaConvert::MediaConvertClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MediaConvertClient::MediaConvertClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MediaConvertClient::~MediaConvertClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MediaConvertEndpointProviderBase>& MediaConvertClient::accessEndpointProvider() { return m_endpointProvider; }

void MediaConvertClient::init(const MediaConvert::MediaConvertClientConfiguration& config) {
  AWSClient::SetServiceClientName("MediaConvert");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mediaconvert");
}

void MediaConvertClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MediaConvertClient::InvokeOperationOutcome MediaConvertClient::InvokeServiceOperation(
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

AssociateCertificateOutcome MediaConvertClient::AssociateCertificate(const AssociateCertificateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/certificates");
  };

  return AssociateCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelJobOutcome MediaConvertClient::CancelJob(const CancelJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: Id, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return CancelJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CreateJobOutcome MediaConvertClient::CreateJob(const CreateJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobs");
  };

  return CreateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateJobTemplateOutcome MediaConvertClient::CreateJobTemplate(const CreateJobTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates");
  };

  return CreateJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePresetOutcome MediaConvertClient::CreatePreset(const CreatePresetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets");
  };

  return CreatePresetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateQueueOutcome MediaConvertClient::CreateQueue(const CreateQueueRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues");
  };

  return CreateQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceShareOutcome MediaConvertClient::CreateResourceShare(const CreateResourceShareRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/resourceShares");
  };

  return CreateResourceShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteJobTemplateOutcome MediaConvertClient::DeleteJobTemplate(const DeleteJobTemplateRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJobTemplate", "Required field: Name, is not set");
    return DeleteJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePolicyOutcome MediaConvertClient::DeletePolicy(const DeletePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/policy");
  };

  return DeletePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePresetOutcome MediaConvertClient::DeletePreset(const DeletePresetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePreset", "Required field: Name, is not set");
    return DeletePresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeletePresetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteQueueOutcome MediaConvertClient::DeleteQueue(const DeleteQueueRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: Name, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateCertificateOutcome MediaConvertClient::DisassociateCertificate(const DisassociateCertificateRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateCertificate", "Required field: Arn, is not set");
    return DisassociateCertificateOutcome(Aws::Client::AWSError<MediaConvertErrors>(
        MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/certificates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DisassociateCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetJobOutcome MediaConvertClient::GetJob(const GetJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: Id, is not set");
    return GetJobOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJobTemplateOutcome MediaConvertClient::GetJobTemplate(const GetJobTemplateRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobTemplate", "Required field: Name, is not set");
    return GetJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJobsQueryResultsOutcome MediaConvertClient::GetJobsQueryResults(const GetJobsQueryResultsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobsQueryResults", "Required field: Id, is not set");
    return GetJobsQueryResultsOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobsQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetJobsQueryResultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPolicyOutcome MediaConvertClient::GetPolicy(const GetPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/policy");
  };

  return GetPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPresetOutcome MediaConvertClient::GetPreset(const GetPresetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPreset", "Required field: Name, is not set");
    return GetPresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetPresetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetQueueOutcome MediaConvertClient::GetQueue(const GetQueueRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueue", "Required field: Name, is not set");
    return GetQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobTemplatesOutcome MediaConvertClient::ListJobTemplates(const ListJobTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates");
  };

  return ListJobTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobsOutcome MediaConvertClient::ListJobs(const ListJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobs");
  };

  return ListJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPresetsOutcome MediaConvertClient::ListPresets(const ListPresetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets");
  };

  return ListPresetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQueuesOutcome MediaConvertClient::ListQueues(const ListQueuesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues");
  };

  return ListQueuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome MediaConvertClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVersionsOutcome MediaConvertClient::ListVersions(const ListVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/versions");
  };

  return ListVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ProbeOutcome MediaConvertClient::Probe(const ProbeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/probe");
  };

  return ProbeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPolicyOutcome MediaConvertClient::PutPolicy(const PutPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/policy");
  };

  return PutPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SearchJobsOutcome MediaConvertClient::SearchJobs(const SearchJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/search");
  };

  return SearchJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartJobsQueryOutcome MediaConvertClient::StartJobsQuery(const StartJobsQueryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobsQueries");
  };

  return StartJobsQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MediaConvertClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/tags");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MediaConvertClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateJobTemplateOutcome MediaConvertClient::UpdateJobTemplate(const UpdateJobTemplateRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJobTemplate", "Required field: Name, is not set");
    return UpdateJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePresetOutcome MediaConvertClient::UpdatePreset(const UpdatePresetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePreset", "Required field: Name, is not set");
    return UpdatePresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdatePresetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateQueueOutcome MediaConvertClient::UpdateQueue(const UpdateQueueRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueue", "Required field: Name, is not set");
    return UpdateQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
