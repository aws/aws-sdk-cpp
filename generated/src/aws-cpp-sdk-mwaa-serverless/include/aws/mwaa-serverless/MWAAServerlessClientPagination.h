/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mwaa-serverless/MWAAServerlessClient.h>
#include <aws/mwaa-serverless/model/ListTaskInstancesPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListWorkflowVersionsPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListWorkflowsPaginationTraits.h>

namespace Aws {
namespace MWAAServerless {

using ListTaskInstancesPaginator = Aws::Utils::Pagination::Paginator<MWAAServerlessClient, Model::ListTaskInstancesRequest,
                                                                     Pagination::ListTaskInstancesPaginationTraits<MWAAServerlessClient>>;
using ListWorkflowRunsPaginator = Aws::Utils::Pagination::Paginator<MWAAServerlessClient, Model::ListWorkflowRunsRequest,
                                                                    Pagination::ListWorkflowRunsPaginationTraits<MWAAServerlessClient>>;
using ListWorkflowsPaginator = Aws::Utils::Pagination::Paginator<MWAAServerlessClient, Model::ListWorkflowsRequest,
                                                                 Pagination::ListWorkflowsPaginationTraits<MWAAServerlessClient>>;
using ListWorkflowVersionsPaginator =
    Aws::Utils::Pagination::Paginator<MWAAServerlessClient, Model::ListWorkflowVersionsRequest,
                                      Pagination::ListWorkflowVersionsPaginationTraits<MWAAServerlessClient>>;

}  // namespace MWAAServerless
}  // namespace Aws
