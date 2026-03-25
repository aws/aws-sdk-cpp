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
#include <aws/states/SFNClient.h>
#include <aws/states/SFNEndpointProvider.h>
#include <aws/states/SFNErrorMarshaller.h>
#include <aws/states/model/CreateActivityRequest.h>
#include <aws/states/model/CreateStateMachineAliasRequest.h>
#include <aws/states/model/CreateStateMachineRequest.h>
#include <aws/states/model/DeleteActivityRequest.h>
#include <aws/states/model/DeleteStateMachineAliasRequest.h>
#include <aws/states/model/DeleteStateMachineRequest.h>
#include <aws/states/model/DeleteStateMachineVersionRequest.h>
#include <aws/states/model/DescribeActivityRequest.h>
#include <aws/states/model/DescribeExecutionRequest.h>
#include <aws/states/model/DescribeMapRunRequest.h>
#include <aws/states/model/DescribeStateMachineAliasRequest.h>
#include <aws/states/model/DescribeStateMachineForExecutionRequest.h>
#include <aws/states/model/DescribeStateMachineRequest.h>
#include <aws/states/model/GetActivityTaskRequest.h>
#include <aws/states/model/GetExecutionHistoryRequest.h>
#include <aws/states/model/ListActivitiesRequest.h>
#include <aws/states/model/ListExecutionsRequest.h>
#include <aws/states/model/ListMapRunsRequest.h>
#include <aws/states/model/ListStateMachineAliasesRequest.h>
#include <aws/states/model/ListStateMachineVersionsRequest.h>
#include <aws/states/model/ListStateMachinesRequest.h>
#include <aws/states/model/ListTagsForResourceRequest.h>
#include <aws/states/model/PublishStateMachineVersionRequest.h>
#include <aws/states/model/RedriveExecutionRequest.h>
#include <aws/states/model/SendTaskFailureRequest.h>
#include <aws/states/model/SendTaskHeartbeatRequest.h>
#include <aws/states/model/SendTaskSuccessRequest.h>
#include <aws/states/model/StartExecutionRequest.h>
#include <aws/states/model/StartSyncExecutionRequest.h>
#include <aws/states/model/StopExecutionRequest.h>
#include <aws/states/model/TagResourceRequest.h>
#include <aws/states/model/TestStateRequest.h>
#include <aws/states/model/UntagResourceRequest.h>
#include <aws/states/model/UpdateMapRunRequest.h>
#include <aws/states/model/UpdateStateMachineAliasRequest.h>
#include <aws/states/model/UpdateStateMachineRequest.h>
#include <aws/states/model/ValidateStateMachineDefinitionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SFN;
using namespace Aws::SFN::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SFN {
const char SERVICE_NAME[] = "states";
const char ALLOCATION_TAG[] = "SFNClient";
}  // namespace SFN
}  // namespace Aws
const char* SFNClient::GetServiceName() { return SERVICE_NAME; }
const char* SFNClient::GetAllocationTag() { return ALLOCATION_TAG; }

SFNClient::SFNClient(const SFN::SFNClientConfiguration& clientConfiguration, std::shared_ptr<SFNEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SFNClient::SFNClient(const AWSCredentials& credentials, std::shared_ptr<SFNEndpointProviderBase> endpointProvider,
                     const SFN::SFNClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SFNClient::SFNClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SFNEndpointProviderBase> endpointProvider, const SFN::SFNClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SFNClient::SFNClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SFNClient::SFNClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SFNClient::SFNClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SFNErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SFNClient::~SFNClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SFNEndpointProviderBase>& SFNClient::accessEndpointProvider() { return m_endpointProvider; }

void SFNClient::init(const SFN::SFNClientConfiguration& config) {
  AWSClient::SetServiceClientName("SFN");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "states");
}

void SFNClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SFNClient::InvokeOperationOutcome SFNClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateActivityOutcome SFNClient::CreateActivity(const CreateActivityRequest& request) const {
  return CreateActivityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStateMachineOutcome SFNClient::CreateStateMachine(const CreateStateMachineRequest& request) const {
  return CreateStateMachineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStateMachineAliasOutcome SFNClient::CreateStateMachineAlias(const CreateStateMachineAliasRequest& request) const {
  return CreateStateMachineAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteActivityOutcome SFNClient::DeleteActivity(const DeleteActivityRequest& request) const {
  return DeleteActivityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStateMachineOutcome SFNClient::DeleteStateMachine(const DeleteStateMachineRequest& request) const {
  return DeleteStateMachineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStateMachineAliasOutcome SFNClient::DeleteStateMachineAlias(const DeleteStateMachineAliasRequest& request) const {
  return DeleteStateMachineAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStateMachineVersionOutcome SFNClient::DeleteStateMachineVersion(const DeleteStateMachineVersionRequest& request) const {
  return DeleteStateMachineVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeActivityOutcome SFNClient::DescribeActivity(const DescribeActivityRequest& request) const {
  return DescribeActivityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExecutionOutcome SFNClient::DescribeExecution(const DescribeExecutionRequest& request) const {
  return DescribeExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMapRunOutcome SFNClient::DescribeMapRun(const DescribeMapRunRequest& request) const {
  return DescribeMapRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStateMachineOutcome SFNClient::DescribeStateMachine(const DescribeStateMachineRequest& request) const {
  return DescribeStateMachineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStateMachineAliasOutcome SFNClient::DescribeStateMachineAlias(const DescribeStateMachineAliasRequest& request) const {
  return DescribeStateMachineAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStateMachineForExecutionOutcome SFNClient::DescribeStateMachineForExecution(
    const DescribeStateMachineForExecutionRequest& request) const {
  return DescribeStateMachineForExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetActivityTaskOutcome SFNClient::GetActivityTask(const GetActivityTaskRequest& request) const {
  return GetActivityTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExecutionHistoryOutcome SFNClient::GetExecutionHistory(const GetExecutionHistoryRequest& request) const {
  return GetExecutionHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListActivitiesOutcome SFNClient::ListActivities(const ListActivitiesRequest& request) const {
  return ListActivitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExecutionsOutcome SFNClient::ListExecutions(const ListExecutionsRequest& request) const {
  return ListExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMapRunsOutcome SFNClient::ListMapRuns(const ListMapRunsRequest& request) const {
  return ListMapRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStateMachineAliasesOutcome SFNClient::ListStateMachineAliases(const ListStateMachineAliasesRequest& request) const {
  return ListStateMachineAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStateMachineVersionsOutcome SFNClient::ListStateMachineVersions(const ListStateMachineVersionsRequest& request) const {
  return ListStateMachineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStateMachinesOutcome SFNClient::ListStateMachines(const ListStateMachinesRequest& request) const {
  return ListStateMachinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome SFNClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PublishStateMachineVersionOutcome SFNClient::PublishStateMachineVersion(const PublishStateMachineVersionRequest& request) const {
  return PublishStateMachineVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RedriveExecutionOutcome SFNClient::RedriveExecution(const RedriveExecutionRequest& request) const {
  return RedriveExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendTaskFailureOutcome SFNClient::SendTaskFailure(const SendTaskFailureRequest& request) const {
  return SendTaskFailureOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendTaskHeartbeatOutcome SFNClient::SendTaskHeartbeat(const SendTaskHeartbeatRequest& request) const {
  return SendTaskHeartbeatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendTaskSuccessOutcome SFNClient::SendTaskSuccess(const SendTaskSuccessRequest& request) const {
  return SendTaskSuccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartExecutionOutcome SFNClient::StartExecution(const StartExecutionRequest& request) const {
  return StartExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSyncExecutionOutcome SFNClient::StartSyncExecution(const StartSyncExecutionRequest& request) const {
  return StartSyncExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopExecutionOutcome SFNClient::StopExecution(const StopExecutionRequest& request) const {
  return StopExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SFNClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestStateOutcome SFNClient::TestState(const TestStateRequest& request) const {
  return TestStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SFNClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMapRunOutcome SFNClient::UpdateMapRun(const UpdateMapRunRequest& request) const {
  return UpdateMapRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStateMachineOutcome SFNClient::UpdateStateMachine(const UpdateStateMachineRequest& request) const {
  return UpdateStateMachineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStateMachineAliasOutcome SFNClient::UpdateStateMachineAlias(const UpdateStateMachineAliasRequest& request) const {
  return UpdateStateMachineAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ValidateStateMachineDefinitionOutcome SFNClient::ValidateStateMachineDefinition(
    const ValidateStateMachineDefinitionRequest& request) const {
  return ValidateStateMachineDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
