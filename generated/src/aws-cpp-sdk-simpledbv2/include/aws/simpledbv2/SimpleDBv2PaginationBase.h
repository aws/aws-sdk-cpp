/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/simpledbv2/model/ListExportsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SimpleDBv2 {

class SimpleDBv2Client;

template <typename DerivedClient>
class SimpleDBv2PaginationBase {
 public:
  /**
   * Create a paginator for ListExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits<DerivedClient>>
  ListExportsPaginator(const Model::ListExportsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest,
                                             Pagination::ListExportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace SimpleDBv2
}  // namespace Aws
