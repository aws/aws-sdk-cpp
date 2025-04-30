/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kafkaconnect/KafkaConnectClient.h>
#include <aws/kafkaconnect/KafkaConnectEndpointProvider.h>
#include <aws/kafkaconnect/KafkaConnectEndpointRules.h>
#include <aws/kafkaconnect/KafkaConnectErrorMarshaller.h>
#include <aws/kafkaconnect/KafkaConnectErrors.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/kafkaconnect/KafkaConnectServiceClientModel.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ApacheKafkaCluster.h>
#include <aws/kafkaconnect/model/ApacheKafkaClusterDescription.h>
#include <aws/kafkaconnect/model/AutoScaling.h>
#include <aws/kafkaconnect/model/AutoScalingDescription.h>
#include <aws/kafkaconnect/model/AutoScalingUpdate.h>
#include <aws/kafkaconnect/model/Capacity.h>
#include <aws/kafkaconnect/model/CapacityDescription.h>
#include <aws/kafkaconnect/model/CapacityUpdate.h>
#include <aws/kafkaconnect/model/CloudWatchLogsLogDelivery.h>
#include <aws/kafkaconnect/model/CloudWatchLogsLogDeliveryDescription.h>
#include <aws/kafkaconnect/model/ConnectorOperationState.h>
#include <aws/kafkaconnect/model/ConnectorOperationStep.h>
#include <aws/kafkaconnect/model/ConnectorOperationStepState.h>
#include <aws/kafkaconnect/model/ConnectorOperationStepType.h>
#include <aws/kafkaconnect/model/ConnectorOperationSummary.h>
#include <aws/kafkaconnect/model/ConnectorOperationType.h>
#include <aws/kafkaconnect/model/ConnectorState.h>
#include <aws/kafkaconnect/model/ConnectorSummary.h>
#include <aws/kafkaconnect/model/CreateConnectorRequest.h>
#include <aws/kafkaconnect/model/CreateConnectorResult.h>
#include <aws/kafkaconnect/model/CreateCustomPluginRequest.h>
#include <aws/kafkaconnect/model/CreateCustomPluginResult.h>
#include <aws/kafkaconnect/model/CreateWorkerConfigurationRequest.h>
#include <aws/kafkaconnect/model/CreateWorkerConfigurationResult.h>
#include <aws/kafkaconnect/model/CustomPlugin.h>
#include <aws/kafkaconnect/model/CustomPluginContentType.h>
#include <aws/kafkaconnect/model/CustomPluginDescription.h>
#include <aws/kafkaconnect/model/CustomPluginFileDescription.h>
#include <aws/kafkaconnect/model/CustomPluginLocation.h>
#include <aws/kafkaconnect/model/CustomPluginLocationDescription.h>
#include <aws/kafkaconnect/model/CustomPluginRevisionSummary.h>
#include <aws/kafkaconnect/model/CustomPluginState.h>
#include <aws/kafkaconnect/model/CustomPluginSummary.h>
#include <aws/kafkaconnect/model/DeleteConnectorRequest.h>
#include <aws/kafkaconnect/model/DeleteConnectorResult.h>
#include <aws/kafkaconnect/model/DeleteCustomPluginRequest.h>
#include <aws/kafkaconnect/model/DeleteCustomPluginResult.h>
#include <aws/kafkaconnect/model/DeleteWorkerConfigurationRequest.h>
#include <aws/kafkaconnect/model/DeleteWorkerConfigurationResult.h>
#include <aws/kafkaconnect/model/DescribeConnectorOperationRequest.h>
#include <aws/kafkaconnect/model/DescribeConnectorOperationResult.h>
#include <aws/kafkaconnect/model/DescribeConnectorRequest.h>
#include <aws/kafkaconnect/model/DescribeConnectorResult.h>
#include <aws/kafkaconnect/model/DescribeCustomPluginRequest.h>
#include <aws/kafkaconnect/model/DescribeCustomPluginResult.h>
#include <aws/kafkaconnect/model/DescribeWorkerConfigurationRequest.h>
#include <aws/kafkaconnect/model/DescribeWorkerConfigurationResult.h>
#include <aws/kafkaconnect/model/FirehoseLogDelivery.h>
#include <aws/kafkaconnect/model/FirehoseLogDeliveryDescription.h>
#include <aws/kafkaconnect/model/KafkaCluster.h>
#include <aws/kafkaconnect/model/KafkaClusterClientAuthentication.h>
#include <aws/kafkaconnect/model/KafkaClusterClientAuthenticationDescription.h>
#include <aws/kafkaconnect/model/KafkaClusterClientAuthenticationType.h>
#include <aws/kafkaconnect/model/KafkaClusterDescription.h>
#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransit.h>
#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransitDescription.h>
#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransitType.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsRequest.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsResult.h>
#include <aws/kafkaconnect/model/ListConnectorsRequest.h>
#include <aws/kafkaconnect/model/ListConnectorsResult.h>
#include <aws/kafkaconnect/model/ListCustomPluginsRequest.h>
#include <aws/kafkaconnect/model/ListCustomPluginsResult.h>
#include <aws/kafkaconnect/model/ListTagsForResourceRequest.h>
#include <aws/kafkaconnect/model/ListTagsForResourceResult.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsRequest.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsResult.h>
#include <aws/kafkaconnect/model/LogDelivery.h>
#include <aws/kafkaconnect/model/LogDeliveryDescription.h>
#include <aws/kafkaconnect/model/Plugin.h>
#include <aws/kafkaconnect/model/PluginDescription.h>
#include <aws/kafkaconnect/model/ProvisionedCapacity.h>
#include <aws/kafkaconnect/model/ProvisionedCapacityDescription.h>
#include <aws/kafkaconnect/model/ProvisionedCapacityUpdate.h>
#include <aws/kafkaconnect/model/S3Location.h>
#include <aws/kafkaconnect/model/S3LocationDescription.h>
#include <aws/kafkaconnect/model/S3LogDelivery.h>
#include <aws/kafkaconnect/model/S3LogDeliveryDescription.h>
#include <aws/kafkaconnect/model/ScaleInPolicy.h>
#include <aws/kafkaconnect/model/ScaleInPolicyDescription.h>
#include <aws/kafkaconnect/model/ScaleInPolicyUpdate.h>
#include <aws/kafkaconnect/model/ScaleOutPolicy.h>
#include <aws/kafkaconnect/model/ScaleOutPolicyDescription.h>
#include <aws/kafkaconnect/model/ScaleOutPolicyUpdate.h>
#include <aws/kafkaconnect/model/StateDescription.h>
#include <aws/kafkaconnect/model/TagResourceRequest.h>
#include <aws/kafkaconnect/model/TagResourceResult.h>
#include <aws/kafkaconnect/model/UntagResourceRequest.h>
#include <aws/kafkaconnect/model/UntagResourceResult.h>
#include <aws/kafkaconnect/model/UpdateConnectorRequest.h>
#include <aws/kafkaconnect/model/UpdateConnectorResult.h>
#include <aws/kafkaconnect/model/Vpc.h>
#include <aws/kafkaconnect/model/VpcDescription.h>
#include <aws/kafkaconnect/model/WorkerConfiguration.h>
#include <aws/kafkaconnect/model/WorkerConfigurationDescription.h>
#include <aws/kafkaconnect/model/WorkerConfigurationRevisionDescription.h>
#include <aws/kafkaconnect/model/WorkerConfigurationRevisionSummary.h>
#include <aws/kafkaconnect/model/WorkerConfigurationState.h>
#include <aws/kafkaconnect/model/WorkerConfigurationSummary.h>
#include <aws/kafkaconnect/model/WorkerLogDelivery.h>
#include <aws/kafkaconnect/model/WorkerLogDeliveryDescription.h>
#include <aws/kafkaconnect/model/WorkerSetting.h>

using KafkaConnectIncludeTest = ::testing::Test;

TEST_F(KafkaConnectIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KafkaConnect::KafkaConnectClient>("KafkaConnectIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
