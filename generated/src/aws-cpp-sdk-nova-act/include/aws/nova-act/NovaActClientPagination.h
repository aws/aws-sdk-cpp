/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/nova-act/NovaActClient.h>
#include <aws/nova-act/model/ListActsPaginationTraits.h>
#include <aws/nova-act/model/ListSessionsPaginationTraits.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsPaginationTraits.h>
#include <aws/nova-act/model/ListWorkflowRunsPaginationTraits.h>

namespace Aws {
namespace NovaAct {

using ListActsPaginator =
    Aws::Utils::Pagination::Paginator<NovaActClient, Model::ListActsRequest, Pagination::ListActsPaginationTraits<NovaActClient>>;
using ListSessionsPaginator =
    Aws::Utils::Pagination::Paginator<NovaActClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<NovaActClient>>;
using ListWorkflowDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<NovaActClient, Model::ListWorkflowDefinitionsRequest,
                                      Pagination::ListWorkflowDefinitionsPaginationTraits<NovaActClient>>;
using ListWorkflowRunsPaginator = Aws::Utils::Pagination::Paginator<NovaActClient, Model::ListWorkflowRunsRequest,
                                                                    Pagination::ListWorkflowRunsPaginationTraits<NovaActClient>>;

}  // namespace NovaAct
}  // namespace Aws
