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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateNamespaceOutcome(result.GetResultWithOwnership())
                            : CreateNamespaceOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateTableOutcome(result.GetResultWithOwnership()) : CreateTableOutcome(std::move(result.GetError()));
}

CreateTableBucketOutcome S3TablesClient::CreateTableBucket(const CreateTableBucketRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateTableBucketOutcome(result.GetResultWithOwnership())
                            : CreateTableBucketOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNamespaceOutcome(result.GetResultWithOwnership())
                            : DeleteNamespaceOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTableOutcome(result.GetResultWithOwnership()) : DeleteTableOutcome(std::move(result.GetError()));
}

DeleteTableBucketOutcome S3TablesClient::DeleteTableBucket(const DeleteTableBucketRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucket", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTableBucketOutcome(result.GetResultWithOwnership())
                            : DeleteTableBucketOutcome(std::move(result.GetError()));
}

DeleteTableBucketEncryptionOutcome S3TablesClient::DeleteTableBucketEncryption(const DeleteTableBucketEncryptionRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTableBucketEncryptionOutcome(result.GetResultWithOwnership())
                            : DeleteTableBucketEncryptionOutcome(std::move(result.GetError()));
}

DeleteTableBucketMetricsConfigurationOutcome S3TablesClient::DeleteTableBucketMetricsConfiguration(
    const DeleteTableBucketMetricsConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketMetricsConfiguration", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTableBucketMetricsConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteTableBucketMetricsConfigurationOutcome(std::move(result.GetError()));
}

DeleteTableBucketPolicyOutcome S3TablesClient::DeleteTableBucketPolicy(const DeleteTableBucketPolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTableBucketPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteTableBucketPolicyOutcome(std::move(result.GetError()));
}

DeleteTableBucketReplicationOutcome S3TablesClient::DeleteTableBucketReplication(const DeleteTableBucketReplicationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketReplication", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-bucket-replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTableBucketReplicationOutcome(result.GetResultWithOwnership())
                            : DeleteTableBucketReplicationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTablePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteTablePolicyOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTableReplicationOutcome(result.GetResultWithOwnership())
                            : DeleteTableReplicationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNamespaceOutcome(result.GetResultWithOwnership()) : GetNamespaceOutcome(std::move(result.GetError()));
}

GetTableOutcome S3TablesClient::GetTable(const GetTableRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-table");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableOutcome(result.GetResultWithOwnership()) : GetTableOutcome(std::move(result.GetError()));
}

GetTableBucketOutcome S3TablesClient::GetTableBucket(const GetTableBucketRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucket", "Required field: TableBucketARN, is not set");
    return GetTableBucketOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableBucketOutcome(result.GetResultWithOwnership()) : GetTableBucketOutcome(std::move(result.GetError()));
}

GetTableBucketEncryptionOutcome S3TablesClient::GetTableBucketEncryption(const GetTableBucketEncryptionRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return GetTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableBucketEncryptionOutcome(result.GetResultWithOwnership())
                            : GetTableBucketEncryptionOutcome(std::move(result.GetError()));
}

GetTableBucketMaintenanceConfigurationOutcome S3TablesClient::GetTableBucketMaintenanceConfiguration(
    const GetTableBucketMaintenanceConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return GetTableBucketMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableBucketMaintenanceConfigurationOutcome(result.GetResultWithOwnership())
                            : GetTableBucketMaintenanceConfigurationOutcome(std::move(result.GetError()));
}

GetTableBucketMetricsConfigurationOutcome S3TablesClient::GetTableBucketMetricsConfiguration(
    const GetTableBucketMetricsConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketMetricsConfiguration", "Required field: TableBucketARN, is not set");
    return GetTableBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableBucketMetricsConfigurationOutcome(result.GetResultWithOwnership())
                            : GetTableBucketMetricsConfigurationOutcome(std::move(result.GetError()));
}

GetTableBucketPolicyOutcome S3TablesClient::GetTableBucketPolicy(const GetTableBucketPolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return GetTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableBucketPolicyOutcome(result.GetResultWithOwnership())
                            : GetTableBucketPolicyOutcome(std::move(result.GetError()));
}

GetTableBucketReplicationOutcome S3TablesClient::GetTableBucketReplication(const GetTableBucketReplicationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketReplication", "Required field: TableBucketARN, is not set");
    return GetTableBucketReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-bucket-replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableBucketReplicationOutcome(result.GetResultWithOwnership())
                            : GetTableBucketReplicationOutcome(std::move(result.GetError()));
}

GetTableBucketStorageClassOutcome S3TablesClient::GetTableBucketStorageClass(const GetTableBucketStorageClassRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableBucketStorageClass", "Required field: TableBucketARN, is not set");
    return GetTableBucketStorageClassOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-class");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableBucketStorageClassOutcome(result.GetResultWithOwnership())
                            : GetTableBucketStorageClassOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableEncryptionOutcome(result.GetResultWithOwnership())
                            : GetTableEncryptionOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableMaintenanceConfigurationOutcome(result.GetResultWithOwnership())
                            : GetTableMaintenanceConfigurationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance-job-status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableMaintenanceJobStatusOutcome(result.GetResultWithOwnership())
                            : GetTableMaintenanceJobStatusOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-location");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableMetadataLocationOutcome(result.GetResultWithOwnership())
                            : GetTableMetadataLocationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTablePolicyOutcome(result.GetResultWithOwnership()) : GetTablePolicyOutcome(std::move(result.GetError()));
}

GetTableRecordExpirationConfigurationOutcome S3TablesClient::GetTableRecordExpirationConfiguration(
    const GetTableRecordExpirationConfigurationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableRecordExpirationConfiguration", "Required field: TableArn, is not set");
    return GetTableRecordExpirationConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-record-expiration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableRecordExpirationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetTableRecordExpirationConfigurationOutcome(std::move(result.GetError()));
}

GetTableRecordExpirationJobStatusOutcome S3TablesClient::GetTableRecordExpirationJobStatus(
    const GetTableRecordExpirationJobStatusRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableRecordExpirationJobStatus", "Required field: TableArn, is not set");
    return GetTableRecordExpirationJobStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-record-expiration-job-status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableRecordExpirationJobStatusOutcome(result.GetResultWithOwnership())
                            : GetTableRecordExpirationJobStatusOutcome(std::move(result.GetError()));
}

GetTableReplicationOutcome S3TablesClient::GetTableReplication(const GetTableReplicationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableReplication", "Required field: TableArn, is not set");
    return GetTableReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TableArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableReplicationOutcome(result.GetResultWithOwnership())
                            : GetTableReplicationOutcome(std::move(result.GetError()));
}

GetTableReplicationStatusOutcome S3TablesClient::GetTableReplicationStatus(const GetTableReplicationStatusRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTableReplicationStatus", "Required field: TableArn, is not set");
    return GetTableReplicationStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [TableArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication-status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableReplicationStatusOutcome(result.GetResultWithOwnership())
                            : GetTableReplicationStatusOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-class");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTableStorageClassOutcome(result.GetResultWithOwnership())
                            : GetTableStorageClassOutcome(std::move(result.GetError()));
}

ListNamespacesOutcome S3TablesClient::ListNamespaces(const ListNamespacesRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNamespaces", "Required field: TableBucketARN, is not set");
    return ListNamespacesOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNamespacesOutcome(result.GetResultWithOwnership()) : ListNamespacesOutcome(std::move(result.GetError()));
}

ListTableBucketsOutcome S3TablesClient::ListTableBuckets(const ListTableBucketsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTableBucketsOutcome(result.GetResultWithOwnership())
                            : ListTableBucketsOutcome(std::move(result.GetError()));
}

ListTablesOutcome S3TablesClient::ListTables(const ListTablesRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTables", "Required field: TableBucketARN, is not set");
    return ListTablesOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTablesOutcome(result.GetResultWithOwnership()) : ListTablesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome S3TablesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tag/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutTableBucketEncryptionOutcome S3TablesClient::PutTableBucketEncryption(const PutTableBucketEncryptionRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return PutTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableBucketEncryptionOutcome(result.GetResultWithOwnership())
                            : PutTableBucketEncryptionOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        TableBucketMaintenanceTypeMapper::GetNameForTableBucketMaintenanceType(request.GetType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableBucketMaintenanceConfigurationOutcome(result.GetResultWithOwnership())
                            : PutTableBucketMaintenanceConfigurationOutcome(std::move(result.GetError()));
}

PutTableBucketMetricsConfigurationOutcome S3TablesClient::PutTableBucketMetricsConfiguration(
    const PutTableBucketMetricsConfigurationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketMetricsConfiguration", "Required field: TableBucketARN, is not set");
    return PutTableBucketMetricsConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableBucketMetricsConfigurationOutcome(result.GetResultWithOwnership())
                            : PutTableBucketMetricsConfigurationOutcome(std::move(result.GetError()));
}

PutTableBucketPolicyOutcome S3TablesClient::PutTableBucketPolicy(const PutTableBucketPolicyRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return PutTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableBucketPolicyOutcome(result.GetResultWithOwnership())
                            : PutTableBucketPolicyOutcome(std::move(result.GetError()));
}

PutTableBucketReplicationOutcome S3TablesClient::PutTableBucketReplication(const PutTableBucketReplicationRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketReplication", "Required field: TableBucketARN, is not set");
    return PutTableBucketReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-bucket-replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableBucketReplicationOutcome(result.GetResultWithOwnership())
                            : PutTableBucketReplicationOutcome(std::move(result.GetError()));
}

PutTableBucketStorageClassOutcome S3TablesClient::PutTableBucketStorageClass(const PutTableBucketStorageClassRequest& request) const {
  if (!request.TableBucketARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableBucketStorageClass", "Required field: TableBucketARN, is not set");
    return PutTableBucketStorageClassOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TableBucketARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-class");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableBucketStorageClassOutcome(result.GetResultWithOwnership())
                            : PutTableBucketStorageClassOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TableMaintenanceTypeMapper::GetNameForTableMaintenanceType(request.GetType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableMaintenanceConfigurationOutcome(result.GetResultWithOwnership())
                            : PutTableMaintenanceConfigurationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTablePolicyOutcome(result.GetResultWithOwnership()) : PutTablePolicyOutcome(std::move(result.GetError()));
}

PutTableRecordExpirationConfigurationOutcome S3TablesClient::PutTableRecordExpirationConfiguration(
    const PutTableRecordExpirationConfigurationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableRecordExpirationConfiguration", "Required field: TableArn, is not set");
    return PutTableRecordExpirationConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(
        S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-record-expiration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableRecordExpirationConfigurationOutcome(result.GetResultWithOwnership())
                            : PutTableRecordExpirationConfigurationOutcome(std::move(result.GetError()));
}

PutTableReplicationOutcome S3TablesClient::PutTableReplication(const PutTableReplicationRequest& request) const {
  if (!request.TableArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTableReplication", "Required field: TableArn, is not set");
    return PutTableReplicationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TableArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/table-replication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTableReplicationOutcome(result.GetResultWithOwnership())
                            : PutTableReplicationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rename");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RenameTableOutcome(result.GetResultWithOwnership()) : RenameTableOutcome(std::move(result.GetError()));
}

TagResourceOutcome S3TablesClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tag/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tag/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-location");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTableMetadataLocationOutcome(result.GetResultWithOwnership())
                            : UpdateTableMetadataLocationOutcome(std::move(result.GetError()));
}
