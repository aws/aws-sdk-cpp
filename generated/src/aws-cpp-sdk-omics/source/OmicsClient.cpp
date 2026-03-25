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
#include <aws/omics/OmicsClient.h>
#include <aws/omics/OmicsEndpointProvider.h>
#include <aws/omics/OmicsErrorMarshaller.h>
#include <aws/omics/model/AbortMultipartReadSetUploadRequest.h>
#include <aws/omics/model/AcceptShareRequest.h>
#include <aws/omics/model/BatchDeleteReadSetRequest.h>
#include <aws/omics/model/CancelAnnotationImportJobRequest.h>
#include <aws/omics/model/CancelRunBatchRequest.h>
#include <aws/omics/model/CancelRunRequest.h>
#include <aws/omics/model/CancelVariantImportJobRequest.h>
#include <aws/omics/model/CompleteMultipartReadSetUploadRequest.h>
#include <aws/omics/model/CreateAnnotationStoreRequest.h>
#include <aws/omics/model/CreateAnnotationStoreVersionRequest.h>
#include <aws/omics/model/CreateMultipartReadSetUploadRequest.h>
#include <aws/omics/model/CreateReferenceStoreRequest.h>
#include <aws/omics/model/CreateRunCacheRequest.h>
#include <aws/omics/model/CreateRunGroupRequest.h>
#include <aws/omics/model/CreateSequenceStoreRequest.h>
#include <aws/omics/model/CreateShareRequest.h>
#include <aws/omics/model/CreateVariantStoreRequest.h>
#include <aws/omics/model/CreateWorkflowRequest.h>
#include <aws/omics/model/CreateWorkflowVersionRequest.h>
#include <aws/omics/model/DeleteAnnotationStoreRequest.h>
#include <aws/omics/model/DeleteAnnotationStoreVersionsRequest.h>
#include <aws/omics/model/DeleteBatchRequest.h>
#include <aws/omics/model/DeleteReferenceRequest.h>
#include <aws/omics/model/DeleteReferenceStoreRequest.h>
#include <aws/omics/model/DeleteRunBatchRequest.h>
#include <aws/omics/model/DeleteRunCacheRequest.h>
#include <aws/omics/model/DeleteRunGroupRequest.h>
#include <aws/omics/model/DeleteRunRequest.h>
#include <aws/omics/model/DeleteS3AccessPolicyRequest.h>
#include <aws/omics/model/DeleteSequenceStoreRequest.h>
#include <aws/omics/model/DeleteShareRequest.h>
#include <aws/omics/model/DeleteVariantStoreRequest.h>
#include <aws/omics/model/DeleteWorkflowRequest.h>
#include <aws/omics/model/DeleteWorkflowVersionRequest.h>
#include <aws/omics/model/GetAnnotationImportJobRequest.h>
#include <aws/omics/model/GetAnnotationStoreRequest.h>
#include <aws/omics/model/GetAnnotationStoreVersionRequest.h>
#include <aws/omics/model/GetBatchRequest.h>
#include <aws/omics/model/GetReadSetActivationJobRequest.h>
#include <aws/omics/model/GetReadSetExportJobRequest.h>
#include <aws/omics/model/GetReadSetImportJobRequest.h>
#include <aws/omics/model/GetReadSetMetadataRequest.h>
#include <aws/omics/model/GetReadSetRequest.h>
#include <aws/omics/model/GetReferenceImportJobRequest.h>
#include <aws/omics/model/GetReferenceMetadataRequest.h>
#include <aws/omics/model/GetReferenceRequest.h>
#include <aws/omics/model/GetReferenceStoreRequest.h>
#include <aws/omics/model/GetRunCacheRequest.h>
#include <aws/omics/model/GetRunGroupRequest.h>
#include <aws/omics/model/GetRunRequest.h>
#include <aws/omics/model/GetRunTaskRequest.h>
#include <aws/omics/model/GetS3AccessPolicyRequest.h>
#include <aws/omics/model/GetSequenceStoreRequest.h>
#include <aws/omics/model/GetShareRequest.h>
#include <aws/omics/model/GetVariantImportJobRequest.h>
#include <aws/omics/model/GetVariantStoreRequest.h>
#include <aws/omics/model/GetWorkflowRequest.h>
#include <aws/omics/model/GetWorkflowVersionRequest.h>
#include <aws/omics/model/ListAnnotationImportJobsRequest.h>
#include <aws/omics/model/ListAnnotationStoreVersionsRequest.h>
#include <aws/omics/model/ListAnnotationStoresRequest.h>
#include <aws/omics/model/ListBatchRequest.h>
#include <aws/omics/model/ListMultipartReadSetUploadsRequest.h>
#include <aws/omics/model/ListReadSetActivationJobsRequest.h>
#include <aws/omics/model/ListReadSetExportJobsRequest.h>
#include <aws/omics/model/ListReadSetImportJobsRequest.h>
#include <aws/omics/model/ListReadSetUploadPartsRequest.h>
#include <aws/omics/model/ListReadSetsRequest.h>
#include <aws/omics/model/ListReferenceImportJobsRequest.h>
#include <aws/omics/model/ListReferenceStoresRequest.h>
#include <aws/omics/model/ListReferencesRequest.h>
#include <aws/omics/model/ListRunCachesRequest.h>
#include <aws/omics/model/ListRunGroupsRequest.h>
#include <aws/omics/model/ListRunTasksRequest.h>
#include <aws/omics/model/ListRunsInBatchRequest.h>
#include <aws/omics/model/ListRunsRequest.h>
#include <aws/omics/model/ListSequenceStoresRequest.h>
#include <aws/omics/model/ListSharesRequest.h>
#include <aws/omics/model/ListTagsForResourceRequest.h>
#include <aws/omics/model/ListVariantImportJobsRequest.h>
#include <aws/omics/model/ListVariantStoresRequest.h>
#include <aws/omics/model/ListWorkflowVersionsRequest.h>
#include <aws/omics/model/ListWorkflowsRequest.h>
#include <aws/omics/model/PutS3AccessPolicyRequest.h>
#include <aws/omics/model/StartAnnotationImportJobRequest.h>
#include <aws/omics/model/StartReadSetActivationJobRequest.h>
#include <aws/omics/model/StartReadSetExportJobRequest.h>
#include <aws/omics/model/StartReadSetImportJobRequest.h>
#include <aws/omics/model/StartReferenceImportJobRequest.h>
#include <aws/omics/model/StartRunBatchRequest.h>
#include <aws/omics/model/StartRunRequest.h>
#include <aws/omics/model/StartVariantImportJobRequest.h>
#include <aws/omics/model/TagResourceRequest.h>
#include <aws/omics/model/UntagResourceRequest.h>
#include <aws/omics/model/UpdateAnnotationStoreRequest.h>
#include <aws/omics/model/UpdateAnnotationStoreVersionRequest.h>
#include <aws/omics/model/UpdateRunCacheRequest.h>
#include <aws/omics/model/UpdateRunGroupRequest.h>
#include <aws/omics/model/UpdateSequenceStoreRequest.h>
#include <aws/omics/model/UpdateVariantStoreRequest.h>
#include <aws/omics/model/UpdateWorkflowRequest.h>
#include <aws/omics/model/UpdateWorkflowVersionRequest.h>
#include <aws/omics/model/UploadReadSetPartRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Omics;
using namespace Aws::Omics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Omics {
const char SERVICE_NAME[] = "omics";
const char ALLOCATION_TAG[] = "OmicsClient";
}  // namespace Omics
}  // namespace Aws
const char* OmicsClient::GetServiceName() { return SERVICE_NAME; }
const char* OmicsClient::GetAllocationTag() { return ALLOCATION_TAG; }

OmicsClient::OmicsClient(const Omics::OmicsClientConfiguration& clientConfiguration,
                         std::shared_ptr<OmicsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OmicsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OmicsClient::OmicsClient(const AWSCredentials& credentials, std::shared_ptr<OmicsEndpointProviderBase> endpointProvider,
                         const Omics::OmicsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OmicsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OmicsClient::OmicsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<OmicsEndpointProviderBase> endpointProvider,
                         const Omics::OmicsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OmicsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OmicsClient::OmicsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OmicsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OmicsClient::OmicsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OmicsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OmicsClient::OmicsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OmicsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
OmicsClient::~OmicsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<OmicsEndpointProviderBase>& OmicsClient::accessEndpointProvider() { return m_endpointProvider; }

void OmicsClient::init(const Omics::OmicsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Omics");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "omics");
}

void OmicsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
OmicsClient::InvokeOperationOutcome OmicsClient::InvokeServiceOperation(
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

AbortMultipartReadSetUploadOutcome OmicsClient::AbortMultipartReadSetUpload(const AbortMultipartReadSetUploadRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortMultipartReadSetUpload", "Required field: SequenceStoreId, is not set");
    return AbortMultipartReadSetUploadOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SequenceStoreId]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortMultipartReadSetUpload", "Required field: UploadId, is not set");
    return AbortMultipartReadSetUploadOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/abort");
  };

  return AbortMultipartReadSetUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

AcceptShareOutcome OmicsClient::AcceptShare(const AcceptShareRequest& request) const {
  if (!request.ShareIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptShare", "Required field: ShareId, is not set");
    return AcceptShareOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/share/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  };

  return AcceptShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteReadSetOutcome OmicsClient::BatchDeleteReadSet(const BatchDeleteReadSetRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteReadSet", "Required field: SequenceStoreId, is not set");
    return BatchDeleteReadSetOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/readset/batch/delete");
  };

  return BatchDeleteReadSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelAnnotationImportJobOutcome OmicsClient::CancelAnnotationImportJob(const CancelAnnotationImportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelAnnotationImportJob", "Required field: JobId, is not set");
    return CancelAnnotationImportJobOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/annotation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return CancelAnnotationImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CancelRunOutcome OmicsClient::CancelRun(const CancelRunRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelRun", "Required field: Id, is not set");
    return CancelRunOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelRunBatchOutcome OmicsClient::CancelRunBatch(const CancelRunBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch/cancel");
  };

  return CancelRunBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelVariantImportJobOutcome OmicsClient::CancelVariantImportJob(const CancelVariantImportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelVariantImportJob", "Required field: JobId, is not set");
    return CancelVariantImportJobOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/variant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return CancelVariantImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CompleteMultipartReadSetUploadOutcome OmicsClient::CompleteMultipartReadSetUpload(
    const CompleteMultipartReadSetUploadRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteMultipartReadSetUpload", "Required field: SequenceStoreId, is not set");
    return CompleteMultipartReadSetUploadOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [SequenceStoreId]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteMultipartReadSetUpload", "Required field: UploadId, is not set");
    return CompleteMultipartReadSetUploadOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/complete");
  };

  return CompleteMultipartReadSetUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAnnotationStoreOutcome OmicsClient::CreateAnnotationStore(const CreateAnnotationStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore");
  };

  return CreateAnnotationStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAnnotationStoreVersionOutcome OmicsClient::CreateAnnotationStoreVersion(const CreateAnnotationStoreVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAnnotationStoreVersion", "Required field: Name, is not set");
    return CreateAnnotationStoreVersionOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  };

  return CreateAnnotationStoreVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMultipartReadSetUploadOutcome OmicsClient::CreateMultipartReadSetUpload(const CreateMultipartReadSetUploadRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMultipartReadSetUpload", "Required field: SequenceStoreId, is not set");
    return CreateMultipartReadSetUploadOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload");
  };

  return CreateMultipartReadSetUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReferenceStoreOutcome OmicsClient::CreateReferenceStore(const CreateReferenceStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore");
  };

  return CreateReferenceStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRunCacheOutcome OmicsClient::CreateRunCache(const CreateRunCacheRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runCache");
  };

  return CreateRunCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRunGroupOutcome OmicsClient::CreateRunGroup(const CreateRunGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runGroup");
  };

  return CreateRunGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSequenceStoreOutcome OmicsClient::CreateSequenceStore(const CreateSequenceStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore");
  };

  return CreateSequenceStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateShareOutcome OmicsClient::CreateShare(const CreateShareRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/share");
  };

  return CreateShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVariantStoreOutcome OmicsClient::CreateVariantStore(const CreateVariantStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/variantStore");
  };

  return CreateVariantStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkflowOutcome OmicsClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow");
  };

  return CreateWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkflowVersionOutcome OmicsClient::CreateWorkflowVersion(const CreateWorkflowVersionRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkflowVersion", "Required field: WorkflowId, is not set");
    return CreateWorkflowVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkflowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  };

  return CreateWorkflowVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAnnotationStoreOutcome OmicsClient::DeleteAnnotationStore(const DeleteAnnotationStoreRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnnotationStore", "Required field: Name, is not set");
    return DeleteAnnotationStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteAnnotationStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAnnotationStoreVersionsOutcome OmicsClient::DeleteAnnotationStoreVersions(const DeleteAnnotationStoreVersionsRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnnotationStoreVersions", "Required field: Name, is not set");
    return DeleteAnnotationStoreVersionsOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/delete");
  };

  return DeleteAnnotationStoreVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBatchOutcome OmicsClient::DeleteBatch(const DeleteBatchRequest& request) const {
  if (!request.BatchIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBatch", "Required field: BatchId, is not set");
    return DeleteBatchOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BatchId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBatchId());
  };

  return DeleteBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteReferenceOutcome OmicsClient::DeleteReference(const DeleteReferenceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReference", "Required field: Id, is not set");
    return DeleteReferenceOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ReferenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReference", "Required field: ReferenceStoreId, is not set");
    return DeleteReferenceOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ReferenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReferenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reference/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteReferenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteReferenceStoreOutcome OmicsClient::DeleteReferenceStore(const DeleteReferenceStoreRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReferenceStore", "Required field: Id, is not set");
    return DeleteReferenceStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteReferenceStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRunOutcome OmicsClient::DeleteRun(const DeleteRunRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRun", "Required field: Id, is not set");
    return DeleteRunOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRunBatchOutcome OmicsClient::DeleteRunBatch(const DeleteRunBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch/delete");
  };

  return DeleteRunBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRunCacheOutcome OmicsClient::DeleteRunCache(const DeleteRunCacheRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRunCache", "Required field: Id, is not set");
    return DeleteRunCacheOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runCache/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteRunCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRunGroupOutcome OmicsClient::DeleteRunGroup(const DeleteRunGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRunGroup", "Required field: Id, is not set");
    return DeleteRunGroupOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteRunGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteS3AccessPolicyOutcome OmicsClient::DeleteS3AccessPolicy(const DeleteS3AccessPolicyRequest& request) const {
  if (!request.S3AccessPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteS3AccessPolicy", "Required field: S3AccessPointArn, is not set");
    return DeleteS3AccessPolicyOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [S3AccessPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/s3accesspolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetS3AccessPointArn());
  };

  return DeleteS3AccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSequenceStoreOutcome OmicsClient::DeleteSequenceStore(const DeleteSequenceStoreRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSequenceStore", "Required field: Id, is not set");
    return DeleteSequenceStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteSequenceStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteShareOutcome OmicsClient::DeleteShare(const DeleteShareRequest& request) const {
  if (!request.ShareIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteShare", "Required field: ShareId, is not set");
    return DeleteShareOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/share/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  };

  return DeleteShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVariantStoreOutcome OmicsClient::DeleteVariantStore(const DeleteVariantStoreRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVariantStore", "Required field: Name, is not set");
    return DeleteVariantStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/variantStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteVariantStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkflowOutcome OmicsClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: Id, is not set");
    return DeleteWorkflowOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkflowVersionOutcome OmicsClient::DeleteWorkflowVersion(const DeleteWorkflowVersionRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowVersion", "Required field: WorkflowId, is not set");
    return DeleteWorkflowVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkflowId]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowVersion", "Required field: VersionName, is not set");
    return DeleteWorkflowVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  return DeleteWorkflowVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAnnotationImportJobOutcome OmicsClient::GetAnnotationImportJob(const GetAnnotationImportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnnotationImportJob", "Required field: JobId, is not set");
    return GetAnnotationImportJobOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/annotation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetAnnotationImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAnnotationStoreOutcome OmicsClient::GetAnnotationStore(const GetAnnotationStoreRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnnotationStore", "Required field: Name, is not set");
    return GetAnnotationStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetAnnotationStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAnnotationStoreVersionOutcome OmicsClient::GetAnnotationStoreVersion(const GetAnnotationStoreVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnnotationStoreVersion", "Required field: Name, is not set");
    return GetAnnotationStoreVersionOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnnotationStoreVersion", "Required field: VersionName, is not set");
    return GetAnnotationStoreVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  return GetAnnotationStoreVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBatchOutcome OmicsClient::GetBatch(const GetBatchRequest& request) const {
  if (!request.BatchIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBatch", "Required field: BatchId, is not set");
    return GetBatchOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BatchId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBatchId());
  };

  return GetBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReadSetOutcome OmicsClient::GetReadSet(const GetReadSetRequest& request) const {
  AWS_OPERATION_GUARD(GetReadSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReadSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSet", "Required field: Id, is not set");
    return GetReadSetOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSet", "Required field: SequenceStoreId, is not set");
    return GetReadSetOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [SequenceStoreId]", false));
  }
  if (!request.PartNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSet", "Required field: PartNumber, is not set");
    return GetReadSetOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [PartNumber]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetReadSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetReadSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetReadSet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetReadSetOutcome>(
      [&]() -> GetReadSetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReadSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("storage-");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetReadSetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/readset/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetReadSetOutcome(GetReadSetResult(result.GetResultWithOwnership()))
                                  : GetReadSetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetReadSetActivationJobOutcome OmicsClient::GetReadSetActivationJob(const GetReadSetActivationJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSetActivationJob", "Required field: Id, is not set");
    return GetReadSetActivationJobOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSetActivationJob", "Required field: SequenceStoreId, is not set");
    return GetReadSetActivationJobOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activationjob/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetReadSetActivationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReadSetExportJobOutcome OmicsClient::GetReadSetExportJob(const GetReadSetExportJobRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSetExportJob", "Required field: SequenceStoreId, is not set");
    return GetReadSetExportJobOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SequenceStoreId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSetExportJob", "Required field: Id, is not set");
    return GetReadSetExportJobOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/exportjob/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetReadSetExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReadSetImportJobOutcome OmicsClient::GetReadSetImportJob(const GetReadSetImportJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSetImportJob", "Required field: Id, is not set");
    return GetReadSetImportJobOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSetImportJob", "Required field: SequenceStoreId, is not set");
    return GetReadSetImportJobOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importjob/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetReadSetImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReadSetMetadataOutcome OmicsClient::GetReadSetMetadata(const GetReadSetMetadataRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSetMetadata", "Required field: Id, is not set");
    return GetReadSetMetadataOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadSetMetadata", "Required field: SequenceStoreId, is not set");
    return GetReadSetMetadataOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/readset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  };

  return GetReadSetMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReferenceOutcome OmicsClient::GetReference(const GetReferenceRequest& request) const {
  AWS_OPERATION_GUARD(GetReference);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReference", "Required field: Id, is not set");
    return GetReferenceOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ReferenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReference", "Required field: ReferenceStoreId, is not set");
    return GetReferenceOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ReferenceStoreId]", false));
  }
  if (!request.PartNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReference", "Required field: PartNumber, is not set");
    return GetReferenceOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [PartNumber]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetReference, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetReference, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetReference",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetReferenceOutcome>(
      [&]() -> GetReferenceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("storage-");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetReferenceOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReferenceStoreId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/reference/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetReferenceOutcome(GetReferenceResult(result.GetResultWithOwnership()))
                                  : GetReferenceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetReferenceImportJobOutcome OmicsClient::GetReferenceImportJob(const GetReferenceImportJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReferenceImportJob", "Required field: Id, is not set");
    return GetReferenceImportJobOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ReferenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReferenceImportJob", "Required field: ReferenceStoreId, is not set");
    return GetReferenceImportJobOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ReferenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReferenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importjob/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetReferenceImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReferenceMetadataOutcome OmicsClient::GetReferenceMetadata(const GetReferenceMetadataRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReferenceMetadata", "Required field: Id, is not set");
    return GetReferenceMetadataOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.ReferenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReferenceMetadata", "Required field: ReferenceStoreId, is not set");
    return GetReferenceMetadataOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ReferenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReferenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reference/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  };

  return GetReferenceMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReferenceStoreOutcome OmicsClient::GetReferenceStore(const GetReferenceStoreRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReferenceStore", "Required field: Id, is not set");
    return GetReferenceStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetReferenceStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRunOutcome OmicsClient::GetRun(const GetRunRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRun", "Required field: Id, is not set");
    return GetRunOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRunCacheOutcome OmicsClient::GetRunCache(const GetRunCacheRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRunCache", "Required field: Id, is not set");
    return GetRunCacheOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runCache/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetRunCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRunGroupOutcome OmicsClient::GetRunGroup(const GetRunGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRunGroup", "Required field: Id, is not set");
    return GetRunGroupOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetRunGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRunTaskOutcome OmicsClient::GetRunTask(const GetRunTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRunTask", "Required field: Id, is not set");
    return GetRunTaskOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRunTask", "Required field: TaskId, is not set");
    return GetRunTaskOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/task/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  return GetRunTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetS3AccessPolicyOutcome OmicsClient::GetS3AccessPolicy(const GetS3AccessPolicyRequest& request) const {
  if (!request.S3AccessPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetS3AccessPolicy", "Required field: S3AccessPointArn, is not set");
    return GetS3AccessPolicyOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [S3AccessPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/s3accesspolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetS3AccessPointArn());
  };

  return GetS3AccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSequenceStoreOutcome OmicsClient::GetSequenceStore(const GetSequenceStoreRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSequenceStore", "Required field: Id, is not set");
    return GetSequenceStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetSequenceStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetShareOutcome OmicsClient::GetShare(const GetShareRequest& request) const {
  if (!request.ShareIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetShare", "Required field: ShareId, is not set");
    return GetShareOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/share/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  };

  return GetShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVariantImportJobOutcome OmicsClient::GetVariantImportJob(const GetVariantImportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVariantImportJob", "Required field: JobId, is not set");
    return GetVariantImportJobOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/variant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetVariantImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVariantStoreOutcome OmicsClient::GetVariantStore(const GetVariantStoreRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVariantStore", "Required field: Name, is not set");
    return GetVariantStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/variantStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetVariantStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowOutcome OmicsClient::GetWorkflow(const GetWorkflowRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: Id, is not set");
    return GetWorkflowOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowVersionOutcome OmicsClient::GetWorkflowVersion(const GetWorkflowVersionRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowVersion", "Required field: WorkflowId, is not set");
    return GetWorkflowVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [WorkflowId]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowVersion", "Required field: VersionName, is not set");
    return GetWorkflowVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  return GetWorkflowVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAnnotationImportJobsOutcome OmicsClient::ListAnnotationImportJobs(const ListAnnotationImportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/annotations");
  };

  return ListAnnotationImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAnnotationStoreVersionsOutcome OmicsClient::ListAnnotationStoreVersions(const ListAnnotationStoreVersionsRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAnnotationStoreVersions", "Required field: Name, is not set");
    return ListAnnotationStoreVersionsOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListAnnotationStoreVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAnnotationStoresOutcome OmicsClient::ListAnnotationStores(const ListAnnotationStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStores");
  };

  return ListAnnotationStoresOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBatchOutcome OmicsClient::ListBatch(const ListBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch");
  };

  return ListBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMultipartReadSetUploadsOutcome OmicsClient::ListMultipartReadSetUploads(const ListMultipartReadSetUploadsRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMultipartReadSetUploads", "Required field: SequenceStoreId, is not set");
    return ListMultipartReadSetUploadsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/uploads");
  };

  return ListMultipartReadSetUploadsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReadSetActivationJobsOutcome OmicsClient::ListReadSetActivationJobs(const ListReadSetActivationJobsRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReadSetActivationJobs", "Required field: SequenceStoreId, is not set");
    return ListReadSetActivationJobsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activationjobs");
  };

  return ListReadSetActivationJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReadSetExportJobsOutcome OmicsClient::ListReadSetExportJobs(const ListReadSetExportJobsRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReadSetExportJobs", "Required field: SequenceStoreId, is not set");
    return ListReadSetExportJobsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/exportjobs");
  };

  return ListReadSetExportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReadSetImportJobsOutcome OmicsClient::ListReadSetImportJobs(const ListReadSetImportJobsRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReadSetImportJobs", "Required field: SequenceStoreId, is not set");
    return ListReadSetImportJobsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importjobs");
  };

  return ListReadSetImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReadSetUploadPartsOutcome OmicsClient::ListReadSetUploadParts(const ListReadSetUploadPartsRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReadSetUploadParts", "Required field: SequenceStoreId, is not set");
    return ListReadSetUploadPartsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SequenceStoreId]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReadSetUploadParts", "Required field: UploadId, is not set");
    return ListReadSetUploadPartsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [UploadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/parts");
  };

  return ListReadSetUploadPartsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReadSetsOutcome OmicsClient::ListReadSets(const ListReadSetsRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReadSets", "Required field: SequenceStoreId, is not set");
    return ListReadSetsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/readsets");
  };

  return ListReadSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReferenceImportJobsOutcome OmicsClient::ListReferenceImportJobs(const ListReferenceImportJobsRequest& request) const {
  if (!request.ReferenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReferenceImportJobs", "Required field: ReferenceStoreId, is not set");
    return ListReferenceImportJobsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ReferenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReferenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importjobs");
  };

  return ListReferenceImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReferenceStoresOutcome OmicsClient::ListReferenceStores(const ListReferenceStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestores");
  };

  return ListReferenceStoresOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReferencesOutcome OmicsClient::ListReferences(const ListReferencesRequest& request) const {
  if (!request.ReferenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReferences", "Required field: ReferenceStoreId, is not set");
    return ListReferencesOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ReferenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReferenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/references");
  };

  return ListReferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRunCachesOutcome OmicsClient::ListRunCaches(const ListRunCachesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runCache");
  };

  return ListRunCachesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRunGroupsOutcome OmicsClient::ListRunGroups(const ListRunGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runGroup");
  };

  return ListRunGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRunTasksOutcome OmicsClient::ListRunTasks(const ListRunTasksRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRunTasks", "Required field: Id, is not set");
    return ListRunTasksOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/task");
  };

  return ListRunTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRunsOutcome OmicsClient::ListRuns(const ListRunsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run");
  };

  return ListRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRunsInBatchOutcome OmicsClient::ListRunsInBatch(const ListRunsInBatchRequest& request) const {
  if (!request.BatchIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRunsInBatch", "Required field: BatchId, is not set");
    return ListRunsInBatchOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BatchId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBatchId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/run");
  };

  return ListRunsInBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSequenceStoresOutcome OmicsClient::ListSequenceStores(const ListSequenceStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestores");
  };

  return ListSequenceStoresOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSharesOutcome OmicsClient::ListShares(const ListSharesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  };

  return ListSharesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome OmicsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVariantImportJobsOutcome OmicsClient::ListVariantImportJobs(const ListVariantImportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/variants");
  };

  return ListVariantImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVariantStoresOutcome OmicsClient::ListVariantStores(const ListVariantStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/variantStores");
  };

  return ListVariantStoresOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowVersionsOutcome OmicsClient::ListWorkflowVersions(const ListWorkflowVersionsRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflowVersions", "Required field: WorkflowId, is not set");
    return ListWorkflowVersionsOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [WorkflowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  };

  return ListWorkflowVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkflowsOutcome OmicsClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow");
  };

  return ListWorkflowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutS3AccessPolicyOutcome OmicsClient::PutS3AccessPolicy(const PutS3AccessPolicyRequest& request) const {
  if (!request.S3AccessPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutS3AccessPolicy", "Required field: S3AccessPointArn, is not set");
    return PutS3AccessPolicyOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [S3AccessPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/s3accesspolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetS3AccessPointArn());
  };

  return PutS3AccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartAnnotationImportJobOutcome OmicsClient::StartAnnotationImportJob(const StartAnnotationImportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/annotation");
  };

  return StartAnnotationImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReadSetActivationJobOutcome OmicsClient::StartReadSetActivationJob(const StartReadSetActivationJobRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartReadSetActivationJob", "Required field: SequenceStoreId, is not set");
    return StartReadSetActivationJobOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activationjob");
  };

  return StartReadSetActivationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReadSetExportJobOutcome OmicsClient::StartReadSetExportJob(const StartReadSetExportJobRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartReadSetExportJob", "Required field: SequenceStoreId, is not set");
    return StartReadSetExportJobOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/exportjob");
  };

  return StartReadSetExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReadSetImportJobOutcome OmicsClient::StartReadSetImportJob(const StartReadSetImportJobRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartReadSetImportJob", "Required field: SequenceStoreId, is not set");
    return StartReadSetImportJobOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SequenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importjob");
  };

  return StartReadSetImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReferenceImportJobOutcome OmicsClient::StartReferenceImportJob(const StartReferenceImportJobRequest& request) const {
  if (!request.ReferenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartReferenceImportJob", "Required field: ReferenceStoreId, is not set");
    return StartReferenceImportJobOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ReferenceStoreId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReferenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importjob");
  };

  return StartReferenceImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRunOutcome OmicsClient::StartRun(const StartRunRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run");
  };

  return StartRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRunBatchOutcome OmicsClient::StartRunBatch(const StartRunBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch");
  };

  return StartRunBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartVariantImportJobOutcome OmicsClient::StartVariantImportJob(const StartVariantImportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/variant");
  };

  return StartVariantImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome OmicsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome OmicsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAnnotationStoreOutcome OmicsClient::UpdateAnnotationStore(const UpdateAnnotationStoreRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnnotationStore", "Required field: Name, is not set");
    return UpdateAnnotationStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateAnnotationStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAnnotationStoreVersionOutcome OmicsClient::UpdateAnnotationStoreVersion(const UpdateAnnotationStoreVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnnotationStoreVersion", "Required field: Name, is not set");
    return UpdateAnnotationStoreVersionOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnnotationStoreVersion", "Required field: VersionName, is not set");
    return UpdateAnnotationStoreVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  return UpdateAnnotationStoreVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRunCacheOutcome OmicsClient::UpdateRunCache(const UpdateRunCacheRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRunCache", "Required field: Id, is not set");
    return UpdateRunCacheOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runCache/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateRunCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRunGroupOutcome OmicsClient::UpdateRunGroup(const UpdateRunGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRunGroup", "Required field: Id, is not set");
    return UpdateRunGroupOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateRunGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSequenceStoreOutcome OmicsClient::UpdateSequenceStore(const UpdateSequenceStoreRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSequenceStore", "Required field: Id, is not set");
    return UpdateSequenceStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateSequenceStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateVariantStoreOutcome OmicsClient::UpdateVariantStore(const UpdateVariantStoreRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVariantStore", "Required field: Name, is not set");
    return UpdateVariantStoreOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/variantStore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateVariantStoreOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkflowOutcome OmicsClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflow", "Required field: Id, is not set");
    return UpdateWorkflowOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkflowVersionOutcome OmicsClient::UpdateWorkflowVersion(const UpdateWorkflowVersionRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowVersion", "Required field: WorkflowId, is not set");
    return UpdateWorkflowVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkflowId]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowVersion", "Required field: VersionName, is not set");
    return UpdateWorkflowVersionOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  return UpdateWorkflowVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UploadReadSetPartOutcome OmicsClient::UploadReadSetPart(const UploadReadSetPartRequest& request) const {
  if (!request.SequenceStoreIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadReadSetPart", "Required field: SequenceStoreId, is not set");
    return UploadReadSetPartOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SequenceStoreId]", false));
  }
  if (!request.UploadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadReadSetPart", "Required field: UploadId, is not set");
    return UploadReadSetPartOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [UploadId]", false));
  }
  if (!request.PartSourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadReadSetPart", "Required field: PartSource, is not set");
    return UploadReadSetPartOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PartSource]", false));
  }
  if (!request.PartNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UploadReadSetPart", "Required field: PartNumber, is not set");
    return UploadReadSetPartOutcome(Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PartNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSequenceStoreId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/part");
  };

  return UploadReadSetPartOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
