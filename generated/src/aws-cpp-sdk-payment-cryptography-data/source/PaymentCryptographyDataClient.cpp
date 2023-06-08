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

#include <aws/payment-cryptography-data/PaymentCryptographyDataClient.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataErrorMarshaller.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataEndpointProvider.h>
#include <aws/payment-cryptography-data/model/DecryptDataRequest.h>
#include <aws/payment-cryptography-data/model/EncryptDataRequest.h>
#include <aws/payment-cryptography-data/model/GenerateCardValidationDataRequest.h>
#include <aws/payment-cryptography-data/model/GenerateMacRequest.h>
#include <aws/payment-cryptography-data/model/GeneratePinDataRequest.h>
#include <aws/payment-cryptography-data/model/ReEncryptDataRequest.h>
#include <aws/payment-cryptography-data/model/TranslatePinDataRequest.h>
#include <aws/payment-cryptography-data/model/VerifyAuthRequestCryptogramRequest.h>
#include <aws/payment-cryptography-data/model/VerifyCardValidationDataRequest.h>
#include <aws/payment-cryptography-data/model/VerifyMacRequest.h>
#include <aws/payment-cryptography-data/model/VerifyPinDataRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PaymentCryptographyData;
using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PaymentCryptographyDataClient::SERVICE_NAME = "payment-cryptography";
const char* PaymentCryptographyDataClient::ALLOCATION_TAG = "PaymentCryptographyDataClient";

PaymentCryptographyDataClient::PaymentCryptographyDataClient(const PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration,
                                                             std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PaymentCryptographyDataClient::PaymentCryptographyDataClient(const AWSCredentials& credentials,
                                                             std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider,
                                                             const PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PaymentCryptographyDataClient::PaymentCryptographyDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             std::shared_ptr<PaymentCryptographyDataEndpointProviderBase> endpointProvider,
                                                             const PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PaymentCryptographyDataClient::PaymentCryptographyDataClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PaymentCryptographyDataClient::PaymentCryptographyDataClient(const AWSCredentials& credentials,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PaymentCryptographyDataClient::PaymentCryptographyDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PaymentCryptographyDataErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PaymentCryptographyDataEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PaymentCryptographyDataClient::~PaymentCryptographyDataClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<PaymentCryptographyDataEndpointProviderBase>& PaymentCryptographyDataClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PaymentCryptographyDataClient::init(const PaymentCryptographyData::PaymentCryptographyDataClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Payment Cryptography Data");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PaymentCryptographyDataClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DecryptDataOutcome PaymentCryptographyDataClient::DecryptData(const DecryptDataRequest& request) const
{
  AWS_OPERATION_GUARD(DecryptData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DecryptData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KeyIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DecryptData", "Required field: KeyIdentifier, is not set");
    return DecryptDataOutcome(Aws::Client::AWSError<PaymentCryptographyDataErrors>(PaymentCryptographyDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DecryptData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/decrypt");
  return DecryptDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EncryptDataOutcome PaymentCryptographyDataClient::EncryptData(const EncryptDataRequest& request) const
{
  AWS_OPERATION_GUARD(EncryptData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EncryptData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KeyIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EncryptData", "Required field: KeyIdentifier, is not set");
    return EncryptDataOutcome(Aws::Client::AWSError<PaymentCryptographyDataErrors>(PaymentCryptographyDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EncryptData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/encrypt");
  return EncryptDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateCardValidationDataOutcome PaymentCryptographyDataClient::GenerateCardValidationData(const GenerateCardValidationDataRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateCardValidationData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateCardValidationData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateCardValidationData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cardvalidationdata/generate");
  return GenerateCardValidationDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateMacOutcome PaymentCryptographyDataClient::GenerateMac(const GenerateMacRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateMac);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateMac, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateMac, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/mac/generate");
  return GenerateMacOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GeneratePinDataOutcome PaymentCryptographyDataClient::GeneratePinData(const GeneratePinDataRequest& request) const
{
  AWS_OPERATION_GUARD(GeneratePinData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GeneratePinData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GeneratePinData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pindata/generate");
  return GeneratePinDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReEncryptDataOutcome PaymentCryptographyDataClient::ReEncryptData(const ReEncryptDataRequest& request) const
{
  AWS_OPERATION_GUARD(ReEncryptData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReEncryptData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IncomingKeyIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReEncryptData", "Required field: IncomingKeyIdentifier, is not set");
    return ReEncryptDataOutcome(Aws::Client::AWSError<PaymentCryptographyDataErrors>(PaymentCryptographyDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IncomingKeyIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReEncryptData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIncomingKeyIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reencrypt");
  return ReEncryptDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TranslatePinDataOutcome PaymentCryptographyDataClient::TranslatePinData(const TranslatePinDataRequest& request) const
{
  AWS_OPERATION_GUARD(TranslatePinData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TranslatePinData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TranslatePinData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pindata/translate");
  return TranslatePinDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyAuthRequestCryptogramOutcome PaymentCryptographyDataClient::VerifyAuthRequestCryptogram(const VerifyAuthRequestCryptogramRequest& request) const
{
  AWS_OPERATION_GUARD(VerifyAuthRequestCryptogram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifyAuthRequestCryptogram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifyAuthRequestCryptogram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cryptogram/verify");
  return VerifyAuthRequestCryptogramOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyCardValidationDataOutcome PaymentCryptographyDataClient::VerifyCardValidationData(const VerifyCardValidationDataRequest& request) const
{
  AWS_OPERATION_GUARD(VerifyCardValidationData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifyCardValidationData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifyCardValidationData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cardvalidationdata/verify");
  return VerifyCardValidationDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyMacOutcome PaymentCryptographyDataClient::VerifyMac(const VerifyMacRequest& request) const
{
  AWS_OPERATION_GUARD(VerifyMac);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifyMac, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifyMac, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/mac/verify");
  return VerifyMacOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyPinDataOutcome PaymentCryptographyDataClient::VerifyPinData(const VerifyPinDataRequest& request) const
{
  AWS_OPERATION_GUARD(VerifyPinData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifyPinData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifyPinData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pindata/verify");
  return VerifyPinDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

