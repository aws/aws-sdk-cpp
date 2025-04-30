/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/redshift-data/RedshiftDataAPIServiceClient.h>
#include <aws/redshift-data/RedshiftDataAPIServiceEndpointProvider.h>
#include <aws/redshift-data/RedshiftDataAPIServiceEndpointRules.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrorMarshaller.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrors.h>
#include <aws/redshift-data/RedshiftDataAPIServiceRequest.h>
#include <aws/redshift-data/RedshiftDataAPIServiceServiceClientModel.h>
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/model/BatchExecuteStatementException.h>
#include <aws/redshift-data/model/BatchExecuteStatementRequest.h>
#include <aws/redshift-data/model/BatchExecuteStatementResult.h>
#include <aws/redshift-data/model/CancelStatementRequest.h>
#include <aws/redshift-data/model/CancelStatementResult.h>
#include <aws/redshift-data/model/ColumnMetadata.h>
#include <aws/redshift-data/model/DescribeStatementRequest.h>
#include <aws/redshift-data/model/DescribeStatementResult.h>
#include <aws/redshift-data/model/DescribeTableRequest.h>
#include <aws/redshift-data/model/DescribeTableResult.h>
#include <aws/redshift-data/model/ExecuteStatementException.h>
#include <aws/redshift-data/model/ExecuteStatementRequest.h>
#include <aws/redshift-data/model/ExecuteStatementResult.h>
#include <aws/redshift-data/model/Field.h>
#include <aws/redshift-data/model/GetStatementResultRequest.h>
#include <aws/redshift-data/model/GetStatementResultResult.h>
#include <aws/redshift-data/model/GetStatementResultV2Request.h>
#include <aws/redshift-data/model/GetStatementResultV2Result.h>
#include <aws/redshift-data/model/ListDatabasesRequest.h>
#include <aws/redshift-data/model/ListDatabasesResult.h>
#include <aws/redshift-data/model/ListSchemasRequest.h>
#include <aws/redshift-data/model/ListSchemasResult.h>
#include <aws/redshift-data/model/ListStatementsRequest.h>
#include <aws/redshift-data/model/ListStatementsResult.h>
#include <aws/redshift-data/model/ListTablesRequest.h>
#include <aws/redshift-data/model/ListTablesResult.h>
#include <aws/redshift-data/model/QueryRecords.h>
#include <aws/redshift-data/model/ResourceNotFoundException.h>
#include <aws/redshift-data/model/ResultFormatString.h>
#include <aws/redshift-data/model/SqlParameter.h>
#include <aws/redshift-data/model/StatementData.h>
#include <aws/redshift-data/model/StatementStatusString.h>
#include <aws/redshift-data/model/StatusString.h>
#include <aws/redshift-data/model/SubStatementData.h>
#include <aws/redshift-data/model/TableMember.h>

using RedshiftDataAPIServiceIncludeTest = ::testing::Test;

TEST_F(RedshiftDataAPIServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClient>("RedshiftDataAPIServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
