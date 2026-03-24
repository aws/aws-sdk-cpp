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
#include <aws/s3tables/S3TablesClient.h>
#include <aws/s3tables/S3TablesEndpointProvider.h>
#include <aws/s3tables/S3TablesErrorMarshaller.h>
#include <aws/s3tables/model/CreateNamespaceRequest.h>
#include <aws/s3tables/model/CreateTableBucketRequest.h>
#include <aws/s3tables/model/CreateTableRequest.h>
#include <aws/s3tables/model/DeleteNamespaceRequest.h>
#include <aws/s3tables/model/DeleteTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/DeleteTableBucketMetricsConfigurationRequest.h>
#include <aws/s3tables/model/DeleteTableBucketPolicyRequest.h>
#include <aws/s3tables/model/DeleteTableBucketReplicationRequest.h>
#include <aws/s3tables/model/DeleteTableBucketRequest.h>
#include <aws/s3tables/model/DeleteTablePolicyRequest.h>
#include <aws/s3tables/model/DeleteTableReplicationRequest.h>
#include <aws/s3tables/model/DeleteTableRequest.h>
#include <aws/s3tables/model/GetNamespaceRequest.h>
#include <aws/s3tables/model/GetTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/GetTableBucketMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/GetTableBucketMetricsConfigurationRequest.h>
#include <aws/s3tables/model/GetTableBucketPolicyRequest.h>
#include <aws/s3tables/model/GetTableBucketReplicationRequest.h>
#include <aws/s3tables/model/GetTableBucketRequest.h>
#include <aws/s3tables/model/GetTableBucketStorageClassRequest.h>
#include <aws/s3tables/model/GetTableEncryptionRequest.h>
#include <aws/s3tables/model/GetTableMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/GetTableMaintenanceJobStatusRequest.h>
#include <aws/s3tables/model/GetTableMetadataLocationRequest.h>
#include <aws/s3tables/model/GetTablePolicyRequest.h>
#include <aws/s3tables/model/GetTableRecordExpirationConfigurationRequest.h>
#include <aws/s3tables/model/GetTableRecordExpirationJobStatusRequest.h>
#include <aws/s3tables/model/GetTableReplicationRequest.h>
#include <aws/s3tables/model/GetTableReplicationStatusRequest.h>
#include <aws/s3tables/model/GetTableRequest.h>
#include <aws/s3tables/model/GetTableStorageClassRequest.h>
#include <aws/s3tables/model/ListNamespacesRequest.h>
#include <aws/s3tables/model/ListTableBucketsRequest.h>
#include <aws/s3tables/model/ListTablesRequest.h>
#include <aws/s3tables/model/ListTagsForResourceRequest.h>
#include <aws/s3tables/model/PutTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/PutTableBucketMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/PutTableBucketMetricsConfigurationRequest.h>
#include <aws/s3tables/model/PutTableBucketPolicyRequest.h>
#include <aws/s3tables/model/PutTableBucketReplicationRequest.h>
#include <aws/s3tables/model/PutTableBucketStorageClassRequest.h>
#include <aws/s3tables/model/PutTableMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/PutTablePolicyRequest.h>
#include <aws/s3tables/model/PutTableRecordExpirationConfigurationRequest.h>
#include <aws/s3tables/model/PutTableReplicationRequest.h>
#include <aws/s3tables/model/RenameTableRequest.h>
#include <aws/s3tables/model/TagResourceRequest.h>
#include <aws/s3tables/model/UntagResourceRequest.h>
#include <aws/s3tables/model/UpdateTableMetadataLocationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Tables;
using namespace Aws::S3Tables::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace S3Tables {
const char SERVICE_NAME[] = "s3tables";
const char ALLOCATION_TAG[] = "S3TablesClient";
}  // namespace S3Tables
}  // namespace Aws
const char* S3TablesClient::GetServiceName() { return SERVICE_NAME; }
const char* S3TablesClient::GetAllocationTag() { return ALLOCATION_TAG; }

S3TablesClient::S3TablesClient(const S3Tables::S3TablesClientConfiguration& clientConfiguration,
                               std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3TablesClient::S3TablesClient(const AWSCredentials& credentials, std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider,
                               const S3Tables::S3TablesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3TablesClient::S3TablesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider,
                               const S3Tables::S3TablesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
S3TablesClient::S3TablesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3TablesClient::S3TablesClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3TablesClient::S3TablesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
S3TablesClient::~S3TablesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<S3TablesEndpointProviderBase>& S3TablesClient::accessEndpointProvider() { return m_endpointProvider; }

void S3TablesClient::init(const S3Tables::S3TablesClientConfiguration& config) {
  AWSClient::SetServiceClientName("S3Tables");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "s3tables");
}

void S3TablesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
S3TablesClient::InvokeOperationOutcome S3TablesClient::InvokeServiceOperation(
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

CreateNamespaceOutcome S3TablesClient::CreateNamespace(const CreateNamespaceRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateNamespace", "Required field: TableBucketARN, is not set");
    return CreateNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNamespace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNamespaceOutcome>(
      [&]() -> CreateNamespaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateNamespaceOutcome(CreateNamespaceResult(result.GetResultWithOwnership()))
                                  : CreateNamespaceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTableOutcome S3TablesClient::CreateTable(const CreateTableRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTable", "Required field: TableBucketARN, is not set");
    return CreateTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTable", "Required field: Namespace, is not set");
    return CreateTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTable",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableOutcome>(
      [&]() -> CreateTableOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateTableOutcome(CreateTableResult(result.GetResultWithOwnership()))
                                  : CreateTableOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTableBucketOutcome S3TablesClient::CreateTableBucket(const CreateTableBucketRequest& request) const {
  AWS_OPERATION_GUARD(CreateTableBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTableBucket",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableBucketOutcome>(
      [&]() -> CreateTableBucketOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateTableBucketOutcome(CreateTableBucketResult(result.GetResultWithOwnership()))
                                  : CreateTableBucketOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNamespaceOutcome S3TablesClient::DeleteNamespace(const DeleteNamespaceRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: TableBucketARN, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: Namespace, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteNamespace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteNamespaceOutcome>(
      [&]() -> DeleteNamespaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteNamespaceOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableOutcome S3TablesClient::DeleteTable(const DeleteTableRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTable", "Required field: TableBucketARN, is not set");
    return DeleteTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTable", "Required field: Namespace, is not set");
    return DeleteTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTable", "Required field: Name, is not set");
    return DeleteTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTable",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableOutcome>(
      [&]() -> DeleteTableOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteTableOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableBucketOutcome S3TablesClient::DeleteTableBucket(const DeleteTableBucketRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucket", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucket",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketOutcome>(
      [&]() -> DeleteTableBucketOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteTableBucketOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableBucketEncryptionOutcome S3TablesClient::DeleteTableBucketEncryption(const DeleteTableBucketEncryptionRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucketEncryption",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketEncryptionOutcome>(
      [&]() -> DeleteTableBucketEncryptionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableBucketEncryption, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteTableBucketEncryptionOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableBucketMetricsConfigurationOutcome S3TablesClient::DeleteTableBucketMetricsConfiguration(
    const DeleteTableBucketMetricsConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketMetricsConfiguration", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucketMetricsConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketMetricsConfigurationOutcome>(
      [&]() -> DeleteTableBucketMetricsConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableBucketMetricsConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteTableBucketMetricsConfigurationOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableBucketPolicyOutcome S3TablesClient::DeleteTableBucketPolicy(const DeleteTableBucketPolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucketPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketPolicyOutcome>(
      [&]() -> DeleteTableBucketPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteTableBucketPolicyOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableBucketReplicationOutcome S3TablesClient::DeleteTableBucketReplication(const DeleteTableBucketReplicationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketReplication", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucketReplication",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketReplicationOutcome>(
      [&]() -> DeleteTableBucketReplicationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableBucketReplication, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-bucket-replication");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteTableBucketReplicationOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTablePolicyOutcome S3TablesClient::DeleteTablePolicy(const DeleteTablePolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTablePolicy", "Required field: TableBucketARN, is not set");
    return DeleteTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTablePolicy", "Required field: Namespace, is not set");
    return DeleteTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTablePolicy", "Required field: Name, is not set");
    return DeleteTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTablePolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTablePolicyOutcome>(
      [&]() -> DeleteTablePolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteTablePolicyOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableReplicationOutcome S3TablesClient::DeleteTableReplication(const DeleteTableReplicationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableReplication", "Required field: TableArn, is not set");
    return DeleteTableReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [TableArn]", false));
  }
  if (!request.VersionTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableReplication", "Required field: VersionToken, is not set");
    return DeleteTableReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [VersionToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableReplication",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableReplicationOutcome>(
      [&]() -> DeleteTableReplicationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-replication");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return DeleteTableReplicationOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetNamespaceOutcome S3TablesClient::GetNamespace(const GetNamespaceRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNamespace", "Required field: TableBucketARN, is not set");
    return GetNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNamespace", "Required field: Namespace, is not set");
    return GetNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetNamespace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetNamespaceOutcome>(
      [&]() -> GetNamespaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetNamespaceOutcome(GetNamespaceResult(result.GetResultWithOwnership()))
                                  : GetNamespaceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableOutcome S3TablesClient::GetTable(const GetTableRequest& request) const {
  AWS_OPERATION_GUARD(GetTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTable",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableOutcome>(
      [&]() -> GetTableOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/get-table");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableOutcome(GetTableResult(result.GetResultWithOwnership())) : GetTableOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketOutcome S3TablesClient::GetTableBucket(const GetTableBucketRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucket", "Required field: TableBucketARN, is not set");
    return GetTableBucketOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucket",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketOutcome>(
      [&]() -> GetTableBucketOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableBucketOutcome(GetTableBucketResult(result.GetResultWithOwnership()))
                                  : GetTableBucketOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketEncryptionOutcome S3TablesClient::GetTableBucketEncryption(const GetTableBucketEncryptionRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return GetTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketEncryption",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketEncryptionOutcome>(
      [&]() -> GetTableBucketEncryptionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketEncryption, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableBucketEncryptionOutcome(GetTableBucketEncryptionResult(result.GetResultWithOwnership()))
                                  : GetTableBucketEncryptionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketMaintenanceConfigurationOutcome S3TablesClient::GetTableBucketMaintenanceConfiguration(
    const GetTableBucketMaintenanceConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return GetTableBucketMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketMaintenanceConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketMaintenanceConfigurationOutcome>(
      [&]() -> GetTableBucketMaintenanceConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketMaintenanceConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableBucketMaintenanceConfigurationOutcome(
                                        GetTableBucketMaintenanceConfigurationResult(result.GetResultWithOwnership()))
                                  : GetTableBucketMaintenanceConfigurationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketMetricsConfigurationOutcome S3TablesClient::GetTableBucketMetricsConfiguration(
    const GetTableBucketMetricsConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketMetricsConfiguration", "Required field: TableBucketARN, is not set");
    return GetTableBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketMetricsConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketMetricsConfigurationOutcome>(
      [&]() -> GetTableBucketMetricsConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketMetricsConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess()
                   ? GetTableBucketMetricsConfigurationOutcome(GetTableBucketMetricsConfigurationResult(result.GetResultWithOwnership()))
                   : GetTableBucketMetricsConfigurationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketPolicyOutcome S3TablesClient::GetTableBucketPolicy(const GetTableBucketPolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return GetTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketPolicyOutcome>(
      [&]() -> GetTableBucketPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableBucketPolicyOutcome(GetTableBucketPolicyResult(result.GetResultWithOwnership()))
                                  : GetTableBucketPolicyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketReplicationOutcome S3TablesClient::GetTableBucketReplication(const GetTableBucketReplicationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketReplication", "Required field: TableBucketARN, is not set");
    return GetTableBucketReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketReplication",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketReplicationOutcome>(
      [&]() -> GetTableBucketReplicationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketReplication, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-bucket-replication");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableBucketReplicationOutcome(GetTableBucketReplicationResult(result.GetResultWithOwnership()))
                                  : GetTableBucketReplicationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketStorageClassOutcome S3TablesClient::GetTableBucketStorageClass(const GetTableBucketStorageClassRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketStorageClass", "Required field: TableBucketARN, is not set");
    return GetTableBucketStorageClassOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketStorageClass, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketStorageClass, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketStorageClass",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketStorageClassOutcome>(
      [&]() -> GetTableBucketStorageClassOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketStorageClass, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-class");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableBucketStorageClassOutcome(GetTableBucketStorageClassResult(result.GetResultWithOwnership()))
                                  : GetTableBucketStorageClassOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableEncryptionOutcome S3TablesClient::GetTableEncryption(const GetTableEncryptionRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableEncryption", "Required field: TableBucketARN, is not set");
    return GetTableEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableEncryption", "Required field: Namespace, is not set");
    return GetTableEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableEncryption", "Required field: Name, is not set");
    return GetTableEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableEncryption",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableEncryptionOutcome>(
      [&]() -> GetTableEncryptionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableEncryptionOutcome(GetTableEncryptionResult(result.GetResultWithOwnership()))
                                  : GetTableEncryptionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableMaintenanceConfigurationOutcome S3TablesClient::GetTableMaintenanceConfiguration(
    const GetTableMaintenanceConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return GetTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceConfiguration", "Required field: Namespace, is not set");
    return GetTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceConfiguration", "Required field: Name, is not set");
    return GetTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMaintenanceConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMaintenanceConfigurationOutcome>(
      [&]() -> GetTableMaintenanceConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableMaintenanceConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess()
                   ? GetTableMaintenanceConfigurationOutcome(GetTableMaintenanceConfigurationResult(result.GetResultWithOwnership()))
                   : GetTableMaintenanceConfigurationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableMaintenanceJobStatusOutcome S3TablesClient::GetTableMaintenanceJobStatus(const GetTableMaintenanceJobStatusRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceJobStatus", "Required field: TableBucketARN, is not set");
    return GetTableMaintenanceJobStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceJobStatus", "Required field: Namespace, is not set");
    return GetTableMaintenanceJobStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceJobStatus", "Required field: Name, is not set");
    return GetTableMaintenanceJobStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableMaintenanceJobStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMaintenanceJobStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMaintenanceJobStatus",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMaintenanceJobStatusOutcome>(
      [&]() -> GetTableMaintenanceJobStatusOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableMaintenanceJobStatus, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance-job-status");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableMaintenanceJobStatusOutcome(GetTableMaintenanceJobStatusResult(result.GetResultWithOwnership()))
                                  : GetTableMaintenanceJobStatusOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableMetadataLocationOutcome S3TablesClient::GetTableMetadataLocation(const GetTableMetadataLocationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMetadataLocation", "Required field: TableBucketARN, is not set");
    return GetTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMetadataLocation", "Required field: Namespace, is not set");
    return GetTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableMetadataLocation", "Required field: Name, is not set");
    return GetTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMetadataLocation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMetadataLocationOutcome>(
      [&]() -> GetTableMetadataLocationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableMetadataLocation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-location");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableMetadataLocationOutcome(GetTableMetadataLocationResult(result.GetResultWithOwnership()))
                                  : GetTableMetadataLocationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTablePolicyOutcome S3TablesClient::GetTablePolicy(const GetTablePolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTablePolicy", "Required field: TableBucketARN, is not set");
    return GetTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTablePolicy", "Required field: Namespace, is not set");
    return GetTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTablePolicy", "Required field: Name, is not set");
    return GetTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTablePolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTablePolicyOutcome>(
      [&]() -> GetTablePolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTablePolicyOutcome(GetTablePolicyResult(result.GetResultWithOwnership()))
                                  : GetTablePolicyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableRecordExpirationConfigurationOutcome S3TablesClient::GetTableRecordExpirationConfiguration(
    const GetTableRecordExpirationConfigurationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableRecordExpirationConfiguration", "Required field: TableArn, is not set");
    return GetTableRecordExpirationConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableRecordExpirationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableRecordExpirationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableRecordExpirationConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableRecordExpirationConfigurationOutcome>(
      [&]() -> GetTableRecordExpirationConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableRecordExpirationConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-record-expiration");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableRecordExpirationConfigurationOutcome(
                                        GetTableRecordExpirationConfigurationResult(result.GetResultWithOwnership()))
                                  : GetTableRecordExpirationConfigurationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableRecordExpirationJobStatusOutcome S3TablesClient::GetTableRecordExpirationJobStatus(
    const GetTableRecordExpirationJobStatusRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableRecordExpirationJobStatus", "Required field: TableArn, is not set");
    return GetTableRecordExpirationJobStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableRecordExpirationJobStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableRecordExpirationJobStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableRecordExpirationJobStatus",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableRecordExpirationJobStatusOutcome>(
      [&]() -> GetTableRecordExpirationJobStatusOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableRecordExpirationJobStatus, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-record-expiration-job-status");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess()
                   ? GetTableRecordExpirationJobStatusOutcome(GetTableRecordExpirationJobStatusResult(result.GetResultWithOwnership()))
                   : GetTableRecordExpirationJobStatusOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableReplicationOutcome S3TablesClient::GetTableReplication(const GetTableReplicationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableReplication", "Required field: TableArn, is not set");
    return GetTableReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TableArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableReplication",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableReplicationOutcome>(
      [&]() -> GetTableReplicationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-replication");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableReplicationOutcome(GetTableReplicationResult(result.GetResultWithOwnership()))
                                  : GetTableReplicationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableReplicationStatusOutcome S3TablesClient::GetTableReplicationStatus(const GetTableReplicationStatusRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableReplicationStatus", "Required field: TableArn, is not set");
    return GetTableReplicationStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [TableArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableReplicationStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableReplicationStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableReplicationStatus",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableReplicationStatusOutcome>(
      [&]() -> GetTableReplicationStatusOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableReplicationStatus, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/replication-status");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableReplicationStatusOutcome(GetTableReplicationStatusResult(result.GetResultWithOwnership()))
                                  : GetTableReplicationStatusOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableStorageClassOutcome S3TablesClient::GetTableStorageClass(const GetTableStorageClassRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableStorageClass", "Required field: TableBucketARN, is not set");
    return GetTableStorageClassOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableStorageClass", "Required field: Namespace, is not set");
    return GetTableStorageClassOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableStorageClass", "Required field: Name, is not set");
    return GetTableStorageClassOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableStorageClass, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableStorageClass, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableStorageClass",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableStorageClassOutcome>(
      [&]() -> GetTableStorageClassOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableStorageClass, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-class");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTableStorageClassOutcome(GetTableStorageClassResult(result.GetResultWithOwnership()))
                                  : GetTableStorageClassOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNamespacesOutcome S3TablesClient::ListNamespaces(const ListNamespacesRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNamespaces", "Required field: TableBucketARN, is not set");
    return ListNamespacesOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNamespaces",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNamespacesOutcome>(
      [&]() -> ListNamespacesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListNamespacesOutcome(ListNamespacesResult(result.GetResultWithOwnership()))
                                  : ListNamespacesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTableBucketsOutcome S3TablesClient::ListTableBuckets(const ListTableBucketsRequest& request) const {
  AWS_OPERATION_GUARD(ListTableBuckets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTableBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTableBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTableBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTableBuckets",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTableBucketsOutcome>(
      [&]() -> ListTableBucketsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListTableBucketsOutcome(ListTableBucketsResult(result.GetResultWithOwnership()))
                                  : ListTableBucketsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTablesOutcome S3TablesClient::ListTables(const ListTablesRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTables", "Required field: TableBucketARN, is not set");
    return ListTablesOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTables",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTablesOutcome>(
      [&]() -> ListTablesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListTablesOutcome(ListTablesResult(result.GetResultWithOwnership()))
                                  : ListTablesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome S3TablesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tag/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListTagsForResourceOutcome(ListTagsForResourceResult(result.GetResultWithOwnership()))
                                  : ListTagsForResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketEncryptionOutcome S3TablesClient::PutTableBucketEncryption(const PutTableBucketEncryptionRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return PutTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketEncryption",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketEncryptionOutcome>(
      [&]() -> PutTableBucketEncryptionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketEncryption, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return PutTableBucketEncryptionOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketMaintenanceConfigurationOutcome S3TablesClient::PutTableBucketMaintenanceConfiguration(
    const PutTableBucketMaintenanceConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return PutTableBucketMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketMaintenanceConfiguration", "Required field: Type, is not set");
    return PutTableBucketMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketMaintenanceConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketMaintenanceConfigurationOutcome>(
      [&]() -> PutTableBucketMaintenanceConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketMaintenanceConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(
            TableBucketMaintenanceTypeMapper::GetNameForTableBucketMaintenanceType(request.GetType()));
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return PutTableBucketMaintenanceConfigurationOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketMetricsConfigurationOutcome S3TablesClient::PutTableBucketMetricsConfiguration(
    const PutTableBucketMetricsConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketMetricsConfiguration", "Required field: TableBucketARN, is not set");
    return PutTableBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketMetricsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketMetricsConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketMetricsConfigurationOutcome>(
      [&]() -> PutTableBucketMetricsConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketMetricsConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return PutTableBucketMetricsConfigurationOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketPolicyOutcome S3TablesClient::PutTableBucketPolicy(const PutTableBucketPolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return PutTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketPolicyOutcome>(
      [&]() -> PutTableBucketPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return PutTableBucketPolicyOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketReplicationOutcome S3TablesClient::PutTableBucketReplication(const PutTableBucketReplicationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketReplication", "Required field: TableBucketARN, is not set");
    return PutTableBucketReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketReplication",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketReplicationOutcome>(
      [&]() -> PutTableBucketReplicationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketReplication, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-bucket-replication");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? PutTableBucketReplicationOutcome(PutTableBucketReplicationResult(result.GetResultWithOwnership()))
                                  : PutTableBucketReplicationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketStorageClassOutcome S3TablesClient::PutTableBucketStorageClass(const PutTableBucketStorageClassRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketStorageClass", "Required field: TableBucketARN, is not set");
    return PutTableBucketStorageClassOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketStorageClass, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketStorageClass, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketStorageClass",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketStorageClassOutcome>(
      [&]() -> PutTableBucketStorageClassOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketStorageClass, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-class");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return PutTableBucketStorageClassOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableMaintenanceConfigurationOutcome S3TablesClient::PutTableMaintenanceConfiguration(
    const PutTableMaintenanceConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return PutTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableMaintenanceConfiguration", "Required field: Namespace, is not set");
    return PutTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableMaintenanceConfiguration", "Required field: Name, is not set");
    return PutTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableMaintenanceConfiguration", "Required field: Type, is not set");
    return PutTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableMaintenanceConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableMaintenanceConfigurationOutcome>(
      [&]() -> PutTableMaintenanceConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableMaintenanceConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(TableMaintenanceTypeMapper::GetNameForTableMaintenanceType(request.GetType()));
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return PutTableMaintenanceConfigurationOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTablePolicyOutcome S3TablesClient::PutTablePolicy(const PutTablePolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTablePolicy", "Required field: TableBucketARN, is not set");
    return PutTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTablePolicy", "Required field: Namespace, is not set");
    return PutTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTablePolicy", "Required field: Name, is not set");
    return PutTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTablePolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTablePolicyOutcome>(
      [&]() -> PutTablePolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return PutTablePolicyOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableRecordExpirationConfigurationOutcome S3TablesClient::PutTableRecordExpirationConfiguration(
    const PutTableRecordExpirationConfigurationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableRecordExpirationConfiguration", "Required field: TableArn, is not set");
    return PutTableRecordExpirationConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableRecordExpirationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableRecordExpirationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableRecordExpirationConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableRecordExpirationConfigurationOutcome>(
      [&]() -> PutTableRecordExpirationConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableRecordExpirationConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-record-expiration");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return PutTableRecordExpirationConfigurationOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableReplicationOutcome S3TablesClient::PutTableReplication(const PutTableReplicationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableReplication", "Required field: TableArn, is not set");
    return PutTableReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TableArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableReplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableReplication",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableReplicationOutcome>(
      [&]() -> PutTableReplicationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/table-replication");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? PutTableReplicationOutcome(PutTableReplicationResult(result.GetResultWithOwnership()))
                                  : PutTableReplicationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RenameTableOutcome S3TablesClient::RenameTable(const RenameTableRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RenameTable", "Required field: TableBucketARN, is not set");
    return RenameTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RenameTable", "Required field: Namespace, is not set");
    return RenameTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RenameTable", "Required field: Name, is not set");
    return RenameTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RenameTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RenameTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RenameTable",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RenameTableOutcome>(
      [&]() -> RenameTableOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RenameTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/rename");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return RenameTableOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome S3TablesClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tag/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? TagResourceOutcome(TagResourceResult(result.GetResultWithOwnership()))
                                  : TagResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome S3TablesClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tag/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UntagResourceOutcome(UntagResourceResult(result.GetResultWithOwnership()))
                                  : UntagResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTableMetadataLocationOutcome S3TablesClient::UpdateTableMetadataLocation(const UpdateTableMetadataLocationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTableMetadataLocation", "Required field: TableBucketARN, is not set");
    return UpdateTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTableMetadataLocation", "Required field: Namespace, is not set");
    return UpdateTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTableMetadataLocation", "Required field: Name, is not set");
    return UpdateTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTableMetadataLocation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTableMetadataLocationOutcome>(
      [&]() -> UpdateTableMetadataLocationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTableMetadataLocation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-location");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateTableMetadataLocationOutcome(UpdateTableMetadataLocationResult(result.GetResultWithOwnership()))
                                  : UpdateTableMetadataLocationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
