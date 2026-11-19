/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rtbfabric/RTBFabricClient.h>
#include <aws/rtbfabric/model/ListAvailableModuleVersionsPaginationTraits.h>
#include <aws/rtbfabric/model/ListAvailableModulesPaginationTraits.h>
#include <aws/rtbfabric/model/ListCertificateAssociationsPaginationTraits.h>
#include <aws/rtbfabric/model/ListLinkRoutingRulesPaginationTraits.h>
#include <aws/rtbfabric/model/ListLinksPaginationTraits.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysPaginationTraits.h>
#include <aws/rtbfabric/model/ListResponderGatewaysPaginationTraits.h>
#include <aws/rtbfabric/model/ListUpdatesPaginationTraits.h>

namespace Aws {
namespace RTBFabric {

using ListAvailableModulesPaginator = Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListAvailableModulesRequest,
                                                                        Pagination::ListAvailableModulesPaginationTraits<RTBFabricClient>>;
using ListAvailableModuleVersionsPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListAvailableModuleVersionsRequest,
                                      Pagination::ListAvailableModuleVersionsPaginationTraits<RTBFabricClient>>;
using ListCertificateAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListCertificateAssociationsRequest,
                                      Pagination::ListCertificateAssociationsPaginationTraits<RTBFabricClient>>;
using ListLinkRoutingRulesPaginator = Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListLinkRoutingRulesRequest,
                                                                        Pagination::ListLinkRoutingRulesPaginationTraits<RTBFabricClient>>;
using ListLinksPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<RTBFabricClient>>;
using ListRequesterGatewaysPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListRequesterGatewaysRequest,
                                      Pagination::ListRequesterGatewaysPaginationTraits<RTBFabricClient>>;
using ListResponderGatewaysPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListResponderGatewaysRequest,
                                      Pagination::ListResponderGatewaysPaginationTraits<RTBFabricClient>>;
using ListUpdatesPaginator =
    Aws::Utils::Pagination::Paginator<RTBFabricClient, Model::ListUpdatesRequest, Pagination::ListUpdatesPaginationTraits<RTBFabricClient>>;

}  // namespace RTBFabric
}  // namespace Aws
