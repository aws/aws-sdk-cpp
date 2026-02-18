/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workspaces-web/model/ListBrowserSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListDataProtectionSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListIdentityProvidersPaginationTraits.h>
#include <aws/workspaces-web/model/ListIpAccessSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListNetworkSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListPortalsPaginationTraits.h>
#include <aws/workspaces-web/model/ListSessionLoggersPaginationTraits.h>
#include <aws/workspaces-web/model/ListSessionsPaginationTraits.h>
#include <aws/workspaces-web/model/ListTrustStoreCertificatesPaginationTraits.h>
#include <aws/workspaces-web/model/ListTrustStoresPaginationTraits.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsPaginationTraits.h>
#include <aws/workspaces-web/model/ListUserSettingsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace WorkSpacesWeb {

class WorkSpacesWebClient;

template <typename DerivedClient>
class WorkSpacesWebPaginationBase {
 public:
  /**
   * Create a paginator for ListBrowserSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrowserSettingsRequest,
                                    Pagination::ListBrowserSettingsPaginationTraits<DerivedClient>>
  ListBrowserSettingsPaginator(const Model::ListBrowserSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrowserSettingsRequest,
                                             Pagination::ListBrowserSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataProtectionSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataProtectionSettingsRequest,
                                    Pagination::ListDataProtectionSettingsPaginationTraits<DerivedClient>>
  ListDataProtectionSettingsPaginator(const Model::ListDataProtectionSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataProtectionSettingsRequest,
                                             Pagination::ListDataProtectionSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIdentityProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityProvidersRequest,
                                    Pagination::ListIdentityProvidersPaginationTraits<DerivedClient>>
  ListIdentityProvidersPaginator(const Model::ListIdentityProvidersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityProvidersRequest,
                                             Pagination::ListIdentityProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIpAccessSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIpAccessSettingsRequest,
                                    Pagination::ListIpAccessSettingsPaginationTraits<DerivedClient>>
  ListIpAccessSettingsPaginator(const Model::ListIpAccessSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIpAccessSettingsRequest,
                                             Pagination::ListIpAccessSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkSettingsRequest,
                                    Pagination::ListNetworkSettingsPaginationTraits<DerivedClient>>
  ListNetworkSettingsPaginator(const Model::ListNetworkSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkSettingsRequest,
                                             Pagination::ListNetworkSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPortals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortalsRequest, Pagination::ListPortalsPaginationTraits<DerivedClient>>
  ListPortalsPaginator(const Model::ListPortalsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortalsRequest,
                                             Pagination::ListPortalsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSessionLoggers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionLoggersRequest,
                                    Pagination::ListSessionLoggersPaginationTraits<DerivedClient>>
  ListSessionLoggersPaginator(const Model::ListSessionLoggersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionLoggersRequest,
                                             Pagination::ListSessionLoggersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest,
                                             Pagination::ListSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTrustStoreCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustStoreCertificatesRequest,
                                    Pagination::ListTrustStoreCertificatesPaginationTraits<DerivedClient>>
  ListTrustStoreCertificatesPaginator(const Model::ListTrustStoreCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustStoreCertificatesRequest,
                                             Pagination::ListTrustStoreCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrustStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustStoresRequest,
                                    Pagination::ListTrustStoresPaginationTraits<DerivedClient>>
  ListTrustStoresPaginator(const Model::ListTrustStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustStoresRequest,
                                             Pagination::ListTrustStoresPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListUserAccessLoggingSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserAccessLoggingSettingsRequest,
                                    Pagination::ListUserAccessLoggingSettingsPaginationTraits<DerivedClient>>
  ListUserAccessLoggingSettingsPaginator(const Model::ListUserAccessLoggingSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserAccessLoggingSettingsRequest,
                                             Pagination::ListUserAccessLoggingSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUserSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserSettingsRequest,
                                    Pagination::ListUserSettingsPaginationTraits<DerivedClient>>
  ListUserSettingsPaginator(const Model::ListUserSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserSettingsRequest,
                                             Pagination::ListUserSettingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace WorkSpacesWeb
}  // namespace Aws
