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
#include <aws/schemas/SchemasClient.h>
#include <aws/schemas/SchemasEndpointProvider.h>
#include <aws/schemas/SchemasErrorMarshaller.h>
#include <aws/schemas/model/CreateDiscovererRequest.h>
#include <aws/schemas/model/CreateRegistryRequest.h>
#include <aws/schemas/model/CreateSchemaRequest.h>
#include <aws/schemas/model/DeleteDiscovererRequest.h>
#include <aws/schemas/model/DeleteRegistryRequest.h>
#include <aws/schemas/model/DeleteResourcePolicyRequest.h>
#include <aws/schemas/model/DeleteSchemaRequest.h>
#include <aws/schemas/model/DeleteSchemaVersionRequest.h>
#include <aws/schemas/model/DescribeCodeBindingRequest.h>
#include <aws/schemas/model/DescribeDiscovererRequest.h>
#include <aws/schemas/model/DescribeRegistryRequest.h>
#include <aws/schemas/model/DescribeSchemaRequest.h>
#include <aws/schemas/model/ExportSchemaRequest.h>
#include <aws/schemas/model/GetCodeBindingSourceRequest.h>
#include <aws/schemas/model/GetDiscoveredSchemaRequest.h>
#include <aws/schemas/model/GetResourcePolicyRequest.h>
#include <aws/schemas/model/ListDiscoverersRequest.h>
#include <aws/schemas/model/ListRegistriesRequest.h>
#include <aws/schemas/model/ListSchemaVersionsRequest.h>
#include <aws/schemas/model/ListSchemasRequest.h>
#include <aws/schemas/model/ListTagsForResourceRequest.h>
#include <aws/schemas/model/PutCodeBindingRequest.h>
#include <aws/schemas/model/PutResourcePolicyRequest.h>
#include <aws/schemas/model/SearchSchemasRequest.h>
#include <aws/schemas/model/StartDiscovererRequest.h>
#include <aws/schemas/model/StopDiscovererRequest.h>
#include <aws/schemas/model/TagResourceRequest.h>
#include <aws/schemas/model/UntagResourceRequest.h>
#include <aws/schemas/model/UpdateDiscovererRequest.h>
#include <aws/schemas/model/UpdateRegistryRequest.h>
#include <aws/schemas/model/UpdateSchemaRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Schemas;
using namespace Aws::Schemas::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Schemas {
const char SERVICE_NAME[] = "schemas";
const char ALLOCATION_TAG[] = "SchemasClient";
}  // namespace Schemas
}  // namespace Aws
const char* SchemasClient::GetServiceName() { return SERVICE_NAME; }
const char* SchemasClient::GetAllocationTag() { return ALLOCATION_TAG; }

SchemasClient::SchemasClient(const Schemas::SchemasClientConfiguration& clientConfiguration,
                             std::shared_ptr<SchemasEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SchemasClient::SchemasClient(const AWSCredentials& credentials, std::shared_ptr<SchemasEndpointProviderBase> endpointProvider,
                             const Schemas::SchemasClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SchemasClient::SchemasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<SchemasEndpointProviderBase> endpointProvider,
                             const Schemas::SchemasClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SchemasClient::SchemasClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SchemasClient::SchemasClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SchemasClient::SchemasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SchemasClient::~SchemasClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SchemasEndpointProviderBase>& SchemasClient::accessEndpointProvider() { return m_endpointProvider; }

void SchemasClient::init(const Schemas::SchemasClientConfiguration& config) {
  AWSClient::SetServiceClientName("schemas");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "schemas");
}

void SchemasClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SchemasClient::InvokeOperationOutcome SchemasClient::InvokeServiceOperation(
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

CreateDiscovererOutcome SchemasClient::CreateDiscoverer(const CreateDiscovererRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers");
  };

  return CreateDiscovererOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegistryOutcome SchemasClient::CreateRegistry(const CreateRegistryRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRegistry", "Required field: RegistryName, is not set");
    return CreateRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RegistryName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  };

  return CreateRegistryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSchemaOutcome SchemasClient::CreateSchema(const CreateSchemaRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSchema", "Required field: RegistryName, is not set");
    return CreateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSchema", "Required field: SchemaName, is not set");
    return CreateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  };

  return CreateSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDiscovererOutcome SchemasClient::DeleteDiscoverer(const DeleteDiscovererRequest& request) const {
  if (!request.DiscovererIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDiscoverer", "Required field: DiscovererId, is not set");
    return DeleteDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DiscovererId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
  };

  return DeleteDiscovererOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRegistryOutcome SchemasClient::DeleteRegistry(const DeleteRegistryRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRegistry", "Required field: RegistryName, is not set");
    return DeleteRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RegistryName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  };

  return DeleteRegistryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourcePolicyOutcome SchemasClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/policy");
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSchemaOutcome SchemasClient::DeleteSchema(const DeleteSchemaRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchema", "Required field: RegistryName, is not set");
    return DeleteSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchema", "Required field: SchemaName, is not set");
    return DeleteSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  };

  return DeleteSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSchemaVersionOutcome SchemasClient::DeleteSchemaVersion(const DeleteSchemaVersionRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: RegistryName, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: SchemaName, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SchemaName]", false));
  }
  if (!request.SchemaVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: SchemaVersion, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SchemaVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaVersion());
  };

  return DeleteSchemaVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeCodeBindingOutcome SchemasClient::DescribeCodeBinding(const DescribeCodeBindingRequest& request) const {
  if (!request.LanguageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: Language, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: RegistryName, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: SchemaName, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/language/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLanguage());
  };

  return DescribeCodeBindingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDiscovererOutcome SchemasClient::DescribeDiscoverer(const DescribeDiscovererRequest& request) const {
  if (!request.DiscovererIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDiscoverer", "Required field: DiscovererId, is not set");
    return DescribeDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DiscovererId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
  };

  return DescribeDiscovererOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRegistryOutcome SchemasClient::DescribeRegistry(const DescribeRegistryRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRegistry", "Required field: RegistryName, is not set");
    return DescribeRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RegistryName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  };

  return DescribeRegistryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeSchemaOutcome SchemasClient::DescribeSchema(const DescribeSchemaRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSchema", "Required field: RegistryName, is not set");
    return DescribeSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSchema", "Required field: SchemaName, is not set");
    return DescribeSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  };

  return DescribeSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ExportSchemaOutcome SchemasClient::ExportSchema(const ExportSchemaRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportSchema", "Required field: RegistryName, is not set");
    return ExportSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportSchema", "Required field: SchemaName, is not set");
    return ExportSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [SchemaName]", false));
  }
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportSchema", "Required field: Type, is not set");
    return ExportSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Type]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/export");
  };

  return ExportSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCodeBindingSourceOutcome SchemasClient::GetCodeBindingSource(const GetCodeBindingSourceRequest& request) const {
  AWS_OPERATION_GUARD(GetCodeBindingSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCodeBindingSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LanguageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: Language, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: RegistryName, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: SchemaName, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SchemaName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetCodeBindingSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCodeBindingSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCodeBindingSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCodeBindingSourceOutcome>(
      [&]() -> GetCodeBindingSourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCodeBindingSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/language/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLanguage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/source");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetCodeBindingSourceOutcome(GetCodeBindingSourceResult(result.GetResultWithOwnership()))
                                  : GetCodeBindingSourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDiscoveredSchemaOutcome SchemasClient::GetDiscoveredSchema(const GetDiscoveredSchemaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discover");
  };

  return GetDiscoveredSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome SchemasClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/policy");
  };

  return GetResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDiscoverersOutcome SchemasClient::ListDiscoverers(const ListDiscoverersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers");
  };

  return ListDiscoverersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRegistriesOutcome SchemasClient::ListRegistries(const ListRegistriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries");
  };

  return ListRegistriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSchemaVersionsOutcome SchemasClient::ListSchemaVersions(const ListSchemaVersionsRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSchemaVersions", "Required field: RegistryName, is not set");
    return ListSchemaVersionsOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSchemaVersions", "Required field: SchemaName, is not set");
    return ListSchemaVersionsOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListSchemaVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSchemasOutcome SchemasClient::ListSchemas(const ListSchemasRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSchemas", "Required field: RegistryName, is not set");
    return ListSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [RegistryName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas");
  };

  return ListSchemasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome SchemasClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutCodeBindingOutcome SchemasClient::PutCodeBinding(const PutCodeBindingRequest& request) const {
  if (!request.LanguageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: Language, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: RegistryName, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: SchemaName, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/language/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLanguage());
  };

  return PutCodeBindingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome SchemasClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/policy");
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SearchSchemasOutcome SchemasClient::SearchSchemas(const SearchSchemasRequest& request) const {
  if (!request.KeywordsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchSchemas", "Required field: Keywords, is not set");
    return SearchSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Keywords]", false));
  }
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchSchemas", "Required field: RegistryName, is not set");
    return SearchSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RegistryName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/search");
  };

  return SearchSchemasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartDiscovererOutcome SchemasClient::StartDiscoverer(const StartDiscovererRequest& request) const {
  if (!request.DiscovererIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDiscoverer", "Required field: DiscovererId, is not set");
    return StartDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DiscovererId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartDiscovererOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDiscovererOutcome SchemasClient::StopDiscoverer(const StopDiscovererRequest& request) const {
  if (!request.DiscovererIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDiscoverer", "Required field: DiscovererId, is not set");
    return StopDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DiscovererId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopDiscovererOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SchemasClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SchemasClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateDiscovererOutcome SchemasClient::UpdateDiscoverer(const UpdateDiscovererRequest& request) const {
  if (!request.DiscovererIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDiscoverer", "Required field: DiscovererId, is not set");
    return UpdateDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DiscovererId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
  };

  return UpdateDiscovererOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRegistryOutcome SchemasClient::UpdateRegistry(const UpdateRegistryRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRegistry", "Required field: RegistryName, is not set");
    return UpdateRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RegistryName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  };

  return UpdateRegistryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSchemaOutcome SchemasClient::UpdateSchema(const UpdateSchemaRequest& request) const {
  if (!request.RegistryNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSchema", "Required field: RegistryName, is not set");
    return UpdateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSchema", "Required field: SchemaName, is not set");
    return UpdateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [SchemaName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  };

  return UpdateSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
