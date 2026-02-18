/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm-sap/model/ListApplicationsPaginationTraits.h>
#include <aws/ssm-sap/model/ListComponentsPaginationTraits.h>
#include <aws/ssm-sap/model/ListConfigurationCheckDefinitionsPaginationTraits.h>
#include <aws/ssm-sap/model/ListConfigurationCheckOperationsPaginationTraits.h>
#include <aws/ssm-sap/model/ListDatabasesPaginationTraits.h>
#include <aws/ssm-sap/model/ListOperationEventsPaginationTraits.h>
#include <aws/ssm-sap/model/ListOperationsPaginationTraits.h>
#include <aws/ssm-sap/model/ListSubCheckResultsPaginationTraits.h>
#include <aws/ssm-sap/model/ListSubCheckRuleResultsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SsmSap {

class SsmSapClient;

template <typename DerivedClient>
class SsmSapPaginationBase {
 public:
  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest, Pagination::ListComponentsPaginationTraits<DerivedClient>>
  ListComponentsPaginator(const Model::ListComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest,
                                             Pagination::ListComponentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListConfigurationCheckDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationCheckDefinitionsRequest,
                                    Pagination::ListConfigurationCheckDefinitionsPaginationTraits<DerivedClient>>
  ListConfigurationCheckDefinitionsPaginator(const Model::ListConfigurationCheckDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationCheckDefinitionsRequest,
                                             Pagination::ListConfigurationCheckDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfigurationCheckOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationCheckOperationsRequest,
                                    Pagination::ListConfigurationCheckOperationsPaginationTraits<DerivedClient>>
  ListConfigurationCheckOperationsPaginator(const Model::ListConfigurationCheckOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationCheckOperationsRequest,
                                             Pagination::ListConfigurationCheckOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatabasesRequest, Pagination::ListDatabasesPaginationTraits<DerivedClient>>
  ListDatabasesPaginator(const Model::ListDatabasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatabasesRequest,
                                             Pagination::ListDatabasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListOperationEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationEventsRequest,
                                    Pagination::ListOperationEventsPaginationTraits<DerivedClient>>
  ListOperationEventsPaginator(const Model::ListOperationEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationEventsRequest,
                                             Pagination::ListOperationEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationsRequest, Pagination::ListOperationsPaginationTraits<DerivedClient>>
  ListOperationsPaginator(const Model::ListOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationsRequest,
                                             Pagination::ListOperationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListSubCheckResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubCheckResultsRequest,
                                    Pagination::ListSubCheckResultsPaginationTraits<DerivedClient>>
  ListSubCheckResultsPaginator(const Model::ListSubCheckResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubCheckResultsRequest,
                                             Pagination::ListSubCheckResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubCheckRuleResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubCheckRuleResultsRequest,
                                    Pagination::ListSubCheckRuleResultsPaginationTraits<DerivedClient>>
  ListSubCheckRuleResultsPaginator(const Model::ListSubCheckRuleResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubCheckRuleResultsRequest,
                                             Pagination::ListSubCheckRuleResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SsmSap
}  // namespace Aws
