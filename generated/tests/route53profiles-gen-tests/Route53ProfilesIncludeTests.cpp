/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/route53profiles/Route53ProfilesClient.h>
#include <aws/route53profiles/Route53ProfilesEndpointProvider.h>
#include <aws/route53profiles/Route53ProfilesEndpointRules.h>
#include <aws/route53profiles/Route53ProfilesErrorMarshaller.h>
#include <aws/route53profiles/Route53ProfilesErrors.h>
#include <aws/route53profiles/Route53ProfilesRequest.h>
#include <aws/route53profiles/Route53ProfilesServiceClientModel.h>
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/model/AssociateProfileRequest.h>
#include <aws/route53profiles/model/AssociateProfileResult.h>
#include <aws/route53profiles/model/AssociateResourceToProfileRequest.h>
#include <aws/route53profiles/model/AssociateResourceToProfileResult.h>
#include <aws/route53profiles/model/CreateProfileRequest.h>
#include <aws/route53profiles/model/CreateProfileResult.h>
#include <aws/route53profiles/model/DeleteProfileRequest.h>
#include <aws/route53profiles/model/DeleteProfileResult.h>
#include <aws/route53profiles/model/DisassociateProfileRequest.h>
#include <aws/route53profiles/model/DisassociateProfileResult.h>
#include <aws/route53profiles/model/DisassociateResourceFromProfileRequest.h>
#include <aws/route53profiles/model/DisassociateResourceFromProfileResult.h>
#include <aws/route53profiles/model/GetProfileAssociationRequest.h>
#include <aws/route53profiles/model/GetProfileAssociationResult.h>
#include <aws/route53profiles/model/GetProfileRequest.h>
#include <aws/route53profiles/model/GetProfileResourceAssociationRequest.h>
#include <aws/route53profiles/model/GetProfileResourceAssociationResult.h>
#include <aws/route53profiles/model/GetProfileResult.h>
#include <aws/route53profiles/model/InvalidParameterException.h>
#include <aws/route53profiles/model/LimitExceededException.h>
#include <aws/route53profiles/model/ListProfileAssociationsRequest.h>
#include <aws/route53profiles/model/ListProfileAssociationsResult.h>
#include <aws/route53profiles/model/ListProfileResourceAssociationsRequest.h>
#include <aws/route53profiles/model/ListProfileResourceAssociationsResult.h>
#include <aws/route53profiles/model/ListProfilesRequest.h>
#include <aws/route53profiles/model/ListProfilesResult.h>
#include <aws/route53profiles/model/ListTagsForResourceRequest.h>
#include <aws/route53profiles/model/ListTagsForResourceResult.h>
#include <aws/route53profiles/model/Profile.h>
#include <aws/route53profiles/model/ProfileAssociation.h>
#include <aws/route53profiles/model/ProfileResourceAssociation.h>
#include <aws/route53profiles/model/ProfileStatus.h>
#include <aws/route53profiles/model/ProfileSummary.h>
#include <aws/route53profiles/model/ResourceExistsException.h>
#include <aws/route53profiles/model/ResourceNotFoundException.h>
#include <aws/route53profiles/model/ShareStatus.h>
#include <aws/route53profiles/model/Tag.h>
#include <aws/route53profiles/model/TagResourceRequest.h>
#include <aws/route53profiles/model/TagResourceResult.h>
#include <aws/route53profiles/model/UntagResourceRequest.h>
#include <aws/route53profiles/model/UntagResourceResult.h>
#include <aws/route53profiles/model/UpdateProfileResourceAssociationRequest.h>
#include <aws/route53profiles/model/UpdateProfileResourceAssociationResult.h>

using Route53ProfilesIncludeTest = ::testing::Test;

TEST_F(Route53ProfilesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Route53Profiles::Route53ProfilesClient>("Route53ProfilesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
