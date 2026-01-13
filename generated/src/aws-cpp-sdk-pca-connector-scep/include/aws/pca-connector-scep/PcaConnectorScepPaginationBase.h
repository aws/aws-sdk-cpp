/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataPaginationTraits.h>
#include <aws/pca-connector-scep/model/ListConnectorsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PcaConnectorScep {

class PcaConnectorScepClient;

template <typename DerivedClient>
class PcaConnectorScepPaginationBase {
 public:
  /**
   * Create a paginator for ListChallengeMetadata operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChallengeMetadataRequest,
                                    Pagination::ListChallengeMetadataPaginationTraits<DerivedClient>>
  ListChallengeMetadataPaginator(const Model::ListChallengeMetadataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChallengeMetadataRequest,
                                             Pagination::ListChallengeMetadataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest, Pagination::ListConnectorsPaginationTraits<DerivedClient>>
  ListConnectorsPaginator(const Model::ListConnectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest,
                                             Pagination::ListConnectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace PcaConnectorScep
}  // namespace Aws
