/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace NetworkFirewall {

class NetworkFirewallClient;

template <typename DerivedClient>
class NetworkFirewallPaginationBase {
 public:
  /**
   * Create a paginator for GetAnalysisReportResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAnalysisReportResultsRequest,
                                    Pagination::GetAnalysisReportResultsPaginationTraits<DerivedClient>>
  GetAnalysisReportResultsPaginator(const Model::GetAnalysisReportResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAnalysisReportResultsRequest,
                                             Pagination::GetAnalysisReportResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnalysisReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalysisReportsRequest,
                                    Pagination::ListAnalysisReportsPaginationTraits<DerivedClient>>
  ListAnalysisReportsPaginator(const Model::ListAnalysisReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalysisReportsRequest,
                                             Pagination::ListAnalysisReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFirewallPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallPoliciesRequest,
                                    Pagination::ListFirewallPoliciesPaginationTraits<DerivedClient>>
  ListFirewallPoliciesPaginator(const Model::ListFirewallPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallPoliciesRequest,
                                             Pagination::ListFirewallPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFirewalls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallsRequest, Pagination::ListFirewallsPaginationTraits<DerivedClient>>
  ListFirewallsPaginator(const Model::ListFirewallsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallsRequest,
                                             Pagination::ListFirewallsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListFlowOperationResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowOperationResultsRequest,
                                    Pagination::ListFlowOperationResultsPaginationTraits<DerivedClient>>
  ListFlowOperationResultsPaginator(const Model::ListFlowOperationResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowOperationResultsRequest,
                                             Pagination::ListFlowOperationResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFlowOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowOperationsRequest,
                                    Pagination::ListFlowOperationsPaginationTraits<DerivedClient>>
  ListFlowOperationsPaginator(const Model::ListFlowOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowOperationsRequest,
                                             Pagination::ListFlowOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProxies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxiesRequest, Pagination::ListProxiesPaginationTraits<DerivedClient>>
  ListProxiesPaginator(const Model::ListProxiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxiesRequest,
                                             Pagination::ListProxiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListProxyConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxyConfigurationsRequest,
                                    Pagination::ListProxyConfigurationsPaginationTraits<DerivedClient>>
  ListProxyConfigurationsPaginator(const Model::ListProxyConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxyConfigurationsRequest,
                                             Pagination::ListProxyConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProxyRuleGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxyRuleGroupsRequest,
                                    Pagination::ListProxyRuleGroupsPaginationTraits<DerivedClient>>
  ListProxyRuleGroupsPaginator(const Model::ListProxyRuleGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxyRuleGroupsRequest,
                                             Pagination::ListProxyRuleGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRuleGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleGroupsRequest, Pagination::ListRuleGroupsPaginationTraits<DerivedClient>>
  ListRuleGroupsPaginator(const Model::ListRuleGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleGroupsRequest,
                                             Pagination::ListRuleGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTLSInspectionConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTLSInspectionConfigurationsRequest,
                                    Pagination::ListTLSInspectionConfigurationsPaginationTraits<DerivedClient>>
  ListTLSInspectionConfigurationsPaginator(const Model::ListTLSInspectionConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTLSInspectionConfigurationsRequest,
                                             Pagination::ListTLSInspectionConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVpcEndpointAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcEndpointAssociationsRequest,
                                    Pagination::ListVpcEndpointAssociationsPaginationTraits<DerivedClient>>
  ListVpcEndpointAssociationsPaginator(const Model::ListVpcEndpointAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcEndpointAssociationsRequest,
                                             Pagination::ListVpcEndpointAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace NetworkFirewall
}  // namespace Aws
