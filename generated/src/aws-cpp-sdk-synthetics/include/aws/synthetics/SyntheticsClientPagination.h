/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/synthetics/SyntheticsClient.h>
#include <aws/synthetics/model/DescribeCanariesLastRunPaginationTraits.h>
#include <aws/synthetics/model/DescribeCanariesPaginationTraits.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsPaginationTraits.h>
#include <aws/synthetics/model/GetCanaryRunsPaginationTraits.h>
#include <aws/synthetics/model/ListAssociatedGroupsPaginationTraits.h>
#include <aws/synthetics/model/ListGroupResourcesPaginationTraits.h>
#include <aws/synthetics/model/ListGroupsPaginationTraits.h>

namespace Aws {
namespace Synthetics {

using DescribeCanariesPaginator = Aws::Utils::Pagination::Paginator<SyntheticsClient, Model::DescribeCanariesRequest,
                                                                    Pagination::DescribeCanariesPaginationTraits<SyntheticsClient>>;
using DescribeCanariesLastRunPaginator =
    Aws::Utils::Pagination::Paginator<SyntheticsClient, Model::DescribeCanariesLastRunRequest,
                                      Pagination::DescribeCanariesLastRunPaginationTraits<SyntheticsClient>>;
using DescribeRuntimeVersionsPaginator =
    Aws::Utils::Pagination::Paginator<SyntheticsClient, Model::DescribeRuntimeVersionsRequest,
                                      Pagination::DescribeRuntimeVersionsPaginationTraits<SyntheticsClient>>;
using GetCanaryRunsPaginator = Aws::Utils::Pagination::Paginator<SyntheticsClient, Model::GetCanaryRunsRequest,
                                                                 Pagination::GetCanaryRunsPaginationTraits<SyntheticsClient>>;
using ListAssociatedGroupsPaginator = Aws::Utils::Pagination::Paginator<SyntheticsClient, Model::ListAssociatedGroupsRequest,
                                                                        Pagination::ListAssociatedGroupsPaginationTraits<SyntheticsClient>>;
using ListGroupResourcesPaginator = Aws::Utils::Pagination::Paginator<SyntheticsClient, Model::ListGroupResourcesRequest,
                                                                      Pagination::ListGroupResourcesPaginationTraits<SyntheticsClient>>;
using ListGroupsPaginator =
    Aws::Utils::Pagination::Paginator<SyntheticsClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<SyntheticsClient>>;

}  // namespace Synthetics
}  // namespace Aws
