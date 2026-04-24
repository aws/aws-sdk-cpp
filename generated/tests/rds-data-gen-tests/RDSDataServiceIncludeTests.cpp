/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/rds-data/RDSDataServiceClient.h>
#include <aws/rds-data/RDSDataServiceEndpointProvider.h>
#include <aws/rds-data/RDSDataServiceEndpointRules.h>
#include <aws/rds-data/RDSDataServiceErrorMarshaller.h>
#include <aws/rds-data/RDSDataServiceErrors.h>
#include <aws/rds-data/RDSDataServiceRequest.h>
#include <aws/rds-data/RDSDataServiceServiceClientModel.h>
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/model/ArrayValue.h>
#include <aws/rds-data/model/BatchExecuteStatementRequest.h>
#include <aws/rds-data/model/BatchExecuteStatementResult.h>
#include <aws/rds-data/model/BeginTransactionRequest.h>
#include <aws/rds-data/model/BeginTransactionResult.h>
#include <aws/rds-data/model/ColumnMetadata.h>
#include <aws/rds-data/model/CommitTransactionRequest.h>
#include <aws/rds-data/model/CommitTransactionResult.h>
#include <aws/rds-data/model/DecimalReturnType.h>
#include <aws/rds-data/model/ExecuteStatementRequest.h>
#include <aws/rds-data/model/ExecuteStatementResult.h>
#include <aws/rds-data/model/Field.h>
#include <aws/rds-data/model/LongReturnType.h>
#include <aws/rds-data/model/Record.h>
#include <aws/rds-data/model/RecordsFormatType.h>
#include <aws/rds-data/model/ResultFrame.h>
#include <aws/rds-data/model/ResultSetMetadata.h>
#include <aws/rds-data/model/ResultSetOptions.h>
#include <aws/rds-data/model/RollbackTransactionRequest.h>
#include <aws/rds-data/model/RollbackTransactionResult.h>
#include <aws/rds-data/model/SqlParameter.h>
#include <aws/rds-data/model/SqlStatementResult.h>
#include <aws/rds-data/model/StatementTimeoutException.h>
#include <aws/rds-data/model/StructValue.h>
#include <aws/rds-data/model/TypeHint.h>
#include <aws/rds-data/model/UpdateResult.h>
#include <aws/rds-data/model/Value.h>

using RDSDataServiceIncludeTest = ::testing::Test;

TEST_F(RDSDataServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::RDSDataService::RDSDataServiceClient>("RDSDataServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
