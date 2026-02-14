/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rtbfabric/RTBFabricClient.h>
#include <aws/rtbfabric/model/ListLinksPaginationTraits.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysPaginationTraits.h>
#include <aws/rtbfabric/model/ListResponderGatewaysPaginationTraits.h>

namespace Aws {
namespace RTBFabric {

using ListLinksPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<RTBFabricClient>>;
using ListRequesterGatewaysPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListRequesterGatewaysRequest,
                                      Pagination::ListRequesterGatewaysPaginationTraits<RTBFabricClient>>;
using ListResponderGatewaysPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListResponderGatewaysRequest,
                                      Pagination::ListResponderGatewaysPaginationTraits<RTBFabricClient>>;

}  // namespace RTBFabric
}  // namespace Aws
