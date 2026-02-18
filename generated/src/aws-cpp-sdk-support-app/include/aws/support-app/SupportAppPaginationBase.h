/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsPaginationTraits.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SupportApp {

class SupportAppClient;

template <typename DerivedClient>
class SupportAppPaginationBase {
 public:
  /**
   * Create a paginator for ListSlackChannelConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSlackChannelConfigurationsRequest,
                                    Pagination::ListSlackChannelConfigurationsPaginationTraits<DerivedClient>>
  ListSlackChannelConfigurationsPaginator(const Model::ListSlackChannelConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSlackChannelConfigurationsRequest,
                                             Pagination::ListSlackChannelConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSlackWorkspaceConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSlackWorkspaceConfigurationsRequest,
                                    Pagination::ListSlackWorkspaceConfigurationsPaginationTraits<DerivedClient>>
  ListSlackWorkspaceConfigurationsPaginator(const Model::ListSlackWorkspaceConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSlackWorkspaceConfigurationsRequest,
                                             Pagination::ListSlackWorkspaceConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SupportApp
}  // namespace Aws
