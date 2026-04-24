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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateActivityOutcome(result.GetResultWithOwnership()) : CreateActivityOutcome(std::move(result.GetError()));
}

CreateStateMachineOutcome SFNClient::CreateStateMachine(const CreateStateMachineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStateMachineOutcome(result.GetResultWithOwnership())
                            : CreateStateMachineOutcome(std::move(result.GetError()));
}

CreateStateMachineAliasOutcome SFNClient::CreateStateMachineAlias(const CreateStateMachineAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStateMachineAliasOutcome(result.GetResultWithOwnership())
                            : CreateStateMachineAliasOutcome(std::move(result.GetError()));
}

DeleteActivityOutcome SFNClient::DeleteActivity(const DeleteActivityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteActivityOutcome(result.GetResultWithOwnership()) : DeleteActivityOutcome(std::move(result.GetError()));
}

DeleteStateMachineOutcome SFNClient::DeleteStateMachine(const DeleteStateMachineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStateMachineOutcome(result.GetResultWithOwnership())
                            : DeleteStateMachineOutcome(std::move(result.GetError()));
}

DeleteStateMachineAliasOutcome SFNClient::DeleteStateMachineAlias(const DeleteStateMachineAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStateMachineAliasOutcome(result.GetResultWithOwnership())
                            : DeleteStateMachineAliasOutcome(std::move(result.GetError()));
}

DeleteStateMachineVersionOutcome SFNClient::DeleteStateMachineVersion(const DeleteStateMachineVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteStateMachineVersionOutcome(result.GetResultWithOwnership())
                            : DeleteStateMachineVersionOutcome(std::move(result.GetError()));
}

DescribeActivityOutcome SFNClient::DescribeActivity(const DescribeActivityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeActivityOutcome(result.GetResultWithOwnership())
                            : DescribeActivityOutcome(std::move(result.GetError()));
}

DescribeExecutionOutcome SFNClient::DescribeExecution(const DescribeExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExecutionOutcome(result.GetResultWithOwnership())
                            : DescribeExecutionOutcome(std::move(result.GetError()));
}

DescribeMapRunOutcome SFNClient::DescribeMapRun(const DescribeMapRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMapRunOutcome(result.GetResultWithOwnership()) : DescribeMapRunOutcome(std::move(result.GetError()));
}

DescribeStateMachineOutcome SFNClient::DescribeStateMachine(const DescribeStateMachineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStateMachineOutcome(result.GetResultWithOwnership())
                            : DescribeStateMachineOutcome(std::move(result.GetError()));
}

DescribeStateMachineAliasOutcome SFNClient::DescribeStateMachineAlias(const DescribeStateMachineAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStateMachineAliasOutcome(result.GetResultWithOwnership())
                            : DescribeStateMachineAliasOutcome(std::move(result.GetError()));
}

DescribeStateMachineForExecutionOutcome SFNClient::DescribeStateMachineForExecution(
    const DescribeStateMachineForExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStateMachineForExecutionOutcome(result.GetResultWithOwnership())
                            : DescribeStateMachineForExecutionOutcome(std::move(result.GetError()));
}

GetActivityTaskOutcome SFNClient::GetActivityTask(const GetActivityTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetActivityTaskOutcome(result.GetResultWithOwnership())
                            : GetActivityTaskOutcome(std::move(result.GetError()));
}

GetExecutionHistoryOutcome SFNClient::GetExecutionHistory(const GetExecutionHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetExecutionHistoryOutcome(result.GetResultWithOwnership())
                            : GetExecutionHistoryOutcome(std::move(result.GetError()));
}

ListActivitiesOutcome SFNClient::ListActivities(const ListActivitiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListActivitiesOutcome(result.GetResultWithOwnership()) : ListActivitiesOutcome(std::move(result.GetError()));
}

ListExecutionsOutcome SFNClient::ListExecutions(const ListExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExecutionsOutcome(result.GetResultWithOwnership()) : ListExecutionsOutcome(std::move(result.GetError()));
}

ListMapRunsOutcome SFNClient::ListMapRuns(const ListMapRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMapRunsOutcome(result.GetResultWithOwnership()) : ListMapRunsOutcome(std::move(result.GetError()));
}

ListStateMachineAliasesOutcome SFNClient::ListStateMachineAliases(const ListStateMachineAliasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStateMachineAliasesOutcome(result.GetResultWithOwnership())
                            : ListStateMachineAliasesOutcome(std::move(result.GetError()));
}

ListStateMachineVersionsOutcome SFNClient::ListStateMachineVersions(const ListStateMachineVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStateMachineVersionsOutcome(result.GetResultWithOwnership())
                            : ListStateMachineVersionsOutcome(std::move(result.GetError()));
}

ListStateMachinesOutcome SFNClient::ListStateMachines(const ListStateMachinesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStateMachinesOutcome(result.GetResultWithOwnership())
                            : ListStateMachinesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SFNClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PublishStateMachineVersionOutcome SFNClient::PublishStateMachineVersion(const PublishStateMachineVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PublishStateMachineVersionOutcome(result.GetResultWithOwnership())
                            : PublishStateMachineVersionOutcome(std::move(result.GetError()));
}

RedriveExecutionOutcome SFNClient::RedriveExecution(const RedriveExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RedriveExecutionOutcome(result.GetResultWithOwnership())
                            : RedriveExecutionOutcome(std::move(result.GetError()));
}

SendTaskFailureOutcome SFNClient::SendTaskFailure(const SendTaskFailureRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendTaskFailureOutcome(result.GetResultWithOwnership())
                            : SendTaskFailureOutcome(std::move(result.GetError()));
}

SendTaskHeartbeatOutcome SFNClient::SendTaskHeartbeat(const SendTaskHeartbeatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendTaskHeartbeatOutcome(result.GetResultWithOwnership())
                            : SendTaskHeartbeatOutcome(std::move(result.GetError()));
}

SendTaskSuccessOutcome SFNClient::SendTaskSuccess(const SendTaskSuccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendTaskSuccessOutcome(result.GetResultWithOwnership())
                            : SendTaskSuccessOutcome(std::move(result.GetError()));
}

StartExecutionOutcome SFNClient::StartExecution(const StartExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartExecutionOutcome(result.GetResultWithOwnership()) : StartExecutionOutcome(std::move(result.GetError()));
}

StartSyncExecutionOutcome SFNClient::StartSyncExecution(const StartSyncExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSyncExecutionOutcome(result.GetResultWithOwnership())
                            : StartSyncExecutionOutcome(std::move(result.GetError()));
}

StopExecutionOutcome SFNClient::StopExecution(const StopExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopExecutionOutcome(result.GetResultWithOwnership()) : StopExecutionOutcome(std::move(result.GetError()));
}

TagResourceOutcome SFNClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestStateOutcome SFNClient::TestState(const TestStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestStateOutcome(result.GetResultWithOwnership()) : TestStateOutcome(std::move(result.GetError()));
}

UntagResourceOutcome SFNClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateMapRunOutcome SFNClient::UpdateMapRun(const UpdateMapRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMapRunOutcome(result.GetResultWithOwnership()) : UpdateMapRunOutcome(std::move(result.GetError()));
}

UpdateStateMachineOutcome SFNClient::UpdateStateMachine(const UpdateStateMachineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateStateMachineOutcome(result.GetResultWithOwnership())
                            : UpdateStateMachineOutcome(std::move(result.GetError()));
}

UpdateStateMachineAliasOutcome SFNClient::UpdateStateMachineAlias(const UpdateStateMachineAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateStateMachineAliasOutcome(result.GetResultWithOwnership())
                            : UpdateStateMachineAliasOutcome(std::move(result.GetError()));
}

ValidateStateMachineDefinitionOutcome SFNClient::ValidateStateMachineDefinition(
    const ValidateStateMachineDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidateStateMachineDefinitionOutcome(result.GetResultWithOwnership())
                            : ValidateStateMachineDefinitionOutcome(std::move(result.GetError()));
}
