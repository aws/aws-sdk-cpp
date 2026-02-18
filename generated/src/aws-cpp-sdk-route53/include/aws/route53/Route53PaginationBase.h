/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53/model/ListCidrBlocksPaginationTraits.h>
#include <aws/route53/model/ListCidrCollectionsPaginationTraits.h>
#include <aws/route53/model/ListCidrLocationsPaginationTraits.h>
#include <aws/route53/model/ListHealthChecksPaginationTraits.h>
#include <aws/route53/model/ListHostedZonesPaginationTraits.h>
#include <aws/route53/model/ListQueryLoggingConfigsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Route53 {

class Route53Client;

template <typename DerivedClient>
class Route53PaginationBase {
 public:
  /**
   * Create a paginator for ListCidrBlocks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCidrBlocksRequest, Pagination::ListCidrBlocksPaginationTraits<DerivedClient>>
  ListCidrBlocksPaginator(const Model::ListCidrBlocksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCidrBlocksRequest,
                                             Pagination::ListCidrBlocksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListCidrCollections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCidrCollectionsRequest,
                                    Pagination::ListCidrCollectionsPaginationTraits<DerivedClient>>
  ListCidrCollectionsPaginator(const Model::ListCidrCollectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCidrCollectionsRequest,
                                             Pagination::ListCidrCollectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCidrLocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCidrLocationsRequest,
                                    Pagination::ListCidrLocationsPaginationTraits<DerivedClient>>
  ListCidrLocationsPaginator(const Model::ListCidrLocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCidrLocationsRequest,
                                             Pagination::ListCidrLocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHealthChecks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHealthChecksRequest,
                                    Pagination::ListHealthChecksPaginationTraits<DerivedClient>>
  ListHealthChecksPaginator(const Model::ListHealthChecksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHealthChecksRequest,
                                             Pagination::ListHealthChecksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListHostedZones operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHostedZonesRequest,
                                    Pagination::ListHostedZonesPaginationTraits<DerivedClient>>
  ListHostedZonesPaginator(const Model::ListHostedZonesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHostedZonesRequest,
                                             Pagination::ListHostedZonesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListQueryLoggingConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueryLoggingConfigsRequest,
                                    Pagination::ListQueryLoggingConfigsPaginationTraits<DerivedClient>>
  ListQueryLoggingConfigsPaginator(const Model::ListQueryLoggingConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueryLoggingConfigsRequest,
                                             Pagination::ListQueryLoggingConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Route53
}  // namespace Aws
