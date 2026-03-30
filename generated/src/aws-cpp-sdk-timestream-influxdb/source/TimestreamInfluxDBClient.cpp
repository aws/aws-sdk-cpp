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
#include <aws/timestream-influxdb/TimestreamInfluxDBClient.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBEndpointProvider.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBErrorMarshaller.h>
#include <aws/timestream-influxdb/model/CreateDbClusterRequest.h>
#include <aws/timestream-influxdb/model/CreateDbInstanceRequest.h>
#include <aws/timestream-influxdb/model/CreateDbParameterGroupRequest.h>
#include <aws/timestream-influxdb/model/DeleteDbClusterRequest.h>
#include <aws/timestream-influxdb/model/DeleteDbInstanceRequest.h>
#include <aws/timestream-influxdb/model/GetDbClusterRequest.h>
#include <aws/timestream-influxdb/model/GetDbInstanceRequest.h>
#include <aws/timestream-influxdb/model/GetDbParameterGroupRequest.h>
#include <aws/timestream-influxdb/model/ListDbClustersRequest.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterRequest.h>
#include <aws/timestream-influxdb/model/ListDbInstancesRequest.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsRequest.h>
#include <aws/timestream-influxdb/model/ListTagsForResourceRequest.h>
#include <aws/timestream-influxdb/model/RebootDbClusterRequest.h>
#include <aws/timestream-influxdb/model/RebootDbInstanceRequest.h>
#include <aws/timestream-influxdb/model/TagResourceRequest.h>
#include <aws/timestream-influxdb/model/UntagResourceRequest.h>
#include <aws/timestream-influxdb/model/UpdateDbClusterRequest.h>
#include <aws/timestream-influxdb/model/UpdateDbInstanceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TimestreamInfluxDB;
using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace TimestreamInfluxDB {
const char SERVICE_NAME[] = "timestream-influxdb";
const char ALLOCATION_TAG[] = "TimestreamInfluxDBClient";
}  // namespace TimestreamInfluxDB
}  // namespace Aws
const char* TimestreamInfluxDBClient::GetServiceName() { return SERVICE_NAME; }
const char* TimestreamInfluxDBClient::GetAllocationTag() { return ALLOCATION_TAG; }

TimestreamInfluxDBClient::TimestreamInfluxDBClient(const TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<TimestreamInfluxDBEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamInfluxDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamInfluxDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamInfluxDBClient::TimestreamInfluxDBClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<TimestreamInfluxDBEndpointProviderBase> endpointProvider,
                                                   const TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamInfluxDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamInfluxDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamInfluxDBClient::TimestreamInfluxDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<TimestreamInfluxDBEndpointProviderBase> endpointProvider,
                                                   const TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamInfluxDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamInfluxDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TimestreamInfluxDBClient::TimestreamInfluxDBClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamInfluxDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamInfluxDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamInfluxDBClient::TimestreamInfluxDBClient(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamInfluxDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamInfluxDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamInfluxDBClient::TimestreamInfluxDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamInfluxDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamInfluxDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TimestreamInfluxDBClient::~TimestreamInfluxDBClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TimestreamInfluxDBEndpointProviderBase>& TimestreamInfluxDBClient::accessEndpointProvider() { return m_endpointProvider; }

void TimestreamInfluxDBClient::init(const TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration& config) {
  AWSClient::SetServiceClientName("Timestream InfluxDB");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "timestream-influxdb");
}

void TimestreamInfluxDBClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TimestreamInfluxDBClient::InvokeOperationOutcome TimestreamInfluxDBClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateDbClusterOutcome TimestreamInfluxDBClient::CreateDbCluster(const CreateDbClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDbClusterOutcome(result.GetResultWithOwnership())
                            : CreateDbClusterOutcome(std::move(result.GetError()));
}

CreateDbInstanceOutcome TimestreamInfluxDBClient::CreateDbInstance(const CreateDbInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDbInstanceOutcome(result.GetResultWithOwnership())
                            : CreateDbInstanceOutcome(std::move(result.GetError()));
}

CreateDbParameterGroupOutcome TimestreamInfluxDBClient::CreateDbParameterGroup(const CreateDbParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDbParameterGroupOutcome(result.GetResultWithOwnership())
                            : CreateDbParameterGroupOutcome(std::move(result.GetError()));
}

DeleteDbClusterOutcome TimestreamInfluxDBClient::DeleteDbCluster(const DeleteDbClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDbClusterOutcome(result.GetResultWithOwnership())
                            : DeleteDbClusterOutcome(std::move(result.GetError()));
}

DeleteDbInstanceOutcome TimestreamInfluxDBClient::DeleteDbInstance(const DeleteDbInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDbInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteDbInstanceOutcome(std::move(result.GetError()));
}

GetDbClusterOutcome TimestreamInfluxDBClient::GetDbCluster(const GetDbClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDbClusterOutcome(result.GetResultWithOwnership()) : GetDbClusterOutcome(std::move(result.GetError()));
}

GetDbInstanceOutcome TimestreamInfluxDBClient::GetDbInstance(const GetDbInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDbInstanceOutcome(result.GetResultWithOwnership()) : GetDbInstanceOutcome(std::move(result.GetError()));
}

GetDbParameterGroupOutcome TimestreamInfluxDBClient::GetDbParameterGroup(const GetDbParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDbParameterGroupOutcome(result.GetResultWithOwnership())
                            : GetDbParameterGroupOutcome(std::move(result.GetError()));
}

ListDbClustersOutcome TimestreamInfluxDBClient::ListDbClusters(const ListDbClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDbClustersOutcome(result.GetResultWithOwnership()) : ListDbClustersOutcome(std::move(result.GetError()));
}

ListDbInstancesOutcome TimestreamInfluxDBClient::ListDbInstances(const ListDbInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDbInstancesOutcome(result.GetResultWithOwnership())
                            : ListDbInstancesOutcome(std::move(result.GetError()));
}

ListDbInstancesForClusterOutcome TimestreamInfluxDBClient::ListDbInstancesForCluster(
    const ListDbInstancesForClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDbInstancesForClusterOutcome(result.GetResultWithOwnership())
                            : ListDbInstancesForClusterOutcome(std::move(result.GetError()));
}

ListDbParameterGroupsOutcome TimestreamInfluxDBClient::ListDbParameterGroups(const ListDbParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDbParameterGroupsOutcome(result.GetResultWithOwnership())
                            : ListDbParameterGroupsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome TimestreamInfluxDBClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RebootDbClusterOutcome TimestreamInfluxDBClient::RebootDbCluster(const RebootDbClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootDbClusterOutcome(result.GetResultWithOwnership())
                            : RebootDbClusterOutcome(std::move(result.GetError()));
}

RebootDbInstanceOutcome TimestreamInfluxDBClient::RebootDbInstance(const RebootDbInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootDbInstanceOutcome(result.GetResultWithOwnership())
                            : RebootDbInstanceOutcome(std::move(result.GetError()));
}

TagResourceOutcome TimestreamInfluxDBClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome TimestreamInfluxDBClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateDbClusterOutcome TimestreamInfluxDBClient::UpdateDbCluster(const UpdateDbClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDbClusterOutcome(result.GetResultWithOwnership())
                            : UpdateDbClusterOutcome(std::move(result.GetError()));
}

UpdateDbInstanceOutcome TimestreamInfluxDBClient::UpdateDbInstance(const UpdateDbInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDbInstanceOutcome(result.GetResultWithOwnership())
                            : UpdateDbInstanceOutcome(std::move(result.GetError()));
}
