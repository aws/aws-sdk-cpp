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
#include <aws/securitylake/SecurityLakeClient.h>
#include <aws/securitylake/SecurityLakeEndpointProvider.h>
#include <aws/securitylake/SecurityLakeErrorMarshaller.h>
#include <aws/securitylake/model/CreateAwsLogSourceRequest.h>
#include <aws/securitylake/model/CreateCustomLogSourceRequest.h>
#include <aws/securitylake/model/CreateDataLakeExceptionSubscriptionRequest.h>
#include <aws/securitylake/model/CreateDataLakeOrganizationConfigurationRequest.h>
#include <aws/securitylake/model/CreateDataLakeRequest.h>
#include <aws/securitylake/model/CreateSubscriberNotificationRequest.h>
#include <aws/securitylake/model/CreateSubscriberRequest.h>
#include <aws/securitylake/model/DeleteAwsLogSourceRequest.h>
#include <aws/securitylake/model/DeleteCustomLogSourceRequest.h>
#include <aws/securitylake/model/DeleteDataLakeExceptionSubscriptionRequest.h>
#include <aws/securitylake/model/DeleteDataLakeOrganizationConfigurationRequest.h>
#include <aws/securitylake/model/DeleteDataLakeRequest.h>
#include <aws/securitylake/model/DeleteSubscriberNotificationRequest.h>
#include <aws/securitylake/model/DeleteSubscriberRequest.h>
#include <aws/securitylake/model/DeregisterDataLakeDelegatedAdministratorRequest.h>
#include <aws/securitylake/model/GetDataLakeExceptionSubscriptionRequest.h>
#include <aws/securitylake/model/GetDataLakeOrganizationConfigurationRequest.h>
#include <aws/securitylake/model/GetDataLakeSourcesRequest.h>
#include <aws/securitylake/model/GetSubscriberRequest.h>
#include <aws/securitylake/model/ListDataLakeExceptionsRequest.h>
#include <aws/securitylake/model/ListDataLakesRequest.h>
#include <aws/securitylake/model/ListLogSourcesRequest.h>
#include <aws/securitylake/model/ListSubscribersRequest.h>
#include <aws/securitylake/model/ListTagsForResourceRequest.h>
#include <aws/securitylake/model/RegisterDataLakeDelegatedAdministratorRequest.h>
#include <aws/securitylake/model/TagResourceRequest.h>
#include <aws/securitylake/model/UntagResourceRequest.h>
#include <aws/securitylake/model/UpdateDataLakeExceptionSubscriptionRequest.h>
#include <aws/securitylake/model/UpdateDataLakeRequest.h>
#include <aws/securitylake/model/UpdateSubscriberNotificationRequest.h>
#include <aws/securitylake/model/UpdateSubscriberRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityLake;
using namespace Aws::SecurityLake::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SecurityLake {
const char SERVICE_NAME[] = "securitylake";
const char ALLOCATION_TAG[] = "SecurityLakeClient";
}  // namespace SecurityLake
}  // namespace Aws
const char* SecurityLakeClient::GetServiceName() { return SERVICE_NAME; }
const char* SecurityLakeClient::GetAllocationTag() { return ALLOCATION_TAG; }

SecurityLakeClient::SecurityLakeClient(const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const AWSCredentials& credentials,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider,
                                       const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider,
                                       const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SecurityLakeClient::SecurityLakeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SecurityLakeClient::~SecurityLakeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SecurityLakeEndpointProviderBase>& SecurityLakeClient::accessEndpointProvider() { return m_endpointProvider; }

void SecurityLakeClient::init(const SecurityLake::SecurityLakeClientConfiguration& config) {
  AWSClient::SetServiceClientName("SecurityLake");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "securitylake");
}

void SecurityLakeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SecurityLakeClient::InvokeOperationOutcome SecurityLakeClient::InvokeServiceOperation(
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

CreateAwsLogSourceOutcome SecurityLakeClient::CreateAwsLogSource(const CreateAwsLogSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/logsources/aws");
  };

  return CreateAwsLogSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomLogSourceOutcome SecurityLakeClient::CreateCustomLogSource(const CreateCustomLogSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/logsources/custom");
  };

  return CreateCustomLogSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataLakeOutcome SecurityLakeClient::CreateDataLake(const CreateDataLakeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  };

  return CreateDataLakeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataLakeExceptionSubscriptionOutcome SecurityLakeClient::CreateDataLakeExceptionSubscription(
    const CreateDataLakeExceptionSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  };

  return CreateDataLakeExceptionSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataLakeOrganizationConfigurationOutcome SecurityLakeClient::CreateDataLakeOrganizationConfiguration(
    const CreateDataLakeOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/organization/configuration");
  };

  return CreateDataLakeOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriberOutcome SecurityLakeClient::CreateSubscriber(const CreateSubscriberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers");
  };

  return CreateSubscriberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriberNotificationOutcome SecurityLakeClient::CreateSubscriberNotification(
    const CreateSubscriberNotificationRequest& request) const {
  if (!request.SubscriberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSubscriberNotification", "Required field: SubscriberId, is not set");
    return CreateSubscriberNotificationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(
        SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriberId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification");
  };

  return CreateSubscriberNotificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAwsLogSourceOutcome SecurityLakeClient::DeleteAwsLogSource(const DeleteAwsLogSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/logsources/aws/delete");
  };

  return DeleteAwsLogSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomLogSourceOutcome SecurityLakeClient::DeleteCustomLogSource(const DeleteCustomLogSourceRequest& request) const {
  if (!request.SourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomLogSource", "Required field: SourceName, is not set");
    return DeleteCustomLogSourceOutcome(Aws::Client::AWSError<SecurityLakeErrors>(
        SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/logsources/custom/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceName());
  };

  return DeleteCustomLogSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataLakeOutcome SecurityLakeClient::DeleteDataLake(const DeleteDataLakeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/delete");
  };

  return DeleteDataLakeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataLakeExceptionSubscriptionOutcome SecurityLakeClient::DeleteDataLakeExceptionSubscription(
    const DeleteDataLakeExceptionSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  };

  return DeleteDataLakeExceptionSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataLakeOrganizationConfigurationOutcome SecurityLakeClient::DeleteDataLakeOrganizationConfiguration(
    const DeleteDataLakeOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/organization/configuration/delete");
  };

  return DeleteDataLakeOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSubscriberOutcome SecurityLakeClient::DeleteSubscriber(const DeleteSubscriberRequest& request) const {
  if (!request.SubscriberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriber", "Required field: SubscriberId, is not set");
    return DeleteSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SubscriberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriberId());
  };

  return DeleteSubscriberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSubscriberNotificationOutcome SecurityLakeClient::DeleteSubscriberNotification(
    const DeleteSubscriberNotificationRequest& request) const {
  if (!request.SubscriberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriberNotification", "Required field: SubscriberId, is not set");
    return DeleteSubscriberNotificationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(
        SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriberId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification");
  };

  return DeleteSubscriberNotificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterDataLakeDelegatedAdministratorOutcome SecurityLakeClient::DeregisterDataLakeDelegatedAdministrator(
    const DeregisterDataLakeDelegatedAdministratorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/delegate");
  };

  return DeregisterDataLakeDelegatedAdministratorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetDataLakeExceptionSubscriptionOutcome SecurityLakeClient::GetDataLakeExceptionSubscription(
    const GetDataLakeExceptionSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  };

  return GetDataLakeExceptionSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataLakeOrganizationConfigurationOutcome SecurityLakeClient::GetDataLakeOrganizationConfiguration(
    const GetDataLakeOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/organization/configuration");
  };

  return GetDataLakeOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataLakeSourcesOutcome SecurityLakeClient::GetDataLakeSources(const GetDataLakeSourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/sources");
  };

  return GetDataLakeSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSubscriberOutcome SecurityLakeClient::GetSubscriber(const GetSubscriberRequest& request) const {
  if (!request.SubscriberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriber", "Required field: SubscriberId, is not set");
    return GetSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SubscriberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriberId());
  };

  return GetSubscriberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataLakeExceptionsOutcome SecurityLakeClient::ListDataLakeExceptions(const ListDataLakeExceptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions");
  };

  return ListDataLakeExceptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataLakesOutcome SecurityLakeClient::ListDataLakes(const ListDataLakesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalakes");
  };

  return ListDataLakesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLogSourcesOutcome SecurityLakeClient::ListLogSources(const ListLogSourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/logsources/list");
  };

  return ListLogSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSubscribersOutcome SecurityLakeClient::ListSubscribers(const ListSubscribersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers");
  };

  return ListSubscribersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome SecurityLakeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RegisterDataLakeDelegatedAdministratorOutcome SecurityLakeClient::RegisterDataLakeDelegatedAdministrator(
    const RegisterDataLakeDelegatedAdministratorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/delegate");
  };

  return RegisterDataLakeDelegatedAdministratorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SecurityLakeClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SecurityLakeClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateDataLakeOutcome SecurityLakeClient::UpdateDataLake(const UpdateDataLakeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  };

  return UpdateDataLakeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDataLakeExceptionSubscriptionOutcome SecurityLakeClient::UpdateDataLakeExceptionSubscription(
    const UpdateDataLakeExceptionSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  };

  return UpdateDataLakeExceptionSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSubscriberOutcome SecurityLakeClient::UpdateSubscriber(const UpdateSubscriberRequest& request) const {
  if (!request.SubscriberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriber", "Required field: SubscriberId, is not set");
    return UpdateSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SubscriberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriberId());
  };

  return UpdateSubscriberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSubscriberNotificationOutcome SecurityLakeClient::UpdateSubscriberNotification(
    const UpdateSubscriberNotificationRequest& request) const {
  if (!request.SubscriberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriberNotification", "Required field: SubscriberId, is not set");
    return UpdateSubscriberNotificationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(
        SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriberId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification");
  };

  return UpdateSubscriberNotificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
