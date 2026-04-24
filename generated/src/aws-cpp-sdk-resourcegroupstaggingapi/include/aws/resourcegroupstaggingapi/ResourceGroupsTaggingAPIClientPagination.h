/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIClient.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/ListRequiredTagsPaginationTraits.h>

namespace Aws {
namespace ResourceGroupsTaggingAPI {

using GetComplianceSummaryPaginator =
    Aws::Utils::Pagination::Paginator<ResourceGroupsTaggingAPIClient, Model::GetComplianceSummaryRequest,
                                      Pagination::GetComplianceSummaryPaginationTraits<ResourceGroupsTaggingAPIClient>>;
using GetResourcesPaginator = Aws::Utils::Pagination::Paginator<ResourceGroupsTaggingAPIClient, Model::GetResourcesRequest,
                                                                Pagination::GetResourcesPaginationTraits<ResourceGroupsTaggingAPIClient>>;
using GetTagKeysPaginator = Aws::Utils::Pagination::Paginator<ResourceGroupsTaggingAPIClient, Model::GetTagKeysRequest,
                                                              Pagination::GetTagKeysPaginationTraits<ResourceGroupsTaggingAPIClient>>;
using GetTagValuesPaginator = Aws::Utils::Pagination::Paginator<ResourceGroupsTaggingAPIClient, Model::GetTagValuesRequest,
                                                                Pagination::GetTagValuesPaginationTraits<ResourceGroupsTaggingAPIClient>>;
using ListRequiredTagsPaginator =
    Aws::Utils::Pagination::Paginator<ResourceGroupsTaggingAPIClient, Model::ListRequiredTagsRequest,
                                      Pagination::ListRequiredTagsPaginationTraits<ResourceGroupsTaggingAPIClient>>;

}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
