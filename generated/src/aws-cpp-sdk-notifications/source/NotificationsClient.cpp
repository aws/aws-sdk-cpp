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
#include <aws/notifications/NotificationsClient.h>
#include <aws/notifications/NotificationsEndpointProvider.h>
#include <aws/notifications/NotificationsErrorMarshaller.h>
#include <aws/notifications/model/AssociateChannelRequest.h>
#include <aws/notifications/model/AssociateManagedNotificationAccountContactRequest.h>
#include <aws/notifications/model/AssociateManagedNotificationAdditionalChannelRequest.h>
#include <aws/notifications/model/AssociateOrganizationalUnitRequest.h>
#include <aws/notifications/model/CreateEventRuleRequest.h>
#include <aws/notifications/model/CreateNotificationConfigurationRequest.h>
#include <aws/notifications/model/DeleteEventRuleRequest.h>
#include <aws/notifications/model/DeleteNotificationConfigurationRequest.h>
#include <aws/notifications/model/DeregisterNotificationHubRequest.h>
#include <aws/notifications/model/DisableNotificationsAccessForOrganizationRequest.h>
#include <aws/notifications/model/DisassociateChannelRequest.h>
#include <aws/notifications/model/DisassociateManagedNotificationAccountContactRequest.h>
#include <aws/notifications/model/DisassociateManagedNotificationAdditionalChannelRequest.h>
#include <aws/notifications/model/DisassociateOrganizationalUnitRequest.h>
#include <aws/notifications/model/EnableNotificationsAccessForOrganizationRequest.h>
#include <aws/notifications/model/GetEventRuleRequest.h>
#include <aws/notifications/model/GetManagedNotificationChildEventRequest.h>
#include <aws/notifications/model/GetManagedNotificationConfigurationRequest.h>
#include <aws/notifications/model/GetManagedNotificationEventRequest.h>
#include <aws/notifications/model/GetNotificationConfigurationRequest.h>
#include <aws/notifications/model/GetNotificationEventRequest.h>
#include <aws/notifications/model/GetNotificationsAccessForOrganizationRequest.h>
#include <aws/notifications/model/ListChannelsRequest.h>
#include <aws/notifications/model/ListEventRulesRequest.h>
#include <aws/notifications/model/ListManagedNotificationChannelAssociationsRequest.h>
#include <aws/notifications/model/ListManagedNotificationChildEventsRequest.h>
#include <aws/notifications/model/ListManagedNotificationConfigurationsRequest.h>
#include <aws/notifications/model/ListManagedNotificationEventsRequest.h>
#include <aws/notifications/model/ListMemberAccountsRequest.h>
#include <aws/notifications/model/ListNotificationConfigurationsRequest.h>
#include <aws/notifications/model/ListNotificationEventsRequest.h>
#include <aws/notifications/model/ListNotificationHubsRequest.h>
#include <aws/notifications/model/ListOrganizationalUnitsRequest.h>
#include <aws/notifications/model/ListTagsForResourceRequest.h>
#include <aws/notifications/model/RegisterNotificationHubRequest.h>
#include <aws/notifications/model/TagResourceRequest.h>
#include <aws/notifications/model/UntagResourceRequest.h>
#include <aws/notifications/model/UpdateEventRuleRequest.h>
#include <aws/notifications/model/UpdateNotificationConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Notifications;
using namespace Aws::Notifications::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Notifications {
const char SERVICE_NAME[] = "notifications";
const char ALLOCATION_TAG[] = "NotificationsClient";
}  // namespace Notifications
}  // namespace Aws
const char* NotificationsClient::GetServiceName() { return SERVICE_NAME; }
const char* NotificationsClient::GetAllocationTag() { return ALLOCATION_TAG; }

NotificationsClient::NotificationsClient(const Notifications::NotificationsClientConfiguration& clientConfiguration,
                                         std::shared_ptr<NotificationsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NotificationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NotificationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NotificationsClient::NotificationsClient(const AWSCredentials& credentials,
                                         std::shared_ptr<NotificationsEndpointProviderBase> endpointProvider,
                                         const Notifications::NotificationsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NotificationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NotificationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NotificationsClient::NotificationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<NotificationsEndpointProviderBase> endpointProvider,
                                         const Notifications::NotificationsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NotificationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NotificationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NotificationsClient::NotificationsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NotificationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NotificationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NotificationsClient::NotificationsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NotificationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NotificationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NotificationsClient::NotificationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NotificationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NotificationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NotificationsClient::~NotificationsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NotificationsEndpointProviderBase>& NotificationsClient::accessEndpointProvider() { return m_endpointProvider; }

void NotificationsClient::init(const Notifications::NotificationsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Notifications");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "notifications");
}

void NotificationsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NotificationsClient::InvokeOperationOutcome NotificationsClient::InvokeServiceOperation(
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

AssociateChannelOutcome NotificationsClient::AssociateChannel(const AssociateChannelRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateChannel", "Required field: Arn, is not set");
    return AssociateChannelOutcome(Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/associate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateChannelOutcome(result.GetResultWithOwnership())
                            : AssociateChannelOutcome(std::move(result.GetError()));
}

AssociateManagedNotificationAccountContactOutcome NotificationsClient::AssociateManagedNotificationAccountContact(
    const AssociateManagedNotificationAccountContactRequest& request) const {
  if (!request.ContactIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateManagedNotificationAccountContact", "Required field: ContactIdentifier, is not set");
    return AssociateManagedNotificationAccountContactOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/associate-managed-notification/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        AccountContactTypeMapper::GetNameForAccountContactType(request.GetContactIdentifier()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateManagedNotificationAccountContactOutcome(result.GetResultWithOwnership())
                            : AssociateManagedNotificationAccountContactOutcome(std::move(result.GetError()));
}

AssociateManagedNotificationAdditionalChannelOutcome NotificationsClient::AssociateManagedNotificationAdditionalChannel(
    const AssociateManagedNotificationAdditionalChannelRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateManagedNotificationAdditionalChannel", "Required field: ChannelArn, is not set");
    return AssociateManagedNotificationAdditionalChannelOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/associate-managed-notification/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateManagedNotificationAdditionalChannelOutcome(result.GetResultWithOwnership())
                            : AssociateManagedNotificationAdditionalChannelOutcome(std::move(result.GetError()));
}

AssociateOrganizationalUnitOutcome NotificationsClient::AssociateOrganizationalUnit(
    const AssociateOrganizationalUnitRequest& request) const {
  if (!request.OrganizationalUnitIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateOrganizationalUnit", "Required field: OrganizationalUnitId, is not set");
    return AssociateOrganizationalUnitOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationalUnitId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizational-units/associate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationalUnitId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateOrganizationalUnitOutcome(result.GetResultWithOwnership())
                            : AssociateOrganizationalUnitOutcome(std::move(result.GetError()));
}

CreateEventRuleOutcome NotificationsClient::CreateEventRule(const CreateEventRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventRuleOutcome(result.GetResultWithOwnership())
                            : CreateEventRuleOutcome(std::move(result.GetError()));
}

CreateNotificationConfigurationOutcome NotificationsClient::CreateNotificationConfiguration(
    const CreateNotificationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateNotificationConfigurationOutcome(std::move(result.GetError()));
}

DeleteEventRuleOutcome NotificationsClient::DeleteEventRule(const DeleteEventRuleRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventRule", "Required field: Arn, is not set");
    return DeleteEventRuleOutcome(Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEventRuleOutcome(result.GetResultWithOwnership())
                            : DeleteEventRuleOutcome(std::move(result.GetError()));
}

DeleteNotificationConfigurationOutcome NotificationsClient::DeleteNotificationConfiguration(
    const DeleteNotificationConfigurationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNotificationConfiguration", "Required field: Arn, is not set");
    return DeleteNotificationConfigurationOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteNotificationConfigurationOutcome(std::move(result.GetError()));
}

DeregisterNotificationHubOutcome NotificationsClient::DeregisterNotificationHub(const DeregisterNotificationHubRequest& request) const {
  if (!request.NotificationHubRegionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterNotificationHub", "Required field: NotificationHubRegion, is not set");
    return DeregisterNotificationHubOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NotificationHubRegion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-hubs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNotificationHubRegion());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeregisterNotificationHubOutcome(result.GetResultWithOwnership())
                            : DeregisterNotificationHubOutcome(std::move(result.GetError()));
}

DisableNotificationsAccessForOrganizationOutcome NotificationsClient::DisableNotificationsAccessForOrganization(
    const DisableNotificationsAccessForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/access");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisableNotificationsAccessForOrganizationOutcome(result.GetResultWithOwnership())
                            : DisableNotificationsAccessForOrganizationOutcome(std::move(result.GetError()));
}

DisassociateChannelOutcome NotificationsClient::DisassociateChannel(const DisassociateChannelRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateChannel", "Required field: Arn, is not set");
    return DisassociateChannelOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/disassociate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateChannelOutcome(result.GetResultWithOwnership())
                            : DisassociateChannelOutcome(std::move(result.GetError()));
}

DisassociateManagedNotificationAccountContactOutcome NotificationsClient::DisassociateManagedNotificationAccountContact(
    const DisassociateManagedNotificationAccountContactRequest& request) const {
  if (!request.ContactIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateManagedNotificationAccountContact", "Required field: ContactIdentifier, is not set");
    return DisassociateManagedNotificationAccountContactOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/disassociate-managed-notification/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        AccountContactTypeMapper::GetNameForAccountContactType(request.GetContactIdentifier()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? DisassociateManagedNotificationAccountContactOutcome(result.GetResultWithOwnership())
                            : DisassociateManagedNotificationAccountContactOutcome(std::move(result.GetError()));
}

DisassociateManagedNotificationAdditionalChannelOutcome NotificationsClient::DisassociateManagedNotificationAdditionalChannel(
    const DisassociateManagedNotificationAdditionalChannelRequest& request) const {
  if (!request.ChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateManagedNotificationAdditionalChannel", "Required field: ChannelArn, is not set");
    return DisassociateManagedNotificationAdditionalChannelOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/disassociate-managed-notification/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? DisassociateManagedNotificationAdditionalChannelOutcome(result.GetResultWithOwnership())
                            : DisassociateManagedNotificationAdditionalChannelOutcome(std::move(result.GetError()));
}

DisassociateOrganizationalUnitOutcome NotificationsClient::DisassociateOrganizationalUnit(
    const DisassociateOrganizationalUnitRequest& request) const {
  if (!request.OrganizationalUnitIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateOrganizationalUnit", "Required field: OrganizationalUnitId, is not set");
    return DisassociateOrganizationalUnitOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationalUnitId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizational-units/disassociate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationalUnitId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateOrganizationalUnitOutcome(result.GetResultWithOwnership())
                            : DisassociateOrganizationalUnitOutcome(std::move(result.GetError()));
}

EnableNotificationsAccessForOrganizationOutcome NotificationsClient::EnableNotificationsAccessForOrganization(
    const EnableNotificationsAccessForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/access");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableNotificationsAccessForOrganizationOutcome(result.GetResultWithOwnership())
                            : EnableNotificationsAccessForOrganizationOutcome(std::move(result.GetError()));
}

GetEventRuleOutcome NotificationsClient::GetEventRule(const GetEventRuleRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventRule", "Required field: Arn, is not set");
    return GetEventRuleOutcome(Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEventRuleOutcome(result.GetResultWithOwnership()) : GetEventRuleOutcome(std::move(result.GetError()));
}

GetManagedNotificationChildEventOutcome NotificationsClient::GetManagedNotificationChildEvent(
    const GetManagedNotificationChildEventRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedNotificationChildEvent", "Required field: Arn, is not set");
    return GetManagedNotificationChildEventOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-notification-child-events/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedNotificationChildEventOutcome(result.GetResultWithOwnership())
                            : GetManagedNotificationChildEventOutcome(std::move(result.GetError()));
}

GetManagedNotificationConfigurationOutcome NotificationsClient::GetManagedNotificationConfiguration(
    const GetManagedNotificationConfigurationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedNotificationConfiguration", "Required field: Arn, is not set");
    return GetManagedNotificationConfigurationOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-notification-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetManagedNotificationConfigurationOutcome(std::move(result.GetError()));
}

GetManagedNotificationEventOutcome NotificationsClient::GetManagedNotificationEvent(
    const GetManagedNotificationEventRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedNotificationEvent", "Required field: Arn, is not set");
    return GetManagedNotificationEventOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-notification-events/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedNotificationEventOutcome(result.GetResultWithOwnership())
                            : GetManagedNotificationEventOutcome(std::move(result.GetError()));
}

GetNotificationConfigurationOutcome NotificationsClient::GetNotificationConfiguration(
    const GetNotificationConfigurationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNotificationConfiguration", "Required field: Arn, is not set");
    return GetNotificationConfigurationOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetNotificationConfigurationOutcome(std::move(result.GetError()));
}

GetNotificationEventOutcome NotificationsClient::GetNotificationEvent(const GetNotificationEventRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNotificationEvent", "Required field: Arn, is not set");
    return GetNotificationEventOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-events/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNotificationEventOutcome(result.GetResultWithOwnership())
                            : GetNotificationEventOutcome(std::move(result.GetError()));
}

GetNotificationsAccessForOrganizationOutcome NotificationsClient::GetNotificationsAccessForOrganization(
    const GetNotificationsAccessForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/access");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNotificationsAccessForOrganizationOutcome(result.GetResultWithOwnership())
                            : GetNotificationsAccessForOrganizationOutcome(std::move(result.GetError()));
}

ListChannelsOutcome NotificationsClient::ListChannels(const ListChannelsRequest& request) const {
  if (!request.NotificationConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: NotificationConfigurationArn, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [NotificationConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelsOutcome(result.GetResultWithOwnership()) : ListChannelsOutcome(std::move(result.GetError()));
}

ListEventRulesOutcome NotificationsClient::ListEventRules(const ListEventRulesRequest& request) const {
  if (!request.NotificationConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEventRules", "Required field: NotificationConfigurationArn, is not set");
    return ListEventRulesOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NotificationConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEventRulesOutcome(result.GetResultWithOwnership()) : ListEventRulesOutcome(std::move(result.GetError()));
}

ListManagedNotificationChannelAssociationsOutcome NotificationsClient::ListManagedNotificationChannelAssociations(
    const ListManagedNotificationChannelAssociationsRequest& request) const {
  if (!request.ManagedNotificationConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListManagedNotificationChannelAssociations", "Required field: ManagedNotificationConfigurationArn, is not set");
    return ListManagedNotificationChannelAssociationsOutcome(
        Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                   "Missing required field [ManagedNotificationConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/list-managed-notification-channel-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedNotificationChannelAssociationsOutcome(result.GetResultWithOwnership())
                            : ListManagedNotificationChannelAssociationsOutcome(std::move(result.GetError()));
}

ListManagedNotificationChildEventsOutcome NotificationsClient::ListManagedNotificationChildEvents(
    const ListManagedNotificationChildEventsRequest& request) const {
  if (!request.AggregateManagedNotificationEventArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListManagedNotificationChildEvents", "Required field: AggregateManagedNotificationEventArn, is not set");
    return ListManagedNotificationChildEventsOutcome(
        Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                   "Missing required field [AggregateManagedNotificationEventArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-managed-notification-child-events/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAggregateManagedNotificationEventArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedNotificationChildEventsOutcome(result.GetResultWithOwnership())
                            : ListManagedNotificationChildEventsOutcome(std::move(result.GetError()));
}

ListManagedNotificationConfigurationsOutcome NotificationsClient::ListManagedNotificationConfigurations(
    const ListManagedNotificationConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-notification-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedNotificationConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListManagedNotificationConfigurationsOutcome(std::move(result.GetError()));
}

ListManagedNotificationEventsOutcome NotificationsClient::ListManagedNotificationEvents(
    const ListManagedNotificationEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-notification-events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedNotificationEventsOutcome(result.GetResultWithOwnership())
                            : ListManagedNotificationEventsOutcome(std::move(result.GetError()));
}

ListMemberAccountsOutcome NotificationsClient::ListMemberAccounts(const ListMemberAccountsRequest& request) const {
  if (!request.NotificationConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMemberAccounts", "Required field: NotificationConfigurationArn, is not set");
    return ListMemberAccountsOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NotificationConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-member-accounts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMemberAccountsOutcome(result.GetResultWithOwnership())
                            : ListMemberAccountsOutcome(std::move(result.GetError()));
}

ListNotificationConfigurationsOutcome NotificationsClient::ListNotificationConfigurations(
    const ListNotificationConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNotificationConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListNotificationConfigurationsOutcome(std::move(result.GetError()));
}

ListNotificationEventsOutcome NotificationsClient::ListNotificationEvents(const ListNotificationEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNotificationEventsOutcome(result.GetResultWithOwnership())
                            : ListNotificationEventsOutcome(std::move(result.GetError()));
}

ListNotificationHubsOutcome NotificationsClient::ListNotificationHubs(const ListNotificationHubsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-hubs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNotificationHubsOutcome(result.GetResultWithOwnership())
                            : ListNotificationHubsOutcome(std::move(result.GetError()));
}

ListOrganizationalUnitsOutcome NotificationsClient::ListOrganizationalUnits(const ListOrganizationalUnitsRequest& request) const {
  if (!request.NotificationConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListOrganizationalUnits", "Required field: NotificationConfigurationArn, is not set");
    return ListOrganizationalUnitsOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NotificationConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizational-units");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOrganizationalUnitsOutcome(result.GetResultWithOwnership())
                            : ListOrganizationalUnitsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome NotificationsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RegisterNotificationHubOutcome NotificationsClient::RegisterNotificationHub(const RegisterNotificationHubRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-hubs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterNotificationHubOutcome(result.GetResultWithOwnership())
                            : RegisterNotificationHubOutcome(std::move(result.GetError()));
}

TagResourceOutcome NotificationsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Arn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome NotificationsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Arn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateEventRuleOutcome NotificationsClient::UpdateEventRule(const UpdateEventRuleRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventRule", "Required field: Arn, is not set");
    return UpdateEventRuleOutcome(Aws::Client::AWSError<NotificationsErrors>(NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateEventRuleOutcome(result.GetResultWithOwnership())
                            : UpdateEventRuleOutcome(std::move(result.GetError()));
}

UpdateNotificationConfigurationOutcome NotificationsClient::UpdateNotificationConfiguration(
    const UpdateNotificationConfigurationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNotificationConfiguration", "Required field: Arn, is not set");
    return UpdateNotificationConfigurationOutcome(Aws::Client::AWSError<NotificationsErrors>(
        NotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateNotificationConfigurationOutcome(std::move(result.GetError()));
}
