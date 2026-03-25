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
#include <aws/translate/TranslateClient.h>
#include <aws/translate/TranslateEndpointProvider.h>
#include <aws/translate/TranslateErrorMarshaller.h>
#include <aws/translate/model/CreateParallelDataRequest.h>
#include <aws/translate/model/DeleteParallelDataRequest.h>
#include <aws/translate/model/DeleteTerminologyRequest.h>
#include <aws/translate/model/DescribeTextTranslationJobRequest.h>
#include <aws/translate/model/GetParallelDataRequest.h>
#include <aws/translate/model/GetTerminologyRequest.h>
#include <aws/translate/model/ImportTerminologyRequest.h>
#include <aws/translate/model/ListLanguagesRequest.h>
#include <aws/translate/model/ListParallelDataRequest.h>
#include <aws/translate/model/ListTagsForResourceRequest.h>
#include <aws/translate/model/ListTerminologiesRequest.h>
#include <aws/translate/model/ListTextTranslationJobsRequest.h>
#include <aws/translate/model/StartTextTranslationJobRequest.h>
#include <aws/translate/model/StopTextTranslationJobRequest.h>
#include <aws/translate/model/TagResourceRequest.h>
#include <aws/translate/model/TranslateDocumentRequest.h>
#include <aws/translate/model/TranslateTextRequest.h>
#include <aws/translate/model/UntagResourceRequest.h>
#include <aws/translate/model/UpdateParallelDataRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Translate;
using namespace Aws::Translate::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Translate {
const char SERVICE_NAME[] = "translate";
const char ALLOCATION_TAG[] = "TranslateClient";
}  // namespace Translate
}  // namespace Aws
const char* TranslateClient::GetServiceName() { return SERVICE_NAME; }
const char* TranslateClient::GetAllocationTag() { return ALLOCATION_TAG; }

TranslateClient::TranslateClient(const Translate::TranslateClientConfiguration& clientConfiguration,
                                 std::shared_ptr<TranslateEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TranslateClient::TranslateClient(const AWSCredentials& credentials, std::shared_ptr<TranslateEndpointProviderBase> endpointProvider,
                                 const Translate::TranslateClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TranslateClient::TranslateClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<TranslateEndpointProviderBase> endpointProvider,
                                 const Translate::TranslateClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TranslateClient::TranslateClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TranslateClient::TranslateClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TranslateClient::TranslateClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TranslateClient::~TranslateClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TranslateEndpointProviderBase>& TranslateClient::accessEndpointProvider() { return m_endpointProvider; }

void TranslateClient::init(const Translate::TranslateClientConfiguration& config) {
  AWSClient::SetServiceClientName("Translate");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "translate");
}

void TranslateClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TranslateClient::InvokeOperationOutcome TranslateClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateParallelDataOutcome TranslateClient::CreateParallelData(const CreateParallelDataRequest& request) const {
  return CreateParallelDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteParallelDataOutcome TranslateClient::DeleteParallelData(const DeleteParallelDataRequest& request) const {
  return DeleteParallelDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTerminologyOutcome TranslateClient::DeleteTerminology(const DeleteTerminologyRequest& request) const {
  return DeleteTerminologyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTextTranslationJobOutcome TranslateClient::DescribeTextTranslationJob(const DescribeTextTranslationJobRequest& request) const {
  return DescribeTextTranslationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetParallelDataOutcome TranslateClient::GetParallelData(const GetParallelDataRequest& request) const {
  return GetParallelDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTerminologyOutcome TranslateClient::GetTerminology(const GetTerminologyRequest& request) const {
  return GetTerminologyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportTerminologyOutcome TranslateClient::ImportTerminology(const ImportTerminologyRequest& request) const {
  return ImportTerminologyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLanguagesOutcome TranslateClient::ListLanguages(const ListLanguagesRequest& request) const {
  return ListLanguagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListParallelDataOutcome TranslateClient::ListParallelData(const ListParallelDataRequest& request) const {
  return ListParallelDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome TranslateClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTerminologiesOutcome TranslateClient::ListTerminologies(const ListTerminologiesRequest& request) const {
  return ListTerminologiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTextTranslationJobsOutcome TranslateClient::ListTextTranslationJobs(const ListTextTranslationJobsRequest& request) const {
  return ListTextTranslationJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTextTranslationJobOutcome TranslateClient::StartTextTranslationJob(const StartTextTranslationJobRequest& request) const {
  return StartTextTranslationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTextTranslationJobOutcome TranslateClient::StopTextTranslationJob(const StopTextTranslationJobRequest& request) const {
  return StopTextTranslationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome TranslateClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TranslateDocumentOutcome TranslateClient::TranslateDocument(const TranslateDocumentRequest& request) const {
  return TranslateDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TranslateTextOutcome TranslateClient::TranslateText(const TranslateTextRequest& request) const {
  return TranslateTextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome TranslateClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateParallelDataOutcome TranslateClient::UpdateParallelData(const UpdateParallelDataRequest& request) const {
  return UpdateParallelDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
