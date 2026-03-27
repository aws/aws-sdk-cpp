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
#include <aws/sms-voice/PinpointSMSVoiceClient.h>
#include <aws/sms-voice/PinpointSMSVoiceEndpointProvider.h>
#include <aws/sms-voice/PinpointSMSVoiceErrorMarshaller.h>
#include <aws/sms-voice/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/sms-voice/model/CreateConfigurationSetRequest.h>
#include <aws/sms-voice/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/sms-voice/model/DeleteConfigurationSetRequest.h>
#include <aws/sms-voice/model/GetConfigurationSetEventDestinationsRequest.h>
#include <aws/sms-voice/model/ListConfigurationSetsRequest.h>
#include <aws/sms-voice/model/SendVoiceMessageRequest.h>
#include <aws/sms-voice/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PinpointSMSVoice;
using namespace Aws::PinpointSMSVoice::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PinpointSMSVoice {
const char SERVICE_NAME[] = "sms-voice";
const char ALLOCATION_TAG[] = "PinpointSMSVoiceClient";
}  // namespace PinpointSMSVoice
}  // namespace Aws
const char* PinpointSMSVoiceClient::GetServiceName() { return SERVICE_NAME; }
const char* PinpointSMSVoiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

PinpointSMSVoiceClient::PinpointSMSVoiceClient(const PinpointSMSVoice::PinpointSMSVoiceClientConfiguration& clientConfiguration,
                                               std::shared_ptr<PinpointSMSVoiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PinpointSMSVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointSMSVoiceClient::PinpointSMSVoiceClient(const AWSCredentials& credentials,
                                               std::shared_ptr<PinpointSMSVoiceEndpointProviderBase> endpointProvider,
                                               const PinpointSMSVoice::PinpointSMSVoiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PinpointSMSVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointSMSVoiceClient::PinpointSMSVoiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<PinpointSMSVoiceEndpointProviderBase> endpointProvider,
                                               const PinpointSMSVoice::PinpointSMSVoiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PinpointSMSVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PinpointSMSVoiceClient::PinpointSMSVoiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointSMSVoiceClient::PinpointSMSVoiceClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointSMSVoiceClient::PinpointSMSVoiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PinpointSMSVoiceClient::~PinpointSMSVoiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PinpointSMSVoiceEndpointProviderBase>& PinpointSMSVoiceClient::accessEndpointProvider() { return m_endpointProvider; }

void PinpointSMSVoiceClient::init(const PinpointSMSVoice::PinpointSMSVoiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Pinpoint SMS Voice");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sms-voice");
}

void PinpointSMSVoiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PinpointSMSVoiceClient::InvokeOperationOutcome PinpointSMSVoiceClient::InvokeServiceOperation(
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

CreateConfigurationSetOutcome PinpointSMSVoiceClient::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sms-voice/configuration-sets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfigurationSetOutcome(result.GetResultWithOwnership())
                            : CreateConfigurationSetOutcome(std::move(result.GetError()));
}

CreateConfigurationSetEventDestinationOutcome PinpointSMSVoiceClient::CreateConfigurationSetEventDestination(
    const CreateConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return CreateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointSMSVoiceErrors>(
        PinpointSMSVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sms-voice/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfigurationSetEventDestinationOutcome(result.GetResultWithOwnership())
                            : CreateConfigurationSetEventDestinationOutcome(std::move(result.GetError()));
}

DeleteConfigurationSetOutcome PinpointSMSVoiceClient::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetOutcome(Aws::Client::AWSError<PinpointSMSVoiceErrors>(
        PinpointSMSVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sms-voice/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfigurationSetOutcome(result.GetResultWithOwnership())
                            : DeleteConfigurationSetOutcome(std::move(result.GetError()));
}

DeleteConfigurationSetEventDestinationOutcome PinpointSMSVoiceClient::DeleteConfigurationSetEventDestination(
    const DeleteConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointSMSVoiceErrors>(
        PinpointSMSVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointSMSVoiceErrors>(
        PinpointSMSVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sms-voice/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventDestinationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfigurationSetEventDestinationOutcome(result.GetResultWithOwnership())
                            : DeleteConfigurationSetEventDestinationOutcome(std::move(result.GetError()));
}

GetConfigurationSetEventDestinationsOutcome PinpointSMSVoiceClient::GetConfigurationSetEventDestinations(
    const GetConfigurationSetEventDestinationsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationSetEventDestinations", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetEventDestinationsOutcome(Aws::Client::AWSError<PinpointSMSVoiceErrors>(
        PinpointSMSVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sms-voice/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfigurationSetEventDestinationsOutcome(result.GetResultWithOwnership())
                            : GetConfigurationSetEventDestinationsOutcome(std::move(result.GetError()));
}

ListConfigurationSetsOutcome PinpointSMSVoiceClient::ListConfigurationSets(const ListConfigurationSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sms-voice/configuration-sets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfigurationSetsOutcome(result.GetResultWithOwnership())
                            : ListConfigurationSetsOutcome(std::move(result.GetError()));
}

SendVoiceMessageOutcome PinpointSMSVoiceClient::SendVoiceMessage(const SendVoiceMessageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sms-voice/voice/message");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendVoiceMessageOutcome(result.GetResultWithOwnership())
                            : SendVoiceMessageOutcome(std::move(result.GetError()));
}

UpdateConfigurationSetEventDestinationOutcome PinpointSMSVoiceClient::UpdateConfigurationSetEventDestination(
    const UpdateConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointSMSVoiceErrors>(
        PinpointSMSVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointSMSVoiceErrors>(
        PinpointSMSVoiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/sms-voice/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventDestinationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateConfigurationSetEventDestinationOutcome(result.GetResultWithOwnership())
                            : UpdateConfigurationSetEventDestinationOutcome(std::move(result.GetError()));
}
