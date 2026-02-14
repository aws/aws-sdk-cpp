/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/panorama/PanoramaClient.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesPaginationTraits.h>
#include <aws/panorama/model/ListApplicationInstanceNodeInstancesPaginationTraits.h>
#include <aws/panorama/model/ListApplicationInstancesPaginationTraits.h>
#include <aws/panorama/model/ListDevicesJobsPaginationTraits.h>
#include <aws/panorama/model/ListDevicesPaginationTraits.h>
#include <aws/panorama/model/ListNodeFromTemplateJobsPaginationTraits.h>
#include <aws/panorama/model/ListNodesPaginationTraits.h>
#include <aws/panorama/model/ListPackageImportJobsPaginationTraits.h>
#include <aws/panorama/model/ListPackagesPaginationTraits.h>

namespace Aws {
namespace Panorama {

using ListApplicationInstanceDependenciesPaginator =
    Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListApplicationInstanceDependenciesRequest,
                                      Pagination::ListApplicationInstanceDependenciesPaginationTraits<PanoramaClient>>;
using ListApplicationInstanceNodeInstancesPaginator =
    Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListApplicationInstanceNodeInstancesRequest,
                                      Pagination::ListApplicationInstanceNodeInstancesPaginationTraits<PanoramaClient>>;
using ListApplicationInstancesPaginator =
    Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListApplicationInstancesRequest,
                                      Pagination::ListApplicationInstancesPaginationTraits<PanoramaClient>>;
using ListDevicesPaginator =
    Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListDevicesRequest, Pagination::ListDevicesPaginationTraits<PanoramaClient>>;
using ListDevicesJobsPaginator = Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListDevicesJobsRequest,
                                                                   Pagination::ListDevicesJobsPaginationTraits<PanoramaClient>>;
using ListNodeFromTemplateJobsPaginator =
    Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListNodeFromTemplateJobsRequest,
                                      Pagination::ListNodeFromTemplateJobsPaginationTraits<PanoramaClient>>;
using ListNodesPaginator =
    Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<PanoramaClient>>;
using ListPackageImportJobsPaginator = Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListPackageImportJobsRequest,
                                                                         Pagination::ListPackageImportJobsPaginationTraits<PanoramaClient>>;
using ListPackagesPaginator =
    Aws::Utils::Pagination::Paginator<PanoramaClient, Model::ListPackagesRequest, Pagination::ListPackagesPaginationTraits<PanoramaClient>>;

}  // namespace Panorama
}  // namespace Aws
