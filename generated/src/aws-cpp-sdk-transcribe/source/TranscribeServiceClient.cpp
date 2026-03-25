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
#include <aws/transcribe/TranscribeServiceClient.h>
#include <aws/transcribe/TranscribeServiceEndpointProvider.h>
#include <aws/transcribe/TranscribeServiceErrorMarshaller.h>
#include <aws/transcribe/model/CreateCallAnalyticsCategoryRequest.h>
#include <aws/transcribe/model/CreateLanguageModelRequest.h>
#include <aws/transcribe/model/CreateMedicalVocabularyRequest.h>
#include <aws/transcribe/model/CreateVocabularyFilterRequest.h>
#include <aws/transcribe/model/CreateVocabularyRequest.h>
#include <aws/transcribe/model/DeleteCallAnalyticsCategoryRequest.h>
#include <aws/transcribe/model/DeleteCallAnalyticsJobRequest.h>
#include <aws/transcribe/model/DeleteLanguageModelRequest.h>
#include <aws/transcribe/model/DeleteMedicalScribeJobRequest.h>
#include <aws/transcribe/model/DeleteMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/DeleteMedicalVocabularyRequest.h>
#include <aws/transcribe/model/DeleteTranscriptionJobRequest.h>
#include <aws/transcribe/model/DeleteVocabularyFilterRequest.h>
#include <aws/transcribe/model/DeleteVocabularyRequest.h>
#include <aws/transcribe/model/DescribeLanguageModelRequest.h>
#include <aws/transcribe/model/GetCallAnalyticsCategoryRequest.h>
#include <aws/transcribe/model/GetCallAnalyticsJobRequest.h>
#include <aws/transcribe/model/GetMedicalScribeJobRequest.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetMedicalVocabularyRequest.h>
#include <aws/transcribe/model/GetTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetVocabularyFilterRequest.h>
#include <aws/transcribe/model/GetVocabularyRequest.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesRequest.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsRequest.h>
#include <aws/transcribe/model/ListLanguageModelsRequest.h>
#include <aws/transcribe/model/ListMedicalScribeJobsRequest.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsRequest.h>
#include <aws/transcribe/model/ListMedicalVocabulariesRequest.h>
#include <aws/transcribe/model/ListTagsForResourceRequest.h>
#include <aws/transcribe/model/ListTranscriptionJobsRequest.h>
#include <aws/transcribe/model/ListVocabulariesRequest.h>
#include <aws/transcribe/model/ListVocabularyFiltersRequest.h>
#include <aws/transcribe/model/StartCallAnalyticsJobRequest.h>
#include <aws/transcribe/model/StartMedicalScribeJobRequest.h>
#include <aws/transcribe/model/StartMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/StartTranscriptionJobRequest.h>
#include <aws/transcribe/model/TagResourceRequest.h>
#include <aws/transcribe/model/UntagResourceRequest.h>
#include <aws/transcribe/model/UpdateCallAnalyticsCategoryRequest.h>
#include <aws/transcribe/model/UpdateMedicalVocabularyRequest.h>
#include <aws/transcribe/model/UpdateVocabularyFilterRequest.h>
#include <aws/transcribe/model/UpdateVocabularyRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TranscribeService;
using namespace Aws::TranscribeService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace TranscribeService {
const char SERVICE_NAME[] = "transcribe";
const char ALLOCATION_TAG[] = "TranscribeServiceClient";
}  // namespace TranscribeService
}  // namespace Aws
const char* TranscribeServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* TranscribeServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

TranscribeServiceClient::TranscribeServiceClient(const TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider,
                                                 const TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider,
                                                 const TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TranscribeServiceClient::TranscribeServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TranscribeServiceClient::~TranscribeServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TranscribeServiceEndpointProviderBase>& TranscribeServiceClient::accessEndpointProvider() { return m_endpointProvider; }

void TranscribeServiceClient::init(const TranscribeService::TranscribeServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Transcribe");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "transcribe");
}

void TranscribeServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TranscribeServiceClient::InvokeOperationOutcome TranscribeServiceClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateCallAnalyticsCategoryOutcome TranscribeServiceClient::CreateCallAnalyticsCategory(
    const CreateCallAnalyticsCategoryRequest& request) const {
  return CreateCallAnalyticsCategoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLanguageModelOutcome TranscribeServiceClient::CreateLanguageModel(const CreateLanguageModelRequest& request) const {
  return CreateLanguageModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMedicalVocabularyOutcome TranscribeServiceClient::CreateMedicalVocabulary(const CreateMedicalVocabularyRequest& request) const {
  return CreateMedicalVocabularyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVocabularyOutcome TranscribeServiceClient::CreateVocabulary(const CreateVocabularyRequest& request) const {
  return CreateVocabularyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVocabularyFilterOutcome TranscribeServiceClient::CreateVocabularyFilter(const CreateVocabularyFilterRequest& request) const {
  return CreateVocabularyFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCallAnalyticsCategoryOutcome TranscribeServiceClient::DeleteCallAnalyticsCategory(
    const DeleteCallAnalyticsCategoryRequest& request) const {
  return DeleteCallAnalyticsCategoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCallAnalyticsJobOutcome TranscribeServiceClient::DeleteCallAnalyticsJob(const DeleteCallAnalyticsJobRequest& request) const {
  return DeleteCallAnalyticsJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLanguageModelOutcome TranscribeServiceClient::DeleteLanguageModel(const DeleteLanguageModelRequest& request) const {
  return DeleteLanguageModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMedicalScribeJobOutcome TranscribeServiceClient::DeleteMedicalScribeJob(const DeleteMedicalScribeJobRequest& request) const {
  return DeleteMedicalScribeJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMedicalTranscriptionJobOutcome TranscribeServiceClient::DeleteMedicalTranscriptionJob(
    const DeleteMedicalTranscriptionJobRequest& request) const {
  return DeleteMedicalTranscriptionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMedicalVocabularyOutcome TranscribeServiceClient::DeleteMedicalVocabulary(const DeleteMedicalVocabularyRequest& request) const {
  return DeleteMedicalVocabularyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTranscriptionJobOutcome TranscribeServiceClient::DeleteTranscriptionJob(const DeleteTranscriptionJobRequest& request) const {
  return DeleteTranscriptionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVocabularyOutcome TranscribeServiceClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const {
  return DeleteVocabularyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVocabularyFilterOutcome TranscribeServiceClient::DeleteVocabularyFilter(const DeleteVocabularyFilterRequest& request) const {
  return DeleteVocabularyFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLanguageModelOutcome TranscribeServiceClient::DescribeLanguageModel(const DescribeLanguageModelRequest& request) const {
  return DescribeLanguageModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCallAnalyticsCategoryOutcome TranscribeServiceClient::GetCallAnalyticsCategory(const GetCallAnalyticsCategoryRequest& request) const {
  return GetCallAnalyticsCategoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCallAnalyticsJobOutcome TranscribeServiceClient::GetCallAnalyticsJob(const GetCallAnalyticsJobRequest& request) const {
  return GetCallAnalyticsJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMedicalScribeJobOutcome TranscribeServiceClient::GetMedicalScribeJob(const GetMedicalScribeJobRequest& request) const {
  return GetMedicalScribeJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMedicalTranscriptionJobOutcome TranscribeServiceClient::GetMedicalTranscriptionJob(
    const GetMedicalTranscriptionJobRequest& request) const {
  return GetMedicalTranscriptionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMedicalVocabularyOutcome TranscribeServiceClient::GetMedicalVocabulary(const GetMedicalVocabularyRequest& request) const {
  return GetMedicalVocabularyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTranscriptionJobOutcome TranscribeServiceClient::GetTranscriptionJob(const GetTranscriptionJobRequest& request) const {
  return GetTranscriptionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetVocabularyOutcome TranscribeServiceClient::GetVocabulary(const GetVocabularyRequest& request) const {
  return GetVocabularyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetVocabularyFilterOutcome TranscribeServiceClient::GetVocabularyFilter(const GetVocabularyFilterRequest& request) const {
  return GetVocabularyFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCallAnalyticsCategoriesOutcome TranscribeServiceClient::ListCallAnalyticsCategories(
    const ListCallAnalyticsCategoriesRequest& request) const {
  return ListCallAnalyticsCategoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCallAnalyticsJobsOutcome TranscribeServiceClient::ListCallAnalyticsJobs(const ListCallAnalyticsJobsRequest& request) const {
  return ListCallAnalyticsJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLanguageModelsOutcome TranscribeServiceClient::ListLanguageModels(const ListLanguageModelsRequest& request) const {
  return ListLanguageModelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMedicalScribeJobsOutcome TranscribeServiceClient::ListMedicalScribeJobs(const ListMedicalScribeJobsRequest& request) const {
  return ListMedicalScribeJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMedicalTranscriptionJobsOutcome TranscribeServiceClient::ListMedicalTranscriptionJobs(
    const ListMedicalTranscriptionJobsRequest& request) const {
  return ListMedicalTranscriptionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMedicalVocabulariesOutcome TranscribeServiceClient::ListMedicalVocabularies(const ListMedicalVocabulariesRequest& request) const {
  return ListMedicalVocabulariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome TranscribeServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTranscriptionJobsOutcome TranscribeServiceClient::ListTranscriptionJobs(const ListTranscriptionJobsRequest& request) const {
  return ListTranscriptionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVocabulariesOutcome TranscribeServiceClient::ListVocabularies(const ListVocabulariesRequest& request) const {
  return ListVocabulariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVocabularyFiltersOutcome TranscribeServiceClient::ListVocabularyFilters(const ListVocabularyFiltersRequest& request) const {
  return ListVocabularyFiltersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCallAnalyticsJobOutcome TranscribeServiceClient::StartCallAnalyticsJob(const StartCallAnalyticsJobRequest& request) const {
  return StartCallAnalyticsJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMedicalScribeJobOutcome TranscribeServiceClient::StartMedicalScribeJob(const StartMedicalScribeJobRequest& request) const {
  return StartMedicalScribeJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMedicalTranscriptionJobOutcome TranscribeServiceClient::StartMedicalTranscriptionJob(
    const StartMedicalTranscriptionJobRequest& request) const {
  return StartMedicalTranscriptionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTranscriptionJobOutcome TranscribeServiceClient::StartTranscriptionJob(const StartTranscriptionJobRequest& request) const {
  return StartTranscriptionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome TranscribeServiceClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome TranscribeServiceClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCallAnalyticsCategoryOutcome TranscribeServiceClient::UpdateCallAnalyticsCategory(
    const UpdateCallAnalyticsCategoryRequest& request) const {
  return UpdateCallAnalyticsCategoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMedicalVocabularyOutcome TranscribeServiceClient::UpdateMedicalVocabulary(const UpdateMedicalVocabularyRequest& request) const {
  return UpdateMedicalVocabularyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVocabularyOutcome TranscribeServiceClient::UpdateVocabulary(const UpdateVocabularyRequest& request) const {
  return UpdateVocabularyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVocabularyFilterOutcome TranscribeServiceClient::UpdateVocabularyFilter(const UpdateVocabularyFilterRequest& request) const {
  return UpdateVocabularyFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
