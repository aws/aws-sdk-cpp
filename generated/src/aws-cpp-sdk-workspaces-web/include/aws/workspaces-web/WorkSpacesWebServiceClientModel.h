/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/workspaces-web/WorkSpacesWebErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/workspaces-web/WorkSpacesWebEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WorkSpacesWebClient header */
#include <aws/workspaces-web/model/AssociateBrowserSettingsResult.h>
#include <aws/workspaces-web/model/AssociateDataProtectionSettingsResult.h>
#include <aws/workspaces-web/model/AssociateIpAccessSettingsResult.h>
#include <aws/workspaces-web/model/AssociateNetworkSettingsResult.h>
#include <aws/workspaces-web/model/AssociateSessionLoggerResult.h>
#include <aws/workspaces-web/model/AssociateTrustStoreResult.h>
#include <aws/workspaces-web/model/AssociateUserAccessLoggingSettingsResult.h>
#include <aws/workspaces-web/model/AssociateUserSettingsResult.h>
#include <aws/workspaces-web/model/CreateBrowserSettingsResult.h>
#include <aws/workspaces-web/model/CreateDataProtectionSettingsResult.h>
#include <aws/workspaces-web/model/CreateIdentityProviderResult.h>
#include <aws/workspaces-web/model/CreateIpAccessSettingsResult.h>
#include <aws/workspaces-web/model/CreateNetworkSettingsResult.h>
#include <aws/workspaces-web/model/CreatePortalResult.h>
#include <aws/workspaces-web/model/CreateSessionLoggerResult.h>
#include <aws/workspaces-web/model/CreateTrustStoreResult.h>
#include <aws/workspaces-web/model/CreateUserAccessLoggingSettingsResult.h>
#include <aws/workspaces-web/model/CreateUserSettingsResult.h>
#include <aws/workspaces-web/model/DeleteBrowserSettingsResult.h>
#include <aws/workspaces-web/model/DeleteDataProtectionSettingsResult.h>
#include <aws/workspaces-web/model/DeleteIdentityProviderResult.h>
#include <aws/workspaces-web/model/DeleteIpAccessSettingsResult.h>
#include <aws/workspaces-web/model/DeleteNetworkSettingsResult.h>
#include <aws/workspaces-web/model/DeletePortalResult.h>
#include <aws/workspaces-web/model/DeleteSessionLoggerResult.h>
#include <aws/workspaces-web/model/DeleteTrustStoreResult.h>
#include <aws/workspaces-web/model/DeleteUserAccessLoggingSettingsResult.h>
#include <aws/workspaces-web/model/DeleteUserSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateBrowserSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateDataProtectionSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateIpAccessSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateNetworkSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateSessionLoggerResult.h>
#include <aws/workspaces-web/model/DisassociateTrustStoreResult.h>
#include <aws/workspaces-web/model/DisassociateUserAccessLoggingSettingsResult.h>
#include <aws/workspaces-web/model/DisassociateUserSettingsResult.h>
#include <aws/workspaces-web/model/ExpireSessionResult.h>
#include <aws/workspaces-web/model/GetBrowserSettingsResult.h>
#include <aws/workspaces-web/model/GetDataProtectionSettingsResult.h>
#include <aws/workspaces-web/model/GetIdentityProviderResult.h>
#include <aws/workspaces-web/model/GetIpAccessSettingsResult.h>
#include <aws/workspaces-web/model/GetNetworkSettingsResult.h>
#include <aws/workspaces-web/model/GetPortalResult.h>
#include <aws/workspaces-web/model/GetPortalServiceProviderMetadataResult.h>
#include <aws/workspaces-web/model/GetSessionResult.h>
#include <aws/workspaces-web/model/GetSessionLoggerResult.h>
#include <aws/workspaces-web/model/GetTrustStoreResult.h>
#include <aws/workspaces-web/model/GetTrustStoreCertificateResult.h>
#include <aws/workspaces-web/model/GetUserAccessLoggingSettingsResult.h>
#include <aws/workspaces-web/model/GetUserSettingsResult.h>
#include <aws/workspaces-web/model/ListBrowserSettingsResult.h>
#include <aws/workspaces-web/model/ListDataProtectionSettingsResult.h>
#include <aws/workspaces-web/model/ListIdentityProvidersResult.h>
#include <aws/workspaces-web/model/ListIpAccessSettingsResult.h>
#include <aws/workspaces-web/model/ListNetworkSettingsResult.h>
#include <aws/workspaces-web/model/ListPortalsResult.h>
#include <aws/workspaces-web/model/ListSessionLoggersResult.h>
#include <aws/workspaces-web/model/ListSessionsResult.h>
#include <aws/workspaces-web/model/ListTagsForResourceResult.h>
#include <aws/workspaces-web/model/ListTrustStoreCertificatesResult.h>
#include <aws/workspaces-web/model/ListTrustStoresResult.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsResult.h>
#include <aws/workspaces-web/model/ListUserSettingsResult.h>
#include <aws/workspaces-web/model/TagResourceResult.h>
#include <aws/workspaces-web/model/UntagResourceResult.h>
#include <aws/workspaces-web/model/UpdateBrowserSettingsResult.h>
#include <aws/workspaces-web/model/UpdateDataProtectionSettingsResult.h>
#include <aws/workspaces-web/model/UpdateIdentityProviderResult.h>
#include <aws/workspaces-web/model/UpdateIpAccessSettingsResult.h>
#include <aws/workspaces-web/model/UpdateNetworkSettingsResult.h>
#include <aws/workspaces-web/model/UpdatePortalResult.h>
#include <aws/workspaces-web/model/UpdateSessionLoggerResult.h>
#include <aws/workspaces-web/model/UpdateTrustStoreResult.h>
#include <aws/workspaces-web/model/UpdateUserAccessLoggingSettingsResult.h>
#include <aws/workspaces-web/model/UpdateUserSettingsResult.h>
#include <aws/workspaces-web/model/ListTrustStoresRequest.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/ListNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/ListSessionLoggersRequest.h>
#include <aws/workspaces-web/model/CreateDataProtectionSettingsRequest.h>
#include <aws/workspaces-web/model/CreatePortalRequest.h>
#include <aws/workspaces-web/model/ListUserSettingsRequest.h>
#include <aws/workspaces-web/model/ListBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/ListPortalsRequest.h>
#include <aws/workspaces-web/model/ListIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/ListDataProtectionSettingsRequest.h>
/* End of service model headers required in WorkSpacesWebClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace WorkSpacesWeb
  {
    using WorkSpacesWebClientConfiguration = Aws::Client::GenericClientConfiguration;
    using WorkSpacesWebEndpointProviderBase = Aws::WorkSpacesWeb::Endpoint::WorkSpacesWebEndpointProviderBase;
    using WorkSpacesWebEndpointProvider = Aws::WorkSpacesWeb::Endpoint::WorkSpacesWebEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WorkSpacesWebClient header */
      class AssociateBrowserSettingsRequest;
      class AssociateDataProtectionSettingsRequest;
      class AssociateIpAccessSettingsRequest;
      class AssociateNetworkSettingsRequest;
      class AssociateSessionLoggerRequest;
      class AssociateTrustStoreRequest;
      class AssociateUserAccessLoggingSettingsRequest;
      class AssociateUserSettingsRequest;
      class CreateBrowserSettingsRequest;
      class CreateDataProtectionSettingsRequest;
      class CreateIdentityProviderRequest;
      class CreateIpAccessSettingsRequest;
      class CreateNetworkSettingsRequest;
      class CreatePortalRequest;
      class CreateSessionLoggerRequest;
      class CreateTrustStoreRequest;
      class CreateUserAccessLoggingSettingsRequest;
      class CreateUserSettingsRequest;
      class DeleteBrowserSettingsRequest;
      class DeleteDataProtectionSettingsRequest;
      class DeleteIdentityProviderRequest;
      class DeleteIpAccessSettingsRequest;
      class DeleteNetworkSettingsRequest;
      class DeletePortalRequest;
      class DeleteSessionLoggerRequest;
      class DeleteTrustStoreRequest;
      class DeleteUserAccessLoggingSettingsRequest;
      class DeleteUserSettingsRequest;
      class DisassociateBrowserSettingsRequest;
      class DisassociateDataProtectionSettingsRequest;
      class DisassociateIpAccessSettingsRequest;
      class DisassociateNetworkSettingsRequest;
      class DisassociateSessionLoggerRequest;
      class DisassociateTrustStoreRequest;
      class DisassociateUserAccessLoggingSettingsRequest;
      class DisassociateUserSettingsRequest;
      class ExpireSessionRequest;
      class GetBrowserSettingsRequest;
      class GetDataProtectionSettingsRequest;
      class GetIdentityProviderRequest;
      class GetIpAccessSettingsRequest;
      class GetNetworkSettingsRequest;
      class GetPortalRequest;
      class GetPortalServiceProviderMetadataRequest;
      class GetSessionRequest;
      class GetSessionLoggerRequest;
      class GetTrustStoreRequest;
      class GetTrustStoreCertificateRequest;
      class GetUserAccessLoggingSettingsRequest;
      class GetUserSettingsRequest;
      class ListBrowserSettingsRequest;
      class ListDataProtectionSettingsRequest;
      class ListIdentityProvidersRequest;
      class ListIpAccessSettingsRequest;
      class ListNetworkSettingsRequest;
      class ListPortalsRequest;
      class ListSessionLoggersRequest;
      class ListSessionsRequest;
      class ListTagsForResourceRequest;
      class ListTrustStoreCertificatesRequest;
      class ListTrustStoresRequest;
      class ListUserAccessLoggingSettingsRequest;
      class ListUserSettingsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBrowserSettingsRequest;
      class UpdateDataProtectionSettingsRequest;
      class UpdateIdentityProviderRequest;
      class UpdateIpAccessSettingsRequest;
      class UpdateNetworkSettingsRequest;
      class UpdatePortalRequest;
      class UpdateSessionLoggerRequest;
      class UpdateTrustStoreRequest;
      class UpdateUserAccessLoggingSettingsRequest;
      class UpdateUserSettingsRequest;
      /* End of service model forward declarations required in WorkSpacesWebClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateBrowserSettingsResult, WorkSpacesWebError> AssociateBrowserSettingsOutcome;
      typedef Aws::Utils::Outcome<AssociateDataProtectionSettingsResult, WorkSpacesWebError> AssociateDataProtectionSettingsOutcome;
      typedef Aws::Utils::Outcome<AssociateIpAccessSettingsResult, WorkSpacesWebError> AssociateIpAccessSettingsOutcome;
      typedef Aws::Utils::Outcome<AssociateNetworkSettingsResult, WorkSpacesWebError> AssociateNetworkSettingsOutcome;
      typedef Aws::Utils::Outcome<AssociateSessionLoggerResult, WorkSpacesWebError> AssociateSessionLoggerOutcome;
      typedef Aws::Utils::Outcome<AssociateTrustStoreResult, WorkSpacesWebError> AssociateTrustStoreOutcome;
      typedef Aws::Utils::Outcome<AssociateUserAccessLoggingSettingsResult, WorkSpacesWebError> AssociateUserAccessLoggingSettingsOutcome;
      typedef Aws::Utils::Outcome<AssociateUserSettingsResult, WorkSpacesWebError> AssociateUserSettingsOutcome;
      typedef Aws::Utils::Outcome<CreateBrowserSettingsResult, WorkSpacesWebError> CreateBrowserSettingsOutcome;
      typedef Aws::Utils::Outcome<CreateDataProtectionSettingsResult, WorkSpacesWebError> CreateDataProtectionSettingsOutcome;
      typedef Aws::Utils::Outcome<CreateIdentityProviderResult, WorkSpacesWebError> CreateIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<CreateIpAccessSettingsResult, WorkSpacesWebError> CreateIpAccessSettingsOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkSettingsResult, WorkSpacesWebError> CreateNetworkSettingsOutcome;
      typedef Aws::Utils::Outcome<CreatePortalResult, WorkSpacesWebError> CreatePortalOutcome;
      typedef Aws::Utils::Outcome<CreateSessionLoggerResult, WorkSpacesWebError> CreateSessionLoggerOutcome;
      typedef Aws::Utils::Outcome<CreateTrustStoreResult, WorkSpacesWebError> CreateTrustStoreOutcome;
      typedef Aws::Utils::Outcome<CreateUserAccessLoggingSettingsResult, WorkSpacesWebError> CreateUserAccessLoggingSettingsOutcome;
      typedef Aws::Utils::Outcome<CreateUserSettingsResult, WorkSpacesWebError> CreateUserSettingsOutcome;
      typedef Aws::Utils::Outcome<DeleteBrowserSettingsResult, WorkSpacesWebError> DeleteBrowserSettingsOutcome;
      typedef Aws::Utils::Outcome<DeleteDataProtectionSettingsResult, WorkSpacesWebError> DeleteDataProtectionSettingsOutcome;
      typedef Aws::Utils::Outcome<DeleteIdentityProviderResult, WorkSpacesWebError> DeleteIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<DeleteIpAccessSettingsResult, WorkSpacesWebError> DeleteIpAccessSettingsOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkSettingsResult, WorkSpacesWebError> DeleteNetworkSettingsOutcome;
      typedef Aws::Utils::Outcome<DeletePortalResult, WorkSpacesWebError> DeletePortalOutcome;
      typedef Aws::Utils::Outcome<DeleteSessionLoggerResult, WorkSpacesWebError> DeleteSessionLoggerOutcome;
      typedef Aws::Utils::Outcome<DeleteTrustStoreResult, WorkSpacesWebError> DeleteTrustStoreOutcome;
      typedef Aws::Utils::Outcome<DeleteUserAccessLoggingSettingsResult, WorkSpacesWebError> DeleteUserAccessLoggingSettingsOutcome;
      typedef Aws::Utils::Outcome<DeleteUserSettingsResult, WorkSpacesWebError> DeleteUserSettingsOutcome;
      typedef Aws::Utils::Outcome<DisassociateBrowserSettingsResult, WorkSpacesWebError> DisassociateBrowserSettingsOutcome;
      typedef Aws::Utils::Outcome<DisassociateDataProtectionSettingsResult, WorkSpacesWebError> DisassociateDataProtectionSettingsOutcome;
      typedef Aws::Utils::Outcome<DisassociateIpAccessSettingsResult, WorkSpacesWebError> DisassociateIpAccessSettingsOutcome;
      typedef Aws::Utils::Outcome<DisassociateNetworkSettingsResult, WorkSpacesWebError> DisassociateNetworkSettingsOutcome;
      typedef Aws::Utils::Outcome<DisassociateSessionLoggerResult, WorkSpacesWebError> DisassociateSessionLoggerOutcome;
      typedef Aws::Utils::Outcome<DisassociateTrustStoreResult, WorkSpacesWebError> DisassociateTrustStoreOutcome;
      typedef Aws::Utils::Outcome<DisassociateUserAccessLoggingSettingsResult, WorkSpacesWebError> DisassociateUserAccessLoggingSettingsOutcome;
      typedef Aws::Utils::Outcome<DisassociateUserSettingsResult, WorkSpacesWebError> DisassociateUserSettingsOutcome;
      typedef Aws::Utils::Outcome<ExpireSessionResult, WorkSpacesWebError> ExpireSessionOutcome;
      typedef Aws::Utils::Outcome<GetBrowserSettingsResult, WorkSpacesWebError> GetBrowserSettingsOutcome;
      typedef Aws::Utils::Outcome<GetDataProtectionSettingsResult, WorkSpacesWebError> GetDataProtectionSettingsOutcome;
      typedef Aws::Utils::Outcome<GetIdentityProviderResult, WorkSpacesWebError> GetIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<GetIpAccessSettingsResult, WorkSpacesWebError> GetIpAccessSettingsOutcome;
      typedef Aws::Utils::Outcome<GetNetworkSettingsResult, WorkSpacesWebError> GetNetworkSettingsOutcome;
      typedef Aws::Utils::Outcome<GetPortalResult, WorkSpacesWebError> GetPortalOutcome;
      typedef Aws::Utils::Outcome<GetPortalServiceProviderMetadataResult, WorkSpacesWebError> GetPortalServiceProviderMetadataOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, WorkSpacesWebError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<GetSessionLoggerResult, WorkSpacesWebError> GetSessionLoggerOutcome;
      typedef Aws::Utils::Outcome<GetTrustStoreResult, WorkSpacesWebError> GetTrustStoreOutcome;
      typedef Aws::Utils::Outcome<GetTrustStoreCertificateResult, WorkSpacesWebError> GetTrustStoreCertificateOutcome;
      typedef Aws::Utils::Outcome<GetUserAccessLoggingSettingsResult, WorkSpacesWebError> GetUserAccessLoggingSettingsOutcome;
      typedef Aws::Utils::Outcome<GetUserSettingsResult, WorkSpacesWebError> GetUserSettingsOutcome;
      typedef Aws::Utils::Outcome<ListBrowserSettingsResult, WorkSpacesWebError> ListBrowserSettingsOutcome;
      typedef Aws::Utils::Outcome<ListDataProtectionSettingsResult, WorkSpacesWebError> ListDataProtectionSettingsOutcome;
      typedef Aws::Utils::Outcome<ListIdentityProvidersResult, WorkSpacesWebError> ListIdentityProvidersOutcome;
      typedef Aws::Utils::Outcome<ListIpAccessSettingsResult, WorkSpacesWebError> ListIpAccessSettingsOutcome;
      typedef Aws::Utils::Outcome<ListNetworkSettingsResult, WorkSpacesWebError> ListNetworkSettingsOutcome;
      typedef Aws::Utils::Outcome<ListPortalsResult, WorkSpacesWebError> ListPortalsOutcome;
      typedef Aws::Utils::Outcome<ListSessionLoggersResult, WorkSpacesWebError> ListSessionLoggersOutcome;
      typedef Aws::Utils::Outcome<ListSessionsResult, WorkSpacesWebError> ListSessionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, WorkSpacesWebError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTrustStoreCertificatesResult, WorkSpacesWebError> ListTrustStoreCertificatesOutcome;
      typedef Aws::Utils::Outcome<ListTrustStoresResult, WorkSpacesWebError> ListTrustStoresOutcome;
      typedef Aws::Utils::Outcome<ListUserAccessLoggingSettingsResult, WorkSpacesWebError> ListUserAccessLoggingSettingsOutcome;
      typedef Aws::Utils::Outcome<ListUserSettingsResult, WorkSpacesWebError> ListUserSettingsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, WorkSpacesWebError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, WorkSpacesWebError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBrowserSettingsResult, WorkSpacesWebError> UpdateBrowserSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateDataProtectionSettingsResult, WorkSpacesWebError> UpdateDataProtectionSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateIdentityProviderResult, WorkSpacesWebError> UpdateIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<UpdateIpAccessSettingsResult, WorkSpacesWebError> UpdateIpAccessSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateNetworkSettingsResult, WorkSpacesWebError> UpdateNetworkSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdatePortalResult, WorkSpacesWebError> UpdatePortalOutcome;
      typedef Aws::Utils::Outcome<UpdateSessionLoggerResult, WorkSpacesWebError> UpdateSessionLoggerOutcome;
      typedef Aws::Utils::Outcome<UpdateTrustStoreResult, WorkSpacesWebError> UpdateTrustStoreOutcome;
      typedef Aws::Utils::Outcome<UpdateUserAccessLoggingSettingsResult, WorkSpacesWebError> UpdateUserAccessLoggingSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateUserSettingsResult, WorkSpacesWebError> UpdateUserSettingsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateBrowserSettingsOutcome> AssociateBrowserSettingsOutcomeCallable;
      typedef std::future<AssociateDataProtectionSettingsOutcome> AssociateDataProtectionSettingsOutcomeCallable;
      typedef std::future<AssociateIpAccessSettingsOutcome> AssociateIpAccessSettingsOutcomeCallable;
      typedef std::future<AssociateNetworkSettingsOutcome> AssociateNetworkSettingsOutcomeCallable;
      typedef std::future<AssociateSessionLoggerOutcome> AssociateSessionLoggerOutcomeCallable;
      typedef std::future<AssociateTrustStoreOutcome> AssociateTrustStoreOutcomeCallable;
      typedef std::future<AssociateUserAccessLoggingSettingsOutcome> AssociateUserAccessLoggingSettingsOutcomeCallable;
      typedef std::future<AssociateUserSettingsOutcome> AssociateUserSettingsOutcomeCallable;
      typedef std::future<CreateBrowserSettingsOutcome> CreateBrowserSettingsOutcomeCallable;
      typedef std::future<CreateDataProtectionSettingsOutcome> CreateDataProtectionSettingsOutcomeCallable;
      typedef std::future<CreateIdentityProviderOutcome> CreateIdentityProviderOutcomeCallable;
      typedef std::future<CreateIpAccessSettingsOutcome> CreateIpAccessSettingsOutcomeCallable;
      typedef std::future<CreateNetworkSettingsOutcome> CreateNetworkSettingsOutcomeCallable;
      typedef std::future<CreatePortalOutcome> CreatePortalOutcomeCallable;
      typedef std::future<CreateSessionLoggerOutcome> CreateSessionLoggerOutcomeCallable;
      typedef std::future<CreateTrustStoreOutcome> CreateTrustStoreOutcomeCallable;
      typedef std::future<CreateUserAccessLoggingSettingsOutcome> CreateUserAccessLoggingSettingsOutcomeCallable;
      typedef std::future<CreateUserSettingsOutcome> CreateUserSettingsOutcomeCallable;
      typedef std::future<DeleteBrowserSettingsOutcome> DeleteBrowserSettingsOutcomeCallable;
      typedef std::future<DeleteDataProtectionSettingsOutcome> DeleteDataProtectionSettingsOutcomeCallable;
      typedef std::future<DeleteIdentityProviderOutcome> DeleteIdentityProviderOutcomeCallable;
      typedef std::future<DeleteIpAccessSettingsOutcome> DeleteIpAccessSettingsOutcomeCallable;
      typedef std::future<DeleteNetworkSettingsOutcome> DeleteNetworkSettingsOutcomeCallable;
      typedef std::future<DeletePortalOutcome> DeletePortalOutcomeCallable;
      typedef std::future<DeleteSessionLoggerOutcome> DeleteSessionLoggerOutcomeCallable;
      typedef std::future<DeleteTrustStoreOutcome> DeleteTrustStoreOutcomeCallable;
      typedef std::future<DeleteUserAccessLoggingSettingsOutcome> DeleteUserAccessLoggingSettingsOutcomeCallable;
      typedef std::future<DeleteUserSettingsOutcome> DeleteUserSettingsOutcomeCallable;
      typedef std::future<DisassociateBrowserSettingsOutcome> DisassociateBrowserSettingsOutcomeCallable;
      typedef std::future<DisassociateDataProtectionSettingsOutcome> DisassociateDataProtectionSettingsOutcomeCallable;
      typedef std::future<DisassociateIpAccessSettingsOutcome> DisassociateIpAccessSettingsOutcomeCallable;
      typedef std::future<DisassociateNetworkSettingsOutcome> DisassociateNetworkSettingsOutcomeCallable;
      typedef std::future<DisassociateSessionLoggerOutcome> DisassociateSessionLoggerOutcomeCallable;
      typedef std::future<DisassociateTrustStoreOutcome> DisassociateTrustStoreOutcomeCallable;
      typedef std::future<DisassociateUserAccessLoggingSettingsOutcome> DisassociateUserAccessLoggingSettingsOutcomeCallable;
      typedef std::future<DisassociateUserSettingsOutcome> DisassociateUserSettingsOutcomeCallable;
      typedef std::future<ExpireSessionOutcome> ExpireSessionOutcomeCallable;
      typedef std::future<GetBrowserSettingsOutcome> GetBrowserSettingsOutcomeCallable;
      typedef std::future<GetDataProtectionSettingsOutcome> GetDataProtectionSettingsOutcomeCallable;
      typedef std::future<GetIdentityProviderOutcome> GetIdentityProviderOutcomeCallable;
      typedef std::future<GetIpAccessSettingsOutcome> GetIpAccessSettingsOutcomeCallable;
      typedef std::future<GetNetworkSettingsOutcome> GetNetworkSettingsOutcomeCallable;
      typedef std::future<GetPortalOutcome> GetPortalOutcomeCallable;
      typedef std::future<GetPortalServiceProviderMetadataOutcome> GetPortalServiceProviderMetadataOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<GetSessionLoggerOutcome> GetSessionLoggerOutcomeCallable;
      typedef std::future<GetTrustStoreOutcome> GetTrustStoreOutcomeCallable;
      typedef std::future<GetTrustStoreCertificateOutcome> GetTrustStoreCertificateOutcomeCallable;
      typedef std::future<GetUserAccessLoggingSettingsOutcome> GetUserAccessLoggingSettingsOutcomeCallable;
      typedef std::future<GetUserSettingsOutcome> GetUserSettingsOutcomeCallable;
      typedef std::future<ListBrowserSettingsOutcome> ListBrowserSettingsOutcomeCallable;
      typedef std::future<ListDataProtectionSettingsOutcome> ListDataProtectionSettingsOutcomeCallable;
      typedef std::future<ListIdentityProvidersOutcome> ListIdentityProvidersOutcomeCallable;
      typedef std::future<ListIpAccessSettingsOutcome> ListIpAccessSettingsOutcomeCallable;
      typedef std::future<ListNetworkSettingsOutcome> ListNetworkSettingsOutcomeCallable;
      typedef std::future<ListPortalsOutcome> ListPortalsOutcomeCallable;
      typedef std::future<ListSessionLoggersOutcome> ListSessionLoggersOutcomeCallable;
      typedef std::future<ListSessionsOutcome> ListSessionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTrustStoreCertificatesOutcome> ListTrustStoreCertificatesOutcomeCallable;
      typedef std::future<ListTrustStoresOutcome> ListTrustStoresOutcomeCallable;
      typedef std::future<ListUserAccessLoggingSettingsOutcome> ListUserAccessLoggingSettingsOutcomeCallable;
      typedef std::future<ListUserSettingsOutcome> ListUserSettingsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBrowserSettingsOutcome> UpdateBrowserSettingsOutcomeCallable;
      typedef std::future<UpdateDataProtectionSettingsOutcome> UpdateDataProtectionSettingsOutcomeCallable;
      typedef std::future<UpdateIdentityProviderOutcome> UpdateIdentityProviderOutcomeCallable;
      typedef std::future<UpdateIpAccessSettingsOutcome> UpdateIpAccessSettingsOutcomeCallable;
      typedef std::future<UpdateNetworkSettingsOutcome> UpdateNetworkSettingsOutcomeCallable;
      typedef std::future<UpdatePortalOutcome> UpdatePortalOutcomeCallable;
      typedef std::future<UpdateSessionLoggerOutcome> UpdateSessionLoggerOutcomeCallable;
      typedef std::future<UpdateTrustStoreOutcome> UpdateTrustStoreOutcomeCallable;
      typedef std::future<UpdateUserAccessLoggingSettingsOutcome> UpdateUserAccessLoggingSettingsOutcomeCallable;
      typedef std::future<UpdateUserSettingsOutcome> UpdateUserSettingsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WorkSpacesWebClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateBrowserSettingsRequest&, const Model::AssociateBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateDataProtectionSettingsRequest&, const Model::AssociateDataProtectionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDataProtectionSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateIpAccessSettingsRequest&, const Model::AssociateIpAccessSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateIpAccessSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateNetworkSettingsRequest&, const Model::AssociateNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateSessionLoggerRequest&, const Model::AssociateSessionLoggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSessionLoggerResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateTrustStoreRequest&, const Model::AssociateTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateUserAccessLoggingSettingsRequest&, const Model::AssociateUserAccessLoggingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateUserAccessLoggingSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::AssociateUserSettingsRequest&, const Model::AssociateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateBrowserSettingsRequest&, const Model::CreateBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateDataProtectionSettingsRequest&, const Model::CreateDataProtectionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataProtectionSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateIdentityProviderRequest&, const Model::CreateIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateIpAccessSettingsRequest&, const Model::CreateIpAccessSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIpAccessSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateNetworkSettingsRequest&, const Model::CreateNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreatePortalRequest&, const Model::CreatePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortalResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateSessionLoggerRequest&, const Model::CreateSessionLoggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSessionLoggerResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateTrustStoreRequest&, const Model::CreateTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateUserAccessLoggingSettingsRequest&, const Model::CreateUserAccessLoggingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserAccessLoggingSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::CreateUserSettingsRequest&, const Model::CreateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteBrowserSettingsRequest&, const Model::DeleteBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteDataProtectionSettingsRequest&, const Model::DeleteDataProtectionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataProtectionSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteIdentityProviderRequest&, const Model::DeleteIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteIpAccessSettingsRequest&, const Model::DeleteIpAccessSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIpAccessSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteNetworkSettingsRequest&, const Model::DeleteNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeletePortalRequest&, const Model::DeletePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortalResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteSessionLoggerRequest&, const Model::DeleteSessionLoggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSessionLoggerResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteTrustStoreRequest&, const Model::DeleteTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteUserAccessLoggingSettingsRequest&, const Model::DeleteUserAccessLoggingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserAccessLoggingSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DeleteUserSettingsRequest&, const Model::DeleteUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateBrowserSettingsRequest&, const Model::DisassociateBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateDataProtectionSettingsRequest&, const Model::DisassociateDataProtectionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDataProtectionSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateIpAccessSettingsRequest&, const Model::DisassociateIpAccessSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateIpAccessSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateNetworkSettingsRequest&, const Model::DisassociateNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateSessionLoggerRequest&, const Model::DisassociateSessionLoggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSessionLoggerResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateTrustStoreRequest&, const Model::DisassociateTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateUserAccessLoggingSettingsRequest&, const Model::DisassociateUserAccessLoggingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateUserAccessLoggingSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::DisassociateUserSettingsRequest&, const Model::DisassociateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ExpireSessionRequest&, const Model::ExpireSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExpireSessionResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetBrowserSettingsRequest&, const Model::GetBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetDataProtectionSettingsRequest&, const Model::GetDataProtectionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataProtectionSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetIdentityProviderRequest&, const Model::GetIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetIpAccessSettingsRequest&, const Model::GetIpAccessSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIpAccessSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetNetworkSettingsRequest&, const Model::GetNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetPortalRequest&, const Model::GetPortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPortalResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetPortalServiceProviderMetadataRequest&, const Model::GetPortalServiceProviderMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPortalServiceProviderMetadataResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetSessionLoggerRequest&, const Model::GetSessionLoggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionLoggerResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetTrustStoreRequest&, const Model::GetTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetTrustStoreCertificateRequest&, const Model::GetTrustStoreCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrustStoreCertificateResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetUserAccessLoggingSettingsRequest&, const Model::GetUserAccessLoggingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserAccessLoggingSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::GetUserSettingsRequest&, const Model::GetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListBrowserSettingsRequest&, const Model::ListBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListDataProtectionSettingsRequest&, const Model::ListDataProtectionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataProtectionSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListIdentityProvidersRequest&, const Model::ListIdentityProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityProvidersResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListIpAccessSettingsRequest&, const Model::ListIpAccessSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIpAccessSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListNetworkSettingsRequest&, const Model::ListNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListPortalsRequest&, const Model::ListPortalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortalsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListSessionLoggersRequest&, const Model::ListSessionLoggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionLoggersResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListSessionsRequest&, const Model::ListSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListTrustStoreCertificatesRequest&, const Model::ListTrustStoreCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrustStoreCertificatesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListTrustStoresRequest&, const Model::ListTrustStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrustStoresResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListUserAccessLoggingSettingsRequest&, const Model::ListUserAccessLoggingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserAccessLoggingSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::ListUserSettingsRequest&, const Model::ListUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateBrowserSettingsRequest&, const Model::UpdateBrowserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBrowserSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateDataProtectionSettingsRequest&, const Model::UpdateDataProtectionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataProtectionSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateIdentityProviderRequest&, const Model::UpdateIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateIpAccessSettingsRequest&, const Model::UpdateIpAccessSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIpAccessSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateNetworkSettingsRequest&, const Model::UpdateNetworkSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdatePortalRequest&, const Model::UpdatePortalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePortalResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateSessionLoggerRequest&, const Model::UpdateSessionLoggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSessionLoggerResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateTrustStoreRequest&, const Model::UpdateTrustStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrustStoreResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateUserAccessLoggingSettingsRequest&, const Model::UpdateUserAccessLoggingSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserAccessLoggingSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesWebClient*, const Model::UpdateUserSettingsRequest&, const Model::UpdateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSettingsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WorkSpacesWeb
} // namespace Aws
