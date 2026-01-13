/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm-sap/SsmSapClient.h>
#include <aws/ssm-sap/model/ListApplicationsPaginationTraits.h>
#include <aws/ssm-sap/model/ListComponentsPaginationTraits.h>
#include <aws/ssm-sap/model/ListConfigurationCheckDefinitionsPaginationTraits.h>
#include <aws/ssm-sap/model/ListConfigurationCheckOperationsPaginationTraits.h>
#include <aws/ssm-sap/model/ListDatabasesPaginationTraits.h>
#include <aws/ssm-sap/model/ListOperationEventsPaginationTraits.h>
#include <aws/ssm-sap/model/ListOperationsPaginationTraits.h>
#include <aws/ssm-sap/model/ListSubCheckResultsPaginationTraits.h>
#include <aws/ssm-sap/model/ListSubCheckRuleResultsPaginationTraits.h>

namespace Aws {
namespace SsmSap {

using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<SsmSapClient>>;
using ListComponentsPaginator =
    Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListComponentsRequest, Pagination::ListComponentsPaginationTraits<SsmSapClient>>;
using ListConfigurationCheckDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListConfigurationCheckDefinitionsRequest,
                                      Pagination::ListConfigurationCheckDefinitionsPaginationTraits<SsmSapClient>>;
using ListConfigurationCheckOperationsPaginator =
    Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListConfigurationCheckOperationsRequest,
                                      Pagination::ListConfigurationCheckOperationsPaginationTraits<SsmSapClient>>;
using ListDatabasesPaginator =
    Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListDatabasesRequest, Pagination::ListDatabasesPaginationTraits<SsmSapClient>>;
using ListOperationEventsPaginator = Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListOperationEventsRequest,
                                                                       Pagination::ListOperationEventsPaginationTraits<SsmSapClient>>;
using ListOperationsPaginator =
    Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListOperationsRequest, Pagination::ListOperationsPaginationTraits<SsmSapClient>>;
using ListSubCheckResultsPaginator = Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListSubCheckResultsRequest,
                                                                       Pagination::ListSubCheckResultsPaginationTraits<SsmSapClient>>;
using ListSubCheckRuleResultsPaginator =
    Aws::Utils::Pagination::Paginator<SsmSapClient, Model::ListSubCheckRuleResultsRequest,
                                      Pagination::ListSubCheckRuleResultsPaginationTraits<SsmSapClient>>;

}  // namespace SsmSap
}  // namespace Aws
