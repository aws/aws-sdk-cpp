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
#include <aws/ssm-incidents/SSMIncidentsClient.h>
#include <aws/ssm-incidents/SSMIncidentsEndpointProvider.h>
#include <aws/ssm-incidents/SSMIncidentsErrorMarshaller.h>
#include <aws/ssm-incidents/model/BatchGetIncidentFindingsRequest.h>
#include <aws/ssm-incidents/model/CreateReplicationSetRequest.h>
#include <aws/ssm-incidents/model/CreateResponsePlanRequest.h>
#include <aws/ssm-incidents/model/CreateTimelineEventRequest.h>
#include <aws/ssm-incidents/model/DeleteIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/DeleteReplicationSetRequest.h>
#include <aws/ssm-incidents/model/DeleteResourcePolicyRequest.h>
#include <aws/ssm-incidents/model/DeleteResponsePlanRequest.h>
#include <aws/ssm-incidents/model/DeleteTimelineEventRequest.h>
#include <aws/ssm-incidents/model/GetIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/GetReplicationSetRequest.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesRequest.h>
#include <aws/ssm-incidents/model/GetResponsePlanRequest.h>
#include <aws/ssm-incidents/model/GetTimelineEventRequest.h>
#include <aws/ssm-incidents/model/ListIncidentFindingsRequest.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsRequest.h>
#include <aws/ssm-incidents/model/ListRelatedItemsRequest.h>
#include <aws/ssm-incidents/model/ListReplicationSetsRequest.h>
#include <aws/ssm-incidents/model/ListResponsePlansRequest.h>
#include <aws/ssm-incidents/model/ListTagsForResourceRequest.h>
#include <aws/ssm-incidents/model/ListTimelineEventsRequest.h>
#include <aws/ssm-incidents/model/PutResourcePolicyRequest.h>
#include <aws/ssm-incidents/model/StartIncidentRequest.h>
#include <aws/ssm-incidents/model/TagResourceRequest.h>
#include <aws/ssm-incidents/model/UntagResourceRequest.h>
#include <aws/ssm-incidents/model/UpdateDeletionProtectionRequest.h>
#include <aws/ssm-incidents/model/UpdateIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/UpdateRelatedItemsRequest.h>
#include <aws/ssm-incidents/model/UpdateReplicationSetRequest.h>
#include <aws/ssm-incidents/model/UpdateResponsePlanRequest.h>
#include <aws/ssm-incidents/model/UpdateTimelineEventRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSMIncidents;
using namespace Aws::SSMIncidents::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SSMIncidents {
const char SERVICE_NAME[] = "ssm-incidents";
const char ALLOCATION_TAG[] = "SSMIncidentsClient";
}  // namespace SSMIncidents
}  // namespace Aws
const char* SSMIncidentsClient::GetServiceName() { return SERVICE_NAME; }
const char* SSMIncidentsClient::GetAllocationTag() { return ALLOCATION_TAG; }

SSMIncidentsClient::SSMIncidentsClient(const SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration,
                                       std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const AWSCredentials& credentials,
                                       std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider,
                                       const SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider,
                                       const SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SSMIncidentsClient::SSMIncidentsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SSMIncidentsClient::~SSMIncidentsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SSMIncidentsEndpointProviderBase>& SSMIncidentsClient::accessEndpointProvider() { return m_endpointProvider; }

void SSMIncidentsClient::init(const SSMIncidents::SSMIncidentsClientConfiguration& config) {
  AWSClient::SetServiceClientName("SSM Incidents");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ssm-incidents");
}

void SSMIncidentsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SSMIncidentsClient::InvokeOperationOutcome SSMIncidentsClient::InvokeServiceOperation(
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

BatchGetIncidentFindingsOutcome SSMIncidentsClient::BatchGetIncidentFindings(const BatchGetIncidentFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/batchGetIncidentFindings");
  };

  return BatchGetIncidentFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationSetOutcome SSMIncidentsClient::CreateReplicationSet(const CreateReplicationSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createReplicationSet");
  };

  return CreateReplicationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResponsePlanOutcome SSMIncidentsClient::CreateResponsePlan(const CreateResponsePlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createResponsePlan");
  };

  return CreateResponsePlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTimelineEventOutcome SSMIncidentsClient::CreateTimelineEvent(const CreateTimelineEventRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createTimelineEvent");
  };

  return CreateTimelineEventOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIncidentRecordOutcome SSMIncidentsClient::DeleteIncidentRecord(const DeleteIncidentRecordRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteIncidentRecord");
  };

  return DeleteIncidentRecordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationSetOutcome SSMIncidentsClient::DeleteReplicationSet(const DeleteReplicationSetRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReplicationSet", "Required field: Arn, is not set");
    return DeleteReplicationSetOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteReplicationSet");
  };

  return DeleteReplicationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome SSMIncidentsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteResourcePolicy");
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResponsePlanOutcome SSMIncidentsClient::DeleteResponsePlan(const DeleteResponsePlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteResponsePlan");
  };

  return DeleteResponsePlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTimelineEventOutcome SSMIncidentsClient::DeleteTimelineEvent(const DeleteTimelineEventRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteTimelineEvent");
  };

  return DeleteTimelineEventOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIncidentRecordOutcome SSMIncidentsClient::GetIncidentRecord(const GetIncidentRecordRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIncidentRecord", "Required field: Arn, is not set");
    return GetIncidentRecordOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getIncidentRecord");
  };

  return GetIncidentRecordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReplicationSetOutcome SSMIncidentsClient::GetReplicationSet(const GetReplicationSetRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReplicationSet", "Required field: Arn, is not set");
    return GetReplicationSetOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getReplicationSet");
  };

  return GetReplicationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcePoliciesOutcome SSMIncidentsClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicies", "Required field: ResourceArn, is not set");
    return GetResourcePoliciesOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getResourcePolicies");
  };

  return GetResourcePoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResponsePlanOutcome SSMIncidentsClient::GetResponsePlan(const GetResponsePlanRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResponsePlan", "Required field: Arn, is not set");
    return GetResponsePlanOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getResponsePlan");
  };

  return GetResponsePlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTimelineEventOutcome SSMIncidentsClient::GetTimelineEvent(const GetTimelineEventRequest& request) const {
  if (!request.EventIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimelineEvent", "Required field: EventId, is not set");
    return GetTimelineEventOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EventId]", false));
  }
  if (!request.IncidentRecordArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimelineEvent", "Required field: IncidentRecordArn, is not set");
    return GetTimelineEventOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [IncidentRecordArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getTimelineEvent");
  };

  return GetTimelineEventOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIncidentFindingsOutcome SSMIncidentsClient::ListIncidentFindings(const ListIncidentFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listIncidentFindings");
  };

  return ListIncidentFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIncidentRecordsOutcome SSMIncidentsClient::ListIncidentRecords(const ListIncidentRecordsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listIncidentRecords");
  };

  return ListIncidentRecordsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRelatedItemsOutcome SSMIncidentsClient::ListRelatedItems(const ListRelatedItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listRelatedItems");
  };

  return ListRelatedItemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReplicationSetsOutcome SSMIncidentsClient::ListReplicationSets(const ListReplicationSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listReplicationSets");
  };

  return ListReplicationSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResponsePlansOutcome SSMIncidentsClient::ListResponsePlans(const ListResponsePlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listResponsePlans");
  };

  return ListResponsePlansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome SSMIncidentsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTimelineEventsOutcome SSMIncidentsClient::ListTimelineEvents(const ListTimelineEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listTimelineEvents");
  };

  return ListTimelineEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome SSMIncidentsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/putResourcePolicy");
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartIncidentOutcome SSMIncidentsClient::StartIncident(const StartIncidentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/startIncident");
  };

  return StartIncidentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SSMIncidentsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SSMIncidentsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateDeletionProtectionOutcome SSMIncidentsClient::UpdateDeletionProtection(const UpdateDeletionProtectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateDeletionProtection");
  };

  return UpdateDeletionProtectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIncidentRecordOutcome SSMIncidentsClient::UpdateIncidentRecord(const UpdateIncidentRecordRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateIncidentRecord");
  };

  return UpdateIncidentRecordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRelatedItemsOutcome SSMIncidentsClient::UpdateRelatedItems(const UpdateRelatedItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateRelatedItems");
  };

  return UpdateRelatedItemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateReplicationSetOutcome SSMIncidentsClient::UpdateReplicationSet(const UpdateReplicationSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateReplicationSet");
  };

  return UpdateReplicationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResponsePlanOutcome SSMIncidentsClient::UpdateResponsePlan(const UpdateResponsePlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateResponsePlan");
  };

  return UpdateResponsePlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTimelineEventOutcome SSMIncidentsClient::UpdateTimelineEvent(const UpdateTimelineEventRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateTimelineEvent");
  };

  return UpdateTimelineEventOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
