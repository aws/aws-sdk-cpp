/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/application-signals/ApplicationSignalsClient.h>
#include <aws/application-signals/ApplicationSignalsEndpointProvider.h>
#include <aws/application-signals/ApplicationSignalsEndpointRules.h>
#include <aws/application-signals/ApplicationSignalsErrorMarshaller.h>
#include <aws/application-signals/ApplicationSignalsErrors.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignalsServiceClientModel.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/BatchGetServiceLevelObjectiveBudgetReportRequest.h>
#include <aws/application-signals/model/BatchGetServiceLevelObjectiveBudgetReportResult.h>
#include <aws/application-signals/model/BatchUpdateExclusionWindowsError.h>
#include <aws/application-signals/model/BatchUpdateExclusionWindowsRequest.h>
#include <aws/application-signals/model/BatchUpdateExclusionWindowsResult.h>
#include <aws/application-signals/model/BurnRateConfiguration.h>
#include <aws/application-signals/model/CalendarInterval.h>
#include <aws/application-signals/model/CreateServiceLevelObjectiveRequest.h>
#include <aws/application-signals/model/CreateServiceLevelObjectiveResult.h>
#include <aws/application-signals/model/DeleteServiceLevelObjectiveRequest.h>
#include <aws/application-signals/model/DeleteServiceLevelObjectiveResult.h>
#include <aws/application-signals/model/DependencyConfig.h>
#include <aws/application-signals/model/Dimension.h>
#include <aws/application-signals/model/DurationUnit.h>
#include <aws/application-signals/model/EvaluationType.h>
#include <aws/application-signals/model/ExclusionWindow.h>
#include <aws/application-signals/model/GetServiceLevelObjectiveRequest.h>
#include <aws/application-signals/model/GetServiceLevelObjectiveResult.h>
#include <aws/application-signals/model/GetServiceRequest.h>
#include <aws/application-signals/model/GetServiceResult.h>
#include <aws/application-signals/model/Goal.h>
#include <aws/application-signals/model/Interval.h>
#include <aws/application-signals/model/ListServiceDependenciesRequest.h>
#include <aws/application-signals/model/ListServiceDependenciesResult.h>
#include <aws/application-signals/model/ListServiceDependentsRequest.h>
#include <aws/application-signals/model/ListServiceDependentsResult.h>
#include <aws/application-signals/model/ListServiceLevelObjectiveExclusionWindowsRequest.h>
#include <aws/application-signals/model/ListServiceLevelObjectiveExclusionWindowsResult.h>
#include <aws/application-signals/model/ListServiceLevelObjectivesRequest.h>
#include <aws/application-signals/model/ListServiceLevelObjectivesResult.h>
#include <aws/application-signals/model/ListServiceOperationsRequest.h>
#include <aws/application-signals/model/ListServiceOperationsResult.h>
#include <aws/application-signals/model/ListServicesRequest.h>
#include <aws/application-signals/model/ListServicesResult.h>
#include <aws/application-signals/model/ListTagsForResourceRequest.h>
#include <aws/application-signals/model/ListTagsForResourceResult.h>
#include <aws/application-signals/model/Metric.h>
#include <aws/application-signals/model/MetricDataQuery.h>
#include <aws/application-signals/model/MetricReference.h>
#include <aws/application-signals/model/MetricSourceType.h>
#include <aws/application-signals/model/MetricStat.h>
#include <aws/application-signals/model/MonitoredRequestCountMetricDataQueries.h>
#include <aws/application-signals/model/RecurrenceRule.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicator.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorConfig.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorMetric.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorMetricConfig.h>
#include <aws/application-signals/model/ResourceNotFoundException.h>
#include <aws/application-signals/model/RollingInterval.h>
#include <aws/application-signals/model/Service.h>
#include <aws/application-signals/model/ServiceDependency.h>
#include <aws/application-signals/model/ServiceDependent.h>
#include <aws/application-signals/model/ServiceLevelIndicator.h>
#include <aws/application-signals/model/ServiceLevelIndicatorComparisonOperator.h>
#include <aws/application-signals/model/ServiceLevelIndicatorConfig.h>
#include <aws/application-signals/model/ServiceLevelIndicatorMetric.h>
#include <aws/application-signals/model/ServiceLevelIndicatorMetricConfig.h>
#include <aws/application-signals/model/ServiceLevelIndicatorMetricType.h>
#include <aws/application-signals/model/ServiceLevelObjective.h>
#include <aws/application-signals/model/ServiceLevelObjectiveBudgetReport.h>
#include <aws/application-signals/model/ServiceLevelObjectiveBudgetReportError.h>
#include <aws/application-signals/model/ServiceLevelObjectiveBudgetStatus.h>
#include <aws/application-signals/model/ServiceLevelObjectiveSummary.h>
#include <aws/application-signals/model/ServiceOperation.h>
#include <aws/application-signals/model/ServiceSummary.h>
#include <aws/application-signals/model/StandardUnit.h>
#include <aws/application-signals/model/StartDiscoveryRequest.h>
#include <aws/application-signals/model/StartDiscoveryResult.h>
#include <aws/application-signals/model/Tag.h>
#include <aws/application-signals/model/TagResourceRequest.h>
#include <aws/application-signals/model/TagResourceResult.h>
#include <aws/application-signals/model/UntagResourceRequest.h>
#include <aws/application-signals/model/UntagResourceResult.h>
#include <aws/application-signals/model/UpdateServiceLevelObjectiveRequest.h>
#include <aws/application-signals/model/UpdateServiceLevelObjectiveResult.h>
#include <aws/application-signals/model/Window.h>

using ApplicationSignalsIncludeTest = ::testing::Test;

TEST_F(ApplicationSignalsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ApplicationSignals::ApplicationSignalsClient>("ApplicationSignalsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
