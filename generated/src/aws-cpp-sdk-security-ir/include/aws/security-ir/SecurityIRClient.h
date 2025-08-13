/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/security-ir/SecurityIRServiceClientModel.h>

namespace Aws
{
namespace SecurityIR
{
  /**
   * <p>This guide documents the action and response elements for use of the
   * service.</p>
   */
  class AWS_SECURITYIR_API SecurityIRClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SecurityIRClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SecurityIRClientConfiguration ClientConfigurationType;
      typedef SecurityIREndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityIRClient(const Aws::SecurityIR::SecurityIRClientConfiguration& clientConfiguration = Aws::SecurityIR::SecurityIRClientConfiguration(),
                         std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityIRClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider = nullptr,
                         const Aws::SecurityIR::SecurityIRClientConfiguration& clientConfiguration = Aws::SecurityIR::SecurityIRClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityIRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<SecurityIREndpointProviderBase> endpointProvider = nullptr,
                         const Aws::SecurityIR::SecurityIRClientConfiguration& clientConfiguration = Aws::SecurityIR::SecurityIRClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityIRClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityIRClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityIRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SecurityIRClient();

        /**
         * <p>Provides information on whether the supplied account IDs are associated with
         * a membership.</p>  <p> AWS account ID's may appear less than 12 characters
         * and need to be zero-prepended. An example would be <code>123123123</code> which
         * is nine digits, and with zero-prepend would be <code>000123123123</code>. Not
         * zero-prepending to 12 digits could result in errors. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/BatchGetMemberAccountDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetMemberAccountDetailsOutcome BatchGetMemberAccountDetails(const Model::BatchGetMemberAccountDetailsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetMemberAccountDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetMemberAccountDetailsRequestT = Model::BatchGetMemberAccountDetailsRequest>
        Model::BatchGetMemberAccountDetailsOutcomeCallable BatchGetMemberAccountDetailsCallable(const BatchGetMemberAccountDetailsRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::BatchGetMemberAccountDetails, request);
        }

        /**
         * An Async wrapper for BatchGetMemberAccountDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetMemberAccountDetailsRequestT = Model::BatchGetMemberAccountDetailsRequest>
        void BatchGetMemberAccountDetailsAsync(const BatchGetMemberAccountDetailsRequestT& request, const BatchGetMemberAccountDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::BatchGetMemberAccountDetails, request, handler, context);
        }

        /**
         * <p>Cancels an existing membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/CancelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMembershipOutcome CancelMembership(const Model::CancelMembershipRequest& request) const;

        /**
         * A Callable wrapper for CancelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMembershipRequestT = Model::CancelMembershipRequest>
        Model::CancelMembershipOutcomeCallable CancelMembershipCallable(const CancelMembershipRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::CancelMembership, request);
        }

        /**
         * An Async wrapper for CancelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMembershipRequestT = Model::CancelMembershipRequest>
        void CancelMembershipAsync(const CancelMembershipRequestT& request, const CancelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::CancelMembership, request, handler, context);
        }

        /**
         * <p>Closes an existing case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/CloseCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CloseCaseOutcome CloseCase(const Model::CloseCaseRequest& request) const;

        /**
         * A Callable wrapper for CloseCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CloseCaseRequestT = Model::CloseCaseRequest>
        Model::CloseCaseOutcomeCallable CloseCaseCallable(const CloseCaseRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::CloseCase, request);
        }

        /**
         * An Async wrapper for CloseCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CloseCaseRequestT = Model::CloseCaseRequest>
        void CloseCaseAsync(const CloseCaseRequestT& request, const CloseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::CloseCase, request, handler, context);
        }

        /**
         * <p>Creates a new case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/CreateCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCaseOutcome CreateCase(const Model::CreateCaseRequest& request) const;

        /**
         * A Callable wrapper for CreateCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCaseRequestT = Model::CreateCaseRequest>
        Model::CreateCaseOutcomeCallable CreateCaseCallable(const CreateCaseRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::CreateCase, request);
        }

        /**
         * An Async wrapper for CreateCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCaseRequestT = Model::CreateCaseRequest>
        void CreateCaseAsync(const CreateCaseRequestT& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::CreateCase, request, handler, context);
        }

        /**
         * <p>Adds a comment to an existing case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/CreateCaseComment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCaseCommentOutcome CreateCaseComment(const Model::CreateCaseCommentRequest& request) const;

        /**
         * A Callable wrapper for CreateCaseComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCaseCommentRequestT = Model::CreateCaseCommentRequest>
        Model::CreateCaseCommentOutcomeCallable CreateCaseCommentCallable(const CreateCaseCommentRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::CreateCaseComment, request);
        }

        /**
         * An Async wrapper for CreateCaseComment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCaseCommentRequestT = Model::CreateCaseCommentRequest>
        void CreateCaseCommentAsync(const CreateCaseCommentRequestT& request, const CreateCaseCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::CreateCaseComment, request, handler, context);
        }

        /**
         * <p>Creates a new membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/CreateMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembershipOutcome CreateMembership(const Model::CreateMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMembershipRequestT = Model::CreateMembershipRequest>
        Model::CreateMembershipOutcomeCallable CreateMembershipCallable(const CreateMembershipRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::CreateMembership, request);
        }

        /**
         * An Async wrapper for CreateMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMembershipRequestT = Model::CreateMembershipRequest>
        void CreateMembershipAsync(const CreateMembershipRequestT& request, const CreateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::CreateMembership, request, handler, context);
        }

        /**
         * <p>Returns the attributes of a case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/GetCase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseOutcome GetCase(const Model::GetCaseRequest& request) const;

        /**
         * A Callable wrapper for GetCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCaseRequestT = Model::GetCaseRequest>
        Model::GetCaseOutcomeCallable GetCaseCallable(const GetCaseRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::GetCase, request);
        }

        /**
         * An Async wrapper for GetCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCaseRequestT = Model::GetCaseRequest>
        void GetCaseAsync(const GetCaseRequestT& request, const GetCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::GetCase, request, handler, context);
        }

        /**
         * <p>Returns a Pre-Signed URL for uploading attachments into a case.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/GetCaseAttachmentDownloadUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseAttachmentDownloadUrlOutcome GetCaseAttachmentDownloadUrl(const Model::GetCaseAttachmentDownloadUrlRequest& request) const;

        /**
         * A Callable wrapper for GetCaseAttachmentDownloadUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCaseAttachmentDownloadUrlRequestT = Model::GetCaseAttachmentDownloadUrlRequest>
        Model::GetCaseAttachmentDownloadUrlOutcomeCallable GetCaseAttachmentDownloadUrlCallable(const GetCaseAttachmentDownloadUrlRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::GetCaseAttachmentDownloadUrl, request);
        }

        /**
         * An Async wrapper for GetCaseAttachmentDownloadUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCaseAttachmentDownloadUrlRequestT = Model::GetCaseAttachmentDownloadUrlRequest>
        void GetCaseAttachmentDownloadUrlAsync(const GetCaseAttachmentDownloadUrlRequestT& request, const GetCaseAttachmentDownloadUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::GetCaseAttachmentDownloadUrl, request, handler, context);
        }

        /**
         * <p>Uploads an attachment to a case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/GetCaseAttachmentUploadUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseAttachmentUploadUrlOutcome GetCaseAttachmentUploadUrl(const Model::GetCaseAttachmentUploadUrlRequest& request) const;

        /**
         * A Callable wrapper for GetCaseAttachmentUploadUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCaseAttachmentUploadUrlRequestT = Model::GetCaseAttachmentUploadUrlRequest>
        Model::GetCaseAttachmentUploadUrlOutcomeCallable GetCaseAttachmentUploadUrlCallable(const GetCaseAttachmentUploadUrlRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::GetCaseAttachmentUploadUrl, request);
        }

        /**
         * An Async wrapper for GetCaseAttachmentUploadUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCaseAttachmentUploadUrlRequestT = Model::GetCaseAttachmentUploadUrlRequest>
        void GetCaseAttachmentUploadUrlAsync(const GetCaseAttachmentUploadUrlRequestT& request, const GetCaseAttachmentUploadUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::GetCaseAttachmentUploadUrl, request, handler, context);
        }

        /**
         * <p>Returns the attributes of a membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/GetMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembershipOutcome GetMembership(const Model::GetMembershipRequest& request) const;

        /**
         * A Callable wrapper for GetMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMembershipRequestT = Model::GetMembershipRequest>
        Model::GetMembershipOutcomeCallable GetMembershipCallable(const GetMembershipRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::GetMembership, request);
        }

        /**
         * An Async wrapper for GetMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMembershipRequestT = Model::GetMembershipRequest>
        void GetMembershipAsync(const GetMembershipRequestT& request, const GetMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::GetMembership, request, handler, context);
        }

        /**
         * <p>Views the case history for edits made to a designated case.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ListCaseEdits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCaseEditsOutcome ListCaseEdits(const Model::ListCaseEditsRequest& request) const;

        /**
         * A Callable wrapper for ListCaseEdits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCaseEditsRequestT = Model::ListCaseEditsRequest>
        Model::ListCaseEditsOutcomeCallable ListCaseEditsCallable(const ListCaseEditsRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::ListCaseEdits, request);
        }

        /**
         * An Async wrapper for ListCaseEdits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCaseEditsRequestT = Model::ListCaseEditsRequest>
        void ListCaseEditsAsync(const ListCaseEditsRequestT& request, const ListCaseEditsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::ListCaseEdits, request, handler, context);
        }

        /**
         * <p>Lists all cases the requester has access to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ListCases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCasesOutcome ListCases(const Model::ListCasesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCasesRequestT = Model::ListCasesRequest>
        Model::ListCasesOutcomeCallable ListCasesCallable(const ListCasesRequestT& request = {}) const
        {
            return SubmitCallable(&SecurityIRClient::ListCases, request);
        }

        /**
         * An Async wrapper for ListCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCasesRequestT = Model::ListCasesRequest>
        void ListCasesAsync(const ListCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCasesRequestT& request = {}) const
        {
            return SubmitAsync(&SecurityIRClient::ListCases, request, handler, context);
        }

        /**
         * <p>Returns comments for a designated case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ListComments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommentsOutcome ListComments(const Model::ListCommentsRequest& request) const;

        /**
         * A Callable wrapper for ListComments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCommentsRequestT = Model::ListCommentsRequest>
        Model::ListCommentsOutcomeCallable ListCommentsCallable(const ListCommentsRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::ListComments, request);
        }

        /**
         * An Async wrapper for ListComments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCommentsRequestT = Model::ListCommentsRequest>
        void ListCommentsAsync(const ListCommentsRequestT& request, const ListCommentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::ListComments, request, handler, context);
        }

        /**
         * <p>Returns the memberships that the calling principal can access.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ListMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembershipsOutcome ListMemberships(const Model::ListMembershipsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMembershipsRequestT = Model::ListMembershipsRequest>
        Model::ListMembershipsOutcomeCallable ListMembershipsCallable(const ListMembershipsRequestT& request = {}) const
        {
            return SubmitCallable(&SecurityIRClient::ListMemberships, request);
        }

        /**
         * An Async wrapper for ListMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembershipsRequestT = Model::ListMembershipsRequest>
        void ListMembershipsAsync(const ListMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMembershipsRequestT& request = {}) const
        {
            return SubmitAsync(&SecurityIRClient::ListMemberships, request, handler, context);
        }

        /**
         * <p>Returns currently configured tags on a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds a tag(s) to a designated resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag(s) from a designate resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing case.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/UpdateCase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCaseOutcome UpdateCase(const Model::UpdateCaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCaseRequestT = Model::UpdateCaseRequest>
        Model::UpdateCaseOutcomeCallable UpdateCaseCallable(const UpdateCaseRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::UpdateCase, request);
        }

        /**
         * An Async wrapper for UpdateCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCaseRequestT = Model::UpdateCaseRequest>
        void UpdateCaseAsync(const UpdateCaseRequestT& request, const UpdateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::UpdateCase, request, handler, context);
        }

        /**
         * <p>Updates an existing case comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/UpdateCaseComment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCaseCommentOutcome UpdateCaseComment(const Model::UpdateCaseCommentRequest& request) const;

        /**
         * A Callable wrapper for UpdateCaseComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCaseCommentRequestT = Model::UpdateCaseCommentRequest>
        Model::UpdateCaseCommentOutcomeCallable UpdateCaseCommentCallable(const UpdateCaseCommentRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::UpdateCaseComment, request);
        }

        /**
         * An Async wrapper for UpdateCaseComment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCaseCommentRequestT = Model::UpdateCaseCommentRequest>
        void UpdateCaseCommentAsync(const UpdateCaseCommentRequestT& request, const UpdateCaseCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::UpdateCaseComment, request, handler, context);
        }

        /**
         * <p>Updates the state transitions for a designated cases.</p> <p>
         * <b>Self-managed</b>: the following states are available for self-managed cases.
         * </p> <ul> <li> <p>Submitted → Detection and Analysis</p> </li> <li> <p>Detection
         * and Analysis → Containment, Eradication, and Recovery</p> </li> <li>
         * <p>Detection and Analysis → Post-incident Activities</p> </li> <li>
         * <p>Containment, Eradication, and Recovery → Detection and Analysis</p> </li>
         * <li> <p>Containment, Eradication, and Recovery → Post-incident Activities</p>
         * </li> <li> <p>Post-incident Activities → Containment, Eradication, and
         * Recovery</p> </li> <li> <p>Post-incident Activities → Detection and Analysis</p>
         * </li> <li> <p>Any → Closed</p> </li> </ul> <p> <b>AWS supported</b>: You must
         * use the <code>CloseCase</code> API to close. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/UpdateCaseStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCaseStatusOutcome UpdateCaseStatus(const Model::UpdateCaseStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateCaseStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCaseStatusRequestT = Model::UpdateCaseStatusRequest>
        Model::UpdateCaseStatusOutcomeCallable UpdateCaseStatusCallable(const UpdateCaseStatusRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::UpdateCaseStatus, request);
        }

        /**
         * An Async wrapper for UpdateCaseStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCaseStatusRequestT = Model::UpdateCaseStatusRequest>
        void UpdateCaseStatusAsync(const UpdateCaseStatusRequestT& request, const UpdateCaseStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::UpdateCaseStatus, request, handler, context);
        }

        /**
         * <p>Updates membership configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/UpdateMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMembershipOutcome UpdateMembership(const Model::UpdateMembershipRequest& request) const;

        /**
         * A Callable wrapper for UpdateMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMembershipRequestT = Model::UpdateMembershipRequest>
        Model::UpdateMembershipOutcomeCallable UpdateMembershipCallable(const UpdateMembershipRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::UpdateMembership, request);
        }

        /**
         * An Async wrapper for UpdateMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMembershipRequestT = Model::UpdateMembershipRequest>
        void UpdateMembershipAsync(const UpdateMembershipRequestT& request, const UpdateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::UpdateMembership, request, handler, context);
        }

        /**
         * <p>Updates the resolver type for a case.</p>  <p>This is a one-way
         * action and cannot be reversed.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/UpdateResolverType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverTypeOutcome UpdateResolverType(const Model::UpdateResolverTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolverType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResolverTypeRequestT = Model::UpdateResolverTypeRequest>
        Model::UpdateResolverTypeOutcomeCallable UpdateResolverTypeCallable(const UpdateResolverTypeRequestT& request) const
        {
            return SubmitCallable(&SecurityIRClient::UpdateResolverType, request);
        }

        /**
         * An Async wrapper for UpdateResolverType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResolverTypeRequestT = Model::UpdateResolverTypeRequest>
        void UpdateResolverTypeAsync(const UpdateResolverTypeRequestT& request, const UpdateResolverTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityIRClient::UpdateResolverType, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SecurityIREndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SecurityIRClient>;
      void init(const SecurityIRClientConfiguration& clientConfiguration);

      SecurityIRClientConfiguration m_clientConfiguration;
      std::shared_ptr<SecurityIREndpointProviderBase> m_endpointProvider;
  };

} // namespace SecurityIR
} // namespace Aws
