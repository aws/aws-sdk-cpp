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
#include <aws/snow-device-management/SnowDeviceManagementClient.h>
#include <aws/snow-device-management/SnowDeviceManagementEndpointProvider.h>
#include <aws/snow-device-management/SnowDeviceManagementErrorMarshaller.h>
#include <aws/snow-device-management/model/CancelTaskRequest.h>
#include <aws/snow-device-management/model/CreateTaskRequest.h>
#include <aws/snow-device-management/model/DescribeDeviceEc2InstancesRequest.h>
#include <aws/snow-device-management/model/DescribeDeviceRequest.h>
#include <aws/snow-device-management/model/DescribeExecutionRequest.h>
#include <aws/snow-device-management/model/DescribeTaskRequest.h>
#include <aws/snow-device-management/model/ListDeviceResourcesRequest.h>
#include <aws/snow-device-management/model/ListDevicesRequest.h>
#include <aws/snow-device-management/model/ListExecutionsRequest.h>
#include <aws/snow-device-management/model/ListTagsForResourceRequest.h>
#include <aws/snow-device-management/model/ListTasksRequest.h>
#include <aws/snow-device-management/model/TagResourceRequest.h>
#include <aws/snow-device-management/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SnowDeviceManagement;
using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SnowDeviceManagement {
const char SERVICE_NAME[] = "snow-device-management";
const char ALLOCATION_TAG[] = "SnowDeviceManagementClient";
}  // namespace SnowDeviceManagement
}  // namespace Aws
const char* SnowDeviceManagementClient::GetServiceName() { return SERVICE_NAME; }
const char* SnowDeviceManagementClient::GetAllocationTag() { return ALLOCATION_TAG; }

SnowDeviceManagementClient::SnowDeviceManagementClient(
    const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration,
    std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(
    const AWSCredentials& credentials, std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider,
    const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider,
    const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SnowDeviceManagementClient::SnowDeviceManagementClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SnowDeviceManagementClient::~SnowDeviceManagementClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SnowDeviceManagementEndpointProviderBase>& SnowDeviceManagementClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void SnowDeviceManagementClient::init(const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& config) {
  AWSClient::SetServiceClientName("Snow Device Management");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "snow-device-management");
}

void SnowDeviceManagementClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SnowDeviceManagementClient::InvokeOperationOutcome SnowDeviceManagementClient::InvokeServiceOperation(
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

CancelTaskOutcome SnowDeviceManagementClient::CancelTask(const CancelTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelTask", "Required field: TaskId, is not set");
    return CancelTaskOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/task/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTaskOutcome SnowDeviceManagementClient::CreateTask(const CreateTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/task");
  };

  return CreateTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeviceOutcome SnowDeviceManagementClient::DescribeDevice(const DescribeDeviceRequest& request) const {
  if (!request.ManagedDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: ManagedDeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-device/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe");
  };

  return DescribeDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeviceEc2InstancesOutcome SnowDeviceManagementClient::DescribeDeviceEc2Instances(
    const DescribeDeviceEc2InstancesRequest& request) const {
  if (!request.ManagedDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDeviceEc2Instances", "Required field: ManagedDeviceId, is not set");
    return DescribeDeviceEc2InstancesOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-device/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/ec2/describe");
  };

  return DescribeDeviceEc2InstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExecutionOutcome SnowDeviceManagementClient::DescribeExecution(const DescribeExecutionRequest& request) const {
  if (!request.ManagedDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeExecution", "Required field: ManagedDeviceId, is not set");
    return DescribeExecutionOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeExecution", "Required field: TaskId, is not set");
    return DescribeExecutionOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/task/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/execution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedDeviceId());
  };

  return DescribeExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTaskOutcome SnowDeviceManagementClient::DescribeTask(const DescribeTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTask", "Required field: TaskId, is not set");
    return DescribeTaskOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/task/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  return DescribeTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeviceResourcesOutcome SnowDeviceManagementClient::ListDeviceResources(const ListDeviceResourcesRequest& request) const {
  if (!request.ManagedDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDeviceResources", "Required field: ManagedDeviceId, is not set");
    return ListDeviceResourcesOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-device/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  };

  return ListDeviceResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDevicesOutcome SnowDeviceManagementClient::ListDevices(const ListDevicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-devices");
  };

  return ListDevicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExecutionsOutcome SnowDeviceManagementClient::ListExecutions(const ListExecutionsRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListExecutions", "Required field: TaskId, is not set");
    return ListExecutionsOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/executions");
  };

  return ListExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome SnowDeviceManagementClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTasksOutcome SnowDeviceManagementClient::ListTasks(const ListTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  };

  return ListTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome SnowDeviceManagementClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SnowDeviceManagementClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(
        SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
