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
#include <aws/mwaa-serverless/MWAAServerlessClient.h>
#include <aws/mwaa-serverless/MWAAServerlessEndpointProvider.h>
#include <aws/mwaa-serverless/MWAAServerlessErrorMarshaller.h>
#include <aws/mwaa-serverless/model/CreateWorkflowRequest.h>
#include <aws/mwaa-serverless/model/DeleteWorkflowRequest.h>
#include <aws/mwaa-serverless/model/GetTaskInstanceRequest.h>
#include <aws/mwaa-serverless/model/GetWorkflowRequest.h>
#include <aws/mwaa-serverless/model/GetWorkflowRunRequest.h>
#include <aws/mwaa-serverless/model/ListTagsForResourceRequest.h>
#include <aws/mwaa-serverless/model/ListTaskInstancesRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowVersionsRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowsRequest.h>
#include <aws/mwaa-serverless/model/StartWorkflowRunRequest.h>
#include <aws/mwaa-serverless/model/StopWorkflowRunRequest.h>
#include <aws/mwaa-serverless/model/TagResourceRequest.h>
#include <aws/mwaa-serverless/model/UntagResourceRequest.h>
#include <aws/mwaa-serverless/model/UpdateWorkflowRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MWAAServerless;
using namespace Aws::MWAAServerless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MWAAServerless {
const char SERVICE_NAME[] = "airflow-serverless";
const char ALLOCATION_TAG[] = "MWAAServerlessClient";
}  // namespace MWAAServerless
}  // namespace Aws
const char* MWAAServerlessClient::GetServiceName() { return SERVICE_NAME; }
const char* MWAAServerlessClient::GetAllocationTag() { return ALLOCATION_TAG; }

MWAAServerlessClient::MWAAServerlessClient(const MWAAServerless::MWAAServerlessClientConfiguration& clientConfiguration,
                                           std::shared_ptr<MWAAServerlessEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MWAAServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MWAAServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MWAAServerlessClient::MWAAServerlessClient(const AWSCredentials& credentials,
                                           std::shared_ptr<MWAAServerlessEndpointProviderBase> endpointProvider,
                                           const MWAAServerless::MWAAServerlessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MWAAServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MWAAServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MWAAServerlessClient::MWAAServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<MWAAServerlessEndpointProviderBase> endpointProvider,
                                           const MWAAServerless::MWAAServerlessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MWAAServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MWAAServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MWAAServerlessClient::MWAAServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MWAAServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MWAAServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MWAAServerlessClient::MWAAServerlessClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MWAAServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MWAAServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MWAAServerlessClient::MWAAServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MWAAServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MWAAServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MWAAServerlessClient::~MWAAServerlessClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MWAAServerlessEndpointProviderBase>& MWAAServerlessClient::accessEndpointProvider() { return m_endpointProvider; }

void MWAAServerlessClient::init(const MWAAServerless::MWAAServerlessClientConfiguration& config) {
  AWSClient::SetServiceClientName("MWAA Serverless");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "airflow-serverless");
}

void MWAAServerlessClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MWAAServerlessClient::InvokeOperationOutcome MWAAServerlessClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateWorkflowOutcome MWAAServerlessClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  return CreateWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkflowOutcome MWAAServerlessClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  return DeleteWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTaskInstanceOutcome MWAAServerlessClient::GetTaskInstance(const GetTaskInstanceRequest& request) const {
  return GetTaskInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkflowOutcome MWAAServerlessClient::GetWorkflow(const GetWorkflowRequest& request) const {
  return GetWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkflowRunOutcome MWAAServerlessClient::GetWorkflowRun(const GetWorkflowRunRequest& request) const {
  return GetWorkflowRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome MWAAServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTaskInstancesOutcome MWAAServerlessClient::ListTaskInstances(const ListTaskInstancesRequest& request) const {
  return ListTaskInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowRunsOutcome MWAAServerlessClient::ListWorkflowRuns(const ListWorkflowRunsRequest& request) const {
  return ListWorkflowRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowVersionsOutcome MWAAServerlessClient::ListWorkflowVersions(const ListWorkflowVersionsRequest& request) const {
  return ListWorkflowVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowsOutcome MWAAServerlessClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  return ListWorkflowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartWorkflowRunOutcome MWAAServerlessClient::StartWorkflowRun(const StartWorkflowRunRequest& request) const {
  return StartWorkflowRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopWorkflowRunOutcome MWAAServerlessClient::StopWorkflowRun(const StopWorkflowRunRequest& request) const {
  return StopWorkflowRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MWAAServerlessClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MWAAServerlessClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkflowOutcome MWAAServerlessClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const {
  return UpdateWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
