/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIServiceClientModel.h>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
  /**
   * <fullname>Resource Groups Tagging API</fullname>
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceGroupsTaggingAPIClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ResourceGroupsTaggingAPIClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ResourceGroupsTaggingAPIClientConfiguration ClientConfigurationType;
      typedef ResourceGroupsTaggingAPIEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsTaggingAPIClient(const Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientConfiguration& clientConfiguration = Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientConfiguration(),
                                       std::shared_ptr<ResourceGroupsTaggingAPIEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsTaggingAPIClient(const Aws::Auth::AWSCredentials& credentials,
                                       std::shared_ptr<ResourceGroupsTaggingAPIEndpointProviderBase> endpointProvider = nullptr,
                                       const Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientConfiguration& clientConfiguration = Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsTaggingAPIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<ResourceGroupsTaggingAPIEndpointProviderBase> endpointProvider = nullptr,
                                       const Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientConfiguration& clientConfiguration = Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsTaggingAPIClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsTaggingAPIClient(const Aws::Auth::AWSCredentials& credentials,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsTaggingAPIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ResourceGroupsTaggingAPIClient();

        /**
         * <p>Describes the status of the <code>StartReportCreation</code> operation. </p>
         * <p>You can call this operation only from the organization's management account
         * and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/DescribeReportCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportCreationOutcome DescribeReportCreation(const Model::DescribeReportCreationRequest& request) const;

        /**
         * A Callable wrapper for DescribeReportCreation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReportCreationRequestT = Model::DescribeReportCreationRequest>
        Model::DescribeReportCreationOutcomeCallable DescribeReportCreationCallable(const DescribeReportCreationRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsTaggingAPIClient::DescribeReportCreation, request);
        }

        /**
         * An Async wrapper for DescribeReportCreation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReportCreationRequestT = Model::DescribeReportCreationRequest>
        void DescribeReportCreationAsync(const DescribeReportCreationRequestT& request, const DescribeReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsTaggingAPIClient::DescribeReportCreation, request, handler, context);
        }

        /**
         * <p>Returns a table that shows counts of resources that are noncompliant with
         * their tag policies.</p> <p>For more information on tag policies, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>Organizations User Guide.</i> </p> <p>You can call this
         * operation only from the organization's management account and from the us-east-1
         * Region.</p> <p>This operation supports pagination, where the response can be
         * sent in multiple pages. You should check the <code>PaginationToken</code>
         * response parameter to determine if there are additional results available to
         * return. Repeat the query, passing the <code>PaginationToken</code> response
         * parameter value as an input to the next request until you recieve a
         * <code>null</code> value. A null value for <code>PaginationToken</code> indicates
         * that there are no more results waiting to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceSummaryOutcome GetComplianceSummary(const Model::GetComplianceSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetComplianceSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComplianceSummaryRequestT = Model::GetComplianceSummaryRequest>
        Model::GetComplianceSummaryOutcomeCallable GetComplianceSummaryCallable(const GetComplianceSummaryRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsTaggingAPIClient::GetComplianceSummary, request);
        }

        /**
         * An Async wrapper for GetComplianceSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComplianceSummaryRequestT = Model::GetComplianceSummaryRequest>
        void GetComplianceSummaryAsync(const GetComplianceSummaryRequestT& request, const GetComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsTaggingAPIClient::GetComplianceSummary, request, handler, context);
        }

        /**
         * <p>Returns all the tagged or previously tagged resources that are located in the
         * specified Amazon Web Services Region for the account.</p> <p>Depending on what
         * information you want returned, you can also specify the following:</p> <ul> <li>
         * <p> <i>Filters</i> that specify what tags and resource types you want returned.
         * The response includes all tags that are associated with the requested
         * resources.</p> </li> <li> <p>Information about compliance with the account's
         * effective tag policy. For more information on tag policies, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>Organizations User Guide.</i> </p> </li> </ul> <p>This
         * operation supports pagination, where the response can be sent in multiple pages.
         * You should check the <code>PaginationToken</code> response parameter to
         * determine if there are additional results available to return. Repeat the query,
         * passing the <code>PaginationToken</code> response parameter value as an input to
         * the next request until you recieve a <code>null</code> value. A null value for
         * <code>PaginationToken</code> indicates that there are no more results waiting to
         * be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;

        /**
         * A Callable wrapper for GetResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcesRequestT = Model::GetResourcesRequest>
        Model::GetResourcesOutcomeCallable GetResourcesCallable(const GetResourcesRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsTaggingAPIClient::GetResources, request);
        }

        /**
         * An Async wrapper for GetResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcesRequestT = Model::GetResourcesRequest>
        void GetResourcesAsync(const GetResourcesRequestT& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsTaggingAPIClient::GetResources, request, handler, context);
        }

        /**
         * <p>Returns all tag keys currently in use in the specified Amazon Web Services
         * Region for the calling account.</p> <p>This operation supports pagination, where
         * the response can be sent in multiple pages. You should check the
         * <code>PaginationToken</code> response parameter to determine if there are
         * additional results available to return. Repeat the query, passing the
         * <code>PaginationToken</code> response parameter value as an input to the next
         * request until you recieve a <code>null</code> value. A null value for
         * <code>PaginationToken</code> indicates that there are no more results waiting to
         * be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagKeysOutcome GetTagKeys(const Model::GetTagKeysRequest& request) const;

        /**
         * A Callable wrapper for GetTagKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTagKeysRequestT = Model::GetTagKeysRequest>
        Model::GetTagKeysOutcomeCallable GetTagKeysCallable(const GetTagKeysRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsTaggingAPIClient::GetTagKeys, request);
        }

        /**
         * An Async wrapper for GetTagKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTagKeysRequestT = Model::GetTagKeysRequest>
        void GetTagKeysAsync(const GetTagKeysRequestT& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsTaggingAPIClient::GetTagKeys, request, handler, context);
        }

        /**
         * <p>Returns all tag values for the specified key that are used in the specified
         * Amazon Web Services Region for the calling account.</p> <p>This operation
         * supports pagination, where the response can be sent in multiple pages. You
         * should check the <code>PaginationToken</code> response parameter to determine if
         * there are additional results available to return. Repeat the query, passing the
         * <code>PaginationToken</code> response parameter value as an input to the next
         * request until you recieve a <code>null</code> value. A null value for
         * <code>PaginationToken</code> indicates that there are no more results waiting to
         * be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagValuesOutcome GetTagValues(const Model::GetTagValuesRequest& request) const;

        /**
         * A Callable wrapper for GetTagValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTagValuesRequestT = Model::GetTagValuesRequest>
        Model::GetTagValuesOutcomeCallable GetTagValuesCallable(const GetTagValuesRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsTaggingAPIClient::GetTagValues, request);
        }

        /**
         * An Async wrapper for GetTagValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTagValuesRequestT = Model::GetTagValuesRequest>
        void GetTagValuesAsync(const GetTagValuesRequestT& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsTaggingAPIClient::GetTagValues, request, handler, context);
        }

        /**
         * <p>Generates a report that lists all tagged resources in the accounts across
         * your organization and tells whether each resource is compliant with the
         * effective tag policy. Compliance data is refreshed daily. The report is
         * generated asynchronously.</p> <p>The generated report is saved to the following
         * location:</p> <p>
         * <code>s3://example-bucket/AwsTagPolicies/o-exampleorgid/YYYY-MM-ddTHH:mm:ssZ/report.csv</code>
         * </p> <p>You can call this operation only from the organization's management
         * account and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/StartReportCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReportCreationOutcome StartReportCreation(const Model::StartReportCreationRequest& request) const;

        /**
         * A Callable wrapper for StartReportCreation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartReportCreationRequestT = Model::StartReportCreationRequest>
        Model::StartReportCreationOutcomeCallable StartReportCreationCallable(const StartReportCreationRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsTaggingAPIClient::StartReportCreation, request);
        }

        /**
         * An Async wrapper for StartReportCreation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReportCreationRequestT = Model::StartReportCreationRequest>
        void StartReportCreationAsync(const StartReportCreationRequestT& request, const StartReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsTaggingAPIClient::StartReportCreation, request, handler, context);
        }

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of services with
         * resources that support tagging using this operation, see <a
         * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
         * that support the Resource Groups Tagging API</a>. If the resource doesn't yet
         * support this operation, the resource's service might support tagging using its
         * own API operations. For more information, refer to the documentation for that
         * service.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
         * limits, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
         * Naming and Usage Conventions</a> in the <i>Amazon Web Services General
         * Reference.</i> </p> </li> <li> <p>You can only tag resources that are located in
         * the specified Amazon Web Services Region for the Amazon Web Services
         * account.</p> </li> <li> <p>To add tags to a resource, you need the necessary
         * permissions for the service that the resource belongs to as well as permissions
         * for adding tags. For more information, see the documentation for each
         * service.</p> </li> </ul>  <p>Do not store personally identifiable
         * information (PII) or other confidential or sensitive information in tags. We use
         * tags to provide you with billing and administration services. Tags are not
         * intended to be used for private or sensitive data.</p>  <p>
         * <b>Minimum permissions</b> </p> <p>In addition to the
         * <code>tag:TagResources</code> permission required by this operation, you must
         * also have the tagging permission defined by the service that created the
         * resource. For example, to tag an Amazon EC2 instance using the
         * <code>TagResources</code> operation, you must have both of the following
         * permissions:</p> <ul> <li> <p> <code>tag:TagResource</code> </p> </li> <li> <p>
         * <code>ec2:CreateTags</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourcesOutcome TagResources(const Model::TagResourcesRequest& request) const;

        /**
         * A Callable wrapper for TagResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourcesRequestT = Model::TagResourcesRequest>
        Model::TagResourcesOutcomeCallable TagResourcesCallable(const TagResourcesRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsTaggingAPIClient::TagResources, request);
        }

        /**
         * An Async wrapper for TagResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourcesRequestT = Model::TagResourcesRequest>
        void TagResourcesAsync(const TagResourcesRequestT& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsTaggingAPIClient::TagResources, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resources. When you specify a
         * tag key, the action removes both that key and its associated value. The
         * operation succeeds even if you attempt to remove tags from a resource that were
         * already removed. Note the following:</p> <ul> <li> <p>To remove tags from a
         * resource, you need the necessary permissions for the service that the resource
         * belongs to as well as permissions for removing tags. For more information, see
         * the documentation for the service whose resource you want to untag.</p> </li>
         * <li> <p>You can only tag resources that are located in the specified Amazon Web
         * Services Region for the calling Amazon Web Services account.</p> </li> </ul> <p>
         * <b>Minimum permissions</b> </p> <p>In addition to the
         * <code>tag:UntagResources</code> permission required by this operation, you must
         * also have the remove tags permission defined by the service that created the
         * resource. For example, to remove the tags from an Amazon EC2 instance using the
         * <code>UntagResources</code> operation, you must have both of the following
         * permissions:</p> <ul> <li> <p> <code>tag:UntagResource</code> </p> </li> <li>
         * <p> <code>ec2:DeleteTags</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/UntagResources">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourcesOutcome UntagResources(const Model::UntagResourcesRequest& request) const;

        /**
         * A Callable wrapper for UntagResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourcesRequestT = Model::UntagResourcesRequest>
        Model::UntagResourcesOutcomeCallable UntagResourcesCallable(const UntagResourcesRequestT& request) const
        {
            return SubmitCallable(&ResourceGroupsTaggingAPIClient::UntagResources, request);
        }

        /**
         * An Async wrapper for UntagResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourcesRequestT = Model::UntagResourcesRequest>
        void UntagResourcesAsync(const UntagResourcesRequestT& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResourceGroupsTaggingAPIClient::UntagResources, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ResourceGroupsTaggingAPIEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ResourceGroupsTaggingAPIClient>;
      void init(const ResourceGroupsTaggingAPIClientConfiguration& clientConfiguration);

      ResourceGroupsTaggingAPIClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ResourceGroupsTaggingAPIEndpointProviderBase> m_endpointProvider;
  };

} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
