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
#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/CloudWatchEndpointProvider.h>
#include <aws/monitoring/CloudWatchErrorMarshaller.h>
#include <aws/monitoring/model/DeleteAlarmMuteRuleRequest.h>
#include <aws/monitoring/model/DeleteAlarmsRequest.h>
#include <aws/monitoring/model/DeleteAnomalyDetectorRequest.h>
#include <aws/monitoring/model/DeleteDashboardsRequest.h>
#include <aws/monitoring/model/DeleteInsightRulesRequest.h>
#include <aws/monitoring/model/DeleteMetricStreamRequest.h>
#include <aws/monitoring/model/DescribeAlarmContributorsRequest.h>
#include <aws/monitoring/model/DescribeAlarmHistoryRequest.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricRequest.h>
#include <aws/monitoring/model/DescribeAlarmsRequest.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsRequest.h>
#include <aws/monitoring/model/DescribeInsightRulesRequest.h>
#include <aws/monitoring/model/DisableAlarmActionsRequest.h>
#include <aws/monitoring/model/DisableInsightRulesRequest.h>
#include <aws/monitoring/model/EnableAlarmActionsRequest.h>
#include <aws/monitoring/model/EnableInsightRulesRequest.h>
#include <aws/monitoring/model/GetAlarmMuteRuleRequest.h>
#include <aws/monitoring/model/GetDashboardRequest.h>
#include <aws/monitoring/model/GetInsightRuleReportRequest.h>
#include <aws/monitoring/model/GetMetricDataRequest.h>
#include <aws/monitoring/model/GetMetricStatisticsRequest.h>
#include <aws/monitoring/model/GetMetricStreamRequest.h>
#include <aws/monitoring/model/GetMetricWidgetImageRequest.h>
#include <aws/monitoring/model/ListAlarmMuteRulesRequest.h>
#include <aws/monitoring/model/ListDashboardsRequest.h>
#include <aws/monitoring/model/ListManagedInsightRulesRequest.h>
#include <aws/monitoring/model/ListMetricStreamsRequest.h>
#include <aws/monitoring/model/ListMetricsRequest.h>
#include <aws/monitoring/model/ListTagsForResourceRequest.h>
#include <aws/monitoring/model/PutAlarmMuteRuleRequest.h>
#include <aws/monitoring/model/PutAnomalyDetectorRequest.h>
#include <aws/monitoring/model/PutCompositeAlarmRequest.h>
#include <aws/monitoring/model/PutDashboardRequest.h>
#include <aws/monitoring/model/PutInsightRuleRequest.h>
#include <aws/monitoring/model/PutManagedInsightRulesRequest.h>
#include <aws/monitoring/model/PutMetricAlarmRequest.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/monitoring/model/PutMetricStreamRequest.h>
#include <aws/monitoring/model/SetAlarmStateRequest.h>
#include <aws/monitoring/model/StartMetricStreamsRequest.h>
#include <aws/monitoring/model/StopMetricStreamsRequest.h>
#include <aws/monitoring/model/TagResourceRequest.h>
#include <aws/monitoring/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatch;
using namespace Aws::CloudWatch::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudWatch {
const char SERVICE_NAME[] = "monitoring";
const char ALLOCATION_TAG[] = "CloudWatchClient";
}  // namespace CloudWatch
}  // namespace Aws
const char* CloudWatchClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudWatchClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudWatchClient::CloudWatchClient(const CloudWatch::CloudWatchClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const AWSCredentials& credentials, std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider,
                                   const CloudWatch::CloudWatchClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider,
                                   const CloudWatch::CloudWatchClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudWatchClient::CloudWatchClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudWatchClient::~CloudWatchClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudWatchEndpointProviderBase>& CloudWatchClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudWatchClient::init(const CloudWatch::CloudWatchClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudWatch");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "monitoring");
}

void CloudWatchClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudWatchClient::InvokeOperationOutcome CloudWatchClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/GraniteServiceVersion20100801/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

DeleteAlarmMuteRuleOutcome CloudWatchClient::DeleteAlarmMuteRule(const DeleteAlarmMuteRuleRequest& request) const {
  return DeleteAlarmMuteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAlarmsOutcome CloudWatchClient::DeleteAlarms(const DeleteAlarmsRequest& request) const {
  return DeleteAlarmsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAnomalyDetectorOutcome CloudWatchClient::DeleteAnomalyDetector(const DeleteAnomalyDetectorRequest& request) const {
  return DeleteAnomalyDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDashboardsOutcome CloudWatchClient::DeleteDashboards(const DeleteDashboardsRequest& request) const {
  return DeleteDashboardsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInsightRulesOutcome CloudWatchClient::DeleteInsightRules(const DeleteInsightRulesRequest& request) const {
  return DeleteInsightRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMetricStreamOutcome CloudWatchClient::DeleteMetricStream(const DeleteMetricStreamRequest& request) const {
  return DeleteMetricStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAlarmContributorsOutcome CloudWatchClient::DescribeAlarmContributors(const DescribeAlarmContributorsRequest& request) const {
  return DescribeAlarmContributorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAlarmHistoryOutcome CloudWatchClient::DescribeAlarmHistory(const DescribeAlarmHistoryRequest& request) const {
  return DescribeAlarmHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAlarmsOutcome CloudWatchClient::DescribeAlarms(const DescribeAlarmsRequest& request) const {
  return DescribeAlarmsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAlarmsForMetricOutcome CloudWatchClient::DescribeAlarmsForMetric(const DescribeAlarmsForMetricRequest& request) const {
  return DescribeAlarmsForMetricOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAnomalyDetectorsOutcome CloudWatchClient::DescribeAnomalyDetectors(const DescribeAnomalyDetectorsRequest& request) const {
  return DescribeAnomalyDetectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInsightRulesOutcome CloudWatchClient::DescribeInsightRules(const DescribeInsightRulesRequest& request) const {
  return DescribeInsightRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableAlarmActionsOutcome CloudWatchClient::DisableAlarmActions(const DisableAlarmActionsRequest& request) const {
  return DisableAlarmActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableInsightRulesOutcome CloudWatchClient::DisableInsightRules(const DisableInsightRulesRequest& request) const {
  return DisableInsightRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableAlarmActionsOutcome CloudWatchClient::EnableAlarmActions(const EnableAlarmActionsRequest& request) const {
  return EnableAlarmActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableInsightRulesOutcome CloudWatchClient::EnableInsightRules(const EnableInsightRulesRequest& request) const {
  return EnableInsightRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAlarmMuteRuleOutcome CloudWatchClient::GetAlarmMuteRule(const GetAlarmMuteRuleRequest& request) const {
  return GetAlarmMuteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDashboardOutcome CloudWatchClient::GetDashboard(const GetDashboardRequest& request) const {
  return GetDashboardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInsightRuleReportOutcome CloudWatchClient::GetInsightRuleReport(const GetInsightRuleReportRequest& request) const {
  return GetInsightRuleReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMetricDataOutcome CloudWatchClient::GetMetricData(const GetMetricDataRequest& request) const {
  return GetMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMetricStatisticsOutcome CloudWatchClient::GetMetricStatistics(const GetMetricStatisticsRequest& request) const {
  return GetMetricStatisticsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMetricStreamOutcome CloudWatchClient::GetMetricStream(const GetMetricStreamRequest& request) const {
  return GetMetricStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMetricWidgetImageOutcome CloudWatchClient::GetMetricWidgetImage(const GetMetricWidgetImageRequest& request) const {
  return GetMetricWidgetImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAlarmMuteRulesOutcome CloudWatchClient::ListAlarmMuteRules(const ListAlarmMuteRulesRequest& request) const {
  return ListAlarmMuteRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDashboardsOutcome CloudWatchClient::ListDashboards(const ListDashboardsRequest& request) const {
  return ListDashboardsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListManagedInsightRulesOutcome CloudWatchClient::ListManagedInsightRules(const ListManagedInsightRulesRequest& request) const {
  return ListManagedInsightRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMetricStreamsOutcome CloudWatchClient::ListMetricStreams(const ListMetricStreamsRequest& request) const {
  return ListMetricStreamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMetricsOutcome CloudWatchClient::ListMetrics(const ListMetricsRequest& request) const {
  return ListMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CloudWatchClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAlarmMuteRuleOutcome CloudWatchClient::PutAlarmMuteRule(const PutAlarmMuteRuleRequest& request) const {
  return PutAlarmMuteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAnomalyDetectorOutcome CloudWatchClient::PutAnomalyDetector(const PutAnomalyDetectorRequest& request) const {
  return PutAnomalyDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutCompositeAlarmOutcome CloudWatchClient::PutCompositeAlarm(const PutCompositeAlarmRequest& request) const {
  return PutCompositeAlarmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDashboardOutcome CloudWatchClient::PutDashboard(const PutDashboardRequest& request) const {
  return PutDashboardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutInsightRuleOutcome CloudWatchClient::PutInsightRule(const PutInsightRuleRequest& request) const {
  return PutInsightRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutManagedInsightRulesOutcome CloudWatchClient::PutManagedInsightRules(const PutManagedInsightRulesRequest& request) const {
  return PutManagedInsightRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMetricAlarmOutcome CloudWatchClient::PutMetricAlarm(const PutMetricAlarmRequest& request) const {
  return PutMetricAlarmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMetricDataOutcome CloudWatchClient::PutMetricData(const PutMetricDataRequest& request) const {
  return PutMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMetricStreamOutcome CloudWatchClient::PutMetricStream(const PutMetricStreamRequest& request) const {
  return PutMetricStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetAlarmStateOutcome CloudWatchClient::SetAlarmState(const SetAlarmStateRequest& request) const {
  return SetAlarmStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetricStreamsOutcome CloudWatchClient::StartMetricStreams(const StartMetricStreamsRequest& request) const {
  return StartMetricStreamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopMetricStreamsOutcome CloudWatchClient::StopMetricStreams(const StopMetricStreamsRequest& request) const {
  return StopMetricStreamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CloudWatchClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CloudWatchClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
