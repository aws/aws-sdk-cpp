/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

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
    const char ALLOCATION_TAG[] = "SageMakerFeatureStoreRuntimeClient";
    const char SERVICE_NAME[] = "sagemaker";
  }
}
const char* SageMakerFeatureStoreRuntimeClient::GetServiceName() {return SERVICE_NAME;}
const char* SageMakerFeatureStoreRuntimeClient::GetAllocationTag() {return ALLOCATION_TAG;}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration,
                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker FeatureStore Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const AWSCredentials& credentials,
                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider,
                           const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker FeatureStore Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider,
                           const SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker FeatureStore Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "SageMaker FeatureStore Runtime",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker FeatureStore Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker FeatureStore Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

SageMakerFeatureStoreRuntimeClient::~SageMakerFeatureStoreRuntimeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase>& SageMakerFeatureStoreRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchGetRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetRecord",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetRecordOutcome>(
    [&]()-> BatchGetRecordOutcome {
      return BatchGetRecordOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/BatchGetRecord");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRecord",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRecordOutcome>(
    [&]()-> DeleteRecordOutcome {
      return DeleteRecordOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/FeatureGroup/");
      resolvedEndpoint.AddPathSegment(request.GetFeatureGroupName());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRecord",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRecordOutcome>(
    [&]()-> GetRecordOutcome {
      return GetRecordOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/FeatureGroup/");
      resolvedEndpoint.AddPathSegment(request.GetFeatureGroupName());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutRecord, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutRecord",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutRecordOutcome>(
    [&]()-> PutRecordOutcome {
      return PutRecordOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/FeatureGroup/");
      resolvedEndpoint.AddPathSegment(request.GetFeatureGroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


