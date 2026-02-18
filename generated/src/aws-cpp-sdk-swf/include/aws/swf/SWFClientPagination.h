/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/swf/SWFClient.h>
#include <aws/swf/model/GetWorkflowExecutionHistoryPaginationTraits.h>
#include <aws/swf/model/ListActivityTypesPaginationTraits.h>
#include <aws/swf/model/ListClosedWorkflowExecutionsPaginationTraits.h>
#include <aws/swf/model/ListDomainsPaginationTraits.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsPaginationTraits.h>
#include <aws/swf/model/ListWorkflowTypesPaginationTraits.h>
#include <aws/swf/model/PollForDecisionTaskPaginationTraits.h>

namespace Aws {
namespace SWF {

using GetWorkflowExecutionHistoryPaginator =
    Aws::Utils::Pagination::Paginator<SWFClient, Model::GetWorkflowExecutionHistoryRequest,
                                      Pagination::GetWorkflowExecutionHistoryPaginationTraits<SWFClient>>;
using ListActivityTypesPaginator =
    Aws::Utils::Pagination::Paginator<SWFClient, Model::ListActivityTypesRequest, Pagination::ListActivityTypesPaginationTraits<SWFClient>>;
using ListClosedWorkflowExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SWFClient, Model::ListClosedWorkflowExecutionsRequest,
                                      Pagination::ListClosedWorkflowExecutionsPaginationTraits<SWFClient>>;
using ListDomainsPaginator =
    Aws::Utils::Pagination::Paginator<SWFClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<SWFClient>>;
using ListOpenWorkflowExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SWFClient, Model::ListOpenWorkflowExecutionsRequest,
                                      Pagination::ListOpenWorkflowExecutionsPaginationTraits<SWFClient>>;
using ListWorkflowTypesPaginator =
    Aws::Utils::Pagination::Paginator<SWFClient, Model::ListWorkflowTypesRequest, Pagination::ListWorkflowTypesPaginationTraits<SWFClient>>;
using PollForDecisionTaskPaginator = Aws::Utils::Pagination::Paginator<SWFClient, Model::PollForDecisionTaskRequest,
                                                                       Pagination::PollForDecisionTaskPaginationTraits<SWFClient>>;

}  // namespace SWF
}  // namespace Aws
