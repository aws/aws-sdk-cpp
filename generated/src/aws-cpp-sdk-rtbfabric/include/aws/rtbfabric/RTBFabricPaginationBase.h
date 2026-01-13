/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rtbfabric/model/ListLinksPaginationTraits.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysPaginationTraits.h>
#include <aws/rtbfabric/model/ListResponderGatewaysPaginationTraits.h>

#include <memory>

namespace Aws {
namespace RTBFabric {

class RTBFabricClient;

template <typename DerivedClient>
class RTBFabricPaginationBase {
 public:
  /**
   * Create a paginator for ListLinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<DerivedClient>>
  ListLinksPaginator(const Model::ListLinksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRequesterGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequesterGatewaysRequest,
                                    Pagination::ListRequesterGatewaysPaginationTraits<DerivedClient>>
  ListRequesterGatewaysPaginator(const Model::ListRequesterGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequesterGatewaysRequest,
                                             Pagination::ListRequesterGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResponderGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResponderGatewaysRequest,
                                    Pagination::ListResponderGatewaysPaginationTraits<DerivedClient>>
  ListResponderGatewaysPaginator(const Model::ListResponderGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResponderGatewaysRequest,
                                             Pagination::ListResponderGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace RTBFabric
}  // namespace Aws
