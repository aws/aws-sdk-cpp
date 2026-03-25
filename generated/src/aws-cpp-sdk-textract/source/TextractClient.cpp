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
#include <aws/textract/TextractClient.h>
#include <aws/textract/TextractEndpointProvider.h>
#include <aws/textract/TextractErrorMarshaller.h>
#include <aws/textract/model/AnalyzeDocumentRequest.h>
#include <aws/textract/model/AnalyzeExpenseRequest.h>
#include <aws/textract/model/AnalyzeIDRequest.h>
#include <aws/textract/model/CreateAdapterRequest.h>
#include <aws/textract/model/CreateAdapterVersionRequest.h>
#include <aws/textract/model/DeleteAdapterRequest.h>
#include <aws/textract/model/DeleteAdapterVersionRequest.h>
#include <aws/textract/model/DetectDocumentTextRequest.h>
#include <aws/textract/model/GetAdapterRequest.h>
#include <aws/textract/model/GetAdapterVersionRequest.h>
#include <aws/textract/model/GetDocumentAnalysisRequest.h>
#include <aws/textract/model/GetDocumentTextDetectionRequest.h>
#include <aws/textract/model/GetExpenseAnalysisRequest.h>
#include <aws/textract/model/GetLendingAnalysisRequest.h>
#include <aws/textract/model/GetLendingAnalysisSummaryRequest.h>
#include <aws/textract/model/ListAdapterVersionsRequest.h>
#include <aws/textract/model/ListAdaptersRequest.h>
#include <aws/textract/model/ListTagsForResourceRequest.h>
#include <aws/textract/model/StartDocumentAnalysisRequest.h>
#include <aws/textract/model/StartDocumentTextDetectionRequest.h>
#include <aws/textract/model/StartExpenseAnalysisRequest.h>
#include <aws/textract/model/StartLendingAnalysisRequest.h>
#include <aws/textract/model/TagResourceRequest.h>
#include <aws/textract/model/UntagResourceRequest.h>
#include <aws/textract/model/UpdateAdapterRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Textract;
using namespace Aws::Textract::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Textract {
const char SERVICE_NAME[] = "textract";
const char ALLOCATION_TAG[] = "TextractClient";
}  // namespace Textract
}  // namespace Aws
const char* TextractClient::GetServiceName() { return SERVICE_NAME; }
const char* TextractClient::GetAllocationTag() { return ALLOCATION_TAG; }

TextractClient::TextractClient(const Textract::TextractClientConfiguration& clientConfiguration,
                               std::shared_ptr<TextractEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TextractClient::TextractClient(const AWSCredentials& credentials, std::shared_ptr<TextractEndpointProviderBase> endpointProvider,
                               const Textract::TextractClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TextractClient::TextractClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<TextractEndpointProviderBase> endpointProvider,
                               const Textract::TextractClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TextractClient::TextractClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TextractClient::TextractClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TextractClient::TextractClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TextractClient::~TextractClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TextractEndpointProviderBase>& TextractClient::accessEndpointProvider() { return m_endpointProvider; }

void TextractClient::init(const Textract::TextractClientConfiguration& config) {
  AWSClient::SetServiceClientName("Textract");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "textract");
}

void TextractClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TextractClient::InvokeOperationOutcome TextractClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AnalyzeDocumentOutcome TextractClient::AnalyzeDocument(const AnalyzeDocumentRequest& request) const {
  return AnalyzeDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AnalyzeExpenseOutcome TextractClient::AnalyzeExpense(const AnalyzeExpenseRequest& request) const {
  return AnalyzeExpenseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AnalyzeIDOutcome TextractClient::AnalyzeID(const AnalyzeIDRequest& request) const {
  return AnalyzeIDOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAdapterOutcome TextractClient::CreateAdapter(const CreateAdapterRequest& request) const {
  return CreateAdapterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAdapterVersionOutcome TextractClient::CreateAdapterVersion(const CreateAdapterVersionRequest& request) const {
  return CreateAdapterVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAdapterOutcome TextractClient::DeleteAdapter(const DeleteAdapterRequest& request) const {
  return DeleteAdapterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAdapterVersionOutcome TextractClient::DeleteAdapterVersion(const DeleteAdapterVersionRequest& request) const {
  return DeleteAdapterVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectDocumentTextOutcome TextractClient::DetectDocumentText(const DetectDocumentTextRequest& request) const {
  return DetectDocumentTextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAdapterOutcome TextractClient::GetAdapter(const GetAdapterRequest& request) const {
  return GetAdapterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAdapterVersionOutcome TextractClient::GetAdapterVersion(const GetAdapterVersionRequest& request) const {
  return GetAdapterVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDocumentAnalysisOutcome TextractClient::GetDocumentAnalysis(const GetDocumentAnalysisRequest& request) const {
  return GetDocumentAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDocumentTextDetectionOutcome TextractClient::GetDocumentTextDetection(const GetDocumentTextDetectionRequest& request) const {
  return GetDocumentTextDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExpenseAnalysisOutcome TextractClient::GetExpenseAnalysis(const GetExpenseAnalysisRequest& request) const {
  return GetExpenseAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLendingAnalysisOutcome TextractClient::GetLendingAnalysis(const GetLendingAnalysisRequest& request) const {
  return GetLendingAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLendingAnalysisSummaryOutcome TextractClient::GetLendingAnalysisSummary(const GetLendingAnalysisSummaryRequest& request) const {
  return GetLendingAnalysisSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAdapterVersionsOutcome TextractClient::ListAdapterVersions(const ListAdapterVersionsRequest& request) const {
  return ListAdapterVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAdaptersOutcome TextractClient::ListAdapters(const ListAdaptersRequest& request) const {
  return ListAdaptersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome TextractClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDocumentAnalysisOutcome TextractClient::StartDocumentAnalysis(const StartDocumentAnalysisRequest& request) const {
  return StartDocumentAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDocumentTextDetectionOutcome TextractClient::StartDocumentTextDetection(const StartDocumentTextDetectionRequest& request) const {
  return StartDocumentTextDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartExpenseAnalysisOutcome TextractClient::StartExpenseAnalysis(const StartExpenseAnalysisRequest& request) const {
  return StartExpenseAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartLendingAnalysisOutcome TextractClient::StartLendingAnalysis(const StartLendingAnalysisRequest& request) const {
  return StartLendingAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome TextractClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome TextractClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAdapterOutcome TextractClient::UpdateAdapter(const UpdateAdapterRequest& request) const {
  return UpdateAdapterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
