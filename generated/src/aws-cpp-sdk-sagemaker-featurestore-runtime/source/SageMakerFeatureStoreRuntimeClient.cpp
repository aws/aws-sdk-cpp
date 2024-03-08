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

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClient.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrorMarshaller.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointProvider.h>
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

namespace Aws
{
  namespace SageMakerFeatureStoreRuntime
  {
    const char SERVICE_NAME[] = "sagemaker";
    const char ALLOCATION_TAG[] = "SageMakerFeatureStoreRuntimeClient";
  }
}
const char* SageMakerFeatureStoreRuntimeClient::GetServiceName() {return SERVICE_NAME;}
const char* SageMakerFeatureStoreRuntimeClient::GetAllocationTag() {return ALLOCATION_TAG;}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration,
                                                                       std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const AWSCredentials& credentials,
                                                                       std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider,
                                                                       const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider,
                                                                       const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const AWSCredentials& credentials,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SageMakerFeatureStoreRuntimeClient::~SageMakerFeatureStoreRuntimeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase>& SageMakerFeatureStoreRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SageMakerFeatureStoreRuntimeClient::init(const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SageMaker FeatureStore Runtime");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SageMakerFeatureStoreRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchGetRecordOutcome SageMakerFeatureStoreRuntimeClient::BatchGetRecord(const BatchGetRecordRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetRecord);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetRecord",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetRecordOutcome>(
    [&]()-> BatchGetRecordOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGetRecord");
      return BatchGetRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRecordOutcome SageMakerFeatureStoreRuntimeClient::DeleteRecord(const DeleteRecordRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRecord);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: FeatureGroupName, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }
  if (!request.RecordIdentifierValueAsStringHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: RecordIdentifierValueAsString, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordIdentifierValueAsString]", false));
  }
  if (!request.EventTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: EventTime, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventTime]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRecord",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRecordOutcome>(
    [&]()-> DeleteRecordOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/FeatureGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeatureGroupName());
      return DeleteRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRecordOutcome SageMakerFeatureStoreRuntimeClient::GetRecord(const GetRecordRequest& request) const
{
  AWS_OPERATION_GUARD(GetRecord);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecord", "Required field: FeatureGroupName, is not set");
    return GetRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }
  if (!request.RecordIdentifierValueAsStringHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecord", "Required field: RecordIdentifierValueAsString, is not set");
    return GetRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordIdentifierValueAsString]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRecord",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRecordOutcome>(
    [&]()-> GetRecordOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/FeatureGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeatureGroupName());
      return GetRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutRecordOutcome SageMakerFeatureStoreRuntimeClient::PutRecord(const PutRecordRequest& request) const
{
  AWS_OPERATION_GUARD(PutRecord);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRecord", "Required field: FeatureGroupName, is not set");
    return PutRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutRecord",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutRecordOutcome>(
    [&]()-> PutRecordOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/FeatureGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeatureGroupName());
      return PutRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

