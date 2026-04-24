/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pca-connector-ad/model/ListConnectorsPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListTemplatesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PcaConnectorAd {

class PcaConnectorAdClient;

template <typename DerivedClient>
class PcaConnectorAdPaginationBase {
 public:
  /**
   * Create a paginator for ListConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest, Pagination::ListConnectorsPaginationTraits<DerivedClient>>
  ListConnectorsPaginator(const Model::ListConnectorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest,
                                             Pagination::ListConnectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDirectoryRegistrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDirectoryRegistrationsRequest,
                                    Pagination::ListDirectoryRegistrationsPaginationTraits<DerivedClient>>
  ListDirectoryRegistrationsPaginator(const Model::ListDirectoryRegistrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDirectoryRegistrationsRequest,
                                             Pagination::ListDirectoryRegistrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServicePrincipalNames operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicePrincipalNamesRequest,
                                    Pagination::ListServicePrincipalNamesPaginationTraits<DerivedClient>>
  ListServicePrincipalNamesPaginator(const Model::ListServicePrincipalNamesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicePrincipalNamesRequest,
                                             Pagination::ListServicePrincipalNamesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTemplateGroupAccessControlEntries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateGroupAccessControlEntriesRequest,
                                    Pagination::ListTemplateGroupAccessControlEntriesPaginationTraits<DerivedClient>>
  ListTemplateGroupAccessControlEntriesPaginator(const Model::ListTemplateGroupAccessControlEntriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateGroupAccessControlEntriesRequest,
                                             Pagination::ListTemplateGroupAccessControlEntriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest, Pagination::ListTemplatesPaginationTraits<DerivedClient>>
  ListTemplatesPaginator(const Model::ListTemplatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest,
                                             Pagination::ListTemplatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace PcaConnectorAd
}  // namespace Aws
