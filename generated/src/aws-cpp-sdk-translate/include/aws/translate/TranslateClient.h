/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/translate/TranslateServiceClientModel.h>

namespace Aws
{
namespace Translate
{
  /**
   * <p>Provides translation of the input content from the source language to the
   * target language.</p>
   */
  class AWS_TRANSLATE_API TranslateClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TranslateClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef TranslateClientConfiguration ClientConfigurationType;
      typedef TranslateEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Translate::TranslateClientConfiguration& clientConfiguration = Aws::Translate::TranslateClientConfiguration(),
                        std::shared_ptr<TranslateEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<TranslateEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Translate::TranslateClientConfiguration& clientConfiguration = Aws::Translate::TranslateClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranslateClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<TranslateEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Translate::TranslateClientConfiguration& clientConfiguration = Aws::Translate::TranslateClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranslateClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TranslateClient();

        /**
         * <p>Creates a parallel data resource in Amazon Translate by importing an input
         * file from Amazon S3. Parallel data files contain examples that show how you want
         * segments of text to be translated. By adding parallel data, you can influence
         * the style, tone, and word choice in your translation output.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/CreateParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParallelDataOutcome CreateParallelData(const Model::CreateParallelDataRequest& request) const;

        /**
         * A Callable wrapper for CreateParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateParallelDataRequestT = Model::CreateParallelDataRequest>
        Model::CreateParallelDataOutcomeCallable CreateParallelDataCallable(const CreateParallelDataRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::CreateParallelData, request);
        }

        /**
         * An Async wrapper for CreateParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateParallelDataRequestT = Model::CreateParallelDataRequest>
        void CreateParallelDataAsync(const CreateParallelDataRequestT& request, const CreateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::CreateParallelData, request, handler, context);
        }

        /**
         * <p>Deletes a parallel data resource in Amazon Translate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParallelDataOutcome DeleteParallelData(const Model::DeleteParallelDataRequest& request) const;

        /**
         * A Callable wrapper for DeleteParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteParallelDataRequestT = Model::DeleteParallelDataRequest>
        Model::DeleteParallelDataOutcomeCallable DeleteParallelDataCallable(const DeleteParallelDataRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::DeleteParallelData, request);
        }

        /**
         * An Async wrapper for DeleteParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteParallelDataRequestT = Model::DeleteParallelDataRequest>
        void DeleteParallelDataAsync(const DeleteParallelDataRequestT& request, const DeleteParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::DeleteParallelData, request, handler, context);
        }

        /**
         * <p>A synchronous action that deletes a custom terminology.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTerminologyOutcome DeleteTerminology(const Model::DeleteTerminologyRequest& request) const;

        /**
         * A Callable wrapper for DeleteTerminology that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTerminologyRequestT = Model::DeleteTerminologyRequest>
        Model::DeleteTerminologyOutcomeCallable DeleteTerminologyCallable(const DeleteTerminologyRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::DeleteTerminology, request);
        }

        /**
         * An Async wrapper for DeleteTerminology that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTerminologyRequestT = Model::DeleteTerminologyRequest>
        void DeleteTerminologyAsync(const DeleteTerminologyRequestT& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::DeleteTerminology, request, handler, context);
        }

        /**
         * <p>Gets the properties associated with an asynchronous batch translation job
         * including name, ID, status, source and target languages, input/output S3
         * buckets, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DescribeTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTextTranslationJobOutcome DescribeTextTranslationJob(const Model::DescribeTextTranslationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTextTranslationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTextTranslationJobRequestT = Model::DescribeTextTranslationJobRequest>
        Model::DescribeTextTranslationJobOutcomeCallable DescribeTextTranslationJobCallable(const DescribeTextTranslationJobRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::DescribeTextTranslationJob, request);
        }

        /**
         * An Async wrapper for DescribeTextTranslationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTextTranslationJobRequestT = Model::DescribeTextTranslationJobRequest>
        void DescribeTextTranslationJobAsync(const DescribeTextTranslationJobRequestT& request, const DescribeTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::DescribeTextTranslationJob, request, handler, context);
        }

        /**
         * <p>Provides information about a parallel data resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParallelDataOutcome GetParallelData(const Model::GetParallelDataRequest& request) const;

        /**
         * A Callable wrapper for GetParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetParallelDataRequestT = Model::GetParallelDataRequest>
        Model::GetParallelDataOutcomeCallable GetParallelDataCallable(const GetParallelDataRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::GetParallelData, request);
        }

        /**
         * An Async wrapper for GetParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetParallelDataRequestT = Model::GetParallelDataRequest>
        void GetParallelDataAsync(const GetParallelDataRequestT& request, const GetParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::GetParallelData, request, handler, context);
        }

        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTerminologyOutcome GetTerminology(const Model::GetTerminologyRequest& request) const;

        /**
         * A Callable wrapper for GetTerminology that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTerminologyRequestT = Model::GetTerminologyRequest>
        Model::GetTerminologyOutcomeCallable GetTerminologyCallable(const GetTerminologyRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::GetTerminology, request);
        }

        /**
         * An Async wrapper for GetTerminology that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTerminologyRequestT = Model::GetTerminologyRequest>
        void GetTerminologyAsync(const GetTerminologyRequestT& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::GetTerminology, request, handler, context);
        }

        /**
         * <p>Creates or updates a custom terminology, depending on whether one already
         * exists for the given terminology name. Importing a terminology with the same
         * name as an existing one will merge the terminologies based on the chosen merge
         * strategy. The only supported merge strategy is OVERWRITE, where the imported
         * terminology overwrites the existing terminology of the same name.</p> <p>If you
         * import a terminology that overwrites an existing one, the new terminology takes
         * up to 10 minutes to fully propagate. After that, translations have access to the
         * new terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ImportTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportTerminologyOutcome ImportTerminology(const Model::ImportTerminologyRequest& request) const;

        /**
         * A Callable wrapper for ImportTerminology that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportTerminologyRequestT = Model::ImportTerminologyRequest>
        Model::ImportTerminologyOutcomeCallable ImportTerminologyCallable(const ImportTerminologyRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::ImportTerminology, request);
        }

        /**
         * An Async wrapper for ImportTerminology that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportTerminologyRequestT = Model::ImportTerminologyRequest>
        void ImportTerminologyAsync(const ImportTerminologyRequestT& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::ImportTerminology, request, handler, context);
        }

        /**
         * <p>Provides a list of languages (RFC-5646 codes and names) that Amazon Translate
         * supports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListLanguages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLanguagesOutcome ListLanguages(const Model::ListLanguagesRequest& request) const;

        /**
         * A Callable wrapper for ListLanguages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLanguagesRequestT = Model::ListLanguagesRequest>
        Model::ListLanguagesOutcomeCallable ListLanguagesCallable(const ListLanguagesRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::ListLanguages, request);
        }

        /**
         * An Async wrapper for ListLanguages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLanguagesRequestT = Model::ListLanguagesRequest>
        void ListLanguagesAsync(const ListLanguagesRequestT& request, const ListLanguagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::ListLanguages, request, handler, context);
        }

        /**
         * <p>Provides a list of your parallel data resources in Amazon
         * Translate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParallelDataOutcome ListParallelData(const Model::ListParallelDataRequest& request) const;

        /**
         * A Callable wrapper for ListParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListParallelDataRequestT = Model::ListParallelDataRequest>
        Model::ListParallelDataOutcomeCallable ListParallelDataCallable(const ListParallelDataRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::ListParallelData, request);
        }

        /**
         * An Async wrapper for ListParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListParallelDataRequestT = Model::ListParallelDataRequest>
        void ListParallelDataAsync(const ListParallelDataRequestT& request, const ListParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::ListParallelData, request, handler, context);
        }

        /**
         * <p>Lists all tags associated with a given Amazon Translate resource. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/tagging.html"> Tagging
         * your resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTerminologiesOutcome ListTerminologies(const Model::ListTerminologiesRequest& request) const;

        /**
         * A Callable wrapper for ListTerminologies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTerminologiesRequestT = Model::ListTerminologiesRequest>
        Model::ListTerminologiesOutcomeCallable ListTerminologiesCallable(const ListTerminologiesRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::ListTerminologies, request);
        }

        /**
         * An Async wrapper for ListTerminologies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTerminologiesRequestT = Model::ListTerminologiesRequest>
        void ListTerminologiesAsync(const ListTerminologiesRequestT& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::ListTerminologies, request, handler, context);
        }

        /**
         * <p>Gets a list of the batch translation jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTextTranslationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTextTranslationJobsOutcome ListTextTranslationJobs(const Model::ListTextTranslationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTextTranslationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTextTranslationJobsRequestT = Model::ListTextTranslationJobsRequest>
        Model::ListTextTranslationJobsOutcomeCallable ListTextTranslationJobsCallable(const ListTextTranslationJobsRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::ListTextTranslationJobs, request);
        }

        /**
         * An Async wrapper for ListTextTranslationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTextTranslationJobsRequestT = Model::ListTextTranslationJobsRequest>
        void ListTextTranslationJobsAsync(const ListTextTranslationJobsRequestT& request, const ListTextTranslationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::ListTextTranslationJobs, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous batch translation job. Use batch translation jobs to
         * translate large volumes of text across multiple documents at once. For batch
         * translation, you can input documents with different source languages (specify
         * <code>auto</code> as the source language). You can specify one or more target
         * languages. Batch translation translates each input document into each of the
         * target languages. For more information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/async.html">Asynchronous
         * batch processing</a>.</p> <p>Batch translation jobs can be described with the
         * <a>DescribeTextTranslationJob</a> operation, listed with the
         * <a>ListTextTranslationJobs</a> operation, and stopped with the
         * <a>StopTextTranslationJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/StartTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTextTranslationJobOutcome StartTextTranslationJob(const Model::StartTextTranslationJobRequest& request) const;

        /**
         * A Callable wrapper for StartTextTranslationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTextTranslationJobRequestT = Model::StartTextTranslationJobRequest>
        Model::StartTextTranslationJobOutcomeCallable StartTextTranslationJobCallable(const StartTextTranslationJobRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::StartTextTranslationJob, request);
        }

        /**
         * An Async wrapper for StartTextTranslationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTextTranslationJobRequestT = Model::StartTextTranslationJobRequest>
        void StartTextTranslationJobAsync(const StartTextTranslationJobRequestT& request, const StartTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::StartTextTranslationJob, request, handler, context);
        }

        /**
         * <p>Stops an asynchronous batch translation job that is in progress.</p> <p>If
         * the job's state is <code>IN_PROGRESS</code>, the job will be marked for
         * termination and put into the <code>STOP_REQUESTED</code> state. If the job
         * completes before it can be stopped, it is put into the <code>COMPLETED</code>
         * state. Otherwise, the job is put into the <code>STOPPED</code> state.</p>
         * <p>Asynchronous batch translation jobs are started with the
         * <a>StartTextTranslationJob</a> operation. You can use the
         * <a>DescribeTextTranslationJob</a> or <a>ListTextTranslationJobs</a> operations
         * to get a batch translation job's <code>JobId</code>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/StopTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTextTranslationJobOutcome StopTextTranslationJob(const Model::StopTextTranslationJobRequest& request) const;

        /**
         * A Callable wrapper for StopTextTranslationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopTextTranslationJobRequestT = Model::StopTextTranslationJobRequest>
        Model::StopTextTranslationJobOutcomeCallable StopTextTranslationJobCallable(const StopTextTranslationJobRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::StopTextTranslationJob, request);
        }

        /**
         * An Async wrapper for StopTextTranslationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTextTranslationJobRequestT = Model::StopTextTranslationJobRequest>
        void StopTextTranslationJobAsync(const StopTextTranslationJobRequestT& request, const StopTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::StopTextTranslationJob, request, handler, context);
        }

        /**
         * <p>Associates a specific tag with a resource. A tag is a key-value pair that
         * adds as a metadata to a resource. For more information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/tagging.html"> Tagging
         * your resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::TagResource, request, handler, context);
        }

        /**
         * <p>Translates the input document from the source language to the target
         * language. This synchronous operation supports text, HTML, or Word documents as
         * the input document. <code>TranslateDocument</code> supports translations from
         * English to any supported language, and from any supported language to English.
         * Therefore, specify either the source language code or the target language code
         * as “en” (English). </p> <p> If you set the <code>Formality</code> parameter, the
         * request will fail if the target language does not support formality. For a list
         * of target languages that support formality, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/customizing-translations-formality.html">Setting
         * formality</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::TranslateDocumentOutcome TranslateDocument(const Model::TranslateDocumentRequest& request) const;

        /**
         * A Callable wrapper for TranslateDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TranslateDocumentRequestT = Model::TranslateDocumentRequest>
        Model::TranslateDocumentOutcomeCallable TranslateDocumentCallable(const TranslateDocumentRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::TranslateDocument, request);
        }

        /**
         * An Async wrapper for TranslateDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TranslateDocumentRequestT = Model::TranslateDocumentRequest>
        void TranslateDocumentAsync(const TranslateDocumentRequestT& request, const TranslateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::TranslateDocument, request, handler, context);
        }

        /**
         * <p>Translates input text from the source language to the target language. For a
         * list of available languages and language codes, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
         * languages</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         */
        virtual Model::TranslateTextOutcome TranslateText(const Model::TranslateTextRequest& request) const;

        /**
         * A Callable wrapper for TranslateText that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TranslateTextRequestT = Model::TranslateTextRequest>
        Model::TranslateTextOutcomeCallable TranslateTextCallable(const TranslateTextRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::TranslateText, request);
        }

        /**
         * An Async wrapper for TranslateText that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TranslateTextRequestT = Model::TranslateTextRequest>
        void TranslateTextAsync(const TranslateTextRequestT& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::TranslateText, request, handler, context);
        }

        /**
         * <p>Removes a specific tag associated with an Amazon Translate resource. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/tagging.html"> Tagging
         * your resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a previously created parallel data resource by importing a new input
         * file from Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UpdateParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParallelDataOutcome UpdateParallelData(const Model::UpdateParallelDataRequest& request) const;

        /**
         * A Callable wrapper for UpdateParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateParallelDataRequestT = Model::UpdateParallelDataRequest>
        Model::UpdateParallelDataOutcomeCallable UpdateParallelDataCallable(const UpdateParallelDataRequestT& request) const
        {
            return SubmitCallable(&TranslateClient::UpdateParallelData, request);
        }

        /**
         * An Async wrapper for UpdateParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateParallelDataRequestT = Model::UpdateParallelDataRequest>
        void UpdateParallelDataAsync(const UpdateParallelDataRequestT& request, const UpdateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TranslateClient::UpdateParallelData, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TranslateEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TranslateClient>;
      void init(const TranslateClientConfiguration& clientConfiguration);

      TranslateClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TranslateEndpointProviderBase> m_endpointProvider;
  };

} // namespace Translate
} // namespace Aws
