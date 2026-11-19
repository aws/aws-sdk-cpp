/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rtbfabric/model/ListAvailableModuleVersionsPaginationTraits.h>
#include <aws/rtbfabric/model/ListAvailableModulesPaginationTraits.h>
#include <aws/rtbfabric/model/ListCertificateAssociationsPaginationTraits.h>
#include <aws/rtbfabric/model/ListLinkRoutingRulesPaginationTraits.h>
#include <aws/rtbfabric/model/ListLinksPaginationTraits.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysPaginationTraits.h>
#include <aws/rtbfabric/model/ListResponderGatewaysPaginationTraits.h>
#include <aws/rtbfabric/model/ListUpdatesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace RTBFabric {

template <typename DerivedClient>
class RTBFabricPaginationBase {
 public:
  /**
   * Create a paginator for ListAvailableModules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableModulesRequest,
                                    Pagination::ListAvailableModulesPaginationTraits<DerivedClient>>
  ListAvailableModulesPaginator(const Model::ListAvailableModulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableModulesRequest,
                                             Pagination::ListAvailableModulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAvailableModuleVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableModuleVersionsRequest,
                                    Pagination::ListAvailableModuleVersionsPaginationTraits<DerivedClient>>
  ListAvailableModuleVersionsPaginator(const Model::ListAvailableModuleVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableModuleVersionsRequest,
                                             Pagination::ListAvailableModuleVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCertificateAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificateAssociationsRequest,
                                    Pagination::ListCertificateAssociationsPaginationTraits<DerivedClient>>
  ListCertificateAssociationsPaginator(const Model::ListCertificateAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificateAssociationsRequest,
                                             Pagination::ListCertificateAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLinkRoutingRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinkRoutingRulesRequest,
                                    Pagination::ListLinkRoutingRulesPaginationTraits<DerivedClient>>
  ListLinkRoutingRulesPaginator(const Model::ListLinkRoutingRulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinkRoutingRulesRequest,
                                             Pagination::ListLinkRoutingRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<DerivedClient>>
  ListLinksPaginator(const Model::ListLinksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRequesterGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequesterGatewaysRequest,
                                    Pagination::ListRequesterGatewaysPaginationTraits<DerivedClient>>
  ListRequesterGatewaysPaginator(const Model::ListRequesterGatewaysRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
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
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResponderGatewaysRequest,
                                             Pagination::ListResponderGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUpdates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUpdatesRequest, Pagination::ListUpdatesPaginationTraits<DerivedClient>>
  ListUpdatesPaginator(const Model::ListUpdatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUpdatesRequest,
                                             Pagination::ListUpdatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace RTBFabric
}  // namespace Aws
