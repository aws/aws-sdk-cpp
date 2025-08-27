/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/neptune-graph/NeptuneGraphClient.h>
#include <aws/neptune-graph/NeptuneGraphEndpointProvider.h>
#include <aws/neptune-graph/NeptuneGraphEndpointRules.h>
#include <aws/neptune-graph/NeptuneGraphErrorMarshaller.h>
#include <aws/neptune-graph/NeptuneGraphErrors.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/neptune-graph/NeptuneGraphServiceClientModel.h>
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/model/BlankNodeHandling.h>
#include <aws/neptune-graph/model/CancelExportTaskRequest.h>
#include <aws/neptune-graph/model/CancelExportTaskResult.h>
#include <aws/neptune-graph/model/CancelImportTaskRequest.h>
#include <aws/neptune-graph/model/CancelImportTaskResult.h>
#include <aws/neptune-graph/model/CancelQueryRequest.h>
#include <aws/neptune-graph/model/ConflictException.h>
#include <aws/neptune-graph/model/ConflictExceptionReason.h>
#include <aws/neptune-graph/model/CreateGraphRequest.h>
#include <aws/neptune-graph/model/CreateGraphResult.h>
#include <aws/neptune-graph/model/CreateGraphSnapshotRequest.h>
#include <aws/neptune-graph/model/CreateGraphSnapshotResult.h>
#include <aws/neptune-graph/model/CreateGraphUsingImportTaskRequest.h>
#include <aws/neptune-graph/model/CreateGraphUsingImportTaskResult.h>
#include <aws/neptune-graph/model/CreatePrivateGraphEndpointRequest.h>
#include <aws/neptune-graph/model/CreatePrivateGraphEndpointResult.h>
#include <aws/neptune-graph/model/DeleteGraphRequest.h>
#include <aws/neptune-graph/model/DeleteGraphResult.h>
#include <aws/neptune-graph/model/DeleteGraphSnapshotRequest.h>
#include <aws/neptune-graph/model/DeleteGraphSnapshotResult.h>
#include <aws/neptune-graph/model/DeletePrivateGraphEndpointRequest.h>
#include <aws/neptune-graph/model/DeletePrivateGraphEndpointResult.h>
#include <aws/neptune-graph/model/EdgeStructure.h>
#include <aws/neptune-graph/model/ExecuteQueryRequest.h>
#include <aws/neptune-graph/model/ExecuteQueryResult.h>
#include <aws/neptune-graph/model/ExplainMode.h>
#include <aws/neptune-graph/model/ExportFilter.h>
#include <aws/neptune-graph/model/ExportFilterElement.h>
#include <aws/neptune-graph/model/ExportFilterPropertyAttributes.h>
#include <aws/neptune-graph/model/ExportFormat.h>
#include <aws/neptune-graph/model/ExportTaskDetails.h>
#include <aws/neptune-graph/model/ExportTaskStatus.h>
#include <aws/neptune-graph/model/ExportTaskSummary.h>
#include <aws/neptune-graph/model/Format.h>
#include <aws/neptune-graph/model/GetExportTaskRequest.h>
#include <aws/neptune-graph/model/GetExportTaskResult.h>
#include <aws/neptune-graph/model/GetGraphRequest.h>
#include <aws/neptune-graph/model/GetGraphResult.h>
#include <aws/neptune-graph/model/GetGraphSnapshotRequest.h>
#include <aws/neptune-graph/model/GetGraphSnapshotResult.h>
#include <aws/neptune-graph/model/GetGraphSummaryRequest.h>
#include <aws/neptune-graph/model/GetGraphSummaryResult.h>
#include <aws/neptune-graph/model/GetImportTaskRequest.h>
#include <aws/neptune-graph/model/GetImportTaskResult.h>
#include <aws/neptune-graph/model/GetPrivateGraphEndpointRequest.h>
#include <aws/neptune-graph/model/GetPrivateGraphEndpointResult.h>
#include <aws/neptune-graph/model/GetQueryRequest.h>
#include <aws/neptune-graph/model/GetQueryResult.h>
#include <aws/neptune-graph/model/GraphDataSummary.h>
#include <aws/neptune-graph/model/GraphSnapshotSummary.h>
#include <aws/neptune-graph/model/GraphStatus.h>
#include <aws/neptune-graph/model/GraphSummary.h>
#include <aws/neptune-graph/model/GraphSummaryMode.h>
#include <aws/neptune-graph/model/ImportOptions.h>
#include <aws/neptune-graph/model/ImportTaskDetails.h>
#include <aws/neptune-graph/model/ImportTaskStatus.h>
#include <aws/neptune-graph/model/ImportTaskSummary.h>
#include <aws/neptune-graph/model/ListExportTasksRequest.h>
#include <aws/neptune-graph/model/ListExportTasksResult.h>
#include <aws/neptune-graph/model/ListGraphSnapshotsRequest.h>
#include <aws/neptune-graph/model/ListGraphSnapshotsResult.h>
#include <aws/neptune-graph/model/ListGraphsRequest.h>
#include <aws/neptune-graph/model/ListGraphsResult.h>
#include <aws/neptune-graph/model/ListImportTasksRequest.h>
#include <aws/neptune-graph/model/ListImportTasksResult.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsRequest.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsResult.h>
#include <aws/neptune-graph/model/ListQueriesRequest.h>
#include <aws/neptune-graph/model/ListQueriesResult.h>
#include <aws/neptune-graph/model/ListTagsForResourceRequest.h>
#include <aws/neptune-graph/model/ListTagsForResourceResult.h>
#include <aws/neptune-graph/model/MultiValueHandlingType.h>
#include <aws/neptune-graph/model/NeptuneImportOptions.h>
#include <aws/neptune-graph/model/NodeStructure.h>
#include <aws/neptune-graph/model/ParquetType.h>
#include <aws/neptune-graph/model/PlanCacheType.h>
#include <aws/neptune-graph/model/PrivateGraphEndpointStatus.h>
#include <aws/neptune-graph/model/PrivateGraphEndpointSummary.h>
#include <aws/neptune-graph/model/QueryLanguage.h>
#include <aws/neptune-graph/model/QueryState.h>
#include <aws/neptune-graph/model/QueryStateInput.h>
#include <aws/neptune-graph/model/QuerySummary.h>
#include <aws/neptune-graph/model/ResetGraphRequest.h>
#include <aws/neptune-graph/model/ResetGraphResult.h>
#include <aws/neptune-graph/model/RestoreGraphFromSnapshotRequest.h>
#include <aws/neptune-graph/model/RestoreGraphFromSnapshotResult.h>
#include <aws/neptune-graph/model/ServiceQuotaExceededException.h>
#include <aws/neptune-graph/model/SnapshotStatus.h>
#include <aws/neptune-graph/model/StartExportTaskRequest.h>
#include <aws/neptune-graph/model/StartExportTaskResult.h>
#include <aws/neptune-graph/model/StartGraphRequest.h>
#include <aws/neptune-graph/model/StartGraphResult.h>
#include <aws/neptune-graph/model/StartImportTaskRequest.h>
#include <aws/neptune-graph/model/StartImportTaskResult.h>
#include <aws/neptune-graph/model/StopGraphRequest.h>
#include <aws/neptune-graph/model/StopGraphResult.h>
#include <aws/neptune-graph/model/TagResourceRequest.h>
#include <aws/neptune-graph/model/TagResourceResult.h>
#include <aws/neptune-graph/model/UnprocessableException.h>
#include <aws/neptune-graph/model/UnprocessableExceptionReason.h>
#include <aws/neptune-graph/model/UntagResourceRequest.h>
#include <aws/neptune-graph/model/UntagResourceResult.h>
#include <aws/neptune-graph/model/UpdateGraphRequest.h>
#include <aws/neptune-graph/model/UpdateGraphResult.h>
#include <aws/neptune-graph/model/ValidationException.h>
#include <aws/neptune-graph/model/ValidationExceptionReason.h>
#include <aws/neptune-graph/model/VectorSearchConfiguration.h>

using NeptuneGraphIncludeTest = ::testing::Test;

TEST_F(NeptuneGraphIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::NeptuneGraph::NeptuneGraphClient>("NeptuneGraphIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
