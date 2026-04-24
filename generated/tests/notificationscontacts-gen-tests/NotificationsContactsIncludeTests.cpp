/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/notificationscontacts/NotificationsContactsClient.h>
#include <aws/notificationscontacts/NotificationsContactsEndpointProvider.h>
#include <aws/notificationscontacts/NotificationsContactsEndpointRules.h>
#include <aws/notificationscontacts/NotificationsContactsErrorMarshaller.h>
#include <aws/notificationscontacts/NotificationsContactsErrors.h>
#include <aws/notificationscontacts/NotificationsContactsRequest.h>
#include <aws/notificationscontacts/NotificationsContactsServiceClientModel.h>
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/notificationscontacts/model/ActivateEmailContactRequest.h>
#include <aws/notificationscontacts/model/ActivateEmailContactResult.h>
#include <aws/notificationscontacts/model/ConflictException.h>
#include <aws/notificationscontacts/model/CreateEmailContactRequest.h>
#include <aws/notificationscontacts/model/CreateEmailContactResult.h>
#include <aws/notificationscontacts/model/DeleteEmailContactRequest.h>
#include <aws/notificationscontacts/model/DeleteEmailContactResult.h>
#include <aws/notificationscontacts/model/EmailContact.h>
#include <aws/notificationscontacts/model/EmailContactStatus.h>
#include <aws/notificationscontacts/model/GetEmailContactRequest.h>
#include <aws/notificationscontacts/model/GetEmailContactResult.h>
#include <aws/notificationscontacts/model/ListEmailContactsRequest.h>
#include <aws/notificationscontacts/model/ListEmailContactsResult.h>
#include <aws/notificationscontacts/model/ListTagsForResourceRequest.h>
#include <aws/notificationscontacts/model/ListTagsForResourceResult.h>
#include <aws/notificationscontacts/model/ResourceNotFoundException.h>
#include <aws/notificationscontacts/model/SendActivationCodeRequest.h>
#include <aws/notificationscontacts/model/SendActivationCodeResult.h>
#include <aws/notificationscontacts/model/ServiceQuotaExceededException.h>
#include <aws/notificationscontacts/model/TagResourceRequest.h>
#include <aws/notificationscontacts/model/TagResourceResult.h>
#include <aws/notificationscontacts/model/ThrottlingException.h>
#include <aws/notificationscontacts/model/UntagResourceRequest.h>
#include <aws/notificationscontacts/model/UntagResourceResult.h>
#include <aws/notificationscontacts/model/ValidationException.h>
#include <aws/notificationscontacts/model/ValidationExceptionField.h>
#include <aws/notificationscontacts/model/ValidationExceptionReason.h>

using NotificationsContactsIncludeTest = ::testing::Test;

TEST_F(NotificationsContactsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::NotificationsContacts::NotificationsContactsClient>("NotificationsContactsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
