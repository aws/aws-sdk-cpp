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
#include <aws/payment-cryptography-data/PaymentCryptographyDataClient.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataEndpointProvider.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataErrorMarshaller.h>
#include <aws/payment-cryptography-data/model/DecryptDataRequest.h>
#include <aws/payment-cryptography-data/model/EncryptDataRequest.h>
#include <aws/payment-cryptography-data/model/GenerateAs2805KekValidationRequest.h>
#include <aws/payment-cryptography-data/model/GenerateCardValidationDataRequest.h>
#include <aws/payment-cryptography-data/model/GenerateMacEmvPinChangeRequest.h>
#include <aws/payment-cryptography-data/model/GenerateMacRequest.h>
#include <aws/payment-cryptography-data/model/GeneratePinDataRequest.h>
#include <aws/payment-cryptography-data/model/ReEncryptDataRequest.h>
#include <aws/payment-cryptography-data/model/TranslateKeyMaterialRequest.h>
#include <aws/payment-cryptography-data/model/TranslatePinDataRequest.h>
#include <aws/payment-cryptography-data/model/VerifyAuthRequestCryptogramRequest.h>
#include <aws/payment-cryptography-data/model/VerifyCardValidationDataRequest.h>
#include <aws/payment-cryptography-data/model/VerifyMacRequest.h>
#include <aws/payment-cryptography-data/model/VerifyPinDataRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PaymentCryptographyData;
using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PaymentCryptographyData {
const char SERVICE_NAME[] = "payment-cryptography";
const char ALLOCATION_TAG[] = "PaymentCryptographyDataClient";
}  // namespace PaymentCryptographyData
}  // namespace Aws
const char* PaymentCryptographyDataClient::GetServiceName() { return SERVICE_NAME; }
const char* PaymentCryptographyDataClient::GetAllocationTag() { return ALLOCATION_TAG; }

PaymentCryptographyDataClient::PaymentCryptographyDataClient(
    const PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration,
    std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PaymentCryptographyDataClient::PaymentCryptographyDataClient(
    const AWSCredentials& credentials, std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider,
    const PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PaymentCryptographyDataClient::PaymentCryptographyDataClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider,
    const PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PaymentCryptographyDataClient::PaymentCryptographyDataClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PaymentCryptographyDataClient::PaymentCryptographyDataClient(const AWSCredentials& credentials,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PaymentCryptographyDataClient::PaymentCryptographyDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PaymentCryptographyDataClient::~PaymentCryptographyDataClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PaymentCryptographyDataEndpointProviderBase>& PaymentCryptographyDataClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void PaymentCryptographyDataClient::init(const PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& config) {
  AWSClient::SetServiceClientName("Payment Cryptography Data");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "payment-cryptography");
}

void PaymentCryptographyDataClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PaymentCryptographyDataClient::InvokeOperationOutcome PaymentCryptographyDataClient::InvokeServiceOperation(
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

DecryptDataOutcome PaymentCryptographyDataClient::DecryptData(const DecryptDataRequest& request) const {
  if (!request.KeyIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DecryptData", "Required field: KeyIdentifier, is not set");
    return DecryptDataOutcome(Aws::Client::AWSError<PaymentCryptographyDataErrors>(
        PaymentCryptographyDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/decrypt");
  };

  return DecryptDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EncryptDataOutcome PaymentCryptographyDataClient::EncryptData(const EncryptDataRequest& request) const {
  if (!request.KeyIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EncryptData", "Required field: KeyIdentifier, is not set");
    return EncryptDataOutcome(Aws::Client::AWSError<PaymentCryptographyDataErrors>(
        PaymentCryptographyDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/encrypt");
  };

  return EncryptDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateAs2805KekValidationOutcome PaymentCryptographyDataClient::GenerateAs2805KekValidation(
    const GenerateAs2805KekValidationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/as2805kekvalidation/generate");
  };

  return GenerateAs2805KekValidationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateCardValidationDataOutcome PaymentCryptographyDataClient::GenerateCardValidationData(
    const GenerateCardValidationDataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cardvalidationdata/generate");
  };

  return GenerateCardValidationDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateMacOutcome PaymentCryptographyDataClient::GenerateMac(const GenerateMacRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mac/generate");
  };

  return GenerateMacOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateMacEmvPinChangeOutcome PaymentCryptographyDataClient::GenerateMacEmvPinChange(const GenerateMacEmvPinChangeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macemvpinchange/generate");
  };

  return GenerateMacEmvPinChangeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GeneratePinDataOutcome PaymentCryptographyDataClient::GeneratePinData(const GeneratePinDataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pindata/generate");
  };

  return GeneratePinDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ReEncryptDataOutcome PaymentCryptographyDataClient::ReEncryptData(const ReEncryptDataRequest& request) const {
  if (!request.IncomingKeyIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ReEncryptData", "Required field: IncomingKeyIdentifier, is not set");
    return ReEncryptDataOutcome(Aws::Client::AWSError<PaymentCryptographyDataErrors>(
        PaymentCryptographyDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IncomingKeyIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIncomingKeyIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reencrypt");
  };

  return ReEncryptDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TranslateKeyMaterialOutcome PaymentCryptographyDataClient::TranslateKeyMaterial(const TranslateKeyMaterialRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/keymaterial/translate");
  };

  return TranslateKeyMaterialOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TranslatePinDataOutcome PaymentCryptographyDataClient::TranslatePinData(const TranslatePinDataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pindata/translate");
  };

  return TranslatePinDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyAuthRequestCryptogramOutcome PaymentCryptographyDataClient::VerifyAuthRequestCryptogram(
    const VerifyAuthRequestCryptogramRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cryptogram/verify");
  };

  return VerifyAuthRequestCryptogramOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyCardValidationDataOutcome PaymentCryptographyDataClient::VerifyCardValidationData(
    const VerifyCardValidationDataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cardvalidationdata/verify");
  };

  return VerifyCardValidationDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyMacOutcome PaymentCryptographyDataClient::VerifyMac(const VerifyMacRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mac/verify");
  };

  return VerifyMacOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyPinDataOutcome PaymentCryptographyDataClient::VerifyPinData(const VerifyPinDataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pindata/verify");
  };

  return VerifyPinDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
