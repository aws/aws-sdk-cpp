/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersPaginationTraits.h>
#include <aws/ssm-quicksetup/model/ListConfigurationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SSMQuickSetup {

class SSMQuickSetupClient;

template <typename DerivedClient>
class SSMQuickSetupPaginationBase {
 public:
  /**
   * Create a paginator for ListConfigurationManagers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationManagersRequest,
                                    Pagination::ListConfigurationManagersPaginationTraits<DerivedClient>>
  ListConfigurationManagersPaginator(const Model::ListConfigurationManagersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationManagersRequest,
                                             Pagination::ListConfigurationManagersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationsRequest,
                                    Pagination::ListConfigurationsPaginationTraits<DerivedClient>>
  ListConfigurationsPaginator(const Model::ListConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationsRequest,
                                             Pagination::ListConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SSMQuickSetup
}  // namespace Aws
