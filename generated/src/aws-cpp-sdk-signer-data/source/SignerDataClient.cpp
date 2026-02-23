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
#include <aws/signer-data/SignerDataClient.h>
#include <aws/signer-data/SignerDataEndpointProvider.h>
#include <aws/signer-data/SignerDataErrorMarshaller.h>
#include <aws/signer-data/model/GetRevocationStatusRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SignerData;
using namespace Aws::SignerData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SignerData {
const char SERVICE_NAME[] = "signer";
const char ALLOCATION_TAG[] = "SignerDataClient";
}  // namespace SignerData
}  // namespace Aws
const char* SignerDataClient::GetServiceName() { return SERVICE_NAME; }
const char* SignerDataClient::GetAllocationTag() { return ALLOCATION_TAG; }

SignerDataClient::SignerDataClient(const SignerData::SignerDataClientConfiguration& clientConfiguration,
                                   std::shared_ptr<SignerDataEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SignerDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerDataClient::SignerDataClient(const AWSCredentials& credentials, std::shared_ptr<SignerDataEndpointProviderBase> endpointProvider,
                                   const SignerData::SignerDataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SignerDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerDataClient::SignerDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<SignerDataEndpointProviderBase> endpointProvider,
                                   const SignerData::SignerDataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SignerDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SignerDataClient::SignerDataClient(const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SignerDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerDataClient::SignerDataClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SignerDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerDataClient::SignerDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SignerDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SignerDataClient::~SignerDataClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SignerDataEndpointProviderBase>& SignerDataClient::accessEndpointProvider() { return m_endpointProvider; }

void SignerDataClient::init(const SignerData::SignerDataClientConfiguration& config) {
  AWSClient::SetServiceClientName("Signer Data");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "signer");
}

void SignerDataClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetRevocationStatusOutcome SignerDataClient::GetRevocationStatus(const GetRevocationStatusRequest& request) const {
  AWS_OPERATION_GUARD(GetRevocationStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRevocationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SignatureTimestampHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: SignatureTimestamp, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerDataErrors>(SignerDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SignatureTimestamp]", false));
  }
  if (!request.PlatformIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: PlatformId, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerDataErrors>(SignerDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [PlatformId]", false));
  }
  if (!request.ProfileVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: ProfileVersionArn, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerDataErrors>(SignerDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProfileVersionArn]", false));
  }
  if (!request.JobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: JobArn, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerDataErrors>(SignerDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [JobArn]", false));
  }
  if (!request.CertificateHashesHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevocationStatus", "Required field: CertificateHashes, is not set");
    return GetRevocationStatusOutcome(Aws::Client::AWSError<SignerDataErrors>(SignerDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CertificateHashes]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRevocationStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRevocationStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRevocationStatus",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRevocationStatusOutcome>(
      [&]() -> GetRevocationStatusOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRevocationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/revocations");
        return GetRevocationStatusOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
