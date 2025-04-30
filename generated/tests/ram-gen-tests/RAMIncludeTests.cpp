/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ram/RAMClient.h>
#include <aws/ram/RAMEndpointProvider.h>
#include <aws/ram/RAMEndpointRules.h>
#include <aws/ram/RAMErrorMarshaller.h>
#include <aws/ram/RAMErrors.h>
#include <aws/ram/RAMRequest.h>
#include <aws/ram/RAMServiceClientModel.h>
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/AcceptResourceShareInvitationRequest.h>
#include <aws/ram/model/AcceptResourceShareInvitationResult.h>
#include <aws/ram/model/AssociateResourceSharePermissionRequest.h>
#include <aws/ram/model/AssociateResourceSharePermissionResult.h>
#include <aws/ram/model/AssociateResourceShareRequest.h>
#include <aws/ram/model/AssociateResourceShareResult.h>
#include <aws/ram/model/AssociatedPermission.h>
#include <aws/ram/model/CreatePermissionRequest.h>
#include <aws/ram/model/CreatePermissionResult.h>
#include <aws/ram/model/CreatePermissionVersionRequest.h>
#include <aws/ram/model/CreatePermissionVersionResult.h>
#include <aws/ram/model/CreateResourceShareRequest.h>
#include <aws/ram/model/CreateResourceShareResult.h>
#include <aws/ram/model/DeletePermissionRequest.h>
#include <aws/ram/model/DeletePermissionResult.h>
#include <aws/ram/model/DeletePermissionVersionRequest.h>
#include <aws/ram/model/DeletePermissionVersionResult.h>
#include <aws/ram/model/DeleteResourceShareRequest.h>
#include <aws/ram/model/DeleteResourceShareResult.h>
#include <aws/ram/model/DisassociateResourceSharePermissionRequest.h>
#include <aws/ram/model/DisassociateResourceSharePermissionResult.h>
#include <aws/ram/model/DisassociateResourceShareRequest.h>
#include <aws/ram/model/DisassociateResourceShareResult.h>
#include <aws/ram/model/EnableSharingWithAwsOrganizationRequest.h>
#include <aws/ram/model/EnableSharingWithAwsOrganizationResult.h>
#include <aws/ram/model/GetPermissionRequest.h>
#include <aws/ram/model/GetPermissionResult.h>
#include <aws/ram/model/GetResourcePoliciesRequest.h>
#include <aws/ram/model/GetResourcePoliciesResult.h>
#include <aws/ram/model/GetResourceShareAssociationsRequest.h>
#include <aws/ram/model/GetResourceShareAssociationsResult.h>
#include <aws/ram/model/GetResourceShareInvitationsRequest.h>
#include <aws/ram/model/GetResourceShareInvitationsResult.h>
#include <aws/ram/model/GetResourceSharesRequest.h>
#include <aws/ram/model/GetResourceSharesResult.h>
#include <aws/ram/model/ListPendingInvitationResourcesRequest.h>
#include <aws/ram/model/ListPendingInvitationResourcesResult.h>
#include <aws/ram/model/ListPermissionAssociationsRequest.h>
#include <aws/ram/model/ListPermissionAssociationsResult.h>
#include <aws/ram/model/ListPermissionVersionsRequest.h>
#include <aws/ram/model/ListPermissionVersionsResult.h>
#include <aws/ram/model/ListPermissionsRequest.h>
#include <aws/ram/model/ListPermissionsResult.h>
#include <aws/ram/model/ListPrincipalsRequest.h>
#include <aws/ram/model/ListPrincipalsResult.h>
#include <aws/ram/model/ListReplacePermissionAssociationsWorkRequest.h>
#include <aws/ram/model/ListReplacePermissionAssociationsWorkResult.h>
#include <aws/ram/model/ListResourceSharePermissionsRequest.h>
#include <aws/ram/model/ListResourceSharePermissionsResult.h>
#include <aws/ram/model/ListResourceTypesRequest.h>
#include <aws/ram/model/ListResourceTypesResult.h>
#include <aws/ram/model/ListResourcesRequest.h>
#include <aws/ram/model/ListResourcesResult.h>
#include <aws/ram/model/PermissionFeatureSet.h>
#include <aws/ram/model/PermissionStatus.h>
#include <aws/ram/model/PermissionType.h>
#include <aws/ram/model/PermissionTypeFilter.h>
#include <aws/ram/model/Principal.h>
#include <aws/ram/model/PromotePermissionCreatedFromPolicyRequest.h>
#include <aws/ram/model/PromotePermissionCreatedFromPolicyResult.h>
#include <aws/ram/model/PromoteResourceShareCreatedFromPolicyRequest.h>
#include <aws/ram/model/PromoteResourceShareCreatedFromPolicyResult.h>
#include <aws/ram/model/RejectResourceShareInvitationRequest.h>
#include <aws/ram/model/RejectResourceShareInvitationResult.h>
#include <aws/ram/model/ReplacePermissionAssociationsRequest.h>
#include <aws/ram/model/ReplacePermissionAssociationsResult.h>
#include <aws/ram/model/ReplacePermissionAssociationsWork.h>
#include <aws/ram/model/ReplacePermissionAssociationsWorkStatus.h>
#include <aws/ram/model/Resource.h>
#include <aws/ram/model/ResourceOwner.h>
#include <aws/ram/model/ResourceRegionScope.h>
#include <aws/ram/model/ResourceRegionScopeFilter.h>
#include <aws/ram/model/ResourceShare.h>
#include <aws/ram/model/ResourceShareAssociation.h>
#include <aws/ram/model/ResourceShareAssociationStatus.h>
#include <aws/ram/model/ResourceShareAssociationType.h>
#include <aws/ram/model/ResourceShareFeatureSet.h>
#include <aws/ram/model/ResourceShareInvitation.h>
#include <aws/ram/model/ResourceShareInvitationStatus.h>
#include <aws/ram/model/ResourceSharePermissionDetail.h>
#include <aws/ram/model/ResourceSharePermissionSummary.h>
#include <aws/ram/model/ResourceShareStatus.h>
#include <aws/ram/model/ResourceStatus.h>
#include <aws/ram/model/ServiceNameAndResourceType.h>
#include <aws/ram/model/SetDefaultPermissionVersionRequest.h>
#include <aws/ram/model/SetDefaultPermissionVersionResult.h>
#include <aws/ram/model/Tag.h>
#include <aws/ram/model/TagFilter.h>
#include <aws/ram/model/TagResourceRequest.h>
#include <aws/ram/model/TagResourceResult.h>
#include <aws/ram/model/UntagResourceRequest.h>
#include <aws/ram/model/UntagResourceResult.h>
#include <aws/ram/model/UpdateResourceShareRequest.h>
#include <aws/ram/model/UpdateResourceShareResult.h>

using RAMIncludeTest = ::testing::Test;

TEST_F(RAMIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::RAM::RAMClient>("RAMIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
