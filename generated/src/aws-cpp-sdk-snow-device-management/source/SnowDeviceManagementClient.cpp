/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/snow-device-management/SnowDeviceManagementClient.h>
#include <aws/snow-device-management/SnowDeviceManagementErrorMarshaller.h>
#include <aws/snow-device-management/SnowDeviceManagementEndpointProvider.h>
#include <aws/snow-device-management/model/CancelTaskRequest.h>
#include <aws/snow-device-management/model/CreateTaskRequest.h>
#include <aws/snow-device-management/model/DescribeDeviceRequest.h>
#include <aws/snow-device-management/model/DescribeDeviceEc2InstancesRequest.h>
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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SnowDeviceManagement;
using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace SnowDeviceManagement
  {
    const char ALLOCATION_TAG[] = "SnowDeviceManagementClient";
    const char SERVICE_NAME[] = "snow-device-management";
  }
}
const char* SnowDeviceManagementClient::GetServiceName() {return SERVICE_NAME;}
const char* SnowDeviceManagementClient::GetAllocationTag() {return ALLOCATION_TAG;}

SnowDeviceManagementClient::SnowDeviceManagementClient(const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration,
                           std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Snow Device Management",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

SnowDeviceManagementClient::SnowDeviceManagementClient(const AWSCredentials& credentials,
                           std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider,
                           const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Snow Device Management",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

SnowDeviceManagementClient::SnowDeviceManagementClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider,
                           const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Snow Device Management",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
SnowDeviceManagementClient::SnowDeviceManagementClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Snow Device Management",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

SnowDeviceManagementClient::SnowDeviceManagementClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Snow Device Management",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

SnowDeviceManagementClient::SnowDeviceManagementClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Snow Device Management",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

SnowDeviceManagementClient::~SnowDeviceManagementClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<SnowDeviceManagementEndpointProviderBase>& SnowDeviceManagementClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SnowDeviceManagementClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CancelTaskOutcome SnowDeviceManagementClient::CancelTask(const CancelTaskRequest& request) const
{
  AWS_OPERATION_GUARD(CancelTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelTask", "Required field: TaskId, is not set");
    return CancelTaskOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelTaskOutcome>(
    [&]()-> CancelTaskOutcome {
      return CancelTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/task/");
      resolvedEndpoint.AddPathSegment(request.GetTaskId());
      resolvedEndpoint.AddPathSegments("/cancel");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTaskOutcome SnowDeviceManagementClient::CreateTask(const CreateTaskRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTaskOutcome>(
    [&]()-> CreateTaskOutcome {
      return CreateTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/task");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDeviceOutcome SnowDeviceManagementClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: ManagedDeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDeviceOutcome>(
    [&]()-> DescribeDeviceOutcome {
      return DescribeDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/managed-device/");
      resolvedEndpoint.AddPathSegment(request.GetManagedDeviceId());
      resolvedEndpoint.AddPathSegments("/describe");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDeviceEc2InstancesOutcome SnowDeviceManagementClient::DescribeDeviceEc2Instances(const DescribeDeviceEc2InstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDeviceEc2Instances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDeviceEc2Instances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDeviceEc2Instances", "Required field: ManagedDeviceId, is not set");
    return DescribeDeviceEc2InstancesOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDeviceEc2Instances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDeviceEc2Instances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDeviceEc2Instances",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDeviceEc2InstancesOutcome>(
    [&]()-> DescribeDeviceEc2InstancesOutcome {
      return DescribeDeviceEc2InstancesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/managed-device/");
      resolvedEndpoint.AddPathSegment(request.GetManagedDeviceId());
      resolvedEndpoint.AddPathSegments("/resources/ec2/describe");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeExecutionOutcome SnowDeviceManagementClient::DescribeExecution(const DescribeExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeExecution", "Required field: ManagedDeviceId, is not set");
    return DescribeExecutionOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeExecution", "Required field: TaskId, is not set");
    return DescribeExecutionOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeExecutionOutcome>(
    [&]()-> DescribeExecutionOutcome {
      return DescribeExecutionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/task/");
      resolvedEndpoint.AddPathSegment(request.GetTaskId());
      resolvedEndpoint.AddPathSegments("/execution/");
      resolvedEndpoint.AddPathSegment(request.GetManagedDeviceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTaskOutcome SnowDeviceManagementClient::DescribeTask(const DescribeTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTask", "Required field: TaskId, is not set");
    return DescribeTaskOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTaskOutcome>(
    [&]()-> DescribeTaskOutcome {
      return DescribeTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/task/");
      resolvedEndpoint.AddPathSegment(request.GetTaskId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDeviceResourcesOutcome SnowDeviceManagementClient::ListDeviceResources(const ListDeviceResourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDeviceResources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeviceResources", "Required field: ManagedDeviceId, is not set");
    return ListDeviceResourcesOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDeviceResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDeviceResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDeviceResources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDeviceResourcesOutcome>(
    [&]()-> ListDeviceResourcesOutcome {
      return ListDeviceResourcesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/managed-device/");
      resolvedEndpoint.AddPathSegment(request.GetManagedDeviceId());
      resolvedEndpoint.AddPathSegments("/resources");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDevicesOutcome SnowDeviceManagementClient::ListDevices(const ListDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDevices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDevicesOutcome>(
    [&]()-> ListDevicesOutcome {
      return ListDevicesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/managed-devices");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListExecutionsOutcome SnowDeviceManagementClient::ListExecutions(const ListExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListExecutions", "Required field: TaskId, is not set");
    return ListExecutionsOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListExecutions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListExecutionsOutcome>(
    [&]()-> ListExecutionsOutcome {
      return ListExecutionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/executions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome SnowDeviceManagementClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTasksOutcome SnowDeviceManagementClient::ListTasks(const ListTasksRequest& request) const
{
  AWS_OPERATION_GUARD(ListTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTasksOutcome>(
    [&]()-> ListTasksOutcome {
      return ListTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome SnowDeviceManagementClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome SnowDeviceManagementClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


