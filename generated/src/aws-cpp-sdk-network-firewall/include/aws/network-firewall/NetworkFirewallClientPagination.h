/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/network-firewall/NetworkFirewallClient.h>
#include <aws/network-firewall/model/GetAnalysisReportResultsPaginationTraits.h>
#include <aws/network-firewall/model/ListAnalysisReportsPaginationTraits.h>
#include <aws/network-firewall/model/ListFirewallPoliciesPaginationTraits.h>
#include <aws/network-firewall/model/ListFirewallsPaginationTraits.h>
#include <aws/network-firewall/model/ListFlowOperationResultsPaginationTraits.h>
#include <aws/network-firewall/model/ListFlowOperationsPaginationTraits.h>
#include <aws/network-firewall/model/ListProxiesPaginationTraits.h>
#include <aws/network-firewall/model/ListProxyConfigurationsPaginationTraits.h>
#include <aws/network-firewall/model/ListProxyRuleGroupsPaginationTraits.h>
#include <aws/network-firewall/model/ListRuleGroupsPaginationTraits.h>
#include <aws/network-firewall/model/ListTLSInspectionConfigurationsPaginationTraits.h>
#include <aws/network-firewall/model/ListTagsForResourcePaginationTraits.h>
#include <aws/network-firewall/model/ListVpcEndpointAssociationsPaginationTraits.h>

namespace Aws {
namespace NetworkFirewall {

using GetAnalysisReportResultsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::GetAnalysisReportResultsRequest,
                                      Pagination::GetAnalysisReportResultsPaginationTraits<NetworkFirewallClient>>;
using ListAnalysisReportsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListAnalysisReportsRequest,
                                      Pagination::ListAnalysisReportsPaginationTraits<NetworkFirewallClient>>;
using ListFirewallPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListFirewallPoliciesRequest,
                                      Pagination::ListFirewallPoliciesPaginationTraits<NetworkFirewallClient>>;
using ListFirewallsPaginator = Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListFirewallsRequest,
                                                                 Pagination::ListFirewallsPaginationTraits<NetworkFirewallClient>>;
using ListFlowOperationResultsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListFlowOperationResultsRequest,
                                      Pagination::ListFlowOperationResultsPaginationTraits<NetworkFirewallClient>>;
using ListFlowOperationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListFlowOperationsRequest,
                                      Pagination::ListFlowOperationsPaginationTraits<NetworkFirewallClient>>;
using ListProxiesPaginator = Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListProxiesRequest,
                                                               Pagination::ListProxiesPaginationTraits<NetworkFirewallClient>>;
using ListProxyConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListProxyConfigurationsRequest,
                                      Pagination::ListProxyConfigurationsPaginationTraits<NetworkFirewallClient>>;
using ListProxyRuleGroupsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListProxyRuleGroupsRequest,
                                      Pagination::ListProxyRuleGroupsPaginationTraits<NetworkFirewallClient>>;
using ListRuleGroupsPaginator = Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListRuleGroupsRequest,
                                                                  Pagination::ListRuleGroupsPaginationTraits<NetworkFirewallClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<NetworkFirewallClient>>;
using ListTLSInspectionConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListTLSInspectionConfigurationsRequest,
                                      Pagination::ListTLSInspectionConfigurationsPaginationTraits<NetworkFirewallClient>>;
using ListVpcEndpointAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFirewallClient, Model::ListVpcEndpointAssociationsRequest,
                                      Pagination::ListVpcEndpointAssociationsPaginationTraits<NetworkFirewallClient>>;

}  // namespace NetworkFirewall
}  // namespace Aws
