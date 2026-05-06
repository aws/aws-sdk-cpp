/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mq/model/ListBrokersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MQ {

template <typename DerivedClient>
class MQPaginationBase {
 public:
  /**
   * Create a paginator for ListBrokers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrokersRequest, Pagination::ListBrokersPaginationTraits<DerivedClient>>
  ListBrokersPaginator(const Model::ListBrokersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrokersRequest,
                                             Pagination::ListBrokersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace MQ
}  // namespace Aws
