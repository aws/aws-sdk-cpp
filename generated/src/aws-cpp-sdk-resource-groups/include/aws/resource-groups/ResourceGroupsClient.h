/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-groups/ResourceGroupsServiceClientModel.h>
#include <aws/resource-groups/model/GetAccountSettingsRequest.h>

namespace Aws
{
namespace ResourceGroups
{
  /**
   * <p>Resource Groups lets you organize Amazon Web Services resources such as
   * Amazon Elastic Compute Cloud instances, Amazon Relational Database Service
   * databases, and Amazon Simple Storage Service buckets into groups using criteria
   * that you define as tags. A resource group is a collection of resources that
   * match the resource types specified in a query, and share one or more tags or
   * portions of tags. You can create a group of resources based on their roles in
   * your cloud infrastructure, lifecycle stages, regions, application layers, or
   * virtually any criteria. Resource Groups enable you to automate management tasks,
   * such as those in Amazon Web Services Systems Manager Automation documents, on
   * tag-related resources in Amazon Web Services Systems Manager. Groups of tagged
   * resources also let you quickly view a custom console in Amazon Web Services
   * Systems Manager that shows Config compliance and other monitoring data about
   * member resources.</p> <p>To create a resource group, build a resource query, and
   * specify tags that identify the criteria that members of the group have in
   * common. Tags are key-value pairs.</p> <p>For more information about Resource
   * Groups, see the <a
   * href="https://docs.aws.amazon.com/ARG/latest/userguide/welcome.html">Resource
   * Groups User Guide</a>.</p> <p>Resource Groups uses a REST-compliant API that you
   * can use to perform the following types of operations.</p> <ul> <li> <p>Create,
   * Read, Update, and Delete (CRUD) operations on resource groups and resource query
   * entities</p> </li> <li> <p>Applying, editing, and removing tags from resource
   * groups</p> </li> <li> <p>Resolving resource group member ARNs so they can be
   * returned as search results</p> </li> <li> <p>Getting data about resources that
   * are members of a group</p> </li> <li> <p>Searching Amazon Web Services resources
   * based on a resource query</p> </li> </ul>
   */
  class AWS_RESOURCEGROUPS_API ResourceGroupsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ResourceGroupsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ResourceGroupsClientConfiguration ClientConfigurationType;
      typedef ResourceGroupsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration = Aws::ResourceGroups::ResourceGroupsClientConfiguration(),
                             std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration = Aws::ResourceGroups::ResourceGroupsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration = Aws::ResourceGroups::ResourceGroupsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ResourceGroupsClient();

        /**
         * <p>Creates a resource group with the specified name and description. You can
         * optionally include either a resource query or a service configuration. For more
         * information about constructing a resource query, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/userguide/getting_started-query.html">Build
         * queries and groups in Resource Groups</a> in the <i>Resource Groups User
         * Guide</i>. For more information about service-linked groups and service
         * configurations, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
         * configurations for Resource Groups</a>.</p> <p> <b>Minimum permissions</b> </p>
         * <p>To run this command, you must have the following permissions:</p> <ul> <li>
         * <p> <code>resource-groups:CreateGroup</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const CreateGroupRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::CreateGroup, request);
        }

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        void CreateGroupAsync(const CreateGroupRequestT& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::CreateGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified resource group. Deleting a resource group does not
         * delete any resources that are members of the group; it only deletes the group
         * structure.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you
         * must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:DeleteGroup</code> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::DeleteGroup, request, handler, context);
        }

        /**
         * <p>Retrieves the current status of optional features in Resource
         * Groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const GetAccountSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&ResourceGroupsClient::GetAccountSettings, request);
        }

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        void GetAccountSettingsAsync(const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetAccountSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&ResourceGroupsClient::GetAccountSettings, request, handler, context);
        }

        /**
         * <p>Returns information about a specified resource group.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:GetGroup</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        Model::GetGroupOutcomeCallable GetGroupCallable(const GetGroupRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::GetGroup, request);
        }

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        void GetGroupAsync(const GetGroupRequestT& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::GetGroup, request, handler, context);
        }

        /**
         * <p>Retrieves the service configuration associated with the specified resource
         * group. For details about the service configuration syntax, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
         * configurations for Resource Groups</a>.</p> <p> <b>Minimum permissions</b> </p>
         * <p>To run this command, you must have the following permissions:</p> <ul> <li>
         * <p> <code>resource-groups:GetGroupConfiguration</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupConfigurationOutcome GetGroupConfiguration(const Model::GetGroupConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetGroupConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupConfigurationRequestT = Model::GetGroupConfigurationRequest>
        Model::GetGroupConfigurationOutcomeCallable GetGroupConfigurationCallable(const GetGroupConfigurationRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::GetGroupConfiguration, request);
        }

        /**
         * An Async wrapper for GetGroupConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupConfigurationRequestT = Model::GetGroupConfigurationRequest>
        void GetGroupConfigurationAsync(const GetGroupConfigurationRequestT& request, const GetGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::GetGroupConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the resource query associated with the specified resource group.
         * For more information about resource queries, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
         * a tag-based group in Resource Groups</a>.</p> <p> <b>Minimum permissions</b>
         * </p> <p>To run this command, you must have the following permissions:</p> <ul>
         * <li> <p> <code>resource-groups:GetGroupQuery</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupQueryOutcome GetGroupQuery(const Model::GetGroupQueryRequest& request) const;

        /**
         * A Callable wrapper for GetGroupQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupQueryRequestT = Model::GetGroupQueryRequest>
        Model::GetGroupQueryOutcomeCallable GetGroupQueryCallable(const GetGroupQueryRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::GetGroupQuery, request);
        }

        /**
         * An Async wrapper for GetGroupQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupQueryRequestT = Model::GetGroupQueryRequest>
        void GetGroupQueryAsync(const GetGroupQueryRequestT& request, const GetGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::GetGroupQuery, request, handler, context);
        }

        /**
         * <p>Returns a list of tags that are associated with a resource group, specified
         * by an ARN.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you
         * must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:GetTags</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        Model::GetTagsOutcomeCallable GetTagsCallable(const GetTagsRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::GetTags, request);
        }

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        void GetTagsAsync(const GetTagsRequestT& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::GetTags, request, handler, context);
        }

        /**
         * <p>Adds the specified resources to the specified group.</p>  <p>You
         * can use this operation with only resource groups that are configured with the
         * following types:</p> <ul> <li> <p> <code>AWS::EC2::HostManagement</code> </p>
         * </li> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> </p> </li> </ul>
         * <p>Other resource group type and resource types aren't currently supported by
         * this operation.</p>  <p> <b>Minimum permissions</b> </p> <p>To run
         * this command, you must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:GroupResources</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GroupResourcesOutcome GroupResources(const Model::GroupResourcesRequest& request) const;

        /**
         * A Callable wrapper for GroupResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GroupResourcesRequestT = Model::GroupResourcesRequest>
        Model::GroupResourcesOutcomeCallable GroupResourcesCallable(const GroupResourcesRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::GroupResources, request);
        }

        /**
         * An Async wrapper for GroupResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GroupResourcesRequestT = Model::GroupResourcesRequest>
        void GroupResourcesAsync(const GroupResourcesRequestT& request, const GroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::GroupResources, request, handler, context);
        }

        /**
         * <p>Returns a list of ARNs of the resources that are members of a specified
         * resource group.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command,
         * you must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:ListGroupResources</code> </p> </li> <li> <p>
         * <code>cloudformation:DescribeStacks</code> </p> </li> <li> <p>
         * <code>cloudformation:ListStackResources</code> </p> </li> <li> <p>
         * <code>tag:GetResources</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupResourcesOutcome ListGroupResources(const Model::ListGroupResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListGroupResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupResourcesRequestT = Model::ListGroupResourcesRequest>
        Model::ListGroupResourcesOutcomeCallable ListGroupResourcesCallable(const ListGroupResourcesRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::ListGroupResources, request);
        }

        /**
         * An Async wrapper for ListGroupResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupResourcesRequestT = Model::ListGroupResourcesRequest>
        void ListGroupResourcesAsync(const ListGroupResourcesRequestT& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::ListGroupResources, request, handler, context);
        }

        /**
         * <p>Returns a list of existing Resource Groups in your account.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p> <code>resource-groups:ListGroups</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const ListGroupsRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::ListGroups, request);
        }

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        void ListGroupsAsync(const ListGroupsRequestT& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::ListGroups, request, handler, context);
        }

        /**
         * <p>Attaches a service configuration to the specified group. This occurs
         * asynchronously, and can take time to complete. You can use
         * <a>GetGroupConfiguration</a> to check the status of the update.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:PutGroupConfiguration</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/PutGroupConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGroupConfigurationOutcome PutGroupConfiguration(const Model::PutGroupConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutGroupConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutGroupConfigurationRequestT = Model::PutGroupConfigurationRequest>
        Model::PutGroupConfigurationOutcomeCallable PutGroupConfigurationCallable(const PutGroupConfigurationRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::PutGroupConfiguration, request);
        }

        /**
         * An Async wrapper for PutGroupConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutGroupConfigurationRequestT = Model::PutGroupConfigurationRequest>
        void PutGroupConfigurationAsync(const PutGroupConfigurationRequestT& request, const PutGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::PutGroupConfiguration, request, handler, context);
        }

        /**
         * <p>Returns a list of Amazon Web Services resource identifiers that matches the
         * specified query. The query uses the same format as a resource query in a
         * <a>CreateGroup</a> or <a>UpdateGroupQuery</a> operation.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:SearchResources</code> </p>
         * </li> <li> <p> <code>cloudformation:DescribeStacks</code> </p> </li> <li> <p>
         * <code>cloudformation:ListStackResources</code> </p> </li> <li> <p>
         * <code>tag:GetResources</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/SearchResources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest& request) const;

        /**
         * A Callable wrapper for SearchResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchResourcesRequestT = Model::SearchResourcesRequest>
        Model::SearchResourcesOutcomeCallable SearchResourcesCallable(const SearchResourcesRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::SearchResources, request);
        }

        /**
         * An Async wrapper for SearchResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchResourcesRequestT = Model::SearchResourcesRequest>
        void SearchResourcesAsync(const SearchResourcesRequestT& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::SearchResources, request, handler, context);
        }

        /**
         * <p>Adds tags to a resource group with the specified ARN. Existing tags on a
         * resource group are not changed if they are not specified in the request
         * parameters.</p>  <p>Do not store personally identifiable information
         * (PII) or other confidential or sensitive information in tags. We use tags to
         * provide you with billing and administration services. Tags are not intended to
         * be used for private or sensitive data.</p>  <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:Tag</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Tag">AWS
         * API Reference</a></p>
         */
        virtual Model::TagOutcome Tag(const Model::TagRequest& request) const;

        /**
         * A Callable wrapper for Tag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagRequestT = Model::TagRequest>
        Model::TagOutcomeCallable TagCallable(const TagRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::Tag, request);
        }

        /**
         * An Async wrapper for Tag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagRequestT = Model::TagRequest>
        void TagAsync(const TagRequestT& request, const TagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::Tag, request, handler, context);
        }

        /**
         * <p>Removes the specified resources from the specified group. This operation
         * works only with static groups that you populated using the <a>GroupResources</a>
         * operation. It doesn't work with any resource groups that are automatically
         * populated by tag-based or CloudFormation stack-based queries.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:UngroupResources</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UngroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::UngroupResourcesOutcome UngroupResources(const Model::UngroupResourcesRequest& request) const;

        /**
         * A Callable wrapper for UngroupResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UngroupResourcesRequestT = Model::UngroupResourcesRequest>
        Model::UngroupResourcesOutcomeCallable UngroupResourcesCallable(const UngroupResourcesRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::UngroupResources, request);
        }

        /**
         * An Async wrapper for UngroupResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UngroupResourcesRequestT = Model::UngroupResourcesRequest>
        void UngroupResourcesAsync(const UngroupResourcesRequestT& request, const UngroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::UngroupResources, request, handler, context);
        }

        /**
         * <p>Deletes tags from a specified resource group.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:Untag</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Untag">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagOutcome Untag(const Model::UntagRequest& request) const;

        /**
         * A Callable wrapper for Untag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagRequestT = Model::UntagRequest>
        Model::UntagOutcomeCallable UntagCallable(const UntagRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::Untag, request);
        }

        /**
         * An Async wrapper for Untag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagRequestT = Model::UntagRequest>
        void UntagAsync(const UntagRequestT& request, const UntagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::Untag, request, handler, context);
        }

        /**
         * <p>Turns on or turns off optional features in Resource Groups.</p> <p>The
         * preceding example shows that the request to turn on group lifecycle events is
         * <code>IN_PROGRESS</code>. You can call the <a>GetAccountSettings</a> operation
         * to check for completion by looking for <code>GroupLifecycleEventsStatus</code>
         * to change to <code>ACTIVE</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountSettingsRequestT = Model::UpdateAccountSettingsRequest>
        Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const UpdateAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::UpdateAccountSettings, request);
        }

        /**
         * An Async wrapper for UpdateAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountSettingsRequestT = Model::UpdateAccountSettingsRequest>
        void UpdateAccountSettingsAsync(const UpdateAccountSettingsRequestT& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::UpdateAccountSettings, request, handler, context);
        }

        /**
         * <p>Updates the description for an existing group. You cannot update the name of
         * a resource group.</p> <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:UpdateGroup</code> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const UpdateGroupRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::UpdateGroup, request);
        }

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        void UpdateGroupAsync(const UpdateGroupRequestT& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::UpdateGroup, request, handler, context);
        }

        /**
         * <p>Updates the resource query of a group. For more information about resource
         * queries, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
         * a tag-based group in Resource Groups</a>.</p> <p> <b>Minimum permissions</b>
         * </p> <p>To run this command, you must have the following permissions:</p> <ul>
         * <li> <p> <code>resource-groups:UpdateGroupQuery</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroupQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupQueryOutcome UpdateGroupQuery(const Model::UpdateGroupQueryRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroupQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupQueryRequestT = Model::UpdateGroupQueryRequest>
        Model::UpdateGroupQueryOutcomeCallable UpdateGroupQueryCallable(const UpdateGroupQueryRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsClient::UpdateGroupQuery, request);
        }

        /**
         * An Async wrapper for UpdateGroupQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupQueryRequestT = Model::UpdateGroupQueryRequest>
        void UpdateGroupQueryAsync(const UpdateGroupQueryRequestT& request, const UpdateGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsClient::UpdateGroupQuery, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ResourceGroupsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ResourceGroupsClient>;
      void init(const ResourceGroupsClientConfiguration& clientConfiguration);

      ResourceGroupsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ResourceGroupsEndpointProviderBase> m_endpointProvider;
  };

} // namespace ResourceGroups
} // namespace Aws
