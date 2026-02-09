/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3control/S3ControlClient.h>
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

namespace Aws {
namespace S3Control {

using ListAccessGrantsPaginator = Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListAccessGrantsRequest,
                                                                    Pagination::ListAccessGrantsPaginationTraits<S3ControlClient>>;
using ListAccessGrantsInstancesPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListAccessGrantsInstancesRequest,
                                      Pagination::ListAccessGrantsInstancesPaginationTraits<S3ControlClient>>;
using ListAccessGrantsLocationsPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListAccessGrantsLocationsRequest,
                                      Pagination::ListAccessGrantsLocationsPaginationTraits<S3ControlClient>>;
using ListAccessPointsPaginator = Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListAccessPointsRequest,
                                                                    Pagination::ListAccessPointsPaginationTraits<S3ControlClient>>;
using ListAccessPointsForDirectoryBucketsPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListAccessPointsForDirectoryBucketsRequest,
                                      Pagination::ListAccessPointsForDirectoryBucketsPaginationTraits<S3ControlClient>>;
using ListAccessPointsForObjectLambdaPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListAccessPointsForObjectLambdaRequest,
                                      Pagination::ListAccessPointsForObjectLambdaPaginationTraits<S3ControlClient>>;
using ListCallerAccessGrantsPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListCallerAccessGrantsRequest,
                                      Pagination::ListCallerAccessGrantsPaginationTraits<S3ControlClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<S3ControlClient>>;
using ListMultiRegionAccessPointsPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListMultiRegionAccessPointsRequest,
                                      Pagination::ListMultiRegionAccessPointsPaginationTraits<S3ControlClient>>;
using ListRegionalBucketsPaginator = Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListRegionalBucketsRequest,
                                                                       Pagination::ListRegionalBucketsPaginationTraits<S3ControlClient>>;
using ListStorageLensConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListStorageLensConfigurationsRequest,
                                      Pagination::ListStorageLensConfigurationsPaginationTraits<S3ControlClient>>;
using ListStorageLensGroupsPaginator =
    Aws::Utils::Pagination::Paginator<S3ControlClient, Model::ListStorageLensGroupsRequest,
                                      Pagination::ListStorageLensGroupsPaginationTraits<S3ControlClient>>;

}  // namespace S3Control
}  // namespace Aws
