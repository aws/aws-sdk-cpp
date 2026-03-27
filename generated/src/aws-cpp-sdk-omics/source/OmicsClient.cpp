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
#include <aws/omics/model/CreateConfigurationRequest.h>
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
#include <aws/omics/model/DeleteConfigurationRequest.h>
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
#include <aws/omics/model/GetConfigurationRequest.h>
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
#include <aws/omics/model/ListConfigurationsRequest.h>
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? AbortMultipartReadSetUploadOutcome(result.GetResultWithOwnership())
                            : AbortMultipartReadSetUploadOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptShareOutcome(result.GetResultWithOwnership()) : AcceptShareOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteReadSetOutcome(result.GetResultWithOwnership())
                            : BatchDeleteReadSetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelAnnotationImportJobOutcome(result.GetResultWithOwnership())
                            : CancelAnnotationImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelRunOutcome(result.GetResultWithOwnership()) : CancelRunOutcome(std::move(result.GetError()));
}

CancelRunBatchOutcome OmicsClient::CancelRunBatch(const CancelRunBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelRunBatchOutcome(result.GetResultWithOwnership()) : CancelRunBatchOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelVariantImportJobOutcome(result.GetResultWithOwnership())
                            : CancelVariantImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CompleteMultipartReadSetUploadOutcome(result.GetResultWithOwnership())
                            : CompleteMultipartReadSetUploadOutcome(std::move(result.GetError()));
}

CreateAnnotationStoreOutcome OmicsClient::CreateAnnotationStore(const CreateAnnotationStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStore");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAnnotationStoreOutcome(result.GetResultWithOwnership())
                            : CreateAnnotationStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAnnotationStoreVersionOutcome(result.GetResultWithOwnership())
                            : CreateAnnotationStoreVersionOutcome(std::move(result.GetError()));
}

CreateConfigurationOutcome OmicsClient::CreateConfiguration(const CreateConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMultipartReadSetUploadOutcome(result.GetResultWithOwnership())
                            : CreateMultipartReadSetUploadOutcome(std::move(result.GetError()));
}

CreateReferenceStoreOutcome OmicsClient::CreateReferenceStore(const CreateReferenceStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestore");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReferenceStoreOutcome(result.GetResultWithOwnership())
                            : CreateReferenceStoreOutcome(std::move(result.GetError()));
}

CreateRunCacheOutcome OmicsClient::CreateRunCache(const CreateRunCacheRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runCache");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRunCacheOutcome(result.GetResultWithOwnership()) : CreateRunCacheOutcome(std::move(result.GetError()));
}

CreateRunGroupOutcome OmicsClient::CreateRunGroup(const CreateRunGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runGroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRunGroupOutcome(result.GetResultWithOwnership()) : CreateRunGroupOutcome(std::move(result.GetError()));
}

CreateSequenceStoreOutcome OmicsClient::CreateSequenceStore(const CreateSequenceStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestore");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSequenceStoreOutcome(result.GetResultWithOwnership())
                            : CreateSequenceStoreOutcome(std::move(result.GetError()));
}

CreateShareOutcome OmicsClient::CreateShare(const CreateShareRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/share");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateShareOutcome(result.GetResultWithOwnership()) : CreateShareOutcome(std::move(result.GetError()));
}

CreateVariantStoreOutcome OmicsClient::CreateVariantStore(const CreateVariantStoreRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/variantStore");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVariantStoreOutcome(result.GetResultWithOwnership())
                            : CreateVariantStoreOutcome(std::move(result.GetError()));
}

CreateWorkflowOutcome OmicsClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkflowOutcome(result.GetResultWithOwnership()) : CreateWorkflowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkflowVersionOutcome(result.GetResultWithOwnership())
                            : CreateWorkflowVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAnnotationStoreOutcome(result.GetResultWithOwnership())
                            : DeleteAnnotationStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAnnotationStoreVersionsOutcome(result.GetResultWithOwnership())
                            : DeleteAnnotationStoreVersionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBatchOutcome(result.GetResultWithOwnership()) : DeleteBatchOutcome(std::move(result.GetError()));
}

DeleteConfigurationOutcome OmicsClient::DeleteConfiguration(const DeleteConfigurationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguration", "Required field: Name, is not set");
    return DeleteConfigurationOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteReferenceOutcome(result.GetResultWithOwnership())
                            : DeleteReferenceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteReferenceStoreOutcome(result.GetResultWithOwnership())
                            : DeleteReferenceStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRunOutcome(result.GetResultWithOwnership()) : DeleteRunOutcome(std::move(result.GetError()));
}

DeleteRunBatchOutcome OmicsClient::DeleteRunBatch(const DeleteRunBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRunBatchOutcome(result.GetResultWithOwnership()) : DeleteRunBatchOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRunCacheOutcome(result.GetResultWithOwnership()) : DeleteRunCacheOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRunGroupOutcome(result.GetResultWithOwnership()) : DeleteRunGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteS3AccessPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteS3AccessPolicyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSequenceStoreOutcome(result.GetResultWithOwnership())
                            : DeleteSequenceStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteShareOutcome(result.GetResultWithOwnership()) : DeleteShareOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteVariantStoreOutcome(result.GetResultWithOwnership())
                            : DeleteVariantStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkflowOutcome(result.GetResultWithOwnership()) : DeleteWorkflowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkflowVersionOutcome(result.GetResultWithOwnership())
                            : DeleteWorkflowVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAnnotationImportJobOutcome(result.GetResultWithOwnership())
                            : GetAnnotationImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAnnotationStoreOutcome(result.GetResultWithOwnership())
                            : GetAnnotationStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAnnotationStoreVersionOutcome(result.GetResultWithOwnership())
                            : GetAnnotationStoreVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBatchOutcome(result.GetResultWithOwnership()) : GetBatchOutcome(std::move(result.GetError()));
}

GetConfigurationOutcome OmicsClient::GetConfiguration(const GetConfigurationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguration", "Required field: Name, is not set");
    return GetConfigurationOutcome(
        Aws::Client::AWSError<OmicsErrors>(OmicsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfigurationOutcome(result.GetResultWithOwnership())
                            : GetConfigurationOutcome(std::move(result.GetError()));
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
        return result.IsSuccess() ? GetReadSetOutcome(result.GetResultWithOwnership()) : GetReadSetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetReadSetActivationJobOutcome(result.GetResultWithOwnership())
                            : GetReadSetActivationJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetReadSetExportJobOutcome(result.GetResultWithOwnership())
                            : GetReadSetExportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetReadSetImportJobOutcome(result.GetResultWithOwnership())
                            : GetReadSetImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetReadSetMetadataOutcome(result.GetResultWithOwnership())
                            : GetReadSetMetadataOutcome(std::move(result.GetError()));
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
        return result.IsSuccess() ? GetReferenceOutcome(result.GetResultWithOwnership())
                                  : GetReferenceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetReferenceImportJobOutcome(result.GetResultWithOwnership())
                            : GetReferenceImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetReferenceMetadataOutcome(result.GetResultWithOwnership())
                            : GetReferenceMetadataOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetReferenceStoreOutcome(result.GetResultWithOwnership())
                            : GetReferenceStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRunOutcome(result.GetResultWithOwnership()) : GetRunOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRunCacheOutcome(result.GetResultWithOwnership()) : GetRunCacheOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRunGroupOutcome(result.GetResultWithOwnership()) : GetRunGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRunTaskOutcome(result.GetResultWithOwnership()) : GetRunTaskOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetS3AccessPolicyOutcome(result.GetResultWithOwnership())
                            : GetS3AccessPolicyOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSequenceStoreOutcome(result.GetResultWithOwnership())
                            : GetSequenceStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetShareOutcome(result.GetResultWithOwnership()) : GetShareOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetVariantImportJobOutcome(result.GetResultWithOwnership())
                            : GetVariantImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetVariantStoreOutcome(result.GetResultWithOwnership())
                            : GetVariantStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWorkflowOutcome(result.GetResultWithOwnership()) : GetWorkflowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWorkflowVersionOutcome(result.GetResultWithOwnership())
                            : GetWorkflowVersionOutcome(std::move(result.GetError()));
}

ListAnnotationImportJobsOutcome OmicsClient::ListAnnotationImportJobs(const ListAnnotationImportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/annotations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAnnotationImportJobsOutcome(result.GetResultWithOwnership())
                            : ListAnnotationImportJobsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAnnotationStoreVersionsOutcome(result.GetResultWithOwnership())
                            : ListAnnotationStoreVersionsOutcome(std::move(result.GetError()));
}

ListAnnotationStoresOutcome OmicsClient::ListAnnotationStores(const ListAnnotationStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/annotationStores");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAnnotationStoresOutcome(result.GetResultWithOwnership())
                            : ListAnnotationStoresOutcome(std::move(result.GetError()));
}

ListBatchOutcome OmicsClient::ListBatch(const ListBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBatchOutcome(result.GetResultWithOwnership()) : ListBatchOutcome(std::move(result.GetError()));
}

ListConfigurationsOutcome OmicsClient::ListConfigurations(const ListConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListConfigurationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMultipartReadSetUploadsOutcome(result.GetResultWithOwnership())
                            : ListMultipartReadSetUploadsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReadSetActivationJobsOutcome(result.GetResultWithOwnership())
                            : ListReadSetActivationJobsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReadSetExportJobsOutcome(result.GetResultWithOwnership())
                            : ListReadSetExportJobsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReadSetImportJobsOutcome(result.GetResultWithOwnership())
                            : ListReadSetImportJobsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReadSetUploadPartsOutcome(result.GetResultWithOwnership())
                            : ListReadSetUploadPartsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReadSetsOutcome(result.GetResultWithOwnership()) : ListReadSetsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReferenceImportJobsOutcome(result.GetResultWithOwnership())
                            : ListReferenceImportJobsOutcome(std::move(result.GetError()));
}

ListReferenceStoresOutcome OmicsClient::ListReferenceStores(const ListReferenceStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/referencestores");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReferenceStoresOutcome(result.GetResultWithOwnership())
                            : ListReferenceStoresOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReferencesOutcome(result.GetResultWithOwnership()) : ListReferencesOutcome(std::move(result.GetError()));
}

ListRunCachesOutcome OmicsClient::ListRunCaches(const ListRunCachesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runCache");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRunCachesOutcome(result.GetResultWithOwnership()) : ListRunCachesOutcome(std::move(result.GetError()));
}

ListRunGroupsOutcome OmicsClient::ListRunGroups(const ListRunGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runGroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRunGroupsOutcome(result.GetResultWithOwnership()) : ListRunGroupsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRunTasksOutcome(result.GetResultWithOwnership()) : ListRunTasksOutcome(std::move(result.GetError()));
}

ListRunsOutcome OmicsClient::ListRuns(const ListRunsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRunsOutcome(result.GetResultWithOwnership()) : ListRunsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRunsInBatchOutcome(result.GetResultWithOwnership())
                            : ListRunsInBatchOutcome(std::move(result.GetError()));
}

ListSequenceStoresOutcome OmicsClient::ListSequenceStores(const ListSequenceStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sequencestores");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSequenceStoresOutcome(result.GetResultWithOwnership())
                            : ListSequenceStoresOutcome(std::move(result.GetError()));
}

ListSharesOutcome OmicsClient::ListShares(const ListSharesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSharesOutcome(result.GetResultWithOwnership()) : ListSharesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListVariantImportJobsOutcome OmicsClient::ListVariantImportJobs(const ListVariantImportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/variants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListVariantImportJobsOutcome(result.GetResultWithOwnership())
                            : ListVariantImportJobsOutcome(std::move(result.GetError()));
}

ListVariantStoresOutcome OmicsClient::ListVariantStores(const ListVariantStoresRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/variantStores");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListVariantStoresOutcome(result.GetResultWithOwnership())
                            : ListVariantStoresOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListWorkflowVersionsOutcome(result.GetResultWithOwnership())
                            : ListWorkflowVersionsOutcome(std::move(result.GetError()));
}

ListWorkflowsOutcome OmicsClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListWorkflowsOutcome(result.GetResultWithOwnership()) : ListWorkflowsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutS3AccessPolicyOutcome(result.GetResultWithOwnership())
                            : PutS3AccessPolicyOutcome(std::move(result.GetError()));
}

StartAnnotationImportJobOutcome OmicsClient::StartAnnotationImportJob(const StartAnnotationImportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/annotation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAnnotationImportJobOutcome(result.GetResultWithOwnership())
                            : StartAnnotationImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReadSetActivationJobOutcome(result.GetResultWithOwnership())
                            : StartReadSetActivationJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReadSetExportJobOutcome(result.GetResultWithOwnership())
                            : StartReadSetExportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReadSetImportJobOutcome(result.GetResultWithOwnership())
                            : StartReadSetImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReferenceImportJobOutcome(result.GetResultWithOwnership())
                            : StartReferenceImportJobOutcome(std::move(result.GetError()));
}

StartRunOutcome OmicsClient::StartRun(const StartRunRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/run");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRunOutcome(result.GetResultWithOwnership()) : StartRunOutcome(std::move(result.GetError()));
}

StartRunBatchOutcome OmicsClient::StartRunBatch(const StartRunBatchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runBatch");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRunBatchOutcome(result.GetResultWithOwnership()) : StartRunBatchOutcome(std::move(result.GetError()));
}

StartVariantImportJobOutcome OmicsClient::StartVariantImportJob(const StartVariantImportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import/variant");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartVariantImportJobOutcome(result.GetResultWithOwnership())
                            : StartVariantImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAnnotationStoreOutcome(result.GetResultWithOwnership())
                            : UpdateAnnotationStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAnnotationStoreVersionOutcome(result.GetResultWithOwnership())
                            : UpdateAnnotationStoreVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRunCacheOutcome(result.GetResultWithOwnership()) : UpdateRunCacheOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRunGroupOutcome(result.GetResultWithOwnership()) : UpdateRunGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSequenceStoreOutcome(result.GetResultWithOwnership())
                            : UpdateSequenceStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateVariantStoreOutcome(result.GetResultWithOwnership())
                            : UpdateVariantStoreOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkflowOutcome(result.GetResultWithOwnership()) : UpdateWorkflowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkflowVersionOutcome(result.GetResultWithOwnership())
                            : UpdateWorkflowVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UploadReadSetPartOutcome(result.GetResultWithOwnership())
                            : UploadReadSetPartOutcome(std::move(result.GetError()));
}
