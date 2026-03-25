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
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClient.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpointProvider.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrorMarshaller.h>
#include <aws/migration-hub-refactor-spaces/model/CreateApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/CreateServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetApplicationRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetEnvironmentRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetRouteRequest.h>
#include <aws/migration-hub-refactor-spaces/model/GetServiceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesRequest.h>
#include <aws/migration-hub-refactor-spaces/model/ListTagsForResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/PutResourcePolicyRequest.h>
#include <aws/migration-hub-refactor-spaces/model/TagResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/UntagResourceRequest.h>
#include <aws/migration-hub-refactor-spaces/model/UpdateRouteRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubRefactorSpaces;
using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MigrationHubRefactorSpaces {
const char SERVICE_NAME[] = "refactor-spaces";
const char ALLOCATION_TAG[] = "MigrationHubRefactorSpacesClient";
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
const char* MigrationHubRefactorSpacesClient::GetServiceName() { return SERVICE_NAME; }
const char* MigrationHubRefactorSpacesClient::GetAllocationTag() { return ALLOCATION_TAG; }

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(
    const MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration,
    std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(
    const AWSCredentials& credentials, std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider,
    const MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider,
    const MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const AWSCredentials& credentials,
                                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MigrationHubRefactorSpacesClient::~MigrationHubRefactorSpacesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase>& MigrationHubRefactorSpacesClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void MigrationHubRefactorSpacesClient::init(const MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& config) {
  AWSClient::SetServiceClientName("Migration Hub Refactor Spaces");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "refactor-spaces");
}

void MigrationHubRefactorSpacesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MigrationHubRefactorSpacesClient::InvokeOperationOutcome MigrationHubRefactorSpacesClient::InvokeServiceOperation(
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

CreateApplicationOutcome MigrationHubRefactorSpacesClient::CreateApplication(const CreateApplicationRequest& request) const {
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateApplication", "Required field: EnvironmentIdentifier, is not set");
    return CreateApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return CreateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEnvironmentOutcome MigrationHubRefactorSpacesClient::CreateEnvironment(const CreateEnvironmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  return CreateEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRouteOutcome MigrationHubRefactorSpacesClient::CreateRoute(const CreateRouteRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: ApplicationIdentifier, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: EnvironmentIdentifier, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  };

  return CreateRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceOutcome MigrationHubRefactorSpacesClient::CreateService(const CreateServiceRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateService", "Required field: ApplicationIdentifier, is not set");
    return CreateServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateService", "Required field: EnvironmentIdentifier, is not set");
    return CreateServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  };

  return CreateServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome MigrationHubRefactorSpacesClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationIdentifier, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: EnvironmentIdentifier, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
  };

  return DeleteApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEnvironmentOutcome MigrationHubRefactorSpacesClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const {
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: EnvironmentIdentifier, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
  };

  return DeleteEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourcePolicyOutcome MigrationHubRefactorSpacesClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: Identifier, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouteOutcome MigrationHubRefactorSpacesClient::DeleteRoute(const DeleteRouteRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: ApplicationIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: EnvironmentIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: RouteIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteIdentifier());
  };

  return DeleteRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteServiceOutcome MigrationHubRefactorSpacesClient::DeleteService(const DeleteServiceRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: ApplicationIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: EnvironmentIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: ServiceIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  };

  return DeleteServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetApplicationOutcome MigrationHubRefactorSpacesClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationIdentifier, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: EnvironmentIdentifier, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
  };

  return GetApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnvironmentOutcome MigrationHubRefactorSpacesClient::GetEnvironment(const GetEnvironmentRequest& request) const {
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: EnvironmentIdentifier, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
  };

  return GetEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcePolicyOutcome MigrationHubRefactorSpacesClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: Identifier, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouteOutcome MigrationHubRefactorSpacesClient::GetRoute(const GetRouteRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: ApplicationIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: EnvironmentIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: RouteIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteIdentifier());
  };

  return GetRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceOutcome MigrationHubRefactorSpacesClient::GetService(const GetServiceRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ApplicationIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: EnvironmentIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ServiceIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
  };

  return GetServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationsOutcome MigrationHubRefactorSpacesClient::ListApplications(const ListApplicationsRequest& request) const {
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListApplications", "Required field: EnvironmentIdentifier, is not set");
    return ListApplicationsOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return ListApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnvironmentVpcsOutcome MigrationHubRefactorSpacesClient::ListEnvironmentVpcs(const ListEnvironmentVpcsRequest& request) const {
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironmentVpcs", "Required field: EnvironmentIdentifier, is not set");
    return ListEnvironmentVpcsOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpcs");
  };

  return ListEnvironmentVpcsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnvironmentsOutcome MigrationHubRefactorSpacesClient::ListEnvironments(const ListEnvironmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  return ListEnvironmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRoutesOutcome MigrationHubRefactorSpacesClient::ListRoutes(const ListRoutesRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: ApplicationIdentifier, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: EnvironmentIdentifier, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  };

  return ListRoutesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServicesOutcome MigrationHubRefactorSpacesClient::ListServices(const ListServicesRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServices", "Required field: ApplicationIdentifier, is not set");
    return ListServicesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServices", "Required field: EnvironmentIdentifier, is not set");
    return ListServicesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  };

  return ListServicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome MigrationHubRefactorSpacesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutResourcePolicyOutcome MigrationHubRefactorSpacesClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy");
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome MigrationHubRefactorSpacesClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MigrationHubRefactorSpacesClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateRouteOutcome MigrationHubRefactorSpacesClient::UpdateRoute(const UpdateRouteRequest& request) const {
  if (!request.ApplicationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: ApplicationIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: EnvironmentIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: RouteIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(
        MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteIdentifier());
  };

  return UpdateRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
