/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/socialmessaging/SocialMessagingClient.h>
#include <aws/socialmessaging/SocialMessagingEndpointProvider.h>
#include <aws/socialmessaging/SocialMessagingEndpointRules.h>
#include <aws/socialmessaging/SocialMessagingErrorMarshaller.h>
#include <aws/socialmessaging/SocialMessagingErrors.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/socialmessaging/SocialMessagingServiceClientModel.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/AssociateWhatsAppBusinessAccountRequest.h>
#include <aws/socialmessaging/model/AssociateWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/DeleteWhatsAppMessageMediaRequest.h>
#include <aws/socialmessaging/model/DeleteWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/DisassociateWhatsAppBusinessAccountRequest.h>
#include <aws/socialmessaging/model/DisassociateWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountPhoneNumberRequest.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountPhoneNumberResult.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountRequest.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/GetWhatsAppMessageMediaRequest.h>
#include <aws/socialmessaging/model/GetWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/LinkedWhatsAppBusinessAccount.h>
#include <aws/socialmessaging/model/LinkedWhatsAppBusinessAccountIdMetaData.h>
#include <aws/socialmessaging/model/LinkedWhatsAppBusinessAccountSummary.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsRequest.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsResult.h>
#include <aws/socialmessaging/model/ListTagsForResourceRequest.h>
#include <aws/socialmessaging/model/ListTagsForResourceResult.h>
#include <aws/socialmessaging/model/PostWhatsAppMessageMediaRequest.h>
#include <aws/socialmessaging/model/PostWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/PutWhatsAppBusinessAccountEventDestinationsRequest.h>
#include <aws/socialmessaging/model/PutWhatsAppBusinessAccountEventDestinationsResult.h>
#include <aws/socialmessaging/model/RegistrationStatus.h>
#include <aws/socialmessaging/model/S3File.h>
#include <aws/socialmessaging/model/S3PresignedUrl.h>
#include <aws/socialmessaging/model/SendWhatsAppMessageRequest.h>
#include <aws/socialmessaging/model/SendWhatsAppMessageResult.h>
#include <aws/socialmessaging/model/Tag.h>
#include <aws/socialmessaging/model/TagResourceRequest.h>
#include <aws/socialmessaging/model/TagResourceResult.h>
#include <aws/socialmessaging/model/UntagResourceRequest.h>
#include <aws/socialmessaging/model/UntagResourceResult.h>
#include <aws/socialmessaging/model/WabaPhoneNumberSetupFinalization.h>
#include <aws/socialmessaging/model/WabaSetupFinalization.h>
#include <aws/socialmessaging/model/WhatsAppBusinessAccountEventDestination.h>
#include <aws/socialmessaging/model/WhatsAppPhoneNumberDetail.h>
#include <aws/socialmessaging/model/WhatsAppPhoneNumberSummary.h>
#include <aws/socialmessaging/model/WhatsAppSetupFinalization.h>
#include <aws/socialmessaging/model/WhatsAppSignupCallback.h>
#include <aws/socialmessaging/model/WhatsAppSignupCallbackResult.h>

using SocialMessagingIncludeTest = ::testing::Test;

TEST_F(SocialMessagingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  auto pClient = Aws::MakeUnique<Aws::SocialMessaging::SocialMessagingClient>("SocialMessagingIncludeTest", config);
  ASSERT_TRUE(pClient.get());
}
