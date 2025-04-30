/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/resource-explorer-2/ResourceExplorer2Client.h>
#include <aws/resource-explorer-2/ResourceExplorer2EndpointProvider.h>
#include <aws/resource-explorer-2/ResourceExplorer2EndpointRules.h>
#include <aws/resource-explorer-2/ResourceExplorer2ErrorMarshaller.h>
#include <aws/resource-explorer-2/ResourceExplorer2Errors.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/resource-explorer-2/ResourceExplorer2ServiceClientModel.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/AWSServiceAccessStatus.h>
#include <aws/resource-explorer-2/model/AssociateDefaultViewRequest.h>
#include <aws/resource-explorer-2/model/AssociateDefaultViewResult.h>
#include <aws/resource-explorer-2/model/BatchGetViewError.h>
#include <aws/resource-explorer-2/model/BatchGetViewRequest.h>
#include <aws/resource-explorer-2/model/BatchGetViewResult.h>
#include <aws/resource-explorer-2/model/CreateIndexRequest.h>
#include <aws/resource-explorer-2/model/CreateIndexResult.h>
#include <aws/resource-explorer-2/model/CreateViewRequest.h>
#include <aws/resource-explorer-2/model/CreateViewResult.h>
#include <aws/resource-explorer-2/model/DeleteIndexRequest.h>
#include <aws/resource-explorer-2/model/DeleteIndexResult.h>
#include <aws/resource-explorer-2/model/DeleteViewRequest.h>
#include <aws/resource-explorer-2/model/DeleteViewResult.h>
#include <aws/resource-explorer-2/model/DisassociateDefaultViewRequest.h>
#include <aws/resource-explorer-2/model/GetAccountLevelServiceConfigurationRequest.h>
#include <aws/resource-explorer-2/model/GetAccountLevelServiceConfigurationResult.h>
#include <aws/resource-explorer-2/model/GetDefaultViewRequest.h>
#include <aws/resource-explorer-2/model/GetDefaultViewResult.h>
#include <aws/resource-explorer-2/model/GetIndexRequest.h>
#include <aws/resource-explorer-2/model/GetIndexResult.h>
#include <aws/resource-explorer-2/model/GetManagedViewRequest.h>
#include <aws/resource-explorer-2/model/GetManagedViewResult.h>
#include <aws/resource-explorer-2/model/GetViewRequest.h>
#include <aws/resource-explorer-2/model/GetViewResult.h>
#include <aws/resource-explorer-2/model/IncludedProperty.h>
#include <aws/resource-explorer-2/model/Index.h>
#include <aws/resource-explorer-2/model/IndexState.h>
#include <aws/resource-explorer-2/model/IndexType.h>
#include <aws/resource-explorer-2/model/ListIndexesForMembersRequest.h>
#include <aws/resource-explorer-2/model/ListIndexesForMembersResult.h>
#include <aws/resource-explorer-2/model/ListIndexesRequest.h>
#include <aws/resource-explorer-2/model/ListIndexesResult.h>
#include <aws/resource-explorer-2/model/ListManagedViewsRequest.h>
#include <aws/resource-explorer-2/model/ListManagedViewsResult.h>
#include <aws/resource-explorer-2/model/ListResourcesRequest.h>
#include <aws/resource-explorer-2/model/ListResourcesResult.h>
#include <aws/resource-explorer-2/model/ListSupportedResourceTypesRequest.h>
#include <aws/resource-explorer-2/model/ListSupportedResourceTypesResult.h>
#include <aws/resource-explorer-2/model/ListTagsForResourceRequest.h>
#include <aws/resource-explorer-2/model/ListTagsForResourceResult.h>
#include <aws/resource-explorer-2/model/ListViewsRequest.h>
#include <aws/resource-explorer-2/model/ListViewsResult.h>
#include <aws/resource-explorer-2/model/ManagedView.h>
#include <aws/resource-explorer-2/model/MemberIndex.h>
#include <aws/resource-explorer-2/model/OrgConfiguration.h>
#include <aws/resource-explorer-2/model/Resource.h>
#include <aws/resource-explorer-2/model/ResourceCount.h>
#include <aws/resource-explorer-2/model/ResourceProperty.h>
#include <aws/resource-explorer-2/model/SearchFilter.h>
#include <aws/resource-explorer-2/model/SearchRequest.h>
#include <aws/resource-explorer-2/model/SearchResult.h>
#include <aws/resource-explorer-2/model/ServiceQuotaExceededException.h>
#include <aws/resource-explorer-2/model/SupportedResourceType.h>
#include <aws/resource-explorer-2/model/TagResourceRequest.h>
#include <aws/resource-explorer-2/model/TagResourceResult.h>
#include <aws/resource-explorer-2/model/UntagResourceRequest.h>
#include <aws/resource-explorer-2/model/UntagResourceResult.h>
#include <aws/resource-explorer-2/model/UpdateIndexTypeRequest.h>
#include <aws/resource-explorer-2/model/UpdateIndexTypeResult.h>
#include <aws/resource-explorer-2/model/UpdateViewRequest.h>
#include <aws/resource-explorer-2/model/UpdateViewResult.h>
#include <aws/resource-explorer-2/model/ValidationException.h>
#include <aws/resource-explorer-2/model/ValidationExceptionField.h>
#include <aws/resource-explorer-2/model/View.h>

using ResourceExplorer2IncludeTest = ::testing::Test;

TEST_F(ResourceExplorer2IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ResourceExplorer2::ResourceExplorer2Client>("ResourceExplorer2IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
