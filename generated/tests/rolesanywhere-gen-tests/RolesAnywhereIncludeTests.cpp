/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/rolesanywhere/RolesAnywhereClient.h>
#include <aws/rolesanywhere/RolesAnywhereEndpointProvider.h>
#include <aws/rolesanywhere/RolesAnywhereEndpointRules.h>
#include <aws/rolesanywhere/RolesAnywhereErrorMarshaller.h>
#include <aws/rolesanywhere/RolesAnywhereErrors.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/RolesAnywhereServiceClientModel.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/AttributeMapping.h>
#include <aws/rolesanywhere/model/CertificateField.h>
#include <aws/rolesanywhere/model/CreateProfileRequest.h>
#include <aws/rolesanywhere/model/CreateProfileResult.h>
#include <aws/rolesanywhere/model/CreateTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/CreateTrustAnchorResult.h>
#include <aws/rolesanywhere/model/CredentialSummary.h>
#include <aws/rolesanywhere/model/CrlDetail.h>
#include <aws/rolesanywhere/model/DeleteAttributeMappingRequest.h>
#include <aws/rolesanywhere/model/DeleteAttributeMappingResult.h>
#include <aws/rolesanywhere/model/DeleteCrlRequest.h>
#include <aws/rolesanywhere/model/DeleteCrlResult.h>
#include <aws/rolesanywhere/model/DeleteProfileRequest.h>
#include <aws/rolesanywhere/model/DeleteProfileResult.h>
#include <aws/rolesanywhere/model/DeleteTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/DeleteTrustAnchorResult.h>
#include <aws/rolesanywhere/model/DisableCrlRequest.h>
#include <aws/rolesanywhere/model/DisableCrlResult.h>
#include <aws/rolesanywhere/model/DisableProfileRequest.h>
#include <aws/rolesanywhere/model/DisableProfileResult.h>
#include <aws/rolesanywhere/model/DisableTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/DisableTrustAnchorResult.h>
#include <aws/rolesanywhere/model/EnableCrlRequest.h>
#include <aws/rolesanywhere/model/EnableCrlResult.h>
#include <aws/rolesanywhere/model/EnableProfileRequest.h>
#include <aws/rolesanywhere/model/EnableProfileResult.h>
#include <aws/rolesanywhere/model/EnableTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/EnableTrustAnchorResult.h>
#include <aws/rolesanywhere/model/GetCrlRequest.h>
#include <aws/rolesanywhere/model/GetCrlResult.h>
#include <aws/rolesanywhere/model/GetProfileRequest.h>
#include <aws/rolesanywhere/model/GetProfileResult.h>
#include <aws/rolesanywhere/model/GetSubjectRequest.h>
#include <aws/rolesanywhere/model/GetSubjectResult.h>
#include <aws/rolesanywhere/model/GetTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/GetTrustAnchorResult.h>
#include <aws/rolesanywhere/model/ImportCrlRequest.h>
#include <aws/rolesanywhere/model/ImportCrlResult.h>
#include <aws/rolesanywhere/model/InstanceProperty.h>
#include <aws/rolesanywhere/model/ListCrlsRequest.h>
#include <aws/rolesanywhere/model/ListCrlsResult.h>
#include <aws/rolesanywhere/model/ListProfilesRequest.h>
#include <aws/rolesanywhere/model/ListProfilesResult.h>
#include <aws/rolesanywhere/model/ListSubjectsRequest.h>
#include <aws/rolesanywhere/model/ListSubjectsResult.h>
#include <aws/rolesanywhere/model/ListTagsForResourceRequest.h>
#include <aws/rolesanywhere/model/ListTagsForResourceResult.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsRequest.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsResult.h>
#include <aws/rolesanywhere/model/MappingRule.h>
#include <aws/rolesanywhere/model/NotificationChannel.h>
#include <aws/rolesanywhere/model/NotificationEvent.h>
#include <aws/rolesanywhere/model/NotificationSetting.h>
#include <aws/rolesanywhere/model/NotificationSettingDetail.h>
#include <aws/rolesanywhere/model/NotificationSettingKey.h>
#include <aws/rolesanywhere/model/ProfileDetail.h>
#include <aws/rolesanywhere/model/PutAttributeMappingRequest.h>
#include <aws/rolesanywhere/model/PutAttributeMappingResult.h>
#include <aws/rolesanywhere/model/PutNotificationSettingsRequest.h>
#include <aws/rolesanywhere/model/PutNotificationSettingsResult.h>
#include <aws/rolesanywhere/model/ResetNotificationSettingsRequest.h>
#include <aws/rolesanywhere/model/ResetNotificationSettingsResult.h>
#include <aws/rolesanywhere/model/Source.h>
#include <aws/rolesanywhere/model/SourceData.h>
#include <aws/rolesanywhere/model/SubjectDetail.h>
#include <aws/rolesanywhere/model/SubjectSummary.h>
#include <aws/rolesanywhere/model/Tag.h>
#include <aws/rolesanywhere/model/TagResourceRequest.h>
#include <aws/rolesanywhere/model/TagResourceResult.h>
#include <aws/rolesanywhere/model/TrustAnchorDetail.h>
#include <aws/rolesanywhere/model/TrustAnchorType.h>
#include <aws/rolesanywhere/model/UntagResourceRequest.h>
#include <aws/rolesanywhere/model/UntagResourceResult.h>
#include <aws/rolesanywhere/model/UpdateCrlRequest.h>
#include <aws/rolesanywhere/model/UpdateCrlResult.h>
#include <aws/rolesanywhere/model/UpdateProfileRequest.h>
#include <aws/rolesanywhere/model/UpdateProfileResult.h>
#include <aws/rolesanywhere/model/UpdateTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/UpdateTrustAnchorResult.h>

using RolesAnywhereIncludeTest = ::testing::Test;

TEST_F(RolesAnywhereIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::RolesAnywhere::RolesAnywhereClient>("RolesAnywhereIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
