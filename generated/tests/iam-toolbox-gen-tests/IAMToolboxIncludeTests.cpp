/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iam-toolbox/IAMToolboxClient.h>
#include <aws/iam-toolbox/IAMToolboxClientPagination.h>
#include <aws/iam-toolbox/IAMToolboxEndpointProvider.h>
#include <aws/iam-toolbox/IAMToolboxErrorMarshaller.h>
#include <aws/iam-toolbox/IAMToolboxErrors.h>
#include <aws/iam-toolbox/IAMToolboxPaginationBase.h>
#include <aws/iam-toolbox/IAMToolboxRequest.h>
#include <aws/iam-toolbox/IAMToolboxServiceClientModel.h>
#include <aws/iam-toolbox/IAMToolboxWaiter.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>
#include <aws/iam-toolbox/internal/IAMToolboxEndpointRules.h>
#include <aws/iam-toolbox/model/AttachedTo.h>
#include <aws/iam-toolbox/model/EvaluatedEffect.h>
#include <aws/iam-toolbox/model/Evaluation.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsPaginationTraits.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsRequest.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsResult.h>
#include <aws/iam-toolbox/model/MatchedPolicy.h>
#include <aws/iam-toolbox/model/MatchedStatement.h>
#include <aws/iam-toolbox/model/PolicyInfo.h>
#include <aws/iam-toolbox/model/PolicyType.h>
#include <aws/iam-toolbox/model/StatementEffect.h>

using IAMToolboxIncludeTest = ::testing::Test;

TEST_F(IAMToolboxIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IAMToolbox::IAMToolboxClient>("IAMToolboxIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
