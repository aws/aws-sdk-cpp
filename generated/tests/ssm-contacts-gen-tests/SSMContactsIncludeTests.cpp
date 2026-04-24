/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ssm-contacts/SSMContactsClient.h>
#include <aws/ssm-contacts/SSMContactsEndpointProvider.h>
#include <aws/ssm-contacts/SSMContactsEndpointRules.h>
#include <aws/ssm-contacts/SSMContactsErrorMarshaller.h>
#include <aws/ssm-contacts/SSMContactsErrors.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/ssm-contacts/SSMContactsServiceClientModel.h>
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/model/AcceptCodeValidation.h>
#include <aws/ssm-contacts/model/AcceptPageRequest.h>
#include <aws/ssm-contacts/model/AcceptPageResult.h>
#include <aws/ssm-contacts/model/AcceptType.h>
#include <aws/ssm-contacts/model/ActivateContactChannelRequest.h>
#include <aws/ssm-contacts/model/ActivateContactChannelResult.h>
#include <aws/ssm-contacts/model/ActivationStatus.h>
#include <aws/ssm-contacts/model/ChannelTargetInfo.h>
#include <aws/ssm-contacts/model/ChannelType.h>
#include <aws/ssm-contacts/model/ConflictException.h>
#include <aws/ssm-contacts/model/Contact.h>
#include <aws/ssm-contacts/model/ContactChannel.h>
#include <aws/ssm-contacts/model/ContactChannelAddress.h>
#include <aws/ssm-contacts/model/ContactTargetInfo.h>
#include <aws/ssm-contacts/model/ContactType.h>
#include <aws/ssm-contacts/model/CoverageTime.h>
#include <aws/ssm-contacts/model/CreateContactChannelRequest.h>
#include <aws/ssm-contacts/model/CreateContactChannelResult.h>
#include <aws/ssm-contacts/model/CreateContactRequest.h>
#include <aws/ssm-contacts/model/CreateContactResult.h>
#include <aws/ssm-contacts/model/CreateRotationOverrideRequest.h>
#include <aws/ssm-contacts/model/CreateRotationOverrideResult.h>
#include <aws/ssm-contacts/model/CreateRotationRequest.h>
#include <aws/ssm-contacts/model/CreateRotationResult.h>
#include <aws/ssm-contacts/model/DayOfWeek.h>
#include <aws/ssm-contacts/model/DeactivateContactChannelRequest.h>
#include <aws/ssm-contacts/model/DeactivateContactChannelResult.h>
#include <aws/ssm-contacts/model/DeleteContactChannelRequest.h>
#include <aws/ssm-contacts/model/DeleteContactChannelResult.h>
#include <aws/ssm-contacts/model/DeleteContactRequest.h>
#include <aws/ssm-contacts/model/DeleteContactResult.h>
#include <aws/ssm-contacts/model/DeleteRotationOverrideRequest.h>
#include <aws/ssm-contacts/model/DeleteRotationOverrideResult.h>
#include <aws/ssm-contacts/model/DeleteRotationRequest.h>
#include <aws/ssm-contacts/model/DeleteRotationResult.h>
#include <aws/ssm-contacts/model/DependentEntity.h>
#include <aws/ssm-contacts/model/DescribeEngagementRequest.h>
#include <aws/ssm-contacts/model/DescribeEngagementResult.h>
#include <aws/ssm-contacts/model/DescribePageRequest.h>
#include <aws/ssm-contacts/model/DescribePageResult.h>
#include <aws/ssm-contacts/model/Engagement.h>
#include <aws/ssm-contacts/model/GetContactChannelRequest.h>
#include <aws/ssm-contacts/model/GetContactChannelResult.h>
#include <aws/ssm-contacts/model/GetContactPolicyRequest.h>
#include <aws/ssm-contacts/model/GetContactPolicyResult.h>
#include <aws/ssm-contacts/model/GetContactRequest.h>
#include <aws/ssm-contacts/model/GetContactResult.h>
#include <aws/ssm-contacts/model/GetRotationOverrideRequest.h>
#include <aws/ssm-contacts/model/GetRotationOverrideResult.h>
#include <aws/ssm-contacts/model/GetRotationRequest.h>
#include <aws/ssm-contacts/model/GetRotationResult.h>
#include <aws/ssm-contacts/model/HandOffTime.h>
#include <aws/ssm-contacts/model/InternalServerException.h>
#include <aws/ssm-contacts/model/ListContactChannelsRequest.h>
#include <aws/ssm-contacts/model/ListContactChannelsResult.h>
#include <aws/ssm-contacts/model/ListContactsRequest.h>
#include <aws/ssm-contacts/model/ListContactsResult.h>
#include <aws/ssm-contacts/model/ListEngagementsRequest.h>
#include <aws/ssm-contacts/model/ListEngagementsResult.h>
#include <aws/ssm-contacts/model/ListPageReceiptsRequest.h>
#include <aws/ssm-contacts/model/ListPageReceiptsResult.h>
#include <aws/ssm-contacts/model/ListPageResolutionsRequest.h>
#include <aws/ssm-contacts/model/ListPageResolutionsResult.h>
#include <aws/ssm-contacts/model/ListPagesByContactRequest.h>
#include <aws/ssm-contacts/model/ListPagesByContactResult.h>
#include <aws/ssm-contacts/model/ListPagesByEngagementRequest.h>
#include <aws/ssm-contacts/model/ListPagesByEngagementResult.h>
#include <aws/ssm-contacts/model/ListPreviewRotationShiftsRequest.h>
#include <aws/ssm-contacts/model/ListPreviewRotationShiftsResult.h>
#include <aws/ssm-contacts/model/ListRotationOverridesRequest.h>
#include <aws/ssm-contacts/model/ListRotationOverridesResult.h>
#include <aws/ssm-contacts/model/ListRotationShiftsRequest.h>
#include <aws/ssm-contacts/model/ListRotationShiftsResult.h>
#include <aws/ssm-contacts/model/ListRotationsRequest.h>
#include <aws/ssm-contacts/model/ListRotationsResult.h>
#include <aws/ssm-contacts/model/ListTagsForResourceRequest.h>
#include <aws/ssm-contacts/model/ListTagsForResourceResult.h>
#include <aws/ssm-contacts/model/MonthlySetting.h>
#include <aws/ssm-contacts/model/Page.h>
#include <aws/ssm-contacts/model/Plan.h>
#include <aws/ssm-contacts/model/PreviewOverride.h>
#include <aws/ssm-contacts/model/PutContactPolicyRequest.h>
#include <aws/ssm-contacts/model/PutContactPolicyResult.h>
#include <aws/ssm-contacts/model/Receipt.h>
#include <aws/ssm-contacts/model/ReceiptType.h>
#include <aws/ssm-contacts/model/RecurrenceSettings.h>
#include <aws/ssm-contacts/model/ResolutionContact.h>
#include <aws/ssm-contacts/model/ResourceNotFoundException.h>
#include <aws/ssm-contacts/model/Rotation.h>
#include <aws/ssm-contacts/model/RotationOverride.h>
#include <aws/ssm-contacts/model/RotationShift.h>
#include <aws/ssm-contacts/model/SendActivationCodeRequest.h>
#include <aws/ssm-contacts/model/SendActivationCodeResult.h>
#include <aws/ssm-contacts/model/ServiceQuotaExceededException.h>
#include <aws/ssm-contacts/model/ShiftDetails.h>
#include <aws/ssm-contacts/model/ShiftType.h>
#include <aws/ssm-contacts/model/Stage.h>
#include <aws/ssm-contacts/model/StartEngagementRequest.h>
#include <aws/ssm-contacts/model/StartEngagementResult.h>
#include <aws/ssm-contacts/model/StopEngagementRequest.h>
#include <aws/ssm-contacts/model/StopEngagementResult.h>
#include <aws/ssm-contacts/model/Tag.h>
#include <aws/ssm-contacts/model/TagResourceRequest.h>
#include <aws/ssm-contacts/model/TagResourceResult.h>
#include <aws/ssm-contacts/model/Target.h>
#include <aws/ssm-contacts/model/ThrottlingException.h>
#include <aws/ssm-contacts/model/TimeRange.h>
#include <aws/ssm-contacts/model/UntagResourceRequest.h>
#include <aws/ssm-contacts/model/UntagResourceResult.h>
#include <aws/ssm-contacts/model/UpdateContactChannelRequest.h>
#include <aws/ssm-contacts/model/UpdateContactChannelResult.h>
#include <aws/ssm-contacts/model/UpdateContactRequest.h>
#include <aws/ssm-contacts/model/UpdateContactResult.h>
#include <aws/ssm-contacts/model/UpdateRotationRequest.h>
#include <aws/ssm-contacts/model/UpdateRotationResult.h>
#include <aws/ssm-contacts/model/ValidationException.h>
#include <aws/ssm-contacts/model/ValidationExceptionField.h>
#include <aws/ssm-contacts/model/ValidationExceptionReason.h>
#include <aws/ssm-contacts/model/WeeklySetting.h>

using SSMContactsIncludeTest = ::testing::Test;

TEST_F(SSMContactsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SSMContacts::SSMContactsClient>("SSMContactsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
