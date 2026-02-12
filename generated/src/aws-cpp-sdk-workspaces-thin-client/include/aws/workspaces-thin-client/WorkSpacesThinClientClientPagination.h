/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientClient.h>
#include <aws/workspaces-thin-client/model/ListDevicesPaginationTraits.h>
#include <aws/workspaces-thin-client/model/ListEnvironmentsPaginationTraits.h>
#include <aws/workspaces-thin-client/model/ListSoftwareSetsPaginationTraits.h>

namespace Aws {
namespace WorkSpacesThinClient {

using ListDevicesPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesThinClientClient, Model::ListDevicesRequest,
                                                               Pagination::ListDevicesPaginationTraits<WorkSpacesThinClientClient>>;
using ListEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesThinClientClient, Model::ListEnvironmentsRequest,
                                      Pagination::ListEnvironmentsPaginationTraits<WorkSpacesThinClientClient>>;
using ListSoftwareSetsPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesThinClientClient, Model::ListSoftwareSetsRequest,
                                      Pagination::ListSoftwareSetsPaginationTraits<WorkSpacesThinClientClient>>;

}  // namespace WorkSpacesThinClient
}  // namespace Aws
