/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iotthingsgraph/IoTThingsGraphClient.h>
#include <aws/iotthingsgraph/IoTThingsGraphEndpointProvider.h>
#include <aws/iotthingsgraph/IoTThingsGraphEndpointRules.h>
#include <aws/iotthingsgraph/IoTThingsGraphErrorMarshaller.h>
#include <aws/iotthingsgraph/IoTThingsGraphErrors.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/iotthingsgraph/IoTThingsGraphServiceClientModel.h>
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/DefinitionDocument.h>
#include <aws/iotthingsgraph/model/DefinitionLanguage.h>
#include <aws/iotthingsgraph/model/DependencyRevision.h>
#include <aws/iotthingsgraph/model/DeploymentTarget.h>
#include <aws/iotthingsgraph/model/EntityDescription.h>
#include <aws/iotthingsgraph/model/EntityFilter.h>
#include <aws/iotthingsgraph/model/EntityFilterName.h>
#include <aws/iotthingsgraph/model/EntityType.h>
#include <aws/iotthingsgraph/model/FlowExecutionEventType.h>
#include <aws/iotthingsgraph/model/FlowExecutionMessage.h>
#include <aws/iotthingsgraph/model/FlowExecutionStatus.h>
#include <aws/iotthingsgraph/model/FlowExecutionSummary.h>
#include <aws/iotthingsgraph/model/FlowTemplateDescription.h>
#include <aws/iotthingsgraph/model/FlowTemplateFilter.h>
#include <aws/iotthingsgraph/model/FlowTemplateFilterName.h>
#include <aws/iotthingsgraph/model/FlowTemplateSummary.h>
#include <aws/iotthingsgraph/model/MetricsConfiguration.h>
#include <aws/iotthingsgraph/model/NamespaceDeletionStatus.h>
#include <aws/iotthingsgraph/model/NamespaceDeletionStatusErrorCodes.h>
#include <aws/iotthingsgraph/model/SystemInstanceDeploymentStatus.h>
#include <aws/iotthingsgraph/model/SystemInstanceDescription.h>
#include <aws/iotthingsgraph/model/SystemInstanceFilter.h>
#include <aws/iotthingsgraph/model/SystemInstanceFilterName.h>
#include <aws/iotthingsgraph/model/SystemInstanceSummary.h>
#include <aws/iotthingsgraph/model/SystemTemplateDescription.h>
#include <aws/iotthingsgraph/model/SystemTemplateFilter.h>
#include <aws/iotthingsgraph/model/SystemTemplateFilterName.h>
#include <aws/iotthingsgraph/model/SystemTemplateSummary.h>
#include <aws/iotthingsgraph/model/Tag.h>
#include <aws/iotthingsgraph/model/Thing.h>
#include <aws/iotthingsgraph/model/UploadStatus.h>

using IoTThingsGraphIncludeTest = ::testing::Test;

TEST_F(IoTThingsGraphIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IoTThingsGraph::IoTThingsGraphClient>("IoTThingsGraphIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
