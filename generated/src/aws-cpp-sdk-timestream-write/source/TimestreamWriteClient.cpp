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
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/timestream-write/TimestreamWriteClient.h>
#include <aws/timestream-write/TimestreamWriteEndpointProvider.h>
#include <aws/timestream-write/TimestreamWriteErrorMarshaller.h>
#include <aws/timestream-write/model/CreateBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/CreateDatabaseRequest.h>
#include <aws/timestream-write/model/CreateTableRequest.h>
#include <aws/timestream-write/model/DeleteDatabaseRequest.h>
#include <aws/timestream-write/model/DeleteTableRequest.h>
#include <aws/timestream-write/model/DescribeBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/DescribeDatabaseRequest.h>
#include <aws/timestream-write/model/DescribeEndpointsRequest.h>
#include <aws/timestream-write/model/DescribeTableRequest.h>
#include <aws/timestream-write/model/ListBatchLoadTasksRequest.h>
#include <aws/timestream-write/model/ListDatabasesRequest.h>
#include <aws/timestream-write/model/ListTablesRequest.h>
#include <aws/timestream-write/model/ListTagsForResourceRequest.h>
#include <aws/timestream-write/model/ResumeBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/TagResourceRequest.h>
#include <aws/timestream-write/model/UntagResourceRequest.h>
#include <aws/timestream-write/model/UpdateDatabaseRequest.h>
#include <aws/timestream-write/model/UpdateTableRequest.h>
#include <aws/timestream-write/model/WriteRecordsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TimestreamWrite;
using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace TimestreamWrite {
const char SERVICE_NAME[] = "timestream";
const char ALLOCATION_TAG[] = "TimestreamWriteClient";
}  // namespace TimestreamWrite
}  // namespace Aws
const char* TimestreamWriteClient::GetServiceName() { return SERVICE_NAME; }
const char* TimestreamWriteClient::GetAllocationTag() { return ALLOCATION_TAG; }

TimestreamWriteClient::TimestreamWriteClient(const TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration,
                                             std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamWriteClient::TimestreamWriteClient(const AWSCredentials& credentials,
                                             std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider,
                                             const TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamWriteClient::TimestreamWriteClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider,
                                             const TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TimestreamWriteClient::TimestreamWriteClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamWriteClient::TimestreamWriteClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamWriteClient::TimestreamWriteClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TimestreamWriteClient::~TimestreamWriteClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TimestreamWriteEndpointProviderBase>& TimestreamWriteClient::accessEndpointProvider() { return m_endpointProvider; }

void TimestreamWriteClient::init(const TimestreamWrite::TimestreamWriteClientConfiguration& config) {
  AWSClient::SetServiceClientName("Timestream Write");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "timestream");
}

void TimestreamWriteClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TimestreamWriteClient::InvokeOperationOutcome TimestreamWriteClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateBatchLoadTaskOutcome TimestreamWriteClient::CreateBatchLoadTask(const CreateBatchLoadTaskRequest& request) const {
  return CreateBatchLoadTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatabaseOutcome TimestreamWriteClient::CreateDatabase(const CreateDatabaseRequest& request) const {
  return CreateDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTableOutcome TimestreamWriteClient::CreateTable(const CreateTableRequest& request) const {
  return CreateTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatabaseOutcome TimestreamWriteClient::DeleteDatabase(const DeleteDatabaseRequest& request) const {
  return DeleteDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTableOutcome TimestreamWriteClient::DeleteTable(const DeleteTableRequest& request) const {
  return DeleteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBatchLoadTaskOutcome TimestreamWriteClient::DescribeBatchLoadTask(const DescribeBatchLoadTaskRequest& request) const {
  return DescribeBatchLoadTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatabaseOutcome TimestreamWriteClient::DescribeDatabase(const DescribeDatabaseRequest& request) const {
  return DescribeDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointsOutcome TimestreamWriteClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const {
  return DescribeEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTableOutcome TimestreamWriteClient::DescribeTable(const DescribeTableRequest& request) const {
  return DescribeTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBatchLoadTasksOutcome TimestreamWriteClient::ListBatchLoadTasks(const ListBatchLoadTasksRequest& request) const {
  return ListBatchLoadTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatabasesOutcome TimestreamWriteClient::ListDatabases(const ListDatabasesRequest& request) const {
  return ListDatabasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTablesOutcome TimestreamWriteClient::ListTables(const ListTablesRequest& request) const {
  return ListTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome TimestreamWriteClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeBatchLoadTaskOutcome TimestreamWriteClient::ResumeBatchLoadTask(const ResumeBatchLoadTaskRequest& request) const {
  return ResumeBatchLoadTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome TimestreamWriteClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome TimestreamWriteClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDatabaseOutcome TimestreamWriteClient::UpdateDatabase(const UpdateDatabaseRequest& request) const {
  return UpdateDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTableOutcome TimestreamWriteClient::UpdateTable(const UpdateTableRequest& request) const {
  return UpdateTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

WriteRecordsOutcome TimestreamWriteClient::WriteRecords(const WriteRecordsRequest& request) const {
  return WriteRecordsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
