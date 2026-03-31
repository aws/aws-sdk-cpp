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
SignerDataClient::SignerDataClient(const Aws::Client::ClientConfiguration& clientConfiguration)
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

SignerDataClient::SignerDataClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SignerDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SignerDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SignerDataClient::SignerDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
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
SignerDataClient::InvokeOperationOutcome SignerDataClient::InvokeServiceOperation(
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

GetRevocationStatusOutcome SignerDataClient::GetRevocationStatus(const GetRevocationStatusRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/revocations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRevocationStatusOutcome(result.GetResultWithOwnership())
                            : GetRevocationStatusOutcome(std::move(result.GetError()));
}
