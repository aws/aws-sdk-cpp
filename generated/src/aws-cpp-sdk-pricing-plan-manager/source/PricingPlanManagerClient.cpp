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
#include <aws/pricing-plan-manager/PricingPlanManagerClient.h>
#include <aws/pricing-plan-manager/PricingPlanManagerEndpointProvider.h>
#include <aws/pricing-plan-manager/PricingPlanManagerErrorMarshaller.h>
#include <aws/pricing-plan-manager/model/ApprovePaidSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/AssociateResourcesToSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionChangeRequest.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/CreateSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/DisassociateResourcesFromSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/GetSubscriptionRequest.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsRequest.h>
#include <aws/pricing-plan-manager/model/UpdateSubscriptionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PricingPlanManager;
using namespace Aws::PricingPlanManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PricingPlanManager {
const char SERVICE_NAME[] = "pricingplanmanager";
const char ALLOCATION_TAG[] = "PricingPlanManagerClient";
}  // namespace PricingPlanManager
}  // namespace Aws
const char* PricingPlanManagerClient::GetServiceName() { return SERVICE_NAME; }
const char* PricingPlanManagerClient::GetAllocationTag() { return ALLOCATION_TAG; }

PricingPlanManagerClient::PricingPlanManagerClient(const PricingPlanManager::PricingPlanManagerClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<PricingPlanManagerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PricingPlanManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PricingPlanManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PricingPlanManagerClient::PricingPlanManagerClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<PricingPlanManagerEndpointProviderBase> endpointProvider,
                                                   const PricingPlanManager::PricingPlanManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PricingPlanManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PricingPlanManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PricingPlanManagerClient::PricingPlanManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<PricingPlanManagerEndpointProviderBase> endpointProvider,
                                                   const PricingPlanManager::PricingPlanManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PricingPlanManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PricingPlanManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PricingPlanManagerClient::PricingPlanManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PricingPlanManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PricingPlanManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PricingPlanManagerClient::PricingPlanManagerClient(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PricingPlanManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PricingPlanManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PricingPlanManagerClient::PricingPlanManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PricingPlanManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PricingPlanManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PricingPlanManagerClient::~PricingPlanManagerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PricingPlanManagerEndpointProviderBase>& PricingPlanManagerClient::accessEndpointProvider() { return m_endpointProvider; }

void PricingPlanManagerClient::init(const PricingPlanManager::PricingPlanManagerClientConfiguration& config) {
  AWSClient::SetServiceClientName("Pricing Plan Manager");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "pricingplanmanager");
}

void PricingPlanManagerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PricingPlanManagerClient::InvokeOperationOutcome PricingPlanManagerClient::InvokeServiceOperation(
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

ApprovePaidSubscriptionOutcome PricingPlanManagerClient::ApprovePaidSubscription(const ApprovePaidSubscriptionRequest& request) const {
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ApprovePaidSubscription", "Required field: IfMatch, is not set");
    return ApprovePaidSubscriptionOutcome(Aws::Client::AWSError<PricingPlanManagerErrors>(
        PricingPlanManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/ApprovePaidSubscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ApprovePaidSubscriptionOutcome(result.GetResultWithOwnership())
                            : ApprovePaidSubscriptionOutcome(std::move(result.GetError()));
}

AssociateResourcesToSubscriptionOutcome PricingPlanManagerClient::AssociateResourcesToSubscription(
    const AssociateResourcesToSubscriptionRequest& request) const {
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateResourcesToSubscription", "Required field: IfMatch, is not set");
    return AssociateResourcesToSubscriptionOutcome(Aws::Client::AWSError<PricingPlanManagerErrors>(
        PricingPlanManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/AssociateResourcesToSubscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateResourcesToSubscriptionOutcome(result.GetResultWithOwnership())
                            : AssociateResourcesToSubscriptionOutcome(std::move(result.GetError()));
}

CancelSubscriptionOutcome PricingPlanManagerClient::CancelSubscription(const CancelSubscriptionRequest& request) const {
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSubscription", "Required field: IfMatch, is not set");
    return CancelSubscriptionOutcome(Aws::Client::AWSError<PricingPlanManagerErrors>(
        PricingPlanManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/CancelSubscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelSubscriptionOutcome(result.GetResultWithOwnership())
                            : CancelSubscriptionOutcome(std::move(result.GetError()));
}

CancelSubscriptionChangeOutcome PricingPlanManagerClient::CancelSubscriptionChange(const CancelSubscriptionChangeRequest& request) const {
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSubscriptionChange", "Required field: IfMatch, is not set");
    return CancelSubscriptionChangeOutcome(Aws::Client::AWSError<PricingPlanManagerErrors>(
        PricingPlanManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/CancelSubscriptionChange");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelSubscriptionChangeOutcome(result.GetResultWithOwnership())
                            : CancelSubscriptionChangeOutcome(std::move(result.GetError()));
}

CreateSubscriptionOutcome PricingPlanManagerClient::CreateSubscription(const CreateSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/CreateSubscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateSubscriptionOutcome(std::move(result.GetError()));
}

DisassociateResourcesFromSubscriptionOutcome PricingPlanManagerClient::DisassociateResourcesFromSubscription(
    const DisassociateResourcesFromSubscriptionRequest& request) const {
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateResourcesFromSubscription", "Required field: IfMatch, is not set");
    return DisassociateResourcesFromSubscriptionOutcome(Aws::Client::AWSError<PricingPlanManagerErrors>(
        PricingPlanManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/DisassociateResourcesFromSubscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateResourcesFromSubscriptionOutcome(result.GetResultWithOwnership())
                            : DisassociateResourcesFromSubscriptionOutcome(std::move(result.GetError()));
}

GetSubscriptionOutcome PricingPlanManagerClient::GetSubscription(const GetSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/GetSubscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSubscriptionOutcome(result.GetResultWithOwnership())
                            : GetSubscriptionOutcome(std::move(result.GetError()));
}

ListSubscriptionsOutcome PricingPlanManagerClient::ListSubscriptions(const ListSubscriptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/ListSubscriptions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSubscriptionsOutcome(result.GetResultWithOwnership())
                            : ListSubscriptionsOutcome(std::move(result.GetError()));
}

UpdateSubscriptionOutcome PricingPlanManagerClient::UpdateSubscription(const UpdateSubscriptionRequest& request) const {
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscription", "Required field: IfMatch, is not set");
    return UpdateSubscriptionOutcome(Aws::Client::AWSError<PricingPlanManagerErrors>(
        PricingPlanManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/UpdateSubscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSubscriptionOutcome(result.GetResultWithOwnership())
                            : UpdateSubscriptionOutcome(std::move(result.GetError()));
}
