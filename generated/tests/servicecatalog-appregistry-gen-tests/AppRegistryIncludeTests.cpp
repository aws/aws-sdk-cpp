/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/servicecatalog-appregistry/AppRegistryClient.h>
#include <aws/servicecatalog-appregistry/AppRegistryEndpointProvider.h>
#include <aws/servicecatalog-appregistry/AppRegistryEndpointRules.h>
#include <aws/servicecatalog-appregistry/AppRegistryErrorMarshaller.h>
#include <aws/servicecatalog-appregistry/AppRegistryErrors.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/servicecatalog-appregistry/AppRegistryServiceClientModel.h>
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/AppRegistryConfiguration.h>
#include <aws/servicecatalog-appregistry/model/Application.h>
#include <aws/servicecatalog-appregistry/model/ApplicationSummary.h>
#include <aws/servicecatalog-appregistry/model/ApplicationTagResult.h>
#include <aws/servicecatalog-appregistry/model/ApplicationTagStatus.h>
#include <aws/servicecatalog-appregistry/model/AssociateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/AssociateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/AssociateResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/AssociateResourceResult.h>
#include <aws/servicecatalog-appregistry/model/AssociationOption.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroup.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroupDetails.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroupSummary.h>
#include <aws/servicecatalog-appregistry/model/CreateApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/CreateApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/CreateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/CreateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DeleteApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/DeleteApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/DeleteAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DeleteAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DisassociateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DisassociateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DisassociateResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/DisassociateResourceResult.h>
#include <aws/servicecatalog-appregistry/model/GetApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/GetApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/GetAssociatedResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/GetAssociatedResourceResult.h>
#include <aws/servicecatalog-appregistry/model/GetAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/GetAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/GetConfigurationRequest.h>
#include <aws/servicecatalog-appregistry/model/GetConfigurationResult.h>
#include <aws/servicecatalog-appregistry/model/Integrations.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsResult.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsResult.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesResult.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsResult.h>
#include <aws/servicecatalog-appregistry/model/ListTagsForResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/ListTagsForResourceResult.h>
#include <aws/servicecatalog-appregistry/model/PutConfigurationRequest.h>
#include <aws/servicecatalog-appregistry/model/Resource.h>
#include <aws/servicecatalog-appregistry/model/ResourceDetails.h>
#include <aws/servicecatalog-appregistry/model/ResourceGroup.h>
#include <aws/servicecatalog-appregistry/model/ResourceGroupState.h>
#include <aws/servicecatalog-appregistry/model/ResourceInfo.h>
#include <aws/servicecatalog-appregistry/model/ResourceIntegrations.h>
#include <aws/servicecatalog-appregistry/model/ResourceItemStatus.h>
#include <aws/servicecatalog-appregistry/model/ResourceType.h>
#include <aws/servicecatalog-appregistry/model/ResourcesListItem.h>
#include <aws/servicecatalog-appregistry/model/SyncAction.h>
#include <aws/servicecatalog-appregistry/model/SyncResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/SyncResourceResult.h>
#include <aws/servicecatalog-appregistry/model/TagQueryConfiguration.h>
#include <aws/servicecatalog-appregistry/model/TagResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/TagResourceResult.h>
#include <aws/servicecatalog-appregistry/model/ThrottlingException.h>
#include <aws/servicecatalog-appregistry/model/UntagResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/UntagResourceResult.h>
#include <aws/servicecatalog-appregistry/model/UpdateApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/UpdateApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/UpdateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/UpdateAttributeGroupResult.h>

using AppRegistryIncludeTest = ::testing::Test;

TEST_F(AppRegistryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AppRegistry::AppRegistryClient>("AppRegistryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
