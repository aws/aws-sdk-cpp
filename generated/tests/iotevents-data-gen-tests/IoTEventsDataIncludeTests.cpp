/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iotevents-data/IoTEventsDataClient.h>
#include <aws/iotevents-data/IoTEventsDataEndpointProvider.h>
#include <aws/iotevents-data/IoTEventsDataEndpointRules.h>
#include <aws/iotevents-data/IoTEventsDataErrorMarshaller.h>
#include <aws/iotevents-data/IoTEventsDataErrors.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/iotevents-data/IoTEventsDataServiceClientModel.h>
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/AcknowledgeActionConfiguration.h>
#include <aws/iotevents-data/model/AcknowledgeAlarmActionRequest.h>
#include <aws/iotevents-data/model/Alarm.h>
#include <aws/iotevents-data/model/AlarmState.h>
#include <aws/iotevents-data/model/AlarmStateName.h>
#include <aws/iotevents-data/model/AlarmSummary.h>
#include <aws/iotevents-data/model/BatchAcknowledgeAlarmRequest.h>
#include <aws/iotevents-data/model/BatchAcknowledgeAlarmResult.h>
#include <aws/iotevents-data/model/BatchAlarmActionErrorEntry.h>
#include <aws/iotevents-data/model/BatchDeleteDetectorErrorEntry.h>
#include <aws/iotevents-data/model/BatchDeleteDetectorRequest.h>
#include <aws/iotevents-data/model/BatchDeleteDetectorResult.h>
#include <aws/iotevents-data/model/BatchDisableAlarmRequest.h>
#include <aws/iotevents-data/model/BatchDisableAlarmResult.h>
#include <aws/iotevents-data/model/BatchEnableAlarmRequest.h>
#include <aws/iotevents-data/model/BatchEnableAlarmResult.h>
#include <aws/iotevents-data/model/BatchPutMessageErrorEntry.h>
#include <aws/iotevents-data/model/BatchPutMessageRequest.h>
#include <aws/iotevents-data/model/BatchPutMessageResult.h>
#include <aws/iotevents-data/model/BatchResetAlarmRequest.h>
#include <aws/iotevents-data/model/BatchResetAlarmResult.h>
#include <aws/iotevents-data/model/BatchSnoozeAlarmRequest.h>
#include <aws/iotevents-data/model/BatchSnoozeAlarmResult.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorErrorEntry.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorRequest.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorResult.h>
#include <aws/iotevents-data/model/ComparisonOperator.h>
#include <aws/iotevents-data/model/CustomerAction.h>
#include <aws/iotevents-data/model/CustomerActionName.h>
#include <aws/iotevents-data/model/DeleteDetectorRequest.h>
#include <aws/iotevents-data/model/DescribeAlarmRequest.h>
#include <aws/iotevents-data/model/DescribeAlarmResult.h>
#include <aws/iotevents-data/model/DescribeDetectorRequest.h>
#include <aws/iotevents-data/model/DescribeDetectorResult.h>
#include <aws/iotevents-data/model/Detector.h>
#include <aws/iotevents-data/model/DetectorState.h>
#include <aws/iotevents-data/model/DetectorStateDefinition.h>
#include <aws/iotevents-data/model/DetectorStateSummary.h>
#include <aws/iotevents-data/model/DetectorSummary.h>
#include <aws/iotevents-data/model/DisableActionConfiguration.h>
#include <aws/iotevents-data/model/DisableAlarmActionRequest.h>
#include <aws/iotevents-data/model/EnableActionConfiguration.h>
#include <aws/iotevents-data/model/EnableAlarmActionRequest.h>
#include <aws/iotevents-data/model/ErrorCode.h>
#include <aws/iotevents-data/model/EventType.h>
#include <aws/iotevents-data/model/ListAlarmsRequest.h>
#include <aws/iotevents-data/model/ListAlarmsResult.h>
#include <aws/iotevents-data/model/ListDetectorsRequest.h>
#include <aws/iotevents-data/model/ListDetectorsResult.h>
#include <aws/iotevents-data/model/Message.h>
#include <aws/iotevents-data/model/ResetActionConfiguration.h>
#include <aws/iotevents-data/model/ResetAlarmActionRequest.h>
#include <aws/iotevents-data/model/RuleEvaluation.h>
#include <aws/iotevents-data/model/SimpleRuleEvaluation.h>
#include <aws/iotevents-data/model/SnoozeActionConfiguration.h>
#include <aws/iotevents-data/model/SnoozeAlarmActionRequest.h>
#include <aws/iotevents-data/model/StateChangeConfiguration.h>
#include <aws/iotevents-data/model/SystemEvent.h>
#include <aws/iotevents-data/model/Timer.h>
#include <aws/iotevents-data/model/TimerDefinition.h>
#include <aws/iotevents-data/model/TimestampValue.h>
#include <aws/iotevents-data/model/TriggerType.h>
#include <aws/iotevents-data/model/UpdateDetectorRequest.h>
#include <aws/iotevents-data/model/Variable.h>
#include <aws/iotevents-data/model/VariableDefinition.h>

using IoTEventsDataIncludeTest = ::testing::Test;

TEST_F(IoTEventsDataIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IoTEventsData::IoTEventsDataClient>("IoTEventsDataIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
