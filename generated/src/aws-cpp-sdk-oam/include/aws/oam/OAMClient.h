/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/oam/OAMServiceClientModel.h>

namespace Aws
{
namespace OAM
{
  /**
   * <p>Use Amazon CloudWatch Observability Access Manager to create and manage links
   * between source accounts and monitoring accounts by using <i>CloudWatch
   * cross-account observability</i>. With CloudWatch cross-account observability,
   * you can monitor and troubleshoot applications that span multiple accounts within
   * a Region. Seamlessly search, visualize, and analyze your metrics, logs, traces,
   * and Application Insights applications in any of the linked accounts without
   * account boundaries.</p> <p>Set up one or more Amazon Web Services accounts as
   * <i>monitoring accounts</i> and link them with multiple <i>source accounts</i>. A
   * monitoring account is a central Amazon Web Services account that can view and
   * interact with observability data generated from source accounts. A source
   * account is an individual Amazon Web Services account that generates
   * observability data for the resources that reside in it. Source accounts share
   * their observability data with the monitoring account. The shared observability
   * data can include metrics in Amazon CloudWatch, logs in Amazon CloudWatch Logs,
   * traces in X-Ray, and applications in Amazon CloudWatch Application Insights.</p>
   */
  class AWS_OAM_API OAMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OAMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef OAMClientConfiguration ClientConfigurationType;
      typedef OAMEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OAMClient(const Aws::OAM::OAMClientConfiguration& clientConfiguration = Aws::OAM::OAMClientConfiguration(),
                  std::shared_ptr<OAMEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OAMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<OAMEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::OAM::OAMClientConfiguration& clientConfiguration = Aws::OAM::OAMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<OAMEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::OAM::OAMClientConfiguration& clientConfiguration = Aws::OAM::OAMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OAMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OAMClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OAMClient();

        /**
         * <p>Creates a link between a source account and a sink that you have created in a
         * monitoring account.</p> <p>Before you create a link, you must create a sink in
         * the monitoring account and create a sink policy in that account. The sink policy
         * must permit the source account to link to it. You can grant permission to source
         * accounts by granting permission to an entire organization or to individual
         * accounts.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>
         * and <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_PutSinkPolicy.html">PutSinkPolicy</a>.</p>
         * <p>Each monitoring account can be linked to as many as 100,000 source
         * accounts.</p> <p>Each source account can be linked to as many as five monitoring
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/CreateLink">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateLinkOutcome CreateLink(const Model::CreateLinkRequest& request) const;

        /**
         * A Callable wrapper for CreateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLinkRequestT = Model::CreateLinkRequest>
        Model::CreateLinkOutcomeCallable CreateLinkCallable(const CreateLinkRequestT& request) const
        {
            return SubmitCallable(&OAMClient::CreateLink, request);
        }

        /**
         * An Async wrapper for CreateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLinkRequestT = Model::CreateLinkRequest>
        void CreateLinkAsync(const CreateLinkRequestT& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::CreateLink, request, handler, context);
        }

        /**
         * <p>Use this to create a <i>sink</i> in the current account, so that it can be
         * used as a monitoring account in CloudWatch cross-account observability. A sink
         * is a resource that represents an attachment point in a monitoring account.
         * Source accounts can link to the sink to send observability data.</p> <p>After
         * you create a sink, you must create a sink policy that allows source accounts to
         * attach to it. For more information, see <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_PutSinkPolicy.html">PutSinkPolicy</a>.</p>
         * <p>Each account can contain one sink. If you delete a sink, you can then create
         * a new one in that account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/CreateSink">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateSinkOutcome CreateSink(const Model::CreateSinkRequest& request) const;

        /**
         * A Callable wrapper for CreateSink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSinkRequestT = Model::CreateSinkRequest>
        Model::CreateSinkOutcomeCallable CreateSinkCallable(const CreateSinkRequestT& request) const
        {
            return SubmitCallable(&OAMClient::CreateSink, request);
        }

        /**
         * An Async wrapper for CreateSink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSinkRequestT = Model::CreateSinkRequest>
        void CreateSinkAsync(const CreateSinkRequestT& request, const CreateSinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::CreateSink, request, handler, context);
        }

        /**
         * <p>Deletes a link between a monitoring account sink and a source account. You
         * must run this operation in the source account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/DeleteLink">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteLinkOutcome DeleteLink(const Model::DeleteLinkRequest& request) const;

        /**
         * A Callable wrapper for DeleteLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLinkRequestT = Model::DeleteLinkRequest>
        Model::DeleteLinkOutcomeCallable DeleteLinkCallable(const DeleteLinkRequestT& request) const
        {
            return SubmitCallable(&OAMClient::DeleteLink, request);
        }

        /**
         * An Async wrapper for DeleteLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLinkRequestT = Model::DeleteLinkRequest>
        void DeleteLinkAsync(const DeleteLinkRequestT& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::DeleteLink, request, handler, context);
        }

        /**
         * <p>Deletes a sink. You must delete all links to a sink before you can delete
         * that sink.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/DeleteSink">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteSinkOutcome DeleteSink(const Model::DeleteSinkRequest& request) const;

        /**
         * A Callable wrapper for DeleteSink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSinkRequestT = Model::DeleteSinkRequest>
        Model::DeleteSinkOutcomeCallable DeleteSinkCallable(const DeleteSinkRequestT& request) const
        {
            return SubmitCallable(&OAMClient::DeleteSink, request);
        }

        /**
         * An Async wrapper for DeleteSink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSinkRequestT = Model::DeleteSinkRequest>
        void DeleteSinkAsync(const DeleteSinkRequestT& request, const DeleteSinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::DeleteSink, request, handler, context);
        }

        /**
         * <p>Returns complete information about one link.</p> <p>To use this operation,
         * provide the link ARN. To retrieve a list of link ARNs, use <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListLinks.html">ListLinks</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/GetLink">AWS API
         * Reference</a></p>
         */
        virtual Model::GetLinkOutcome GetLink(const Model::GetLinkRequest& request) const;

        /**
         * A Callable wrapper for GetLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLinkRequestT = Model::GetLinkRequest>
        Model::GetLinkOutcomeCallable GetLinkCallable(const GetLinkRequestT& request) const
        {
            return SubmitCallable(&OAMClient::GetLink, request);
        }

        /**
         * An Async wrapper for GetLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLinkRequestT = Model::GetLinkRequest>
        void GetLinkAsync(const GetLinkRequestT& request, const GetLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::GetLink, request, handler, context);
        }

        /**
         * <p>Returns complete information about one monitoring account sink.</p> <p>To use
         * this operation, provide the sink ARN. To retrieve a list of sink ARNs, use <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/GetSink">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSinkOutcome GetSink(const Model::GetSinkRequest& request) const;

        /**
         * A Callable wrapper for GetSink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSinkRequestT = Model::GetSinkRequest>
        Model::GetSinkOutcomeCallable GetSinkCallable(const GetSinkRequestT& request) const
        {
            return SubmitCallable(&OAMClient::GetSink, request);
        }

        /**
         * An Async wrapper for GetSink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSinkRequestT = Model::GetSinkRequest>
        void GetSinkAsync(const GetSinkRequestT& request, const GetSinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::GetSink, request, handler, context);
        }

        /**
         * <p>Returns the current sink policy attached to this sink. The sink policy
         * specifies what accounts can attach to this sink as source accounts, and what
         * types of data they can share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/GetSinkPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSinkPolicyOutcome GetSinkPolicy(const Model::GetSinkPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetSinkPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSinkPolicyRequestT = Model::GetSinkPolicyRequest>
        Model::GetSinkPolicyOutcomeCallable GetSinkPolicyCallable(const GetSinkPolicyRequestT& request) const
        {
            return SubmitCallable(&OAMClient::GetSinkPolicy, request);
        }

        /**
         * An Async wrapper for GetSinkPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSinkPolicyRequestT = Model::GetSinkPolicyRequest>
        void GetSinkPolicyAsync(const GetSinkPolicyRequestT& request, const GetSinkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::GetSinkPolicy, request, handler, context);
        }

        /**
         * <p>Returns a list of source account links that are linked to this monitoring
         * account sink.</p> <p>To use this operation, provide the sink ARN. To retrieve a
         * list of sink ARNs, use <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>.</p>
         * <p>To find a list of links for one source account, use <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListLinks.html">ListLinks</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/ListAttachedLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedLinksOutcome ListAttachedLinks(const Model::ListAttachedLinksRequest& request) const;

        /**
         * A Callable wrapper for ListAttachedLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAttachedLinksRequestT = Model::ListAttachedLinksRequest>
        Model::ListAttachedLinksOutcomeCallable ListAttachedLinksCallable(const ListAttachedLinksRequestT& request) const
        {
            return SubmitCallable(&OAMClient::ListAttachedLinks, request);
        }

        /**
         * An Async wrapper for ListAttachedLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttachedLinksRequestT = Model::ListAttachedLinksRequest>
        void ListAttachedLinksAsync(const ListAttachedLinksRequestT& request, const ListAttachedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::ListAttachedLinks, request, handler, context);
        }

        /**
         * <p>Use this operation in a source account to return a list of links to
         * monitoring account sinks that this source account has.</p> <p>To find a list of
         * links for one monitoring account sink, use <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListAttachedLinks.html">ListAttachedLinks</a>
         * from within the monitoring account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/ListLinks">AWS API
         * Reference</a></p>
         */
        virtual Model::ListLinksOutcome ListLinks(const Model::ListLinksRequest& request) const;

        /**
         * A Callable wrapper for ListLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLinksRequestT = Model::ListLinksRequest>
        Model::ListLinksOutcomeCallable ListLinksCallable(const ListLinksRequestT& request) const
        {
            return SubmitCallable(&OAMClient::ListLinks, request);
        }

        /**
         * An Async wrapper for ListLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLinksRequestT = Model::ListLinksRequest>
        void ListLinksAsync(const ListLinksRequestT& request, const ListLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::ListLinks, request, handler, context);
        }

        /**
         * <p>Use this operation in a monitoring account to return the list of sinks
         * created in that account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/ListSinks">AWS API
         * Reference</a></p>
         */
        virtual Model::ListSinksOutcome ListSinks(const Model::ListSinksRequest& request) const;

        /**
         * A Callable wrapper for ListSinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSinksRequestT = Model::ListSinksRequest>
        Model::ListSinksOutcomeCallable ListSinksCallable(const ListSinksRequestT& request) const
        {
            return SubmitCallable(&OAMClient::ListSinks, request);
        }

        /**
         * An Async wrapper for ListSinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSinksRequestT = Model::ListSinksRequest>
        void ListSinksAsync(const ListSinksRequestT& request, const ListSinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::ListSinks, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with a resource. Both sinks and links support
         * tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&OAMClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates or updates the resource policy that grants permissions to source
         * accounts to link to the monitoring account sink. When you create a sink policy,
         * you can grant permissions to all accounts in an organization or to individual
         * accounts.</p> <p>You can also use a sink policy to limit the types of data that
         * is shared. The three types that you can allow or deny are:</p> <ul> <li> <p>
         * <b>Metrics</b> - Specify with <code>AWS::CloudWatch::Metric</code> </p> </li>
         * <li> <p> <b>Log groups</b> - Specify with <code>AWS::Logs::LogGroup</code> </p>
         * </li> <li> <p> <b>Traces</b> - Specify with <code>AWS::XRay::Trace</code> </p>
         * </li> <li> <p> <b>Application Insights - Applications</b> - Specify with
         * <code>AWS::ApplicationInsights::Application</code> </p> </li> </ul> <p>See the
         * examples in this section to see how to specify permitted source accounts and
         * data types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/PutSinkPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSinkPolicyOutcome PutSinkPolicy(const Model::PutSinkPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutSinkPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSinkPolicyRequestT = Model::PutSinkPolicyRequest>
        Model::PutSinkPolicyOutcomeCallable PutSinkPolicyCallable(const PutSinkPolicyRequestT& request) const
        {
            return SubmitCallable(&OAMClient::PutSinkPolicy, request);
        }

        /**
         * An Async wrapper for PutSinkPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSinkPolicyRequestT = Model::PutSinkPolicyRequest>
        void PutSinkPolicyAsync(const PutSinkPolicyRequestT& request, const PutSinkPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::PutSinkPolicy, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified resource. Both
         * sinks and links can be tagged. </p> <p>Tags can help you organize and categorize
         * your resources. You can also use them to scope user permissions by granting a
         * user permission to access or change only resources with certain tag values.</p>
         * <p>Tags don't have any semantic meaning to Amazon Web Services and are
         * interpreted strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a resource that already has tags. If you
         * specify a new tag key for the alarm, this tag is appended to the list of tags
         * associated with the alarm. If you specify a tag key that is already associated
         * with the alarm, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a resource.</p>
         *  <p>Unlike tagging permissions in other Amazon Web Services services,
         * to tag or untag links and sinks you must have the <code>oam:ResourceTag</code>
         * permission. The <code>iam:ResourceTag</code> permission does not allow you to
         * tag and untag links and sinks.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&OAMClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p> 
         * <p>Unlike tagging permissions in other Amazon Web Services services, to tag or
         * untag links and sinks you must have the <code>oam:ResourceTag</code> permission.
         * The <code>iam:TagResource</code> permission does not allow you to tag and untag
         * links and sinks.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&OAMClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Use this operation to change what types of data are shared from a source
         * account to its linked monitoring account sink. You can't change the sink or
         * change the monitoring account with this operation.</p> <p>To update the list of
         * tags associated with the sink, use <a
         * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_TagResource.html">TagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/UpdateLink">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateLinkOutcome UpdateLink(const Model::UpdateLinkRequest& request) const;

        /**
         * A Callable wrapper for UpdateLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLinkRequestT = Model::UpdateLinkRequest>
        Model::UpdateLinkOutcomeCallable UpdateLinkCallable(const UpdateLinkRequestT& request) const
        {
            return SubmitCallable(&OAMClient::UpdateLink, request);
        }

        /**
         * An Async wrapper for UpdateLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLinkRequestT = Model::UpdateLinkRequest>
        void UpdateLinkAsync(const UpdateLinkRequestT& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OAMClient::UpdateLink, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OAMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OAMClient>;
      void init(const OAMClientConfiguration& clientConfiguration);

      OAMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OAMEndpointProviderBase> m_endpointProvider;
  };

} // namespace OAM
} // namespace Aws
