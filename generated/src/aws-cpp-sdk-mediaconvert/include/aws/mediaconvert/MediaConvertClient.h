/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/MediaConvertServiceClientModel.h>

namespace Aws
{
namespace MediaConvert
{
  /**
   * AWS Elemental MediaConvert
   */
  class AWS_MEDIACONVERT_API MediaConvertClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaConvertClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MediaConvertClientConfiguration ClientConfigurationType;
      typedef MediaConvertEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::MediaConvert::MediaConvertClientConfiguration& clientConfiguration = Aws::MediaConvert::MediaConvertClientConfiguration(),
                           std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::MediaConvert::MediaConvertClientConfiguration& clientConfiguration = Aws::MediaConvert::MediaConvertClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConvertClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::MediaConvert::MediaConvertClientConfiguration& clientConfiguration = Aws::MediaConvert::MediaConvertClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConvertClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaConvertClient();

        /**
         * Associates an AWS Certificate Manager (ACM) Amazon Resource Name (ARN) with AWS
         * Elemental MediaConvert.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AssociateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCertificateOutcome AssociateCertificate(const Model::AssociateCertificateRequest& request) const;

        /**
         * A Callable wrapper for AssociateCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateCertificateRequestT = Model::AssociateCertificateRequest>
        Model::AssociateCertificateOutcomeCallable AssociateCertificateCallable(const AssociateCertificateRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::AssociateCertificate, request);
        }

        /**
         * An Async wrapper for AssociateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateCertificateRequestT = Model::AssociateCertificateRequest>
        void AssociateCertificateAsync(const AssociateCertificateRequestT& request, const AssociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::AssociateCertificate, request, handler, context);
        }

        /**
         * Permanently cancel a job. Once you have canceled a job, you can't start it
         * again.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        Model::CancelJobOutcomeCallable CancelJobCallable(const CancelJobRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::CancelJob, request);
        }

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        void CancelJobAsync(const CancelJobRequestT& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::CancelJob, request, handler, context);
        }

        /**
         * Create a new transcoding job. For information about jobs and job settings, see
         * the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::CreateJob, request, handler, context);
        }

        /**
         * Create a new job template. For information about job templates see the User
         * Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobTemplateOutcome CreateJobTemplate(const Model::CreateJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobTemplateRequestT = Model::CreateJobTemplateRequest>
        Model::CreateJobTemplateOutcomeCallable CreateJobTemplateCallable(const CreateJobTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::CreateJobTemplate, request);
        }

        /**
         * An Async wrapper for CreateJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobTemplateRequestT = Model::CreateJobTemplateRequest>
        void CreateJobTemplateAsync(const CreateJobTemplateRequestT& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::CreateJobTemplate, request, handler, context);
        }

        /**
         * Create a new preset. For information about job templates see the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresetOutcome CreatePreset(const Model::CreatePresetRequest& request) const;

        /**
         * A Callable wrapper for CreatePreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePresetRequestT = Model::CreatePresetRequest>
        Model::CreatePresetOutcomeCallable CreatePresetCallable(const CreatePresetRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::CreatePreset, request);
        }

        /**
         * An Async wrapper for CreatePreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePresetRequestT = Model::CreatePresetRequest>
        void CreatePresetAsync(const CreatePresetRequestT& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::CreatePreset, request, handler, context);
        }

        /**
         * Create a new transcoding queue. For information about queues, see Working With
         * Queues in the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /**
         * A Callable wrapper for CreateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQueueRequestT = Model::CreateQueueRequest>
        Model::CreateQueueOutcomeCallable CreateQueueCallable(const CreateQueueRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::CreateQueue, request);
        }

        /**
         * An Async wrapper for CreateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQueueRequestT = Model::CreateQueueRequest>
        void CreateQueueAsync(const CreateQueueRequestT& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::CreateQueue, request, handler, context);
        }

        /**
         * Permanently delete a job template you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTemplateOutcome DeleteJobTemplate(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobTemplateRequestT = Model::DeleteJobTemplateRequest>
        Model::DeleteJobTemplateOutcomeCallable DeleteJobTemplateCallable(const DeleteJobTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::DeleteJobTemplate, request);
        }

        /**
         * An Async wrapper for DeleteJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobTemplateRequestT = Model::DeleteJobTemplateRequest>
        void DeleteJobTemplateAsync(const DeleteJobTemplateRequestT& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::DeleteJobTemplate, request, handler, context);
        }

        /**
         * Permanently delete a policy that you created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::DeletePolicy, request);
        }

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::DeletePolicy, request, handler, context);
        }

        /**
         * Permanently delete a preset you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePresetOutcome DeletePreset(const Model::DeletePresetRequest& request) const;

        /**
         * A Callable wrapper for DeletePreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePresetRequestT = Model::DeletePresetRequest>
        Model::DeletePresetOutcomeCallable DeletePresetCallable(const DeletePresetRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::DeletePreset, request);
        }

        /**
         * An Async wrapper for DeletePreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePresetRequestT = Model::DeletePresetRequest>
        void DeletePresetAsync(const DeletePresetRequestT& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::DeletePreset, request, handler, context);
        }

        /**
         * Permanently delete a queue you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueueRequestT = Model::DeleteQueueRequest>
        Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const DeleteQueueRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::DeleteQueue, request);
        }

        /**
         * An Async wrapper for DeleteQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueueRequestT = Model::DeleteQueueRequest>
        void DeleteQueueAsync(const DeleteQueueRequestT& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::DeleteQueue, request, handler, context);
        }

        /**
         * Removes an association between the Amazon Resource Name (ARN) of an AWS
         * Certificate Manager (ACM) certificate and an AWS Elemental MediaConvert
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DisassociateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCertificateOutcome DisassociateCertificate(const Model::DisassociateCertificateRequest& request) const;

        /**
         * A Callable wrapper for DisassociateCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateCertificateRequestT = Model::DisassociateCertificateRequest>
        Model::DisassociateCertificateOutcomeCallable DisassociateCertificateCallable(const DisassociateCertificateRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::DisassociateCertificate, request);
        }

        /**
         * An Async wrapper for DisassociateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateCertificateRequestT = Model::DisassociateCertificateRequest>
        void DisassociateCertificateAsync(const DisassociateCertificateRequestT& request, const DisassociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::DisassociateCertificate, request, handler, context);
        }

        /**
         * Retrieve the JSON for a specific transcoding job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        Model::GetJobOutcomeCallable GetJobCallable(const GetJobRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::GetJob, request);
        }

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        void GetJobAsync(const GetJobRequestT& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::GetJob, request, handler, context);
        }

        /**
         * Retrieve the JSON for a specific job template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobTemplateOutcome GetJobTemplate(const Model::GetJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobTemplateRequestT = Model::GetJobTemplateRequest>
        Model::GetJobTemplateOutcomeCallable GetJobTemplateCallable(const GetJobTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::GetJobTemplate, request);
        }

        /**
         * An Async wrapper for GetJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobTemplateRequestT = Model::GetJobTemplateRequest>
        void GetJobTemplateAsync(const GetJobTemplateRequestT& request, const GetJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::GetJobTemplate, request, handler, context);
        }

        /**
         * Retrieve the JSON for your policy.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        Model::GetPolicyOutcomeCallable GetPolicyCallable(const GetPolicyRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::GetPolicy, request);
        }

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        void GetPolicyAsync(const GetPolicyRequestT& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::GetPolicy, request, handler, context);
        }

        /**
         * Retrieve the JSON for a specific preset.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPreset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPresetOutcome GetPreset(const Model::GetPresetRequest& request) const;

        /**
         * A Callable wrapper for GetPreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPresetRequestT = Model::GetPresetRequest>
        Model::GetPresetOutcomeCallable GetPresetCallable(const GetPresetRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::GetPreset, request);
        }

        /**
         * An Async wrapper for GetPreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPresetRequestT = Model::GetPresetRequest>
        void GetPresetAsync(const GetPresetRequestT& request, const GetPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::GetPreset, request, handler, context);
        }

        /**
         * Retrieve the JSON for a specific queue.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueOutcome GetQueue(const Model::GetQueueRequest& request) const;

        /**
         * A Callable wrapper for GetQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueueRequestT = Model::GetQueueRequest>
        Model::GetQueueOutcomeCallable GetQueueCallable(const GetQueueRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::GetQueue, request);
        }

        /**
         * An Async wrapper for GetQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueueRequestT = Model::GetQueueRequest>
        void GetQueueAsync(const GetQueueRequestT& request, const GetQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::GetQueue, request, handler, context);
        }

        /**
         * Retrieve a JSON array of up to twenty of your job templates. This will return
         * the templates themselves, not just a list of them. To retrieve the next twenty
         * templates, use the nextToken string returned with the array<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListJobTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobTemplatesOutcome ListJobTemplates(const Model::ListJobTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListJobTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobTemplatesRequestT = Model::ListJobTemplatesRequest>
        Model::ListJobTemplatesOutcomeCallable ListJobTemplatesCallable(const ListJobTemplatesRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::ListJobTemplates, request);
        }

        /**
         * An Async wrapper for ListJobTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobTemplatesRequestT = Model::ListJobTemplatesRequest>
        void ListJobTemplatesAsync(const ListJobTemplatesRequestT& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::ListJobTemplates, request, handler, context);
        }

        /**
         * Retrieve a JSON array of up to twenty of your most recently created jobs. This
         * array includes in-process, completed, and errored jobs. This will return the
         * jobs themselves, not just a list of the jobs. To retrieve the twenty next most
         * recent jobs, use the nextToken string returned with the array.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::ListJobs, request, handler, context);
        }

        /**
         * Retrieve a JSON array of up to twenty of your presets. This will return the
         * presets themselves, not just a list of them. To retrieve the next twenty
         * presets, use the nextToken string returned with the array.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListPresets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPresetsOutcome ListPresets(const Model::ListPresetsRequest& request) const;

        /**
         * A Callable wrapper for ListPresets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPresetsRequestT = Model::ListPresetsRequest>
        Model::ListPresetsOutcomeCallable ListPresetsCallable(const ListPresetsRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::ListPresets, request);
        }

        /**
         * An Async wrapper for ListPresets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPresetsRequestT = Model::ListPresetsRequest>
        void ListPresetsAsync(const ListPresetsRequestT& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::ListPresets, request, handler, context);
        }

        /**
         * Retrieve a JSON array of up to twenty of your queues. This will return the
         * queues themselves, not just a list of them. To retrieve the next twenty queues,
         * use the nextToken string returned with the array.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueuesRequestT = Model::ListQueuesRequest>
        Model::ListQueuesOutcomeCallable ListQueuesCallable(const ListQueuesRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::ListQueues, request);
        }

        /**
         * An Async wrapper for ListQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueuesRequestT = Model::ListQueuesRequest>
        void ListQueuesAsync(const ListQueuesRequestT& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::ListQueues, request, handler, context);
        }

        /**
         * Retrieve the tags for a MediaConvert resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::ListTagsForResource, request, handler, context);
        }

        /**
         * Create or change your policy. For more information about policies, see the user
         * guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/PutPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPolicyOutcome PutPolicy(const Model::PutPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPolicyRequestT = Model::PutPolicyRequest>
        Model::PutPolicyOutcomeCallable PutPolicyCallable(const PutPolicyRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::PutPolicy, request);
        }

        /**
         * An Async wrapper for PutPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPolicyRequestT = Model::PutPolicyRequest>
        void PutPolicyAsync(const PutPolicyRequestT& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::PutPolicy, request, handler, context);
        }

        /**
         * Add tags to a MediaConvert queue, preset, or job template. For information about
         * tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::TagResource, request, handler, context);
        }

        /**
         * Remove tags from a MediaConvert queue, preset, or job template. For information
         * about tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::UntagResource, request, handler, context);
        }

        /**
         * Modify one of your existing job templates.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobTemplateOutcome UpdateJobTemplate(const Model::UpdateJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobTemplateRequestT = Model::UpdateJobTemplateRequest>
        Model::UpdateJobTemplateOutcomeCallable UpdateJobTemplateCallable(const UpdateJobTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::UpdateJobTemplate, request);
        }

        /**
         * An Async wrapper for UpdateJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobTemplateRequestT = Model::UpdateJobTemplateRequest>
        void UpdateJobTemplateAsync(const UpdateJobTemplateRequestT& request, const UpdateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::UpdateJobTemplate, request, handler, context);
        }

        /**
         * Modify one of your existing presets.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePresetOutcome UpdatePreset(const Model::UpdatePresetRequest& request) const;

        /**
         * A Callable wrapper for UpdatePreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePresetRequestT = Model::UpdatePresetRequest>
        Model::UpdatePresetOutcomeCallable UpdatePresetCallable(const UpdatePresetRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::UpdatePreset, request);
        }

        /**
         * An Async wrapper for UpdatePreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePresetRequestT = Model::UpdatePresetRequest>
        void UpdatePresetAsync(const UpdatePresetRequestT& request, const UpdatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::UpdatePreset, request, handler, context);
        }

        /**
         * Modify one of your existing queues.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueOutcome UpdateQueue(const Model::UpdateQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueRequestT = Model::UpdateQueueRequest>
        Model::UpdateQueueOutcomeCallable UpdateQueueCallable(const UpdateQueueRequestT& request) const
        {
            return SubmitCallable(&MediaConvertClient::UpdateQueue, request);
        }

        /**
         * An Async wrapper for UpdateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueRequestT = Model::UpdateQueueRequest>
        void UpdateQueueAsync(const UpdateQueueRequestT& request, const UpdateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaConvertClient::UpdateQueue, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaConvertEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaConvertClient>;
      void init(const MediaConvertClientConfiguration& clientConfiguration);

      MediaConvertClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaConvertEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaConvert
} // namespace Aws
