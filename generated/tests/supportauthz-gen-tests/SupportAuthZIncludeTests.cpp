/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/supportauthz/SupportAuthZClient.h>
#include <aws/supportauthz/SupportAuthZEndpointProvider.h>
#include <aws/supportauthz/SupportAuthZErrorMarshaller.h>
#include <aws/supportauthz/SupportAuthZErrors.h>
#include <aws/supportauthz/SupportAuthZRequest.h>
#include <aws/supportauthz/SupportAuthZServiceClientModel.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/internal/SupportAuthZEndpointRules.h>
#include <aws/supportauthz/model/ActionSet.h>
#include <aws/supportauthz/model/ActionSummary.h>
#include <aws/supportauthz/model/Condition.h>
#include <aws/supportauthz/model/ConflictException.h>
#include <aws/supportauthz/model/CreateSupportPermitRequest.h>
#include <aws/supportauthz/model/CreateSupportPermitResult.h>
#include <aws/supportauthz/model/DeleteSupportPermitRequest.h>
#include <aws/supportauthz/model/DeleteSupportPermitResult.h>
#include <aws/supportauthz/model/GetActionRequest.h>
#include <aws/supportauthz/model/GetActionResult.h>
#include <aws/supportauthz/model/GetSupportPermitRequest.h>
#include <aws/supportauthz/model/GetSupportPermitResult.h>
#include <aws/supportauthz/model/InternalServerException.h>
#include <aws/supportauthz/model/ListActionsRequest.h>
#include <aws/supportauthz/model/ListActionsResult.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsRequest.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsResult.h>
#include <aws/supportauthz/model/ListSupportPermitsRequest.h>
#include <aws/supportauthz/model/ListSupportPermitsResult.h>
#include <aws/supportauthz/model/ListTagsForResourceRequest.h>
#include <aws/supportauthz/model/ListTagsForResourceResult.h>
#include <aws/supportauthz/model/Permit.h>
#include <aws/supportauthz/model/RejectSupportPermitRequestRequest.h>
#include <aws/supportauthz/model/RejectSupportPermitRequestResult.h>
#include <aws/supportauthz/model/ResourceNotFoundException.h>
#include <aws/supportauthz/model/ResourceSet.h>
#include <aws/supportauthz/model/ServiceQuotaExceededException.h>
#include <aws/supportauthz/model/SigningKeyInfo.h>
#include <aws/supportauthz/model/SupportPermitRequest.h>
#include <aws/supportauthz/model/SupportPermitRequestStatus.h>
#include <aws/supportauthz/model/SupportPermitStatus.h>
#include <aws/supportauthz/model/SupportPermitSummary.h>
#include <aws/supportauthz/model/TagResourceRequest.h>
#include <aws/supportauthz/model/TagResourceResult.h>
#include <aws/supportauthz/model/ThrottlingException.h>
#include <aws/supportauthz/model/Unit.h>
#include <aws/supportauthz/model/UntagResourceRequest.h>
#include <aws/supportauthz/model/UntagResourceResult.h>
#include <aws/supportauthz/model/ValidationException.h>
#include <aws/supportauthz/model/ValidationExceptionField.h>

using SupportAuthZIncludeTest = ::testing::Test;

TEST_F(SupportAuthZIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SupportAuthZ::SupportAuthZClient>("SupportAuthZIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
