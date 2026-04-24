/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pca-connector-scep/PcaConnectorScepClient.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataPaginationTraits.h>
#include <aws/pca-connector-scep/model/ListConnectorsPaginationTraits.h>

namespace Aws {
namespace PcaConnectorScep {

using ListChallengeMetadataPaginator =
    Aws::Utils::Pagination::Paginator<PcaConnectorScepClient, Model::ListChallengeMetadataRequest,
                                      Pagination::ListChallengeMetadataPaginationTraits<PcaConnectorScepClient>>;
using ListConnectorsPaginator = Aws::Utils::Pagination::Paginator<PcaConnectorScepClient, Model::ListConnectorsRequest,
                                                                  Pagination::ListConnectorsPaginationTraits<PcaConnectorScepClient>>;

}  // namespace PcaConnectorScep
}  // namespace Aws
