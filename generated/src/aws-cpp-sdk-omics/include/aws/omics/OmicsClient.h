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
   * <p>Amazon Web Services HealthOmics is a service that helps users such as
   * bioinformaticians, researchers, and scientists to store, query, analyze, and
   * generate insights from genomics and other biological data. It simplifies and
   * accelerates the process of storing and analyzing genomic information for Amazon
   * Web Services.</p> <p>For an introduction to the service, see <a
   * href="https://docs.aws.amazon.com/omics/latest/dev/what-is-healthomics.html">What
   * is Amazon Web Services HealthOmics?</a> in the <i>Amazon Web Services
   * HealthOmics User Guide</i>.</p>
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
         * <p>Stops a multipart read set upload into a sequence store and returns a
         * response with no body if the operation is successful. To confirm that a
         * multipart read set upload has been stopped, use the
         * <code>ListMultipartReadSetUploads</code> API operation to view all active
         * multipart read set uploads.</p><p><h3>See Also:</h3>   <a
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
         * <p>Accept a resource share request.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes one or more read sets. If the operation is successful, it returns a
         * response with no body. If there is an error with deleting one of the read sets,
         * the operation returns an error list. If the operation successfully deletes only
         * a subset of files, it will return an error list for the remaining files that
         * fail to be deleted. There is a limit of 100 read sets that can be deleted in
         * each <code>BatchDeleteReadSet</code> API call.</p><p><h3>See Also:</h3>   <a
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
         * <p>Cancels a run using its ID and returns a response with no body if the
         * operation is successful. To confirm that the run has been cancelled, use the
         * <code>ListRuns</code> API operation to check that it is no longer
         * listed.</p><p><h3>See Also:</h3>   <a
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
         * <p>Completes a multipart read set upload into a sequence store after you have
         * initiated the upload process with <code>CreateMultipartReadSetUpload</code> and
         * uploaded all read set parts using <code>UploadReadSetPart</code>. You must
         * specify the parts you uploaded using the parts parameter. If the operation is
         * successful, it returns the read set ID(s) of the uploaded read set(s).</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/synchronous-uploads.html">Direct
         * upload to a sequence store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Initiates a multipart read set upload for uploading partitioned source files
         * into a sequence store. You can directly import source files from an EC2 instance
         * and other local compute, or from an S3 bucket. To separate these source files
         * into parts, use the <code>split</code> operation. Each part cannot be larger
         * than 100 MB. If the operation is successful, it provides an
         * <code>uploadId</code> which is required by the <code>UploadReadSetPart</code>
         * API operation to upload parts into a sequence store.</p> <p>To continue
         * uploading a multipart read set into your sequence store, you must use the
         * <code>UploadReadSetPart</code> API operation to upload each part individually
         * following the steps below:</p> <ul> <li> <p>Specify the <code>uploadId</code>
         * obtained from the previous call to
         * <code>CreateMultipartReadSetUpload</code>.</p> </li> <li> <p>Upload parts for
         * that <code>uploadId</code>.</p> </li> </ul> <p>When you have finished uploading
         * parts, use the <code>CompleteMultipartReadSetUpload</code> API to complete the
         * multipart read set upload and to retrieve the final read set IDs in the
         * response.</p> <p>To learn more about creating parts and the <code>split</code>
         * operation, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/synchronous-uploads.html">Direct
         * upload to a sequence store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a reference store and returns metadata in JSON format. Reference
         * stores are used to store reference genomes in FASTA format. A reference store is
         * created when the first reference genome is imported. To import additional
         * reference genomes from an Amazon S3 bucket, use the
         * <code>StartReferenceImportJob</code> API operation. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/create-reference-store.html">Creating
         * a HealthOmics reference store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a run cache to store and reference task outputs from completed
         * private runs. Specify an Amazon S3 location where Amazon Web Services
         * HealthOmics saves the cached data. This data must be immediately accessible and
         * not in an archived state. You can save intermediate task files to a run cache if
         * they are declared as task outputs in the workflow definition file.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflows-call-caching.html">Call
         * caching</a> and <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-cache-create.html">Creating
         * a run cache</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateRunCache">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRunCacheOutcome CreateRunCache(const Model::CreateRunCacheRequest& request) const;

        /**
         * A Callable wrapper for CreateRunCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRunCacheRequestT = Model::CreateRunCacheRequest>
        Model::CreateRunCacheOutcomeCallable CreateRunCacheCallable(const CreateRunCacheRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateRunCache, request);
        }

        /**
         * An Async wrapper for CreateRunCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRunCacheRequestT = Model::CreateRunCacheRequest>
        void CreateRunCacheAsync(const CreateRunCacheRequestT& request, const CreateRunCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateRunCache, request, handler, context);
        }

        /**
         * <p>Creates a run group to limit the compute resources for the runs that are
         * added to the group. Returns an ARN, ID, and tags for the run
         * group.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a sequence store and returns its metadata. Sequence stores are used
         * to store sequence data files called read sets that are saved in FASTQ, BAM,
         * uBAM, or CRAM formats. For aligned formats (BAM and CRAM), a sequence store can
         * only use one reference genome. For unaligned formats (FASTQ and uBAM), a
         * reference genome is not required. You can create multiple sequence stores per
         * region per account. </p> <p>The following are optional parameters you can
         * specify for your sequence store:</p> <ul> <li> <p>Use
         * <code>s3AccessConfig</code> to configure your sequence store with S3 access logs
         * (recommended).</p> </li> <li> <p>Use <code>sseConfig</code> to define your own
         * KMS key for encryption.</p> </li> <li> <p>Use <code>eTagAlgorithmFamily</code>
         * to define which algorithm to use for the HealthOmics eTag on objects.</p> </li>
         * <li> <p>Use <code>fallbackLocation</code> to define a backup location for
         * storing files that have failed a direct upload.</p> </li> <li> <p>Use
         * <code>propagatedSetLevelTags</code> to configure tags that propagate to all
         * objects in your store.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/create-sequence-store.html">Creating
         * a HealthOmics sequence store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a cross-account shared resource. The resource owner makes an offer to
         * share the resource with the principal subscriber (an AWS user with a different
         * account than the resource owner).</p> <p>The following resources support
         * cross-account sharing:</p> <ul> <li> <p>HealthOmics variant stores</p> </li>
         * <li> <p>HealthOmics annotation stores</p> </li> <li> <p>Private workflows</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Creates a private workflow. Before you create a private workflow, you must
         * create and configure these required resources:</p> <ul> <li> <p> <i>Workflow
         * definition files</i>: Define your workflow in one or more workflow definition
         * files, written in WDL, Nextflow, or CWL. The workflow definition specifies the
         * inputs and outputs for runs that use the workflow. It also includes
         * specifications for the runs and run tasks for your workflow, including compute
         * and memory requirements. The workflow definition file must be in .zip
         * format.</p> </li> <li> <p>(Optional) <i>Parameter template</i>: You can create a
         * parameter template file that defines the run parameters, or Amazon Web Services
         * HealthOmics can generate the parameter template for you.</p> </li> <li> <p>
         * <i>ECR container images</i>: Create container images for the workflow in a
         * private ECR repository, or synchronize images from a supported upstream registry
         * with your Amazon ECR private repository.</p> </li> <li> <p>(Optional)
         * <i>Sentieon licenses</i>: Request a Sentieon license if using the Sentieon
         * software in a private workflow.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/creating-private-workflows.html">Creating
         * or updating a private workflow in Amazon Web Services HealthOmics</a> in the
         * <i>Amazon Web Services HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a new workflow version for the workflow that you specify with the
         * <code>workflowId</code> parameter.</p> <p>When you create a new version of a
         * workflow, you need to specify the configuration for the new version. It doesn't
         * inherit any configuration values from the workflow.</p> <p>Provide a version
         * name that is unique for this workflow. You cannot change the name after
         * HealthOmics creates the version.</p>  <p>Don't include any personally
         * identifiable information (PII) in the version name. Version names appear in the
         * workflow version ARN.</p>  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-versions.html">Workflow
         * versioning in Amazon Web Services HealthOmics</a> in the <i>Amazon Web Services
         * HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateWorkflowVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowVersionOutcome CreateWorkflowVersion(const Model::CreateWorkflowVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflowVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkflowVersionRequestT = Model::CreateWorkflowVersionRequest>
        Model::CreateWorkflowVersionOutcomeCallable CreateWorkflowVersionCallable(const CreateWorkflowVersionRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::CreateWorkflowVersion, request);
        }

        /**
         * An Async wrapper for CreateWorkflowVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkflowVersionRequestT = Model::CreateWorkflowVersionRequest>
        void CreateWorkflowVersionAsync(const CreateWorkflowVersionRequestT& request, const CreateWorkflowVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::CreateWorkflowVersion, request, handler, context);
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
         * <p>Deletes a reference genome and returns a response with no body if the
         * operation is successful. The read set associated with the reference genome must
         * first be deleted before deleting the reference genome. After the reference
         * genome is deleted, you can delete the reference store using the
         * <code>DeleteReferenceStore</code> API operation.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/deleting-reference-and-sequence-stores.html">Deleting
         * HealthOmics reference and sequence stores</a> in the <i>Amazon Web Services
         * HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a reference store and returns a response with no body if the
         * operation is successful. You can only delete a reference store when it does not
         * contain any reference genomes. To empty a reference store, use
         * <code>DeleteReference</code>.</p> <p>For more information about your workflow
         * status, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/deleting-reference-and-sequence-stores.html">Deleting
         * HealthOmics reference and sequence stores</a> in the <i>Amazon Web Services
         * HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a run and returns a response with no body if the operation is
         * successful. You can only delete a run that has reached a <code>COMPLETED</code>,
         * <code>FAILED</code>, or <code>CANCELLED</code> stage. A completed run has
         * delivered an output, or was cancelled and resulted in no output. When you delete
         * a run, only the metadata associated with the run is deleted. The run outputs
         * remain in Amazon S3 and logs remain in CloudWatch.</p> <p>To verify that the
         * workflow is deleted:</p> <ul> <li> <p>Use <code>ListRuns</code> to confirm the
         * workflow no longer appears in the list.</p> </li> <li> <p>Use
         * <code>GetRun</code> to verify the workflow cannot be found.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a run cache and returns a response with no body if the operation is
         * successful. This action removes the cache metadata stored in the service
         * account, but does not delete the data in Amazon S3. You can access the cache
         * data in Amazon S3, for inspection or to troubleshoot issues. You can remove old
         * cache data using standard S3 <code>Delete</code> operations. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-cache-delete.html">Deleting
         * a run cache</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteRunCache">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRunCacheOutcome DeleteRunCache(const Model::DeleteRunCacheRequest& request) const;

        /**
         * A Callable wrapper for DeleteRunCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRunCacheRequestT = Model::DeleteRunCacheRequest>
        Model::DeleteRunCacheOutcomeCallable DeleteRunCacheCallable(const DeleteRunCacheRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteRunCache, request);
        }

        /**
         * An Async wrapper for DeleteRunCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRunCacheRequestT = Model::DeleteRunCacheRequest>
        void DeleteRunCacheAsync(const DeleteRunCacheRequestT& request, const DeleteRunCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteRunCache, request, handler, context);
        }

        /**
         * <p>Deletes a run group and returns a response with no body if the operation is
         * successful.</p> <p>To verify that the run group is deleted:</p> <ul> <li> <p>Use
         * <code>ListRunGroups</code> to confirm the workflow no longer appears in the
         * list.</p> </li> <li> <p>Use <code>GetRunGroup</code> to verify the workflow
         * cannot be found.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes an access policy for the specified store.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteS3AccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteS3AccessPolicyOutcome DeleteS3AccessPolicy(const Model::DeleteS3AccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteS3AccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteS3AccessPolicyRequestT = Model::DeleteS3AccessPolicyRequest>
        Model::DeleteS3AccessPolicyOutcomeCallable DeleteS3AccessPolicyCallable(const DeleteS3AccessPolicyRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteS3AccessPolicy, request);
        }

        /**
         * An Async wrapper for DeleteS3AccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteS3AccessPolicyRequestT = Model::DeleteS3AccessPolicyRequest>
        void DeleteS3AccessPolicyAsync(const DeleteS3AccessPolicyRequestT& request, const DeleteS3AccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteS3AccessPolicy, request, handler, context);
        }

        /**
         * <p>Deletes a sequence store and returns a response with no body if the operation
         * is successful. You can only delete a sequence store when it does not contain any
         * read sets.</p> <p>Use the <code>BatchDeleteReadSet</code> API operation to
         * ensure that all read sets in the sequence store are deleted. When a sequence
         * store is deleted, all tags associated with the store are also deleted.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/deleting-reference-and-sequence-stores.html">Deleting
         * HealthOmics reference and sequence stores</a> in the <i>Amazon Web Services
         * HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a resource share. If you are the resource owner, the subscriber will
         * no longer have access to the shared resource. If you are the subscriber, this
         * operation deletes your access to the share.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a workflow by specifying its ID. This operation returns a response
         * with no body if the deletion is successful.</p> <p>To verify that the workflow
         * is deleted:</p> <ul> <li> <p>Use <code>ListWorkflows</code> to confirm the
         * workflow no longer appears in the list.</p> </li> <li> <p>Use
         * <code>GetWorkflow</code> to verify the workflow cannot be found.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a workflow version. Deleting a workflow version doesn't affect any
         * ongoing runs that are using the workflow version.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-versions.html">Workflow
         * versioning in Amazon Web Services HealthOmics</a> in the <i>Amazon Web Services
         * HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteWorkflowVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowVersionOutcome DeleteWorkflowVersion(const Model::DeleteWorkflowVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflowVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkflowVersionRequestT = Model::DeleteWorkflowVersionRequest>
        Model::DeleteWorkflowVersionOutcomeCallable DeleteWorkflowVersionCallable(const DeleteWorkflowVersionRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::DeleteWorkflowVersion, request);
        }

        /**
         * An Async wrapper for DeleteWorkflowVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowVersionRequestT = Model::DeleteWorkflowVersionRequest>
        void DeleteWorkflowVersionAsync(const DeleteWorkflowVersionRequestT& request, const DeleteWorkflowVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::DeleteWorkflowVersion, request, handler, context);
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
         * <p>Retrieves detailed information from parts of a read set and returns the read
         * set in the same format that it was uploaded. You must have read sets uploaded to
         * your sequence store in order to run this operation.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSet">AWS
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
         * <p>Returns detailed information about the status of a read set activation job in
         * JSON format.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves status information about a read set export job and returns the data
         * in JSON format. Use this operation to actively monitor the progress of an export
         * job.</p><p><h3>See Also:</h3>   <a
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
         * <p>Gets detailed and status information about a read set import job and returns
         * the data in JSON format.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the metadata for a read set from a sequence store in JSON format.
         * This operation does not return tags. To retrieve the list of tags for a read
         * set, use the <code>ListTagsForResource</code> API operation.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Downloads parts of data from a reference genome and returns the reference
         * file in the same format that it was uploaded.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/create-reference-store.html">Creating
         * a HealthOmics reference store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Monitors the status of a reference import job. This operation can be called
         * after calling the <code>StartReferenceImportJob</code> operation.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Retrieves metadata for a reference genome. This operation returns the number
         * of parts, part size, and MD5 of an entire file. This operation does not return
         * tags. To retrieve the list of tags for a read set, use the
         * <code>ListTagsForResource</code> API operation.</p><p><h3>See Also:</h3>   <a
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
         * <p>Gets detailed information about a specific run using its ID.</p> <p>Amazon
         * Web Services HealthOmics stores a configurable number of runs, as determined by
         * service limits, that are available to the console and API. If
         * <code>GetRun</code> does not return the requested run, you can find all run logs
         * in the CloudWatch logs. For more information about viewing the run logs, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/monitoring-cloudwatch-logs.html">CloudWatch
         * logs</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Retrieves detailed information about the specified run cache using its
         * ID.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflows-call-caching.html">Call
         * caching for Amazon Web Services HealthOmics runs</a> in the <i>Amazon Web
         * Services HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetRunCache">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunCacheOutcome GetRunCache(const Model::GetRunCacheRequest& request) const;

        /**
         * A Callable wrapper for GetRunCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRunCacheRequestT = Model::GetRunCacheRequest>
        Model::GetRunCacheOutcomeCallable GetRunCacheCallable(const GetRunCacheRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetRunCache, request);
        }

        /**
         * An Async wrapper for GetRunCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRunCacheRequestT = Model::GetRunCacheRequest>
        void GetRunCacheAsync(const GetRunCacheRequestT& request, const GetRunCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetRunCache, request, handler, context);
        }

        /**
         * <p>Gets information about a run group and returns its metadata.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Gets detailed information about a run task using its ID.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Retrieves details about an access policy on a given store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetS3AccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetS3AccessPolicyOutcome GetS3AccessPolicy(const Model::GetS3AccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetS3AccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetS3AccessPolicyRequestT = Model::GetS3AccessPolicyRequest>
        Model::GetS3AccessPolicyOutcomeCallable GetS3AccessPolicyCallable(const GetS3AccessPolicyRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetS3AccessPolicy, request);
        }

        /**
         * An Async wrapper for GetS3AccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetS3AccessPolicyRequestT = Model::GetS3AccessPolicyRequest>
        void GetS3AccessPolicyAsync(const GetS3AccessPolicyRequestT& request, const GetS3AccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetS3AccessPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves metadata for a sequence store using its ID and returns it in JSON
         * format.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the metadata for the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Gets all information about a workflow using its ID.</p> <p>If a workflow is
         * shared with you, you cannot export the workflow.</p> <p>For more information
         * about your workflow status, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/using-get-workflow.html">Verify
         * the workflow status</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Gets information about a workflow version. For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-versions.html">Workflow
         * versioning in Amazon Web Services HealthOmics</a> in the <i>Amazon Web Services
         * HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetWorkflowVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowVersionOutcome GetWorkflowVersion(const Model::GetWorkflowVersionRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowVersionRequestT = Model::GetWorkflowVersionRequest>
        Model::GetWorkflowVersionOutcomeCallable GetWorkflowVersionCallable(const GetWorkflowVersionRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::GetWorkflowVersion, request);
        }

        /**
         * An Async wrapper for GetWorkflowVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowVersionRequestT = Model::GetWorkflowVersionRequest>
        void GetWorkflowVersionAsync(const GetWorkflowVersionRequestT& request, const GetWorkflowVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::GetWorkflowVersion, request, handler, context);
        }

        /**
         * <p>Retrieves a list of annotation import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnnotationImportJobsOutcome ListAnnotationImportJobs(const Model::ListAnnotationImportJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAnnotationImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnnotationImportJobsRequestT = Model::ListAnnotationImportJobsRequest>
        Model::ListAnnotationImportJobsOutcomeCallable ListAnnotationImportJobsCallable(const ListAnnotationImportJobsRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListAnnotationImportJobs, request);
        }

        /**
         * An Async wrapper for ListAnnotationImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnnotationImportJobsRequestT = Model::ListAnnotationImportJobsRequest>
        void ListAnnotationImportJobsAsync(const ListAnnotationImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAnnotationImportJobsRequestT& request = {}) const
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
        virtual Model::ListAnnotationStoresOutcome ListAnnotationStores(const Model::ListAnnotationStoresRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAnnotationStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnnotationStoresRequestT = Model::ListAnnotationStoresRequest>
        Model::ListAnnotationStoresOutcomeCallable ListAnnotationStoresCallable(const ListAnnotationStoresRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListAnnotationStores, request);
        }

        /**
         * An Async wrapper for ListAnnotationStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnnotationStoresRequestT = Model::ListAnnotationStoresRequest>
        void ListAnnotationStoresAsync(const ListAnnotationStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAnnotationStoresRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListAnnotationStores, request, handler, context);
        }

        /**
         * <p>Lists in-progress multipart read set uploads for a sequence store and returns
         * it in a JSON formatted output. Multipart read set uploads are initiated by the
         * <code>CreateMultipartReadSetUploads</code> API operation. This operation returns
         * a response with no body when the upload is complete. </p><p><h3>See Also:</h3>  
         * <a
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
         * <p>Retrieves a list of read set activation jobs and returns the metadata in a
         * JSON formatted output. To extract metadata from a read set activation job, use
         * the <code>GetReadSetActivationJob</code> API operation.</p><p><h3>See Also:</h3>
         * <a
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
         * <p>Retrieves a list of read set export jobs in a JSON formatted response. This
         * API operation is used to check the status of a read set export job initiated by
         * the <code>StartReadSetExportJob</code> API operation.</p><p><h3>See Also:</h3>  
         * <a
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
         * <p>Retrieves a list of read set import jobs and returns the data in JSON
         * format.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists all parts in a multipart read set upload for a sequence store and
         * returns the metadata in a JSON formatted output.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves a list of read sets from a sequence store ID and returns the
         * metadata in JSON format.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the metadata of one or more reference import jobs for a reference
         * store.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves a list of reference stores linked to your account and returns their
         * metadata in JSON format.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/create-reference-store.html">Creating
         * a reference store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReferenceStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReferenceStoresOutcome ListReferenceStores(const Model::ListReferenceStoresRequest& request = {}) const;

        /**
         * A Callable wrapper for ListReferenceStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReferenceStoresRequestT = Model::ListReferenceStoresRequest>
        Model::ListReferenceStoresOutcomeCallable ListReferenceStoresCallable(const ListReferenceStoresRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListReferenceStores, request);
        }

        /**
         * An Async wrapper for ListReferenceStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReferenceStoresRequestT = Model::ListReferenceStoresRequest>
        void ListReferenceStoresAsync(const ListReferenceStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListReferenceStoresRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListReferenceStores, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata of one or more reference genomes in a reference
         * store.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/create-reference-store.html">Creating
         * a reference store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves a list of your run caches and the metadata for each
         * cache.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRunCaches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunCachesOutcome ListRunCaches(const Model::ListRunCachesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRunCaches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRunCachesRequestT = Model::ListRunCachesRequest>
        Model::ListRunCachesOutcomeCallable ListRunCachesCallable(const ListRunCachesRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListRunCaches, request);
        }

        /**
         * An Async wrapper for ListRunCaches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRunCachesRequestT = Model::ListRunCachesRequest>
        void ListRunCachesAsync(const ListRunCachesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRunCachesRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListRunCaches, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all run groups and returns the metadata for each run
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRunGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunGroupsOutcome ListRunGroups(const Model::ListRunGroupsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRunGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRunGroupsRequestT = Model::ListRunGroupsRequest>
        Model::ListRunGroupsOutcomeCallable ListRunGroupsCallable(const ListRunGroupsRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListRunGroups, request);
        }

        /**
         * An Async wrapper for ListRunGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRunGroupsRequestT = Model::ListRunGroupsRequest>
        void ListRunGroupsAsync(const ListRunGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRunGroupsRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListRunGroups, request, handler, context);
        }

        /**
         * <p>Returns a list of tasks and status information within their specified run.
         * Use this operation to monitor runs and to identify which specific tasks have
         * failed.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves a list of runs and returns each run's metadata and status.</p>
         * <p>Amazon Web Services HealthOmics stores a configurable number of runs, as
         * determined by service limits, that are available to the console and API. If the
         * <code>ListRuns</code> response doesn't include specific runs that you expected,
         * you can find all run logs in the CloudWatch logs. For more information about
         * viewing the run logs, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/monitoring-cloudwatch-logs.html">CloudWatch
         * logs</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRuns">AWS API
         * Reference</a></p>
         */
        virtual Model::ListRunsOutcome ListRuns(const Model::ListRunsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRunsRequestT = Model::ListRunsRequest>
        Model::ListRunsOutcomeCallable ListRunsCallable(const ListRunsRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListRuns, request);
        }

        /**
         * An Async wrapper for ListRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRunsRequestT = Model::ListRunsRequest>
        void ListRunsAsync(const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRunsRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListRuns, request, handler, context);
        }

        /**
         * <p>Retrieves a list of sequence stores and returns each sequence store's
         * metadata.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/create-sequence-store.html">Creating
         * a HealthOmics sequence store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListSequenceStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSequenceStoresOutcome ListSequenceStores(const Model::ListSequenceStoresRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSequenceStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSequenceStoresRequestT = Model::ListSequenceStoresRequest>
        Model::ListSequenceStoresOutcomeCallable ListSequenceStoresCallable(const ListSequenceStoresRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListSequenceStores, request);
        }

        /**
         * An Async wrapper for ListSequenceStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSequenceStoresRequestT = Model::ListSequenceStoresRequest>
        void ListSequenceStoresAsync(const ListSequenceStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSequenceStoresRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListSequenceStores, request, handler, context);
        }

        /**
         * <p>Retrieves the resource shares associated with an account. Use the filter
         * parameter to retrieve a specific subset of the shares.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListShares">AWS
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
        virtual Model::ListVariantImportJobsOutcome ListVariantImportJobs(const Model::ListVariantImportJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListVariantImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVariantImportJobsRequestT = Model::ListVariantImportJobsRequest>
        Model::ListVariantImportJobsOutcomeCallable ListVariantImportJobsCallable(const ListVariantImportJobsRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListVariantImportJobs, request);
        }

        /**
         * An Async wrapper for ListVariantImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVariantImportJobsRequestT = Model::ListVariantImportJobsRequest>
        void ListVariantImportJobsAsync(const ListVariantImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListVariantImportJobsRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListVariantImportJobs, request, handler, context);
        }

        /**
         * <p>Retrieves a list of variant stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListVariantStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVariantStoresOutcome ListVariantStores(const Model::ListVariantStoresRequest& request = {}) const;

        /**
         * A Callable wrapper for ListVariantStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVariantStoresRequestT = Model::ListVariantStoresRequest>
        Model::ListVariantStoresOutcomeCallable ListVariantStoresCallable(const ListVariantStoresRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListVariantStores, request);
        }

        /**
         * An Async wrapper for ListVariantStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVariantStoresRequestT = Model::ListVariantStoresRequest>
        void ListVariantStoresAsync(const ListVariantStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListVariantStoresRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListVariantStores, request, handler, context);
        }

        /**
         * <p>Lists the workflow versions for the specified workflow. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-versions.html">Workflow
         * versioning in Amazon Web Services HealthOmics</a> in the <i>Amazon Web Services
         * HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListWorkflowVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowVersionsOutcome ListWorkflowVersions(const Model::ListWorkflowVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowVersionsRequestT = Model::ListWorkflowVersionsRequest>
        Model::ListWorkflowVersionsOutcomeCallable ListWorkflowVersionsCallable(const ListWorkflowVersionsRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::ListWorkflowVersions, request);
        }

        /**
         * An Async wrapper for ListWorkflowVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowVersionsRequestT = Model::ListWorkflowVersionsRequest>
        void ListWorkflowVersionsAsync(const ListWorkflowVersionsRequestT& request, const ListWorkflowVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::ListWorkflowVersions, request, handler, context);
        }

        /**
         * <p>Retrieves a list of existing workflows. You can filter for specific workflows
         * by their name and type. Using the type parameter, specify <code>PRIVATE</code>
         * to retrieve a list of private workflows or specify <code>READY2RUN</code> for a
         * list of all Ready2Run workflows. If you do not specify the type of workflow,
         * this operation returns a list of existing workflows.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request = {}) const
        {
            return SubmitCallable(&OmicsClient::ListWorkflows, request);
        }

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        void ListWorkflowsAsync(const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListWorkflowsRequestT& request = {}) const
        {
            return SubmitAsync(&OmicsClient::ListWorkflows, request, handler, context);
        }

        /**
         * <p>Adds an access policy to the specified store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/PutS3AccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutS3AccessPolicyOutcome PutS3AccessPolicy(const Model::PutS3AccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutS3AccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutS3AccessPolicyRequestT = Model::PutS3AccessPolicyRequest>
        Model::PutS3AccessPolicyOutcomeCallable PutS3AccessPolicyCallable(const PutS3AccessPolicyRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::PutS3AccessPolicy, request);
        }

        /**
         * An Async wrapper for PutS3AccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutS3AccessPolicyRequestT = Model::PutS3AccessPolicyRequest>
        void PutS3AccessPolicyAsync(const PutS3AccessPolicyRequestT& request, const PutS3AccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::PutS3AccessPolicy, request, handler, context);
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
         * <p>Activates an archived read set and returns its metadata in a JSON formatted
         * output. AWS HealthOmics automatically archives unused read sets after 30 days.
         * To monitor the status of your read set activation job, use the
         * <code>GetReadSetActivationJob</code> operation.</p> <p>To learn more, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/activating-read-sets.html">Activating
         * read sets</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Starts a read set export job. When the export job is finished, the read set
         * is exported to an Amazon S3 bucket which can be retrieved using the
         * <code>GetReadSetExportJob</code> API operation.</p> <p>To monitor the status of
         * the export job, use the <code>ListReadSetExportJobs</code> API operation.
         * </p><p><h3>See Also:</h3>   <a
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
         * <p>Imports a read set from the sequence store. Read set import jobs support a
         * maximum of 100 read sets of different types. Monitor the progress of your read
         * set import job by calling the <code>GetReadSetImportJob</code> API
         * operation.</p><p><h3>See Also:</h3>   <a
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
         * <p>Imports a reference genome from Amazon S3 into a specified reference store.
         * You can have multiple reference genomes in a reference store. You can only
         * import reference genomes one at a time into each reference store. Monitor the
         * status of your reference import job by using the
         * <code>GetReferenceImportJob</code> API operation.</p><p><h3>See Also:</h3>   <a
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
         * <p>Starts a new run and returns details about the run, or duplicates an existing
         * run. A run is a single invocation of a workflow. If you provide request IDs,
         * Amazon Web Services HealthOmics identifies duplicate requests and starts the run
         * only once. Monitor the progress of the run by calling the <code>GetRun</code>
         * API operation.</p> <p>To start a new run, the following inputs are required:</p>
         * <ul> <li> <p>A service role ARN (<code>roleArn</code>).</p> </li> <li> <p>The
         * run's workflow ID (<code>workflowId</code>, not the <code>uuid</code> or
         * <code>runId</code>).</p> </li> <li> <p>An Amazon S3 location
         * (<code>outputUri</code>) where the run outputs will be saved.</p> </li> <li>
         * <p>All required workflow parameters (<code>parameter</code>), which can include
         * optional parameters from the parameter template. The run cannot include any
         * parameters that are not defined in the parameter template. To see all possible
         * parameters, use the <code>GetRun</code> API operation. </p> </li> <li> <p>For
         * runs with a <code>STATIC</code> (default) storage type, specify the required
         * storage capacity (in gibibytes). A storage capacity value is not required for
         * runs that use <code>DYNAMIC</code> storage.</p> </li> </ul> <p>
         * <code>StartRun</code> can also duplicate an existing run using the run's default
         * values. You can modify these default values and/or add other optional inputs. To
         * duplicate a run, the following inputs are required:</p> <ul> <li> <p>A service
         * role ARN (<code>roleArn</code>).</p> </li> <li> <p>The ID of the run to
         * duplicate (<code>runId</code>).</p> </li> <li> <p>An Amazon S3 location where
         * the run outputs will be saved (<code>outputUri</code>).</p> </li> </ul> <p>To
         * learn more about the optional parameters for <code>StartRun</code>, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/starting-a-run.html">Starting
         * a run</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p> <p>Use
         * the <code>retentionMode</code> input to control how long the metadata for each
         * run is stored in CloudWatch. There are two retention modes:</p> <ul> <li>
         * <p>Specify <code>REMOVE</code> to automatically remove the oldest runs when you
         * reach the maximum service retention limit for runs. It is recommended that you
         * use the <code>REMOVE</code> mode to initiate major run requests so that your
         * runs do not fail when you reach the limit.</p> </li> <li> <p>The
         * <code>retentionMode</code> is set to the <code>RETAIN</code> mode by default,
         * which allows you to manually remove runs after reaching the maximum service
         * retention limit. Under this setting, you cannot create additional runs until you
         * remove the excess runs.</p> </li> </ul> <p>To learn more about the retention
         * modes, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/run-retention.html">Run
         * retention mode</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Updates a run cache using its ID and returns a response with no body if the
         * operation is successful. You can update the run cache description, name, or the
         * default run cache behavior with <code>CACHE_ON_FAILURE</code> or
         * <code>CACHE_ALWAYS</code>. To confirm that your run cache settings have been
         * properly updated, use the <code>GetRunCache</code> API operation.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/how-run-cache.html">How call
         * caching works</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateRunCache">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRunCacheOutcome UpdateRunCache(const Model::UpdateRunCacheRequest& request) const;

        /**
         * A Callable wrapper for UpdateRunCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRunCacheRequestT = Model::UpdateRunCacheRequest>
        Model::UpdateRunCacheOutcomeCallable UpdateRunCacheCallable(const UpdateRunCacheRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UpdateRunCache, request);
        }

        /**
         * An Async wrapper for UpdateRunCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRunCacheRequestT = Model::UpdateRunCacheRequest>
        void UpdateRunCacheAsync(const UpdateRunCacheRequestT& request, const UpdateRunCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UpdateRunCache, request, handler, context);
        }

        /**
         * <p>Updates the settings of a run group and returns a response with no body if
         * the operation is successful.</p> <p>You can update the following settings with
         * <code>UpdateRunGroup</code>:</p> <ul> <li> <p>Maximum number of CPUs</p> </li>
         * <li> <p>Run time (measured in minutes)</p> </li> <li> <p>Number of GPUs</p>
         * </li> <li> <p>Number of concurrent runs</p> </li> <li> <p>Group name</p> </li>
         * </ul> <p>To confirm that the settings have been successfully updated, use the
         * <code>ListRunGroups</code> or <code>GetRunGroup</code> API operations to verify
         * that the desired changes have been made.</p><p><h3>See Also:</h3>   <a
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
         * <p>Update one or more parameters for the sequence store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateSequenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSequenceStoreOutcome UpdateSequenceStore(const Model::UpdateSequenceStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateSequenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSequenceStoreRequestT = Model::UpdateSequenceStoreRequest>
        Model::UpdateSequenceStoreOutcomeCallable UpdateSequenceStoreCallable(const UpdateSequenceStoreRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UpdateSequenceStore, request);
        }

        /**
         * An Async wrapper for UpdateSequenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSequenceStoreRequestT = Model::UpdateSequenceStoreRequest>
        void UpdateSequenceStoreAsync(const UpdateSequenceStoreRequestT& request, const UpdateSequenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UpdateSequenceStore, request, handler, context);
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
         * <p>Updates information about a workflow.</p> <p>You can update the following
         * workflow information:</p> <ul> <li> <p>Name</p> </li> <li> <p>Description</p>
         * </li> <li> <p>Default storage type</p> </li> <li> <p>Default storage capacity
         * (with workflow ID)</p> </li> </ul> <p>This operation returns a response with no
         * body if the operation is successful. You can check the workflow updates by
         * calling the <code>GetWorkflow</code> API operation.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/update-private-workflow.html">Update
         * a private workflow</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Updates information about the workflow version. For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/workflow-versions.html">Workflow
         * versioning in Amazon Web Services HealthOmics</a> in the <i>Amazon Web Services
         * HealthOmics User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateWorkflowVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowVersionOutcome UpdateWorkflowVersion(const Model::UpdateWorkflowVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflowVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkflowVersionRequestT = Model::UpdateWorkflowVersionRequest>
        Model::UpdateWorkflowVersionOutcomeCallable UpdateWorkflowVersionCallable(const UpdateWorkflowVersionRequestT& request) const
        {
            return SubmitCallable(&OmicsClient::UpdateWorkflowVersion, request);
        }

        /**
         * An Async wrapper for UpdateWorkflowVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkflowVersionRequestT = Model::UpdateWorkflowVersionRequest>
        void UpdateWorkflowVersionAsync(const UpdateWorkflowVersionRequestT& request, const UpdateWorkflowVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OmicsClient::UpdateWorkflowVersion, request, handler, context);
        }

        /**
         * <p>Uploads a specific part of a read set into a sequence store. When you a
         * upload a read set part with a part number that already exists, the new part
         * replaces the existing one. This operation returns a JSON formatted response
         * containing a string identifier that is used to confirm that parts are being
         * added to the intended upload.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/omics/latest/dev/synchronous-uploads.html">Direct
         * upload to a sequence store</a> in the <i>Amazon Web Services HealthOmics User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<OmicsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Omics
} // namespace Aws
