/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/evidently/CloudWatchEvidentlyClient.h>
#include <aws/evidently/CloudWatchEvidentlyEndpointProvider.h>
#include <aws/evidently/CloudWatchEvidentlyEndpointRules.h>
#include <aws/evidently/CloudWatchEvidentlyErrorMarshaller.h>
#include <aws/evidently/CloudWatchEvidentlyErrors.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/evidently/CloudWatchEvidentlyServiceClientModel.h>
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/ChangeDirectionEnum.h>
#include <aws/evidently/model/CloudWatchLogsDestination.h>
#include <aws/evidently/model/CloudWatchLogsDestinationConfig.h>
#include <aws/evidently/model/EvaluationRequest.h>
#include <aws/evidently/model/EvaluationResult.h>
#include <aws/evidently/model/EvaluationRule.h>
#include <aws/evidently/model/Event.h>
#include <aws/evidently/model/EventType.h>
#include <aws/evidently/model/Experiment.h>
#include <aws/evidently/model/ExperimentBaseStat.h>
#include <aws/evidently/model/ExperimentExecution.h>
#include <aws/evidently/model/ExperimentReport.h>
#include <aws/evidently/model/ExperimentReportName.h>
#include <aws/evidently/model/ExperimentResultRequestType.h>
#include <aws/evidently/model/ExperimentResultResponseType.h>
#include <aws/evidently/model/ExperimentResultsData.h>
#include <aws/evidently/model/ExperimentSchedule.h>
#include <aws/evidently/model/ExperimentStatus.h>
#include <aws/evidently/model/ExperimentStopDesiredState.h>
#include <aws/evidently/model/ExperimentType.h>
#include <aws/evidently/model/Feature.h>
#include <aws/evidently/model/FeatureEvaluationStrategy.h>
#include <aws/evidently/model/FeatureStatus.h>
#include <aws/evidently/model/FeatureSummary.h>
#include <aws/evidently/model/Launch.h>
#include <aws/evidently/model/LaunchExecution.h>
#include <aws/evidently/model/LaunchGroup.h>
#include <aws/evidently/model/LaunchGroupConfig.h>
#include <aws/evidently/model/LaunchStatus.h>
#include <aws/evidently/model/LaunchStopDesiredState.h>
#include <aws/evidently/model/LaunchType.h>
#include <aws/evidently/model/MetricDefinition.h>
#include <aws/evidently/model/MetricDefinitionConfig.h>
#include <aws/evidently/model/MetricGoal.h>
#include <aws/evidently/model/MetricGoalConfig.h>
#include <aws/evidently/model/MetricMonitor.h>
#include <aws/evidently/model/MetricMonitorConfig.h>
#include <aws/evidently/model/OnlineAbConfig.h>
#include <aws/evidently/model/OnlineAbDefinition.h>
#include <aws/evidently/model/Project.h>
#include <aws/evidently/model/ProjectAppConfigResource.h>
#include <aws/evidently/model/ProjectAppConfigResourceConfig.h>
#include <aws/evidently/model/ProjectDataDelivery.h>
#include <aws/evidently/model/ProjectDataDeliveryConfig.h>
#include <aws/evidently/model/ProjectStatus.h>
#include <aws/evidently/model/ProjectSummary.h>
#include <aws/evidently/model/PutProjectEventsResultEntry.h>
#include <aws/evidently/model/RefResource.h>
#include <aws/evidently/model/S3Destination.h>
#include <aws/evidently/model/S3DestinationConfig.h>
#include <aws/evidently/model/ScheduledSplit.h>
#include <aws/evidently/model/ScheduledSplitConfig.h>
#include <aws/evidently/model/ScheduledSplitsLaunchConfig.h>
#include <aws/evidently/model/ScheduledSplitsLaunchDefinition.h>
#include <aws/evidently/model/Segment.h>
#include <aws/evidently/model/SegmentOverride.h>
#include <aws/evidently/model/SegmentReferenceResourceType.h>
#include <aws/evidently/model/Treatment.h>
#include <aws/evidently/model/TreatmentConfig.h>
#include <aws/evidently/model/ValidationExceptionField.h>
#include <aws/evidently/model/ValidationExceptionReason.h>
#include <aws/evidently/model/VariableValue.h>
#include <aws/evidently/model/Variation.h>
#include <aws/evidently/model/VariationConfig.h>
#include <aws/evidently/model/VariationValueType.h>

using CloudWatchEvidentlyIncludeTest = ::testing::Test;

TEST_F(CloudWatchEvidentlyIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudWatchEvidently::CloudWatchEvidentlyClient>("CloudWatchEvidentlyIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
