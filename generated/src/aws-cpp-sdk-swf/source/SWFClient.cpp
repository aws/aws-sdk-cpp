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
  return CountClosedWorkflowExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CountOpenWorkflowExecutionsOutcome SWFClient::CountOpenWorkflowExecutions(const CountOpenWorkflowExecutionsRequest& request) const {
  return CountOpenWorkflowExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CountPendingActivityTasksOutcome SWFClient::CountPendingActivityTasks(const CountPendingActivityTasksRequest& request) const {
  return CountPendingActivityTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CountPendingDecisionTasksOutcome SWFClient::CountPendingDecisionTasks(const CountPendingDecisionTasksRequest& request) const {
  return CountPendingDecisionTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteActivityTypeOutcome SWFClient::DeleteActivityType(const DeleteActivityTypeRequest& request) const {
  return DeleteActivityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkflowTypeOutcome SWFClient::DeleteWorkflowType(const DeleteWorkflowTypeRequest& request) const {
  return DeleteWorkflowTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeprecateActivityTypeOutcome SWFClient::DeprecateActivityType(const DeprecateActivityTypeRequest& request) const {
  return DeprecateActivityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeprecateDomainOutcome SWFClient::DeprecateDomain(const DeprecateDomainRequest& request) const {
  return DeprecateDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeprecateWorkflowTypeOutcome SWFClient::DeprecateWorkflowType(const DeprecateWorkflowTypeRequest& request) const {
  return DeprecateWorkflowTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeActivityTypeOutcome SWFClient::DescribeActivityType(const DescribeActivityTypeRequest& request) const {
  return DescribeActivityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDomainOutcome SWFClient::DescribeDomain(const DescribeDomainRequest& request) const {
  return DescribeDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkflowExecutionOutcome SWFClient::DescribeWorkflowExecution(const DescribeWorkflowExecutionRequest& request) const {
  return DescribeWorkflowExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkflowTypeOutcome SWFClient::DescribeWorkflowType(const DescribeWorkflowTypeRequest& request) const {
  return DescribeWorkflowTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkflowExecutionHistoryOutcome SWFClient::GetWorkflowExecutionHistory(const GetWorkflowExecutionHistoryRequest& request) const {
  return GetWorkflowExecutionHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListActivityTypesOutcome SWFClient::ListActivityTypes(const ListActivityTypesRequest& request) const {
  return ListActivityTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClosedWorkflowExecutionsOutcome SWFClient::ListClosedWorkflowExecutions(const ListClosedWorkflowExecutionsRequest& request) const {
  return ListClosedWorkflowExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDomainsOutcome SWFClient::ListDomains(const ListDomainsRequest& request) const {
  return ListDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOpenWorkflowExecutionsOutcome SWFClient::ListOpenWorkflowExecutions(const ListOpenWorkflowExecutionsRequest& request) const {
  return ListOpenWorkflowExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome SWFClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowTypesOutcome SWFClient::ListWorkflowTypes(const ListWorkflowTypesRequest& request) const {
  return ListWorkflowTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PollForActivityTaskOutcome SWFClient::PollForActivityTask(const PollForActivityTaskRequest& request) const {
  return PollForActivityTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PollForDecisionTaskOutcome SWFClient::PollForDecisionTask(const PollForDecisionTaskRequest& request) const {
  return PollForDecisionTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RecordActivityTaskHeartbeatOutcome SWFClient::RecordActivityTaskHeartbeat(const RecordActivityTaskHeartbeatRequest& request) const {
  return RecordActivityTaskHeartbeatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterActivityTypeOutcome SWFClient::RegisterActivityType(const RegisterActivityTypeRequest& request) const {
  return RegisterActivityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterDomainOutcome SWFClient::RegisterDomain(const RegisterDomainRequest& request) const {
  return RegisterDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterWorkflowTypeOutcome SWFClient::RegisterWorkflowType(const RegisterWorkflowTypeRequest& request) const {
  return RegisterWorkflowTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RequestCancelWorkflowExecutionOutcome SWFClient::RequestCancelWorkflowExecution(
    const RequestCancelWorkflowExecutionRequest& request) const {
  return RequestCancelWorkflowExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RespondActivityTaskCanceledOutcome SWFClient::RespondActivityTaskCanceled(const RespondActivityTaskCanceledRequest& request) const {
  return RespondActivityTaskCanceledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RespondActivityTaskCompletedOutcome SWFClient::RespondActivityTaskCompleted(const RespondActivityTaskCompletedRequest& request) const {
  return RespondActivityTaskCompletedOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RespondActivityTaskFailedOutcome SWFClient::RespondActivityTaskFailed(const RespondActivityTaskFailedRequest& request) const {
  return RespondActivityTaskFailedOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RespondDecisionTaskCompletedOutcome SWFClient::RespondDecisionTaskCompleted(const RespondDecisionTaskCompletedRequest& request) const {
  return RespondDecisionTaskCompletedOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SignalWorkflowExecutionOutcome SWFClient::SignalWorkflowExecution(const SignalWorkflowExecutionRequest& request) const {
  return SignalWorkflowExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartWorkflowExecutionOutcome SWFClient::StartWorkflowExecution(const StartWorkflowExecutionRequest& request) const {
  return StartWorkflowExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SWFClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateWorkflowExecutionOutcome SWFClient::TerminateWorkflowExecution(const TerminateWorkflowExecutionRequest& request) const {
  return TerminateWorkflowExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UndeprecateActivityTypeOutcome SWFClient::UndeprecateActivityType(const UndeprecateActivityTypeRequest& request) const {
  return UndeprecateActivityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UndeprecateDomainOutcome SWFClient::UndeprecateDomain(const UndeprecateDomainRequest& request) const {
  return UndeprecateDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UndeprecateWorkflowTypeOutcome SWFClient::UndeprecateWorkflowType(const UndeprecateWorkflowTypeRequest& request) const {
  return UndeprecateWorkflowTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SWFClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
