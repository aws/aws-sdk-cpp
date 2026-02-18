/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesPaginationTraits.h>
#include <aws/panorama/model/ListApplicationInstanceNodeInstancesPaginationTraits.h>
#include <aws/panorama/model/ListApplicationInstancesPaginationTraits.h>
#include <aws/panorama/model/ListDevicesJobsPaginationTraits.h>
#include <aws/panorama/model/ListDevicesPaginationTraits.h>
#include <aws/panorama/model/ListNodeFromTemplateJobsPaginationTraits.h>
#include <aws/panorama/model/ListNodesPaginationTraits.h>
#include <aws/panorama/model/ListPackageImportJobsPaginationTraits.h>
#include <aws/panorama/model/ListPackagesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Panorama {

class PanoramaClient;

template <typename DerivedClient>
class PanoramaPaginationBase {
 public:
  /**
   * Create a paginator for ListApplicationInstanceDependencies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationInstanceDependenciesRequest,
                                    Pagination::ListApplicationInstanceDependenciesPaginationTraits<DerivedClient>>
  ListApplicationInstanceDependenciesPaginator(const Model::ListApplicationInstanceDependenciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationInstanceDependenciesRequest,
                                             Pagination::ListApplicationInstanceDependenciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationInstanceNodeInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationInstanceNodeInstancesRequest,
                                    Pagination::ListApplicationInstanceNodeInstancesPaginationTraits<DerivedClient>>
  ListApplicationInstanceNodeInstancesPaginator(const Model::ListApplicationInstanceNodeInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationInstanceNodeInstancesRequest,
                                             Pagination::ListApplicationInstanceNodeInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationInstancesRequest,
                                    Pagination::ListApplicationInstancesPaginationTraits<DerivedClient>>
  ListApplicationInstancesPaginator(const Model::ListApplicationInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationInstancesRequest,
                                             Pagination::ListApplicationInstancesPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListDevicesJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesJobsRequest,
                                    Pagination::ListDevicesJobsPaginationTraits<DerivedClient>>
  ListDevicesJobsPaginator(const Model::ListDevicesJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevicesJobsRequest,
                                             Pagination::ListDevicesJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListNodeFromTemplateJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodeFromTemplateJobsRequest,
                                    Pagination::ListNodeFromTemplateJobsPaginationTraits<DerivedClient>>
  ListNodeFromTemplateJobsPaginator(const Model::ListNodeFromTemplateJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodeFromTemplateJobsRequest,
                                             Pagination::ListNodeFromTemplateJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>
  ListNodesPaginator(const Model::ListNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPackageImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageImportJobsRequest,
                                    Pagination::ListPackageImportJobsPaginationTraits<DerivedClient>>
  ListPackageImportJobsPaginator(const Model::ListPackageImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageImportJobsRequest,
                                             Pagination::ListPackageImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesRequest, Pagination::ListPackagesPaginationTraits<DerivedClient>>
  ListPackagesPaginator(const Model::ListPackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesRequest,
                                             Pagination::ListPackagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace Panorama
}  // namespace Aws
