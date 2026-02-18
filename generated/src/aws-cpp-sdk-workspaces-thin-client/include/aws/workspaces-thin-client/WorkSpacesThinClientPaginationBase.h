/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workspaces-thin-client/model/ListDevicesPaginationTraits.h>
#include <aws/workspaces-thin-client/model/ListEnvironmentsPaginationTraits.h>
#include <aws/workspaces-thin-client/model/ListSoftwareSetsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace WorkSpacesThinClient {

class WorkSpacesThinClientClient;

template <typename DerivedClient>
class WorkSpacesThinClientPaginationBase {
 public:
  /**
   * Create a paginator for ListDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesRequest, Pagination::ListDevicesPaginationTraits<DerivedClient>>
  ListDevicesPaginator(const Model::ListDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesRequest,
                                             Pagination::ListDevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                    Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>
  ListEnvironmentsPaginator(const Model::ListEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListSoftwareSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSoftwareSetsRequest,
                                    Pagination::ListSoftwareSetsPaginationTraits<DerivedClient>>
  ListSoftwareSetsPaginator(const Model::ListSoftwareSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSoftwareSetsRequest,
                                             Pagination::ListSoftwareSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace WorkSpacesThinClient
}  // namespace Aws
