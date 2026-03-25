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
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClient.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointProvider.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrorMarshaller.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/DeleteRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/GetRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/PutRecordRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerFeatureStoreRuntime;
using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
const char SERVICE_NAME[] = "sagemaker";
const char ALLOCATION_TAG[] = "SageMakerFeatureStoreRuntimeClient";
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
const char* SageMakerFeatureStoreRuntimeClient::GetServiceName() { return SERVICE_NAME; }
const char* SageMakerFeatureStoreRuntimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(
    const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration,
    std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(
    const AWSCredentials& credentials, std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider,
    const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider,
    const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const AWSCredentials& credentials,
                                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SageMakerFeatureStoreRuntimeClient::~SageMakerFeatureStoreRuntimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase>& SageMakerFeatureStoreRuntimeClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void SageMakerFeatureStoreRuntimeClient::init(const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& config) {
  AWSClient::SetServiceClientName("SageMaker FeatureStore Runtime");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sagemaker");
}

void SageMakerFeatureStoreRuntimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SageMakerFeatureStoreRuntimeClient::InvokeOperationOutcome SageMakerFeatureStoreRuntimeClient::InvokeServiceOperation(
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

BatchGetRecordOutcome SageMakerFeatureStoreRuntimeClient::BatchGetRecord(const BatchGetRecordRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetRecord");
  };

  return BatchGetRecordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRecordOutcome SageMakerFeatureStoreRuntimeClient::DeleteRecord(const DeleteRecordRequest& request) const {
  if (!request.FeatureGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: FeatureGroupName, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(
        SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }
  if (!request.RecordIdentifierValueAsStringHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: RecordIdentifierValueAsString, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(
        SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
        "Missing required field [RecordIdentifierValueAsString]", false));
  }
  if (!request.EventTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: EventTime, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(
        SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FeatureGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeatureGroupName());
  };

  return DeleteRecordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetRecordOutcome SageMakerFeatureStoreRuntimeClient::GetRecord(const GetRecordRequest& request) const {
  if (!request.FeatureGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecord", "Required field: FeatureGroupName, is not set");
    return GetRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(
        SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }
  if (!request.RecordIdentifierValueAsStringHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecord", "Required field: RecordIdentifierValueAsString, is not set");
    return GetRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(
        SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
        "Missing required field [RecordIdentifierValueAsString]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FeatureGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeatureGroupName());
  };

  return GetRecordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutRecordOutcome SageMakerFeatureStoreRuntimeClient::PutRecord(const PutRecordRequest& request) const {
  if (!request.FeatureGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRecord", "Required field: FeatureGroupName, is not set");
    return PutRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(
        SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/FeatureGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeatureGroupName());
  };

  return PutRecordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
