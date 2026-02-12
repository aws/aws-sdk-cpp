/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/snow-device-management/SnowDeviceManagementClient.h>
#include <aws/snow-device-management/model/ListDeviceResourcesPaginationTraits.h>
#include <aws/snow-device-management/model/ListDevicesPaginationTraits.h>
#include <aws/snow-device-management/model/ListExecutionsPaginationTraits.h>
#include <aws/snow-device-management/model/ListTasksPaginationTraits.h>

namespace Aws {
namespace SnowDeviceManagement {

using ListDeviceResourcesPaginator =
    Aws::Utils::Pagination::Paginator<SnowDeviceManagementClient, Model::ListDeviceResourcesRequest,
                                      Pagination::ListDeviceResourcesPaginationTraits<SnowDeviceManagementClient>>;
using ListDevicesPaginator = Aws::Utils::Pagination::Paginator<SnowDeviceManagementClient, Model::ListDevicesRequest,
                                                               Pagination::ListDevicesPaginationTraits<SnowDeviceManagementClient>>;
using ListExecutionsPaginator = Aws::Utils::Pagination::Paginator<SnowDeviceManagementClient, Model::ListExecutionsRequest,
                                                                  Pagination::ListExecutionsPaginationTraits<SnowDeviceManagementClient>>;
using ListTasksPaginator = Aws::Utils::Pagination::Paginator<SnowDeviceManagementClient, Model::ListTasksRequest,
                                                             Pagination::ListTasksPaginationTraits<SnowDeviceManagementClient>>;

}  // namespace SnowDeviceManagement
}  // namespace Aws
