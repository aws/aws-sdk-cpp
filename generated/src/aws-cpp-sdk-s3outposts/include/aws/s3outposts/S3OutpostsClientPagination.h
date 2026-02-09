/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3outposts/S3OutpostsClient.h>
#include <aws/s3outposts/model/ListEndpointsPaginationTraits.h>
#include <aws/s3outposts/model/ListOutpostsWithS3PaginationTraits.h>
#include <aws/s3outposts/model/ListSharedEndpointsPaginationTraits.h>

namespace Aws {
namespace S3Outposts {

using ListEndpointsPaginator = Aws::Utils::Pagination::Paginator<S3OutpostsClient, Model::ListEndpointsRequest,
                                                                 Pagination::ListEndpointsPaginationTraits<S3OutpostsClient>>;
using ListOutpostsWithS3Paginator = Aws::Utils::Pagination::Paginator<S3OutpostsClient, Model::ListOutpostsWithS3Request,
                                                                      Pagination::ListOutpostsWithS3PaginationTraits<S3OutpostsClient>>;
using ListSharedEndpointsPaginator = Aws::Utils::Pagination::Paginator<S3OutpostsClient, Model::ListSharedEndpointsRequest,
                                                                       Pagination::ListSharedEndpointsPaginationTraits<S3OutpostsClient>>;

}  // namespace S3Outposts
}  // namespace Aws
