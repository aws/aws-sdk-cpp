/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/s3tables/S3TablesClient.h>
#include <aws/s3tables/S3TablesErrorMarshaller.h>
#include <aws/s3tables/S3TablesEndpointProvider.h>
#include <aws/s3tables/model/CreateNamespaceRequest.h>
#include <aws/s3tables/model/CreateTableRequest.h>
#include <aws/s3tables/model/CreateTableBucketRequest.h>
#include <aws/s3tables/model/DeleteNamespaceRequest.h>
#include <aws/s3tables/model/DeleteTableRequest.h>
#include <aws/s3tables/model/DeleteTableBucketRequest.h>
#include <aws/s3tables/model/DeleteTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/DeleteTableBucketPolicyRequest.h>
#include <aws/s3tables/model/DeleteTablePolicyRequest.h>
#include <aws/s3tables/model/GetNamespaceRequest.h>
#include <aws/s3tables/model/GetTableRequest.h>
#include <aws/s3tables/model/GetTableBucketRequest.h>
#include <aws/s3tables/model/GetTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/GetTableBucketMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/GetTableBucketPolicyRequest.h>
#include <aws/s3tables/model/GetTableEncryptionRequest.h>
#include <aws/s3tables/model/GetTableMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/GetTableMaintenanceJobStatusRequest.h>
#include <aws/s3tables/model/GetTableMetadataLocationRequest.h>
#include <aws/s3tables/model/GetTablePolicyRequest.h>
#include <aws/s3tables/model/ListNamespacesRequest.h>
#include <aws/s3tables/model/ListTableBucketsRequest.h>
#include <aws/s3tables/model/ListTablesRequest.h>
#include <aws/s3tables/model/PutTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/PutTableBucketMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/PutTableBucketPolicyRequest.h>
#include <aws/s3tables/model/PutTableMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/PutTablePolicyRequest.h>
#include <aws/s3tables/model/RenameTableRequest.h>
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

namespace Aws
{
  namespace S3Tables
  {
    const char SERVICE_NAME[] = "s3tables";
    const char ALLOCATION_TAG[] = "S3TablesClient";
  }
}
const char* S3TablesClient::GetServiceName() {return SERVICE_NAME;}
const char* S3TablesClient::GetAllocationTag() {return ALLOCATION_TAG;}

S3TablesClient::S3TablesClient(const S3Tables::S3TablesClientConfiguration& clientConfiguration,
                               std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3TablesClient::S3TablesClient(const AWSCredentials& credentials,
                               std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider,
                               const S3Tables::S3TablesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3TablesClient::S3TablesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider,
                               const S3Tables::S3TablesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  S3TablesClient::S3TablesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3TablesClient::S3TablesClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

S3TablesClient::S3TablesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
S3TablesClient::~S3TablesClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<S3TablesEndpointProviderBase>& S3TablesClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void S3TablesClient::init(const S3Tables::S3TablesClientConfiguration& config)
{
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
  m_endpointProvider->InitBuiltInParameters(config);
}

void S3TablesClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateNamespaceOutcome S3TablesClient::CreateNamespace(const CreateNamespaceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNamespace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNamespace", "Required field: TableBucketARN, is not set");
    return CreateNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNamespaceOutcome>(
    [&]()-> CreateNamespaceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      return CreateNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTableOutcome S3TablesClient::CreateTable(const CreateTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTable", "Required field: TableBucketARN, is not set");
    return CreateTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTable", "Required field: Namespace, is not set");
    return CreateTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableOutcome>(
    [&]()-> CreateTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      return CreateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTableBucketOutcome S3TablesClient::CreateTableBucket(const CreateTableBucketRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTableBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTableBucket",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableBucketOutcome>(
    [&]()-> CreateTableBucketOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets");
      return CreateTableBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNamespaceOutcome S3TablesClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteNamespace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: TableBucketARN, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: Namespace, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteNamespaceOutcome>(
    [&]()-> DeleteNamespaceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      return DeleteNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableOutcome S3TablesClient::DeleteTable(const DeleteTableRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTable", "Required field: TableBucketARN, is not set");
    return DeleteTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTable", "Required field: Namespace, is not set");
    return DeleteTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTable", "Required field: Name, is not set");
    return DeleteTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableOutcome>(
    [&]()-> DeleteTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      return DeleteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableBucketOutcome S3TablesClient::DeleteTableBucket(const DeleteTableBucketRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTableBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTableBucket", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucket",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketOutcome>(
    [&]()-> DeleteTableBucketOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      return DeleteTableBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableBucketEncryptionOutcome S3TablesClient::DeleteTableBucketEncryption(const DeleteTableBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTableBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTableBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucketEncryption",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketEncryptionOutcome>(
    [&]()-> DeleteTableBucketEncryptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
      return DeleteTableBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableBucketPolicyOutcome S3TablesClient::DeleteTableBucketPolicy(const DeleteTableBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTableBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return DeleteTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucketPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketPolicyOutcome>(
    [&]()-> DeleteTableBucketPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return DeleteTableBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTablePolicyOutcome S3TablesClient::DeleteTablePolicy(const DeleteTablePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTablePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTablePolicy", "Required field: TableBucketARN, is not set");
    return DeleteTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTablePolicy", "Required field: Namespace, is not set");
    return DeleteTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTablePolicy", "Required field: Name, is not set");
    return DeleteTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTablePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTablePolicyOutcome>(
    [&]()-> DeleteTablePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return DeleteTablePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetNamespaceOutcome S3TablesClient::GetNamespace(const GetNamespaceRequest& request) const
{
  AWS_OPERATION_GUARD(GetNamespace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNamespace", "Required field: TableBucketARN, is not set");
    return GetNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNamespace", "Required field: Namespace, is not set");
    return GetNamespaceOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetNamespaceOutcome>(
    [&]()-> GetNamespaceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      return GetNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableOutcome S3TablesClient::GetTable(const GetTableRequest& request) const
{
  AWS_OPERATION_GUARD(GetTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableOutcome>(
    [&]()-> GetTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/get-table");
      return GetTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketOutcome S3TablesClient::GetTableBucket(const GetTableBucketRequest& request) const
{
  AWS_OPERATION_GUARD(GetTableBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableBucket", "Required field: TableBucketARN, is not set");
    return GetTableBucketOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucket",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketOutcome>(
    [&]()-> GetTableBucketOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      return GetTableBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketEncryptionOutcome S3TablesClient::GetTableBucketEncryption(const GetTableBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(GetTableBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return GetTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketEncryption",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketEncryptionOutcome>(
    [&]()-> GetTableBucketEncryptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
      return GetTableBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketMaintenanceConfigurationOutcome S3TablesClient::GetTableBucketMaintenanceConfiguration(const GetTableBucketMaintenanceConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetTableBucketMaintenanceConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableBucketMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return GetTableBucketMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketMaintenanceConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketMaintenanceConfigurationOutcome>(
    [&]()-> GetTableBucketMaintenanceConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance");
      return GetTableBucketMaintenanceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableBucketPolicyOutcome S3TablesClient::GetTableBucketPolicy(const GetTableBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetTableBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return GetTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketPolicyOutcome>(
    [&]()-> GetTableBucketPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return GetTableBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableEncryptionOutcome S3TablesClient::GetTableEncryption(const GetTableEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(GetTableEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableEncryption", "Required field: TableBucketARN, is not set");
    return GetTableEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableEncryption", "Required field: Namespace, is not set");
    return GetTableEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableEncryption", "Required field: Name, is not set");
    return GetTableEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableEncryption",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableEncryptionOutcome>(
    [&]()-> GetTableEncryptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
      return GetTableEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableMaintenanceConfigurationOutcome S3TablesClient::GetTableMaintenanceConfiguration(const GetTableMaintenanceConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetTableMaintenanceConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return GetTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceConfiguration", "Required field: Namespace, is not set");
    return GetTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceConfiguration", "Required field: Name, is not set");
    return GetTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMaintenanceConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMaintenanceConfigurationOutcome>(
    [&]()-> GetTableMaintenanceConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance");
      return GetTableMaintenanceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableMaintenanceJobStatusOutcome S3TablesClient::GetTableMaintenanceJobStatus(const GetTableMaintenanceJobStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetTableMaintenanceJobStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableMaintenanceJobStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceJobStatus", "Required field: TableBucketARN, is not set");
    return GetTableMaintenanceJobStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceJobStatus", "Required field: Namespace, is not set");
    return GetTableMaintenanceJobStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMaintenanceJobStatus", "Required field: Name, is not set");
    return GetTableMaintenanceJobStatusOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableMaintenanceJobStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMaintenanceJobStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMaintenanceJobStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMaintenanceJobStatusOutcome>(
    [&]()-> GetTableMaintenanceJobStatusOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableMaintenanceJobStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance-job-status");
      return GetTableMaintenanceJobStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableMetadataLocationOutcome S3TablesClient::GetTableMetadataLocation(const GetTableMetadataLocationRequest& request) const
{
  AWS_OPERATION_GUARD(GetTableMetadataLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableMetadataLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMetadataLocation", "Required field: TableBucketARN, is not set");
    return GetTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMetadataLocation", "Required field: Namespace, is not set");
    return GetTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTableMetadataLocation", "Required field: Name, is not set");
    return GetTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMetadataLocation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMetadataLocationOutcome>(
    [&]()-> GetTableMetadataLocationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableMetadataLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-location");
      return GetTableMetadataLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTablePolicyOutcome S3TablesClient::GetTablePolicy(const GetTablePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetTablePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTablePolicy", "Required field: TableBucketARN, is not set");
    return GetTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTablePolicy", "Required field: Namespace, is not set");
    return GetTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTablePolicy", "Required field: Name, is not set");
    return GetTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTablePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTablePolicyOutcome>(
    [&]()-> GetTablePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return GetTablePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNamespacesOutcome S3TablesClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  AWS_OPERATION_GUARD(ListNamespaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNamespaces", "Required field: TableBucketARN, is not set");
    return ListNamespacesOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNamespaces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNamespacesOutcome>(
    [&]()-> ListNamespacesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      return ListNamespacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTableBucketsOutcome S3TablesClient::ListTableBuckets(const ListTableBucketsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTableBuckets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTableBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTableBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTableBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTableBuckets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTableBucketsOutcome>(
    [&]()-> ListTableBucketsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets");
      return ListTableBucketsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTablesOutcome S3TablesClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTables", "Required field: TableBucketARN, is not set");
    return ListTablesOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTablesOutcome>(
    [&]()-> ListTablesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      return ListTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketEncryptionOutcome S3TablesClient::PutTableBucketEncryption(const PutTableBucketEncryptionRequest& request) const
{
  AWS_OPERATION_GUARD(PutTableBucketEncryption);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutTableBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTableBucketEncryption", "Required field: TableBucketARN, is not set");
    return PutTableBucketEncryptionOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketEncryption, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketEncryption",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketEncryptionOutcome>(
    [&]()-> PutTableBucketEncryptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketEncryption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegments("/encryption");
      return PutTableBucketEncryptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketMaintenanceConfigurationOutcome S3TablesClient::PutTableBucketMaintenanceConfiguration(const PutTableBucketMaintenanceConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutTableBucketMaintenanceConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTableBucketMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return PutTableBucketMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTableBucketMaintenanceConfiguration", "Required field: Type, is not set");
    return PutTableBucketMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketMaintenanceConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketMaintenanceConfigurationOutcome>(
    [&]()-> PutTableBucketMaintenanceConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance/");
      endpointResolutionOutcome.GetResult().AddPathSegment(TableBucketMaintenanceTypeMapper::GetNameForTableBucketMaintenanceType(request.GetType()));
      return PutTableBucketMaintenanceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableBucketPolicyOutcome S3TablesClient::PutTableBucketPolicy(const PutTableBucketPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutTableBucketPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTableBucketPolicy", "Required field: TableBucketARN, is not set");
    return PutTableBucketPolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketPolicyOutcome>(
    [&]()-> PutTableBucketPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableBucketPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/buckets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return PutTableBucketPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTableMaintenanceConfigurationOutcome S3TablesClient::PutTableMaintenanceConfiguration(const PutTableMaintenanceConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutTableMaintenanceConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutTableMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTableMaintenanceConfiguration", "Required field: TableBucketARN, is not set");
    return PutTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTableMaintenanceConfiguration", "Required field: Namespace, is not set");
    return PutTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTableMaintenanceConfiguration", "Required field: Name, is not set");
    return PutTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTableMaintenanceConfiguration", "Required field: Type, is not set");
    return PutTableMaintenanceConfigurationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableMaintenanceConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableMaintenanceConfigurationOutcome>(
    [&]()-> PutTableMaintenanceConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTableMaintenanceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/maintenance/");
      endpointResolutionOutcome.GetResult().AddPathSegment(TableMaintenanceTypeMapper::GetNameForTableMaintenanceType(request.GetType()));
      return PutTableMaintenanceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutTablePolicyOutcome S3TablesClient::PutTablePolicy(const PutTablePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutTablePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTablePolicy", "Required field: TableBucketARN, is not set");
    return PutTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTablePolicy", "Required field: Namespace, is not set");
    return PutTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutTablePolicy", "Required field: Name, is not set");
    return PutTablePolicyOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTablePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTablePolicyOutcome>(
    [&]()-> PutTablePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTablePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return PutTablePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RenameTableOutcome S3TablesClient::RenameTable(const RenameTableRequest& request) const
{
  AWS_OPERATION_GUARD(RenameTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RenameTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RenameTable", "Required field: TableBucketARN, is not set");
    return RenameTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RenameTable", "Required field: Namespace, is not set");
    return RenameTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RenameTable", "Required field: Name, is not set");
    return RenameTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RenameTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RenameTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RenameTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RenameTableOutcome>(
    [&]()-> RenameTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RenameTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/rename");
      return RenameTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTableMetadataLocationOutcome S3TablesClient::UpdateTableMetadataLocation(const UpdateTableMetadataLocationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTableMetadataLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTableMetadataLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTableMetadataLocation", "Required field: TableBucketARN, is not set");
    return UpdateTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTableMetadataLocation", "Required field: Namespace, is not set");
    return UpdateTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTableMetadataLocation", "Required field: Name, is not set");
    return UpdateTableMetadataLocationOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTableMetadataLocation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTableMetadataLocationOutcome>(
    [&]()-> UpdateTableMetadataLocationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTableMetadataLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableBucketARN());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-location");
      return UpdateTableMetadataLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

