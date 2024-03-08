/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/OmicsServiceClientModel.h>

namespace Aws
{
namespace Omics
{
  /**
   * <p>This is the <i>AWS HealthOmics API Reference</i>. For an introduction to the
   * service, see <a href="https://docs.aws.amazon.com/omics/latest/dev/">What is AWS
   * HealthOmics?</a> in the <i>AWS HealthOmics User Guide</i>.</p>
   */
  class AWS_OMICS_API OmicsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OmicsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef OmicsClientConfiguration ClientConfigurationType;
      typedef OmicsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OmicsClient(const Aws::Omics::OmicsClientConfiguration& clientConfiguration = Aws::Omics::OmicsClientConfiguration(),
                    std::shared_ptr<OmicsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OmicsClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<OmicsEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Omics::OmicsClientConfiguration& clientConfiguration = Aws::Omics::OmicsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OmicsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<OmicsEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Omics::OmicsClientConfiguration& clientConfiguration = Aws::Omics::OmicsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OmicsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OmicsClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OmicsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OmicsClient();

        /**
         * <p> Stops a multipart upload. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/AbortMultipartReadSetUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::AbortMultipartReadSetUploadOutcome AbortMultipartReadSetUpload(const Model::AbortMultipartReadSetUploadRequest& request) const;

        /**
         * A Callable wrapper for AbortMultipartReadSetUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AbortMultipartReadSetUploadRequestT = Model::AbortMultipartReadSetUploadRequest>
        Model::AbortMultipartReadSetUploadOutcomeCallable AbortMultipartReadSetUploadCallable(const AbortMultipartReadSetUploadRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::AbortMultipartReadSetUpload, request);
        }

        /**
         * An Async wrapper for AbortMultipartReadSetUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AbortMultipartReadSetUploadRequestT = Model::AbortMultipartReadSetUploadRequest>
        void AbortMultipartReadSetUploadAsync(const AbortMultipartReadSetUploadRequestT& request, const AbortMultipartReadSetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::AbortMultipartReadSetUpload, request, handler, context);
        }

        /**
         * <p> Accepts a share for an analytics store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/AcceptShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptShareOutcome AcceptShare(const Model::AcceptShareRequest& request) const;

        /**
         * A Callable wrapper for AcceptShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptShareRequestT = Model::AcceptShareRequest>
        Model::AcceptShareOutcomeCallable AcceptShareCallable(const AcceptShareRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::AcceptShare, request);
        }

        /**
         * An Async wrapper for AcceptShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptShareRequestT = Model::AcceptShareRequest>
        void AcceptShareAsync(const AcceptShareRequestT& request, const AcceptShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::AcceptShare, request, handler, context);
        }

        /**
         * <p>Deletes one or more read sets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/BatchDeleteReadSet">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteReadSetOutcome BatchDeleteReadSet(const Model::BatchDeleteReadSetRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteReadSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteReadSetRequestT = Model::BatchDeleteReadSetRequest>
        Model::BatchDeleteReadSetOutcomeCallable BatchDeleteReadSetCallable(const BatchDeleteReadSetRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::BatchDeleteReadSet, request);
        }

        /**
         * An Async wrapper for BatchDeleteReadSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteReadSetRequestT = Model::BatchDeleteReadSetRequest>
        void BatchDeleteReadSetAsync(const BatchDeleteReadSetRequestT& request, const BatchDeleteReadSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::BatchDeleteReadSet, request, handler, context);
        }

        /**
         * <p>Cancels an annotation import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CancelAnnotationImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelAnnotationImportJobOutcome CancelAnnotationImportJob(const Model::CancelAnnotationImportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelAnnotationImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelAnnotationImportJobRequestT = Model::CancelAnnotationImportJobRequest>
        Model::CancelAnnotationImportJobOutcomeCallable CancelAnnotationImportJobCallable(const CancelAnnotationImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CancelAnnotationImportJob, request);
        }

        /**
         * An Async wrapper for CancelAnnotationImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelAnnotationImportJobRequestT = Model::CancelAnnotationImportJobRequest>
        void CancelAnnotationImportJobAsync(const CancelAnnotationImportJobRequestT& request, const CancelAnnotationImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CancelAnnotationImportJob, request, handler, context);
        }

        /**
         * <p>Cancels a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CancelRun">AWS API
         * Reference</a></p>
         */
        virtual Model::CancelRunOutcome CancelRun(const Model::CancelRunRequest& request) const;

        /**
         * A Callable wrapper for CancelRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelRunRequestT = Model::CancelRunRequest>
        Model::CancelRunOutcomeCallable CancelRunCallable(const CancelRunRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CancelRun, request);
        }

        /**
         * An Async wrapper for CancelRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelRunRequestT = Model::CancelRunRequest>
        void CancelRunAsync(const CancelRunRequestT& request, const CancelRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CancelRun, request, handler, context);
        }

        /**
         * <p>Cancels a variant import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CancelVariantImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelVariantImportJobOutcome CancelVariantImportJob(const Model::CancelVariantImportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelVariantImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelVariantImportJobRequestT = Model::CancelVariantImportJobRequest>
        Model::CancelVariantImportJobOutcomeCallable CancelVariantImportJobCallable(const CancelVariantImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CancelVariantImportJob, request);
        }

        /**
         * An Async wrapper for CancelVariantImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelVariantImportJobRequestT = Model::CancelVariantImportJobRequest>
        void CancelVariantImportJobAsync(const CancelVariantImportJobRequestT& request, const CancelVariantImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CancelVariantImportJob, request, handler, context);
        }

        /**
         * <p> Concludes a multipart upload once you have uploaded all the components.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CompleteMultipartReadSetUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteMultipartReadSetUploadOutcome CompleteMultipartReadSetUpload(const Model::CompleteMultipartReadSetUploadRequest& request) const;

        /**
         * A Callable wrapper for CompleteMultipartReadSetUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CompleteMultipartReadSetUploadRequestT = Model::CompleteMultipartReadSetUploadRequest>
        Model::CompleteMultipartReadSetUploadOutcomeCallable CompleteMultipartReadSetUploadCallable(const CompleteMultipartReadSetUploadRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CompleteMultipartReadSetUpload, request);
        }

        /**
         * An Async wrapper for CompleteMultipartReadSetUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompleteMultipartReadSetUploadRequestT = Model::CompleteMultipartReadSetUploadRequest>
        void CompleteMultipartReadSetUploadAsync(const CompleteMultipartReadSetUploadRequestT& request, const CompleteMultipartReadSetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CompleteMultipartReadSetUpload, request, handler, context);
        }

        /**
         * <p>Creates an annotation store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateAnnotationStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnnotationStoreOutcome CreateAnnotationStore(const Model::CreateAnnotationStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateAnnotationStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAnnotationStoreRequestT = Model::CreateAnnotationStoreRequest>
        Model::CreateAnnotationStoreOutcomeCallable CreateAnnotationStoreCallable(const CreateAnnotationStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateAnnotationStore, request);
        }

        /**
         * An Async wrapper for CreateAnnotationStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAnnotationStoreRequestT = Model::CreateAnnotationStoreRequest>
        void CreateAnnotationStoreAsync(const CreateAnnotationStoreRequestT& request, const CreateAnnotationStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateAnnotationStore, request, handler, context);
        }

        /**
         * <p> Creates a new version of an annotation store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateAnnotationStoreVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnnotationStoreVersionOutcome CreateAnnotationStoreVersion(const Model::CreateAnnotationStoreVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateAnnotationStoreVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAnnotationStoreVersionRequestT = Model::CreateAnnotationStoreVersionRequest>
        Model::CreateAnnotationStoreVersionOutcomeCallable CreateAnnotationStoreVersionCallable(const CreateAnnotationStoreVersionRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateAnnotationStoreVersion, request);
        }

        /**
         * An Async wrapper for CreateAnnotationStoreVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAnnotationStoreVersionRequestT = Model::CreateAnnotationStoreVersionRequest>
        void CreateAnnotationStoreVersionAsync(const CreateAnnotationStoreVersionRequestT& request, const CreateAnnotationStoreVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateAnnotationStoreVersion, request, handler, context);
        }

        /**
         * <p> Begins a multipart read set upload. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateMultipartReadSetUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultipartReadSetUploadOutcome CreateMultipartReadSetUpload(const Model::CreateMultipartReadSetUploadRequest& request) const;

        /**
         * A Callable wrapper for CreateMultipartReadSetUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMultipartReadSetUploadRequestT = Model::CreateMultipartReadSetUploadRequest>
        Model::CreateMultipartReadSetUploadOutcomeCallable CreateMultipartReadSetUploadCallable(const CreateMultipartReadSetUploadRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateMultipartReadSetUpload, request);
        }

        /**
         * An Async wrapper for CreateMultipartReadSetUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMultipartReadSetUploadRequestT = Model::CreateMultipartReadSetUploadRequest>
        void CreateMultipartReadSetUploadAsync(const CreateMultipartReadSetUploadRequestT& request, const CreateMultipartReadSetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateMultipartReadSetUpload, request, handler, context);
        }

        /**
         * <p>Creates a reference store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateReferenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReferenceStoreOutcome CreateReferenceStore(const Model::CreateReferenceStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateReferenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReferenceStoreRequestT = Model::CreateReferenceStoreRequest>
        Model::CreateReferenceStoreOutcomeCallable CreateReferenceStoreCallable(const CreateReferenceStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateReferenceStore, request);
        }

        /**
         * An Async wrapper for CreateReferenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReferenceStoreRequestT = Model::CreateReferenceStoreRequest>
        void CreateReferenceStoreAsync(const CreateReferenceStoreRequestT& request, const CreateReferenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateReferenceStore, request, handler, context);
        }

        /**
         * <p>Creates a run group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateRunGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRunGroupOutcome CreateRunGroup(const Model::CreateRunGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateRunGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRunGroupRequestT = Model::CreateRunGroupRequest>
        Model::CreateRunGroupOutcomeCallable CreateRunGroupCallable(const CreateRunGroupRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateRunGroup, request);
        }

        /**
         * An Async wrapper for CreateRunGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRunGroupRequestT = Model::CreateRunGroupRequest>
        void CreateRunGroupAsync(const CreateRunGroupRequestT& request, const CreateRunGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateRunGroup, request, handler, context);
        }

        /**
         * <p>Creates a sequence store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateSequenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSequenceStoreOutcome CreateSequenceStore(const Model::CreateSequenceStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateSequenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSequenceStoreRequestT = Model::CreateSequenceStoreRequest>
        Model::CreateSequenceStoreOutcomeCallable CreateSequenceStoreCallable(const CreateSequenceStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateSequenceStore, request);
        }

        /**
         * An Async wrapper for CreateSequenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSequenceStoreRequestT = Model::CreateSequenceStoreRequest>
        void CreateSequenceStoreAsync(const CreateSequenceStoreRequestT& request, const CreateSequenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateSequenceStore, request, handler, context);
        }

        /**
         * <p> Creates a share offer that can be accepted outside the account by a
         * subscriber. The share is created by the owner and accepted by the principal
         * subscriber. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateShareOutcome CreateShare(const Model::CreateShareRequest& request) const;

        /**
         * A Callable wrapper for CreateShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateShareRequestT = Model::CreateShareRequest>
        Model::CreateShareOutcomeCallable CreateShareCallable(const CreateShareRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateShare, request);
        }

        /**
         * An Async wrapper for CreateShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateShareRequestT = Model::CreateShareRequest>
        void CreateShareAsync(const CreateShareRequestT& request, const CreateShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateShare, request, handler, context);
        }

        /**
         * <p>Creates a variant store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateVariantStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVariantStoreOutcome CreateVariantStore(const Model::CreateVariantStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateVariantStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVariantStoreRequestT = Model::CreateVariantStoreRequest>
        Model::CreateVariantStoreOutcomeCallable CreateVariantStoreCallable(const CreateVariantStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateVariantStore, request);
        }

        /**
         * An Async wrapper for CreateVariantStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVariantStoreRequestT = Model::CreateVariantStoreRequest>
        void CreateVariantStoreAsync(const CreateVariantStoreRequestT& request, const CreateVariantStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateVariantStore, request, handler, context);
        }

        /**
         * <p>Creates a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const CreateWorkflowRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateWorkflow, request);
        }

        /**
         * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        void CreateWorkflowAsync(const CreateWorkflowRequestT& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateWorkflow, request, handler, context);
        }

        /**
         * <p>Deletes an annotation store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteAnnotationStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnnotationStoreOutcome DeleteAnnotationStore(const Model::DeleteAnnotationStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnnotationStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAnnotationStoreRequestT = Model::DeleteAnnotationStoreRequest>
        Model::DeleteAnnotationStoreOutcomeCallable DeleteAnnotationStoreCallable(const DeleteAnnotationStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteAnnotationStore, request);
        }

        /**
         * An Async wrapper for DeleteAnnotationStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnnotationStoreRequestT = Model::DeleteAnnotationStoreRequest>
        void DeleteAnnotationStoreAsync(const DeleteAnnotationStoreRequestT& request, const DeleteAnnotationStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteAnnotationStore, request, handler, context);
        }

        /**
         * <p> Deletes one or multiple versions of an annotation store. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteAnnotationStoreVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnnotationStoreVersionsOutcome DeleteAnnotationStoreVersions(const Model::DeleteAnnotationStoreVersionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnnotationStoreVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAnnotationStoreVersionsRequestT = Model::DeleteAnnotationStoreVersionsRequest>
        Model::DeleteAnnotationStoreVersionsOutcomeCallable DeleteAnnotationStoreVersionsCallable(const DeleteAnnotationStoreVersionsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteAnnotationStoreVersions, request);
        }

        /**
         * An Async wrapper for DeleteAnnotationStoreVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnnotationStoreVersionsRequestT = Model::DeleteAnnotationStoreVersionsRequest>
        void DeleteAnnotationStoreVersionsAsync(const DeleteAnnotationStoreVersionsRequestT& request, const DeleteAnnotationStoreVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteAnnotationStoreVersions, request, handler, context);
        }

        /**
         * <p>Deletes a genome reference.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteReference">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReferenceOutcome DeleteReference(const Model::DeleteReferenceRequest& request) const;

        /**
         * A Callable wrapper for DeleteReference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReferenceRequestT = Model::DeleteReferenceRequest>
        Model::DeleteReferenceOutcomeCallable DeleteReferenceCallable(const DeleteReferenceRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteReference, request);
        }

        /**
         * An Async wrapper for DeleteReference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReferenceRequestT = Model::DeleteReferenceRequest>
        void DeleteReferenceAsync(const DeleteReferenceRequestT& request, const DeleteReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteReference, request, handler, context);
        }

        /**
         * <p>Deletes a genome reference store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteReferenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReferenceStoreOutcome DeleteReferenceStore(const Model::DeleteReferenceStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteReferenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReferenceStoreRequestT = Model::DeleteReferenceStoreRequest>
        Model::DeleteReferenceStoreOutcomeCallable DeleteReferenceStoreCallable(const DeleteReferenceStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteReferenceStore, request);
        }

        /**
         * An Async wrapper for DeleteReferenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReferenceStoreRequestT = Model::DeleteReferenceStoreRequest>
        void DeleteReferenceStoreAsync(const DeleteReferenceStoreRequestT& request, const DeleteReferenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteReferenceStore, request, handler, context);
        }

        /**
         * <p>Deletes a workflow run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteRun">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRunOutcome DeleteRun(const Model::DeleteRunRequest& request) const;

        /**
         * A Callable wrapper for DeleteRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRunRequestT = Model::DeleteRunRequest>
        Model::DeleteRunOutcomeCallable DeleteRunCallable(const DeleteRunRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteRun, request);
        }

        /**
         * An Async wrapper for DeleteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRunRequestT = Model::DeleteRunRequest>
        void DeleteRunAsync(const DeleteRunRequestT& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteRun, request, handler, context);
        }

        /**
         * <p>Deletes a workflow run group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteRunGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRunGroupOutcome DeleteRunGroup(const Model::DeleteRunGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteRunGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRunGroupRequestT = Model::DeleteRunGroupRequest>
        Model::DeleteRunGroupOutcomeCallable DeleteRunGroupCallable(const DeleteRunGroupRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteRunGroup, request);
        }

        /**
         * An Async wrapper for DeleteRunGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRunGroupRequestT = Model::DeleteRunGroupRequest>
        void DeleteRunGroupAsync(const DeleteRunGroupRequestT& request, const DeleteRunGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteRunGroup, request, handler, context);
        }

        /**
         * <p>Deletes a sequence store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteSequenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSequenceStoreOutcome DeleteSequenceStore(const Model::DeleteSequenceStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteSequenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSequenceStoreRequestT = Model::DeleteSequenceStoreRequest>
        Model::DeleteSequenceStoreOutcomeCallable DeleteSequenceStoreCallable(const DeleteSequenceStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteSequenceStore, request);
        }

        /**
         * An Async wrapper for DeleteSequenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSequenceStoreRequestT = Model::DeleteSequenceStoreRequest>
        void DeleteSequenceStoreAsync(const DeleteSequenceStoreRequestT& request, const DeleteSequenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteSequenceStore, request, handler, context);
        }

        /**
         * <p> Deletes a share of an analytics store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteShareOutcome DeleteShare(const Model::DeleteShareRequest& request) const;

        /**
         * A Callable wrapper for DeleteShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteShareRequestT = Model::DeleteShareRequest>
        Model::DeleteShareOutcomeCallable DeleteShareCallable(const DeleteShareRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteShare, request);
        }

        /**
         * An Async wrapper for DeleteShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteShareRequestT = Model::DeleteShareRequest>
        void DeleteShareAsync(const DeleteShareRequestT& request, const DeleteShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteShare, request, handler, context);
        }

        /**
         * <p>Deletes a variant store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteVariantStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVariantStoreOutcome DeleteVariantStore(const Model::DeleteVariantStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteVariantStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVariantStoreRequestT = Model::DeleteVariantStoreRequest>
        Model::DeleteVariantStoreOutcomeCallable DeleteVariantStoreCallable(const DeleteVariantStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteVariantStore, request);
        }

        /**
         * An Async wrapper for DeleteVariantStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVariantStoreRequestT = Model::DeleteVariantStoreRequest>
        void DeleteVariantStoreAsync(const DeleteVariantStoreRequestT& request, const DeleteVariantStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteVariantStore, request, handler, context);
        }

        /**
         * <p>Deletes a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const DeleteWorkflowRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteWorkflow, request);
        }

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        void DeleteWorkflowAsync(const DeleteWorkflowRequestT& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteWorkflow, request, handler, context);
        }

        /**
         * <p>Gets information about an annotation import job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetAnnotationImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnnotationImportJobOutcome GetAnnotationImportJob(const Model::GetAnnotationImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetAnnotationImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnnotationImportJobRequestT = Model::GetAnnotationImportJobRequest>
        Model::GetAnnotationImportJobOutcomeCallable GetAnnotationImportJobCallable(const GetAnnotationImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetAnnotationImportJob, request);
        }

        /**
         * An Async wrapper for GetAnnotationImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnnotationImportJobRequestT = Model::GetAnnotationImportJobRequest>
        void GetAnnotationImportJobAsync(const GetAnnotationImportJobRequestT& request, const GetAnnotationImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetAnnotationImportJob, request, handler, context);
        }

        /**
         * <p>Gets information about an annotation store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetAnnotationStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnnotationStoreOutcome GetAnnotationStore(const Model::GetAnnotationStoreRequest& request) const;

        /**
         * A Callable wrapper for GetAnnotationStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnnotationStoreRequestT = Model::GetAnnotationStoreRequest>
        Model::GetAnnotationStoreOutcomeCallable GetAnnotationStoreCallable(const GetAnnotationStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetAnnotationStore, request);
        }

        /**
         * An Async wrapper for GetAnnotationStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnnotationStoreRequestT = Model::GetAnnotationStoreRequest>
        void GetAnnotationStoreAsync(const GetAnnotationStoreRequestT& request, const GetAnnotationStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetAnnotationStore, request, handler, context);
        }

        /**
         * <p> Retrieves the metadata for an annotation store version. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetAnnotationStoreVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnnotationStoreVersionOutcome GetAnnotationStoreVersion(const Model::GetAnnotationStoreVersionRequest& request) const;

        /**
         * A Callable wrapper for GetAnnotationStoreVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnnotationStoreVersionRequestT = Model::GetAnnotationStoreVersionRequest>
        Model::GetAnnotationStoreVersionOutcomeCallable GetAnnotationStoreVersionCallable(const GetAnnotationStoreVersionRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetAnnotationStoreVersion, request);
        }

        /**
         * An Async wrapper for GetAnnotationStoreVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnnotationStoreVersionRequestT = Model::GetAnnotationStoreVersionRequest>
        void GetAnnotationStoreVersionAsync(const GetAnnotationStoreVersionRequestT& request, const GetAnnotationStoreVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetAnnotationStoreVersion, request, handler, context);
        }

        /**
         * <p>Gets a file from a read set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetOutcome GetReadSet(const Model::GetReadSetRequest& request) const;

        /**
         * A Callable wrapper for GetReadSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReadSetRequestT = Model::GetReadSetRequest>
        Model::GetReadSetOutcomeCallable GetReadSetCallable(const GetReadSetRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReadSet, request);
        }

        /**
         * An Async wrapper for GetReadSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReadSetRequestT = Model::GetReadSetRequest>
        void GetReadSetAsync(const GetReadSetRequestT& request, const GetReadSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReadSet, request, handler, context);
        }

        /**
         * <p>Gets information about a read set activation job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSetActivationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetActivationJobOutcome GetReadSetActivationJob(const Model::GetReadSetActivationJobRequest& request) const;

        /**
         * A Callable wrapper for GetReadSetActivationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReadSetActivationJobRequestT = Model::GetReadSetActivationJobRequest>
        Model::GetReadSetActivationJobOutcomeCallable GetReadSetActivationJobCallable(const GetReadSetActivationJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReadSetActivationJob, request);
        }

        /**
         * An Async wrapper for GetReadSetActivationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReadSetActivationJobRequestT = Model::GetReadSetActivationJobRequest>
        void GetReadSetActivationJobAsync(const GetReadSetActivationJobRequestT& request, const GetReadSetActivationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReadSetActivationJob, request, handler, context);
        }

        /**
         * <p>Gets information about a read set export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetExportJobOutcome GetReadSetExportJob(const Model::GetReadSetExportJobRequest& request) const;

        /**
         * A Callable wrapper for GetReadSetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReadSetExportJobRequestT = Model::GetReadSetExportJobRequest>
        Model::GetReadSetExportJobOutcomeCallable GetReadSetExportJobCallable(const GetReadSetExportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReadSetExportJob, request);
        }

        /**
         * An Async wrapper for GetReadSetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReadSetExportJobRequestT = Model::GetReadSetExportJobRequest>
        void GetReadSetExportJobAsync(const GetReadSetExportJobRequestT& request, const GetReadSetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReadSetExportJob, request, handler, context);
        }

        /**
         * <p>Gets information about a read set import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetImportJobOutcome GetReadSetImportJob(const Model::GetReadSetImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetReadSetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReadSetImportJobRequestT = Model::GetReadSetImportJobRequest>
        Model::GetReadSetImportJobOutcomeCallable GetReadSetImportJobCallable(const GetReadSetImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReadSetImportJob, request);
        }

        /**
         * An Async wrapper for GetReadSetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReadSetImportJobRequestT = Model::GetReadSetImportJobRequest>
        void GetReadSetImportJobAsync(const GetReadSetImportJobRequestT& request, const GetReadSetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReadSetImportJob, request, handler, context);
        }

        /**
         * <p>Gets details about a read set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetMetadataOutcome GetReadSetMetadata(const Model::GetReadSetMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetReadSetMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReadSetMetadataRequestT = Model::GetReadSetMetadataRequest>
        Model::GetReadSetMetadataOutcomeCallable GetReadSetMetadataCallable(const GetReadSetMetadataRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReadSetMetadata, request);
        }

        /**
         * An Async wrapper for GetReadSetMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReadSetMetadataRequestT = Model::GetReadSetMetadataRequest>
        void GetReadSetMetadataAsync(const GetReadSetMetadataRequestT& request, const GetReadSetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReadSetMetadata, request, handler, context);
        }

        /**
         * <p>Gets a reference file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReferenceOutcome GetReference(const Model::GetReferenceRequest& request) const;

        /**
         * A Callable wrapper for GetReference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReferenceRequestT = Model::GetReferenceRequest>
        Model::GetReferenceOutcomeCallable GetReferenceCallable(const GetReferenceRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReference, request);
        }

        /**
         * An Async wrapper for GetReference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReferenceRequestT = Model::GetReferenceRequest>
        void GetReferenceAsync(const GetReferenceRequestT& request, const GetReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReference, request, handler, context);
        }

        /**
         * <p>Gets information about a reference import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReferenceImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReferenceImportJobOutcome GetReferenceImportJob(const Model::GetReferenceImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetReferenceImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReferenceImportJobRequestT = Model::GetReferenceImportJobRequest>
        Model::GetReferenceImportJobOutcomeCallable GetReferenceImportJobCallable(const GetReferenceImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReferenceImportJob, request);
        }

        /**
         * An Async wrapper for GetReferenceImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReferenceImportJobRequestT = Model::GetReferenceImportJobRequest>
        void GetReferenceImportJobAsync(const GetReferenceImportJobRequestT& request, const GetReferenceImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReferenceImportJob, request, handler, context);
        }

        /**
         * <p>Gets information about a genome reference's metadata.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReferenceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReferenceMetadataOutcome GetReferenceMetadata(const Model::GetReferenceMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetReferenceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReferenceMetadataRequestT = Model::GetReferenceMetadataRequest>
        Model::GetReferenceMetadataOutcomeCallable GetReferenceMetadataCallable(const GetReferenceMetadataRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReferenceMetadata, request);
        }

        /**
         * An Async wrapper for GetReferenceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReferenceMetadataRequestT = Model::GetReferenceMetadataRequest>
        void GetReferenceMetadataAsync(const GetReferenceMetadataRequestT& request, const GetReferenceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReferenceMetadata, request, handler, context);
        }

        /**
         * <p>Gets information about a reference store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReferenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReferenceStoreOutcome GetReferenceStore(const Model::GetReferenceStoreRequest& request) const;

        /**
         * A Callable wrapper for GetReferenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReferenceStoreRequestT = Model::GetReferenceStoreRequest>
        Model::GetReferenceStoreOutcomeCallable GetReferenceStoreCallable(const GetReferenceStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetReferenceStore, request);
        }

        /**
         * An Async wrapper for GetReferenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReferenceStoreRequestT = Model::GetReferenceStoreRequest>
        void GetReferenceStoreAsync(const GetReferenceStoreRequestT& request, const GetReferenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetReferenceStore, request, handler, context);
        }

        /**
         * <p>Gets information about a workflow run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetRun">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRunOutcome GetRun(const Model::GetRunRequest& request) const;

        /**
         * A Callable wrapper for GetRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRunRequestT = Model::GetRunRequest>
        Model::GetRunOutcomeCallable GetRunCallable(const GetRunRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetRun, request);
        }

        /**
         * An Async wrapper for GetRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRunRequestT = Model::GetRunRequest>
        void GetRunAsync(const GetRunRequestT& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetRun, request, handler, context);
        }

        /**
         * <p>Gets information about a workflow run group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetRunGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunGroupOutcome GetRunGroup(const Model::GetRunGroupRequest& request) const;

        /**
         * A Callable wrapper for GetRunGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRunGroupRequestT = Model::GetRunGroupRequest>
        Model::GetRunGroupOutcomeCallable GetRunGroupCallable(const GetRunGroupRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetRunGroup, request);
        }

        /**
         * An Async wrapper for GetRunGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRunGroupRequestT = Model::GetRunGroupRequest>
        void GetRunGroupAsync(const GetRunGroupRequestT& request, const GetRunGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetRunGroup, request, handler, context);
        }

        /**
         * <p>Gets information about a workflow run task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetRunTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunTaskOutcome GetRunTask(const Model::GetRunTaskRequest& request) const;

        /**
         * A Callable wrapper for GetRunTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRunTaskRequestT = Model::GetRunTaskRequest>
        Model::GetRunTaskOutcomeCallable GetRunTaskCallable(const GetRunTaskRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetRunTask, request);
        }

        /**
         * An Async wrapper for GetRunTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRunTaskRequestT = Model::GetRunTaskRequest>
        void GetRunTaskAsync(const GetRunTaskRequestT& request, const GetRunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetRunTask, request, handler, context);
        }

        /**
         * <p>Gets information about a sequence store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetSequenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSequenceStoreOutcome GetSequenceStore(const Model::GetSequenceStoreRequest& request) const;

        /**
         * A Callable wrapper for GetSequenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSequenceStoreRequestT = Model::GetSequenceStoreRequest>
        Model::GetSequenceStoreOutcomeCallable GetSequenceStoreCallable(const GetSequenceStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetSequenceStore, request);
        }

        /**
         * An Async wrapper for GetSequenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSequenceStoreRequestT = Model::GetSequenceStoreRequest>
        void GetSequenceStoreAsync(const GetSequenceStoreRequestT& request, const GetSequenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetSequenceStore, request, handler, context);
        }

        /**
         * <p> Retrieves the metadata for a share. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetShare">AWS API
         * Reference</a></p>
         */
        virtual Model::GetShareOutcome GetShare(const Model::GetShareRequest& request) const;

        /**
         * A Callable wrapper for GetShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetShareRequestT = Model::GetShareRequest>
        Model::GetShareOutcomeCallable GetShareCallable(const GetShareRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetShare, request);
        }

        /**
         * An Async wrapper for GetShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetShareRequestT = Model::GetShareRequest>
        void GetShareAsync(const GetShareRequestT& request, const GetShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetShare, request, handler, context);
        }

        /**
         * <p>Gets information about a variant import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetVariantImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVariantImportJobOutcome GetVariantImportJob(const Model::GetVariantImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetVariantImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVariantImportJobRequestT = Model::GetVariantImportJobRequest>
        Model::GetVariantImportJobOutcomeCallable GetVariantImportJobCallable(const GetVariantImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetVariantImportJob, request);
        }

        /**
         * An Async wrapper for GetVariantImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVariantImportJobRequestT = Model::GetVariantImportJobRequest>
        void GetVariantImportJobAsync(const GetVariantImportJobRequestT& request, const GetVariantImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetVariantImportJob, request, handler, context);
        }

        /**
         * <p>Gets information about a variant store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetVariantStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVariantStoreOutcome GetVariantStore(const Model::GetVariantStoreRequest& request) const;

        /**
         * A Callable wrapper for GetVariantStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVariantStoreRequestT = Model::GetVariantStoreRequest>
        Model::GetVariantStoreOutcomeCallable GetVariantStoreCallable(const GetVariantStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetVariantStore, request);
        }

        /**
         * An Async wrapper for GetVariantStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVariantStoreRequestT = Model::GetVariantStoreRequest>
        void GetVariantStoreAsync(const GetVariantStoreRequestT& request, const GetVariantStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetVariantStore, request, handler, context);
        }

        /**
         * <p>Gets information about a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const GetWorkflowRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetWorkflow, request);
        }

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        void GetWorkflowAsync(const GetWorkflowRequestT& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetWorkflow, request, handler, context);
        }

        /**
         * <p>Retrieves a list of annotation import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnnotationImportJobsOutcome ListAnnotationImportJobs(const Model::ListAnnotationImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAnnotationImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnnotationImportJobsRequestT = Model::ListAnnotationImportJobsRequest>
        Model::ListAnnotationImportJobsOutcomeCallable ListAnnotationImportJobsCallable(const ListAnnotationImportJobsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListAnnotationImportJobs, request);
        }

        /**
         * An Async wrapper for ListAnnotationImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnnotationImportJobsRequestT = Model::ListAnnotationImportJobsRequest>
        void ListAnnotationImportJobsAsync(const ListAnnotationImportJobsRequestT& request, const ListAnnotationImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListAnnotationImportJobs, request, handler, context);
        }

        /**
         * <p> Lists the versions of an annotation store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationStoreVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnnotationStoreVersionsOutcome ListAnnotationStoreVersions(const Model::ListAnnotationStoreVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAnnotationStoreVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnnotationStoreVersionsRequestT = Model::ListAnnotationStoreVersionsRequest>
        Model::ListAnnotationStoreVersionsOutcomeCallable ListAnnotationStoreVersionsCallable(const ListAnnotationStoreVersionsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListAnnotationStoreVersions, request);
        }

        /**
         * An Async wrapper for ListAnnotationStoreVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnnotationStoreVersionsRequestT = Model::ListAnnotationStoreVersionsRequest>
        void ListAnnotationStoreVersionsAsync(const ListAnnotationStoreVersionsRequestT& request, const ListAnnotationStoreVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListAnnotationStoreVersions, request, handler, context);
        }

        /**
         * <p>Retrieves a list of annotation stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnnotationStoresOutcome ListAnnotationStores(const Model::ListAnnotationStoresRequest& request) const;

        /**
         * A Callable wrapper for ListAnnotationStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnnotationStoresRequestT = Model::ListAnnotationStoresRequest>
        Model::ListAnnotationStoresOutcomeCallable ListAnnotationStoresCallable(const ListAnnotationStoresRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListAnnotationStores, request);
        }

        /**
         * An Async wrapper for ListAnnotationStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnnotationStoresRequestT = Model::ListAnnotationStoresRequest>
        void ListAnnotationStoresAsync(const ListAnnotationStoresRequestT& request, const ListAnnotationStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListAnnotationStores, request, handler, context);
        }

        /**
         * <p> Lists multipart read set uploads and for in progress uploads. Once the
         * upload is completed, a read set is created and the upload will no longer be
         * returned in the respone. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListMultipartReadSetUploads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultipartReadSetUploadsOutcome ListMultipartReadSetUploads(const Model::ListMultipartReadSetUploadsRequest& request) const;

        /**
         * A Callable wrapper for ListMultipartReadSetUploads that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMultipartReadSetUploadsRequestT = Model::ListMultipartReadSetUploadsRequest>
        Model::ListMultipartReadSetUploadsOutcomeCallable ListMultipartReadSetUploadsCallable(const ListMultipartReadSetUploadsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListMultipartReadSetUploads, request);
        }

        /**
         * An Async wrapper for ListMultipartReadSetUploads that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMultipartReadSetUploadsRequestT = Model::ListMultipartReadSetUploadsRequest>
        void ListMultipartReadSetUploadsAsync(const ListMultipartReadSetUploadsRequestT& request, const ListMultipartReadSetUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListMultipartReadSetUploads, request, handler, context);
        }

        /**
         * <p>Retrieves a list of read set activation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSetActivationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetActivationJobsOutcome ListReadSetActivationJobs(const Model::ListReadSetActivationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSetActivationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReadSetActivationJobsRequestT = Model::ListReadSetActivationJobsRequest>
        Model::ListReadSetActivationJobsOutcomeCallable ListReadSetActivationJobsCallable(const ListReadSetActivationJobsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListReadSetActivationJobs, request);
        }

        /**
         * An Async wrapper for ListReadSetActivationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReadSetActivationJobsRequestT = Model::ListReadSetActivationJobsRequest>
        void ListReadSetActivationJobsAsync(const ListReadSetActivationJobsRequestT& request, const ListReadSetActivationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListReadSetActivationJobs, request, handler, context);
        }

        /**
         * <p>Retrieves a list of read set export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetExportJobsOutcome ListReadSetExportJobs(const Model::ListReadSetExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSetExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReadSetExportJobsRequestT = Model::ListReadSetExportJobsRequest>
        Model::ListReadSetExportJobsOutcomeCallable ListReadSetExportJobsCallable(const ListReadSetExportJobsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListReadSetExportJobs, request);
        }

        /**
         * An Async wrapper for ListReadSetExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReadSetExportJobsRequestT = Model::ListReadSetExportJobsRequest>
        void ListReadSetExportJobsAsync(const ListReadSetExportJobsRequestT& request, const ListReadSetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListReadSetExportJobs, request, handler, context);
        }

        /**
         * <p>Retrieves a list of read set import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetImportJobsOutcome ListReadSetImportJobs(const Model::ListReadSetImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSetImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReadSetImportJobsRequestT = Model::ListReadSetImportJobsRequest>
        Model::ListReadSetImportJobsOutcomeCallable ListReadSetImportJobsCallable(const ListReadSetImportJobsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListReadSetImportJobs, request);
        }

        /**
         * An Async wrapper for ListReadSetImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReadSetImportJobsRequestT = Model::ListReadSetImportJobsRequest>
        void ListReadSetImportJobsAsync(const ListReadSetImportJobsRequestT& request, const ListReadSetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListReadSetImportJobs, request, handler, context);
        }

        /**
         * <p> This operation will list all parts in a requested multipart upload for a
         * sequence store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSetUploadParts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetUploadPartsOutcome ListReadSetUploadParts(const Model::ListReadSetUploadPartsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSetUploadParts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReadSetUploadPartsRequestT = Model::ListReadSetUploadPartsRequest>
        Model::ListReadSetUploadPartsOutcomeCallable ListReadSetUploadPartsCallable(const ListReadSetUploadPartsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListReadSetUploadParts, request);
        }

        /**
         * An Async wrapper for ListReadSetUploadParts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReadSetUploadPartsRequestT = Model::ListReadSetUploadPartsRequest>
        void ListReadSetUploadPartsAsync(const ListReadSetUploadPartsRequestT& request, const ListReadSetUploadPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListReadSetUploadParts, request, handler, context);
        }

        /**
         * <p>Retrieves a list of read sets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetsOutcome ListReadSets(const Model::ListReadSetsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReadSetsRequestT = Model::ListReadSetsRequest>
        Model::ListReadSetsOutcomeCallable ListReadSetsCallable(const ListReadSetsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListReadSets, request);
        }

        /**
         * An Async wrapper for ListReadSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReadSetsRequestT = Model::ListReadSetsRequest>
        void ListReadSetsAsync(const ListReadSetsRequestT& request, const ListReadSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListReadSets, request, handler, context);
        }

        /**
         * <p>Retrieves a list of reference import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReferenceImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReferenceImportJobsOutcome ListReferenceImportJobs(const Model::ListReferenceImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReferenceImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReferenceImportJobsRequestT = Model::ListReferenceImportJobsRequest>
        Model::ListReferenceImportJobsOutcomeCallable ListReferenceImportJobsCallable(const ListReferenceImportJobsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListReferenceImportJobs, request);
        }

        /**
         * An Async wrapper for ListReferenceImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReferenceImportJobsRequestT = Model::ListReferenceImportJobsRequest>
        void ListReferenceImportJobsAsync(const ListReferenceImportJobsRequestT& request, const ListReferenceImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListReferenceImportJobs, request, handler, context);
        }

        /**
         * <p>Retrieves a list of reference stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReferenceStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReferenceStoresOutcome ListReferenceStores(const Model::ListReferenceStoresRequest& request) const;

        /**
         * A Callable wrapper for ListReferenceStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReferenceStoresRequestT = Model::ListReferenceStoresRequest>
        Model::ListReferenceStoresOutcomeCallable ListReferenceStoresCallable(const ListReferenceStoresRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListReferenceStores, request);
        }

        /**
         * An Async wrapper for ListReferenceStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReferenceStoresRequestT = Model::ListReferenceStoresRequest>
        void ListReferenceStoresAsync(const ListReferenceStoresRequestT& request, const ListReferenceStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListReferenceStores, request, handler, context);
        }

        /**
         * <p>Retrieves a list of references.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReferencesOutcome ListReferences(const Model::ListReferencesRequest& request) const;

        /**
         * A Callable wrapper for ListReferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReferencesRequestT = Model::ListReferencesRequest>
        Model::ListReferencesOutcomeCallable ListReferencesCallable(const ListReferencesRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListReferences, request);
        }

        /**
         * An Async wrapper for ListReferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReferencesRequestT = Model::ListReferencesRequest>
        void ListReferencesAsync(const ListReferencesRequestT& request, const ListReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListReferences, request, handler, context);
        }

        /**
         * <p>Retrieves a list of run groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRunGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunGroupsOutcome ListRunGroups(const Model::ListRunGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListRunGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRunGroupsRequestT = Model::ListRunGroupsRequest>
        Model::ListRunGroupsOutcomeCallable ListRunGroupsCallable(const ListRunGroupsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListRunGroups, request);
        }

        /**
         * An Async wrapper for ListRunGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRunGroupsRequestT = Model::ListRunGroupsRequest>
        void ListRunGroupsAsync(const ListRunGroupsRequestT& request, const ListRunGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListRunGroups, request, handler, context);
        }

        /**
         * <p>Retrieves a list of tasks for a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRunTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunTasksOutcome ListRunTasks(const Model::ListRunTasksRequest& request) const;

        /**
         * A Callable wrapper for ListRunTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRunTasksRequestT = Model::ListRunTasksRequest>
        Model::ListRunTasksOutcomeCallable ListRunTasksCallable(const ListRunTasksRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListRunTasks, request);
        }

        /**
         * An Async wrapper for ListRunTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRunTasksRequestT = Model::ListRunTasksRequest>
        void ListRunTasksAsync(const ListRunTasksRequestT& request, const ListRunTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListRunTasks, request, handler, context);
        }

        /**
         * <p>Retrieves a list of runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRuns">AWS API
         * Reference</a></p>
         */
        virtual Model::ListRunsOutcome ListRuns(const Model::ListRunsRequest& request) const;

        /**
         * A Callable wrapper for ListRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRunsRequestT = Model::ListRunsRequest>
        Model::ListRunsOutcomeCallable ListRunsCallable(const ListRunsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListRuns, request);
        }

        /**
         * An Async wrapper for ListRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRunsRequestT = Model::ListRunsRequest>
        void ListRunsAsync(const ListRunsRequestT& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListRuns, request, handler, context);
        }

        /**
         * <p>Retrieves a list of sequence stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListSequenceStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSequenceStoresOutcome ListSequenceStores(const Model::ListSequenceStoresRequest& request) const;

        /**
         * A Callable wrapper for ListSequenceStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSequenceStoresRequestT = Model::ListSequenceStoresRequest>
        Model::ListSequenceStoresOutcomeCallable ListSequenceStoresCallable(const ListSequenceStoresRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListSequenceStores, request);
        }

        /**
         * An Async wrapper for ListSequenceStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSequenceStoresRequestT = Model::ListSequenceStoresRequest>
        void ListSequenceStoresAsync(const ListSequenceStoresRequestT& request, const ListSequenceStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListSequenceStores, request, handler, context);
        }

        /**
         * <p> Lists all shares associated with an account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSharesOutcome ListShares(const Model::ListSharesRequest& request) const;

        /**
         * A Callable wrapper for ListShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSharesRequestT = Model::ListSharesRequest>
        Model::ListSharesOutcomeCallable ListSharesCallable(const ListSharesRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListShares, request);
        }

        /**
         * An Async wrapper for ListShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSharesRequestT = Model::ListSharesRequest>
        void ListSharesAsync(const ListSharesRequestT& request, const ListSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListShares, request, handler, context);
        }

        /**
         * <p>Retrieves a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Retrieves a list of variant import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListVariantImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVariantImportJobsOutcome ListVariantImportJobs(const Model::ListVariantImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListVariantImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVariantImportJobsRequestT = Model::ListVariantImportJobsRequest>
        Model::ListVariantImportJobsOutcomeCallable ListVariantImportJobsCallable(const ListVariantImportJobsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListVariantImportJobs, request);
        }

        /**
         * An Async wrapper for ListVariantImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVariantImportJobsRequestT = Model::ListVariantImportJobsRequest>
        void ListVariantImportJobsAsync(const ListVariantImportJobsRequestT& request, const ListVariantImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListVariantImportJobs, request, handler, context);
        }

        /**
         * <p>Retrieves a list of variant stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListVariantStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVariantStoresOutcome ListVariantStores(const Model::ListVariantStoresRequest& request) const;

        /**
         * A Callable wrapper for ListVariantStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVariantStoresRequestT = Model::ListVariantStoresRequest>
        Model::ListVariantStoresOutcomeCallable ListVariantStoresCallable(const ListVariantStoresRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListVariantStores, request);
        }

        /**
         * An Async wrapper for ListVariantStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVariantStoresRequestT = Model::ListVariantStoresRequest>
        void ListVariantStoresAsync(const ListVariantStoresRequestT& request, const ListVariantStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListVariantStores, request, handler, context);
        }

        /**
         * <p>Retrieves a list of workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListWorkflows, request);
        }

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        void ListWorkflowsAsync(const ListWorkflowsRequestT& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListWorkflows, request, handler, context);
        }

        /**
         * <p>Starts an annotation import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartAnnotationImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAnnotationImportJobOutcome StartAnnotationImportJob(const Model::StartAnnotationImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartAnnotationImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAnnotationImportJobRequestT = Model::StartAnnotationImportJobRequest>
        Model::StartAnnotationImportJobOutcomeCallable StartAnnotationImportJobCallable(const StartAnnotationImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::StartAnnotationImportJob, request);
        }

        /**
         * An Async wrapper for StartAnnotationImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAnnotationImportJobRequestT = Model::StartAnnotationImportJobRequest>
        void StartAnnotationImportJobAsync(const StartAnnotationImportJobRequestT& request, const StartAnnotationImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::StartAnnotationImportJob, request, handler, context);
        }

        /**
         * <p>Activates an archived read set. To reduce storage charges, Amazon Omics
         * archives unused read sets after 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReadSetActivationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReadSetActivationJobOutcome StartReadSetActivationJob(const Model::StartReadSetActivationJobRequest& request) const;

        /**
         * A Callable wrapper for StartReadSetActivationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartReadSetActivationJobRequestT = Model::StartReadSetActivationJobRequest>
        Model::StartReadSetActivationJobOutcomeCallable StartReadSetActivationJobCallable(const StartReadSetActivationJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::StartReadSetActivationJob, request);
        }

        /**
         * An Async wrapper for StartReadSetActivationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReadSetActivationJobRequestT = Model::StartReadSetActivationJobRequest>
        void StartReadSetActivationJobAsync(const StartReadSetActivationJobRequestT& request, const StartReadSetActivationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::StartReadSetActivationJob, request, handler, context);
        }

        /**
         * <p>Exports a read set to Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReadSetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReadSetExportJobOutcome StartReadSetExportJob(const Model::StartReadSetExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartReadSetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartReadSetExportJobRequestT = Model::StartReadSetExportJobRequest>
        Model::StartReadSetExportJobOutcomeCallable StartReadSetExportJobCallable(const StartReadSetExportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::StartReadSetExportJob, request);
        }

        /**
         * An Async wrapper for StartReadSetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReadSetExportJobRequestT = Model::StartReadSetExportJobRequest>
        void StartReadSetExportJobAsync(const StartReadSetExportJobRequestT& request, const StartReadSetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::StartReadSetExportJob, request, handler, context);
        }

        /**
         * <p>Starts a read set import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReadSetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReadSetImportJobOutcome StartReadSetImportJob(const Model::StartReadSetImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartReadSetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartReadSetImportJobRequestT = Model::StartReadSetImportJobRequest>
        Model::StartReadSetImportJobOutcomeCallable StartReadSetImportJobCallable(const StartReadSetImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::StartReadSetImportJob, request);
        }

        /**
         * An Async wrapper for StartReadSetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReadSetImportJobRequestT = Model::StartReadSetImportJobRequest>
        void StartReadSetImportJobAsync(const StartReadSetImportJobRequestT& request, const StartReadSetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::StartReadSetImportJob, request, handler, context);
        }

        /**
         * <p>Starts a reference import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReferenceImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReferenceImportJobOutcome StartReferenceImportJob(const Model::StartReferenceImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartReferenceImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartReferenceImportJobRequestT = Model::StartReferenceImportJobRequest>
        Model::StartReferenceImportJobOutcomeCallable StartReferenceImportJobCallable(const StartReferenceImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::StartReferenceImportJob, request);
        }

        /**
         * An Async wrapper for StartReferenceImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReferenceImportJobRequestT = Model::StartReferenceImportJobRequest>
        void StartReferenceImportJobAsync(const StartReferenceImportJobRequestT& request, const StartReferenceImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::StartReferenceImportJob, request, handler, context);
        }

        /**
         * <p>Starts a workflow run. To duplicate a run, specify the run's ID and a role
         * ARN. The remaining parameters are copied from the previous run.</p> <p>The total
         * number of runs in your account is subject to a quota per Region. To avoid
         * needing to delete runs manually, you can set the retention mode to
         * <code>REMOVE</code>. Runs with this setting are deleted automatically when the
         * run quoata is exceeded.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartRun">AWS API
         * Reference</a></p>
         */
        virtual Model::StartRunOutcome StartRun(const Model::StartRunRequest& request) const;

        /**
         * A Callable wrapper for StartRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartRunRequestT = Model::StartRunRequest>
        Model::StartRunOutcomeCallable StartRunCallable(const StartRunRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::StartRun, request);
        }

        /**
         * An Async wrapper for StartRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRunRequestT = Model::StartRunRequest>
        void StartRunAsync(const StartRunRequestT& request, const StartRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::StartRun, request, handler, context);
        }

        /**
         * <p>Starts a variant import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartVariantImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartVariantImportJobOutcome StartVariantImportJob(const Model::StartVariantImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartVariantImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartVariantImportJobRequestT = Model::StartVariantImportJobRequest>
        Model::StartVariantImportJobOutcomeCallable StartVariantImportJobCallable(const StartVariantImportJobRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::StartVariantImportJob, request);
        }

        /**
         * An Async wrapper for StartVariantImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartVariantImportJobRequestT = Model::StartVariantImportJobRequest>
        void StartVariantImportJobAsync(const StartVariantImportJobRequestT& request, const StartVariantImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::StartVariantImportJob, request, handler, context);
        }

        /**
         * <p>Tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an annotation store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateAnnotationStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnnotationStoreOutcome UpdateAnnotationStore(const Model::UpdateAnnotationStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnnotationStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAnnotationStoreRequestT = Model::UpdateAnnotationStoreRequest>
        Model::UpdateAnnotationStoreOutcomeCallable UpdateAnnotationStoreCallable(const UpdateAnnotationStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UpdateAnnotationStore, request);
        }

        /**
         * An Async wrapper for UpdateAnnotationStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAnnotationStoreRequestT = Model::UpdateAnnotationStoreRequest>
        void UpdateAnnotationStoreAsync(const UpdateAnnotationStoreRequestT& request, const UpdateAnnotationStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UpdateAnnotationStore, request, handler, context);
        }

        /**
         * <p> Updates the description of an annotation store version. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateAnnotationStoreVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnnotationStoreVersionOutcome UpdateAnnotationStoreVersion(const Model::UpdateAnnotationStoreVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnnotationStoreVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAnnotationStoreVersionRequestT = Model::UpdateAnnotationStoreVersionRequest>
        Model::UpdateAnnotationStoreVersionOutcomeCallable UpdateAnnotationStoreVersionCallable(const UpdateAnnotationStoreVersionRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UpdateAnnotationStoreVersion, request);
        }

        /**
         * An Async wrapper for UpdateAnnotationStoreVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAnnotationStoreVersionRequestT = Model::UpdateAnnotationStoreVersionRequest>
        void UpdateAnnotationStoreVersionAsync(const UpdateAnnotationStoreVersionRequestT& request, const UpdateAnnotationStoreVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UpdateAnnotationStoreVersion, request, handler, context);
        }

        /**
         * <p>Updates a run group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateRunGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRunGroupOutcome UpdateRunGroup(const Model::UpdateRunGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRunGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRunGroupRequestT = Model::UpdateRunGroupRequest>
        Model::UpdateRunGroupOutcomeCallable UpdateRunGroupCallable(const UpdateRunGroupRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UpdateRunGroup, request);
        }

        /**
         * An Async wrapper for UpdateRunGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRunGroupRequestT = Model::UpdateRunGroupRequest>
        void UpdateRunGroupAsync(const UpdateRunGroupRequestT& request, const UpdateRunGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UpdateRunGroup, request, handler, context);
        }

        /**
         * <p>Updates a variant store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateVariantStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVariantStoreOutcome UpdateVariantStore(const Model::UpdateVariantStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateVariantStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVariantStoreRequestT = Model::UpdateVariantStoreRequest>
        Model::UpdateVariantStoreOutcomeCallable UpdateVariantStoreCallable(const UpdateVariantStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UpdateVariantStore, request);
        }

        /**
         * An Async wrapper for UpdateVariantStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVariantStoreRequestT = Model::UpdateVariantStoreRequest>
        void UpdateVariantStoreAsync(const UpdateVariantStoreRequestT& request, const UpdateVariantStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UpdateVariantStore, request, handler, context);
        }

        /**
         * <p>Updates a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkflowRequestT = Model::UpdateWorkflowRequest>
        Model::UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const UpdateWorkflowRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UpdateWorkflow, request);
        }

        /**
         * An Async wrapper for UpdateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkflowRequestT = Model::UpdateWorkflowRequest>
        void UpdateWorkflowAsync(const UpdateWorkflowRequestT& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UpdateWorkflow, request, handler, context);
        }

        /**
         * <p> This operation uploads a specific part of a read set. If you upload a new
         * part using a previously used part number, the previously uploaded part will be
         * overwritten. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UploadReadSetPart">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadReadSetPartOutcome UploadReadSetPart(const Model::UploadReadSetPartRequest& request) const;

        /**
         * A Callable wrapper for UploadReadSetPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UploadReadSetPartRequestT = Model::UploadReadSetPartRequest>
        Model::UploadReadSetPartOutcomeCallable UploadReadSetPartCallable(const UploadReadSetPartRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UploadReadSetPart, request);
        }

        /**
         * An Async wrapper for UploadReadSetPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UploadReadSetPartRequestT = Model::UploadReadSetPartRequest>
        void UploadReadSetPartAsync(const UploadReadSetPartRequestT& request, const UploadReadSetPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UploadReadSetPart, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OmicsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OmicsClient>;
      void init(const OmicsClientConfiguration& clientConfiguration);

      OmicsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OmicsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Omics
} // namespace Aws
