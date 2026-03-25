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
#include <aws/support/SupportClient.h>
#include <aws/support/SupportEndpointProvider.h>
#include <aws/support/SupportErrorMarshaller.h>
#include <aws/support/model/AddAttachmentsToSetRequest.h>
#include <aws/support/model/AddCommunicationToCaseRequest.h>
#include <aws/support/model/CreateCaseRequest.h>
#include <aws/support/model/DescribeAttachmentRequest.h>
#include <aws/support/model/DescribeCasesRequest.h>
#include <aws/support/model/DescribeCommunicationsRequest.h>
#include <aws/support/model/DescribeCreateCaseOptionsRequest.h>
#include <aws/support/model/DescribeServicesRequest.h>
#include <aws/support/model/DescribeSeverityLevelsRequest.h>
#include <aws/support/model/DescribeSupportedLanguagesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckResultRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorChecksRequest.h>
#include <aws/support/model/RefreshTrustedAdvisorCheckRequest.h>
#include <aws/support/model/ResolveCaseRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Support;
using namespace Aws::Support::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Support {
const char SERVICE_NAME[] = "support";
const char ALLOCATION_TAG[] = "SupportClient";
}  // namespace Support
}  // namespace Aws
const char* SupportClient::GetServiceName() { return SERVICE_NAME; }
const char* SupportClient::GetAllocationTag() { return ALLOCATION_TAG; }

SupportClient::SupportClient(const Support::SupportClientConfiguration& clientConfiguration,
                             std::shared_ptr<SupportEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupportClient::SupportClient(const AWSCredentials& credentials, std::shared_ptr<SupportEndpointProviderBase> endpointProvider,
                             const Support::SupportClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupportClient::SupportClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<SupportEndpointProviderBase> endpointProvider,
                             const Support::SupportClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SupportClient::SupportClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupportClient::SupportClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupportClient::SupportClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SupportClient::~SupportClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SupportEndpointProviderBase>& SupportClient::accessEndpointProvider() { return m_endpointProvider; }

void SupportClient::init(const Support::SupportClientConfiguration& config) {
  AWSClient::SetServiceClientName("Support");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "support");
}

void SupportClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SupportClient::InvokeOperationOutcome SupportClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AddAttachmentsToSetOutcome SupportClient::AddAttachmentsToSet(const AddAttachmentsToSetRequest& request) const {
  return AddAttachmentsToSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddCommunicationToCaseOutcome SupportClient::AddCommunicationToCase(const AddCommunicationToCaseRequest& request) const {
  return AddCommunicationToCaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCaseOutcome SupportClient::CreateCase(const CreateCaseRequest& request) const {
  return CreateCaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAttachmentOutcome SupportClient::DescribeAttachment(const DescribeAttachmentRequest& request) const {
  return DescribeAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCasesOutcome SupportClient::DescribeCases(const DescribeCasesRequest& request) const {
  return DescribeCasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCommunicationsOutcome SupportClient::DescribeCommunications(const DescribeCommunicationsRequest& request) const {
  return DescribeCommunicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCreateCaseOptionsOutcome SupportClient::DescribeCreateCaseOptions(const DescribeCreateCaseOptionsRequest& request) const {
  return DescribeCreateCaseOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServicesOutcome SupportClient::DescribeServices(const DescribeServicesRequest& request) const {
  return DescribeServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSeverityLevelsOutcome SupportClient::DescribeSeverityLevels(const DescribeSeverityLevelsRequest& request) const {
  return DescribeSeverityLevelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSupportedLanguagesOutcome SupportClient::DescribeSupportedLanguages(const DescribeSupportedLanguagesRequest& request) const {
  return DescribeSupportedLanguagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustedAdvisorCheckRefreshStatusesOutcome SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses(
    const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const {
  return DescribeTrustedAdvisorCheckRefreshStatusesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustedAdvisorCheckResultOutcome SupportClient::DescribeTrustedAdvisorCheckResult(
    const DescribeTrustedAdvisorCheckResultRequest& request) const {
  return DescribeTrustedAdvisorCheckResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustedAdvisorCheckSummariesOutcome SupportClient::DescribeTrustedAdvisorCheckSummaries(
    const DescribeTrustedAdvisorCheckSummariesRequest& request) const {
  return DescribeTrustedAdvisorCheckSummariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustedAdvisorChecksOutcome SupportClient::DescribeTrustedAdvisorChecks(const DescribeTrustedAdvisorChecksRequest& request) const {
  return DescribeTrustedAdvisorChecksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RefreshTrustedAdvisorCheckOutcome SupportClient::RefreshTrustedAdvisorCheck(const RefreshTrustedAdvisorCheckRequest& request) const {
  return RefreshTrustedAdvisorCheckOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResolveCaseOutcome SupportClient::ResolveCase(const ResolveCaseRequest& request) const {
  return ResolveCaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
