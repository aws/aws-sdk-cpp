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
#include <aws/swf/SWFClient.h>
#include <aws/swf/SWFEndpointProvider.h>
#include <aws/swf/SWFErrorMarshaller.h>
#include <aws/swf/model/CountClosedWorkflowExecutionsRequest.h>
#include <aws/swf/model/CountOpenWorkflowExecutionsRequest.h>
#include <aws/swf/model/CountPendingActivityTasksRequest.h>
#include <aws/swf/model/CountPendingDecisionTasksRequest.h>
#include <aws/swf/model/DeleteActivityTypeRequest.h>
#include <aws/swf/model/DeleteWorkflowTypeRequest.h>
#include <aws/swf/model/DeprecateActivityTypeRequest.h>
#include <aws/swf/model/DeprecateDomainRequest.h>
#include <aws/swf/model/DeprecateWorkflowTypeRequest.h>
#include <aws/swf/model/DescribeActivityTypeRequest.h>
#include <aws/swf/model/DescribeDomainRequest.h>
#include <aws/swf/model/DescribeWorkflowExecutionRequest.h>
#include <aws/swf/model/DescribeWorkflowTypeRequest.h>
#include <aws/swf/model/GetWorkflowExecutionHistoryRequest.h>
#include <aws/swf/model/ListActivityTypesRequest.h>
#include <aws/swf/model/ListClosedWorkflowExecutionsRequest.h>
#include <aws/swf/model/ListDomainsRequest.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsRequest.h>
#include <aws/swf/model/ListTagsForResourceRequest.h>
#include <aws/swf/model/ListWorkflowTypesRequest.h>
#include <aws/swf/model/PollForActivityTaskRequest.h>
#include <aws/swf/model/PollForDecisionTaskRequest.h>
#include <aws/swf/model/RecordActivityTaskHeartbeatRequest.h>
#include <aws/swf/model/RegisterActivityTypeRequest.h>
#include <aws/swf/model/RegisterDomainRequest.h>
#include <aws/swf/model/RegisterWorkflowTypeRequest.h>
#include <aws/swf/model/RequestCancelWorkflowExecutionRequest.h>
#include <aws/swf/model/RespondActivityTaskCanceledRequest.h>
#include <aws/swf/model/RespondActivityTaskCompletedRequest.h>
#include <aws/swf/model/RespondActivityTaskFailedRequest.h>
#include <aws/swf/model/RespondDecisionTaskCompletedRequest.h>
#include <aws/swf/model/SignalWorkflowExecutionRequest.h>
#include <aws/swf/model/StartWorkflowExecutionRequest.h>
#include <aws/swf/model/TagResourceRequest.h>
#include <aws/swf/model/TerminateWorkflowExecutionRequest.h>
#include <aws/swf/model/UndeprecateActivityTypeRequest.h>
#include <aws/swf/model/UndeprecateDomainRequest.h>
#include <aws/swf/model/UndeprecateWorkflowTypeRequest.h>
#include <aws/swf/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SWF;
using namespace Aws::SWF::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SWF {
const char SERVICE_NAME[] = "swf";
const char ALLOCATION_TAG[] = "SWFClient";
}  // namespace SWF
}  // namespace Aws
const char* SWFClient::GetServiceName() { return SERVICE_NAME; }
const char* SWFClient::GetAllocationTag() { return ALLOCATION_TAG; }

SWFClient::SWFClient(const SWF::SWFClientConfiguration& clientConfiguration, std::shared_ptr<SWFEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SWFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SWFClient::SWFClient(const AWSCredentials& credentials, std::shared_ptr<SWFEndpointProviderBase> endpointProvider,
                     const SWF::SWFClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SWFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SWFClient::SWFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SWFEndpointProviderBase> endpointProvider, const SWF::SWFClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SWFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SWFClient::SWFClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SWFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SWFClient::SWFClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SWFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SWFClient::SWFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SWFErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SWFEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SWFClient::~SWFClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SWFEndpointProviderBase>& SWFClient::accessEndpointProvider() { return m_endpointProvider; }

void SWFClient::init(const SWF::SWFClientConfiguration& config) {
  AWSClient::SetServiceClientName("SWF");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "swf");
}

void SWFClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SWFClient::InvokeOperationOutcome SWFClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CountClosedWorkflowExecutionsOutcome SWFClient::CountClosedWorkflowExecutions(const CountClosedWorkflowExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CountClosedWorkflowExecutionsOutcome(result.GetResultWithOwnership())
                            : CountClosedWorkflowExecutionsOutcome(std::move(result.GetError()));
}

CountOpenWorkflowExecutionsOutcome SWFClient::CountOpenWorkflowExecutions(const CountOpenWorkflowExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CountOpenWorkflowExecutionsOutcome(result.GetResultWithOwnership())
                            : CountOpenWorkflowExecutionsOutcome(std::move(result.GetError()));
}

CountPendingActivityTasksOutcome SWFClient::CountPendingActivityTasks(const CountPendingActivityTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CountPendingActivityTasksOutcome(result.GetResultWithOwnership())
                            : CountPendingActivityTasksOutcome(std::move(result.GetError()));
}

CountPendingDecisionTasksOutcome SWFClient::CountPendingDecisionTasks(const CountPendingDecisionTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CountPendingDecisionTasksOutcome(result.GetResultWithOwnership())
                            : CountPendingDecisionTasksOutcome(std::move(result.GetError()));
}

DeleteActivityTypeOutcome SWFClient::DeleteActivityType(const DeleteActivityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteActivityTypeOutcome(result.GetResultWithOwnership())
                            : DeleteActivityTypeOutcome(std::move(result.GetError()));
}

DeleteWorkflowTypeOutcome SWFClient::DeleteWorkflowType(const DeleteWorkflowTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkflowTypeOutcome(result.GetResultWithOwnership())
                            : DeleteWorkflowTypeOutcome(std::move(result.GetError()));
}

DeprecateActivityTypeOutcome SWFClient::DeprecateActivityType(const DeprecateActivityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeprecateActivityTypeOutcome(result.GetResultWithOwnership())
                            : DeprecateActivityTypeOutcome(std::move(result.GetError()));
}

DeprecateDomainOutcome SWFClient::DeprecateDomain(const DeprecateDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeprecateDomainOutcome(result.GetResultWithOwnership())
                            : DeprecateDomainOutcome(std::move(result.GetError()));
}

DeprecateWorkflowTypeOutcome SWFClient::DeprecateWorkflowType(const DeprecateWorkflowTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeprecateWorkflowTypeOutcome(result.GetResultWithOwnership())
                            : DeprecateWorkflowTypeOutcome(std::move(result.GetError()));
}

DescribeActivityTypeOutcome SWFClient::DescribeActivityType(const DescribeActivityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeActivityTypeOutcome(result.GetResultWithOwnership())
                            : DescribeActivityTypeOutcome(std::move(result.GetError()));
}

DescribeDomainOutcome SWFClient::DescribeDomain(const DescribeDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDomainOutcome(result.GetResultWithOwnership()) : DescribeDomainOutcome(std::move(result.GetError()));
}

DescribeWorkflowExecutionOutcome SWFClient::DescribeWorkflowExecution(const DescribeWorkflowExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkflowExecutionOutcome(result.GetResultWithOwnership())
                            : DescribeWorkflowExecutionOutcome(std::move(result.GetError()));
}

DescribeWorkflowTypeOutcome SWFClient::DescribeWorkflowType(const DescribeWorkflowTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkflowTypeOutcome(result.GetResultWithOwnership())
                            : DescribeWorkflowTypeOutcome(std::move(result.GetError()));
}

GetWorkflowExecutionHistoryOutcome SWFClient::GetWorkflowExecutionHistory(const GetWorkflowExecutionHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkflowExecutionHistoryOutcome(result.GetResultWithOwnership())
                            : GetWorkflowExecutionHistoryOutcome(std::move(result.GetError()));
}

ListActivityTypesOutcome SWFClient::ListActivityTypes(const ListActivityTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListActivityTypesOutcome(result.GetResultWithOwnership())
                            : ListActivityTypesOutcome(std::move(result.GetError()));
}

ListClosedWorkflowExecutionsOutcome SWFClient::ListClosedWorkflowExecutions(const ListClosedWorkflowExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListClosedWorkflowExecutionsOutcome(result.GetResultWithOwnership())
                            : ListClosedWorkflowExecutionsOutcome(std::move(result.GetError()));
}

ListDomainsOutcome SWFClient::ListDomains(const ListDomainsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDomainsOutcome(result.GetResultWithOwnership()) : ListDomainsOutcome(std::move(result.GetError()));
}

ListOpenWorkflowExecutionsOutcome SWFClient::ListOpenWorkflowExecutions(const ListOpenWorkflowExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOpenWorkflowExecutionsOutcome(result.GetResultWithOwnership())
                            : ListOpenWorkflowExecutionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SWFClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListWorkflowTypesOutcome SWFClient::ListWorkflowTypes(const ListWorkflowTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkflowTypesOutcome(result.GetResultWithOwnership())
                            : ListWorkflowTypesOutcome(std::move(result.GetError()));
}

PollForActivityTaskOutcome SWFClient::PollForActivityTask(const PollForActivityTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PollForActivityTaskOutcome(result.GetResultWithOwnership())
                            : PollForActivityTaskOutcome(std::move(result.GetError()));
}

PollForDecisionTaskOutcome SWFClient::PollForDecisionTask(const PollForDecisionTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PollForDecisionTaskOutcome(result.GetResultWithOwnership())
                            : PollForDecisionTaskOutcome(std::move(result.GetError()));
}

RecordActivityTaskHeartbeatOutcome SWFClient::RecordActivityTaskHeartbeat(const RecordActivityTaskHeartbeatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RecordActivityTaskHeartbeatOutcome(result.GetResultWithOwnership())
                            : RecordActivityTaskHeartbeatOutcome(std::move(result.GetError()));
}

RegisterActivityTypeOutcome SWFClient::RegisterActivityType(const RegisterActivityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterActivityTypeOutcome(result.GetResultWithOwnership())
                            : RegisterActivityTypeOutcome(std::move(result.GetError()));
}

RegisterDomainOutcome SWFClient::RegisterDomain(const RegisterDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterDomainOutcome(result.GetResultWithOwnership()) : RegisterDomainOutcome(std::move(result.GetError()));
}

RegisterWorkflowTypeOutcome SWFClient::RegisterWorkflowType(const RegisterWorkflowTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterWorkflowTypeOutcome(result.GetResultWithOwnership())
                            : RegisterWorkflowTypeOutcome(std::move(result.GetError()));
}

RequestCancelWorkflowExecutionOutcome SWFClient::RequestCancelWorkflowExecution(
    const RequestCancelWorkflowExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RequestCancelWorkflowExecutionOutcome(result.GetResultWithOwnership())
                            : RequestCancelWorkflowExecutionOutcome(std::move(result.GetError()));
}

RespondActivityTaskCanceledOutcome SWFClient::RespondActivityTaskCanceled(const RespondActivityTaskCanceledRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RespondActivityTaskCanceledOutcome(result.GetResultWithOwnership())
                            : RespondActivityTaskCanceledOutcome(std::move(result.GetError()));
}

RespondActivityTaskCompletedOutcome SWFClient::RespondActivityTaskCompleted(const RespondActivityTaskCompletedRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RespondActivityTaskCompletedOutcome(result.GetResultWithOwnership())
                            : RespondActivityTaskCompletedOutcome(std::move(result.GetError()));
}

RespondActivityTaskFailedOutcome SWFClient::RespondActivityTaskFailed(const RespondActivityTaskFailedRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RespondActivityTaskFailedOutcome(result.GetResultWithOwnership())
                            : RespondActivityTaskFailedOutcome(std::move(result.GetError()));
}

RespondDecisionTaskCompletedOutcome SWFClient::RespondDecisionTaskCompleted(const RespondDecisionTaskCompletedRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RespondDecisionTaskCompletedOutcome(result.GetResultWithOwnership())
                            : RespondDecisionTaskCompletedOutcome(std::move(result.GetError()));
}

SignalWorkflowExecutionOutcome SWFClient::SignalWorkflowExecution(const SignalWorkflowExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SignalWorkflowExecutionOutcome(result.GetResultWithOwnership())
                            : SignalWorkflowExecutionOutcome(std::move(result.GetError()));
}

StartWorkflowExecutionOutcome SWFClient::StartWorkflowExecution(const StartWorkflowExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartWorkflowExecutionOutcome(result.GetResultWithOwnership())
                            : StartWorkflowExecutionOutcome(std::move(result.GetError()));
}

TagResourceOutcome SWFClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TerminateWorkflowExecutionOutcome SWFClient::TerminateWorkflowExecution(const TerminateWorkflowExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateWorkflowExecutionOutcome(result.GetResultWithOwnership())
                            : TerminateWorkflowExecutionOutcome(std::move(result.GetError()));
}

UndeprecateActivityTypeOutcome SWFClient::UndeprecateActivityType(const UndeprecateActivityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UndeprecateActivityTypeOutcome(result.GetResultWithOwnership())
                            : UndeprecateActivityTypeOutcome(std::move(result.GetError()));
}

UndeprecateDomainOutcome SWFClient::UndeprecateDomain(const UndeprecateDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UndeprecateDomainOutcome(result.GetResultWithOwnership())
                            : UndeprecateDomainOutcome(std::move(result.GetError()));
}

UndeprecateWorkflowTypeOutcome SWFClient::UndeprecateWorkflowType(const UndeprecateWorkflowTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UndeprecateWorkflowTypeOutcome(result.GetResultWithOwnership())
                            : UndeprecateWorkflowTypeOutcome(std::move(result.GetError()));
}

UntagResourceOutcome SWFClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
