/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53/Route53Client.h>
#include <aws/route53/model/ListCidrBlocksPaginationTraits.h>
#include <aws/route53/model/ListCidrCollectionsPaginationTraits.h>
#include <aws/route53/model/ListCidrLocationsPaginationTraits.h>
#include <aws/route53/model/ListHealthChecksPaginationTraits.h>
#include <aws/route53/model/ListHostedZonesPaginationTraits.h>
#include <aws/route53/model/ListQueryLoggingConfigsPaginationTraits.h>

namespace Aws {
namespace Route53 {

using ListCidrBlocksPaginator = Aws::Utils::Pagination::Paginator<Route53Client, Model::ListCidrBlocksRequest,
                                                                  Pagination::ListCidrBlocksPaginationTraits<Route53Client>>;
using ListCidrCollectionsPaginator = Aws::Utils::Pagination::Paginator<Route53Client, Model::ListCidrCollectionsRequest,
                                                                       Pagination::ListCidrCollectionsPaginationTraits<Route53Client>>;
using ListCidrLocationsPaginator = Aws::Utils::Pagination::Paginator<Route53Client, Model::ListCidrLocationsRequest,
                                                                     Pagination::ListCidrLocationsPaginationTraits<Route53Client>>;
using ListHealthChecksPaginator = Aws::Utils::Pagination::Paginator<Route53Client, Model::ListHealthChecksRequest,
                                                                    Pagination::ListHealthChecksPaginationTraits<Route53Client>>;
using ListHostedZonesPaginator = Aws::Utils::Pagination::Paginator<Route53Client, Model::ListHostedZonesRequest,
                                                                   Pagination::ListHostedZonesPaginationTraits<Route53Client>>;
using ListQueryLoggingConfigsPaginator =
    Aws::Utils::Pagination::Paginator<Route53Client, Model::ListQueryLoggingConfigsRequest,
                                      Pagination::ListQueryLoggingConfigsPaginationTraits<Route53Client>>;

}  // namespace Route53
}  // namespace Aws
