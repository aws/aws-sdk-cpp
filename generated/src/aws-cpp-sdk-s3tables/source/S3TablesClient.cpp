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


#include <aws/s3tables/S3TablesClient.h>
#include <aws/s3tables/S3TablesErrorMarshaller.h>
#include <aws/s3tables/S3TablesEndpointProvider.h>
#include <aws/s3tables/model/CreateNamespaceRequest.h>
#include <aws/s3tables/model/CreateTableRequest.h>
#include <aws/s3tables/model/CreateTableBucketRequest.h>
#include <aws/s3tables/model/DeleteNamespaceRequest.h>
#include <aws/s3tables/model/DeleteTableRequest.h>
#include <aws/s3tables/model/DeleteTableBucketRequest.h>
#include <aws/s3tables/model/DeleteTableBucketPolicyRequest.h>
#include <aws/s3tables/model/DeleteTablePolicyRequest.h>
#include <aws/s3tables/model/GetNamespaceRequest.h>
#include <aws/s3tables/model/GetTableRequest.h>
#include <aws/s3tables/model/GetTableBucketRequest.h>
#include <aws/s3tables/model/GetTableBucketMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/GetTableBucketPolicyRequest.h>
#include <aws/s3tables/model/GetTableMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/GetTableMaintenanceJobStatusRequest.h>
#include <aws/s3tables/model/GetTableMetadataLocationRequest.h>
#include <aws/s3tables/model/GetTablePolicyRequest.h>
#include <aws/s3tables/model/ListNamespacesRequest.h>
#include <aws/s3tables/model/ListTableBucketsRequest.h>
#include <aws/s3tables/model/ListTablesRequest.h>
#include <aws/s3tables/model/PutTableBucketMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/PutTableBucketPolicyRequest.h>
#include <aws/s3tables/model/PutTableMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/PutTablePolicyRequest.h>
#include <aws/s3tables/model/RenameTableRequest.h>
#include <aws/s3tables/model/UpdateTableMetadataLocationRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

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
    const char ALLOCATION_TAG[] = "S3TablesClient";
    const char SERVICE_NAME[] = "s3tables";
  }
}
const char* S3TablesClient::GetServiceName() {return SERVICE_NAME;}
const char* S3TablesClient::GetAllocationTag() {return ALLOCATION_TAG;}

S3TablesClient::S3TablesClient(const S3Tables::S3TablesClientConfiguration& clientConfiguration,
                           std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "S3Tables",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

S3TablesClient::S3TablesClient(const AWSCredentials& credentials,
                           std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider,
                           const S3Tables::S3TablesClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "S3Tables",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

S3TablesClient::S3TablesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<S3TablesEndpointProviderBase> endpointProvider,
                           const S3Tables::S3TablesClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "S3Tables",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
S3TablesClient::S3TablesClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "S3Tables",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

S3TablesClient::S3TablesClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "S3Tables",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

S3TablesClient::S3TablesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "S3Tables",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<S3TablesErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<S3TablesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

S3TablesClient::~S3TablesClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<S3TablesEndpointProviderBase>& S3TablesClient::accessEndpointProvider()
{
  return m_endpointProvider;
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNamespaceOutcome>(
    [&]()-> CreateNamespaceOutcome {
      return CreateNamespaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/namespaces/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableOutcome>(
    [&]()-> CreateTableOutcome {
      return CreateTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTableBucketOutcome S3TablesClient::CreateTableBucket(const CreateTableBucketRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTableBucket);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTableBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTableBucket",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableBucketOutcome>(
    [&]()-> CreateTableBucketOutcome {
      return CreateTableBucketOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteNamespaceOutcome>(
    [&]()-> DeleteNamespaceOutcome {
      return DeleteNamespaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/namespaces/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableOutcome>(
    [&]()-> DeleteTableOutcome {
      return DeleteTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucket",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketOutcome>(
    [&]()-> DeleteTableBucketOutcome {
      return DeleteTableBucketOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTableBucketPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableBucketPolicyOutcome>(
    [&]()-> DeleteTableBucketPolicyOutcome {
      return DeleteTableBucketPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTablePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTablePolicyOutcome>(
    [&]()-> DeleteTablePolicyOutcome {
      return DeleteTablePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetNamespaceOutcome>(
    [&]()-> GetNamespaceOutcome {
      return GetNamespaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/namespaces/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTableOutcome S3TablesClient::GetTable(const GetTableRequest& request) const
{
  AWS_OPERATION_GUARD(GetTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TableBucketARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTable", "Required field: TableBucketARN, is not set");
    return GetTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableBucketARN]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTable", "Required field: Namespace, is not set");
    return GetTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTable", "Required field: Name, is not set");
    return GetTableOutcome(Aws::Client::AWSError<S3TablesErrors>(S3TablesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableOutcome>(
    [&]()-> GetTableOutcome {
      return GetTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucket, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucket",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketOutcome>(
    [&]()-> GetTableBucketOutcome {
      return GetTableBucketOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketMaintenanceConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketMaintenanceConfigurationOutcome>(
    [&]()-> GetTableBucketMaintenanceConfigurationOutcome {
      return GetTableBucketMaintenanceConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegments("/maintenance");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableBucketPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableBucketPolicyOutcome>(
    [&]()-> GetTableBucketPolicyOutcome {
      return GetTableBucketPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMaintenanceConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMaintenanceConfigurationOutcome>(
    [&]()-> GetTableMaintenanceConfigurationOutcome {
      return GetTableMaintenanceConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/maintenance");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTableMaintenanceJobStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMaintenanceJobStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMaintenanceJobStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMaintenanceJobStatusOutcome>(
    [&]()-> GetTableMaintenanceJobStatusOutcome {
      return GetTableMaintenanceJobStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/maintenance-job-status");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTableMetadataLocation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTableMetadataLocationOutcome>(
    [&]()-> GetTableMetadataLocationOutcome {
      return GetTableMetadataLocationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/metadata-location");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTablePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTablePolicyOutcome>(
    [&]()-> GetTablePolicyOutcome {
      return GetTablePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNamespaces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNamespacesOutcome>(
    [&]()-> ListNamespacesOutcome {
      return ListNamespacesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/namespaces/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTableBucketsOutcome S3TablesClient::ListTableBuckets(const ListTableBucketsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTableBuckets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTableBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTableBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTableBuckets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTableBuckets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTableBucketsOutcome>(
    [&]()-> ListTableBucketsOutcome {
      return ListTableBucketsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTablesOutcome>(
    [&]()-> ListTablesOutcome {
      return ListTablesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketMaintenanceConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketMaintenanceConfigurationOutcome>(
    [&]()-> PutTableBucketMaintenanceConfigurationOutcome {
      return PutTableBucketMaintenanceConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegments("/maintenance/");
      resolvedEndpoint.AddPathSegment(TableBucketMaintenanceTypeMapper::GetNameForTableBucketMaintenanceType(request.GetType()));
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableBucketPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableBucketPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableBucketPolicyOutcome>(
    [&]()-> PutTableBucketPolicyOutcome {
      return PutTableBucketPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/buckets/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTableMaintenanceConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTableMaintenanceConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTableMaintenanceConfigurationOutcome>(
    [&]()-> PutTableMaintenanceConfigurationOutcome {
      return PutTableMaintenanceConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/maintenance/");
      resolvedEndpoint.AddPathSegment(TableMaintenanceTypeMapper::GetNameForTableMaintenanceType(request.GetType()));
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutTablePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutTablePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutTablePolicyOutcome>(
    [&]()-> PutTablePolicyOutcome {
      return PutTablePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RenameTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RenameTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RenameTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RenameTableOutcome>(
    [&]()-> RenameTableOutcome {
      return RenameTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/rename");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTableMetadataLocation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTableMetadataLocation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTableMetadataLocationOutcome>(
    [&]()-> UpdateTableMetadataLocationOutcome {
      return UpdateTableMetadataLocationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tables/");
      resolvedEndpoint.AddPathSegment(request.GetTableBucketARN());
      resolvedEndpoint.AddPathSegment(request.GetNamespace());
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/metadata-location");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


