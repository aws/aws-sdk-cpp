/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/supplychain/SupplyChainClient.h>
#include <aws/supplychain/SupplyChainEndpointProvider.h>
#include <aws/supplychain/SupplyChainEndpointRules.h>
#include <aws/supplychain/SupplyChainErrorMarshaller.h>
#include <aws/supplychain/SupplyChainErrors.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/supplychain/SupplyChainServiceClientModel.h>
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/BillOfMaterialsImportJob.h>
#include <aws/supplychain/model/ConfigurationJobStatus.h>
#include <aws/supplychain/model/CreateBillOfMaterialsImportJobRequest.h>
#include <aws/supplychain/model/CreateBillOfMaterialsImportJobResult.h>
#include <aws/supplychain/model/CreateDataIntegrationFlowRequest.h>
#include <aws/supplychain/model/CreateDataIntegrationFlowResult.h>
#include <aws/supplychain/model/CreateDataLakeDatasetRequest.h>
#include <aws/supplychain/model/CreateDataLakeDatasetResult.h>
#include <aws/supplychain/model/CreateInstanceRequest.h>
#include <aws/supplychain/model/CreateInstanceResult.h>
#include <aws/supplychain/model/DataIntegrationEventType.h>
#include <aws/supplychain/model/DataIntegrationFlow.h>
#include <aws/supplychain/model/DataIntegrationFlowDatasetOptions.h>
#include <aws/supplychain/model/DataIntegrationFlowDatasetSourceConfiguration.h>
#include <aws/supplychain/model/DataIntegrationFlowDatasetTargetConfiguration.h>
#include <aws/supplychain/model/DataIntegrationFlowFileType.h>
#include <aws/supplychain/model/DataIntegrationFlowLoadType.h>
#include <aws/supplychain/model/DataIntegrationFlowS3Options.h>
#include <aws/supplychain/model/DataIntegrationFlowS3SourceConfiguration.h>
#include <aws/supplychain/model/DataIntegrationFlowS3TargetConfiguration.h>
#include <aws/supplychain/model/DataIntegrationFlowSQLTransformationConfiguration.h>
#include <aws/supplychain/model/DataIntegrationFlowSource.h>
#include <aws/supplychain/model/DataIntegrationFlowSourceType.h>
#include <aws/supplychain/model/DataIntegrationFlowTarget.h>
#include <aws/supplychain/model/DataIntegrationFlowTargetType.h>
#include <aws/supplychain/model/DataIntegrationFlowTransformation.h>
#include <aws/supplychain/model/DataIntegrationFlowTransformationType.h>
#include <aws/supplychain/model/DataLakeDataset.h>
#include <aws/supplychain/model/DataLakeDatasetSchema.h>
#include <aws/supplychain/model/DataLakeDatasetSchemaField.h>
#include <aws/supplychain/model/DataLakeDatasetSchemaFieldType.h>
#include <aws/supplychain/model/DeleteDataIntegrationFlowRequest.h>
#include <aws/supplychain/model/DeleteDataIntegrationFlowResult.h>
#include <aws/supplychain/model/DeleteDataLakeDatasetRequest.h>
#include <aws/supplychain/model/DeleteDataLakeDatasetResult.h>
#include <aws/supplychain/model/DeleteInstanceRequest.h>
#include <aws/supplychain/model/DeleteInstanceResult.h>
#include <aws/supplychain/model/GetBillOfMaterialsImportJobRequest.h>
#include <aws/supplychain/model/GetBillOfMaterialsImportJobResult.h>
#include <aws/supplychain/model/GetDataIntegrationFlowRequest.h>
#include <aws/supplychain/model/GetDataIntegrationFlowResult.h>
#include <aws/supplychain/model/GetDataLakeDatasetRequest.h>
#include <aws/supplychain/model/GetDataLakeDatasetResult.h>
#include <aws/supplychain/model/GetInstanceRequest.h>
#include <aws/supplychain/model/GetInstanceResult.h>
#include <aws/supplychain/model/Instance.h>
#include <aws/supplychain/model/InstanceState.h>
#include <aws/supplychain/model/ListDataIntegrationFlowsRequest.h>
#include <aws/supplychain/model/ListDataIntegrationFlowsResult.h>
#include <aws/supplychain/model/ListDataLakeDatasetsRequest.h>
#include <aws/supplychain/model/ListDataLakeDatasetsResult.h>
#include <aws/supplychain/model/ListInstancesRequest.h>
#include <aws/supplychain/model/ListInstancesResult.h>
#include <aws/supplychain/model/ListTagsForResourceRequest.h>
#include <aws/supplychain/model/ListTagsForResourceResult.h>
#include <aws/supplychain/model/SendDataIntegrationEventRequest.h>
#include <aws/supplychain/model/SendDataIntegrationEventResult.h>
#include <aws/supplychain/model/TagResourceRequest.h>
#include <aws/supplychain/model/TagResourceResult.h>
#include <aws/supplychain/model/UntagResourceRequest.h>
#include <aws/supplychain/model/UntagResourceResult.h>
#include <aws/supplychain/model/UpdateDataIntegrationFlowRequest.h>
#include <aws/supplychain/model/UpdateDataIntegrationFlowResult.h>
#include <aws/supplychain/model/UpdateDataLakeDatasetRequest.h>
#include <aws/supplychain/model/UpdateDataLakeDatasetResult.h>
#include <aws/supplychain/model/UpdateInstanceRequest.h>
#include <aws/supplychain/model/UpdateInstanceResult.h>

using SupplyChainIncludeTest = ::testing::Test;

TEST_F(SupplyChainIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SupplyChain::SupplyChainClient>("SupplyChainIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
