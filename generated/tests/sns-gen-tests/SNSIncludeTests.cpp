/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sns/SNSClient.h>
#include <aws/sns/SNSEndpointProvider.h>
#include <aws/sns/SNSEndpointRules.h>
#include <aws/sns/SNSErrorMarshaller.h>
#include <aws/sns/SNSErrors.h>
#include <aws/sns/SNSRequest.h>
#include <aws/sns/SNSServiceClientModel.h>
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/model/AddPermissionRequest.h>
#include <aws/sns/model/BatchResultErrorEntry.h>
#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutRequest.h>
#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutResult.h>
#include <aws/sns/model/ConfirmSubscriptionRequest.h>
#include <aws/sns/model/ConfirmSubscriptionResult.h>
#include <aws/sns/model/CreatePlatformApplicationRequest.h>
#include <aws/sns/model/CreatePlatformApplicationResult.h>
#include <aws/sns/model/CreatePlatformEndpointRequest.h>
#include <aws/sns/model/CreatePlatformEndpointResult.h>
#include <aws/sns/model/CreateSMSSandboxPhoneNumberRequest.h>
#include <aws/sns/model/CreateSMSSandboxPhoneNumberResult.h>
#include <aws/sns/model/CreateTopicRequest.h>
#include <aws/sns/model/CreateTopicResult.h>
#include <aws/sns/model/DeleteEndpointRequest.h>
#include <aws/sns/model/DeletePlatformApplicationRequest.h>
#include <aws/sns/model/DeleteSMSSandboxPhoneNumberRequest.h>
#include <aws/sns/model/DeleteSMSSandboxPhoneNumberResult.h>
#include <aws/sns/model/DeleteTopicRequest.h>
#include <aws/sns/model/GetDataProtectionPolicyRequest.h>
#include <aws/sns/model/GetDataProtectionPolicyResult.h>
#include <aws/sns/model/GetEndpointAttributesRequest.h>
#include <aws/sns/model/GetEndpointAttributesResult.h>
#include <aws/sns/model/GetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/GetPlatformApplicationAttributesResult.h>
#include <aws/sns/model/GetSMSAttributesRequest.h>
#include <aws/sns/model/GetSMSAttributesResult.h>
#include <aws/sns/model/GetSMSSandboxAccountStatusRequest.h>
#include <aws/sns/model/GetSMSSandboxAccountStatusResult.h>
#include <aws/sns/model/GetSubscriptionAttributesRequest.h>
#include <aws/sns/model/GetSubscriptionAttributesResult.h>
#include <aws/sns/model/GetTopicAttributesRequest.h>
#include <aws/sns/model/GetTopicAttributesResult.h>
#include <aws/sns/model/LanguageCodeString.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationRequest.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationResult.h>
#include <aws/sns/model/ListOriginationNumbersRequest.h>
#include <aws/sns/model/ListOriginationNumbersResult.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutRequest.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutResult.h>
#include <aws/sns/model/ListPlatformApplicationsRequest.h>
#include <aws/sns/model/ListPlatformApplicationsResult.h>
#include <aws/sns/model/ListSMSSandboxPhoneNumbersRequest.h>
#include <aws/sns/model/ListSMSSandboxPhoneNumbersResult.h>
#include <aws/sns/model/ListSubscriptionsByTopicRequest.h>
#include <aws/sns/model/ListSubscriptionsByTopicResult.h>
#include <aws/sns/model/ListSubscriptionsRequest.h>
#include <aws/sns/model/ListSubscriptionsResult.h>
#include <aws/sns/model/ListTagsForResourceRequest.h>
#include <aws/sns/model/ListTagsForResourceResult.h>
#include <aws/sns/model/ListTopicsRequest.h>
#include <aws/sns/model/ListTopicsResult.h>
#include <aws/sns/model/MessageAttributeValue.h>
#include <aws/sns/model/NumberCapability.h>
#include <aws/sns/model/OptInPhoneNumberRequest.h>
#include <aws/sns/model/OptInPhoneNumberResult.h>
#include <aws/sns/model/PhoneNumberInformation.h>
#include <aws/sns/model/PlatformApplication.h>
#include <aws/sns/model/PublishBatchRequest.h>
#include <aws/sns/model/PublishBatchRequestEntry.h>
#include <aws/sns/model/PublishBatchResult.h>
#include <aws/sns/model/PublishBatchResultEntry.h>
#include <aws/sns/model/PublishRequest.h>
#include <aws/sns/model/PublishResult.h>
#include <aws/sns/model/PutDataProtectionPolicyRequest.h>
#include <aws/sns/model/RemovePermissionRequest.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/RouteType.h>
#include <aws/sns/model/SMSSandboxPhoneNumber.h>
#include <aws/sns/model/SMSSandboxPhoneNumberVerificationStatus.h>
#include <aws/sns/model/SetEndpointAttributesRequest.h>
#include <aws/sns/model/SetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/SetSMSAttributesRequest.h>
#include <aws/sns/model/SetSMSAttributesResult.h>
#include <aws/sns/model/SetSubscriptionAttributesRequest.h>
#include <aws/sns/model/SetTopicAttributesRequest.h>
#include <aws/sns/model/SubscribeRequest.h>
#include <aws/sns/model/SubscribeResult.h>
#include <aws/sns/model/Subscription.h>
#include <aws/sns/model/Tag.h>
#include <aws/sns/model/TagResourceRequest.h>
#include <aws/sns/model/TagResourceResult.h>
#include <aws/sns/model/Topic.h>
#include <aws/sns/model/UnsubscribeRequest.h>
#include <aws/sns/model/UntagResourceRequest.h>
#include <aws/sns/model/UntagResourceResult.h>
#include <aws/sns/model/VerificationException.h>
#include <aws/sns/model/VerifySMSSandboxPhoneNumberRequest.h>
#include <aws/sns/model/VerifySMSSandboxPhoneNumberResult.h>

using SNSIncludeTest = ::testing::Test;

TEST_F(SNSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SNS::SNSClient>("SNSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
