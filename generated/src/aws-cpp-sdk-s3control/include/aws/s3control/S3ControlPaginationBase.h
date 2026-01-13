/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3control/model/ListAccessGrantsInstancesPaginationTraits.h>
#include <aws/s3control/model/ListAccessGrantsLocationsPaginationTraits.h>
#include <aws/s3control/model/ListAccessGrantsPaginationTraits.h>
#include <aws/s3control/model/ListAccessPointsForDirectoryBucketsPaginationTraits.h>
#include <aws/s3control/model/ListAccessPointsForObjectLambdaPaginationTraits.h>
#include <aws/s3control/model/ListAccessPointsPaginationTraits.h>
#include <aws/s3control/model/ListCallerAccessGrantsPaginationTraits.h>
#include <aws/s3control/model/ListJobsPaginationTraits.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsPaginationTraits.h>
#include <aws/s3control/model/ListRegionalBucketsPaginationTraits.h>
#include <aws/s3control/model/ListStorageLensConfigurationsPaginationTraits.h>
#include <aws/s3control/model/ListStorageLensGroupsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace S3Control {

class S3ControlClient;

template <typename DerivedClient>
class S3ControlPaginationBase {
 public:
  /**
   * Create a paginator for ListAccessGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessGrantsRequest,
                                    Pagination::ListAccessGrantsPaginationTraits<DerivedClient>>
  ListAccessGrantsPaginator(const Model::ListAccessGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessGrantsRequest,
                                             Pagination::ListAccessGrantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAccessGrantsInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessGrantsInstancesRequest,
                                    Pagination::ListAccessGrantsInstancesPaginationTraits<DerivedClient>>
  ListAccessGrantsInstancesPaginator(const Model::ListAccessGrantsInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessGrantsInstancesRequest,
                                             Pagination::ListAccessGrantsInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessGrantsLocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessGrantsLocationsRequest,
                                    Pagination::ListAccessGrantsLocationsPaginationTraits<DerivedClient>>
  ListAccessGrantsLocationsPaginator(const Model::ListAccessGrantsLocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessGrantsLocationsRequest,
                                             Pagination::ListAccessGrantsLocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPointsRequest,
                                    Pagination::ListAccessPointsPaginationTraits<DerivedClient>>
  ListAccessPointsPaginator(const Model::ListAccessPointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPointsRequest,
                                             Pagination::ListAccessPointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAccessPointsForDirectoryBuckets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPointsForDirectoryBucketsRequest,
                                    Pagination::ListAccessPointsForDirectoryBucketsPaginationTraits<DerivedClient>>
  ListAccessPointsForDirectoryBucketsPaginator(const Model::ListAccessPointsForDirectoryBucketsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPointsForDirectoryBucketsRequest,
                                             Pagination::ListAccessPointsForDirectoryBucketsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessPointsForObjectLambda operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPointsForObjectLambdaRequest,
                                    Pagination::ListAccessPointsForObjectLambdaPaginationTraits<DerivedClient>>
  ListAccessPointsForObjectLambdaPaginator(const Model::ListAccessPointsForObjectLambdaRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPointsForObjectLambdaRequest,
                                             Pagination::ListAccessPointsForObjectLambdaPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCallerAccessGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCallerAccessGrantsRequest,
                                    Pagination::ListCallerAccessGrantsPaginationTraits<DerivedClient>>
  ListCallerAccessGrantsPaginator(const Model::ListCallerAccessGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCallerAccessGrantsRequest,
                                             Pagination::ListCallerAccessGrantsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMultiRegionAccessPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiRegionAccessPointsRequest,
                                    Pagination::ListMultiRegionAccessPointsPaginationTraits<DerivedClient>>
  ListMultiRegionAccessPointsPaginator(const Model::ListMultiRegionAccessPointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiRegionAccessPointsRequest,
                                             Pagination::ListMultiRegionAccessPointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRegionalBuckets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegionalBucketsRequest,
                                    Pagination::ListRegionalBucketsPaginationTraits<DerivedClient>>
  ListRegionalBucketsPaginator(const Model::ListRegionalBucketsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegionalBucketsRequest,
                                             Pagination::ListRegionalBucketsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStorageLensConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageLensConfigurationsRequest,
                                    Pagination::ListStorageLensConfigurationsPaginationTraits<DerivedClient>>
  ListStorageLensConfigurationsPaginator(const Model::ListStorageLensConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageLensConfigurationsRequest,
                                             Pagination::ListStorageLensConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStorageLensGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageLensGroupsRequest,
                                    Pagination::ListStorageLensGroupsPaginationTraits<DerivedClient>>
  ListStorageLensGroupsPaginator(const Model::ListStorageLensGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageLensGroupsRequest,
                                             Pagination::ListStorageLensGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace S3Control
}  // namespace Aws
