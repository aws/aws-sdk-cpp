/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces/WorkSpacesServiceClientModel.h>

namespace Aws
{
namespace WorkSpaces
{
  /**
   * <fullname>Amazon WorkSpaces Service</fullname> <p>Amazon WorkSpaces enables you
   * to provision virtual, cloud-based Microsoft Windows or Amazon Linux desktops for
   * your users, known as <i>WorkSpaces</i>. WorkSpaces eliminates the need to
   * procure and deploy hardware or install complex software. You can quickly add or
   * remove users as your needs change. Users can access their virtual desktops from
   * multiple devices or web browsers.</p> <p>This API Reference provides detailed
   * information about the actions, data types, parameters, and errors of the
   * WorkSpaces service. For more information about the supported Amazon Web Services
   * Regions, endpoints, and service quotas of the Amazon WorkSpaces service, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/wsp.html">WorkSpaces
   * endpoints and quotas</a> in the <i>Amazon Web Services General
   * Reference</i>.</p> <p>You can also manage your WorkSpaces resources using the
   * WorkSpaces console, Command Line Interface (CLI), and SDKs. For more information
   * about administering WorkSpaces, see the <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/">Amazon
   * WorkSpaces Administration Guide</a>. For more information about using the Amazon
   * WorkSpaces client application or web browser to access provisioned WorkSpaces,
   * see the <a
   * href="https://docs.aws.amazon.com/workspaces/latest/userguide/">Amazon
   * WorkSpaces User Guide</a>. For more information about using the CLI to manage
   * your WorkSpaces resources, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/workspaces/index.html">WorkSpaces
   * section of the CLI Reference</a>.</p>
   */
  class AWS_WORKSPACES_API WorkSpacesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WorkSpacesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef WorkSpacesClientConfiguration ClientConfigurationType;
      typedef WorkSpacesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration = Aws::WorkSpaces::WorkSpacesClientConfiguration(),
                         std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration = Aws::WorkSpaces::WorkSpacesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<WorkSpacesEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::WorkSpaces::WorkSpacesClientConfiguration& clientConfiguration = Aws::WorkSpaces::WorkSpacesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkSpacesClient();

        /**
         * <p>Associates the specified connection alias with the specified directory to
         * enable cross-Region redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConnectionAliasOutcome AssociateConnectionAlias(const Model::AssociateConnectionAliasRequest& request) const;

        /**
         * A Callable wrapper for AssociateConnectionAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateConnectionAliasRequestT = Model::AssociateConnectionAliasRequest>
        Model::AssociateConnectionAliasOutcomeCallable AssociateConnectionAliasCallable(const AssociateConnectionAliasRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::AssociateConnectionAlias, request);
        }

        /**
         * An Async wrapper for AssociateConnectionAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateConnectionAliasRequestT = Model::AssociateConnectionAliasRequest>
        void AssociateConnectionAliasAsync(const AssociateConnectionAliasRequestT& request, const AssociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::AssociateConnectionAlias, request, handler, context);
        }

        /**
         * <p>Associates the specified IP access control group with the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateIpGroupsOutcome AssociateIpGroups(const Model::AssociateIpGroupsRequest& request) const;

        /**
         * A Callable wrapper for AssociateIpGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateIpGroupsRequestT = Model::AssociateIpGroupsRequest>
        Model::AssociateIpGroupsOutcomeCallable AssociateIpGroupsCallable(const AssociateIpGroupsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::AssociateIpGroups, request);
        }

        /**
         * An Async wrapper for AssociateIpGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateIpGroupsRequestT = Model::AssociateIpGroupsRequest>
        void AssociateIpGroupsAsync(const AssociateIpGroupsRequestT& request, const AssociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::AssociateIpGroups, request, handler, context);
        }

        /**
         * <p>Associates the specified application to the specified
         * WorkSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateWorkspaceApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWorkspaceApplicationOutcome AssociateWorkspaceApplication(const Model::AssociateWorkspaceApplicationRequest& request) const;

        /**
         * A Callable wrapper for AssociateWorkspaceApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateWorkspaceApplicationRequestT = Model::AssociateWorkspaceApplicationRequest>
        Model::AssociateWorkspaceApplicationOutcomeCallable AssociateWorkspaceApplicationCallable(const AssociateWorkspaceApplicationRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::AssociateWorkspaceApplication, request);
        }

        /**
         * An Async wrapper for AssociateWorkspaceApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateWorkspaceApplicationRequestT = Model::AssociateWorkspaceApplicationRequest>
        void AssociateWorkspaceApplicationAsync(const AssociateWorkspaceApplicationRequestT& request, const AssociateWorkspaceApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::AssociateWorkspaceApplication, request, handler, context);
        }

        /**
         * <p>Adds one or more rules to the specified IP access control group.</p> <p>This
         * action gives users permission to access their WorkSpaces from the CIDR address
         * ranges specified in the rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AuthorizeIpRules">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeIpRulesOutcome AuthorizeIpRules(const Model::AuthorizeIpRulesRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeIpRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AuthorizeIpRulesRequestT = Model::AuthorizeIpRulesRequest>
        Model::AuthorizeIpRulesOutcomeCallable AuthorizeIpRulesCallable(const AuthorizeIpRulesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::AuthorizeIpRules, request);
        }

        /**
         * An Async wrapper for AuthorizeIpRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AuthorizeIpRulesRequestT = Model::AuthorizeIpRulesRequest>
        void AuthorizeIpRulesAsync(const AuthorizeIpRulesRequestT& request, const AuthorizeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::AuthorizeIpRules, request, handler, context);
        }

        /**
         * <p>Copies the specified image from the specified Region to the current Region.
         * For more information about copying images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/copy-custom-image.html">
         * Copy a Custom WorkSpaces Image</a>.</p> <p>In the China (Ningxia) Region, you
         * can copy images only within the same Region.</p> <p>In Amazon Web Services
         * GovCloud (US), to copy images to and from other Regions, contact Amazon Web
         * Services Support.</p>  <p>Before copying a shared image, be sure to
         * verify that it has been shared from the correct Amazon Web Services account. To
         * determine if an image has been shared and to see the ID of the Amazon Web
         * Services account that owns an image, use the <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImages.html">DescribeWorkSpaceImages</a>
         * and <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImagePermissions.html">DescribeWorkspaceImagePermissions</a>
         * API operations. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CopyWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyWorkspaceImageOutcome CopyWorkspaceImage(const Model::CopyWorkspaceImageRequest& request) const;

        /**
         * A Callable wrapper for CopyWorkspaceImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyWorkspaceImageRequestT = Model::CopyWorkspaceImageRequest>
        Model::CopyWorkspaceImageOutcomeCallable CopyWorkspaceImageCallable(const CopyWorkspaceImageRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CopyWorkspaceImage, request);
        }

        /**
         * An Async wrapper for CopyWorkspaceImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyWorkspaceImageRequestT = Model::CopyWorkspaceImageRequest>
        void CopyWorkspaceImageAsync(const CopyWorkspaceImageRequestT& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CopyWorkspaceImage, request, handler, context);
        }

        /**
         * <p>Creates a client-add-in for Amazon Connect within a directory. You can create
         * only one Amazon Connect client add-in within a directory.</p> <p>This client
         * add-in allows WorkSpaces users to seamlessly connect to Amazon
         * Connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateConnectClientAddIn">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectClientAddInOutcome CreateConnectClientAddIn(const Model::CreateConnectClientAddInRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectClientAddIn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectClientAddInRequestT = Model::CreateConnectClientAddInRequest>
        Model::CreateConnectClientAddInOutcomeCallable CreateConnectClientAddInCallable(const CreateConnectClientAddInRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateConnectClientAddIn, request);
        }

        /**
         * An Async wrapper for CreateConnectClientAddIn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectClientAddInRequestT = Model::CreateConnectClientAddInRequest>
        void CreateConnectClientAddInAsync(const CreateConnectClientAddInRequestT& request, const CreateConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateConnectClientAddIn, request, handler, context);
        }

        /**
         * <p>Creates the specified connection alias for use with cross-Region redirection.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionAliasOutcome CreateConnectionAlias(const Model::CreateConnectionAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectionAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectionAliasRequestT = Model::CreateConnectionAliasRequest>
        Model::CreateConnectionAliasOutcomeCallable CreateConnectionAliasCallable(const CreateConnectionAliasRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateConnectionAlias, request);
        }

        /**
         * An Async wrapper for CreateConnectionAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectionAliasRequestT = Model::CreateConnectionAliasRequest>
        void CreateConnectionAliasAsync(const CreateConnectionAliasRequestT& request, const CreateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateConnectionAlias, request, handler, context);
        }

        /**
         * <p>Creates an IP access control group.</p> <p>An IP access control group
         * provides you with the ability to control the IP addresses from which users are
         * allowed to access their WorkSpaces. To specify the CIDR address ranges, add
         * rules to your IP access control group and then associate the group with your
         * directory. You can add rules when you create the group or at any time using
         * <a>AuthorizeIpRules</a>.</p> <p>There is a default IP access control group
         * associated with your directory. If you don't associate an IP access control
         * group with your directory, the default group is used. The default group includes
         * a default rule that allows users to access their WorkSpaces from anywhere. You
         * cannot modify the default IP access control group for your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIpGroupOutcome CreateIpGroup(const Model::CreateIpGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateIpGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIpGroupRequestT = Model::CreateIpGroupRequest>
        Model::CreateIpGroupOutcomeCallable CreateIpGroupCallable(const CreateIpGroupRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateIpGroup, request);
        }

        /**
         * An Async wrapper for CreateIpGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIpGroupRequestT = Model::CreateIpGroupRequest>
        void CreateIpGroupAsync(const CreateIpGroupRequestT& request, const CreateIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateIpGroup, request, handler, context);
        }

        /**
         * <p>Creates a standby WorkSpace in a secondary Region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateStandbyWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStandbyWorkspacesOutcome CreateStandbyWorkspaces(const Model::CreateStandbyWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for CreateStandbyWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStandbyWorkspacesRequestT = Model::CreateStandbyWorkspacesRequest>
        Model::CreateStandbyWorkspacesOutcomeCallable CreateStandbyWorkspacesCallable(const CreateStandbyWorkspacesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateStandbyWorkspaces, request);
        }

        /**
         * An Async wrapper for CreateStandbyWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStandbyWorkspacesRequestT = Model::CreateStandbyWorkspacesRequest>
        void CreateStandbyWorkspacesAsync(const CreateStandbyWorkspacesRequestT& request, const CreateStandbyWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateStandbyWorkspaces, request, handler, context);
        }

        /**
         * <p>Creates the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * A Callable wrapper for CreateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTagsRequestT = Model::CreateTagsRequest>
        Model::CreateTagsOutcomeCallable CreateTagsCallable(const CreateTagsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateTags, request);
        }

        /**
         * An Async wrapper for CreateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTagsRequestT = Model::CreateTagsRequest>
        void CreateTagsAsync(const CreateTagsRequestT& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateTags, request, handler, context);
        }

        /**
         * <p>Creates a new updated WorkSpace image based on the specified source image.
         * The new updated WorkSpace image has the latest drivers and other updates
         * required by the Amazon WorkSpaces components.</p> <p>To determine which
         * WorkSpace images need to be updated with the latest Amazon WorkSpaces
         * requirements, use <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImages.html">
         * DescribeWorkspaceImages</a>.</p>  <ul> <li> <p>Only Windows 10, Windows
         * Server 2016, and Windows Server 2019 WorkSpace images can be programmatically
         * updated at this time.</p> </li> <li> <p>Microsoft Windows updates and other
         * application updates are not included in the update process.</p> </li> <li>
         * <p>The source WorkSpace image is not deleted. You can delete the source image
         * after you've verified your new updated image and created a new bundle. </p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateUpdatedWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUpdatedWorkspaceImageOutcome CreateUpdatedWorkspaceImage(const Model::CreateUpdatedWorkspaceImageRequest& request) const;

        /**
         * A Callable wrapper for CreateUpdatedWorkspaceImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUpdatedWorkspaceImageRequestT = Model::CreateUpdatedWorkspaceImageRequest>
        Model::CreateUpdatedWorkspaceImageOutcomeCallable CreateUpdatedWorkspaceImageCallable(const CreateUpdatedWorkspaceImageRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateUpdatedWorkspaceImage, request);
        }

        /**
         * An Async wrapper for CreateUpdatedWorkspaceImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUpdatedWorkspaceImageRequestT = Model::CreateUpdatedWorkspaceImageRequest>
        void CreateUpdatedWorkspaceImageAsync(const CreateUpdatedWorkspaceImageRequestT& request, const CreateUpdatedWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateUpdatedWorkspaceImage, request, handler, context);
        }

        /**
         * <p>Creates the specified WorkSpace bundle. For more information about creating
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/create-custom-bundle.html">
         * Create a Custom WorkSpaces Image and Bundle</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceBundleOutcome CreateWorkspaceBundle(const Model::CreateWorkspaceBundleRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkspaceBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkspaceBundleRequestT = Model::CreateWorkspaceBundleRequest>
        Model::CreateWorkspaceBundleOutcomeCallable CreateWorkspaceBundleCallable(const CreateWorkspaceBundleRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateWorkspaceBundle, request);
        }

        /**
         * An Async wrapper for CreateWorkspaceBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkspaceBundleRequestT = Model::CreateWorkspaceBundleRequest>
        void CreateWorkspaceBundleAsync(const CreateWorkspaceBundleRequestT& request, const CreateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateWorkspaceBundle, request, handler, context);
        }

        /**
         * <p>Creates a new WorkSpace image from an existing WorkSpace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceImageOutcome CreateWorkspaceImage(const Model::CreateWorkspaceImageRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkspaceImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkspaceImageRequestT = Model::CreateWorkspaceImageRequest>
        Model::CreateWorkspaceImageOutcomeCallable CreateWorkspaceImageCallable(const CreateWorkspaceImageRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateWorkspaceImage, request);
        }

        /**
         * An Async wrapper for CreateWorkspaceImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkspaceImageRequestT = Model::CreateWorkspaceImageRequest>
        void CreateWorkspaceImageAsync(const CreateWorkspaceImageRequestT& request, const CreateWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateWorkspaceImage, request, handler, context);
        }

        /**
         * <p>Creates one or more WorkSpaces.</p> <p>This operation is asynchronous and
         * returns before the WorkSpaces are created.</p>  <ul> <li> <p>The
         * <code>MANUAL</code> running mode value is only supported by Amazon WorkSpaces
         * Core. Contact your account team to be allow-listed to use this value. For more
         * information, see <a href="http://aws.amazon.com/workspaces/core/">Amazon
         * WorkSpaces Core</a>.</p> </li> <li> <p>You don't need to specify the
         * <code>PCOIP</code> protocol for Linux bundles because <code>WSP</code> is the
         * default protocol for those bundles.</p> </li> <li> <p>User-decoupled WorkSpaces
         * are only supported by Amazon WorkSpaces Core.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspacesOutcome CreateWorkspaces(const Model::CreateWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkspacesRequestT = Model::CreateWorkspacesRequest>
        Model::CreateWorkspacesOutcomeCallable CreateWorkspacesCallable(const CreateWorkspacesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::CreateWorkspaces, request);
        }

        /**
         * An Async wrapper for CreateWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkspacesRequestT = Model::CreateWorkspacesRequest>
        void CreateWorkspacesAsync(const CreateWorkspacesRequestT& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::CreateWorkspaces, request, handler, context);
        }

        /**
         * <p>Deletes customized client branding. Client branding allows you to customize
         * your WorkSpace's client login portal. You can tailor your login portal company
         * logo, the support email address, support link, link to reset password, and a
         * custom message for users trying to sign in.</p> <p>After you delete your
         * customized client branding, your login portal reverts to the default client
         * branding.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteClientBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClientBrandingOutcome DeleteClientBranding(const Model::DeleteClientBrandingRequest& request) const;

        /**
         * A Callable wrapper for DeleteClientBranding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClientBrandingRequestT = Model::DeleteClientBrandingRequest>
        Model::DeleteClientBrandingOutcomeCallable DeleteClientBrandingCallable(const DeleteClientBrandingRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeleteClientBranding, request);
        }

        /**
         * An Async wrapper for DeleteClientBranding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClientBrandingRequestT = Model::DeleteClientBrandingRequest>
        void DeleteClientBrandingAsync(const DeleteClientBrandingRequestT& request, const DeleteClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeleteClientBranding, request, handler, context);
        }

        /**
         * <p>Deletes a client-add-in for Amazon Connect that is configured within a
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteConnectClientAddIn">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectClientAddInOutcome DeleteConnectClientAddIn(const Model::DeleteConnectClientAddInRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectClientAddIn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectClientAddInRequestT = Model::DeleteConnectClientAddInRequest>
        Model::DeleteConnectClientAddInOutcomeCallable DeleteConnectClientAddInCallable(const DeleteConnectClientAddInRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeleteConnectClientAddIn, request);
        }

        /**
         * An Async wrapper for DeleteConnectClientAddIn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectClientAddInRequestT = Model::DeleteConnectClientAddInRequest>
        void DeleteConnectClientAddInAsync(const DeleteConnectClientAddInRequestT& request, const DeleteConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeleteConnectClientAddIn, request, handler, context);
        }

        /**
         * <p>Deletes the specified connection alias. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p> <b>If
         * you will no longer be using a fully qualified domain name (FQDN) as the
         * registration code for your WorkSpaces users, you must take certain precautions
         * to prevent potential security issues.</b> For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html#cross-region-redirection-security-considerations">
         * Security Considerations if You Stop Using Cross-Region Redirection</a>.</p>
         *   <p>To delete a connection alias that has been shared, the
         * shared account must first disassociate the connection alias from any directories
         * it has been associated with. Then you must unshare the connection alias from the
         * account it has been shared with. You can delete a connection alias only after it
         * is no longer shared with any accounts or associated with any directories.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionAliasOutcome DeleteConnectionAlias(const Model::DeleteConnectionAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectionAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionAliasRequestT = Model::DeleteConnectionAliasRequest>
        Model::DeleteConnectionAliasOutcomeCallable DeleteConnectionAliasCallable(const DeleteConnectionAliasRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeleteConnectionAlias, request);
        }

        /**
         * An Async wrapper for DeleteConnectionAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionAliasRequestT = Model::DeleteConnectionAliasRequest>
        void DeleteConnectionAliasAsync(const DeleteConnectionAliasRequestT& request, const DeleteConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeleteConnectionAlias, request, handler, context);
        }

        /**
         * <p>Deletes the specified IP access control group.</p> <p>You cannot delete an IP
         * access control group that is associated with a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIpGroupOutcome DeleteIpGroup(const Model::DeleteIpGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteIpGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIpGroupRequestT = Model::DeleteIpGroupRequest>
        Model::DeleteIpGroupOutcomeCallable DeleteIpGroupCallable(const DeleteIpGroupRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeleteIpGroup, request);
        }

        /**
         * An Async wrapper for DeleteIpGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIpGroupRequestT = Model::DeleteIpGroupRequest>
        void DeleteIpGroupAsync(const DeleteIpGroupRequestT& request, const DeleteIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeleteIpGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified tags from the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const DeleteTagsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeleteTags, request);
        }

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        void DeleteTagsAsync(const DeleteTagsRequestT& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeleteTags, request, handler, context);
        }

        /**
         * <p>Deletes the specified WorkSpace bundle. For more information about deleting
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete_bundle.html">
         * Delete a Custom WorkSpaces Bundle or Image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceBundleOutcome DeleteWorkspaceBundle(const Model::DeleteWorkspaceBundleRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspaceBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkspaceBundleRequestT = Model::DeleteWorkspaceBundleRequest>
        Model::DeleteWorkspaceBundleOutcomeCallable DeleteWorkspaceBundleCallable(const DeleteWorkspaceBundleRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeleteWorkspaceBundle, request);
        }

        /**
         * An Async wrapper for DeleteWorkspaceBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkspaceBundleRequestT = Model::DeleteWorkspaceBundleRequest>
        void DeleteWorkspaceBundleAsync(const DeleteWorkspaceBundleRequestT& request, const DeleteWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeleteWorkspaceBundle, request, handler, context);
        }

        /**
         * <p>Deletes the specified image from your account. To delete an image, you must
         * first delete any bundles that are associated with the image and unshare the
         * image if it is shared with other accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceImageOutcome DeleteWorkspaceImage(const Model::DeleteWorkspaceImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspaceImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkspaceImageRequestT = Model::DeleteWorkspaceImageRequest>
        Model::DeleteWorkspaceImageOutcomeCallable DeleteWorkspaceImageCallable(const DeleteWorkspaceImageRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeleteWorkspaceImage, request);
        }

        /**
         * An Async wrapper for DeleteWorkspaceImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkspaceImageRequestT = Model::DeleteWorkspaceImageRequest>
        void DeleteWorkspaceImageAsync(const DeleteWorkspaceImageRequestT& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeleteWorkspaceImage, request, handler, context);
        }

        /**
         * <p>Deploys associated applications to the specified WorkSpace</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeployWorkspaceApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DeployWorkspaceApplicationsOutcome DeployWorkspaceApplications(const Model::DeployWorkspaceApplicationsRequest& request) const;

        /**
         * A Callable wrapper for DeployWorkspaceApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeployWorkspaceApplicationsRequestT = Model::DeployWorkspaceApplicationsRequest>
        Model::DeployWorkspaceApplicationsOutcomeCallable DeployWorkspaceApplicationsCallable(const DeployWorkspaceApplicationsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeployWorkspaceApplications, request);
        }

        /**
         * An Async wrapper for DeployWorkspaceApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeployWorkspaceApplicationsRequestT = Model::DeployWorkspaceApplicationsRequest>
        void DeployWorkspaceApplicationsAsync(const DeployWorkspaceApplicationsRequestT& request, const DeployWorkspaceApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeployWorkspaceApplications, request, handler, context);
        }

        /**
         * <p>Deregisters the specified directory. This operation is asynchronous and
         * returns before the WorkSpace directory is deregistered. If any WorkSpaces are
         * registered to this directory, you must remove them before you can deregister the
         * directory.</p>  <p>Simple AD and AD Connector are made available to you
         * free of charge to use with WorkSpaces. If there are no WorkSpaces being used
         * with your Simple AD or AD Connector directory for 30 consecutive days, this
         * directory will be automatically deregistered for use with Amazon WorkSpaces, and
         * you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">Directory Service pricing
         * terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeregisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterWorkspaceDirectoryOutcome DeregisterWorkspaceDirectory(const Model::DeregisterWorkspaceDirectoryRequest& request) const;

        /**
         * A Callable wrapper for DeregisterWorkspaceDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterWorkspaceDirectoryRequestT = Model::DeregisterWorkspaceDirectoryRequest>
        Model::DeregisterWorkspaceDirectoryOutcomeCallable DeregisterWorkspaceDirectoryCallable(const DeregisterWorkspaceDirectoryRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DeregisterWorkspaceDirectory, request);
        }

        /**
         * An Async wrapper for DeregisterWorkspaceDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterWorkspaceDirectoryRequestT = Model::DeregisterWorkspaceDirectoryRequest>
        void DeregisterWorkspaceDirectoryAsync(const DeregisterWorkspaceDirectoryRequestT& request, const DeregisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DeregisterWorkspaceDirectory, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes the configuration of Bring Your Own License
         * (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOutcome DescribeAccount(const Model::DescribeAccountRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountRequestT = Model::DescribeAccountRequest>
        Model::DescribeAccountOutcomeCallable DescribeAccountCallable(const DescribeAccountRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeAccount, request);
        }

        /**
         * An Async wrapper for DescribeAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountRequestT = Model::DescribeAccountRequest>
        void DescribeAccountAsync(const DescribeAccountRequestT& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeAccount, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes modifications to the configuration of Bring
         * Your Own License (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccountModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountModificationsOutcome DescribeAccountModifications(const Model::DescribeAccountModificationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountModificationsRequestT = Model::DescribeAccountModificationsRequest>
        Model::DescribeAccountModificationsOutcomeCallable DescribeAccountModificationsCallable(const DescribeAccountModificationsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeAccountModifications, request);
        }

        /**
         * An Async wrapper for DescribeAccountModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountModificationsRequestT = Model::DescribeAccountModificationsRequest>
        void DescribeAccountModificationsAsync(const DescribeAccountModificationsRequestT& request, const DescribeAccountModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeAccountModifications, request, handler, context);
        }

        /**
         * <p>Describes the associations between the application and the specified
         * associated resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeApplicationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationAssociationsOutcome DescribeApplicationAssociations(const Model::DescribeApplicationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationAssociationsRequestT = Model::DescribeApplicationAssociationsRequest>
        Model::DescribeApplicationAssociationsOutcomeCallable DescribeApplicationAssociationsCallable(const DescribeApplicationAssociationsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeApplicationAssociations, request);
        }

        /**
         * An Async wrapper for DescribeApplicationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationAssociationsRequestT = Model::DescribeApplicationAssociationsRequest>
        void DescribeApplicationAssociationsAsync(const DescribeApplicationAssociationsRequestT& request, const DescribeApplicationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeApplicationAssociations, request, handler, context);
        }

        /**
         * <p>Describes the specified applications by filtering based on their compute
         * types, license availability, operating systems, and owners.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationsRequestT = Model::DescribeApplicationsRequest>
        Model::DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const DescribeApplicationsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeApplications, request);
        }

        /**
         * An Async wrapper for DescribeApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationsRequestT = Model::DescribeApplicationsRequest>
        void DescribeApplicationsAsync(const DescribeApplicationsRequestT& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeApplications, request, handler, context);
        }

        /**
         * <p>Describes the associations between the applications and the specified
         * bundle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeBundleAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBundleAssociationsOutcome DescribeBundleAssociations(const Model::DescribeBundleAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBundleAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBundleAssociationsRequestT = Model::DescribeBundleAssociationsRequest>
        Model::DescribeBundleAssociationsOutcomeCallable DescribeBundleAssociationsCallable(const DescribeBundleAssociationsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeBundleAssociations, request);
        }

        /**
         * An Async wrapper for DescribeBundleAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBundleAssociationsRequestT = Model::DescribeBundleAssociationsRequest>
        void DescribeBundleAssociationsAsync(const DescribeBundleAssociationsRequestT& request, const DescribeBundleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeBundleAssociations, request, handler, context);
        }

        /**
         * <p>Describes the specified client branding. Client branding allows you to
         * customize the log in page of various device types for your users. You can add
         * your company logo, the support email address, support link, link to reset
         * password, and a custom message for users trying to sign in.</p>  <p>Only
         * device types that have branding information configured will be shown in the
         * response.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeClientBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientBrandingOutcome DescribeClientBranding(const Model::DescribeClientBrandingRequest& request) const;

        /**
         * A Callable wrapper for DescribeClientBranding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClientBrandingRequestT = Model::DescribeClientBrandingRequest>
        Model::DescribeClientBrandingOutcomeCallable DescribeClientBrandingCallable(const DescribeClientBrandingRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeClientBranding, request);
        }

        /**
         * An Async wrapper for DescribeClientBranding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClientBrandingRequestT = Model::DescribeClientBrandingRequest>
        void DescribeClientBrandingAsync(const DescribeClientBrandingRequestT& request, const DescribeClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeClientBranding, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeClientProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientPropertiesOutcome DescribeClientProperties(const Model::DescribeClientPropertiesRequest& request) const;

        /**
         * A Callable wrapper for DescribeClientProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClientPropertiesRequestT = Model::DescribeClientPropertiesRequest>
        Model::DescribeClientPropertiesOutcomeCallable DescribeClientPropertiesCallable(const DescribeClientPropertiesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeClientProperties, request);
        }

        /**
         * An Async wrapper for DescribeClientProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClientPropertiesRequestT = Model::DescribeClientPropertiesRequest>
        void DescribeClientPropertiesAsync(const DescribeClientPropertiesRequestT& request, const DescribeClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeClientProperties, request, handler, context);
        }

        /**
         * <p>Retrieves a list of Amazon Connect client add-ins that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectClientAddIns">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectClientAddInsOutcome DescribeConnectClientAddIns(const Model::DescribeConnectClientAddInsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnectClientAddIns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectClientAddInsRequestT = Model::DescribeConnectClientAddInsRequest>
        Model::DescribeConnectClientAddInsOutcomeCallable DescribeConnectClientAddInsCallable(const DescribeConnectClientAddInsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeConnectClientAddIns, request);
        }

        /**
         * An Async wrapper for DescribeConnectClientAddIns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectClientAddInsRequestT = Model::DescribeConnectClientAddInsRequest>
        void DescribeConnectClientAddInsAsync(const DescribeConnectClientAddInsRequestT& request, const DescribeConnectClientAddInsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeConnectClientAddIns, request, handler, context);
        }

        /**
         * <p>Describes the permissions that the owner of a connection alias has granted to
         * another Amazon Web Services account for the specified connection alias. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliasPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionAliasPermissionsOutcome DescribeConnectionAliasPermissions(const Model::DescribeConnectionAliasPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnectionAliasPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectionAliasPermissionsRequestT = Model::DescribeConnectionAliasPermissionsRequest>
        Model::DescribeConnectionAliasPermissionsOutcomeCallable DescribeConnectionAliasPermissionsCallable(const DescribeConnectionAliasPermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeConnectionAliasPermissions, request);
        }

        /**
         * An Async wrapper for DescribeConnectionAliasPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectionAliasPermissionsRequestT = Model::DescribeConnectionAliasPermissionsRequest>
        void DescribeConnectionAliasPermissionsAsync(const DescribeConnectionAliasPermissionsRequestT& request, const DescribeConnectionAliasPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeConnectionAliasPermissions, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes the connection aliases used for cross-Region
         * redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionAliasesOutcome DescribeConnectionAliases(const Model::DescribeConnectionAliasesRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnectionAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectionAliasesRequestT = Model::DescribeConnectionAliasesRequest>
        Model::DescribeConnectionAliasesOutcomeCallable DescribeConnectionAliasesCallable(const DescribeConnectionAliasesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeConnectionAliases, request);
        }

        /**
         * An Async wrapper for DescribeConnectionAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectionAliasesRequestT = Model::DescribeConnectionAliasesRequest>
        void DescribeConnectionAliasesAsync(const DescribeConnectionAliasesRequestT& request, const DescribeConnectionAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeConnectionAliases, request, handler, context);
        }

        /**
         * <p>Describes the associations between the applications and the specified
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeImageAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageAssociationsOutcome DescribeImageAssociations(const Model::DescribeImageAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeImageAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImageAssociationsRequestT = Model::DescribeImageAssociationsRequest>
        Model::DescribeImageAssociationsOutcomeCallable DescribeImageAssociationsCallable(const DescribeImageAssociationsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeImageAssociations, request);
        }

        /**
         * An Async wrapper for DescribeImageAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImageAssociationsRequestT = Model::DescribeImageAssociationsRequest>
        void DescribeImageAssociationsAsync(const DescribeImageAssociationsRequestT& request, const DescribeImageAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeImageAssociations, request, handler, context);
        }

        /**
         * <p>Describes one or more of your IP access control groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpGroupsOutcome DescribeIpGroups(const Model::DescribeIpGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeIpGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIpGroupsRequestT = Model::DescribeIpGroupsRequest>
        Model::DescribeIpGroupsOutcomeCallable DescribeIpGroupsCallable(const DescribeIpGroupsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeIpGroups, request);
        }

        /**
         * An Async wrapper for DescribeIpGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIpGroupsRequestT = Model::DescribeIpGroupsRequest>
        void DescribeIpGroupsAsync(const DescribeIpGroupsRequestT& request, const DescribeIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeIpGroups, request, handler, context);
        }

        /**
         * <p>Describes the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTagsRequestT = Model::DescribeTagsRequest>
        Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const DescribeTagsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeTags, request);
        }

        /**
         * An Async wrapper for DescribeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTagsRequestT = Model::DescribeTagsRequest>
        void DescribeTagsAsync(const DescribeTagsRequestT& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeTags, request, handler, context);
        }

        /**
         * <p>Describes the associations betweens applications and the specified
         * WorkSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceAssociationsOutcome DescribeWorkspaceAssociations(const Model::DescribeWorkspaceAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaceAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceAssociationsRequestT = Model::DescribeWorkspaceAssociationsRequest>
        Model::DescribeWorkspaceAssociationsOutcomeCallable DescribeWorkspaceAssociationsCallable(const DescribeWorkspaceAssociationsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeWorkspaceAssociations, request);
        }

        /**
         * An Async wrapper for DescribeWorkspaceAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceAssociationsRequestT = Model::DescribeWorkspaceAssociationsRequest>
        void DescribeWorkspaceAssociationsAsync(const DescribeWorkspaceAssociationsRequestT& request, const DescribeWorkspaceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeWorkspaceAssociations, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes the available WorkSpace bundles.</p> <p>You
         * can filter the results using either bundle ID or owner, but not
         * both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceBundlesOutcome DescribeWorkspaceBundles(const Model::DescribeWorkspaceBundlesRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaceBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceBundlesRequestT = Model::DescribeWorkspaceBundlesRequest>
        Model::DescribeWorkspaceBundlesOutcomeCallable DescribeWorkspaceBundlesCallable(const DescribeWorkspaceBundlesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeWorkspaceBundles, request);
        }

        /**
         * An Async wrapper for DescribeWorkspaceBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceBundlesRequestT = Model::DescribeWorkspaceBundlesRequest>
        void DescribeWorkspaceBundlesAsync(const DescribeWorkspaceBundlesRequestT& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeWorkspaceBundles, request, handler, context);
        }

        /**
         * <p>Describes the available directories that are registered with Amazon
         * WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceDirectoriesOutcome DescribeWorkspaceDirectories(const Model::DescribeWorkspaceDirectoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaceDirectories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceDirectoriesRequestT = Model::DescribeWorkspaceDirectoriesRequest>
        Model::DescribeWorkspaceDirectoriesOutcomeCallable DescribeWorkspaceDirectoriesCallable(const DescribeWorkspaceDirectoriesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeWorkspaceDirectories, request);
        }

        /**
         * An Async wrapper for DescribeWorkspaceDirectories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceDirectoriesRequestT = Model::DescribeWorkspaceDirectoriesRequest>
        void DescribeWorkspaceDirectoriesAsync(const DescribeWorkspaceDirectoriesRequestT& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeWorkspaceDirectories, request, handler, context);
        }

        /**
         * <p>Describes the permissions that the owner of an image has granted to other
         * Amazon Web Services accounts for an image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceImagePermissionsOutcome DescribeWorkspaceImagePermissions(const Model::DescribeWorkspaceImagePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaceImagePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceImagePermissionsRequestT = Model::DescribeWorkspaceImagePermissionsRequest>
        Model::DescribeWorkspaceImagePermissionsOutcomeCallable DescribeWorkspaceImagePermissionsCallable(const DescribeWorkspaceImagePermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeWorkspaceImagePermissions, request);
        }

        /**
         * An Async wrapper for DescribeWorkspaceImagePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceImagePermissionsRequestT = Model::DescribeWorkspaceImagePermissionsRequest>
        void DescribeWorkspaceImagePermissionsAsync(const DescribeWorkspaceImagePermissionsRequestT& request, const DescribeWorkspaceImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeWorkspaceImagePermissions, request, handler, context);
        }

        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * identifiers are provided. Otherwise, all images in the account are described.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceImagesOutcome DescribeWorkspaceImages(const Model::DescribeWorkspaceImagesRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaceImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceImagesRequestT = Model::DescribeWorkspaceImagesRequest>
        Model::DescribeWorkspaceImagesOutcomeCallable DescribeWorkspaceImagesCallable(const DescribeWorkspaceImagesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeWorkspaceImages, request);
        }

        /**
         * An Async wrapper for DescribeWorkspaceImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceImagesRequestT = Model::DescribeWorkspaceImagesRequest>
        void DescribeWorkspaceImagesAsync(const DescribeWorkspaceImagesRequestT& request, const DescribeWorkspaceImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeWorkspaceImages, request, handler, context);
        }

        /**
         * <p>Describes the snapshots for the specified WorkSpace.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceSnapshotsOutcome DescribeWorkspaceSnapshots(const Model::DescribeWorkspaceSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaceSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceSnapshotsRequestT = Model::DescribeWorkspaceSnapshotsRequest>
        Model::DescribeWorkspaceSnapshotsOutcomeCallable DescribeWorkspaceSnapshotsCallable(const DescribeWorkspaceSnapshotsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeWorkspaceSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeWorkspaceSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceSnapshotsRequestT = Model::DescribeWorkspaceSnapshotsRequest>
        void DescribeWorkspaceSnapshotsAsync(const DescribeWorkspaceSnapshotsRequestT& request, const DescribeWorkspaceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeWorkspaceSnapshots, request, handler, context);
        }

        /**
         * <p>Describes the specified WorkSpaces.</p> <p>You can filter the results by
         * using the bundle identifier, directory identifier, or owner, but you can specify
         * only one filter at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspacesOutcome DescribeWorkspaces(const Model::DescribeWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspacesRequestT = Model::DescribeWorkspacesRequest>
        Model::DescribeWorkspacesOutcomeCallable DescribeWorkspacesCallable(const DescribeWorkspacesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeWorkspaces, request);
        }

        /**
         * An Async wrapper for DescribeWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspacesRequestT = Model::DescribeWorkspacesRequest>
        void DescribeWorkspacesAsync(const DescribeWorkspacesRequestT& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeWorkspaces, request, handler, context);
        }

        /**
         * <p>Describes the connection status of the specified WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspacesConnectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspacesConnectionStatusOutcome DescribeWorkspacesConnectionStatus(const Model::DescribeWorkspacesConnectionStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspacesConnectionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspacesConnectionStatusRequestT = Model::DescribeWorkspacesConnectionStatusRequest>
        Model::DescribeWorkspacesConnectionStatusOutcomeCallable DescribeWorkspacesConnectionStatusCallable(const DescribeWorkspacesConnectionStatusRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DescribeWorkspacesConnectionStatus, request);
        }

        /**
         * An Async wrapper for DescribeWorkspacesConnectionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspacesConnectionStatusRequestT = Model::DescribeWorkspacesConnectionStatusRequest>
        void DescribeWorkspacesConnectionStatusAsync(const DescribeWorkspacesConnectionStatusRequestT& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DescribeWorkspacesConnectionStatus, request, handler, context);
        }

        /**
         * <p>Disassociates a connection alias from a directory. Disassociating a
         * connection alias disables cross-Region redirection between two directories in
         * different Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectionAliasOutcome DisassociateConnectionAlias(const Model::DisassociateConnectionAliasRequest& request) const;

        /**
         * A Callable wrapper for DisassociateConnectionAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateConnectionAliasRequestT = Model::DisassociateConnectionAliasRequest>
        Model::DisassociateConnectionAliasOutcomeCallable DisassociateConnectionAliasCallable(const DisassociateConnectionAliasRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DisassociateConnectionAlias, request);
        }

        /**
         * An Async wrapper for DisassociateConnectionAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateConnectionAliasRequestT = Model::DisassociateConnectionAliasRequest>
        void DisassociateConnectionAliasAsync(const DisassociateConnectionAliasRequestT& request, const DisassociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DisassociateConnectionAlias, request, handler, context);
        }

        /**
         * <p>Disassociates the specified IP access control group from the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateIpGroupsOutcome DisassociateIpGroups(const Model::DisassociateIpGroupsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateIpGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateIpGroupsRequestT = Model::DisassociateIpGroupsRequest>
        Model::DisassociateIpGroupsOutcomeCallable DisassociateIpGroupsCallable(const DisassociateIpGroupsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DisassociateIpGroups, request);
        }

        /**
         * An Async wrapper for DisassociateIpGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateIpGroupsRequestT = Model::DisassociateIpGroupsRequest>
        void DisassociateIpGroupsAsync(const DisassociateIpGroupsRequestT& request, const DisassociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DisassociateIpGroups, request, handler, context);
        }

        /**
         * <p>Disassociates the specified application from a WorkSpace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateWorkspaceApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWorkspaceApplicationOutcome DisassociateWorkspaceApplication(const Model::DisassociateWorkspaceApplicationRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWorkspaceApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateWorkspaceApplicationRequestT = Model::DisassociateWorkspaceApplicationRequest>
        Model::DisassociateWorkspaceApplicationOutcomeCallable DisassociateWorkspaceApplicationCallable(const DisassociateWorkspaceApplicationRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::DisassociateWorkspaceApplication, request);
        }

        /**
         * An Async wrapper for DisassociateWorkspaceApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateWorkspaceApplicationRequestT = Model::DisassociateWorkspaceApplicationRequest>
        void DisassociateWorkspaceApplicationAsync(const DisassociateWorkspaceApplicationRequestT& request, const DisassociateWorkspaceApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::DisassociateWorkspaceApplication, request, handler, context);
        }

        /**
         * <p>Imports client branding. Client branding allows you to customize your
         * WorkSpace's client login portal. You can tailor your login portal company logo,
         * the support email address, support link, link to reset password, and a custom
         * message for users trying to sign in.</p> <p>After you import client branding,
         * the default branding experience for the specified platform type is replaced with
         * the imported experience</p>  <ul> <li> <p>You must specify at least one
         * platform type when importing client branding.</p> </li> <li> <p>You can import
         * up to 6 MB of data with each request. If your request exceeds this limit, you
         * can import client branding for different platform types using separate
         * requests.</p> </li> <li> <p>In each platform type, the <code>SupportEmail</code>
         * and <code>SupportLink</code> parameters are mutually exclusive. You can specify
         * only one parameter for each platform type, but not both.</p> </li> <li>
         * <p>Imported data can take up to a minute to appear in the WorkSpaces client.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportClientBranding">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportClientBrandingOutcome ImportClientBranding(const Model::ImportClientBrandingRequest& request) const;

        /**
         * A Callable wrapper for ImportClientBranding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportClientBrandingRequestT = Model::ImportClientBrandingRequest>
        Model::ImportClientBrandingOutcomeCallable ImportClientBrandingCallable(const ImportClientBrandingRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ImportClientBranding, request);
        }

        /**
         * An Async wrapper for ImportClientBranding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportClientBrandingRequestT = Model::ImportClientBrandingRequest>
        void ImportClientBrandingAsync(const ImportClientBrandingRequestT& request, const ImportClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ImportClientBranding, request, handler, context);
        }

        /**
         * <p>Imports the specified Windows 10 or 11 Bring Your Own License (BYOL) image
         * into Amazon WorkSpaces. The image must be an already licensed Amazon EC2 image
         * that is in your Amazon Web Services account, and you must own the image. For
         * more information about creating BYOL images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
         * Bring Your Own Windows Desktop Licenses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportWorkspaceImageOutcome ImportWorkspaceImage(const Model::ImportWorkspaceImageRequest& request) const;

        /**
         * A Callable wrapper for ImportWorkspaceImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportWorkspaceImageRequestT = Model::ImportWorkspaceImageRequest>
        Model::ImportWorkspaceImageOutcomeCallable ImportWorkspaceImageCallable(const ImportWorkspaceImageRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ImportWorkspaceImage, request);
        }

        /**
         * An Async wrapper for ImportWorkspaceImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportWorkspaceImageRequestT = Model::ImportWorkspaceImageRequest>
        void ImportWorkspaceImageAsync(const ImportWorkspaceImageRequestT& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ImportWorkspaceImage, request, handler, context);
        }

        /**
         * <p>Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that
         * you can use for the network management interface when you enable Bring Your Own
         * License (BYOL). </p> <p>This operation can be run only by Amazon Web Services
         * accounts that are enabled for BYOL. If your account isn't enabled for BYOL,
         * you'll receive an <code>AccessDeniedException</code> error.</p> <p>The
         * management network interface is connected to a secure Amazon WorkSpaces
         * management network. It is used for interactive streaming of the WorkSpace
         * desktop to Amazon WorkSpaces clients, and to allow Amazon WorkSpaces to manage
         * the WorkSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ListAvailableManagementCidrRanges">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableManagementCidrRangesOutcome ListAvailableManagementCidrRanges(const Model::ListAvailableManagementCidrRangesRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableManagementCidrRanges that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAvailableManagementCidrRangesRequestT = Model::ListAvailableManagementCidrRangesRequest>
        Model::ListAvailableManagementCidrRangesOutcomeCallable ListAvailableManagementCidrRangesCallable(const ListAvailableManagementCidrRangesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ListAvailableManagementCidrRanges, request);
        }

        /**
         * An Async wrapper for ListAvailableManagementCidrRanges that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAvailableManagementCidrRangesRequestT = Model::ListAvailableManagementCidrRangesRequest>
        void ListAvailableManagementCidrRangesAsync(const ListAvailableManagementCidrRangesRequestT& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ListAvailableManagementCidrRanges, request, handler, context);
        }

        /**
         * <p>Migrates a WorkSpace from one operating system or bundle type to another,
         * while retaining the data on the user volume.</p> <p>The migration process
         * recreates the WorkSpace by using a new root volume from the target bundle image
         * and the user volume from the last available snapshot of the original WorkSpace.
         * During migration, the original <code>D:\Users\%USERNAME%</code> user profile
         * folder is renamed to <code>D:\Users\%USERNAME%MMddyyTHHmmss%.NotMigrated</code>.
         * A new <code>D:\Users\%USERNAME%\</code> folder is generated by the new OS.
         * Certain files in the old user profile are moved to the new user profile.</p>
         * <p>For available migration scenarios, details about what happens during
         * migration, and best practices, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/migrate-workspaces.html">Migrate
         * a WorkSpace</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/MigrateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::MigrateWorkspaceOutcome MigrateWorkspace(const Model::MigrateWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for MigrateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MigrateWorkspaceRequestT = Model::MigrateWorkspaceRequest>
        Model::MigrateWorkspaceOutcomeCallable MigrateWorkspaceCallable(const MigrateWorkspaceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::MigrateWorkspace, request);
        }

        /**
         * An Async wrapper for MigrateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MigrateWorkspaceRequestT = Model::MigrateWorkspaceRequest>
        void MigrateWorkspaceAsync(const MigrateWorkspaceRequestT& request, const MigrateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::MigrateWorkspace, request, handler, context);
        }

        /**
         * <p>Modifies the configuration of Bring Your Own License (BYOL) for the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyAccountOutcome ModifyAccount(const Model::ModifyAccountRequest& request) const;

        /**
         * A Callable wrapper for ModifyAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyAccountRequestT = Model::ModifyAccountRequest>
        Model::ModifyAccountOutcomeCallable ModifyAccountCallable(const ModifyAccountRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifyAccount, request);
        }

        /**
         * An Async wrapper for ModifyAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyAccountRequestT = Model::ModifyAccountRequest>
        void ModifyAccountAsync(const ModifyAccountRequestT& request, const ModifyAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifyAccount, request, handler, context);
        }

        /**
         * <p>Modifies the properties of the certificate-based authentication you want to
         * use with your WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyCertificateBasedAuthProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyCertificateBasedAuthPropertiesOutcome ModifyCertificateBasedAuthProperties(const Model::ModifyCertificateBasedAuthPropertiesRequest& request) const;

        /**
         * A Callable wrapper for ModifyCertificateBasedAuthProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyCertificateBasedAuthPropertiesRequestT = Model::ModifyCertificateBasedAuthPropertiesRequest>
        Model::ModifyCertificateBasedAuthPropertiesOutcomeCallable ModifyCertificateBasedAuthPropertiesCallable(const ModifyCertificateBasedAuthPropertiesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifyCertificateBasedAuthProperties, request);
        }

        /**
         * An Async wrapper for ModifyCertificateBasedAuthProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyCertificateBasedAuthPropertiesRequestT = Model::ModifyCertificateBasedAuthPropertiesRequest>
        void ModifyCertificateBasedAuthPropertiesAsync(const ModifyCertificateBasedAuthPropertiesRequestT& request, const ModifyCertificateBasedAuthPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifyCertificateBasedAuthProperties, request, handler, context);
        }

        /**
         * <p>Modifies the properties of the specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyClientProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClientPropertiesOutcome ModifyClientProperties(const Model::ModifyClientPropertiesRequest& request) const;

        /**
         * A Callable wrapper for ModifyClientProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyClientPropertiesRequestT = Model::ModifyClientPropertiesRequest>
        Model::ModifyClientPropertiesOutcomeCallable ModifyClientPropertiesCallable(const ModifyClientPropertiesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifyClientProperties, request);
        }

        /**
         * An Async wrapper for ModifyClientProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyClientPropertiesRequestT = Model::ModifyClientPropertiesRequest>
        void ModifyClientPropertiesAsync(const ModifyClientPropertiesRequestT& request, const ModifyClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifyClientProperties, request, handler, context);
        }

        /**
         * <p>Modifies multiple properties related to SAML 2.0 authentication, including
         * the enablement status, user access URL, and relay state parameter name that are
         * used for configuring federation with an SAML 2.0 identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifySamlProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySamlPropertiesOutcome ModifySamlProperties(const Model::ModifySamlPropertiesRequest& request) const;

        /**
         * A Callable wrapper for ModifySamlProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifySamlPropertiesRequestT = Model::ModifySamlPropertiesRequest>
        Model::ModifySamlPropertiesOutcomeCallable ModifySamlPropertiesCallable(const ModifySamlPropertiesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifySamlProperties, request);
        }

        /**
         * An Async wrapper for ModifySamlProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifySamlPropertiesRequestT = Model::ModifySamlPropertiesRequest>
        void ModifySamlPropertiesAsync(const ModifySamlPropertiesRequestT& request, const ModifySamlPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifySamlProperties, request, handler, context);
        }

        /**
         * <p>Modifies the self-service WorkSpace management capabilities for your users.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/enable-user-self-service-workspace-management.html">Enable
         * Self-Service WorkSpace Management Capabilities for Your Users</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifySelfservicePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySelfservicePermissionsOutcome ModifySelfservicePermissions(const Model::ModifySelfservicePermissionsRequest& request) const;

        /**
         * A Callable wrapper for ModifySelfservicePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifySelfservicePermissionsRequestT = Model::ModifySelfservicePermissionsRequest>
        Model::ModifySelfservicePermissionsOutcomeCallable ModifySelfservicePermissionsCallable(const ModifySelfservicePermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifySelfservicePermissions, request);
        }

        /**
         * An Async wrapper for ModifySelfservicePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifySelfservicePermissionsRequestT = Model::ModifySelfservicePermissionsRequest>
        void ModifySelfservicePermissionsAsync(const ModifySelfservicePermissionsRequestT& request, const ModifySelfservicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifySelfservicePermissions, request, handler, context);
        }

        /**
         * <p>Specifies which devices and operating systems users can use to access their
         * WorkSpaces. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html#control-device-access">
         * Control Device Access</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceAccessProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceAccessPropertiesOutcome ModifyWorkspaceAccessProperties(const Model::ModifyWorkspaceAccessPropertiesRequest& request) const;

        /**
         * A Callable wrapper for ModifyWorkspaceAccessProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyWorkspaceAccessPropertiesRequestT = Model::ModifyWorkspaceAccessPropertiesRequest>
        Model::ModifyWorkspaceAccessPropertiesOutcomeCallable ModifyWorkspaceAccessPropertiesCallable(const ModifyWorkspaceAccessPropertiesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifyWorkspaceAccessProperties, request);
        }

        /**
         * An Async wrapper for ModifyWorkspaceAccessProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyWorkspaceAccessPropertiesRequestT = Model::ModifyWorkspaceAccessPropertiesRequest>
        void ModifyWorkspaceAccessPropertiesAsync(const ModifyWorkspaceAccessPropertiesRequestT& request, const ModifyWorkspaceAccessPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifyWorkspaceAccessProperties, request, handler, context);
        }

        /**
         * <p>Modify the default properties used to create WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceCreationProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceCreationPropertiesOutcome ModifyWorkspaceCreationProperties(const Model::ModifyWorkspaceCreationPropertiesRequest& request) const;

        /**
         * A Callable wrapper for ModifyWorkspaceCreationProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyWorkspaceCreationPropertiesRequestT = Model::ModifyWorkspaceCreationPropertiesRequest>
        Model::ModifyWorkspaceCreationPropertiesOutcomeCallable ModifyWorkspaceCreationPropertiesCallable(const ModifyWorkspaceCreationPropertiesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifyWorkspaceCreationProperties, request);
        }

        /**
         * An Async wrapper for ModifyWorkspaceCreationProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyWorkspaceCreationPropertiesRequestT = Model::ModifyWorkspaceCreationPropertiesRequest>
        void ModifyWorkspaceCreationPropertiesAsync(const ModifyWorkspaceCreationPropertiesRequestT& request, const ModifyWorkspaceCreationPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifyWorkspaceCreationProperties, request, handler, context);
        }

        /**
         * <p>Modifies the specified WorkSpace properties. For important information about
         * how to modify the size of the root and user volumes, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">
         * Modify a WorkSpace</a>. </p>  <p>The <code>MANUAL</code> running mode
         * value is only supported by Amazon WorkSpaces Core. Contact your account team to
         * be allow-listed to use this value. For more information, see <a
         * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspacePropertiesOutcome ModifyWorkspaceProperties(const Model::ModifyWorkspacePropertiesRequest& request) const;

        /**
         * A Callable wrapper for ModifyWorkspaceProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyWorkspacePropertiesRequestT = Model::ModifyWorkspacePropertiesRequest>
        Model::ModifyWorkspacePropertiesOutcomeCallable ModifyWorkspacePropertiesCallable(const ModifyWorkspacePropertiesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifyWorkspaceProperties, request);
        }

        /**
         * An Async wrapper for ModifyWorkspaceProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyWorkspacePropertiesRequestT = Model::ModifyWorkspacePropertiesRequest>
        void ModifyWorkspacePropertiesAsync(const ModifyWorkspacePropertiesRequestT& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifyWorkspaceProperties, request, handler, context);
        }

        /**
         * <p>Sets the state of the specified WorkSpace.</p> <p>To maintain a WorkSpace
         * without being interrupted, set the WorkSpace state to
         * <code>ADMIN_MAINTENANCE</code>. WorkSpaces in this state do not respond to
         * requests to reboot, stop, start, rebuild, or restore. An AutoStop WorkSpace in
         * this state is not stopped. Users cannot log into a WorkSpace in the
         * <code>ADMIN_MAINTENANCE</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceState">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceStateOutcome ModifyWorkspaceState(const Model::ModifyWorkspaceStateRequest& request) const;

        /**
         * A Callable wrapper for ModifyWorkspaceState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyWorkspaceStateRequestT = Model::ModifyWorkspaceStateRequest>
        Model::ModifyWorkspaceStateOutcomeCallable ModifyWorkspaceStateCallable(const ModifyWorkspaceStateRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::ModifyWorkspaceState, request);
        }

        /**
         * An Async wrapper for ModifyWorkspaceState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyWorkspaceStateRequestT = Model::ModifyWorkspaceStateRequest>
        void ModifyWorkspaceStateAsync(const ModifyWorkspaceStateRequestT& request, const ModifyWorkspaceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::ModifyWorkspaceState, request, handler, context);
        }

        /**
         * <p>Reboots the specified WorkSpaces.</p> <p>You cannot reboot a WorkSpace unless
         * its state is <code>AVAILABLE</code>, <code>UNHEALTHY</code>, or
         * <code>REBOOTING</code>. Reboot a WorkSpace in the <code>REBOOTING</code> state
         * only if your WorkSpace has been stuck in the <code>REBOOTING</code> state for
         * over 20 minutes.</p> <p>This operation is asynchronous and returns before the
         * WorkSpaces have rebooted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebootWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootWorkspacesOutcome RebootWorkspaces(const Model::RebootWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for RebootWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootWorkspacesRequestT = Model::RebootWorkspacesRequest>
        Model::RebootWorkspacesOutcomeCallable RebootWorkspacesCallable(const RebootWorkspacesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::RebootWorkspaces, request);
        }

        /**
         * An Async wrapper for RebootWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootWorkspacesRequestT = Model::RebootWorkspacesRequest>
        void RebootWorkspacesAsync(const RebootWorkspacesRequestT& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::RebootWorkspaces, request, handler, context);
        }

        /**
         * <p>Rebuilds the specified WorkSpace.</p> <p>You cannot rebuild a WorkSpace
         * unless its state is <code>AVAILABLE</code>, <code>ERROR</code>,
         * <code>UNHEALTHY</code>, <code>STOPPED</code>, or <code>REBOOTING</code>.</p>
         * <p>Rebuilding a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpaces have been completely rebuilt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebuildWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::RebuildWorkspacesOutcome RebuildWorkspaces(const Model::RebuildWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for RebuildWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebuildWorkspacesRequestT = Model::RebuildWorkspacesRequest>
        Model::RebuildWorkspacesOutcomeCallable RebuildWorkspacesCallable(const RebuildWorkspacesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::RebuildWorkspaces, request);
        }

        /**
         * An Async wrapper for RebuildWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebuildWorkspacesRequestT = Model::RebuildWorkspacesRequest>
        void RebuildWorkspacesAsync(const RebuildWorkspacesRequestT& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::RebuildWorkspaces, request, handler, context);
        }

        /**
         * <p>Registers the specified directory. This operation is asynchronous and returns
         * before the WorkSpace directory is registered. If this is the first time you are
         * registering a directory, you will need to create the workspaces_DefaultRole role
         * before you can register a directory. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspaces-access-control.html#create-default-role">
         * Creating the workspaces_DefaultRole Role</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RegisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterWorkspaceDirectoryOutcome RegisterWorkspaceDirectory(const Model::RegisterWorkspaceDirectoryRequest& request) const;

        /**
         * A Callable wrapper for RegisterWorkspaceDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterWorkspaceDirectoryRequestT = Model::RegisterWorkspaceDirectoryRequest>
        Model::RegisterWorkspaceDirectoryOutcomeCallable RegisterWorkspaceDirectoryCallable(const RegisterWorkspaceDirectoryRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::RegisterWorkspaceDirectory, request);
        }

        /**
         * An Async wrapper for RegisterWorkspaceDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterWorkspaceDirectoryRequestT = Model::RegisterWorkspaceDirectoryRequest>
        void RegisterWorkspaceDirectoryAsync(const RegisterWorkspaceDirectoryRequestT& request, const RegisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::RegisterWorkspaceDirectory, request, handler, context);
        }

        /**
         * <p>Restores the specified WorkSpace to its last known healthy state.</p> <p>You
         * cannot restore a WorkSpace unless its state is <code> AVAILABLE</code>,
         * <code>ERROR</code>, <code>UNHEALTHY</code>, or <code>STOPPED</code>.</p>
         * <p>Restoring a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/restore-workspace.html">Restore
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpace is completely restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RestoreWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreWorkspaceOutcome RestoreWorkspace(const Model::RestoreWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for RestoreWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreWorkspaceRequestT = Model::RestoreWorkspaceRequest>
        Model::RestoreWorkspaceOutcomeCallable RestoreWorkspaceCallable(const RestoreWorkspaceRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::RestoreWorkspace, request);
        }

        /**
         * An Async wrapper for RestoreWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreWorkspaceRequestT = Model::RestoreWorkspaceRequest>
        void RestoreWorkspaceAsync(const RestoreWorkspaceRequestT& request, const RestoreWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::RestoreWorkspace, request, handler, context);
        }

        /**
         * <p>Removes one or more rules from the specified IP access control
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RevokeIpRules">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeIpRulesOutcome RevokeIpRules(const Model::RevokeIpRulesRequest& request) const;

        /**
         * A Callable wrapper for RevokeIpRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeIpRulesRequestT = Model::RevokeIpRulesRequest>
        Model::RevokeIpRulesOutcomeCallable RevokeIpRulesCallable(const RevokeIpRulesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::RevokeIpRules, request);
        }

        /**
         * An Async wrapper for RevokeIpRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeIpRulesRequestT = Model::RevokeIpRulesRequest>
        void RevokeIpRulesAsync(const RevokeIpRulesRequestT& request, const RevokeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::RevokeIpRules, request, handler, context);
        }

        /**
         * <p>Starts the specified WorkSpaces.</p> <p>You cannot start a WorkSpace unless
         * it has a running mode of <code>AutoStop</code> and a state of
         * <code>STOPPED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StartWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkspacesOutcome StartWorkspaces(const Model::StartWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for StartWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartWorkspacesRequestT = Model::StartWorkspacesRequest>
        Model::StartWorkspacesOutcomeCallable StartWorkspacesCallable(const StartWorkspacesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::StartWorkspaces, request);
        }

        /**
         * An Async wrapper for StartWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartWorkspacesRequestT = Model::StartWorkspacesRequest>
        void StartWorkspacesAsync(const StartWorkspacesRequestT& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::StartWorkspaces, request, handler, context);
        }

        /**
         * <p> Stops the specified WorkSpaces.</p> <p>You cannot stop a WorkSpace unless it
         * has a running mode of <code>AutoStop</code> and a state of
         * <code>AVAILABLE</code>, <code>IMPAIRED</code>, <code>UNHEALTHY</code>, or
         * <code>ERROR</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StopWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkspacesOutcome StopWorkspaces(const Model::StopWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for StopWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopWorkspacesRequestT = Model::StopWorkspacesRequest>
        Model::StopWorkspacesOutcomeCallable StopWorkspacesCallable(const StopWorkspacesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::StopWorkspaces, request);
        }

        /**
         * An Async wrapper for StopWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopWorkspacesRequestT = Model::StopWorkspacesRequest>
        void StopWorkspacesAsync(const StopWorkspacesRequestT& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::StopWorkspaces, request, handler, context);
        }

        /**
         * <p>Terminates the specified WorkSpaces.</p>  <p>Terminating a
         * WorkSpace is a permanent action and cannot be undone. The user's data is
         * destroyed. If you need to archive any user data, contact Amazon Web Services
         * Support before terminating the WorkSpace.</p>  <p>You can terminate
         * a WorkSpace that is in any state except <code>SUSPENDED</code>.</p> <p>This
         * operation is asynchronous and returns before the WorkSpaces have been completely
         * terminated. After a WorkSpace is terminated, the <code>TERMINATED</code> state
         * is returned only briefly before the WorkSpace directory metadata is cleaned up,
         * so this state is rarely returned. To confirm that a WorkSpace is terminated,
         * check for the WorkSpace ID by using <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
         * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
         * has been successfully terminated.</p>  <p>Simple AD and AD Connector are
         * made available to you free of charge to use with WorkSpaces. If there are no
         * WorkSpaces being used with your Simple AD or AD Connector directory for 30
         * consecutive days, this directory will be automatically deregistered for use with
         * Amazon WorkSpaces, and you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">Directory Service pricing
         * terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TerminateWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateWorkspacesOutcome TerminateWorkspaces(const Model::TerminateWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for TerminateWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateWorkspacesRequestT = Model::TerminateWorkspacesRequest>
        Model::TerminateWorkspacesOutcomeCallable TerminateWorkspacesCallable(const TerminateWorkspacesRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::TerminateWorkspaces, request);
        }

        /**
         * An Async wrapper for TerminateWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateWorkspacesRequestT = Model::TerminateWorkspacesRequest>
        void TerminateWorkspacesAsync(const TerminateWorkspacesRequestT& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::TerminateWorkspaces, request, handler, context);
        }

        /**
         * <p>Updates a Amazon Connect client add-in. Use this action to update the name
         * and endpoint URL of a Amazon Connect client add-in.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateConnectClientAddIn">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectClientAddInOutcome UpdateConnectClientAddIn(const Model::UpdateConnectClientAddInRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectClientAddIn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectClientAddInRequestT = Model::UpdateConnectClientAddInRequest>
        Model::UpdateConnectClientAddInOutcomeCallable UpdateConnectClientAddInCallable(const UpdateConnectClientAddInRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::UpdateConnectClientAddIn, request);
        }

        /**
         * An Async wrapper for UpdateConnectClientAddIn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectClientAddInRequestT = Model::UpdateConnectClientAddInRequest>
        void UpdateConnectClientAddInAsync(const UpdateConnectClientAddInRequestT& request, const UpdateConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::UpdateConnectClientAddIn, request, handler, context);
        }

        /**
         * <p>Shares or unshares a connection alias with one account by specifying whether
         * that account has permission to associate the connection alias with a directory.
         * If the association permission is granted, the connection alias is shared with
         * that account. If the association permission is revoked, the connection alias is
         * unshared with the account. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <ul> <li>
         * <p>Before performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> </li> <li> <p>To delete a
         * connection alias that has been shared, the shared account must first
         * disassociate the connection alias from any directories it has been associated
         * with. Then you must unshare the connection alias from the account it has been
         * shared with. You can delete a connection alias only after it is no longer shared
         * with any accounts or associated with any directories.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateConnectionAliasPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionAliasPermissionOutcome UpdateConnectionAliasPermission(const Model::UpdateConnectionAliasPermissionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectionAliasPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectionAliasPermissionRequestT = Model::UpdateConnectionAliasPermissionRequest>
        Model::UpdateConnectionAliasPermissionOutcomeCallable UpdateConnectionAliasPermissionCallable(const UpdateConnectionAliasPermissionRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::UpdateConnectionAliasPermission, request);
        }

        /**
         * An Async wrapper for UpdateConnectionAliasPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectionAliasPermissionRequestT = Model::UpdateConnectionAliasPermissionRequest>
        void UpdateConnectionAliasPermissionAsync(const UpdateConnectionAliasPermissionRequestT& request, const UpdateConnectionAliasPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::UpdateConnectionAliasPermission, request, handler, context);
        }

        /**
         * <p>Replaces the current rules of the specified IP access control group with the
         * specified rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateRulesOfIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRulesOfIpGroupOutcome UpdateRulesOfIpGroup(const Model::UpdateRulesOfIpGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRulesOfIpGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRulesOfIpGroupRequestT = Model::UpdateRulesOfIpGroupRequest>
        Model::UpdateRulesOfIpGroupOutcomeCallable UpdateRulesOfIpGroupCallable(const UpdateRulesOfIpGroupRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::UpdateRulesOfIpGroup, request);
        }

        /**
         * An Async wrapper for UpdateRulesOfIpGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRulesOfIpGroupRequestT = Model::UpdateRulesOfIpGroupRequest>
        void UpdateRulesOfIpGroupAsync(const UpdateRulesOfIpGroupRequestT& request, const UpdateRulesOfIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::UpdateRulesOfIpGroup, request, handler, context);
        }

        /**
         * <p>Updates a WorkSpace bundle with a new image. For more information about
         * updating WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-custom-bundle.html">
         * Update a Custom WorkSpaces Bundle</a>.</p>  <p>Existing WorkSpaces
         * aren't automatically updated when you update the bundle that they're based on.
         * To update existing WorkSpaces that are based on a bundle that you've updated,
         * you must either rebuild the WorkSpaces or delete and recreate them.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceBundleOutcome UpdateWorkspaceBundle(const Model::UpdateWorkspaceBundleRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspaceBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkspaceBundleRequestT = Model::UpdateWorkspaceBundleRequest>
        Model::UpdateWorkspaceBundleOutcomeCallable UpdateWorkspaceBundleCallable(const UpdateWorkspaceBundleRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::UpdateWorkspaceBundle, request);
        }

        /**
         * An Async wrapper for UpdateWorkspaceBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkspaceBundleRequestT = Model::UpdateWorkspaceBundleRequest>
        void UpdateWorkspaceBundleAsync(const UpdateWorkspaceBundleRequestT& request, const UpdateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::UpdateWorkspaceBundle, request, handler, context);
        }

        /**
         * <p>Shares or unshares an image with one account in the same Amazon Web Services
         * Region by specifying whether that account has permission to copy the image. If
         * the copy image permission is granted, the image is shared with that account. If
         * the copy image permission is revoked, the image is unshared with the
         * account.</p> <p>After an image has been shared, the recipient account can copy
         * the image to other Regions as needed.</p> <p>In the China (Ningxia) Region, you
         * can copy images only within the same Region.</p> <p>In Amazon Web Services
         * GovCloud (US), to copy images to and from other Regions, contact Amazon Web
         * Services Support.</p> <p>For more information about sharing images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/share-custom-image.html">
         * Share or Unshare a Custom WorkSpaces Image</a>.</p>  <ul> <li> <p>To
         * delete an image that has been shared, you must unshare the image before you
         * delete it.</p> </li> <li> <p>Sharing Bring Your Own License (BYOL) images across
         * Amazon Web Services accounts isn't supported at this time in Amazon Web Services
         * GovCloud (US). To share BYOL images across accounts in Amazon Web Services
         * GovCloud (US), contact Amazon Web Services Support.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceImagePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceImagePermissionOutcome UpdateWorkspaceImagePermission(const Model::UpdateWorkspaceImagePermissionRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspaceImagePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkspaceImagePermissionRequestT = Model::UpdateWorkspaceImagePermissionRequest>
        Model::UpdateWorkspaceImagePermissionOutcomeCallable UpdateWorkspaceImagePermissionCallable(const UpdateWorkspaceImagePermissionRequestT& request) const
        {
            return SubmitCallable(&WorkSpacesClient::UpdateWorkspaceImagePermission, request);
        }

        /**
         * An Async wrapper for UpdateWorkspaceImagePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkspaceImagePermissionRequestT = Model::UpdateWorkspaceImagePermissionRequest>
        void UpdateWorkspaceImagePermissionAsync(const UpdateWorkspaceImagePermissionRequestT& request, const UpdateWorkspaceImagePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkSpacesClient::UpdateWorkspaceImagePermission, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkSpacesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WorkSpacesClient>;
      void init(const WorkSpacesClientConfiguration& clientConfiguration);

      WorkSpacesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkSpacesEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkSpaces
} // namespace Aws
