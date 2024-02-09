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

#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClient.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrorMarshaller.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpointProvider.h>
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

namespace Aws
{
  namespace MigrationHubRefactorSpaces
  {
    const char SERVICE_NAME[] = "refactor-spaces";
    const char ALLOCATION_TAG[] = "MigrationHubRefactorSpacesClient";
  }
}
const char* MigrationHubRefactorSpacesClient::GetServiceName() {return SERVICE_NAME;}
const char* MigrationHubRefactorSpacesClient::GetAllocationTag() {return ALLOCATION_TAG;}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration,
                                                                   std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const AWSCredentials& credentials,
                                                                   std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider,
                                                                   const MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                   std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider,
                                                                   const MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const AWSCredentials& credentials,
                                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubRefactorSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MigrationHubRefactorSpacesClient::~MigrationHubRefactorSpacesClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase>& MigrationHubRefactorSpacesClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MigrationHubRefactorSpacesClient::init(const MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Migration Hub Refactor Spaces");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MigrationHubRefactorSpacesClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateApplicationOutcome MigrationHubRefactorSpacesClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApplication", "Required field: EnvironmentIdentifier, is not set");
    return CreateApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateApplicationOutcome>(
    [&]()-> CreateApplicationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
      return CreateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEnvironmentOutcome MigrationHubRefactorSpacesClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEnvironmentOutcome>(
    [&]()-> CreateEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
      return CreateEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouteOutcome MigrationHubRefactorSpacesClient::CreateRoute(const CreateRouteRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: ApplicationIdentifier, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: EnvironmentIdentifier, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRouteOutcome>(
    [&]()-> CreateRouteOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
      return CreateRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateServiceOutcome MigrationHubRefactorSpacesClient::CreateService(const CreateServiceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateService", "Required field: ApplicationIdentifier, is not set");
    return CreateServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateService", "Required field: EnvironmentIdentifier, is not set");
    return CreateServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateService",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateServiceOutcome>(
    [&]()-> CreateServiceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/services");
      return CreateServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteApplicationOutcome MigrationHubRefactorSpacesClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationIdentifier, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: EnvironmentIdentifier, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteApplicationOutcome>(
    [&]()-> DeleteApplicationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      return DeleteApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEnvironmentOutcome MigrationHubRefactorSpacesClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: EnvironmentIdentifier, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnvironmentOutcome>(
    [&]()-> DeleteEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      return DeleteEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteResourcePolicyOutcome MigrationHubRefactorSpacesClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: Identifier, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteResourcePolicyOutcome>(
    [&]()-> DeleteResourcePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouteOutcome MigrationHubRefactorSpacesClient::DeleteRoute(const DeleteRouteRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: ApplicationIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: EnvironmentIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: RouteIdentifier, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRouteOutcome>(
    [&]()-> DeleteRouteOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteIdentifier());
      return DeleteRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteServiceOutcome MigrationHubRefactorSpacesClient::DeleteService(const DeleteServiceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: ApplicationIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: EnvironmentIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteService", "Required field: ServiceIdentifier, is not set");
    return DeleteServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteService",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteServiceOutcome>(
    [&]()-> DeleteServiceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
      return DeleteServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetApplicationOutcome MigrationHubRefactorSpacesClient::GetApplication(const GetApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(GetApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationIdentifier, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: EnvironmentIdentifier, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetApplicationOutcome>(
    [&]()-> GetApplicationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      return GetApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEnvironmentOutcome MigrationHubRefactorSpacesClient::GetEnvironment(const GetEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(GetEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: EnvironmentIdentifier, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentOutcome>(
    [&]()-> GetEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      return GetEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourcePolicyOutcome MigrationHubRefactorSpacesClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: Identifier, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourcePolicyOutcome>(
    [&]()-> GetResourcePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouteOutcome MigrationHubRefactorSpacesClient::GetRoute(const GetRouteRequest& request) const
{
  AWS_OPERATION_GUARD(GetRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: ApplicationIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: EnvironmentIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: RouteIdentifier, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRouteOutcome>(
    [&]()-> GetRouteOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteIdentifier());
      return GetRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetServiceOutcome MigrationHubRefactorSpacesClient::GetService(const GetServiceRequest& request) const
{
  AWS_OPERATION_GUARD(GetService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ApplicationIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: EnvironmentIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.ServiceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ServiceIdentifier, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetService",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetServiceOutcome>(
    [&]()-> GetServiceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/services/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceIdentifier());
      return GetServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListApplicationsOutcome MigrationHubRefactorSpacesClient::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListApplications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplications", "Required field: EnvironmentIdentifier, is not set");
    return ListApplicationsOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListApplications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListApplicationsOutcome>(
    [&]()-> ListApplicationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
      return ListApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEnvironmentVpcsOutcome MigrationHubRefactorSpacesClient::ListEnvironmentVpcs(const ListEnvironmentVpcsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEnvironmentVpcs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnvironmentVpcs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironmentVpcs", "Required field: EnvironmentIdentifier, is not set");
    return ListEnvironmentVpcsOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEnvironmentVpcs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironmentVpcs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironmentVpcs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentVpcsOutcome>(
    [&]()-> ListEnvironmentVpcsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEnvironmentVpcs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vpcs");
      return ListEnvironmentVpcsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEnvironmentsOutcome MigrationHubRefactorSpacesClient::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEnvironments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentsOutcome>(
    [&]()-> ListEnvironmentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
      return ListEnvironmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRoutesOutcome MigrationHubRefactorSpacesClient::ListRoutes(const ListRoutesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRoutes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: ApplicationIdentifier, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: EnvironmentIdentifier, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRoutes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRoutes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRoutes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRoutesOutcome>(
    [&]()-> ListRoutesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
      return ListRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListServicesOutcome MigrationHubRefactorSpacesClient::ListServices(const ListServicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListServices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListServices", "Required field: ApplicationIdentifier, is not set");
    return ListServicesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListServices", "Required field: EnvironmentIdentifier, is not set");
    return ListServicesOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListServices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListServices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListServices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListServicesOutcome>(
    [&]()-> ListServicesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/services");
      return ListServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome MigrationHubRefactorSpacesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutResourcePolicyOutcome MigrationHubRefactorSpacesClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutResourcePolicyOutcome>(
    [&]()-> PutResourcePolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resourcepolicy");
      return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome MigrationHubRefactorSpacesClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome MigrationHubRefactorSpacesClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRouteOutcome MigrationHubRefactorSpacesClient::UpdateRoute(const UpdateRouteRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: ApplicationIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: EnvironmentIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.RouteIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: RouteIdentifier, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<MigrationHubRefactorSpacesErrors>(MigrationHubRefactorSpacesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRouteOutcome>(
    [&]()-> UpdateRouteOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteIdentifier());
      return UpdateRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

