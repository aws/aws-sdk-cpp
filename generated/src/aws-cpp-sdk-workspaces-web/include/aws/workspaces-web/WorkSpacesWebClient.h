/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/WorkSpacesWebServiceClientModel.h>

namespace Aws
{
namespace WorkSpacesWeb
{
  /**
   * <p>WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to
   * facilitate secure, web-based workloads. WorkSpaces Web makes it easy for
   * customers to safely provide their employees with access to internal websites and
   * SaaS web applications without the administrative burden of appliances or
   * specialized client software. WorkSpaces Web provides simple policy tools
   * tailored for user interactions, while offloading common tasks like capacity
   * management, scaling, and maintaining browser images.</p>
   */
  class AWS_WORKSPACESWEB_API WorkSpacesWebClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WorkSpacesWebClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef WorkSpacesWebClientConfiguration ClientConfigurationType;
      typedef WorkSpacesWebEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration = Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration(),
                            std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration = Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration = Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesWebClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesWebClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkSpacesWebClient();

        /**
         * <p>Associates a browser settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBrowserSettingsOutcome AssociateBrowserSettings(const Model::AssociateBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateBrowserSettingsRequestT = Model::AssociateBrowserSettingsRequest>
        Model::AssociateBrowserSettingsOutcomeCallable AssociateBrowserSettingsCallable(const AssociateBrowserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::AssociateBrowserSettings, request);
        }

        /**
         * An Async wrapper for AssociateBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateBrowserSettingsRequestT = Model::AssociateBrowserSettingsRequest>
        void AssociateBrowserSettingsAsync(const AssociateBrowserSettingsRequestT& request, const AssociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::AssociateBrowserSettings, request, handler, context);
        }

        /**
         * <p>Associates an IP access settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateIpAccessSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateIpAccessSettingsOutcome AssociateIpAccessSettings(const Model::AssociateIpAccessSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateIpAccessSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateIpAccessSettingsRequestT = Model::AssociateIpAccessSettingsRequest>
        Model::AssociateIpAccessSettingsOutcomeCallable AssociateIpAccessSettingsCallable(const AssociateIpAccessSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::AssociateIpAccessSettings, request);
        }

        /**
         * An Async wrapper for AssociateIpAccessSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateIpAccessSettingsRequestT = Model::AssociateIpAccessSettingsRequest>
        void AssociateIpAccessSettingsAsync(const AssociateIpAccessSettingsRequestT& request, const AssociateIpAccessSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::AssociateIpAccessSettings, request, handler, context);
        }

        /**
         * <p>Associates a network settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateNetworkSettingsOutcome AssociateNetworkSettings(const Model::AssociateNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateNetworkSettingsRequestT = Model::AssociateNetworkSettingsRequest>
        Model::AssociateNetworkSettingsOutcomeCallable AssociateNetworkSettingsCallable(const AssociateNetworkSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::AssociateNetworkSettings, request);
        }

        /**
         * An Async wrapper for AssociateNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateNetworkSettingsRequestT = Model::AssociateNetworkSettingsRequest>
        void AssociateNetworkSettingsAsync(const AssociateNetworkSettingsRequestT& request, const AssociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::AssociateNetworkSettings, request, handler, context);
        }

        /**
         * <p>Associates a trust store with a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrustStoreOutcome AssociateTrustStore(const Model::AssociateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for AssociateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateTrustStoreRequestT = Model::AssociateTrustStoreRequest>
        Model::AssociateTrustStoreOutcomeCallable AssociateTrustStoreCallable(const AssociateTrustStoreRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::AssociateTrustStore, request);
        }

        /**
         * An Async wrapper for AssociateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateTrustStoreRequestT = Model::AssociateTrustStoreRequest>
        void AssociateTrustStoreAsync(const AssociateTrustStoreRequestT& request, const AssociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::AssociateTrustStore, request, handler, context);
        }

        /**
         * <p>Associates a user access logging settings resource with a web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserAccessLoggingSettingsOutcome AssociateUserAccessLoggingSettings(const Model::AssociateUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateUserAccessLoggingSettingsRequestT = Model::AssociateUserAccessLoggingSettingsRequest>
        Model::AssociateUserAccessLoggingSettingsOutcomeCallable AssociateUserAccessLoggingSettingsCallable(const AssociateUserAccessLoggingSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::AssociateUserAccessLoggingSettings, request);
        }

        /**
         * An Async wrapper for AssociateUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateUserAccessLoggingSettingsRequestT = Model::AssociateUserAccessLoggingSettingsRequest>
        void AssociateUserAccessLoggingSettingsAsync(const AssociateUserAccessLoggingSettingsRequestT& request, const AssociateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::AssociateUserAccessLoggingSettings, request, handler, context);
        }

        /**
         * <p>Associates a user settings resource with a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/AssociateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserSettingsOutcome AssociateUserSettings(const Model::AssociateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for AssociateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateUserSettingsRequestT = Model::AssociateUserSettingsRequest>
        Model::AssociateUserSettingsOutcomeCallable AssociateUserSettingsCallable(const AssociateUserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::AssociateUserSettings, request);
        }

        /**
         * An Async wrapper for AssociateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateUserSettingsRequestT = Model::AssociateUserSettingsRequest>
        void AssociateUserSettingsAsync(const AssociateUserSettingsRequestT& request, const AssociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::AssociateUserSettings, request, handler, context);
        }

        /**
         * <p>Creates a browser settings resource that can be associated with a web portal.
         * Once associated with a web portal, browser settings control how the browser will
         * behave once a user starts a streaming session for the web portal. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBrowserSettingsOutcome CreateBrowserSettings(const Model::CreateBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBrowserSettingsRequestT = Model::CreateBrowserSettingsRequest>
        Model::CreateBrowserSettingsOutcomeCallable CreateBrowserSettingsCallable(const CreateBrowserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::CreateBrowserSettings, request);
        }

        /**
         * An Async wrapper for CreateBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBrowserSettingsRequestT = Model::CreateBrowserSettingsRequest>
        void CreateBrowserSettingsAsync(const CreateBrowserSettingsRequestT& request, const CreateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::CreateBrowserSettings, request, handler, context);
        }

        /**
         * <p>Creates an identity provider resource that is then associated with a web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentityProviderOutcome CreateIdentityProvider(const Model::CreateIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIdentityProviderRequestT = Model::CreateIdentityProviderRequest>
        Model::CreateIdentityProviderOutcomeCallable CreateIdentityProviderCallable(const CreateIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::CreateIdentityProvider, request);
        }

        /**
         * An Async wrapper for CreateIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIdentityProviderRequestT = Model::CreateIdentityProviderRequest>
        void CreateIdentityProviderAsync(const CreateIdentityProviderRequestT& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::CreateIdentityProvider, request, handler, context);
        }

        /**
         * <p>Creates an IP access settings resource that can be associated with a web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateIpAccessSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIpAccessSettingsOutcome CreateIpAccessSettings(const Model::CreateIpAccessSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateIpAccessSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIpAccessSettingsRequestT = Model::CreateIpAccessSettingsRequest>
        Model::CreateIpAccessSettingsOutcomeCallable CreateIpAccessSettingsCallable(const CreateIpAccessSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::CreateIpAccessSettings, request);
        }

        /**
         * An Async wrapper for CreateIpAccessSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIpAccessSettingsRequestT = Model::CreateIpAccessSettingsRequest>
        void CreateIpAccessSettingsAsync(const CreateIpAccessSettingsRequestT& request, const CreateIpAccessSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::CreateIpAccessSettings, request, handler, context);
        }

        /**
         * <p>Creates a network settings resource that can be associated with a web portal.
         * Once associated with a web portal, network settings define how streaming
         * instances will connect with your specified VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkSettingsOutcome CreateNetworkSettings(const Model::CreateNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNetworkSettingsRequestT = Model::CreateNetworkSettingsRequest>
        Model::CreateNetworkSettingsOutcomeCallable CreateNetworkSettingsCallable(const CreateNetworkSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::CreateNetworkSettings, request);
        }

        /**
         * An Async wrapper for CreateNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNetworkSettingsRequestT = Model::CreateNetworkSettingsRequest>
        void CreateNetworkSettingsAsync(const CreateNetworkSettingsRequestT& request, const CreateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::CreateNetworkSettings, request, handler, context);
        }

        /**
         * <p>Creates a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortalOutcome CreatePortal(const Model::CreatePortalRequest& request) const;

        /**
         * A Callable wrapper for CreatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePortalRequestT = Model::CreatePortalRequest>
        Model::CreatePortalOutcomeCallable CreatePortalCallable(const CreatePortalRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::CreatePortal, request);
        }

        /**
         * An Async wrapper for CreatePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePortalRequestT = Model::CreatePortalRequest>
        void CreatePortalAsync(const CreatePortalRequestT& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::CreatePortal, request, handler, context);
        }

        /**
         * <p>Creates a trust store that can be associated with a web portal. A trust store
         * contains certificate authority (CA) certificates. Once associated with a web
         * portal, the browser in a streaming session will recognize certificates that have
         * been issued using any of the CAs in the trust store. If your organization has
         * internal websites that use certificates issued by private CAs, you should add
         * the private CA certificate to the trust store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrustStoreOutcome CreateTrustStore(const Model::CreateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrustStoreRequestT = Model::CreateTrustStoreRequest>
        Model::CreateTrustStoreOutcomeCallable CreateTrustStoreCallable(const CreateTrustStoreRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::CreateTrustStore, request);
        }

        /**
         * An Async wrapper for CreateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrustStoreRequestT = Model::CreateTrustStoreRequest>
        void CreateTrustStoreAsync(const CreateTrustStoreRequestT& request, const CreateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::CreateTrustStore, request, handler, context);
        }

        /**
         * <p>Creates a user access logging settings resource that can be associated with a
         * web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserAccessLoggingSettingsOutcome CreateUserAccessLoggingSettings(const Model::CreateUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserAccessLoggingSettingsRequestT = Model::CreateUserAccessLoggingSettingsRequest>
        Model::CreateUserAccessLoggingSettingsOutcomeCallable CreateUserAccessLoggingSettingsCallable(const CreateUserAccessLoggingSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::CreateUserAccessLoggingSettings, request);
        }

        /**
         * An Async wrapper for CreateUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserAccessLoggingSettingsRequestT = Model::CreateUserAccessLoggingSettingsRequest>
        void CreateUserAccessLoggingSettingsAsync(const CreateUserAccessLoggingSettingsRequestT& request, const CreateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::CreateUserAccessLoggingSettings, request, handler, context);
        }

        /**
         * <p>Creates a user settings resource that can be associated with a web portal.
         * Once associated with a web portal, user settings control how users can transfer
         * data between a streaming session and the their local devices. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CreateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserSettingsOutcome CreateUserSettings(const Model::CreateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for CreateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserSettingsRequestT = Model::CreateUserSettingsRequest>
        Model::CreateUserSettingsOutcomeCallable CreateUserSettingsCallable(const CreateUserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::CreateUserSettings, request);
        }

        /**
         * An Async wrapper for CreateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserSettingsRequestT = Model::CreateUserSettingsRequest>
        void CreateUserSettingsAsync(const CreateUserSettingsRequestT& request, const CreateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::CreateUserSettings, request, handler, context);
        }

        /**
         * <p>Deletes browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBrowserSettingsOutcome DeleteBrowserSettings(const Model::DeleteBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBrowserSettingsRequestT = Model::DeleteBrowserSettingsRequest>
        Model::DeleteBrowserSettingsOutcomeCallable DeleteBrowserSettingsCallable(const DeleteBrowserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DeleteBrowserSettings, request);
        }

        /**
         * An Async wrapper for DeleteBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBrowserSettingsRequestT = Model::DeleteBrowserSettingsRequest>
        void DeleteBrowserSettingsAsync(const DeleteBrowserSettingsRequestT& request, const DeleteBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DeleteBrowserSettings, request, handler, context);
        }

        /**
         * <p>Deletes the identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityProviderOutcome DeleteIdentityProvider(const Model::DeleteIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIdentityProviderRequestT = Model::DeleteIdentityProviderRequest>
        Model::DeleteIdentityProviderOutcomeCallable DeleteIdentityProviderCallable(const DeleteIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DeleteIdentityProvider, request);
        }

        /**
         * An Async wrapper for DeleteIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIdentityProviderRequestT = Model::DeleteIdentityProviderRequest>
        void DeleteIdentityProviderAsync(const DeleteIdentityProviderRequestT& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DeleteIdentityProvider, request, handler, context);
        }

        /**
         * <p>Deletes IP access settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteIpAccessSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIpAccessSettingsOutcome DeleteIpAccessSettings(const Model::DeleteIpAccessSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteIpAccessSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIpAccessSettingsRequestT = Model::DeleteIpAccessSettingsRequest>
        Model::DeleteIpAccessSettingsOutcomeCallable DeleteIpAccessSettingsCallable(const DeleteIpAccessSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DeleteIpAccessSettings, request);
        }

        /**
         * An Async wrapper for DeleteIpAccessSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIpAccessSettingsRequestT = Model::DeleteIpAccessSettingsRequest>
        void DeleteIpAccessSettingsAsync(const DeleteIpAccessSettingsRequestT& request, const DeleteIpAccessSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DeleteIpAccessSettings, request, handler, context);
        }

        /**
         * <p>Deletes network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkSettingsOutcome DeleteNetworkSettings(const Model::DeleteNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNetworkSettingsRequestT = Model::DeleteNetworkSettingsRequest>
        Model::DeleteNetworkSettingsOutcomeCallable DeleteNetworkSettingsCallable(const DeleteNetworkSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DeleteNetworkSettings, request);
        }

        /**
         * An Async wrapper for DeleteNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNetworkSettingsRequestT = Model::DeleteNetworkSettingsRequest>
        void DeleteNetworkSettingsAsync(const DeleteNetworkSettingsRequestT& request, const DeleteNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DeleteNetworkSettings, request, handler, context);
        }

        /**
         * <p>Deletes a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeletePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortalOutcome DeletePortal(const Model::DeletePortalRequest& request) const;

        /**
         * A Callable wrapper for DeletePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePortalRequestT = Model::DeletePortalRequest>
        Model::DeletePortalOutcomeCallable DeletePortalCallable(const DeletePortalRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DeletePortal, request);
        }

        /**
         * An Async wrapper for DeletePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePortalRequestT = Model::DeletePortalRequest>
        void DeletePortalAsync(const DeletePortalRequestT& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DeletePortal, request, handler, context);
        }

        /**
         * <p>Deletes the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrustStoreOutcome DeleteTrustStore(const Model::DeleteTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrustStoreRequestT = Model::DeleteTrustStoreRequest>
        Model::DeleteTrustStoreOutcomeCallable DeleteTrustStoreCallable(const DeleteTrustStoreRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DeleteTrustStore, request);
        }

        /**
         * An Async wrapper for DeleteTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrustStoreRequestT = Model::DeleteTrustStoreRequest>
        void DeleteTrustStoreAsync(const DeleteTrustStoreRequestT& request, const DeleteTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DeleteTrustStore, request, handler, context);
        }

        /**
         * <p>Deletes user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserAccessLoggingSettingsOutcome DeleteUserAccessLoggingSettings(const Model::DeleteUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserAccessLoggingSettingsRequestT = Model::DeleteUserAccessLoggingSettingsRequest>
        Model::DeleteUserAccessLoggingSettingsOutcomeCallable DeleteUserAccessLoggingSettingsCallable(const DeleteUserAccessLoggingSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DeleteUserAccessLoggingSettings, request);
        }

        /**
         * An Async wrapper for DeleteUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserAccessLoggingSettingsRequestT = Model::DeleteUserAccessLoggingSettingsRequest>
        void DeleteUserAccessLoggingSettingsAsync(const DeleteUserAccessLoggingSettingsRequestT& request, const DeleteUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DeleteUserAccessLoggingSettings, request, handler, context);
        }

        /**
         * <p>Deletes user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DeleteUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserSettingsOutcome DeleteUserSettings(const Model::DeleteUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserSettingsRequestT = Model::DeleteUserSettingsRequest>
        Model::DeleteUserSettingsOutcomeCallable DeleteUserSettingsCallable(const DeleteUserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DeleteUserSettings, request);
        }

        /**
         * An Async wrapper for DeleteUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserSettingsRequestT = Model::DeleteUserSettingsRequest>
        void DeleteUserSettingsAsync(const DeleteUserSettingsRequestT& request, const DeleteUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DeleteUserSettings, request, handler, context);
        }

        /**
         * <p>Disassociates browser settings from a web portal.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBrowserSettingsOutcome DisassociateBrowserSettings(const Model::DisassociateBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateBrowserSettingsRequestT = Model::DisassociateBrowserSettingsRequest>
        Model::DisassociateBrowserSettingsOutcomeCallable DisassociateBrowserSettingsCallable(const DisassociateBrowserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DisassociateBrowserSettings, request);
        }

        /**
         * An Async wrapper for DisassociateBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateBrowserSettingsRequestT = Model::DisassociateBrowserSettingsRequest>
        void DisassociateBrowserSettingsAsync(const DisassociateBrowserSettingsRequestT& request, const DisassociateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DisassociateBrowserSettings, request, handler, context);
        }

        /**
         * <p>Disassociates IP access settings from a web portal.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateIpAccessSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateIpAccessSettingsOutcome DisassociateIpAccessSettings(const Model::DisassociateIpAccessSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateIpAccessSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateIpAccessSettingsRequestT = Model::DisassociateIpAccessSettingsRequest>
        Model::DisassociateIpAccessSettingsOutcomeCallable DisassociateIpAccessSettingsCallable(const DisassociateIpAccessSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DisassociateIpAccessSettings, request);
        }

        /**
         * An Async wrapper for DisassociateIpAccessSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateIpAccessSettingsRequestT = Model::DisassociateIpAccessSettingsRequest>
        void DisassociateIpAccessSettingsAsync(const DisassociateIpAccessSettingsRequestT& request, const DisassociateIpAccessSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DisassociateIpAccessSettings, request, handler, context);
        }

        /**
         * <p>Disassociates network settings from a web portal.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateNetworkSettingsOutcome DisassociateNetworkSettings(const Model::DisassociateNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateNetworkSettingsRequestT = Model::DisassociateNetworkSettingsRequest>
        Model::DisassociateNetworkSettingsOutcomeCallable DisassociateNetworkSettingsCallable(const DisassociateNetworkSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DisassociateNetworkSettings, request);
        }

        /**
         * An Async wrapper for DisassociateNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateNetworkSettingsRequestT = Model::DisassociateNetworkSettingsRequest>
        void DisassociateNetworkSettingsAsync(const DisassociateNetworkSettingsRequestT& request, const DisassociateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DisassociateNetworkSettings, request, handler, context);
        }

        /**
         * <p>Disassociates a trust store from a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrustStoreOutcome DisassociateTrustStore(const Model::DisassociateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateTrustStoreRequestT = Model::DisassociateTrustStoreRequest>
        Model::DisassociateTrustStoreOutcomeCallable DisassociateTrustStoreCallable(const DisassociateTrustStoreRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DisassociateTrustStore, request);
        }

        /**
         * An Async wrapper for DisassociateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateTrustStoreRequestT = Model::DisassociateTrustStoreRequest>
        void DisassociateTrustStoreAsync(const DisassociateTrustStoreRequestT& request, const DisassociateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DisassociateTrustStore, request, handler, context);
        }

        /**
         * <p>Disassociates user access logging settings from a web portal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserAccessLoggingSettingsOutcome DisassociateUserAccessLoggingSettings(const Model::DisassociateUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateUserAccessLoggingSettingsRequestT = Model::DisassociateUserAccessLoggingSettingsRequest>
        Model::DisassociateUserAccessLoggingSettingsOutcomeCallable DisassociateUserAccessLoggingSettingsCallable(const DisassociateUserAccessLoggingSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DisassociateUserAccessLoggingSettings, request);
        }

        /**
         * An Async wrapper for DisassociateUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateUserAccessLoggingSettingsRequestT = Model::DisassociateUserAccessLoggingSettingsRequest>
        void DisassociateUserAccessLoggingSettingsAsync(const DisassociateUserAccessLoggingSettingsRequestT& request, const DisassociateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DisassociateUserAccessLoggingSettings, request, handler, context);
        }

        /**
         * <p>Disassociates user settings from a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DisassociateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserSettingsOutcome DisassociateUserSettings(const Model::DisassociateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateUserSettingsRequestT = Model::DisassociateUserSettingsRequest>
        Model::DisassociateUserSettingsOutcomeCallable DisassociateUserSettingsCallable(const DisassociateUserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::DisassociateUserSettings, request);
        }

        /**
         * An Async wrapper for DisassociateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateUserSettingsRequestT = Model::DisassociateUserSettingsRequest>
        void DisassociateUserSettingsAsync(const DisassociateUserSettingsRequestT& request, const DisassociateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::DisassociateUserSettings, request, handler, context);
        }

        /**
         * <p>Gets browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBrowserSettingsOutcome GetBrowserSettings(const Model::GetBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBrowserSettingsRequestT = Model::GetBrowserSettingsRequest>
        Model::GetBrowserSettingsOutcomeCallable GetBrowserSettingsCallable(const GetBrowserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetBrowserSettings, request);
        }

        /**
         * An Async wrapper for GetBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBrowserSettingsRequestT = Model::GetBrowserSettingsRequest>
        void GetBrowserSettingsAsync(const GetBrowserSettingsRequestT& request, const GetBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetBrowserSettings, request, handler, context);
        }

        /**
         * <p>Gets the identity provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityProviderOutcome GetIdentityProvider(const Model::GetIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentityProviderRequestT = Model::GetIdentityProviderRequest>
        Model::GetIdentityProviderOutcomeCallable GetIdentityProviderCallable(const GetIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetIdentityProvider, request);
        }

        /**
         * An Async wrapper for GetIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityProviderRequestT = Model::GetIdentityProviderRequest>
        void GetIdentityProviderAsync(const GetIdentityProviderRequestT& request, const GetIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetIdentityProvider, request, handler, context);
        }

        /**
         * <p>Gets the IP access settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetIpAccessSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIpAccessSettingsOutcome GetIpAccessSettings(const Model::GetIpAccessSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetIpAccessSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIpAccessSettingsRequestT = Model::GetIpAccessSettingsRequest>
        Model::GetIpAccessSettingsOutcomeCallable GetIpAccessSettingsCallable(const GetIpAccessSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetIpAccessSettings, request);
        }

        /**
         * An Async wrapper for GetIpAccessSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIpAccessSettingsRequestT = Model::GetIpAccessSettingsRequest>
        void GetIpAccessSettingsAsync(const GetIpAccessSettingsRequestT& request, const GetIpAccessSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetIpAccessSettings, request, handler, context);
        }

        /**
         * <p>Gets the network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkSettingsOutcome GetNetworkSettings(const Model::GetNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkSettingsRequestT = Model::GetNetworkSettingsRequest>
        Model::GetNetworkSettingsOutcomeCallable GetNetworkSettingsCallable(const GetNetworkSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetNetworkSettings, request);
        }

        /**
         * An Async wrapper for GetNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkSettingsRequestT = Model::GetNetworkSettingsRequest>
        void GetNetworkSettingsAsync(const GetNetworkSettingsRequestT& request, const GetNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetNetworkSettings, request, handler, context);
        }

        /**
         * <p>Gets the web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetPortal">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortalOutcome GetPortal(const Model::GetPortalRequest& request) const;

        /**
         * A Callable wrapper for GetPortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPortalRequestT = Model::GetPortalRequest>
        Model::GetPortalOutcomeCallable GetPortalCallable(const GetPortalRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetPortal, request);
        }

        /**
         * An Async wrapper for GetPortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPortalRequestT = Model::GetPortalRequest>
        void GetPortalAsync(const GetPortalRequestT& request, const GetPortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetPortal, request, handler, context);
        }

        /**
         * <p>Gets the service provider metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetPortalServiceProviderMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortalServiceProviderMetadataOutcome GetPortalServiceProviderMetadata(const Model::GetPortalServiceProviderMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetPortalServiceProviderMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPortalServiceProviderMetadataRequestT = Model::GetPortalServiceProviderMetadataRequest>
        Model::GetPortalServiceProviderMetadataOutcomeCallable GetPortalServiceProviderMetadataCallable(const GetPortalServiceProviderMetadataRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetPortalServiceProviderMetadata, request);
        }

        /**
         * An Async wrapper for GetPortalServiceProviderMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPortalServiceProviderMetadataRequestT = Model::GetPortalServiceProviderMetadataRequest>
        void GetPortalServiceProviderMetadataAsync(const GetPortalServiceProviderMetadataRequestT& request, const GetPortalServiceProviderMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetPortalServiceProviderMetadata, request, handler, context);
        }

        /**
         * <p>Gets the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustStoreOutcome GetTrustStore(const Model::GetTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for GetTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrustStoreRequestT = Model::GetTrustStoreRequest>
        Model::GetTrustStoreOutcomeCallable GetTrustStoreCallable(const GetTrustStoreRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetTrustStore, request);
        }

        /**
         * An Async wrapper for GetTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrustStoreRequestT = Model::GetTrustStoreRequest>
        void GetTrustStoreAsync(const GetTrustStoreRequestT& request, const GetTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetTrustStore, request, handler, context);
        }

        /**
         * <p>Gets the trust store certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetTrustStoreCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustStoreCertificateOutcome GetTrustStoreCertificate(const Model::GetTrustStoreCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetTrustStoreCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrustStoreCertificateRequestT = Model::GetTrustStoreCertificateRequest>
        Model::GetTrustStoreCertificateOutcomeCallable GetTrustStoreCertificateCallable(const GetTrustStoreCertificateRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetTrustStoreCertificate, request);
        }

        /**
         * An Async wrapper for GetTrustStoreCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrustStoreCertificateRequestT = Model::GetTrustStoreCertificateRequest>
        void GetTrustStoreCertificateAsync(const GetTrustStoreCertificateRequestT& request, const GetTrustStoreCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetTrustStoreCertificate, request, handler, context);
        }

        /**
         * <p>Gets user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserAccessLoggingSettingsOutcome GetUserAccessLoggingSettings(const Model::GetUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserAccessLoggingSettingsRequestT = Model::GetUserAccessLoggingSettingsRequest>
        Model::GetUserAccessLoggingSettingsOutcomeCallable GetUserAccessLoggingSettingsCallable(const GetUserAccessLoggingSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetUserAccessLoggingSettings, request);
        }

        /**
         * An Async wrapper for GetUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserAccessLoggingSettingsRequestT = Model::GetUserAccessLoggingSettingsRequest>
        void GetUserAccessLoggingSettingsAsync(const GetUserAccessLoggingSettingsRequestT& request, const GetUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetUserAccessLoggingSettings, request, handler, context);
        }

        /**
         * <p>Gets user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/GetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserSettingsOutcome GetUserSettings(const Model::GetUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserSettingsRequestT = Model::GetUserSettingsRequest>
        Model::GetUserSettingsOutcomeCallable GetUserSettingsCallable(const GetUserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::GetUserSettings, request);
        }

        /**
         * An Async wrapper for GetUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserSettingsRequestT = Model::GetUserSettingsRequest>
        void GetUserSettingsAsync(const GetUserSettingsRequestT& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::GetUserSettings, request, handler, context);
        }

        /**
         * <p>Retrieves a list of browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBrowserSettingsOutcome ListBrowserSettings(const Model::ListBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBrowserSettingsRequestT = Model::ListBrowserSettingsRequest>
        Model::ListBrowserSettingsOutcomeCallable ListBrowserSettingsCallable(const ListBrowserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListBrowserSettings, request);
        }

        /**
         * An Async wrapper for ListBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBrowserSettingsRequestT = Model::ListBrowserSettingsRequest>
        void ListBrowserSettingsAsync(const ListBrowserSettingsRequestT& request, const ListBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListBrowserSettings, request, handler, context);
        }

        /**
         * <p>Retrieves a list of identity providers for a specific web
         * portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentityProvidersRequestT = Model::ListIdentityProvidersRequest>
        Model::ListIdentityProvidersOutcomeCallable ListIdentityProvidersCallable(const ListIdentityProvidersRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListIdentityProviders, request);
        }

        /**
         * An Async wrapper for ListIdentityProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentityProvidersRequestT = Model::ListIdentityProvidersRequest>
        void ListIdentityProvidersAsync(const ListIdentityProvidersRequestT& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListIdentityProviders, request, handler, context);
        }

        /**
         * <p>Retrieves a list of IP access settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListIpAccessSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIpAccessSettingsOutcome ListIpAccessSettings(const Model::ListIpAccessSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListIpAccessSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIpAccessSettingsRequestT = Model::ListIpAccessSettingsRequest>
        Model::ListIpAccessSettingsOutcomeCallable ListIpAccessSettingsCallable(const ListIpAccessSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListIpAccessSettings, request);
        }

        /**
         * An Async wrapper for ListIpAccessSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIpAccessSettingsRequestT = Model::ListIpAccessSettingsRequest>
        void ListIpAccessSettingsAsync(const ListIpAccessSettingsRequestT& request, const ListIpAccessSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListIpAccessSettings, request, handler, context);
        }

        /**
         * <p>Retrieves a list of network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkSettingsOutcome ListNetworkSettings(const Model::ListNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNetworkSettingsRequestT = Model::ListNetworkSettingsRequest>
        Model::ListNetworkSettingsOutcomeCallable ListNetworkSettingsCallable(const ListNetworkSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListNetworkSettings, request);
        }

        /**
         * An Async wrapper for ListNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNetworkSettingsRequestT = Model::ListNetworkSettingsRequest>
        void ListNetworkSettingsAsync(const ListNetworkSettingsRequestT& request, const ListNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListNetworkSettings, request, handler, context);
        }

        /**
         * <p>Retrieves a list or web portals.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListPortals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortalsOutcome ListPortals(const Model::ListPortalsRequest& request) const;

        /**
         * A Callable wrapper for ListPortals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPortalsRequestT = Model::ListPortalsRequest>
        Model::ListPortalsOutcomeCallable ListPortalsCallable(const ListPortalsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListPortals, request);
        }

        /**
         * An Async wrapper for ListPortals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPortalsRequestT = Model::ListPortalsRequest>
        void ListPortalsAsync(const ListPortalsRequestT& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListPortals, request, handler, context);
        }

        /**
         * <p>Retrieves a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Retrieves a list of trust store certificates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTrustStoreCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustStoreCertificatesOutcome ListTrustStoreCertificates(const Model::ListTrustStoreCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListTrustStoreCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrustStoreCertificatesRequestT = Model::ListTrustStoreCertificatesRequest>
        Model::ListTrustStoreCertificatesOutcomeCallable ListTrustStoreCertificatesCallable(const ListTrustStoreCertificatesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListTrustStoreCertificates, request);
        }

        /**
         * An Async wrapper for ListTrustStoreCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrustStoreCertificatesRequestT = Model::ListTrustStoreCertificatesRequest>
        void ListTrustStoreCertificatesAsync(const ListTrustStoreCertificatesRequestT& request, const ListTrustStoreCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListTrustStoreCertificates, request, handler, context);
        }

        /**
         * <p>Retrieves a list of trust stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListTrustStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustStoresOutcome ListTrustStores(const Model::ListTrustStoresRequest& request) const;

        /**
         * A Callable wrapper for ListTrustStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrustStoresRequestT = Model::ListTrustStoresRequest>
        Model::ListTrustStoresOutcomeCallable ListTrustStoresCallable(const ListTrustStoresRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListTrustStores, request);
        }

        /**
         * An Async wrapper for ListTrustStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrustStoresRequestT = Model::ListTrustStoresRequest>
        void ListTrustStoresAsync(const ListTrustStoresRequestT& request, const ListTrustStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListTrustStores, request, handler, context);
        }

        /**
         * <p>Retrieves a list of user access logging settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserAccessLoggingSettingsOutcome ListUserAccessLoggingSettings(const Model::ListUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserAccessLoggingSettingsRequestT = Model::ListUserAccessLoggingSettingsRequest>
        Model::ListUserAccessLoggingSettingsOutcomeCallable ListUserAccessLoggingSettingsCallable(const ListUserAccessLoggingSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListUserAccessLoggingSettings, request);
        }

        /**
         * An Async wrapper for ListUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserAccessLoggingSettingsRequestT = Model::ListUserAccessLoggingSettingsRequest>
        void ListUserAccessLoggingSettingsAsync(const ListUserAccessLoggingSettingsRequestT& request, const ListUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListUserAccessLoggingSettings, request, handler, context);
        }

        /**
         * <p>Retrieves a list of user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ListUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserSettingsOutcome ListUserSettings(const Model::ListUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for ListUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserSettingsRequestT = Model::ListUserSettingsRequest>
        Model::ListUserSettingsOutcomeCallable ListUserSettingsCallable(const ListUserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::ListUserSettings, request);
        }

        /**
         * An Async wrapper for ListUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserSettingsRequestT = Model::ListUserSettingsRequest>
        void ListUserSettingsAsync(const ListUserSettingsRequestT& request, const ListUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::ListUserSettings, request, handler, context);
        }

        /**
         * <p>Adds or overwrites one or more tags for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates browser settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateBrowserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrowserSettingsOutcome UpdateBrowserSettings(const Model::UpdateBrowserSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateBrowserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBrowserSettingsRequestT = Model::UpdateBrowserSettingsRequest>
        Model::UpdateBrowserSettingsOutcomeCallable UpdateBrowserSettingsCallable(const UpdateBrowserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UpdateBrowserSettings, request);
        }

        /**
         * An Async wrapper for UpdateBrowserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBrowserSettingsRequestT = Model::UpdateBrowserSettingsRequest>
        void UpdateBrowserSettingsAsync(const UpdateBrowserSettingsRequestT& request, const UpdateBrowserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UpdateBrowserSettings, request, handler, context);
        }

        /**
         * <p>Updates the identity provider. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityProviderOutcome UpdateIdentityProvider(const Model::UpdateIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIdentityProviderRequestT = Model::UpdateIdentityProviderRequest>
        Model::UpdateIdentityProviderOutcomeCallable UpdateIdentityProviderCallable(const UpdateIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UpdateIdentityProvider, request);
        }

        /**
         * An Async wrapper for UpdateIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIdentityProviderRequestT = Model::UpdateIdentityProviderRequest>
        void UpdateIdentityProviderAsync(const UpdateIdentityProviderRequestT& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UpdateIdentityProvider, request, handler, context);
        }

        /**
         * <p>Updates IP access settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateIpAccessSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIpAccessSettingsOutcome UpdateIpAccessSettings(const Model::UpdateIpAccessSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateIpAccessSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIpAccessSettingsRequestT = Model::UpdateIpAccessSettingsRequest>
        Model::UpdateIpAccessSettingsOutcomeCallable UpdateIpAccessSettingsCallable(const UpdateIpAccessSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UpdateIpAccessSettings, request);
        }

        /**
         * An Async wrapper for UpdateIpAccessSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIpAccessSettingsRequestT = Model::UpdateIpAccessSettingsRequest>
        void UpdateIpAccessSettingsAsync(const UpdateIpAccessSettingsRequestT& request, const UpdateIpAccessSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UpdateIpAccessSettings, request, handler, context);
        }

        /**
         * <p>Updates network settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateNetworkSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSettingsOutcome UpdateNetworkSettings(const Model::UpdateNetworkSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNetworkSettingsRequestT = Model::UpdateNetworkSettingsRequest>
        Model::UpdateNetworkSettingsOutcomeCallable UpdateNetworkSettingsCallable(const UpdateNetworkSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UpdateNetworkSettings, request);
        }

        /**
         * An Async wrapper for UpdateNetworkSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNetworkSettingsRequestT = Model::UpdateNetworkSettingsRequest>
        void UpdateNetworkSettingsAsync(const UpdateNetworkSettingsRequestT& request, const UpdateNetworkSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UpdateNetworkSettings, request, handler, context);
        }

        /**
         * <p>Updates a web portal.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdatePortal">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortalOutcome UpdatePortal(const Model::UpdatePortalRequest& request) const;

        /**
         * A Callable wrapper for UpdatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePortalRequestT = Model::UpdatePortalRequest>
        Model::UpdatePortalOutcomeCallable UpdatePortalCallable(const UpdatePortalRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UpdatePortal, request);
        }

        /**
         * An Async wrapper for UpdatePortal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePortalRequestT = Model::UpdatePortalRequest>
        void UpdatePortalAsync(const UpdatePortalRequestT& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UpdatePortal, request, handler, context);
        }

        /**
         * <p>Updates the trust store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateTrustStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrustStoreOutcome UpdateTrustStore(const Model::UpdateTrustStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrustStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrustStoreRequestT = Model::UpdateTrustStoreRequest>
        Model::UpdateTrustStoreOutcomeCallable UpdateTrustStoreCallable(const UpdateTrustStoreRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UpdateTrustStore, request);
        }

        /**
         * An Async wrapper for UpdateTrustStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrustStoreRequestT = Model::UpdateTrustStoreRequest>
        void UpdateTrustStoreAsync(const UpdateTrustStoreRequestT& request, const UpdateTrustStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UpdateTrustStore, request, handler, context);
        }

        /**
         * <p>Updates the user access logging settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateUserAccessLoggingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserAccessLoggingSettingsOutcome UpdateUserAccessLoggingSettings(const Model::UpdateUserAccessLoggingSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserAccessLoggingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserAccessLoggingSettingsRequestT = Model::UpdateUserAccessLoggingSettingsRequest>
        Model::UpdateUserAccessLoggingSettingsOutcomeCallable UpdateUserAccessLoggingSettingsCallable(const UpdateUserAccessLoggingSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UpdateUserAccessLoggingSettings, request);
        }

        /**
         * An Async wrapper for UpdateUserAccessLoggingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserAccessLoggingSettingsRequestT = Model::UpdateUserAccessLoggingSettingsRequest>
        void UpdateUserAccessLoggingSettingsAsync(const UpdateUserAccessLoggingSettingsRequestT& request, const UpdateUserAccessLoggingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UpdateUserAccessLoggingSettings, request, handler, context);
        }

        /**
         * <p>Updates the user settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UpdateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSettingsOutcome UpdateUserSettings(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserSettingsRequestT = Model::UpdateUserSettingsRequest>
        Model::UpdateUserSettingsOutcomeCallable UpdateUserSettingsCallable(const UpdateUserSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesWebClient::UpdateUserSettings, request);
        }

        /**
         * An Async wrapper for UpdateUserSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserSettingsRequestT = Model::UpdateUserSettingsRequest>
        void UpdateUserSettingsAsync(const UpdateUserSettingsRequestT& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesWebClient::UpdateUserSettings, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkSpacesWebEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WorkSpacesWebClient>;
      void init(const WorkSpacesWebClientConfiguration& clientConfiguration);

      WorkSpacesWebClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkSpacesWebEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkSpacesWeb
} // namespace Aws
