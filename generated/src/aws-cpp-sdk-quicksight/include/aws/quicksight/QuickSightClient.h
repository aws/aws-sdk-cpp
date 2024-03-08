/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/QuickSightServiceClientModel.h>

namespace Aws
{
namespace QuickSight
{
  /**
   * <fullname>Amazon QuickSight API Reference</fullname> <p>Amazon QuickSight is a
   * fully managed, serverless business intelligence service for the Amazon Web
   * Services Cloud that makes it easy to extend data and insights to every user in
   * your organization. This API reference contains documentation for a programming
   * interface that you can use to manage Amazon QuickSight. </p>
   */
  class AWS_QUICKSIGHT_API QuickSightClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<QuickSightClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef QuickSightClientConfiguration ClientConfigurationType;
      typedef QuickSightEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::QuickSight::QuickSightClientConfiguration& clientConfiguration = Aws::QuickSight::QuickSightClientConfiguration(),
                         std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::QuickSight::QuickSightClientConfiguration& clientConfiguration = Aws::QuickSight::QuickSightClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QuickSightClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::QuickSight::QuickSightClientConfiguration& clientConfiguration = Aws::QuickSight::QuickSightClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QuickSightClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QuickSightClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~QuickSightClient();

        /**
         * <p>Cancels an ongoing ingestion of data into SPICE.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CancelIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelIngestionOutcome CancelIngestion(const Model::CancelIngestionRequest& request) const;

        /**
         * A Callable wrapper for CancelIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelIngestionRequestT = Model::CancelIngestionRequest>
        Model::CancelIngestionOutcomeCallable CancelIngestionCallable(const CancelIngestionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CancelIngestion, request);
        }

        /**
         * An Async wrapper for CancelIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelIngestionRequestT = Model::CancelIngestionRequest>
        void CancelIngestionAsync(const CancelIngestionRequestT& request, const CancelIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CancelIngestion, request, handler, context);
        }

        /**
         * <p>Creates Amazon QuickSight customizations for the current Amazon Web Services
         * Region. Currently, you can add a custom default theme by using the
         * <code>CreateAccountCustomization</code> or
         * <code>UpdateAccountCustomization</code> API operation. To further customize
         * Amazon QuickSight by removing Amazon QuickSight sample assets and videos for all
         * new users, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-quicksight.html">Customizing
         * Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide.</i> </p> <p>You
         * can create customizations for your Amazon Web Services account or, if you
         * specify a namespace, for a QuickSight namespace instead. Customizations that
         * apply to a namespace always override customizations that apply to an Amazon Web
         * Services account. To find out which customizations apply, use the
         * <code>DescribeAccountCustomization</code> API operation.</p> <p>Before you use
         * the <code>CreateAccountCustomization</code> API operation to add a theme as the
         * namespace default, make sure that you first share the theme with the namespace.
         * If you don't share it with the namespace, the theme isn't visible to your users
         * even if you make it the default theme. To check if the theme is shared, view the
         * current permissions by using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeThemePermissions.html">DescribeThemePermissions</a>
         * </code> API operation. To share the theme, grant permissions by using the <code>
         * <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateThemePermissions.html">UpdateThemePermissions</a>
         * </code> API operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountCustomizationOutcome CreateAccountCustomization(const Model::CreateAccountCustomizationRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountCustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccountCustomizationRequestT = Model::CreateAccountCustomizationRequest>
        Model::CreateAccountCustomizationOutcomeCallable CreateAccountCustomizationCallable(const CreateAccountCustomizationRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateAccountCustomization, request);
        }

        /**
         * An Async wrapper for CreateAccountCustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccountCustomizationRequestT = Model::CreateAccountCustomizationRequest>
        void CreateAccountCustomizationAsync(const CreateAccountCustomizationRequestT& request, const CreateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateAccountCustomization, request, handler, context);
        }

        /**
         * <p>Creates an Amazon QuickSight account, or subscribes to Amazon QuickSight
         * Q.</p> <p>The Amazon Web Services Region for the account is derived from what is
         * configured in the CLI or SDK.</p> <p>Before you use this operation, make sure
         * that you can connect to an existing Amazon Web Services account. If you don't
         * have an Amazon Web Services account, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/setting-up-aws-sign-up.html">Sign
         * up for Amazon Web Services</a> in the <i>Amazon QuickSight User Guide</i>. The
         * person who signs up for Amazon QuickSight needs to have the correct Identity and
         * Access Management (IAM) permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/iam-policy-examples.html">IAM
         * Policy Examples for Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>If your IAM policy includes both the <code>Subscribe</code>
         * and <code>CreateAccountSubscription</code> actions, make sure that both actions
         * are set to <code>Allow</code>. If either action is set to <code>Deny</code>, the
         * <code>Deny</code> action prevails and your API call fails.</p> <p>You can't pass
         * an existing IAM role to access other Amazon Web Services services using this API
         * operation. To pass your existing IAM role to Amazon QuickSight, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/security_iam_service-with-iam.html#security-create-iam-role">Passing
         * IAM roles to Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>You can't set default resource access on the new account from
         * the Amazon QuickSight API. Instead, add default resource access from the Amazon
         * QuickSight console. For more information about setting default resource access
         * to Amazon Web Services services, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/scoping-policies-defaults.html">Setting
         * default resource access to Amazon Web Services services</a> in the <i>Amazon
         * QuickSight User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAccountSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountSubscriptionOutcome CreateAccountSubscription(const Model::CreateAccountSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccountSubscriptionRequestT = Model::CreateAccountSubscriptionRequest>
        Model::CreateAccountSubscriptionOutcomeCallable CreateAccountSubscriptionCallable(const CreateAccountSubscriptionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateAccountSubscription, request);
        }

        /**
         * An Async wrapper for CreateAccountSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccountSubscriptionRequestT = Model::CreateAccountSubscriptionRequest>
        void CreateAccountSubscriptionAsync(const CreateAccountSubscriptionRequestT& request, const CreateAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateAccountSubscription, request, handler, context);
        }

        /**
         * <p>Creates an analysis in Amazon QuickSight. Analyses can be created either from
         * a template or from an <code>AnalysisDefinition</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnalysisOutcome CreateAnalysis(const Model::CreateAnalysisRequest& request) const;

        /**
         * A Callable wrapper for CreateAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAnalysisRequestT = Model::CreateAnalysisRequest>
        Model::CreateAnalysisOutcomeCallable CreateAnalysisCallable(const CreateAnalysisRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateAnalysis, request);
        }

        /**
         * An Async wrapper for CreateAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAnalysisRequestT = Model::CreateAnalysisRequest>
        void CreateAnalysisAsync(const CreateAnalysisRequestT& request, const CreateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateAnalysis, request, handler, context);
        }

        /**
         * <p>Creates a dashboard from either a template or directly with a
         * <code>DashboardDefinition</code>. To first create a template, see the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
         * </code> API operation.</p> <p>A dashboard is an entity in Amazon QuickSight that
         * identifies Amazon QuickSight reports, created from analyses. You can share
         * Amazon QuickSight dashboards. With the right permissions, you can create
         * scheduled email reports from them. If you have the correct permissions, you can
         * create a dashboard from a template that exists in a different Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDashboardOutcome CreateDashboard(const Model::CreateDashboardRequest& request) const;

        /**
         * A Callable wrapper for CreateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDashboardRequestT = Model::CreateDashboardRequest>
        Model::CreateDashboardOutcomeCallable CreateDashboardCallable(const CreateDashboardRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateDashboard, request);
        }

        /**
         * An Async wrapper for CreateDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDashboardRequestT = Model::CreateDashboardRequest>
        void CreateDashboardAsync(const CreateDashboardRequestT& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateDashboard, request, handler, context);
        }

        /**
         * <p>Creates a dataset. This operation doesn't support datasets that include
         * uploaded files as a source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetOutcome CreateDataSet(const Model::CreateDataSetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSetRequestT = Model::CreateDataSetRequest>
        Model::CreateDataSetOutcomeCallable CreateDataSetCallable(const CreateDataSetRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateDataSet, request);
        }

        /**
         * An Async wrapper for CreateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSetRequestT = Model::CreateDataSetRequest>
        void CreateDataSetAsync(const CreateDataSetRequestT& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateDataSet, request, handler, context);
        }

        /**
         * <p>Creates a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const CreateDataSourceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateDataSource, request);
        }

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        void CreateDataSourceAsync(const CreateDataSourceRequestT& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateDataSource, request, handler, context);
        }

        /**
         * <p>Creates an empty shared folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest& request) const;

        /**
         * A Callable wrapper for CreateFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFolderRequestT = Model::CreateFolderRequest>
        Model::CreateFolderOutcomeCallable CreateFolderCallable(const CreateFolderRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateFolder, request);
        }

        /**
         * An Async wrapper for CreateFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFolderRequestT = Model::CreateFolderRequest>
        void CreateFolderAsync(const CreateFolderRequestT& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateFolder, request, handler, context);
        }

        /**
         * <p>Adds an asset, such as a dashboard, analysis, or dataset into a
         * folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateFolderMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderMembershipOutcome CreateFolderMembership(const Model::CreateFolderMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateFolderMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFolderMembershipRequestT = Model::CreateFolderMembershipRequest>
        Model::CreateFolderMembershipOutcomeCallable CreateFolderMembershipCallable(const CreateFolderMembershipRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateFolderMembership, request);
        }

        /**
         * An Async wrapper for CreateFolderMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFolderMembershipRequestT = Model::CreateFolderMembershipRequest>
        void CreateFolderMembershipAsync(const CreateFolderMembershipRequestT& request, const CreateFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateFolderMembership, request, handler, context);
        }

        /**
         * <p>Use the <code>CreateGroup</code> operation to create a group in Amazon
         * QuickSight. You can create up to 10,000 groups in a namespace. If you want to
         * create more than 10,000 groups in a namespace, contact Amazon Web Services
         * Support.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:&lt;your-region&gt;:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
         * </code>.</p> <p>The response is a group object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const CreateGroupRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateGroup, request);
        }

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        void CreateGroupAsync(const CreateGroupRequestT& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateGroup, request, handler, context);
        }

        /**
         * <p>Adds an Amazon QuickSight user to an Amazon QuickSight group. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupMembershipOutcome CreateGroupMembership(const Model::CreateGroupMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateGroupMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupMembershipRequestT = Model::CreateGroupMembershipRequest>
        Model::CreateGroupMembershipOutcomeCallable CreateGroupMembershipCallable(const CreateGroupMembershipRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateGroupMembership, request);
        }

        /**
         * An Async wrapper for CreateGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupMembershipRequestT = Model::CreateGroupMembershipRequest>
        void CreateGroupMembershipAsync(const CreateGroupMembershipRequestT& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateGroupMembership, request, handler, context);
        }

        /**
         * <p>Creates an assignment with one specified IAM policy, identified by its Amazon
         * Resource Name (ARN). This policy assignment is attached to the specified groups
         * or users of Amazon QuickSight. Assignment names are unique per Amazon Web
         * Services account. To avoid overwriting rules in other namespaces, use assignment
         * names that are unique.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIAMPolicyAssignmentOutcome CreateIAMPolicyAssignment(const Model::CreateIAMPolicyAssignmentRequest& request) const;

        /**
         * A Callable wrapper for CreateIAMPolicyAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIAMPolicyAssignmentRequestT = Model::CreateIAMPolicyAssignmentRequest>
        Model::CreateIAMPolicyAssignmentOutcomeCallable CreateIAMPolicyAssignmentCallable(const CreateIAMPolicyAssignmentRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateIAMPolicyAssignment, request);
        }

        /**
         * An Async wrapper for CreateIAMPolicyAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIAMPolicyAssignmentRequestT = Model::CreateIAMPolicyAssignmentRequest>
        void CreateIAMPolicyAssignmentAsync(const CreateIAMPolicyAssignmentRequestT& request, const CreateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateIAMPolicyAssignment, request, handler, context);
        }

        /**
         * <p>Creates and starts a new SPICE ingestion for a dataset. You can manually
         * refresh datasets in an Enterprise edition account 32 times in a 24-hour period.
         * You can manually refresh datasets in a Standard edition account 8 times in a
         * 24-hour period. Each 24-hour period is measured starting 24 hours before the
         * current date and time.</p> <p>Any ingestions operating on tagged datasets
         * inherit the same tags automatically for use in access control. For an example,
         * see <a
         * href="http://aws.amazon.com/premiumsupport/knowledge-center/iam-ec2-resource-tags/">How
         * do I create an IAM policy to control access to Amazon EC2 resources using
         * tags?</a> in the Amazon Web Services Knowledge Center. Tags are visible on the
         * tagged dataset, but not on the ingestion resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIngestionOutcome CreateIngestion(const Model::CreateIngestionRequest& request) const;

        /**
         * A Callable wrapper for CreateIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIngestionRequestT = Model::CreateIngestionRequest>
        Model::CreateIngestionOutcomeCallable CreateIngestionCallable(const CreateIngestionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateIngestion, request);
        }

        /**
         * An Async wrapper for CreateIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIngestionRequestT = Model::CreateIngestionRequest>
        void CreateIngestionAsync(const CreateIngestionRequestT& request, const CreateIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateIngestion, request, handler, context);
        }

        /**
         * <p>(Enterprise edition only) Creates a new namespace for you to use with Amazon
         * QuickSight.</p> <p>A namespace allows you to isolate the Amazon QuickSight users
         * and groups that are registered for that namespace. Users that access the
         * namespace can share assets only with other users or groups in the same
         * namespace. They can't see users and groups in other namespaces. You can create a
         * namespace after your Amazon Web Services account is subscribed to Amazon
         * QuickSight. The namespace must be unique within the Amazon Web Services account.
         * By default, there is a limit of 100 namespaces per Amazon Web Services account.
         * To increase your limit, create a ticket with Amazon Web Services Support.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNamespaceRequestT = Model::CreateNamespaceRequest>
        Model::CreateNamespaceOutcomeCallable CreateNamespaceCallable(const CreateNamespaceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateNamespace, request);
        }

        /**
         * An Async wrapper for CreateNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNamespaceRequestT = Model::CreateNamespaceRequest>
        void CreateNamespaceAsync(const CreateNamespaceRequestT& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateNamespace, request, handler, context);
        }

        /**
         * <p>Creates a refresh schedule for a dataset. You can create up to 5 different
         * schedules for a single dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateRefreshSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRefreshScheduleOutcome CreateRefreshSchedule(const Model::CreateRefreshScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreateRefreshSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRefreshScheduleRequestT = Model::CreateRefreshScheduleRequest>
        Model::CreateRefreshScheduleOutcomeCallable CreateRefreshScheduleCallable(const CreateRefreshScheduleRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateRefreshSchedule, request);
        }

        /**
         * An Async wrapper for CreateRefreshSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRefreshScheduleRequestT = Model::CreateRefreshScheduleRequest>
        void CreateRefreshScheduleAsync(const CreateRefreshScheduleRequestT& request, const CreateRefreshScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateRefreshSchedule, request, handler, context);
        }

        /**
         * <p>Use <code>CreateRoleMembership</code> to add an existing Amazon QuickSight
         * group to an existing role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateRoleMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoleMembershipOutcome CreateRoleMembership(const Model::CreateRoleMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateRoleMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRoleMembershipRequestT = Model::CreateRoleMembershipRequest>
        Model::CreateRoleMembershipOutcomeCallable CreateRoleMembershipCallable(const CreateRoleMembershipRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateRoleMembership, request);
        }

        /**
         * An Async wrapper for CreateRoleMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRoleMembershipRequestT = Model::CreateRoleMembershipRequest>
        void CreateRoleMembershipAsync(const CreateRoleMembershipRequestT& request, const CreateRoleMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateRoleMembership, request, handler, context);
        }

        /**
         * <p>Creates a template either from a <code>TemplateDefinition</code> or from an
         * existing Amazon QuickSight analysis or template. You can use the resulting
         * template to create additional dashboards, templates, or analyses.</p> <p>A
         * <i>template</i> is an entity in Amazon QuickSight that encapsulates the metadata
         * required to create an analysis and that you can use to create s dashboard. A
         * template adds a layer of abstraction by using placeholders to replace the
         * dataset associated with the analysis. You can use templates to create dashboards
         * by replacing dataset placeholders with datasets that follow the same schema that
         * was used to create the source analysis and template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const CreateTemplateRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateTemplate, request);
        }

        /**
         * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        void CreateTemplateAsync(const CreateTemplateRequestT& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateTemplate, request, handler, context);
        }

        /**
         * <p>Creates a template alias for a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateAliasOutcome CreateTemplateAlias(const Model::CreateTemplateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTemplateAliasRequestT = Model::CreateTemplateAliasRequest>
        Model::CreateTemplateAliasOutcomeCallable CreateTemplateAliasCallable(const CreateTemplateAliasRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateTemplateAlias, request);
        }

        /**
         * An Async wrapper for CreateTemplateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTemplateAliasRequestT = Model::CreateTemplateAliasRequest>
        void CreateTemplateAliasAsync(const CreateTemplateAliasRequestT& request, const CreateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateTemplateAlias, request, handler, context);
        }

        /**
         * <p>Creates a theme.</p> <p>A <i>theme</i> is set of configuration options for
         * color and layout. Themes apply to analyses and dashboards. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/themes-in-quicksight.html">Using
         * Themes in Amazon QuickSight</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThemeOutcome CreateTheme(const Model::CreateThemeRequest& request) const;

        /**
         * A Callable wrapper for CreateTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateThemeRequestT = Model::CreateThemeRequest>
        Model::CreateThemeOutcomeCallable CreateThemeCallable(const CreateThemeRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateTheme, request);
        }

        /**
         * An Async wrapper for CreateTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateThemeRequestT = Model::CreateThemeRequest>
        void CreateThemeAsync(const CreateThemeRequestT& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateTheme, request, handler, context);
        }

        /**
         * <p>Creates a theme alias for a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThemeAliasOutcome CreateThemeAlias(const Model::CreateThemeAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateThemeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateThemeAliasRequestT = Model::CreateThemeAliasRequest>
        Model::CreateThemeAliasOutcomeCallable CreateThemeAliasCallable(const CreateThemeAliasRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateThemeAlias, request);
        }

        /**
         * An Async wrapper for CreateThemeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateThemeAliasRequestT = Model::CreateThemeAliasRequest>
        void CreateThemeAliasAsync(const CreateThemeAliasRequestT& request, const CreateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateThemeAlias, request, handler, context);
        }

        /**
         * <p>Creates a new Q topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest& request) const;

        /**
         * A Callable wrapper for CreateTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTopicRequestT = Model::CreateTopicRequest>
        Model::CreateTopicOutcomeCallable CreateTopicCallable(const CreateTopicRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateTopic, request);
        }

        /**
         * An Async wrapper for CreateTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTopicRequestT = Model::CreateTopicRequest>
        void CreateTopicAsync(const CreateTopicRequestT& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateTopic, request, handler, context);
        }

        /**
         * <p>Creates a topic refresh schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateTopicRefreshSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTopicRefreshScheduleOutcome CreateTopicRefreshSchedule(const Model::CreateTopicRefreshScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreateTopicRefreshSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTopicRefreshScheduleRequestT = Model::CreateTopicRefreshScheduleRequest>
        Model::CreateTopicRefreshScheduleOutcomeCallable CreateTopicRefreshScheduleCallable(const CreateTopicRefreshScheduleRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateTopicRefreshSchedule, request);
        }

        /**
         * An Async wrapper for CreateTopicRefreshSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTopicRefreshScheduleRequestT = Model::CreateTopicRefreshScheduleRequest>
        void CreateTopicRefreshScheduleAsync(const CreateTopicRefreshScheduleRequestT& request, const CreateTopicRefreshScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateTopicRefreshSchedule, request, handler, context);
        }

        /**
         * <p>Creates a new VPC connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateVPCConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVPCConnectionOutcome CreateVPCConnection(const Model::CreateVPCConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateVPCConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVPCConnectionRequestT = Model::CreateVPCConnectionRequest>
        Model::CreateVPCConnectionOutcomeCallable CreateVPCConnectionCallable(const CreateVPCConnectionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::CreateVPCConnection, request);
        }

        /**
         * An Async wrapper for CreateVPCConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVPCConnectionRequestT = Model::CreateVPCConnectionRequest>
        void CreateVPCConnectionAsync(const CreateVPCConnectionRequestT& request, const CreateVPCConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::CreateVPCConnection, request, handler, context);
        }

        /**
         * <p>Deletes all Amazon QuickSight customizations in this Amazon Web Services
         * Region for the specified Amazon Web Services account and Amazon QuickSight
         * namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountCustomizationOutcome DeleteAccountCustomization(const Model::DeleteAccountCustomizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountCustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccountCustomizationRequestT = Model::DeleteAccountCustomizationRequest>
        Model::DeleteAccountCustomizationOutcomeCallable DeleteAccountCustomizationCallable(const DeleteAccountCustomizationRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteAccountCustomization, request);
        }

        /**
         * An Async wrapper for DeleteAccountCustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccountCustomizationRequestT = Model::DeleteAccountCustomizationRequest>
        void DeleteAccountCustomizationAsync(const DeleteAccountCustomizationRequestT& request, const DeleteAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteAccountCustomization, request, handler, context);
        }

        /**
         * <p>Use the <code>DeleteAccountSubscription</code> operation to delete an Amazon
         * QuickSight account. This operation will result in an error message if you have
         * configured your account termination protection settings to <code>True</code>. To
         * change this setting and delete your account, call the
         * <code>UpdateAccountSettings</code> API and set the value of the
         * <code>TerminationProtectionEnabled</code> parameter to <code>False</code>, then
         * make another call to the <code>DeleteAccountSubscription</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteAccountSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountSubscriptionOutcome DeleteAccountSubscription(const Model::DeleteAccountSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccountSubscriptionRequestT = Model::DeleteAccountSubscriptionRequest>
        Model::DeleteAccountSubscriptionOutcomeCallable DeleteAccountSubscriptionCallable(const DeleteAccountSubscriptionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteAccountSubscription, request);
        }

        /**
         * An Async wrapper for DeleteAccountSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccountSubscriptionRequestT = Model::DeleteAccountSubscriptionRequest>
        void DeleteAccountSubscriptionAsync(const DeleteAccountSubscriptionRequestT& request, const DeleteAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteAccountSubscription, request, handler, context);
        }

        /**
         * <p>Deletes an analysis from Amazon QuickSight. You can optionally include a
         * recovery window during which you can restore the analysis. If you don't specify
         * a recovery window value, the operation defaults to 30 days. Amazon QuickSight
         * attaches a <code>DeletionTime</code> stamp to the response that specifies the
         * end of the recovery window. At the end of the recovery window, Amazon QuickSight
         * deletes the analysis permanently.</p> <p>At any time before recovery window
         * ends, you can use the <code>RestoreAnalysis</code> API operation to remove the
         * <code>DeletionTime</code> stamp and cancel the deletion of the analysis. The
         * analysis remains visible in the API until it's deleted, so you can describe it
         * but you can't make a template from it.</p> <p>An analysis that's scheduled for
         * deletion isn't accessible in the Amazon QuickSight console. To access it in the
         * console, restore it. Deleting an analysis doesn't delete the dashboards that you
         * publish from it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnalysisOutcome DeleteAnalysis(const Model::DeleteAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAnalysisRequestT = Model::DeleteAnalysisRequest>
        Model::DeleteAnalysisOutcomeCallable DeleteAnalysisCallable(const DeleteAnalysisRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteAnalysis, request);
        }

        /**
         * An Async wrapper for DeleteAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnalysisRequestT = Model::DeleteAnalysisRequest>
        void DeleteAnalysisAsync(const DeleteAnalysisRequestT& request, const DeleteAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteAnalysis, request, handler, context);
        }

        /**
         * <p>Deletes a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardOutcome DeleteDashboard(const Model::DeleteDashboardRequest& request) const;

        /**
         * A Callable wrapper for DeleteDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDashboardRequestT = Model::DeleteDashboardRequest>
        Model::DeleteDashboardOutcomeCallable DeleteDashboardCallable(const DeleteDashboardRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteDashboard, request);
        }

        /**
         * An Async wrapper for DeleteDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDashboardRequestT = Model::DeleteDashboardRequest>
        void DeleteDashboardAsync(const DeleteDashboardRequestT& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteDashboard, request, handler, context);
        }

        /**
         * <p>Deletes a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSetOutcome DeleteDataSet(const Model::DeleteDataSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSetRequestT = Model::DeleteDataSetRequest>
        Model::DeleteDataSetOutcomeCallable DeleteDataSetCallable(const DeleteDataSetRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteDataSet, request);
        }

        /**
         * An Async wrapper for DeleteDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSetRequestT = Model::DeleteDataSetRequest>
        void DeleteDataSetAsync(const DeleteDataSetRequestT& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteDataSet, request, handler, context);
        }

        /**
         * <p>Deletes the dataset refresh properties of the dataset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSetRefreshProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSetRefreshPropertiesOutcome DeleteDataSetRefreshProperties(const Model::DeleteDataSetRefreshPropertiesRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSetRefreshProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSetRefreshPropertiesRequestT = Model::DeleteDataSetRefreshPropertiesRequest>
        Model::DeleteDataSetRefreshPropertiesOutcomeCallable DeleteDataSetRefreshPropertiesCallable(const DeleteDataSetRefreshPropertiesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteDataSetRefreshProperties, request);
        }

        /**
         * An Async wrapper for DeleteDataSetRefreshProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSetRefreshPropertiesRequestT = Model::DeleteDataSetRefreshPropertiesRequest>
        void DeleteDataSetRefreshPropertiesAsync(const DeleteDataSetRefreshPropertiesRequestT& request, const DeleteDataSetRefreshPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteDataSetRefreshProperties, request, handler, context);
        }

        /**
         * <p>Deletes the data source permanently. This operation breaks all the datasets
         * that reference the deleted data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteDataSource, request, handler, context);
        }

        /**
         * <p>Deletes an empty folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest& request) const;

        /**
         * A Callable wrapper for DeleteFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFolderRequestT = Model::DeleteFolderRequest>
        Model::DeleteFolderOutcomeCallable DeleteFolderCallable(const DeleteFolderRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteFolder, request);
        }

        /**
         * An Async wrapper for DeleteFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFolderRequestT = Model::DeleteFolderRequest>
        void DeleteFolderAsync(const DeleteFolderRequestT& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteFolder, request, handler, context);
        }

        /**
         * <p>Removes an asset, such as a dashboard, analysis, or dataset, from a
         * folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteFolderMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderMembershipOutcome DeleteFolderMembership(const Model::DeleteFolderMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteFolderMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFolderMembershipRequestT = Model::DeleteFolderMembershipRequest>
        Model::DeleteFolderMembershipOutcomeCallable DeleteFolderMembershipCallable(const DeleteFolderMembershipRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteFolderMembership, request);
        }

        /**
         * An Async wrapper for DeleteFolderMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFolderMembershipRequestT = Model::DeleteFolderMembershipRequest>
        void DeleteFolderMembershipAsync(const DeleteFolderMembershipRequestT& request, const DeleteFolderMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteFolderMembership, request, handler, context);
        }

        /**
         * <p>Removes a user group from Amazon QuickSight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteGroup, request, handler, context);
        }

        /**
         * <p>Removes a user from a group so that the user is no longer a member of the
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupMembershipOutcome DeleteGroupMembership(const Model::DeleteGroupMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroupMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupMembershipRequestT = Model::DeleteGroupMembershipRequest>
        Model::DeleteGroupMembershipOutcomeCallable DeleteGroupMembershipCallable(const DeleteGroupMembershipRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteGroupMembership, request);
        }

        /**
         * An Async wrapper for DeleteGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupMembershipRequestT = Model::DeleteGroupMembershipRequest>
        void DeleteGroupMembershipAsync(const DeleteGroupMembershipRequestT& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteGroupMembership, request, handler, context);
        }

        /**
         * <p>Deletes an existing IAM policy assignment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIAMPolicyAssignmentOutcome DeleteIAMPolicyAssignment(const Model::DeleteIAMPolicyAssignmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteIAMPolicyAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIAMPolicyAssignmentRequestT = Model::DeleteIAMPolicyAssignmentRequest>
        Model::DeleteIAMPolicyAssignmentOutcomeCallable DeleteIAMPolicyAssignmentCallable(const DeleteIAMPolicyAssignmentRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteIAMPolicyAssignment, request);
        }

        /**
         * An Async wrapper for DeleteIAMPolicyAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIAMPolicyAssignmentRequestT = Model::DeleteIAMPolicyAssignmentRequest>
        void DeleteIAMPolicyAssignmentAsync(const DeleteIAMPolicyAssignmentRequestT& request, const DeleteIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteIAMPolicyAssignment, request, handler, context);
        }

        /**
         * <p>Deletes all access scopes and authorized targets that are associated with a
         * service from the Amazon QuickSight IAM Identity Center application.</p> <p>This
         * operation is only supported for Amazon QuickSight accounts that use IAM Identity
         * Center.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteIdentityPropagationConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityPropagationConfigOutcome DeleteIdentityPropagationConfig(const Model::DeleteIdentityPropagationConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentityPropagationConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIdentityPropagationConfigRequestT = Model::DeleteIdentityPropagationConfigRequest>
        Model::DeleteIdentityPropagationConfigOutcomeCallable DeleteIdentityPropagationConfigCallable(const DeleteIdentityPropagationConfigRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteIdentityPropagationConfig, request);
        }

        /**
         * An Async wrapper for DeleteIdentityPropagationConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIdentityPropagationConfigRequestT = Model::DeleteIdentityPropagationConfigRequest>
        void DeleteIdentityPropagationConfigAsync(const DeleteIdentityPropagationConfigRequestT& request, const DeleteIdentityPropagationConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteIdentityPropagationConfig, request, handler, context);
        }

        /**
         * <p>Deletes a namespace and the users and groups that are associated with the
         * namespace. This is an asynchronous process. Assets including dashboards,
         * analyses, datasets and data sources are not deleted. To delete these assets, you
         * use the API operations for the relevant asset. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNamespaceRequestT = Model::DeleteNamespaceRequest>
        Model::DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const DeleteNamespaceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteNamespace, request);
        }

        /**
         * An Async wrapper for DeleteNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNamespaceRequestT = Model::DeleteNamespaceRequest>
        void DeleteNamespaceAsync(const DeleteNamespaceRequestT& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteNamespace, request, handler, context);
        }

        /**
         * <p>Deletes a refresh schedule from a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteRefreshSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRefreshScheduleOutcome DeleteRefreshSchedule(const Model::DeleteRefreshScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRefreshSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRefreshScheduleRequestT = Model::DeleteRefreshScheduleRequest>
        Model::DeleteRefreshScheduleOutcomeCallable DeleteRefreshScheduleCallable(const DeleteRefreshScheduleRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteRefreshSchedule, request);
        }

        /**
         * An Async wrapper for DeleteRefreshSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRefreshScheduleRequestT = Model::DeleteRefreshScheduleRequest>
        void DeleteRefreshScheduleAsync(const DeleteRefreshScheduleRequestT& request, const DeleteRefreshScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteRefreshSchedule, request, handler, context);
        }

        /**
         * <p>Removes custom permissions from the role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteRoleCustomPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoleCustomPermissionOutcome DeleteRoleCustomPermission(const Model::DeleteRoleCustomPermissionRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoleCustomPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRoleCustomPermissionRequestT = Model::DeleteRoleCustomPermissionRequest>
        Model::DeleteRoleCustomPermissionOutcomeCallable DeleteRoleCustomPermissionCallable(const DeleteRoleCustomPermissionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteRoleCustomPermission, request);
        }

        /**
         * An Async wrapper for DeleteRoleCustomPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRoleCustomPermissionRequestT = Model::DeleteRoleCustomPermissionRequest>
        void DeleteRoleCustomPermissionAsync(const DeleteRoleCustomPermissionRequestT& request, const DeleteRoleCustomPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteRoleCustomPermission, request, handler, context);
        }

        /**
         * <p>Removes a group from a role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteRoleMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoleMembershipOutcome DeleteRoleMembership(const Model::DeleteRoleMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoleMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRoleMembershipRequestT = Model::DeleteRoleMembershipRequest>
        Model::DeleteRoleMembershipOutcomeCallable DeleteRoleMembershipCallable(const DeleteRoleMembershipRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteRoleMembership, request);
        }

        /**
         * An Async wrapper for DeleteRoleMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRoleMembershipRequestT = Model::DeleteRoleMembershipRequest>
        void DeleteRoleMembershipAsync(const DeleteRoleMembershipRequestT& request, const DeleteRoleMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteRoleMembership, request, handler, context);
        }

        /**
         * <p>Deletes a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const DeleteTemplateRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteTemplate, request);
        }

        /**
         * An Async wrapper for DeleteTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        void DeleteTemplateAsync(const DeleteTemplateRequestT& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the item that the specified template alias points to. If you provide
         * a specific alias, you delete the version of the template that the alias points
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateAliasOutcome DeleteTemplateAlias(const Model::DeleteTemplateAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTemplateAliasRequestT = Model::DeleteTemplateAliasRequest>
        Model::DeleteTemplateAliasOutcomeCallable DeleteTemplateAliasCallable(const DeleteTemplateAliasRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteTemplateAlias, request);
        }

        /**
         * An Async wrapper for DeleteTemplateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTemplateAliasRequestT = Model::DeleteTemplateAliasRequest>
        void DeleteTemplateAliasAsync(const DeleteTemplateAliasRequestT& request, const DeleteTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteTemplateAlias, request, handler, context);
        }

        /**
         * <p>Deletes a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeOutcome DeleteTheme(const Model::DeleteThemeRequest& request) const;

        /**
         * A Callable wrapper for DeleteTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteThemeRequestT = Model::DeleteThemeRequest>
        Model::DeleteThemeOutcomeCallable DeleteThemeCallable(const DeleteThemeRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteTheme, request);
        }

        /**
         * An Async wrapper for DeleteTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteThemeRequestT = Model::DeleteThemeRequest>
        void DeleteThemeAsync(const DeleteThemeRequestT& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteTheme, request, handler, context);
        }

        /**
         * <p>Deletes the version of the theme that the specified theme alias points to. If
         * you provide a specific alias, you delete the version of the theme that the alias
         * points to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeAliasOutcome DeleteThemeAlias(const Model::DeleteThemeAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteThemeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteThemeAliasRequestT = Model::DeleteThemeAliasRequest>
        Model::DeleteThemeAliasOutcomeCallable DeleteThemeAliasCallable(const DeleteThemeAliasRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteThemeAlias, request);
        }

        /**
         * An Async wrapper for DeleteThemeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteThemeAliasRequestT = Model::DeleteThemeAliasRequest>
        void DeleteThemeAliasAsync(const DeleteThemeAliasRequestT& request, const DeleteThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteThemeAlias, request, handler, context);
        }

        /**
         * <p>Deletes a topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest& request) const;

        /**
         * A Callable wrapper for DeleteTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTopicRequestT = Model::DeleteTopicRequest>
        Model::DeleteTopicOutcomeCallable DeleteTopicCallable(const DeleteTopicRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteTopic, request);
        }

        /**
         * An Async wrapper for DeleteTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTopicRequestT = Model::DeleteTopicRequest>
        void DeleteTopicAsync(const DeleteTopicRequestT& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteTopic, request, handler, context);
        }

        /**
         * <p>Deletes a topic refresh schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteTopicRefreshSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTopicRefreshScheduleOutcome DeleteTopicRefreshSchedule(const Model::DeleteTopicRefreshScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteTopicRefreshSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTopicRefreshScheduleRequestT = Model::DeleteTopicRefreshScheduleRequest>
        Model::DeleteTopicRefreshScheduleOutcomeCallable DeleteTopicRefreshScheduleCallable(const DeleteTopicRefreshScheduleRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteTopicRefreshSchedule, request);
        }

        /**
         * An Async wrapper for DeleteTopicRefreshSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTopicRefreshScheduleRequestT = Model::DeleteTopicRefreshScheduleRequest>
        void DeleteTopicRefreshScheduleAsync(const DeleteTopicRefreshScheduleRequestT& request, const DeleteTopicRefreshScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteTopicRefreshSchedule, request, handler, context);
        }

        /**
         * <p>Deletes the Amazon QuickSight user that is associated with the identity of
         * the IAM user or role that's making the call. The IAM user isn't deleted as a
         * result of this call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Deletes a user identified by its principal ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteUserByPrincipalId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserByPrincipalIdOutcome DeleteUserByPrincipalId(const Model::DeleteUserByPrincipalIdRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserByPrincipalId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserByPrincipalIdRequestT = Model::DeleteUserByPrincipalIdRequest>
        Model::DeleteUserByPrincipalIdOutcomeCallable DeleteUserByPrincipalIdCallable(const DeleteUserByPrincipalIdRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteUserByPrincipalId, request);
        }

        /**
         * An Async wrapper for DeleteUserByPrincipalId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserByPrincipalIdRequestT = Model::DeleteUserByPrincipalIdRequest>
        void DeleteUserByPrincipalIdAsync(const DeleteUserByPrincipalIdRequestT& request, const DeleteUserByPrincipalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteUserByPrincipalId, request, handler, context);
        }

        /**
         * <p>Deletes a VPC connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DeleteVPCConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVPCConnectionOutcome DeleteVPCConnection(const Model::DeleteVPCConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteVPCConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVPCConnectionRequestT = Model::DeleteVPCConnectionRequest>
        Model::DeleteVPCConnectionOutcomeCallable DeleteVPCConnectionCallable(const DeleteVPCConnectionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DeleteVPCConnection, request);
        }

        /**
         * An Async wrapper for DeleteVPCConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVPCConnectionRequestT = Model::DeleteVPCConnectionRequest>
        void DeleteVPCConnectionAsync(const DeleteVPCConnectionRequestT& request, const DeleteVPCConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DeleteVPCConnection, request, handler, context);
        }

        /**
         * <p>Describes the customizations associated with the provided Amazon Web Services
         * account and Amazon Amazon QuickSight namespace in an Amazon Web Services Region.
         * The Amazon QuickSight console evaluates which customizations to apply by running
         * this API operation with the <code>Resolved</code> flag included. </p> <p>To
         * determine what customizations display when you run this command, it can help to
         * visualize the relationship of the entities involved. </p> <ul> <li> <p>
         * <code>Amazon Web Services account</code> - The Amazon Web Services account
         * exists at the top of the hierarchy. It has the potential to use all of the
         * Amazon Web Services Regions and Amazon Web Services Services. When you subscribe
         * to Amazon QuickSight, you choose one Amazon Web Services Region to use as your
         * home Region. That's where your free SPICE capacity is located. You can use
         * Amazon QuickSight in any supported Amazon Web Services Region. </p> </li> <li>
         * <p> <code>Amazon Web Services Region</code> - In each Amazon Web Services Region
         * where you sign in to Amazon QuickSight at least once, Amazon QuickSight acts as
         * a separate instance of the same service. If you have a user directory, it
         * resides in us-east-1, which is the US East (N. Virginia). Generally speaking,
         * these users have access to Amazon QuickSight in any Amazon Web Services Region,
         * unless they are constrained to a namespace. </p> <p>To run the command in a
         * different Amazon Web Services Region, you change your Region settings. If you're
         * using the CLI, you can use one of the following options:</p> <ul> <li> <p>Use <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-configure-options.html">command
         * line options</a>. </p> </li> <li> <p>Use <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-configure-profiles.html">named
         * profiles</a>. </p> </li> <li> <p>Run <code>aws configure</code> to change your
         * default Amazon Web Services Region. Use Enter to key the same settings for your
         * keys. For more information, see <a
         * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-configure.html">Configuring
         * the CLI</a>.</p> </li> </ul> </li> <li> <p> <code>Namespace</code> - A
         * QuickSight namespace is a partition that contains users and assets (data
         * sources, datasets, dashboards, and so on). To access assets that are in a
         * specific namespace, users and groups must also be part of the same namespace.
         * People who share a namespace are completely isolated from users and assets in
         * other namespaces, even if they are in the same Amazon Web Services account and
         * Amazon Web Services Region.</p> </li> <li> <p> <code>Applied
         * customizations</code> - Within an Amazon Web Services Region, a set of Amazon
         * QuickSight customizations can apply to an Amazon Web Services account or to a
         * namespace. Settings that you apply to a namespace override settings that you
         * apply to an Amazon Web Services account. All settings are isolated to a single
         * Amazon Web Services Region. To apply them in other Amazon Web Services Regions,
         * run the <code>CreateAccountCustomization</code> command in each Amazon Web
         * Services Region where you want to apply the same customizations. </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountCustomizationOutcome DescribeAccountCustomization(const Model::DescribeAccountCustomizationRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountCustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountCustomizationRequestT = Model::DescribeAccountCustomizationRequest>
        Model::DescribeAccountCustomizationOutcomeCallable DescribeAccountCustomizationCallable(const DescribeAccountCustomizationRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeAccountCustomization, request);
        }

        /**
         * An Async wrapper for DescribeAccountCustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountCustomizationRequestT = Model::DescribeAccountCustomizationRequest>
        void DescribeAccountCustomizationAsync(const DescribeAccountCustomizationRequestT& request, const DescribeAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeAccountCustomization, request, handler, context);
        }

        /**
         * <p>Describes the settings that were used when your Amazon QuickSight
         * subscription was first created in this Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountSettingsOutcome DescribeAccountSettings(const Model::DescribeAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountSettingsRequestT = Model::DescribeAccountSettingsRequest>
        Model::DescribeAccountSettingsOutcomeCallable DescribeAccountSettingsCallable(const DescribeAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeAccountSettings, request);
        }

        /**
         * An Async wrapper for DescribeAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountSettingsRequestT = Model::DescribeAccountSettingsRequest>
        void DescribeAccountSettingsAsync(const DescribeAccountSettingsRequestT& request, const DescribeAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeAccountSettings, request, handler, context);
        }

        /**
         * <p>Use the DescribeAccountSubscription operation to receive a description of an
         * Amazon QuickSight account's subscription. A successful API call returns an
         * <code>AccountInfo</code> object that includes an account's name, subscription
         * status, authentication type, edition, and notification email
         * address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAccountSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountSubscriptionOutcome DescribeAccountSubscription(const Model::DescribeAccountSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountSubscriptionRequestT = Model::DescribeAccountSubscriptionRequest>
        Model::DescribeAccountSubscriptionOutcomeCallable DescribeAccountSubscriptionCallable(const DescribeAccountSubscriptionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeAccountSubscription, request);
        }

        /**
         * An Async wrapper for DescribeAccountSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountSubscriptionRequestT = Model::DescribeAccountSubscriptionRequest>
        void DescribeAccountSubscriptionAsync(const DescribeAccountSubscriptionRequestT& request, const DescribeAccountSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeAccountSubscription, request, handler, context);
        }

        /**
         * <p>Provides a summary of the metadata for an analysis.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnalysisOutcome DescribeAnalysis(const Model::DescribeAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAnalysisRequestT = Model::DescribeAnalysisRequest>
        Model::DescribeAnalysisOutcomeCallable DescribeAnalysisCallable(const DescribeAnalysisRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeAnalysis, request);
        }

        /**
         * An Async wrapper for DescribeAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAnalysisRequestT = Model::DescribeAnalysisRequest>
        void DescribeAnalysisAsync(const DescribeAnalysisRequestT& request, const DescribeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeAnalysis, request, handler, context);
        }

        /**
         * <p>Provides a detailed description of the definition of an analysis.</p> 
         * <p>If you do not need to know details about the content of an Analysis, for
         * instance if you are trying to check the status of a recently created or updated
         * Analysis, use the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeAnalysis.html">
         * <code>DescribeAnalysis</code> </a> instead. </p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAnalysisDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnalysisDefinitionOutcome DescribeAnalysisDefinition(const Model::DescribeAnalysisDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnalysisDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAnalysisDefinitionRequestT = Model::DescribeAnalysisDefinitionRequest>
        Model::DescribeAnalysisDefinitionOutcomeCallable DescribeAnalysisDefinitionCallable(const DescribeAnalysisDefinitionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeAnalysisDefinition, request);
        }

        /**
         * An Async wrapper for DescribeAnalysisDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAnalysisDefinitionRequestT = Model::DescribeAnalysisDefinitionRequest>
        void DescribeAnalysisDefinitionAsync(const DescribeAnalysisDefinitionRequestT& request, const DescribeAnalysisDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeAnalysisDefinition, request, handler, context);
        }

        /**
         * <p>Provides the read and write permissions for an analysis.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAnalysisPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnalysisPermissionsOutcome DescribeAnalysisPermissions(const Model::DescribeAnalysisPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnalysisPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAnalysisPermissionsRequestT = Model::DescribeAnalysisPermissionsRequest>
        Model::DescribeAnalysisPermissionsOutcomeCallable DescribeAnalysisPermissionsCallable(const DescribeAnalysisPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeAnalysisPermissions, request);
        }

        /**
         * An Async wrapper for DescribeAnalysisPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAnalysisPermissionsRequestT = Model::DescribeAnalysisPermissionsRequest>
        void DescribeAnalysisPermissionsAsync(const DescribeAnalysisPermissionsRequestT& request, const DescribeAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeAnalysisPermissions, request, handler, context);
        }

        /**
         * <p>Describes an existing export job.</p> <p>Poll job descriptions after a job
         * starts to know the status of the job. When a job succeeds, a URL is provided to
         * download the exported assets' data from. Download URLs are valid for five
         * minutes after they are generated. You can call the
         * <code>DescribeAssetBundleExportJob</code> API for a new download URL as
         * needed.</p> <p>Job descriptions are available for 14 days after the job
         * starts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAssetBundleExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetBundleExportJobOutcome DescribeAssetBundleExportJob(const Model::DescribeAssetBundleExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssetBundleExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssetBundleExportJobRequestT = Model::DescribeAssetBundleExportJobRequest>
        Model::DescribeAssetBundleExportJobOutcomeCallable DescribeAssetBundleExportJobCallable(const DescribeAssetBundleExportJobRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeAssetBundleExportJob, request);
        }

        /**
         * An Async wrapper for DescribeAssetBundleExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssetBundleExportJobRequestT = Model::DescribeAssetBundleExportJobRequest>
        void DescribeAssetBundleExportJobAsync(const DescribeAssetBundleExportJobRequestT& request, const DescribeAssetBundleExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeAssetBundleExportJob, request, handler, context);
        }

        /**
         * <p>Describes an existing import job.</p> <p>Poll job descriptions after starting
         * a job to know when it has succeeded or failed. Job descriptions are available
         * for 14 days after job starts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeAssetBundleImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetBundleImportJobOutcome DescribeAssetBundleImportJob(const Model::DescribeAssetBundleImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssetBundleImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssetBundleImportJobRequestT = Model::DescribeAssetBundleImportJobRequest>
        Model::DescribeAssetBundleImportJobOutcomeCallable DescribeAssetBundleImportJobCallable(const DescribeAssetBundleImportJobRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeAssetBundleImportJob, request);
        }

        /**
         * An Async wrapper for DescribeAssetBundleImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssetBundleImportJobRequestT = Model::DescribeAssetBundleImportJobRequest>
        void DescribeAssetBundleImportJobAsync(const DescribeAssetBundleImportJobRequestT& request, const DescribeAssetBundleImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeAssetBundleImportJob, request, handler, context);
        }

        /**
         * <p>Provides a summary for a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest& request) const;

        /**
         * A Callable wrapper for DescribeDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDashboardRequestT = Model::DescribeDashboardRequest>
        Model::DescribeDashboardOutcomeCallable DescribeDashboardCallable(const DescribeDashboardRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDashboard, request);
        }

        /**
         * An Async wrapper for DescribeDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDashboardRequestT = Model::DescribeDashboardRequest>
        void DescribeDashboardAsync(const DescribeDashboardRequestT& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDashboard, request, handler, context);
        }

        /**
         * <p>Provides a detailed description of the definition of a dashboard.</p> 
         * <p>If you do not need to know details about the content of a dashboard, for
         * instance if you are trying to check the status of a recently created or updated
         * dashboard, use the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeDashboard.html">
         * <code>DescribeDashboard</code> </a> instead. </p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardDefinitionOutcome DescribeDashboardDefinition(const Model::DescribeDashboardDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeDashboardDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDashboardDefinitionRequestT = Model::DescribeDashboardDefinitionRequest>
        Model::DescribeDashboardDefinitionOutcomeCallable DescribeDashboardDefinitionCallable(const DescribeDashboardDefinitionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDashboardDefinition, request);
        }

        /**
         * An Async wrapper for DescribeDashboardDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDashboardDefinitionRequestT = Model::DescribeDashboardDefinitionRequest>
        void DescribeDashboardDefinitionAsync(const DescribeDashboardDefinitionRequestT& request, const DescribeDashboardDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDashboardDefinition, request, handler, context);
        }

        /**
         * <p>Describes read and write permissions for a dashboard.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardPermissionsOutcome DescribeDashboardPermissions(const Model::DescribeDashboardPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDashboardPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDashboardPermissionsRequestT = Model::DescribeDashboardPermissionsRequest>
        Model::DescribeDashboardPermissionsOutcomeCallable DescribeDashboardPermissionsCallable(const DescribeDashboardPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDashboardPermissions, request);
        }

        /**
         * An Async wrapper for DescribeDashboardPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDashboardPermissionsRequestT = Model::DescribeDashboardPermissionsRequest>
        void DescribeDashboardPermissionsAsync(const DescribeDashboardPermissionsRequestT& request, const DescribeDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDashboardPermissions, request, handler, context);
        }

        /**
         * <p>Describes an existing snapshot job.</p> <p>Poll job descriptions after a job
         * starts to know the status of the job. For information on available status codes,
         * see <code>JobStatus</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardSnapshotJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardSnapshotJobOutcome DescribeDashboardSnapshotJob(const Model::DescribeDashboardSnapshotJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDashboardSnapshotJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDashboardSnapshotJobRequestT = Model::DescribeDashboardSnapshotJobRequest>
        Model::DescribeDashboardSnapshotJobOutcomeCallable DescribeDashboardSnapshotJobCallable(const DescribeDashboardSnapshotJobRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDashboardSnapshotJob, request);
        }

        /**
         * An Async wrapper for DescribeDashboardSnapshotJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDashboardSnapshotJobRequestT = Model::DescribeDashboardSnapshotJobRequest>
        void DescribeDashboardSnapshotJobAsync(const DescribeDashboardSnapshotJobRequestT& request, const DescribeDashboardSnapshotJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDashboardSnapshotJob, request, handler, context);
        }

        /**
         * <p>Describes the result of an existing snapshot job that has finished
         * running.</p> <p>A finished snapshot job will return a <code>COMPLETED</code> or
         * <code>FAILED</code> status when you poll the job with a
         * <code>DescribeDashboardSnapshotJob</code> API call.</p> <p>If the job has not
         * finished running, this operation returns a message that says <code>Dashboard
         * Snapshot Job with id &lt;SnapshotjobId&gt; has not reached a terminal
         * state.</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDashboardSnapshotJobResult">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDashboardSnapshotJobResultOutcome DescribeDashboardSnapshotJobResult(const Model::DescribeDashboardSnapshotJobResultRequest& request) const;

        /**
         * A Callable wrapper for DescribeDashboardSnapshotJobResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDashboardSnapshotJobResultRequestT = Model::DescribeDashboardSnapshotJobResultRequest>
        Model::DescribeDashboardSnapshotJobResultOutcomeCallable DescribeDashboardSnapshotJobResultCallable(const DescribeDashboardSnapshotJobResultRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDashboardSnapshotJobResult, request);
        }

        /**
         * An Async wrapper for DescribeDashboardSnapshotJobResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDashboardSnapshotJobResultRequestT = Model::DescribeDashboardSnapshotJobResultRequest>
        void DescribeDashboardSnapshotJobResultAsync(const DescribeDashboardSnapshotJobResultRequestT& request, const DescribeDashboardSnapshotJobResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDashboardSnapshotJobResult, request, handler, context);
        }

        /**
         * <p>Describes a dataset. This operation doesn't support datasets that include
         * uploaded files as a source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetOutcome DescribeDataSet(const Model::DescribeDataSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataSetRequestT = Model::DescribeDataSetRequest>
        Model::DescribeDataSetOutcomeCallable DescribeDataSetCallable(const DescribeDataSetRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDataSet, request);
        }

        /**
         * An Async wrapper for DescribeDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataSetRequestT = Model::DescribeDataSetRequest>
        void DescribeDataSetAsync(const DescribeDataSetRequestT& request, const DescribeDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDataSet, request, handler, context);
        }

        /**
         * <p>Describes the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSetPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetPermissionsOutcome DescribeDataSetPermissions(const Model::DescribeDataSetPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSetPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataSetPermissionsRequestT = Model::DescribeDataSetPermissionsRequest>
        Model::DescribeDataSetPermissionsOutcomeCallable DescribeDataSetPermissionsCallable(const DescribeDataSetPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDataSetPermissions, request);
        }

        /**
         * An Async wrapper for DescribeDataSetPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataSetPermissionsRequestT = Model::DescribeDataSetPermissionsRequest>
        void DescribeDataSetPermissionsAsync(const DescribeDataSetPermissionsRequestT& request, const DescribeDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDataSetPermissions, request, handler, context);
        }

        /**
         * <p>Describes the refresh properties of a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSetRefreshProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSetRefreshPropertiesOutcome DescribeDataSetRefreshProperties(const Model::DescribeDataSetRefreshPropertiesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSetRefreshProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataSetRefreshPropertiesRequestT = Model::DescribeDataSetRefreshPropertiesRequest>
        Model::DescribeDataSetRefreshPropertiesOutcomeCallable DescribeDataSetRefreshPropertiesCallable(const DescribeDataSetRefreshPropertiesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDataSetRefreshProperties, request);
        }

        /**
         * An Async wrapper for DescribeDataSetRefreshProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataSetRefreshPropertiesRequestT = Model::DescribeDataSetRefreshPropertiesRequest>
        void DescribeDataSetRefreshPropertiesAsync(const DescribeDataSetRefreshPropertiesRequestT& request, const DescribeDataSetRefreshPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDataSetRefreshProperties, request, handler, context);
        }

        /**
         * <p>Describes a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourceOutcome DescribeDataSource(const Model::DescribeDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataSourceRequestT = Model::DescribeDataSourceRequest>
        Model::DescribeDataSourceOutcomeCallable DescribeDataSourceCallable(const DescribeDataSourceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDataSource, request);
        }

        /**
         * An Async wrapper for DescribeDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataSourceRequestT = Model::DescribeDataSourceRequest>
        void DescribeDataSourceAsync(const DescribeDataSourceRequestT& request, const DescribeDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDataSource, request, handler, context);
        }

        /**
         * <p>Describes the resource permissions for a data source.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeDataSourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourcePermissionsOutcome DescribeDataSourcePermissions(const Model::DescribeDataSourcePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataSourcePermissionsRequestT = Model::DescribeDataSourcePermissionsRequest>
        Model::DescribeDataSourcePermissionsOutcomeCallable DescribeDataSourcePermissionsCallable(const DescribeDataSourcePermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeDataSourcePermissions, request);
        }

        /**
         * An Async wrapper for DescribeDataSourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataSourcePermissionsRequestT = Model::DescribeDataSourcePermissionsRequest>
        void DescribeDataSourcePermissionsAsync(const DescribeDataSourcePermissionsRequestT& request, const DescribeDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeDataSourcePermissions, request, handler, context);
        }

        /**
         * <p>Describes a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderOutcome DescribeFolder(const Model::DescribeFolderRequest& request) const;

        /**
         * A Callable wrapper for DescribeFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFolderRequestT = Model::DescribeFolderRequest>
        Model::DescribeFolderOutcomeCallable DescribeFolderCallable(const DescribeFolderRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeFolder, request);
        }

        /**
         * An Async wrapper for DescribeFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFolderRequestT = Model::DescribeFolderRequest>
        void DescribeFolderAsync(const DescribeFolderRequestT& request, const DescribeFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeFolder, request, handler, context);
        }

        /**
         * <p>Describes permissions for a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolderPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderPermissionsOutcome DescribeFolderPermissions(const Model::DescribeFolderPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFolderPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFolderPermissionsRequestT = Model::DescribeFolderPermissionsRequest>
        Model::DescribeFolderPermissionsOutcomeCallable DescribeFolderPermissionsCallable(const DescribeFolderPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeFolderPermissions, request);
        }

        /**
         * An Async wrapper for DescribeFolderPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFolderPermissionsRequestT = Model::DescribeFolderPermissionsRequest>
        void DescribeFolderPermissionsAsync(const DescribeFolderPermissionsRequestT& request, const DescribeFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeFolderPermissions, request, handler, context);
        }

        /**
         * <p>Describes the folder resolved permissions. Permissions consists of both
         * folder direct permissions and the inherited permissions from the ancestor
         * folders.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeFolderResolvedPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderResolvedPermissionsOutcome DescribeFolderResolvedPermissions(const Model::DescribeFolderResolvedPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFolderResolvedPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFolderResolvedPermissionsRequestT = Model::DescribeFolderResolvedPermissionsRequest>
        Model::DescribeFolderResolvedPermissionsOutcomeCallable DescribeFolderResolvedPermissionsCallable(const DescribeFolderResolvedPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeFolderResolvedPermissions, request);
        }

        /**
         * An Async wrapper for DescribeFolderResolvedPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFolderResolvedPermissionsRequestT = Model::DescribeFolderResolvedPermissionsRequest>
        void DescribeFolderResolvedPermissionsAsync(const DescribeFolderResolvedPermissionsRequestT& request, const DescribeFolderResolvedPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeFolderResolvedPermissions, request, handler, context);
        }

        /**
         * <p>Returns an Amazon QuickSight group's description and Amazon Resource Name
         * (ARN). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGroupRequestT = Model::DescribeGroupRequest>
        Model::DescribeGroupOutcomeCallable DescribeGroupCallable(const DescribeGroupRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeGroup, request);
        }

        /**
         * An Async wrapper for DescribeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGroupRequestT = Model::DescribeGroupRequest>
        void DescribeGroupAsync(const DescribeGroupRequestT& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeGroup, request, handler, context);
        }

        /**
         * <p>Use the <code>DescribeGroupMembership</code> operation to determine if a user
         * is a member of the specified group. If the user exists and is a member of the
         * specified group, an associated <code>GroupMember</code> object is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeGroupMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupMembershipOutcome DescribeGroupMembership(const Model::DescribeGroupMembershipRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroupMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGroupMembershipRequestT = Model::DescribeGroupMembershipRequest>
        Model::DescribeGroupMembershipOutcomeCallable DescribeGroupMembershipCallable(const DescribeGroupMembershipRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeGroupMembership, request);
        }

        /**
         * An Async wrapper for DescribeGroupMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGroupMembershipRequestT = Model::DescribeGroupMembershipRequest>
        void DescribeGroupMembershipAsync(const DescribeGroupMembershipRequestT& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeGroupMembership, request, handler, context);
        }

        /**
         * <p>Describes an existing IAM policy assignment, as specified by the assignment
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIAMPolicyAssignmentOutcome DescribeIAMPolicyAssignment(const Model::DescribeIAMPolicyAssignmentRequest& request) const;

        /**
         * A Callable wrapper for DescribeIAMPolicyAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIAMPolicyAssignmentRequestT = Model::DescribeIAMPolicyAssignmentRequest>
        Model::DescribeIAMPolicyAssignmentOutcomeCallable DescribeIAMPolicyAssignmentCallable(const DescribeIAMPolicyAssignmentRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeIAMPolicyAssignment, request);
        }

        /**
         * An Async wrapper for DescribeIAMPolicyAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIAMPolicyAssignmentRequestT = Model::DescribeIAMPolicyAssignmentRequest>
        void DescribeIAMPolicyAssignmentAsync(const DescribeIAMPolicyAssignmentRequestT& request, const DescribeIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeIAMPolicyAssignment, request, handler, context);
        }

        /**
         * <p>Describes a SPICE ingestion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIngestion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIngestionOutcome DescribeIngestion(const Model::DescribeIngestionRequest& request) const;

        /**
         * A Callable wrapper for DescribeIngestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIngestionRequestT = Model::DescribeIngestionRequest>
        Model::DescribeIngestionOutcomeCallable DescribeIngestionCallable(const DescribeIngestionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeIngestion, request);
        }

        /**
         * An Async wrapper for DescribeIngestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIngestionRequestT = Model::DescribeIngestionRequest>
        void DescribeIngestionAsync(const DescribeIngestionRequestT& request, const DescribeIngestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeIngestion, request, handler, context);
        }

        /**
         * <p>Provides a summary and status of IP rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeIpRestriction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpRestrictionOutcome DescribeIpRestriction(const Model::DescribeIpRestrictionRequest& request) const;

        /**
         * A Callable wrapper for DescribeIpRestriction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIpRestrictionRequestT = Model::DescribeIpRestrictionRequest>
        Model::DescribeIpRestrictionOutcomeCallable DescribeIpRestrictionCallable(const DescribeIpRestrictionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeIpRestriction, request);
        }

        /**
         * An Async wrapper for DescribeIpRestriction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIpRestrictionRequestT = Model::DescribeIpRestrictionRequest>
        void DescribeIpRestrictionAsync(const DescribeIpRestrictionRequestT& request, const DescribeIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeIpRestriction, request, handler, context);
        }

        /**
         * <p>Describes the current namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNamespaceOutcome DescribeNamespace(const Model::DescribeNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNamespaceRequestT = Model::DescribeNamespaceRequest>
        Model::DescribeNamespaceOutcomeCallable DescribeNamespaceCallable(const DescribeNamespaceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeNamespace, request);
        }

        /**
         * An Async wrapper for DescribeNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNamespaceRequestT = Model::DescribeNamespaceRequest>
        void DescribeNamespaceAsync(const DescribeNamespaceRequestT& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeNamespace, request, handler, context);
        }

        /**
         * <p>Provides a summary of a refresh schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeRefreshSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRefreshScheduleOutcome DescribeRefreshSchedule(const Model::DescribeRefreshScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeRefreshSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRefreshScheduleRequestT = Model::DescribeRefreshScheduleRequest>
        Model::DescribeRefreshScheduleOutcomeCallable DescribeRefreshScheduleCallable(const DescribeRefreshScheduleRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeRefreshSchedule, request);
        }

        /**
         * An Async wrapper for DescribeRefreshSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRefreshScheduleRequestT = Model::DescribeRefreshScheduleRequest>
        void DescribeRefreshScheduleAsync(const DescribeRefreshScheduleRequestT& request, const DescribeRefreshScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeRefreshSchedule, request, handler, context);
        }

        /**
         * <p>Describes all custom permissions that are mapped to a role.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeRoleCustomPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRoleCustomPermissionOutcome DescribeRoleCustomPermission(const Model::DescribeRoleCustomPermissionRequest& request) const;

        /**
         * A Callable wrapper for DescribeRoleCustomPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRoleCustomPermissionRequestT = Model::DescribeRoleCustomPermissionRequest>
        Model::DescribeRoleCustomPermissionOutcomeCallable DescribeRoleCustomPermissionCallable(const DescribeRoleCustomPermissionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeRoleCustomPermission, request);
        }

        /**
         * An Async wrapper for DescribeRoleCustomPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRoleCustomPermissionRequestT = Model::DescribeRoleCustomPermissionRequest>
        void DescribeRoleCustomPermissionAsync(const DescribeRoleCustomPermissionRequestT& request, const DescribeRoleCustomPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeRoleCustomPermission, request, handler, context);
        }

        /**
         * <p>Describes a template's metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateOutcome DescribeTemplate(const Model::DescribeTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTemplateRequestT = Model::DescribeTemplateRequest>
        Model::DescribeTemplateOutcomeCallable DescribeTemplateCallable(const DescribeTemplateRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTemplate, request);
        }

        /**
         * An Async wrapper for DescribeTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTemplateRequestT = Model::DescribeTemplateRequest>
        void DescribeTemplateAsync(const DescribeTemplateRequestT& request, const DescribeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTemplate, request, handler, context);
        }

        /**
         * <p>Describes the template alias for a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateAliasOutcome DescribeTemplateAlias(const Model::DescribeTemplateAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeTemplateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTemplateAliasRequestT = Model::DescribeTemplateAliasRequest>
        Model::DescribeTemplateAliasOutcomeCallable DescribeTemplateAliasCallable(const DescribeTemplateAliasRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTemplateAlias, request);
        }

        /**
         * An Async wrapper for DescribeTemplateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTemplateAliasRequestT = Model::DescribeTemplateAliasRequest>
        void DescribeTemplateAliasAsync(const DescribeTemplateAliasRequestT& request, const DescribeTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTemplateAlias, request, handler, context);
        }

        /**
         * <p>Provides a detailed description of the definition of a template.</p> 
         * <p>If you do not need to know details about the content of a template, for
         * instance if you are trying to check the status of a recently created or updated
         * template, use the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_DescribeTemplate.html">
         * <code>DescribeTemplate</code> </a> instead. </p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplateDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplateDefinitionOutcome DescribeTemplateDefinition(const Model::DescribeTemplateDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeTemplateDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTemplateDefinitionRequestT = Model::DescribeTemplateDefinitionRequest>
        Model::DescribeTemplateDefinitionOutcomeCallable DescribeTemplateDefinitionCallable(const DescribeTemplateDefinitionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTemplateDefinition, request);
        }

        /**
         * An Async wrapper for DescribeTemplateDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTemplateDefinitionRequestT = Model::DescribeTemplateDefinitionRequest>
        void DescribeTemplateDefinitionAsync(const DescribeTemplateDefinitionRequestT& request, const DescribeTemplateDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTemplateDefinition, request, handler, context);
        }

        /**
         * <p>Describes read and write permissions on a template.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTemplatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTemplatePermissionsOutcome DescribeTemplatePermissions(const Model::DescribeTemplatePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTemplatePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTemplatePermissionsRequestT = Model::DescribeTemplatePermissionsRequest>
        Model::DescribeTemplatePermissionsOutcomeCallable DescribeTemplatePermissionsCallable(const DescribeTemplatePermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTemplatePermissions, request);
        }

        /**
         * An Async wrapper for DescribeTemplatePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTemplatePermissionsRequestT = Model::DescribeTemplatePermissionsRequest>
        void DescribeTemplatePermissionsAsync(const DescribeTemplatePermissionsRequestT& request, const DescribeTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTemplatePermissions, request, handler, context);
        }

        /**
         * <p>Describes a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemeOutcome DescribeTheme(const Model::DescribeThemeRequest& request) const;

        /**
         * A Callable wrapper for DescribeTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeThemeRequestT = Model::DescribeThemeRequest>
        Model::DescribeThemeOutcomeCallable DescribeThemeCallable(const DescribeThemeRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTheme, request);
        }

        /**
         * An Async wrapper for DescribeTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThemeRequestT = Model::DescribeThemeRequest>
        void DescribeThemeAsync(const DescribeThemeRequestT& request, const DescribeThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTheme, request, handler, context);
        }

        /**
         * <p>Describes the alias for a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemeAliasOutcome DescribeThemeAlias(const Model::DescribeThemeAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeThemeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeThemeAliasRequestT = Model::DescribeThemeAliasRequest>
        Model::DescribeThemeAliasOutcomeCallable DescribeThemeAliasCallable(const DescribeThemeAliasRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeThemeAlias, request);
        }

        /**
         * An Async wrapper for DescribeThemeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThemeAliasRequestT = Model::DescribeThemeAliasRequest>
        void DescribeThemeAliasAsync(const DescribeThemeAliasRequestT& request, const DescribeThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeThemeAlias, request, handler, context);
        }

        /**
         * <p>Describes the read and write permissions for a theme.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeThemePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThemePermissionsOutcome DescribeThemePermissions(const Model::DescribeThemePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeThemePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeThemePermissionsRequestT = Model::DescribeThemePermissionsRequest>
        Model::DescribeThemePermissionsOutcomeCallable DescribeThemePermissionsCallable(const DescribeThemePermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeThemePermissions, request);
        }

        /**
         * An Async wrapper for DescribeThemePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThemePermissionsRequestT = Model::DescribeThemePermissionsRequest>
        void DescribeThemePermissionsAsync(const DescribeThemePermissionsRequestT& request, const DescribeThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeThemePermissions, request, handler, context);
        }

        /**
         * <p>Describes a topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTopicOutcome DescribeTopic(const Model::DescribeTopicRequest& request) const;

        /**
         * A Callable wrapper for DescribeTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTopicRequestT = Model::DescribeTopicRequest>
        Model::DescribeTopicOutcomeCallable DescribeTopicCallable(const DescribeTopicRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTopic, request);
        }

        /**
         * An Async wrapper for DescribeTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTopicRequestT = Model::DescribeTopicRequest>
        void DescribeTopicAsync(const DescribeTopicRequestT& request, const DescribeTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTopic, request, handler, context);
        }

        /**
         * <p>Describes the permissions of a topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTopicPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTopicPermissionsOutcome DescribeTopicPermissions(const Model::DescribeTopicPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTopicPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTopicPermissionsRequestT = Model::DescribeTopicPermissionsRequest>
        Model::DescribeTopicPermissionsOutcomeCallable DescribeTopicPermissionsCallable(const DescribeTopicPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTopicPermissions, request);
        }

        /**
         * An Async wrapper for DescribeTopicPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTopicPermissionsRequestT = Model::DescribeTopicPermissionsRequest>
        void DescribeTopicPermissionsAsync(const DescribeTopicPermissionsRequestT& request, const DescribeTopicPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTopicPermissions, request, handler, context);
        }

        /**
         * <p>Describes the status of a topic refresh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTopicRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTopicRefreshOutcome DescribeTopicRefresh(const Model::DescribeTopicRefreshRequest& request) const;

        /**
         * A Callable wrapper for DescribeTopicRefresh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTopicRefreshRequestT = Model::DescribeTopicRefreshRequest>
        Model::DescribeTopicRefreshOutcomeCallable DescribeTopicRefreshCallable(const DescribeTopicRefreshRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTopicRefresh, request);
        }

        /**
         * An Async wrapper for DescribeTopicRefresh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTopicRefreshRequestT = Model::DescribeTopicRefreshRequest>
        void DescribeTopicRefreshAsync(const DescribeTopicRefreshRequestT& request, const DescribeTopicRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTopicRefresh, request, handler, context);
        }

        /**
         * <p>Deletes a topic refresh schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeTopicRefreshSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTopicRefreshScheduleOutcome DescribeTopicRefreshSchedule(const Model::DescribeTopicRefreshScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeTopicRefreshSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTopicRefreshScheduleRequestT = Model::DescribeTopicRefreshScheduleRequest>
        Model::DescribeTopicRefreshScheduleOutcomeCallable DescribeTopicRefreshScheduleCallable(const DescribeTopicRefreshScheduleRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeTopicRefreshSchedule, request);
        }

        /**
         * An Async wrapper for DescribeTopicRefreshSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTopicRefreshScheduleRequestT = Model::DescribeTopicRefreshScheduleRequest>
        void DescribeTopicRefreshScheduleAsync(const DescribeTopicRefreshScheduleRequestT& request, const DescribeTopicRefreshScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeTopicRefreshSchedule, request, handler, context);
        }

        /**
         * <p>Returns information about a user, given the user name. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        Model::DescribeUserOutcomeCallable DescribeUserCallable(const DescribeUserRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeUser, request);
        }

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        void DescribeUserAsync(const DescribeUserRequestT& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeUser, request, handler, context);
        }

        /**
         * <p>Describes a VPC connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DescribeVPCConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVPCConnectionOutcome DescribeVPCConnection(const Model::DescribeVPCConnectionRequest& request) const;

        /**
         * A Callable wrapper for DescribeVPCConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVPCConnectionRequestT = Model::DescribeVPCConnectionRequest>
        Model::DescribeVPCConnectionOutcomeCallable DescribeVPCConnectionCallable(const DescribeVPCConnectionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::DescribeVPCConnection, request);
        }

        /**
         * An Async wrapper for DescribeVPCConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVPCConnectionRequestT = Model::DescribeVPCConnectionRequest>
        void DescribeVPCConnectionAsync(const DescribeVPCConnectionRequestT& request, const DescribeVPCConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::DescribeVPCConnection, request, handler, context);
        }

        /**
         * <p>Generates an embed URL that you can use to embed an Amazon QuickSight
         * dashboard or visual in your website, without having to register any reader
         * users. Before you use this action, make sure that you have configured the
         * dashboards and permissions.</p> <p>The following rules apply to the generated
         * URL:</p> <ul> <li> <p>It contains a temporary bearer token. It is valid for 5
         * minutes after it is generated. Once redeemed within this period, it cannot be
         * re-used again.</p> </li> <li> <p>The URL validity period should not be confused
         * with the actual session lifetime that can be customized using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForAnonymousUser.html#QS-GenerateEmbedUrlForAnonymousUser-request-SessionLifetimeInMinutes">SessionLifetimeInMinutes</a>
         * </code> parameter. The resulting user session is valid for 15 minutes (minimum)
         * to 10 hours (maximum). The default session duration is 10 hours.</p> </li> <li>
         * <p>You are charged only when the URL is used or there is interaction with Amazon
         * QuickSight.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedded
         * Analytics</a> in the <i>Amazon QuickSight User Guide</i>.</p> <p>For more
         * information about the high-level steps for embedding and for an interactive demo
         * of the ways you can customize embedding, visit the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GenerateEmbedUrlForAnonymousUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateEmbedUrlForAnonymousUserOutcome GenerateEmbedUrlForAnonymousUser(const Model::GenerateEmbedUrlForAnonymousUserRequest& request) const;

        /**
         * A Callable wrapper for GenerateEmbedUrlForAnonymousUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateEmbedUrlForAnonymousUserRequestT = Model::GenerateEmbedUrlForAnonymousUserRequest>
        Model::GenerateEmbedUrlForAnonymousUserOutcomeCallable GenerateEmbedUrlForAnonymousUserCallable(const GenerateEmbedUrlForAnonymousUserRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::GenerateEmbedUrlForAnonymousUser, request);
        }

        /**
         * An Async wrapper for GenerateEmbedUrlForAnonymousUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateEmbedUrlForAnonymousUserRequestT = Model::GenerateEmbedUrlForAnonymousUserRequest>
        void GenerateEmbedUrlForAnonymousUserAsync(const GenerateEmbedUrlForAnonymousUserRequestT& request, const GenerateEmbedUrlForAnonymousUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::GenerateEmbedUrlForAnonymousUser, request, handler, context);
        }

        /**
         * <p>Generates an embed URL that you can use to embed an Amazon QuickSight
         * experience in your website. This action can be used for any type of user
         * registered in an Amazon QuickSight account. Before you use this action, make
         * sure that you have configured the relevant Amazon QuickSight resource and
         * permissions.</p> <p>The following rules apply to the generated URL:</p> <ul>
         * <li> <p>It contains a temporary bearer token. It is valid for 5 minutes after it
         * is generated. Once redeemed within this period, it cannot be re-used again.</p>
         * </li> <li> <p>The URL validity period should not be confused with the actual
         * session lifetime that can be customized using the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html#QS-GenerateEmbedUrlForRegisteredUser-request-SessionLifetimeInMinutes">SessionLifetimeInMinutes</a>
         * </code> parameter.</p> <p>The resulting user session is valid for 15 minutes
         * (minimum) to 10 hours (maximum). The default session duration is 10 hours.</p>
         * </li> <li> <p>You are charged only when the URL is used or there is interaction
         * with Amazon QuickSight.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedded
         * Analytics</a> in the <i>Amazon QuickSight User Guide</i>.</p> <p>For more
         * information about the high-level steps for embedding and for an interactive demo
         * of the ways you can customize embedding, visit the <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GenerateEmbedUrlForRegisteredUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateEmbedUrlForRegisteredUserOutcome GenerateEmbedUrlForRegisteredUser(const Model::GenerateEmbedUrlForRegisteredUserRequest& request) const;

        /**
         * A Callable wrapper for GenerateEmbedUrlForRegisteredUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateEmbedUrlForRegisteredUserRequestT = Model::GenerateEmbedUrlForRegisteredUserRequest>
        Model::GenerateEmbedUrlForRegisteredUserOutcomeCallable GenerateEmbedUrlForRegisteredUserCallable(const GenerateEmbedUrlForRegisteredUserRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::GenerateEmbedUrlForRegisteredUser, request);
        }

        /**
         * An Async wrapper for GenerateEmbedUrlForRegisteredUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateEmbedUrlForRegisteredUserRequestT = Model::GenerateEmbedUrlForRegisteredUserRequest>
        void GenerateEmbedUrlForRegisteredUserAsync(const GenerateEmbedUrlForRegisteredUserRequestT& request, const GenerateEmbedUrlForRegisteredUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::GenerateEmbedUrlForRegisteredUser, request, handler, context);
        }

        /**
         * <p>Generates a temporary session URL and authorization code(bearer token) that
         * you can use to embed an Amazon QuickSight read-only dashboard in your website or
         * application. Before you use this command, make sure that you have configured the
         * dashboards and permissions. </p> <p>Currently, you can use
         * <code>GetDashboardEmbedURL</code> only from the server, not from the user's
         * browser. The following rules apply to the generated URL:</p> <ul> <li> <p>They
         * must be used together.</p> </li> <li> <p>They can be used one time only.</p>
         * </li> <li> <p>They are valid for 5 minutes after you run this command.</p> </li>
         * <li> <p>You are charged only when the URL is used or there is interaction with
         * Amazon QuickSight.</p> </li> <li> <p>The resulting user session is valid for 15
         * minutes (default) up to 10 hours (maximum). You can use the optional
         * <code>SessionLifetimeInMinutes</code> parameter to customize session
         * duration.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-deprecated.html">Embedding
         * Analytics Using GetDashboardEmbedUrl</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p> <p>For more information about the high-level steps for embedding
         * and for an interactive demo of the ways you can customize embedding, visit the
         * <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
         * QuickSight Developer Portal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardEmbedUrlOutcome GetDashboardEmbedUrl(const Model::GetDashboardEmbedUrlRequest& request) const;

        /**
         * A Callable wrapper for GetDashboardEmbedUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDashboardEmbedUrlRequestT = Model::GetDashboardEmbedUrlRequest>
        Model::GetDashboardEmbedUrlOutcomeCallable GetDashboardEmbedUrlCallable(const GetDashboardEmbedUrlRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::GetDashboardEmbedUrl, request);
        }

        /**
         * An Async wrapper for GetDashboardEmbedUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDashboardEmbedUrlRequestT = Model::GetDashboardEmbedUrlRequest>
        void GetDashboardEmbedUrlAsync(const GetDashboardEmbedUrlRequestT& request, const GetDashboardEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::GetDashboardEmbedUrl, request, handler, context);
        }

        /**
         * <p>Generates a session URL and authorization code that you can use to embed the
         * Amazon Amazon QuickSight console in your web server code. Use
         * <code>GetSessionEmbedUrl</code> where you want to provide an authoring portal
         * that allows users to create data sources, datasets, analyses, and dashboards.
         * The users who access an embedded Amazon QuickSight console need belong to the
         * author or admin security cohort. If you want to restrict permissions to some of
         * these features, add a custom permissions profile to the user with the <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
         * </code> API operation. Use <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
         * </code> API operation to add a new user with a custom permission profile
         * attached. For more information, see the following sections in the <i>Amazon
         * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedding
         * Analytics</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
         * Access to the Amazon QuickSight Console</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetSessionEmbedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionEmbedUrlOutcome GetSessionEmbedUrl(const Model::GetSessionEmbedUrlRequest& request) const;

        /**
         * A Callable wrapper for GetSessionEmbedUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionEmbedUrlRequestT = Model::GetSessionEmbedUrlRequest>
        Model::GetSessionEmbedUrlOutcomeCallable GetSessionEmbedUrlCallable(const GetSessionEmbedUrlRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::GetSessionEmbedUrl, request);
        }

        /**
         * An Async wrapper for GetSessionEmbedUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionEmbedUrlRequestT = Model::GetSessionEmbedUrlRequest>
        void GetSessionEmbedUrlAsync(const GetSessionEmbedUrlRequestT& request, const GetSessionEmbedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::GetSessionEmbedUrl, request, handler, context);
        }

        /**
         * <p>Lists Amazon QuickSight analyses that exist in the specified Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalysesOutcome ListAnalyses(const Model::ListAnalysesRequest& request) const;

        /**
         * A Callable wrapper for ListAnalyses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnalysesRequestT = Model::ListAnalysesRequest>
        Model::ListAnalysesOutcomeCallable ListAnalysesCallable(const ListAnalysesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListAnalyses, request);
        }

        /**
         * An Async wrapper for ListAnalyses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnalysesRequestT = Model::ListAnalysesRequest>
        void ListAnalysesAsync(const ListAnalysesRequestT& request, const ListAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListAnalyses, request, handler, context);
        }

        /**
         * <p>Lists all asset bundle export jobs that have been taken place in the last 14
         * days. Jobs created more than 14 days ago are deleted forever and are not
         * returned. If you are using the same job ID for multiple jobs,
         * <code>ListAssetBundleExportJobs</code> only returns the most recent job that
         * uses the repeated job ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListAssetBundleExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetBundleExportJobsOutcome ListAssetBundleExportJobs(const Model::ListAssetBundleExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAssetBundleExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssetBundleExportJobsRequestT = Model::ListAssetBundleExportJobsRequest>
        Model::ListAssetBundleExportJobsOutcomeCallable ListAssetBundleExportJobsCallable(const ListAssetBundleExportJobsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListAssetBundleExportJobs, request);
        }

        /**
         * An Async wrapper for ListAssetBundleExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssetBundleExportJobsRequestT = Model::ListAssetBundleExportJobsRequest>
        void ListAssetBundleExportJobsAsync(const ListAssetBundleExportJobsRequestT& request, const ListAssetBundleExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListAssetBundleExportJobs, request, handler, context);
        }

        /**
         * <p>Lists all asset bundle import jobs that have taken place in the last 14 days.
         * Jobs created more than 14 days ago are deleted forever and are not returned. If
         * you are using the same job ID for multiple jobs,
         * <code>ListAssetBundleImportJobs</code> only returns the most recent job that
         * uses the repeated job ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListAssetBundleImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetBundleImportJobsOutcome ListAssetBundleImportJobs(const Model::ListAssetBundleImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAssetBundleImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssetBundleImportJobsRequestT = Model::ListAssetBundleImportJobsRequest>
        Model::ListAssetBundleImportJobsOutcomeCallable ListAssetBundleImportJobsCallable(const ListAssetBundleImportJobsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListAssetBundleImportJobs, request);
        }

        /**
         * An Async wrapper for ListAssetBundleImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssetBundleImportJobsRequestT = Model::ListAssetBundleImportJobsRequest>
        void ListAssetBundleImportJobsAsync(const ListAssetBundleImportJobsRequestT& request, const ListAssetBundleImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListAssetBundleImportJobs, request, handler, context);
        }

        /**
         * <p>Lists all the versions of the dashboards in the Amazon QuickSight
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboardVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardVersionsOutcome ListDashboardVersions(const Model::ListDashboardVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListDashboardVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDashboardVersionsRequestT = Model::ListDashboardVersionsRequest>
        Model::ListDashboardVersionsOutcomeCallable ListDashboardVersionsCallable(const ListDashboardVersionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListDashboardVersions, request);
        }

        /**
         * An Async wrapper for ListDashboardVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDashboardVersionsRequestT = Model::ListDashboardVersionsRequest>
        void ListDashboardVersionsAsync(const ListDashboardVersionsRequestT& request, const ListDashboardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListDashboardVersions, request, handler, context);
        }

        /**
         * <p>Lists dashboards in an Amazon Web Services account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;

        /**
         * A Callable wrapper for ListDashboards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDashboardsRequestT = Model::ListDashboardsRequest>
        Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const ListDashboardsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListDashboards, request);
        }

        /**
         * An Async wrapper for ListDashboards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDashboardsRequestT = Model::ListDashboardsRequest>
        void ListDashboardsAsync(const ListDashboardsRequestT& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListDashboards, request, handler, context);
        }

        /**
         * <p>Lists all of the datasets belonging to the current Amazon Web Services
         * account in an Amazon Web Services Region.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/ *</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetsOutcome ListDataSets(const Model::ListDataSetsRequest& request) const;

        /**
         * A Callable wrapper for ListDataSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSetsRequestT = Model::ListDataSetsRequest>
        Model::ListDataSetsOutcomeCallable ListDataSetsCallable(const ListDataSetsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListDataSets, request);
        }

        /**
         * An Async wrapper for ListDataSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSetsRequestT = Model::ListDataSetsRequest>
        void ListDataSetsAsync(const ListDataSetsRequestT& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListDataSets, request, handler, context);
        }

        /**
         * <p>Lists data sources in current Amazon Web Services Region that belong to this
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const ListDataSourcesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListDataSources, request);
        }

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        void ListDataSourcesAsync(const ListDataSourcesRequestT& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListDataSources, request, handler, context);
        }

        /**
         * <p>List all assets (<code>DASHBOARD</code>, <code>ANALYSIS</code>, and
         * <code>DATASET</code>) in a folder. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListFolderMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFolderMembersOutcome ListFolderMembers(const Model::ListFolderMembersRequest& request) const;

        /**
         * A Callable wrapper for ListFolderMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFolderMembersRequestT = Model::ListFolderMembersRequest>
        Model::ListFolderMembersOutcomeCallable ListFolderMembersCallable(const ListFolderMembersRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListFolderMembers, request);
        }

        /**
         * An Async wrapper for ListFolderMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFolderMembersRequestT = Model::ListFolderMembersRequest>
        void ListFolderMembersAsync(const ListFolderMembersRequestT& request, const ListFolderMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListFolderMembers, request, handler, context);
        }

        /**
         * <p>Lists all folders in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListFolders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFoldersOutcome ListFolders(const Model::ListFoldersRequest& request) const;

        /**
         * A Callable wrapper for ListFolders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFoldersRequestT = Model::ListFoldersRequest>
        Model::ListFoldersOutcomeCallable ListFoldersCallable(const ListFoldersRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListFolders, request);
        }

        /**
         * An Async wrapper for ListFolders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFoldersRequestT = Model::ListFoldersRequest>
        void ListFoldersAsync(const ListFoldersRequestT& request, const ListFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListFolders, request, handler, context);
        }

        /**
         * <p>Lists member users in a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroupMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembershipsOutcome ListGroupMemberships(const Model::ListGroupMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListGroupMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupMembershipsRequestT = Model::ListGroupMembershipsRequest>
        Model::ListGroupMembershipsOutcomeCallable ListGroupMembershipsCallable(const ListGroupMembershipsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListGroupMemberships, request);
        }

        /**
         * An Async wrapper for ListGroupMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupMembershipsRequestT = Model::ListGroupMembershipsRequest>
        void ListGroupMembershipsAsync(const ListGroupMembershipsRequestT& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListGroupMemberships, request, handler, context);
        }

        /**
         * <p>Lists all user groups in Amazon QuickSight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const ListGroupsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListGroups, request);
        }

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        void ListGroupsAsync(const ListGroupsRequestT& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListGroups, request, handler, context);
        }

        /**
         * <p>Lists the IAM policy assignments in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIAMPolicyAssignmentsOutcome ListIAMPolicyAssignments(const Model::ListIAMPolicyAssignmentsRequest& request) const;

        /**
         * A Callable wrapper for ListIAMPolicyAssignments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIAMPolicyAssignmentsRequestT = Model::ListIAMPolicyAssignmentsRequest>
        Model::ListIAMPolicyAssignmentsOutcomeCallable ListIAMPolicyAssignmentsCallable(const ListIAMPolicyAssignmentsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListIAMPolicyAssignments, request);
        }

        /**
         * An Async wrapper for ListIAMPolicyAssignments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIAMPolicyAssignmentsRequestT = Model::ListIAMPolicyAssignmentsRequest>
        void ListIAMPolicyAssignmentsAsync(const ListIAMPolicyAssignmentsRequestT& request, const ListIAMPolicyAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListIAMPolicyAssignments, request, handler, context);
        }

        /**
         * <p>Lists all of the IAM policy assignments, including the Amazon Resource Names
         * (ARNs), for the IAM policies assigned to the specified user and group, or groups
         * that the user belongs to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIAMPolicyAssignmentsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIAMPolicyAssignmentsForUserOutcome ListIAMPolicyAssignmentsForUser(const Model::ListIAMPolicyAssignmentsForUserRequest& request) const;

        /**
         * A Callable wrapper for ListIAMPolicyAssignmentsForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIAMPolicyAssignmentsForUserRequestT = Model::ListIAMPolicyAssignmentsForUserRequest>
        Model::ListIAMPolicyAssignmentsForUserOutcomeCallable ListIAMPolicyAssignmentsForUserCallable(const ListIAMPolicyAssignmentsForUserRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListIAMPolicyAssignmentsForUser, request);
        }

        /**
         * An Async wrapper for ListIAMPolicyAssignmentsForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIAMPolicyAssignmentsForUserRequestT = Model::ListIAMPolicyAssignmentsForUserRequest>
        void ListIAMPolicyAssignmentsForUserAsync(const ListIAMPolicyAssignmentsForUserRequestT& request, const ListIAMPolicyAssignmentsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListIAMPolicyAssignmentsForUser, request, handler, context);
        }

        /**
         * <p>Lists all services and authorized targets that the Amazon QuickSight IAM
         * Identity Center application can access.</p> <p>This operation is only supported
         * for Amazon QuickSight accounts that use IAM Identity Center.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIdentityPropagationConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityPropagationConfigsOutcome ListIdentityPropagationConfigs(const Model::ListIdentityPropagationConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityPropagationConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentityPropagationConfigsRequestT = Model::ListIdentityPropagationConfigsRequest>
        Model::ListIdentityPropagationConfigsOutcomeCallable ListIdentityPropagationConfigsCallable(const ListIdentityPropagationConfigsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListIdentityPropagationConfigs, request);
        }

        /**
         * An Async wrapper for ListIdentityPropagationConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentityPropagationConfigsRequestT = Model::ListIdentityPropagationConfigsRequest>
        void ListIdentityPropagationConfigsAsync(const ListIdentityPropagationConfigsRequestT& request, const ListIdentityPropagationConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListIdentityPropagationConfigs, request, handler, context);
        }

        /**
         * <p>Lists the history of SPICE ingestions for a dataset.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListIngestions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngestionsOutcome ListIngestions(const Model::ListIngestionsRequest& request) const;

        /**
         * A Callable wrapper for ListIngestions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIngestionsRequestT = Model::ListIngestionsRequest>
        Model::ListIngestionsOutcomeCallable ListIngestionsCallable(const ListIngestionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListIngestions, request);
        }

        /**
         * An Async wrapper for ListIngestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIngestionsRequestT = Model::ListIngestionsRequest>
        void ListIngestionsAsync(const ListIngestionsRequestT& request, const ListIngestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListIngestions, request, handler, context);
        }

        /**
         * <p>Lists the namespaces for the specified Amazon Web Services account. This
         * operation doesn't list deleted namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNamespacesRequestT = Model::ListNamespacesRequest>
        Model::ListNamespacesOutcomeCallable ListNamespacesCallable(const ListNamespacesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListNamespaces, request);
        }

        /**
         * An Async wrapper for ListNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNamespacesRequestT = Model::ListNamespacesRequest>
        void ListNamespacesAsync(const ListNamespacesRequestT& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListNamespaces, request, handler, context);
        }

        /**
         * <p>Lists the refresh schedules of a dataset. Each dataset can have up to 5
         * schedules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListRefreshSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRefreshSchedulesOutcome ListRefreshSchedules(const Model::ListRefreshSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListRefreshSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRefreshSchedulesRequestT = Model::ListRefreshSchedulesRequest>
        Model::ListRefreshSchedulesOutcomeCallable ListRefreshSchedulesCallable(const ListRefreshSchedulesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListRefreshSchedules, request);
        }

        /**
         * An Async wrapper for ListRefreshSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRefreshSchedulesRequestT = Model::ListRefreshSchedulesRequest>
        void ListRefreshSchedulesAsync(const ListRefreshSchedulesRequestT& request, const ListRefreshSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListRefreshSchedules, request, handler, context);
        }

        /**
         * <p>Lists all groups that are associated with a role.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListRoleMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoleMembershipsOutcome ListRoleMemberships(const Model::ListRoleMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListRoleMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRoleMembershipsRequestT = Model::ListRoleMembershipsRequest>
        Model::ListRoleMembershipsOutcomeCallable ListRoleMembershipsCallable(const ListRoleMembershipsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListRoleMemberships, request);
        }

        /**
         * An Async wrapper for ListRoleMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRoleMembershipsRequestT = Model::ListRoleMembershipsRequest>
        void ListRoleMembershipsAsync(const ListRoleMembershipsRequestT& request, const ListRoleMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListRoleMemberships, request, handler, context);
        }

        /**
         * <p>Lists the tags assigned to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists all the aliases of a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateAliasesOutcome ListTemplateAliases(const Model::ListTemplateAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplateAliasesRequestT = Model::ListTemplateAliasesRequest>
        Model::ListTemplateAliasesOutcomeCallable ListTemplateAliasesCallable(const ListTemplateAliasesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListTemplateAliases, request);
        }

        /**
         * An Async wrapper for ListTemplateAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplateAliasesRequestT = Model::ListTemplateAliasesRequest>
        void ListTemplateAliasesAsync(const ListTemplateAliasesRequestT& request, const ListTemplateAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListTemplateAliases, request, handler, context);
        }

        /**
         * <p>Lists all the versions of the templates in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateVersionsOutcome ListTemplateVersions(const Model::ListTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplateVersionsRequestT = Model::ListTemplateVersionsRequest>
        Model::ListTemplateVersionsOutcomeCallable ListTemplateVersionsCallable(const ListTemplateVersionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListTemplateVersions, request);
        }

        /**
         * An Async wrapper for ListTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplateVersionsRequestT = Model::ListTemplateVersionsRequest>
        void ListTemplateVersionsAsync(const ListTemplateVersionsRequestT& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListTemplateVersions, request, handler, context);
        }

        /**
         * <p>Lists all the templates in the current Amazon QuickSight
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const ListTemplatesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListTemplates, request);
        }

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        void ListTemplatesAsync(const ListTemplatesRequestT& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListTemplates, request, handler, context);
        }

        /**
         * <p>Lists all the aliases of a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemeAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemeAliasesOutcome ListThemeAliases(const Model::ListThemeAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListThemeAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListThemeAliasesRequestT = Model::ListThemeAliasesRequest>
        Model::ListThemeAliasesOutcomeCallable ListThemeAliasesCallable(const ListThemeAliasesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListThemeAliases, request);
        }

        /**
         * An Async wrapper for ListThemeAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThemeAliasesRequestT = Model::ListThemeAliasesRequest>
        void ListThemeAliasesAsync(const ListThemeAliasesRequestT& request, const ListThemeAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListThemeAliases, request, handler, context);
        }

        /**
         * <p>Lists all the versions of the themes in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemeVersionsOutcome ListThemeVersions(const Model::ListThemeVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListThemeVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListThemeVersionsRequestT = Model::ListThemeVersionsRequest>
        Model::ListThemeVersionsOutcomeCallable ListThemeVersionsCallable(const ListThemeVersionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListThemeVersions, request);
        }

        /**
         * An Async wrapper for ListThemeVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThemeVersionsRequestT = Model::ListThemeVersionsRequest>
        void ListThemeVersionsAsync(const ListThemeVersionsRequestT& request, const ListThemeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListThemeVersions, request, handler, context);
        }

        /**
         * <p>Lists all the themes in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListThemes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemesOutcome ListThemes(const Model::ListThemesRequest& request) const;

        /**
         * A Callable wrapper for ListThemes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListThemesRequestT = Model::ListThemesRequest>
        Model::ListThemesOutcomeCallable ListThemesCallable(const ListThemesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListThemes, request);
        }

        /**
         * An Async wrapper for ListThemes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThemesRequestT = Model::ListThemesRequest>
        void ListThemesAsync(const ListThemesRequestT& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListThemes, request, handler, context);
        }

        /**
         * <p>Lists all of the refresh schedules for a topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTopicRefreshSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicRefreshSchedulesOutcome ListTopicRefreshSchedules(const Model::ListTopicRefreshSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListTopicRefreshSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTopicRefreshSchedulesRequestT = Model::ListTopicRefreshSchedulesRequest>
        Model::ListTopicRefreshSchedulesOutcomeCallable ListTopicRefreshSchedulesCallable(const ListTopicRefreshSchedulesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListTopicRefreshSchedules, request);
        }

        /**
         * An Async wrapper for ListTopicRefreshSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTopicRefreshSchedulesRequestT = Model::ListTopicRefreshSchedulesRequest>
        void ListTopicRefreshSchedulesAsync(const ListTopicRefreshSchedulesRequestT& request, const ListTopicRefreshSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListTopicRefreshSchedules, request, handler, context);
        }

        /**
         * <p>Lists all of the topics within an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListTopics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicsOutcome ListTopics(const Model::ListTopicsRequest& request) const;

        /**
         * A Callable wrapper for ListTopics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTopicsRequestT = Model::ListTopicsRequest>
        Model::ListTopicsOutcomeCallable ListTopicsCallable(const ListTopicsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListTopics, request);
        }

        /**
         * An Async wrapper for ListTopics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTopicsRequestT = Model::ListTopicsRequest>
        void ListTopicsAsync(const ListTopicsRequestT& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListTopics, request, handler, context);
        }

        /**
         * <p>Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
         * of.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUserGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserGroupsOutcome ListUserGroups(const Model::ListUserGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListUserGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserGroupsRequestT = Model::ListUserGroupsRequest>
        Model::ListUserGroupsOutcomeCallable ListUserGroupsCallable(const ListUserGroupsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListUserGroups, request);
        }

        /**
         * An Async wrapper for ListUserGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserGroupsRequestT = Model::ListUserGroupsRequest>
        void ListUserGroupsAsync(const ListUserGroupsRequestT& request, const ListUserGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListUserGroups, request, handler, context);
        }

        /**
         * <p>Returns a list of all of the Amazon QuickSight users belonging to this
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListUsers, request, handler, context);
        }

        /**
         * <p>Lists all of the VPC connections in the current set Amazon Web Services
         * Region of an Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListVPCConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVPCConnectionsOutcome ListVPCConnections(const Model::ListVPCConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListVPCConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVPCConnectionsRequestT = Model::ListVPCConnectionsRequest>
        Model::ListVPCConnectionsOutcomeCallable ListVPCConnectionsCallable(const ListVPCConnectionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::ListVPCConnections, request);
        }

        /**
         * An Async wrapper for ListVPCConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVPCConnectionsRequestT = Model::ListVPCConnectionsRequest>
        void ListVPCConnectionsAsync(const ListVPCConnectionsRequestT& request, const ListVPCConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::ListVPCConnections, request, handler, context);
        }

        /**
         * <p>Creates or updates the dataset refresh properties for the
         * dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PutDataSetRefreshProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataSetRefreshPropertiesOutcome PutDataSetRefreshProperties(const Model::PutDataSetRefreshPropertiesRequest& request) const;

        /**
         * A Callable wrapper for PutDataSetRefreshProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDataSetRefreshPropertiesRequestT = Model::PutDataSetRefreshPropertiesRequest>
        Model::PutDataSetRefreshPropertiesOutcomeCallable PutDataSetRefreshPropertiesCallable(const PutDataSetRefreshPropertiesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::PutDataSetRefreshProperties, request);
        }

        /**
         * An Async wrapper for PutDataSetRefreshProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDataSetRefreshPropertiesRequestT = Model::PutDataSetRefreshPropertiesRequest>
        void PutDataSetRefreshPropertiesAsync(const PutDataSetRefreshPropertiesRequestT& request, const PutDataSetRefreshPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::PutDataSetRefreshProperties, request, handler, context);
        }

        /**
         * <p>Creates an Amazon QuickSight user whose identity is associated with the
         * Identity and Access Management (IAM) identity or role specified in the request.
         * When you register a new user from the Amazon QuickSight API, Amazon QuickSight
         * generates a registration URL. The user accesses this registration URL to create
         * their account. Amazon QuickSight doesn't send a registration email to users who
         * are registered from the Amazon QuickSight API. If you want new users to receive
         * a registration email, then add those users in the Amazon QuickSight console. For
         * more information on registering a new user in the Amazon QuickSight console, see
         * <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/managing-users.html#inviting-users">
         * Inviting users to access Amazon QuickSight</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisterUser">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterUserOutcome RegisterUser(const Model::RegisterUserRequest& request) const;

        /**
         * A Callable wrapper for RegisterUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterUserRequestT = Model::RegisterUserRequest>
        Model::RegisterUserOutcomeCallable RegisterUserCallable(const RegisterUserRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::RegisterUser, request);
        }

        /**
         * An Async wrapper for RegisterUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterUserRequestT = Model::RegisterUserRequest>
        void RegisterUserAsync(const RegisterUserRequestT& request, const RegisterUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::RegisterUser, request, handler, context);
        }

        /**
         * <p>Restores an analysis.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RestoreAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreAnalysisOutcome RestoreAnalysis(const Model::RestoreAnalysisRequest& request) const;

        /**
         * A Callable wrapper for RestoreAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreAnalysisRequestT = Model::RestoreAnalysisRequest>
        Model::RestoreAnalysisOutcomeCallable RestoreAnalysisCallable(const RestoreAnalysisRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::RestoreAnalysis, request);
        }

        /**
         * An Async wrapper for RestoreAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreAnalysisRequestT = Model::RestoreAnalysisRequest>
        void RestoreAnalysisAsync(const RestoreAnalysisRequestT& request, const RestoreAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::RestoreAnalysis, request, handler, context);
        }

        /**
         * <p>Searches for analyses that belong to the user specified in the filter.</p>
         *  <p>This operation is eventually consistent. The results are best effort
         * and may not reflect very recent updates and changes.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAnalysesOutcome SearchAnalyses(const Model::SearchAnalysesRequest& request) const;

        /**
         * A Callable wrapper for SearchAnalyses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchAnalysesRequestT = Model::SearchAnalysesRequest>
        Model::SearchAnalysesOutcomeCallable SearchAnalysesCallable(const SearchAnalysesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::SearchAnalyses, request);
        }

        /**
         * An Async wrapper for SearchAnalyses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchAnalysesRequestT = Model::SearchAnalysesRequest>
        void SearchAnalysesAsync(const SearchAnalysesRequestT& request, const SearchAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::SearchAnalyses, request, handler, context);
        }

        /**
         * <p>Searches for dashboards that belong to a user. </p>  <p>This operation
         * is eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDashboardsOutcome SearchDashboards(const Model::SearchDashboardsRequest& request) const;

        /**
         * A Callable wrapper for SearchDashboards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchDashboardsRequestT = Model::SearchDashboardsRequest>
        Model::SearchDashboardsOutcomeCallable SearchDashboardsCallable(const SearchDashboardsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::SearchDashboards, request);
        }

        /**
         * An Async wrapper for SearchDashboards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchDashboardsRequestT = Model::SearchDashboardsRequest>
        void SearchDashboardsAsync(const SearchDashboardsRequestT& request, const SearchDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::SearchDashboards, request, handler, context);
        }

        /**
         * <p>Use the <code>SearchDataSets</code> operation to search for datasets that
         * belong to an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchDataSets">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDataSetsOutcome SearchDataSets(const Model::SearchDataSetsRequest& request) const;

        /**
         * A Callable wrapper for SearchDataSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchDataSetsRequestT = Model::SearchDataSetsRequest>
        Model::SearchDataSetsOutcomeCallable SearchDataSetsCallable(const SearchDataSetsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::SearchDataSets, request);
        }

        /**
         * An Async wrapper for SearchDataSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchDataSetsRequestT = Model::SearchDataSetsRequest>
        void SearchDataSetsAsync(const SearchDataSetsRequestT& request, const SearchDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::SearchDataSets, request, handler, context);
        }

        /**
         * <p>Use the <code>SearchDataSources</code> operation to search for data sources
         * that belong to an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDataSourcesOutcome SearchDataSources(const Model::SearchDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for SearchDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchDataSourcesRequestT = Model::SearchDataSourcesRequest>
        Model::SearchDataSourcesOutcomeCallable SearchDataSourcesCallable(const SearchDataSourcesRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::SearchDataSources, request);
        }

        /**
         * An Async wrapper for SearchDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchDataSourcesRequestT = Model::SearchDataSourcesRequest>
        void SearchDataSourcesAsync(const SearchDataSourcesRequestT& request, const SearchDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::SearchDataSources, request, handler, context);
        }

        /**
         * <p>Searches the subfolders in a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchFolders">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFoldersOutcome SearchFolders(const Model::SearchFoldersRequest& request) const;

        /**
         * A Callable wrapper for SearchFolders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchFoldersRequestT = Model::SearchFoldersRequest>
        Model::SearchFoldersOutcomeCallable SearchFoldersCallable(const SearchFoldersRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::SearchFolders, request);
        }

        /**
         * An Async wrapper for SearchFolders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchFoldersRequestT = Model::SearchFoldersRequest>
        void SearchFoldersAsync(const SearchFoldersRequestT& request, const SearchFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::SearchFolders, request, handler, context);
        }

        /**
         * <p>Use the <code>SearchGroups</code> operation to search groups in a specified
         * Amazon QuickSight namespace using the supplied filters.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchGroupsOutcome SearchGroups(const Model::SearchGroupsRequest& request) const;

        /**
         * A Callable wrapper for SearchGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchGroupsRequestT = Model::SearchGroupsRequest>
        Model::SearchGroupsOutcomeCallable SearchGroupsCallable(const SearchGroupsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::SearchGroups, request);
        }

        /**
         * An Async wrapper for SearchGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchGroupsRequestT = Model::SearchGroupsRequest>
        void SearchGroupsAsync(const SearchGroupsRequestT& request, const SearchGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::SearchGroups, request, handler, context);
        }

        /**
         * <p>Starts an Asset Bundle export job.</p> <p>An Asset Bundle export job exports
         * specified Amazon QuickSight assets. You can also choose to export any asset
         * dependencies in the same job. Export jobs run asynchronously and can be polled
         * with a <code>DescribeAssetBundleExportJob</code> API call. When a job is
         * successfully completed, a download URL that contains the exported assets is
         * returned. The URL is valid for 5 minutes and can be refreshed with a
         * <code>DescribeAssetBundleExportJob</code> API call. Each Amazon QuickSight
         * account can run up to 5 export jobs concurrently.</p> <p>The API caller must
         * have the necessary permissions in their IAM role to access each resource before
         * the resources can be exported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StartAssetBundleExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssetBundleExportJobOutcome StartAssetBundleExportJob(const Model::StartAssetBundleExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartAssetBundleExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAssetBundleExportJobRequestT = Model::StartAssetBundleExportJobRequest>
        Model::StartAssetBundleExportJobOutcomeCallable StartAssetBundleExportJobCallable(const StartAssetBundleExportJobRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::StartAssetBundleExportJob, request);
        }

        /**
         * An Async wrapper for StartAssetBundleExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAssetBundleExportJobRequestT = Model::StartAssetBundleExportJobRequest>
        void StartAssetBundleExportJobAsync(const StartAssetBundleExportJobRequestT& request, const StartAssetBundleExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::StartAssetBundleExportJob, request, handler, context);
        }

        /**
         * <p>Starts an Asset Bundle import job.</p> <p>An Asset Bundle import job imports
         * specified Amazon QuickSight assets into an Amazon QuickSight account. You can
         * also choose to import a naming prefix and specified configuration overrides. The
         * assets that are contained in the bundle file that you provide are used to create
         * or update a new or existing asset in your Amazon QuickSight account. Each Amazon
         * QuickSight account can run up to 5 import jobs concurrently.</p> <p>The API
         * caller must have the necessary <code>"create"</code>, <code>"describe"</code>,
         * and <code>"update"</code> permissions in their IAM role to access each resource
         * type that is contained in the bundle file before the resources can be
         * imported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StartAssetBundleImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssetBundleImportJobOutcome StartAssetBundleImportJob(const Model::StartAssetBundleImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartAssetBundleImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAssetBundleImportJobRequestT = Model::StartAssetBundleImportJobRequest>
        Model::StartAssetBundleImportJobOutcomeCallable StartAssetBundleImportJobCallable(const StartAssetBundleImportJobRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::StartAssetBundleImportJob, request);
        }

        /**
         * An Async wrapper for StartAssetBundleImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAssetBundleImportJobRequestT = Model::StartAssetBundleImportJobRequest>
        void StartAssetBundleImportJobAsync(const StartAssetBundleImportJobRequestT& request, const StartAssetBundleImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::StartAssetBundleImportJob, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous job that generates a dashboard snapshot. You can
         * request one of the following format configurations per API call.</p> <ul> <li>
         * <p>1 paginated PDF</p> </li> <li> <p>1 Excel workbook</p> </li> <li> <p>5
         * CSVs</p> </li> </ul> <p>Poll job descriptions with a
         * <code>DescribeDashboardSnapshotJob</code> API call. Once the job succeeds, use
         * the <code>DescribeDashboardSnapshotJobResult</code> API to obtain the download
         * URIs that the job generates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StartDashboardSnapshotJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDashboardSnapshotJobOutcome StartDashboardSnapshotJob(const Model::StartDashboardSnapshotJobRequest& request) const;

        /**
         * A Callable wrapper for StartDashboardSnapshotJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDashboardSnapshotJobRequestT = Model::StartDashboardSnapshotJobRequest>
        Model::StartDashboardSnapshotJobOutcomeCallable StartDashboardSnapshotJobCallable(const StartDashboardSnapshotJobRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::StartDashboardSnapshotJob, request);
        }

        /**
         * An Async wrapper for StartDashboardSnapshotJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDashboardSnapshotJobRequestT = Model::StartDashboardSnapshotJobRequest>
        void StartDashboardSnapshotJobAsync(const StartDashboardSnapshotJobRequestT& request, const StartDashboardSnapshotJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::StartDashboardSnapshotJob, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified Amazon QuickSight
         * resource. </p> <p>Tags can help you organize and categorize your resources. You
         * can also use them to scope user permissions, by granting a user permission to
         * access or change only resources with certain tag values. You can use the
         * <code>TagResource</code> operation with a resource that already has tags. If you
         * specify a new tag key for the resource, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource. Amazon QuickSight supports tagging on data set, data source,
         * dashboard, template, topic, and user. </p> <p>Tagging for Amazon QuickSight
         * works in a similar way to tagging for other Amazon Web Services services, except
         * for the following:</p> <ul> <li> <p>Tags are used to track costs for users in
         * Amazon QuickSight. You can't tag other resources that Amazon QuickSight costs
         * are based on, such as storage capacoty (SPICE), session usage, alert
         * consumption, or reporting units.</p> </li> <li> <p>Amazon QuickSight doesn't
         * currently support the tag editor for Resource Groups.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag or tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates Amazon QuickSight customizations for the current Amazon Web Services
         * Region. Currently, the only customization that you can use is a theme.</p>
         * <p>You can use customizations for your Amazon Web Services account or, if you
         * specify a namespace, for a Amazon QuickSight namespace instead. Customizations
         * that apply to a namespace override customizations that apply to an Amazon Web
         * Services account. To find out which customizations apply, use the
         * <code>DescribeAccountCustomization</code> API operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAccountCustomization">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountCustomizationOutcome UpdateAccountCustomization(const Model::UpdateAccountCustomizationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountCustomization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountCustomizationRequestT = Model::UpdateAccountCustomizationRequest>
        Model::UpdateAccountCustomizationOutcomeCallable UpdateAccountCustomizationCallable(const UpdateAccountCustomizationRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateAccountCustomization, request);
        }

        /**
         * An Async wrapper for UpdateAccountCustomization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountCustomizationRequestT = Model::UpdateAccountCustomizationRequest>
        void UpdateAccountCustomizationAsync(const UpdateAccountCustomizationRequestT& request, const UpdateAccountCustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateAccountCustomization, request, handler, context);
        }

        /**
         * <p>Updates the Amazon QuickSight settings in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountSettingsRequestT = Model::UpdateAccountSettingsRequest>
        Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const UpdateAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateAccountSettings, request);
        }

        /**
         * An Async wrapper for UpdateAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountSettingsRequestT = Model::UpdateAccountSettingsRequest>
        void UpdateAccountSettingsAsync(const UpdateAccountSettingsRequestT& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateAccountSettings, request, handler, context);
        }

        /**
         * <p>Updates an analysis in Amazon QuickSight</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnalysisOutcome UpdateAnalysis(const Model::UpdateAnalysisRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAnalysisRequestT = Model::UpdateAnalysisRequest>
        Model::UpdateAnalysisOutcomeCallable UpdateAnalysisCallable(const UpdateAnalysisRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateAnalysis, request);
        }

        /**
         * An Async wrapper for UpdateAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAnalysisRequestT = Model::UpdateAnalysisRequest>
        void UpdateAnalysisAsync(const UpdateAnalysisRequestT& request, const UpdateAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateAnalysis, request, handler, context);
        }

        /**
         * <p>Updates the read and write permissions for an analysis.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateAnalysisPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnalysisPermissionsOutcome UpdateAnalysisPermissions(const Model::UpdateAnalysisPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnalysisPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAnalysisPermissionsRequestT = Model::UpdateAnalysisPermissionsRequest>
        Model::UpdateAnalysisPermissionsOutcomeCallable UpdateAnalysisPermissionsCallable(const UpdateAnalysisPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateAnalysisPermissions, request);
        }

        /**
         * An Async wrapper for UpdateAnalysisPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAnalysisPermissionsRequestT = Model::UpdateAnalysisPermissionsRequest>
        void UpdateAnalysisPermissionsAsync(const UpdateAnalysisPermissionsRequestT& request, const UpdateAnalysisPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateAnalysisPermissions, request, handler, context);
        }

        /**
         * <p>Updates a dashboard in an Amazon Web Services account.</p>  <p>Updating
         * a Dashboard creates a new dashboard version but does not immediately publish the
         * new version. You can update the published version of a dashboard by using the
         * <code> <a
         * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateDashboardPublishedVersion.html">UpdateDashboardPublishedVersion</a>
         * </code> API operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardOutcome UpdateDashboard(const Model::UpdateDashboardRequest& request) const;

        /**
         * A Callable wrapper for UpdateDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDashboardRequestT = Model::UpdateDashboardRequest>
        Model::UpdateDashboardOutcomeCallable UpdateDashboardCallable(const UpdateDashboardRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateDashboard, request);
        }

        /**
         * An Async wrapper for UpdateDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDashboardRequestT = Model::UpdateDashboardRequest>
        void UpdateDashboardAsync(const UpdateDashboardRequestT& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateDashboard, request, handler, context);
        }

        /**
         * <p>Updates the linked analyses on a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardLinksOutcome UpdateDashboardLinks(const Model::UpdateDashboardLinksRequest& request) const;

        /**
         * A Callable wrapper for UpdateDashboardLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDashboardLinksRequestT = Model::UpdateDashboardLinksRequest>
        Model::UpdateDashboardLinksOutcomeCallable UpdateDashboardLinksCallable(const UpdateDashboardLinksRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateDashboardLinks, request);
        }

        /**
         * An Async wrapper for UpdateDashboardLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDashboardLinksRequestT = Model::UpdateDashboardLinksRequest>
        void UpdateDashboardLinksAsync(const UpdateDashboardLinksRequestT& request, const UpdateDashboardLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateDashboardLinks, request, handler, context);
        }

        /**
         * <p>Updates read and write permissions on a dashboard.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardPermissionsOutcome UpdateDashboardPermissions(const Model::UpdateDashboardPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateDashboardPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDashboardPermissionsRequestT = Model::UpdateDashboardPermissionsRequest>
        Model::UpdateDashboardPermissionsOutcomeCallable UpdateDashboardPermissionsCallable(const UpdateDashboardPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateDashboardPermissions, request);
        }

        /**
         * An Async wrapper for UpdateDashboardPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDashboardPermissionsRequestT = Model::UpdateDashboardPermissionsRequest>
        void UpdateDashboardPermissionsAsync(const UpdateDashboardPermissionsRequestT& request, const UpdateDashboardPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateDashboardPermissions, request, handler, context);
        }

        /**
         * <p>Updates the published version of a dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDashboardPublishedVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDashboardPublishedVersionOutcome UpdateDashboardPublishedVersion(const Model::UpdateDashboardPublishedVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDashboardPublishedVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDashboardPublishedVersionRequestT = Model::UpdateDashboardPublishedVersionRequest>
        Model::UpdateDashboardPublishedVersionOutcomeCallable UpdateDashboardPublishedVersionCallable(const UpdateDashboardPublishedVersionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateDashboardPublishedVersion, request);
        }

        /**
         * An Async wrapper for UpdateDashboardPublishedVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDashboardPublishedVersionRequestT = Model::UpdateDashboardPublishedVersionRequest>
        void UpdateDashboardPublishedVersionAsync(const UpdateDashboardPublishedVersionRequestT& request, const UpdateDashboardPublishedVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateDashboardPublishedVersion, request, handler, context);
        }

        /**
         * <p>Updates a dataset. This operation doesn't support datasets that include
         * uploaded files as a source. Partial updates are not supported by this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetOutcome UpdateDataSet(const Model::UpdateDataSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSetRequestT = Model::UpdateDataSetRequest>
        Model::UpdateDataSetOutcomeCallable UpdateDataSetCallable(const UpdateDataSetRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateDataSet, request);
        }

        /**
         * An Async wrapper for UpdateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSetRequestT = Model::UpdateDataSetRequest>
        void UpdateDataSetAsync(const UpdateDataSetRequestT& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateDataSet, request, handler, context);
        }

        /**
         * <p>Updates the permissions on a dataset.</p> <p>The permissions resource is
         * <code>arn:aws:quicksight:region:aws-account-id:dataset/data-set-id</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSetPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetPermissionsOutcome UpdateDataSetPermissions(const Model::UpdateDataSetPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSetPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSetPermissionsRequestT = Model::UpdateDataSetPermissionsRequest>
        Model::UpdateDataSetPermissionsOutcomeCallable UpdateDataSetPermissionsCallable(const UpdateDataSetPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateDataSetPermissions, request);
        }

        /**
         * An Async wrapper for UpdateDataSetPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSetPermissionsRequestT = Model::UpdateDataSetPermissionsRequest>
        void UpdateDataSetPermissionsAsync(const UpdateDataSetPermissionsRequestT& request, const UpdateDataSetPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateDataSetPermissions, request, handler, context);
        }

        /**
         * <p>Updates a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateDataSource, request, handler, context);
        }

        /**
         * <p>Updates the permissions to a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateDataSourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourcePermissionsOutcome UpdateDataSourcePermissions(const Model::UpdateDataSourcePermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourcePermissionsRequestT = Model::UpdateDataSourcePermissionsRequest>
        Model::UpdateDataSourcePermissionsOutcomeCallable UpdateDataSourcePermissionsCallable(const UpdateDataSourcePermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateDataSourcePermissions, request);
        }

        /**
         * An Async wrapper for UpdateDataSourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourcePermissionsRequestT = Model::UpdateDataSourcePermissionsRequest>
        void UpdateDataSourcePermissionsAsync(const UpdateDataSourcePermissionsRequestT& request, const UpdateDataSourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateDataSourcePermissions, request, handler, context);
        }

        /**
         * <p>Updates the name of a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderOutcome UpdateFolder(const Model::UpdateFolderRequest& request) const;

        /**
         * A Callable wrapper for UpdateFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFolderRequestT = Model::UpdateFolderRequest>
        Model::UpdateFolderOutcomeCallable UpdateFolderCallable(const UpdateFolderRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateFolder, request);
        }

        /**
         * An Async wrapper for UpdateFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFolderRequestT = Model::UpdateFolderRequest>
        void UpdateFolderAsync(const UpdateFolderRequestT& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateFolder, request, handler, context);
        }

        /**
         * <p>Updates permissions of a folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateFolderPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderPermissionsOutcome UpdateFolderPermissions(const Model::UpdateFolderPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateFolderPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFolderPermissionsRequestT = Model::UpdateFolderPermissionsRequest>
        Model::UpdateFolderPermissionsOutcomeCallable UpdateFolderPermissionsCallable(const UpdateFolderPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateFolderPermissions, request);
        }

        /**
         * An Async wrapper for UpdateFolderPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFolderPermissionsRequestT = Model::UpdateFolderPermissionsRequest>
        void UpdateFolderPermissionsAsync(const UpdateFolderPermissionsRequestT& request, const UpdateFolderPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateFolderPermissions, request, handler, context);
        }

        /**
         * <p>Changes a group description. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const UpdateGroupRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateGroup, request);
        }

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        void UpdateGroupAsync(const UpdateGroupRequestT& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateGroup, request, handler, context);
        }

        /**
         * <p>Updates an existing IAM policy assignment. This operation updates only the
         * optional parameter or parameters that are specified in the request. This
         * overwrites all of the users included in <code>Identities</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIAMPolicyAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIAMPolicyAssignmentOutcome UpdateIAMPolicyAssignment(const Model::UpdateIAMPolicyAssignmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateIAMPolicyAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIAMPolicyAssignmentRequestT = Model::UpdateIAMPolicyAssignmentRequest>
        Model::UpdateIAMPolicyAssignmentOutcomeCallable UpdateIAMPolicyAssignmentCallable(const UpdateIAMPolicyAssignmentRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateIAMPolicyAssignment, request);
        }

        /**
         * An Async wrapper for UpdateIAMPolicyAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIAMPolicyAssignmentRequestT = Model::UpdateIAMPolicyAssignmentRequest>
        void UpdateIAMPolicyAssignmentAsync(const UpdateIAMPolicyAssignmentRequestT& request, const UpdateIAMPolicyAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateIAMPolicyAssignment, request, handler, context);
        }

        /**
         * <p>Adds or updates services and authorized targets to configure what the Amazon
         * QuickSight IAM Identity Center application can access.</p> <p>This operation is
         * only supported for Amazon QuickSight accounts using IAM Identity
         * Center</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIdentityPropagationConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityPropagationConfigOutcome UpdateIdentityPropagationConfig(const Model::UpdateIdentityPropagationConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateIdentityPropagationConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIdentityPropagationConfigRequestT = Model::UpdateIdentityPropagationConfigRequest>
        Model::UpdateIdentityPropagationConfigOutcomeCallable UpdateIdentityPropagationConfigCallable(const UpdateIdentityPropagationConfigRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateIdentityPropagationConfig, request);
        }

        /**
         * An Async wrapper for UpdateIdentityPropagationConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIdentityPropagationConfigRequestT = Model::UpdateIdentityPropagationConfigRequest>
        void UpdateIdentityPropagationConfigAsync(const UpdateIdentityPropagationConfigRequestT& request, const UpdateIdentityPropagationConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateIdentityPropagationConfig, request, handler, context);
        }

        /**
         * <p>Updates the content and status of IP rules. To use this operation, you must
         * provide the entire map of rules. You can use the
         * <code>DescribeIpRestriction</code> operation to get the current rule
         * map.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateIpRestriction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIpRestrictionOutcome UpdateIpRestriction(const Model::UpdateIpRestrictionRequest& request) const;

        /**
         * A Callable wrapper for UpdateIpRestriction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIpRestrictionRequestT = Model::UpdateIpRestrictionRequest>
        Model::UpdateIpRestrictionOutcomeCallable UpdateIpRestrictionCallable(const UpdateIpRestrictionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateIpRestriction, request);
        }

        /**
         * An Async wrapper for UpdateIpRestriction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIpRestrictionRequestT = Model::UpdateIpRestrictionRequest>
        void UpdateIpRestrictionAsync(const UpdateIpRestrictionRequestT& request, const UpdateIpRestrictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateIpRestriction, request, handler, context);
        }

        /**
         * <p>Use the <code>UpdatePublicSharingSettings</code> operation to turn on or turn
         * off the public sharing settings of an Amazon QuickSight dashboard.</p> <p>To use
         * this operation, turn on session capacity pricing for your Amazon QuickSight
         * account.</p> <p>Before you can turn on public sharing on your account, make sure
         * to give public sharing permissions to an administrative user in the Identity and
         * Access Management (IAM) console. For more information on using IAM with Amazon
         * QuickSight, see <a
         * href="https://docs.aws.amazon.com/quicksight/latest/user/security_iam_service-with-iam.html">Using
         * Amazon QuickSight with IAM</a> in the <i>Amazon QuickSight User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdatePublicSharingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicSharingSettingsOutcome UpdatePublicSharingSettings(const Model::UpdatePublicSharingSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdatePublicSharingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePublicSharingSettingsRequestT = Model::UpdatePublicSharingSettingsRequest>
        Model::UpdatePublicSharingSettingsOutcomeCallable UpdatePublicSharingSettingsCallable(const UpdatePublicSharingSettingsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdatePublicSharingSettings, request);
        }

        /**
         * An Async wrapper for UpdatePublicSharingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePublicSharingSettingsRequestT = Model::UpdatePublicSharingSettingsRequest>
        void UpdatePublicSharingSettingsAsync(const UpdatePublicSharingSettingsRequestT& request, const UpdatePublicSharingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdatePublicSharingSettings, request, handler, context);
        }

        /**
         * <p>Updates a refresh schedule for a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateRefreshSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRefreshScheduleOutcome UpdateRefreshSchedule(const Model::UpdateRefreshScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRefreshSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRefreshScheduleRequestT = Model::UpdateRefreshScheduleRequest>
        Model::UpdateRefreshScheduleOutcomeCallable UpdateRefreshScheduleCallable(const UpdateRefreshScheduleRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateRefreshSchedule, request);
        }

        /**
         * An Async wrapper for UpdateRefreshSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRefreshScheduleRequestT = Model::UpdateRefreshScheduleRequest>
        void UpdateRefreshScheduleAsync(const UpdateRefreshScheduleRequestT& request, const UpdateRefreshScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateRefreshSchedule, request, handler, context);
        }

        /**
         * <p>Updates the custom permissions that are associated with a role.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateRoleCustomPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoleCustomPermissionOutcome UpdateRoleCustomPermission(const Model::UpdateRoleCustomPermissionRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoleCustomPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoleCustomPermissionRequestT = Model::UpdateRoleCustomPermissionRequest>
        Model::UpdateRoleCustomPermissionOutcomeCallable UpdateRoleCustomPermissionCallable(const UpdateRoleCustomPermissionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateRoleCustomPermission, request);
        }

        /**
         * An Async wrapper for UpdateRoleCustomPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoleCustomPermissionRequestT = Model::UpdateRoleCustomPermissionRequest>
        void UpdateRoleCustomPermissionAsync(const UpdateRoleCustomPermissionRequestT& request, const UpdateRoleCustomPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateRoleCustomPermission, request, handler, context);
        }

        /**
         * <p>Updates a template from an existing Amazon QuickSight analysis or another
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const UpdateTemplateRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateTemplate, request);
        }

        /**
         * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        void UpdateTemplateAsync(const UpdateTemplateRequestT& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateTemplate, request, handler, context);
        }

        /**
         * <p>Updates the template alias of a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateAliasOutcome UpdateTemplateAlias(const Model::UpdateTemplateAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplateAliasRequestT = Model::UpdateTemplateAliasRequest>
        Model::UpdateTemplateAliasOutcomeCallable UpdateTemplateAliasCallable(const UpdateTemplateAliasRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateTemplateAlias, request);
        }

        /**
         * An Async wrapper for UpdateTemplateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplateAliasRequestT = Model::UpdateTemplateAliasRequest>
        void UpdateTemplateAliasAsync(const UpdateTemplateAliasRequestT& request, const UpdateTemplateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateTemplateAlias, request, handler, context);
        }

        /**
         * <p>Updates the resource permissions for a template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTemplatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplatePermissionsOutcome UpdateTemplatePermissions(const Model::UpdateTemplatePermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplatePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplatePermissionsRequestT = Model::UpdateTemplatePermissionsRequest>
        Model::UpdateTemplatePermissionsOutcomeCallable UpdateTemplatePermissionsCallable(const UpdateTemplatePermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateTemplatePermissions, request);
        }

        /**
         * An Async wrapper for UpdateTemplatePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplatePermissionsRequestT = Model::UpdateTemplatePermissionsRequest>
        void UpdateTemplatePermissionsAsync(const UpdateTemplatePermissionsRequestT& request, const UpdateTemplatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateTemplatePermissions, request, handler, context);
        }

        /**
         * <p>Updates a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeOutcome UpdateTheme(const Model::UpdateThemeRequest& request) const;

        /**
         * A Callable wrapper for UpdateTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateThemeRequestT = Model::UpdateThemeRequest>
        Model::UpdateThemeOutcomeCallable UpdateThemeCallable(const UpdateThemeRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateTheme, request);
        }

        /**
         * An Async wrapper for UpdateTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThemeRequestT = Model::UpdateThemeRequest>
        void UpdateThemeAsync(const UpdateThemeRequestT& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateTheme, request, handler, context);
        }

        /**
         * <p>Updates an alias of a theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateThemeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeAliasOutcome UpdateThemeAlias(const Model::UpdateThemeAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateThemeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateThemeAliasRequestT = Model::UpdateThemeAliasRequest>
        Model::UpdateThemeAliasOutcomeCallable UpdateThemeAliasCallable(const UpdateThemeAliasRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateThemeAlias, request);
        }

        /**
         * An Async wrapper for UpdateThemeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThemeAliasRequestT = Model::UpdateThemeAliasRequest>
        void UpdateThemeAliasAsync(const UpdateThemeAliasRequestT& request, const UpdateThemeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateThemeAlias, request, handler, context);
        }

        /**
         * <p>Updates the resource permissions for a theme. Permissions apply to the action
         * to grant or revoke permissions on, for example
         * <code>"quicksight:DescribeTheme"</code>.</p> <p>Theme permissions apply in
         * groupings. Valid groupings include the following for the three levels of
         * permissions, which are user, owner, or no permissions: </p> <ul> <li>
         * <p>User</p> <ul> <li> <p> <code>"quicksight:DescribeTheme"</code> </p> </li>
         * <li> <p> <code>"quicksight:DescribeThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeAliases"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeVersions"</code> </p> </li> </ul> </li> <li>
         * <p>Owner</p> <ul> <li> <p> <code>"quicksight:DescribeTheme"</code> </p> </li>
         * <li> <p> <code>"quicksight:DescribeThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeAliases"</code> </p> </li> <li> <p>
         * <code>"quicksight:ListThemeVersions"</code> </p> </li> <li> <p>
         * <code>"quicksight:DeleteTheme"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateTheme"</code> </p> </li> <li> <p>
         * <code>"quicksight:CreateThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:DeleteThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateThemeAlias"</code> </p> </li> <li> <p>
         * <code>"quicksight:UpdateThemePermissions"</code> </p> </li> <li> <p>
         * <code>"quicksight:DescribeThemePermissions"</code> </p> </li> </ul> </li> <li>
         * <p>To specify no permissions, omit the permissions list.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateThemePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemePermissionsOutcome UpdateThemePermissions(const Model::UpdateThemePermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateThemePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateThemePermissionsRequestT = Model::UpdateThemePermissionsRequest>
        Model::UpdateThemePermissionsOutcomeCallable UpdateThemePermissionsCallable(const UpdateThemePermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateThemePermissions, request);
        }

        /**
         * An Async wrapper for UpdateThemePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThemePermissionsRequestT = Model::UpdateThemePermissionsRequest>
        void UpdateThemePermissionsAsync(const UpdateThemePermissionsRequestT& request, const UpdateThemePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateThemePermissions, request, handler, context);
        }

        /**
         * <p>Updates a topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTopicOutcome UpdateTopic(const Model::UpdateTopicRequest& request) const;

        /**
         * A Callable wrapper for UpdateTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTopicRequestT = Model::UpdateTopicRequest>
        Model::UpdateTopicOutcomeCallable UpdateTopicCallable(const UpdateTopicRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateTopic, request);
        }

        /**
         * An Async wrapper for UpdateTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTopicRequestT = Model::UpdateTopicRequest>
        void UpdateTopicAsync(const UpdateTopicRequestT& request, const UpdateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateTopic, request, handler, context);
        }

        /**
         * <p>Updates the permissions of a topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTopicPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTopicPermissionsOutcome UpdateTopicPermissions(const Model::UpdateTopicPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateTopicPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTopicPermissionsRequestT = Model::UpdateTopicPermissionsRequest>
        Model::UpdateTopicPermissionsOutcomeCallable UpdateTopicPermissionsCallable(const UpdateTopicPermissionsRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateTopicPermissions, request);
        }

        /**
         * An Async wrapper for UpdateTopicPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTopicPermissionsRequestT = Model::UpdateTopicPermissionsRequest>
        void UpdateTopicPermissionsAsync(const UpdateTopicPermissionsRequestT& request, const UpdateTopicPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateTopicPermissions, request, handler, context);
        }

        /**
         * <p>Updates a topic refresh schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateTopicRefreshSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTopicRefreshScheduleOutcome UpdateTopicRefreshSchedule(const Model::UpdateTopicRefreshScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateTopicRefreshSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTopicRefreshScheduleRequestT = Model::UpdateTopicRefreshScheduleRequest>
        Model::UpdateTopicRefreshScheduleOutcomeCallable UpdateTopicRefreshScheduleCallable(const UpdateTopicRefreshScheduleRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateTopicRefreshSchedule, request);
        }

        /**
         * An Async wrapper for UpdateTopicRefreshSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTopicRefreshScheduleRequestT = Model::UpdateTopicRefreshScheduleRequest>
        void UpdateTopicRefreshScheduleAsync(const UpdateTopicRefreshScheduleRequestT& request, const UpdateTopicRefreshScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateTopicRefreshSchedule, request, handler, context);
        }

        /**
         * <p>Updates an Amazon QuickSight user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateUser, request, handler, context);
        }

        /**
         * <p>Updates a VPC connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UpdateVPCConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVPCConnectionOutcome UpdateVPCConnection(const Model::UpdateVPCConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateVPCConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVPCConnectionRequestT = Model::UpdateVPCConnectionRequest>
        Model::UpdateVPCConnectionOutcomeCallable UpdateVPCConnectionCallable(const UpdateVPCConnectionRequestT& request) const
        {
            return SubmitCallable(&QuickSightClient::UpdateVPCConnection, request);
        }

        /**
         * An Async wrapper for UpdateVPCConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVPCConnectionRequestT = Model::UpdateVPCConnectionRequest>
        void UpdateVPCConnectionAsync(const UpdateVPCConnectionRequestT& request, const UpdateVPCConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QuickSightClient::UpdateVPCConnection, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<QuickSightEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<QuickSightClient>;
      void init(const QuickSightClientConfiguration& clientConfiguration);

      QuickSightClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<QuickSightEndpointProviderBase> m_endpointProvider;
  };

} // namespace QuickSight
} // namespace Aws
