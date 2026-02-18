/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/snow-device-management/model/ListDeviceResourcesPaginationTraits.h>
#include <aws/snow-device-management/model/ListDevicesPaginationTraits.h>
#include <aws/snow-device-management/model/ListExecutionsPaginationTraits.h>
#include <aws/snow-device-management/model/ListTasksPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SnowDeviceManagement {

class SnowDeviceManagementClient;

template <typename DerivedClient>
class SnowDeviceManagementPaginationBase {
 public:
  /**
   * Create a paginator for ListDeviceResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeviceResourcesRequest,
                                    Pagination::ListDeviceResourcesPaginationTraits<DerivedClient>>
  ListDeviceResourcesPaginator(const Model::ListDeviceResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeviceResourcesRequest,
                                             Pagination::ListDeviceResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

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
   * Create a paginator for ListExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest, Pagination::ListExecutionsPaginationTraits<DerivedClient>>
  ListExecutionsPaginator(const Model::ListExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest,
                                             Pagination::ListExecutionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>
  ListTasksPaginator(const Model::ListTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SnowDeviceManagement
}  // namespace Aws
