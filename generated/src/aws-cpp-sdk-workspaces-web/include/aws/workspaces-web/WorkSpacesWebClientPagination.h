/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workspaces-web/WorkSpacesWebClient.h>
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

namespace Aws {
namespace WorkSpacesWeb {

using ListBrowserSettingsPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListBrowserSettingsRequest,
                                      Pagination::ListBrowserSettingsPaginationTraits<WorkSpacesWebClient>>;
using ListDataProtectionSettingsPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListDataProtectionSettingsRequest,
                                      Pagination::ListDataProtectionSettingsPaginationTraits<WorkSpacesWebClient>>;
using ListIdentityProvidersPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListIdentityProvidersRequest,
                                      Pagination::ListIdentityProvidersPaginationTraits<WorkSpacesWebClient>>;
using ListIpAccessSettingsPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListIpAccessSettingsRequest,
                                      Pagination::ListIpAccessSettingsPaginationTraits<WorkSpacesWebClient>>;
using ListNetworkSettingsPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListNetworkSettingsRequest,
                                      Pagination::ListNetworkSettingsPaginationTraits<WorkSpacesWebClient>>;
using ListPortalsPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListPortalsRequest,
                                                               Pagination::ListPortalsPaginationTraits<WorkSpacesWebClient>>;
using ListSessionLoggersPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListSessionLoggersRequest,
                                                                      Pagination::ListSessionLoggersPaginationTraits<WorkSpacesWebClient>>;
using ListSessionsPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListSessionsRequest,
                                                                Pagination::ListSessionsPaginationTraits<WorkSpacesWebClient>>;
using ListTrustStoreCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListTrustStoreCertificatesRequest,
                                      Pagination::ListTrustStoreCertificatesPaginationTraits<WorkSpacesWebClient>>;
using ListTrustStoresPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListTrustStoresRequest,
                                                                   Pagination::ListTrustStoresPaginationTraits<WorkSpacesWebClient>>;
using ListUserAccessLoggingSettingsPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListUserAccessLoggingSettingsRequest,
                                      Pagination::ListUserAccessLoggingSettingsPaginationTraits<WorkSpacesWebClient>>;
using ListUserSettingsPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesWebClient, Model::ListUserSettingsRequest,
                                                                    Pagination::ListUserSettingsPaginationTraits<WorkSpacesWebClient>>;

}  // namespace WorkSpacesWeb
}  // namespace Aws
