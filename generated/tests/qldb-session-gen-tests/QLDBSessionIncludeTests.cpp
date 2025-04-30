/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/qldb-session/QLDBSessionClient.h>
#include <aws/qldb-session/QLDBSessionEndpointProvider.h>
#include <aws/qldb-session/QLDBSessionEndpointRules.h>
#include <aws/qldb-session/QLDBSessionErrorMarshaller.h>
#include <aws/qldb-session/QLDBSessionErrors.h>
#include <aws/qldb-session/QLDBSessionRequest.h>
#include <aws/qldb-session/QLDBSessionServiceClientModel.h>
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/qldb-session/model/AbortTransactionRequest.h>
#include <aws/qldb-session/model/AbortTransactionResult.h>
#include <aws/qldb-session/model/BadRequestException.h>
#include <aws/qldb-session/model/CommitTransactionRequest.h>
#include <aws/qldb-session/model/CommitTransactionResult.h>
#include <aws/qldb-session/model/EndSessionRequest.h>
#include <aws/qldb-session/model/EndSessionResult.h>
#include <aws/qldb-session/model/ExecuteStatementRequest.h>
#include <aws/qldb-session/model/ExecuteStatementResult.h>
#include <aws/qldb-session/model/FetchPageRequest.h>
#include <aws/qldb-session/model/FetchPageResult.h>
#include <aws/qldb-session/model/IOUsage.h>
#include <aws/qldb-session/model/InvalidSessionException.h>
#include <aws/qldb-session/model/Page.h>
#include <aws/qldb-session/model/SendCommandRequest.h>
#include <aws/qldb-session/model/SendCommandResult.h>
#include <aws/qldb-session/model/StartSessionRequest.h>
#include <aws/qldb-session/model/StartSessionResult.h>
#include <aws/qldb-session/model/StartTransactionRequest.h>
#include <aws/qldb-session/model/StartTransactionResult.h>
#include <aws/qldb-session/model/TimingInformation.h>
#include <aws/qldb-session/model/ValueHolder.h>

using QLDBSessionIncludeTest = ::testing::Test;

TEST_F(QLDBSessionIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::QLDBSession::QLDBSessionClient>("QLDBSessionIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
