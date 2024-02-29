/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/SageMakerServiceClientModel.h>

namespace Aws
{
namespace SageMaker
{
  /**
   * <p>Provides APIs for creating and managing SageMaker resources. </p> <p>Other
   * Resources:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker
   * Developer Guide</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon
   * Augmented AI Runtime API Reference</a> </p> </li> </ul>
   */
  class AWS_SAGEMAKER_API SageMakerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SageMakerClientConfiguration ClientConfigurationType;
      typedef SageMakerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::SageMaker::SageMakerClientConfiguration& clientConfiguration = Aws::SageMaker::SageMakerClientConfiguration(),
                        std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::SageMaker::SageMakerClientConfiguration& clientConfiguration = Aws::SageMaker::SageMakerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::SageMaker::SageMakerClientConfiguration& clientConfiguration = Aws::SageMaker::SageMakerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerClient();

        /**
         * <p>Creates an <i>association</i> between the source and the destination. A
         * source can be associated with multiple destinations, and a destination can be
         * associated with multiple sources. An association is a lineage tracking entity.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
         * SageMaker ML Lineage Tracking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::AddAssociationOutcome AddAssociation(const Model::AddAssociationRequest& request) const;

        /**
         * A Callable wrapper for AddAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddAssociationRequestT = Model::AddAssociationRequest>
        Model::AddAssociationOutcomeCallable AddAssociationCallable(const AddAssociationRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::AddAssociation, request);
        }

        /**
         * An Async wrapper for AddAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddAssociationRequestT = Model::AddAssociationRequest>
        void AddAssociationAsync(const AddAssociationRequestT& request, const AddAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::AddAssociation, request, handler, context);
        }

        /**
         * <p>Adds or overwrites one or more tags for the specified SageMaker resource. You
         * can add tags to notebook instances, training jobs, hyperparameter tuning jobs,
         * batch transform jobs, models, labeling jobs, work teams, endpoint
         * configurations, and endpoints.</p> <p>Each tag consists of a key and an optional
         * value. Tag keys must be unique per resource. For more information about tags,
         * see For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">Amazon
         * Web Services Tagging Strategies</a>.</p>  <p>Tags that you add to a
         * hyperparameter tuning job by calling this API are also added to any training
         * jobs that the hyperparameter tuning job launches after you call this API, but
         * not to training jobs that the hyperparameter tuning job launched before you
         * called this API. To make sure that the tags associated with a hyperparameter
         * tuning job are also added to all training jobs that the hyperparameter tuning
         * job launches, add the tags when you first create the tuning job by specifying
         * them in the <code>Tags</code> parameter of <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateHyperParameterTuningJob.html">CreateHyperParameterTuningJob</a>
         * </p>   <p>Tags that you add to a SageMaker Domain or User Profile
         * by calling this API are also added to any Apps that the Domain or User Profile
         * launches after you call this API, but not to Apps that the Domain or User
         * Profile launched before you called this API. To make sure that the tags
         * associated with a Domain or User Profile are also added to all Apps that the
         * Domain or User Profile launches, add the tags when you first create the Domain
         * or User Profile by specifying them in the <code>Tags</code> parameter of <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateDomain.html">CreateDomain</a>
         * or <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateUserProfile.html">CreateUserProfile</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        Model::AddTagsOutcomeCallable AddTagsCallable(const AddTagsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::AddTags, request);
        }

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        void AddTagsAsync(const AddTagsRequestT& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::AddTags, request, handler, context);
        }

        /**
         * <p>Associates a trial component with a trial. A trial component can be
         * associated with multiple trials. To disassociate a trial component from a trial,
         * call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DisassociateTrialComponent.html">DisassociateTrialComponent</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AssociateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrialComponentOutcome AssociateTrialComponent(const Model::AssociateTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for AssociateTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateTrialComponentRequestT = Model::AssociateTrialComponentRequest>
        Model::AssociateTrialComponentOutcomeCallable AssociateTrialComponentCallable(const AssociateTrialComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::AssociateTrialComponent, request);
        }

        /**
         * An Async wrapper for AssociateTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateTrialComponentRequestT = Model::AssociateTrialComponentRequest>
        void AssociateTrialComponentAsync(const AssociateTrialComponentRequestT& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::AssociateTrialComponent, request, handler, context);
        }

        /**
         * <p>This action batch describes a list of versioned model packages</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchDescribeModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeModelPackageOutcome BatchDescribeModelPackage(const Model::BatchDescribeModelPackageRequest& request) const;

        /**
         * A Callable wrapper for BatchDescribeModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDescribeModelPackageRequestT = Model::BatchDescribeModelPackageRequest>
        Model::BatchDescribeModelPackageOutcomeCallable BatchDescribeModelPackageCallable(const BatchDescribeModelPackageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::BatchDescribeModelPackage, request);
        }

        /**
         * An Async wrapper for BatchDescribeModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDescribeModelPackageRequestT = Model::BatchDescribeModelPackageRequest>
        void BatchDescribeModelPackageAsync(const BatchDescribeModelPackageRequestT& request, const BatchDescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::BatchDescribeModelPackage, request, handler, context);
        }

        /**
         * <p>Creates an <i>action</i>. An action is a lineage tracking entity that
         * represents an action or activity. For example, a model deployment or an HPO job.
         * Generally, an action involves at least one input or output artifact. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
         * SageMaker ML Lineage Tracking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActionOutcome CreateAction(const Model::CreateActionRequest& request) const;

        /**
         * A Callable wrapper for CreateAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateActionRequestT = Model::CreateActionRequest>
        Model::CreateActionOutcomeCallable CreateActionCallable(const CreateActionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateAction, request);
        }

        /**
         * An Async wrapper for CreateAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateActionRequestT = Model::CreateActionRequest>
        void CreateActionAsync(const CreateActionRequestT& request, const CreateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateAction, request, handler, context);
        }

        /**
         * <p>Create a machine learning algorithm that you can use in SageMaker and list in
         * the Amazon Web Services Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlgorithmOutcome CreateAlgorithm(const Model::CreateAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for CreateAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAlgorithmRequestT = Model::CreateAlgorithmRequest>
        Model::CreateAlgorithmOutcomeCallable CreateAlgorithmCallable(const CreateAlgorithmRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateAlgorithm, request);
        }

        /**
         * An Async wrapper for CreateAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAlgorithmRequestT = Model::CreateAlgorithmRequest>
        void CreateAlgorithmAsync(const CreateAlgorithmRequestT& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateAlgorithm, request, handler, context);
        }

        /**
         * <p>Creates a running app for the specified UserProfile. This operation is
         * automatically invoked by Amazon SageMaker upon access to the associated Domain,
         * and when new kernel configurations are selected by the user. A user may have
         * multiple Apps active simultaneously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        Model::CreateAppOutcomeCallable CreateAppCallable(const CreateAppRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateApp, request);
        }

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        void CreateAppAsync(const CreateAppRequestT& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateApp, request, handler, context);
        }

        /**
         * <p>Creates a configuration for running a SageMaker image as a KernelGateway app.
         * The configuration specifies the Amazon Elastic File System storage volume on the
         * image, and a list of the kernels in the image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppImageConfigOutcome CreateAppImageConfig(const Model::CreateAppImageConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateAppImageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppImageConfigRequestT = Model::CreateAppImageConfigRequest>
        Model::CreateAppImageConfigOutcomeCallable CreateAppImageConfigCallable(const CreateAppImageConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateAppImageConfig, request);
        }

        /**
         * An Async wrapper for CreateAppImageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppImageConfigRequestT = Model::CreateAppImageConfigRequest>
        void CreateAppImageConfigAsync(const CreateAppImageConfigRequestT& request, const CreateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateAppImageConfig, request, handler, context);
        }

        /**
         * <p>Creates an <i>artifact</i>. An artifact is a lineage tracking entity that
         * represents a URI addressable object or data. Some examples are the S3 URI of a
         * dataset and the ECR registry path of an image. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
         * SageMaker ML Lineage Tracking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateArtifactOutcome CreateArtifact(const Model::CreateArtifactRequest& request) const;

        /**
         * A Callable wrapper for CreateArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateArtifactRequestT = Model::CreateArtifactRequest>
        Model::CreateArtifactOutcomeCallable CreateArtifactCallable(const CreateArtifactRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateArtifact, request);
        }

        /**
         * An Async wrapper for CreateArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateArtifactRequestT = Model::CreateArtifactRequest>
        void CreateArtifactAsync(const CreateArtifactRequestT& request, const CreateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateArtifact, request, handler, context);
        }

        /**
         * <p>Creates an Autopilot job also referred to as Autopilot experiment or AutoML
         * job.</p>  <p>We recommend using the new versions <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJobV2.html">CreateAutoMLJobV2</a>
         * and <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeAutoMLJobV2.html">DescribeAutoMLJobV2</a>,
         * which offer backward compatibility.</p> <p> <code>CreateAutoMLJobV2</code> can
         * manage tabular problem types identical to those of its previous version
         * <code>CreateAutoMLJob</code>, as well as time-series forecasting, non-tabular
         * problem types such as image or text classification, and text generation (LLMs
         * fine-tuning).</p> <p>Find guidelines about how to migrate a
         * <code>CreateAutoMLJob</code> to <code>CreateAutoMLJobV2</code> in <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-automate-model-development-create-experiment.html#autopilot-create-experiment-api-migrate-v1-v2">Migrate
         * a CreateAutoMLJob to CreateAutoMLJobV2</a>.</p>  <p>You can find the
         * best-performing model after you run an AutoML job by calling <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeAutoMLJobV2.html">DescribeAutoMLJobV2</a>
         * (recommended) or <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeAutoMLJob.html">DescribeAutoMLJob</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoMLJobOutcome CreateAutoMLJob(const Model::CreateAutoMLJobRequest& request) const;

        /**
         * A Callable wrapper for CreateAutoMLJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAutoMLJobRequestT = Model::CreateAutoMLJobRequest>
        Model::CreateAutoMLJobOutcomeCallable CreateAutoMLJobCallable(const CreateAutoMLJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateAutoMLJob, request);
        }

        /**
         * An Async wrapper for CreateAutoMLJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAutoMLJobRequestT = Model::CreateAutoMLJobRequest>
        void CreateAutoMLJobAsync(const CreateAutoMLJobRequestT& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateAutoMLJob, request, handler, context);
        }

        /**
         * <p>Creates an Autopilot job also referred to as Autopilot experiment or AutoML
         * job V2.</p>  <p> <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJobV2.html">CreateAutoMLJobV2</a>
         * and <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeAutoMLJobV2.html">DescribeAutoMLJobV2</a>
         * are new versions of <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJob.html">CreateAutoMLJob</a>
         * and <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeAutoMLJob.html">DescribeAutoMLJob</a>
         * which offer backward compatibility.</p> <p> <code>CreateAutoMLJobV2</code> can
         * manage tabular problem types identical to those of its previous version
         * <code>CreateAutoMLJob</code>, as well as time-series forecasting, non-tabular
         * problem types such as image or text classification, and text generation (LLMs
         * fine-tuning).</p> <p>Find guidelines about how to migrate a
         * <code>CreateAutoMLJob</code> to <code>CreateAutoMLJobV2</code> in <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-automate-model-development-create-experiment.html#autopilot-create-experiment-api-migrate-v1-v2">Migrate
         * a CreateAutoMLJob to CreateAutoMLJobV2</a>.</p>  <p>For the list of
         * available problem types supported by <code>CreateAutoMLJobV2</code>, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLProblemTypeConfig.html">AutoMLProblemTypeConfig</a>.</p>
         * <p>You can find the best-performing model after you run an AutoML job V2 by
         * calling <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeAutoMLJobV2.html">DescribeAutoMLJobV2</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAutoMLJobV2">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoMLJobV2Outcome CreateAutoMLJobV2(const Model::CreateAutoMLJobV2Request& request) const;

        /**
         * A Callable wrapper for CreateAutoMLJobV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAutoMLJobV2RequestT = Model::CreateAutoMLJobV2Request>
        Model::CreateAutoMLJobV2OutcomeCallable CreateAutoMLJobV2Callable(const CreateAutoMLJobV2RequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateAutoMLJobV2, request);
        }

        /**
         * An Async wrapper for CreateAutoMLJobV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAutoMLJobV2RequestT = Model::CreateAutoMLJobV2Request>
        void CreateAutoMLJobV2Async(const CreateAutoMLJobV2RequestT& request, const CreateAutoMLJobV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateAutoMLJobV2, request, handler, context);
        }

        /**
         * <p>Creates a SageMaker HyperPod cluster. SageMaker HyperPod is a capability of
         * SageMaker for creating and managing persistent clusters for developing large
         * machine learning models, such as large language models (LLMs) and diffusion
         * models. To learn more, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod.html">Amazon
         * SageMaker HyperPod</a> in the <i>Amazon SageMaker Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterRequestT& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateCluster, request, handler, context);
        }

        /**
         * <p>Creates a Git repository as a resource in your SageMaker account. You can
         * associate the repository with notebook instances so that you can use Git source
         * control for the notebooks you create. The Git repository is a resource in your
         * SageMaker account, so it can be associated with more than one notebook instance,
         * and it persists independently from the lifecycle of any notebook instances it is
         * associated with.</p> <p>The repository can be hosted either in <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
         * Web Services CodeCommit</a> or in any other Git repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCodeRepositoryOutcome CreateCodeRepository(const Model::CreateCodeRepositoryRequest& request) const;

        /**
         * A Callable wrapper for CreateCodeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCodeRepositoryRequestT = Model::CreateCodeRepositoryRequest>
        Model::CreateCodeRepositoryOutcomeCallable CreateCodeRepositoryCallable(const CreateCodeRepositoryRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateCodeRepository, request);
        }

        /**
         * An Async wrapper for CreateCodeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCodeRepositoryRequestT = Model::CreateCodeRepositoryRequest>
        void CreateCodeRepositoryAsync(const CreateCodeRepositoryRequestT& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateCodeRepository, request, handler, context);
        }

        /**
         * <p>Starts a model compilation job. After the model has been compiled, Amazon
         * SageMaker saves the resulting model artifacts to an Amazon Simple Storage
         * Service (Amazon S3) bucket that you specify. </p> <p>If you choose to host your
         * model using Amazon SageMaker hosting services, you can use the resulting model
         * artifacts as part of the model. You can also use the artifacts with Amazon Web
         * Services IoT Greengrass. In that case, deploy them as an ML resource.</p> <p>In
         * the request body, you provide the following:</p> <ul> <li> <p>A name for the
         * compilation job</p> </li> <li> <p> Information about the input model artifacts
         * </p> </li> <li> <p>The output location for the compiled model and the device
         * (target) that the model runs on </p> </li> <li> <p>The Amazon Resource Name
         * (ARN) of the IAM role that Amazon SageMaker assumes to perform the model
         * compilation job. </p> </li> </ul> <p>You can also provide a <code>Tag</code> to
         * track the model compilation job's resource use and costs. The response body
         * contains the <code>CompilationJobArn</code> for the compiled job.</p> <p>To stop
         * a model compilation job, use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StopCompilationJob.html">StopCompilationJob</a>.
         * To get information about a particular model compilation job, use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeCompilationJob.html">DescribeCompilationJob</a>.
         * To get information about multiple model compilation jobs, use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListCompilationJobs.html">ListCompilationJobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCompilationJobOutcome CreateCompilationJob(const Model::CreateCompilationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateCompilationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCompilationJobRequestT = Model::CreateCompilationJobRequest>
        Model::CreateCompilationJobOutcomeCallable CreateCompilationJobCallable(const CreateCompilationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateCompilationJob, request);
        }

        /**
         * An Async wrapper for CreateCompilationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCompilationJobRequestT = Model::CreateCompilationJobRequest>
        void CreateCompilationJobAsync(const CreateCompilationJobRequestT& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateCompilationJob, request, handler, context);
        }

        /**
         * <p>Creates a <i>context</i>. A context is a lineage tracking entity that
         * represents a logical grouping of other tracking or experiment entities. Some
         * examples are an endpoint and a model package. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
         * SageMaker ML Lineage Tracking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateContext">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContextOutcome CreateContext(const Model::CreateContextRequest& request) const;

        /**
         * A Callable wrapper for CreateContext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContextRequestT = Model::CreateContextRequest>
        Model::CreateContextOutcomeCallable CreateContextCallable(const CreateContextRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateContext, request);
        }

        /**
         * An Async wrapper for CreateContext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContextRequestT = Model::CreateContextRequest>
        void CreateContextAsync(const CreateContextRequestT& request, const CreateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateContext, request, handler, context);
        }

        /**
         * <p>Creates a definition for a job that monitors data quality and drift. For
         * information about model monitor, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
         * SageMaker Model Monitor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDataQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataQualityJobDefinitionOutcome CreateDataQualityJobDefinition(const Model::CreateDataQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateDataQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataQualityJobDefinitionRequestT = Model::CreateDataQualityJobDefinitionRequest>
        Model::CreateDataQualityJobDefinitionOutcomeCallable CreateDataQualityJobDefinitionCallable(const CreateDataQualityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateDataQualityJobDefinition, request);
        }

        /**
         * An Async wrapper for CreateDataQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataQualityJobDefinitionRequestT = Model::CreateDataQualityJobDefinitionRequest>
        void CreateDataQualityJobDefinitionAsync(const CreateDataQualityJobDefinitionRequestT& request, const CreateDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateDataQualityJobDefinition, request, handler, context);
        }

        /**
         * <p>Creates a device fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDeviceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceFleetOutcome CreateDeviceFleet(const Model::CreateDeviceFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateDeviceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeviceFleetRequestT = Model::CreateDeviceFleetRequest>
        Model::CreateDeviceFleetOutcomeCallable CreateDeviceFleetCallable(const CreateDeviceFleetRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateDeviceFleet, request);
        }

        /**
         * An Async wrapper for CreateDeviceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeviceFleetRequestT = Model::CreateDeviceFleetRequest>
        void CreateDeviceFleetAsync(const CreateDeviceFleetRequestT& request, const CreateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateDeviceFleet, request, handler, context);
        }

        /**
         * <p>Creates a <code>Domain</code>. A domain consists of an associated Amazon
         * Elastic File System volume, a list of authorized users, and a variety of
         * security, application, policy, and Amazon Virtual Private Cloud (VPC)
         * configurations. Users within a domain can share notebook files and other
         * artifacts with each other.</p> <p> <b>EFS storage</b> </p> <p>When a domain is
         * created, an EFS volume is created for use by all of the users within the domain.
         * Each user receives a private home directory within the EFS volume for notebooks,
         * Git repositories, and data files.</p> <p>SageMaker uses the Amazon Web Services
         * Key Management Service (Amazon Web Services KMS) to encrypt the EFS volume
         * attached to the domain with an Amazon Web Services managed key by default. For
         * more control, you can specify a customer managed key. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/encryption-at-rest.html">Protect
         * Data at Rest Using Encryption</a>.</p> <p> <b>VPC configuration</b> </p> <p>All
         * traffic between the domain and the Amazon EFS volume is through the specified
         * VPC and subnets. For other traffic, you can specify the
         * <code>AppNetworkAccessType</code> parameter. <code>AppNetworkAccessType</code>
         * corresponds to the network access type that you choose when you onboard to the
         * domain. The following options are available:</p> <ul> <li> <p>
         * <code>PublicInternetOnly</code> - Non-EFS traffic goes through a VPC managed by
         * Amazon SageMaker, which allows internet access. This is the default value.</p>
         * </li> <li> <p> <code>VpcOnly</code> - All traffic is through the specified VPC
         * and subnets. Internet access is disabled by default. To allow internet access,
         * you must specify a NAT gateway.</p> <p>When internet access is disabled, you
         * won't be able to run a Amazon SageMaker Studio notebook or to train or host
         * models unless your VPC has an interface endpoint to the SageMaker API and
         * runtime or a NAT gateway and your security groups allow outbound
         * connections.</p> </li> </ul>  <p>NFS traffic over TCP on port 2049
         * needs to be allowed in both inbound and outbound rules in order to launch a
         * Amazon SageMaker Studio app successfully.</p>  <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-notebooks-and-internet-access.html">Connect
         * Amazon SageMaker Studio Notebooks to Resources in a VPC</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateDomain, request, handler, context);
        }

        /**
         * <p>Creates an edge deployment plan, consisting of multiple stages. Each stage
         * may have a different deployment configuration and devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEdgeDeploymentPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEdgeDeploymentPlanOutcome CreateEdgeDeploymentPlan(const Model::CreateEdgeDeploymentPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateEdgeDeploymentPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEdgeDeploymentPlanRequestT = Model::CreateEdgeDeploymentPlanRequest>
        Model::CreateEdgeDeploymentPlanOutcomeCallable CreateEdgeDeploymentPlanCallable(const CreateEdgeDeploymentPlanRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateEdgeDeploymentPlan, request);
        }

        /**
         * An Async wrapper for CreateEdgeDeploymentPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEdgeDeploymentPlanRequestT = Model::CreateEdgeDeploymentPlanRequest>
        void CreateEdgeDeploymentPlanAsync(const CreateEdgeDeploymentPlanRequestT& request, const CreateEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateEdgeDeploymentPlan, request, handler, context);
        }

        /**
         * <p>Creates a new stage in an existing edge deployment plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEdgeDeploymentStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEdgeDeploymentStageOutcome CreateEdgeDeploymentStage(const Model::CreateEdgeDeploymentStageRequest& request) const;

        /**
         * A Callable wrapper for CreateEdgeDeploymentStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEdgeDeploymentStageRequestT = Model::CreateEdgeDeploymentStageRequest>
        Model::CreateEdgeDeploymentStageOutcomeCallable CreateEdgeDeploymentStageCallable(const CreateEdgeDeploymentStageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateEdgeDeploymentStage, request);
        }

        /**
         * An Async wrapper for CreateEdgeDeploymentStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEdgeDeploymentStageRequestT = Model::CreateEdgeDeploymentStageRequest>
        void CreateEdgeDeploymentStageAsync(const CreateEdgeDeploymentStageRequestT& request, const CreateEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateEdgeDeploymentStage, request, handler, context);
        }

        /**
         * <p>Starts a SageMaker Edge Manager model packaging job. Edge Manager will use
         * the model artifacts from the Amazon Simple Storage Service bucket that you
         * specify. After the model has been packaged, Amazon SageMaker saves the resulting
         * artifacts to an S3 bucket that you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEdgePackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEdgePackagingJobOutcome CreateEdgePackagingJob(const Model::CreateEdgePackagingJobRequest& request) const;

        /**
         * A Callable wrapper for CreateEdgePackagingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEdgePackagingJobRequestT = Model::CreateEdgePackagingJobRequest>
        Model::CreateEdgePackagingJobOutcomeCallable CreateEdgePackagingJobCallable(const CreateEdgePackagingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateEdgePackagingJob, request);
        }

        /**
         * An Async wrapper for CreateEdgePackagingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEdgePackagingJobRequestT = Model::CreateEdgePackagingJobRequest>
        void CreateEdgePackagingJobAsync(const CreateEdgePackagingJobRequestT& request, const CreateEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateEdgePackagingJob, request, handler, context);
        }

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. SageMaker uses the endpoint to provision resources and deploy models.
         * You create the endpoint configuration with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
         * API. </p> <p> Use this API to deploy models using SageMaker hosting services.
         * </p>  <p> You must not delete an <code>EndpointConfig</code> that is in
         * use by an endpoint that is live or while the <code>UpdateEndpoint</code> or
         * <code>CreateEndpoint</code> operations are being performed on the endpoint. To
         * update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         *  <p>The endpoint name must be unique within an Amazon Web Services Region
         * in your Amazon Web Services account. </p> <p>When it receives the request,
         * SageMaker creates the endpoint, launches the resources (ML compute instances),
         * and deploys the model(s) on them. </p>  <p>When you call <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>,
         * a load call is made to DynamoDB to verify that your endpoint configuration
         * exists. When you read data from a DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeEndpointConfig.html">DescribeEndpointConfig</a>
         * before calling <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>
         * to minimize the potential impact of a DynamoDB eventually consistent read.</p>
         *  <p>When SageMaker receives the request, it sets the endpoint status to
         * <code>Creating</code>. After it creates the endpoint, it sets the status to
         * <code>InService</code>. SageMaker can then process incoming requests for
         * inferences. To check the status of an endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API.</p> <p>If any of the models hosted at this endpoint get model data from an
         * Amazon S3 location, SageMaker uses Amazon Web Services Security Token Service to
         * download model artifacts from the S3 path you provided. Amazon Web Services STS
         * is activated in your Amazon Web Services account by default. If you previously
         * deactivated Amazon Web Services STS for a region, you need to reactivate Amazon
         * Web Services STS for that region. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
         * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
         *  <p> To add the IAM role policies for using this API operation, go to the
         * <a href="https://console.aws.amazon.com/iam/">IAM console</a>, and choose Roles
         * in the left navigation pane. Search the IAM role that you want to grant access
         * to use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>
         * and <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
         * API operations, add the following policies to the role. </p> <ul> <li> <p>Option
         * 1: For a full SageMaker access, search and attach the
         * <code>AmazonSageMakerFullAccess</code> policy.</p> </li> <li> <p>Option 2: For
         * granting a limited access to an IAM role, paste the following Action elements
         * manually into the JSON file of the IAM role: </p> <p> <code>"Action":
         * ["sagemaker:CreateEndpoint", "sagemaker:CreateEndpointConfig"]</code> </p> <p>
         * <code>"Resource": [</code> </p> <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint/endpointName"</code> </p>
         * <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint-config/endpointConfigName"</code>
         * </p> <p> <code>]</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/api-permissions-reference.html">SageMaker
         * API Permissions: Actions, Permissions, and Resources Reference</a>.</p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEndpointRequestT = Model::CreateEndpointRequest>
        Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const CreateEndpointRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateEndpoint, request);
        }

        /**
         * An Async wrapper for CreateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEndpointRequestT = Model::CreateEndpointRequest>
        void CreateEndpointAsync(const CreateEndpointRequestT& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateEndpoint, request, handler, context);
        }

        /**
         * <p>Creates an endpoint configuration that SageMaker hosting services uses to
         * deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want SageMaker to provision. Then you call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>
         * API.</p>  <p> Use this API if you want to use SageMaker hosting services
         * to deploy models into production. </p>  <p>In the request, you define a
         * <code>ProductionVariant</code>, for each model that you want to deploy. Each
         * <code>ProductionVariant</code> parameter also describes the resources that you
         * want SageMaker to provision. This includes the number and type of ML compute
         * instances to deploy. </p> <p>If you are hosting multiple models, you also assign
         * a <code>VariantWeight</code> to specify how much traffic you want to allocate to
         * each model. For example, suppose that you want to host two models, A and B, and
         * you assign traffic weight 2 for model A and 1 for model B. SageMaker distributes
         * two-thirds of the traffic to Model A, and one-third to model B. </p> 
         * <p>When you call <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>,
         * a load call is made to DynamoDB to verify that your endpoint configuration
         * exists. When you read data from a DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeEndpointConfig.html">DescribeEndpointConfig</a>
         * before calling <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>
         * to minimize the potential impact of a DynamoDB eventually consistent read.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointConfigOutcome CreateEndpointConfig(const Model::CreateEndpointConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpointConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEndpointConfigRequestT = Model::CreateEndpointConfigRequest>
        Model::CreateEndpointConfigOutcomeCallable CreateEndpointConfigCallable(const CreateEndpointConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateEndpointConfig, request);
        }

        /**
         * An Async wrapper for CreateEndpointConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEndpointConfigRequestT = Model::CreateEndpointConfigRequest>
        void CreateEndpointConfigAsync(const CreateEndpointConfigRequestT& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateEndpointConfig, request, handler, context);
        }

        /**
         * <p>Creates a SageMaker <i>experiment</i>. An experiment is a collection of
         * <i>trials</i> that are observed, compared and evaluated as a group. A trial is a
         * set of steps, called <i>trial components</i>, that produce a machine learning
         * model.</p>  <p>In the Studio UI, trials are referred to as <i>run
         * groups</i> and trial components are referred to as <i>runs</i>.</p> 
         * <p>The goal of an experiment is to determine the components that produce the
         * best model. Multiple trials are performed, each one isolating and measuring the
         * impact of a change to one or more inputs, while keeping the remaining inputs
         * constant.</p> <p>When you use SageMaker Studio or the SageMaker Python SDK, all
         * experiments, trials, and trial components are automatically tracked, logged, and
         * indexed. When you use the Amazon Web Services SDK for Python (Boto), you must
         * use the logging APIs provided by the SDK.</p> <p>You can add tags to
         * experiments, trials, trial components and then use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
         * API to search for the tags.</p> <p>To add a description to an experiment,
         * specify the optional <code>Description</code> parameter. To add a description
         * later, or to change the description, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateExperiment.html">UpdateExperiment</a>
         * API.</p> <p>To get a list of all your experiments, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListExperiments.html">ListExperiments</a>
         * API. To view an experiment's properties, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeExperiment.html">DescribeExperiment</a>
         * API. To get a list of all the trials associated with an experiment, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListTrials.html">ListTrials</a>
         * API. To create a trial call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrial.html">CreateTrial</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperimentOutcome CreateExperiment(const Model::CreateExperimentRequest& request) const;

        /**
         * A Callable wrapper for CreateExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExperimentRequestT = Model::CreateExperimentRequest>
        Model::CreateExperimentOutcomeCallable CreateExperimentCallable(const CreateExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateExperiment, request);
        }

        /**
         * An Async wrapper for CreateExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExperimentRequestT = Model::CreateExperimentRequest>
        void CreateExperimentAsync(const CreateExperimentRequestT& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateExperiment, request, handler, context);
        }

        /**
         * <p>Create a new <code>FeatureGroup</code>. A <code>FeatureGroup</code> is a
         * group of <code>Features</code> defined in the <code>FeatureStore</code> to
         * describe a <code>Record</code>. </p> <p>The <code>FeatureGroup</code> defines
         * the schema and features contained in the <code>FeatureGroup</code>. A
         * <code>FeatureGroup</code> definition is composed of a list of
         * <code>Features</code>, a <code>RecordIdentifierFeatureName</code>, an
         * <code>EventTimeFeatureName</code> and configurations for its
         * <code>OnlineStore</code> and <code>OfflineStore</code>. Check <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">Amazon
         * Web Services service quotas</a> to see the <code>FeatureGroup</code>s quota for
         * your Amazon Web Services account.</p> <p>Note that it can take approximately
         * 10-15 minutes to provision an <code>OnlineStore</code> <code>FeatureGroup</code>
         * with the <code>InMemory</code> <code>StorageType</code>.</p>  <p>You
         * must include at least one of <code>OnlineStoreConfig</code> and
         * <code>OfflineStoreConfig</code> to create a <code>FeatureGroup</code>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateFeatureGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFeatureGroupOutcome CreateFeatureGroup(const Model::CreateFeatureGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateFeatureGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFeatureGroupRequestT = Model::CreateFeatureGroupRequest>
        Model::CreateFeatureGroupOutcomeCallable CreateFeatureGroupCallable(const CreateFeatureGroupRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateFeatureGroup, request);
        }

        /**
         * An Async wrapper for CreateFeatureGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFeatureGroupRequestT = Model::CreateFeatureGroupRequest>
        void CreateFeatureGroupAsync(const CreateFeatureGroupRequestT& request, const CreateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateFeatureGroup, request, handler, context);
        }

        /**
         * <p>Creates a flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowDefinitionOutcome CreateFlowDefinition(const Model::CreateFlowDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateFlowDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFlowDefinitionRequestT = Model::CreateFlowDefinitionRequest>
        Model::CreateFlowDefinitionOutcomeCallable CreateFlowDefinitionCallable(const CreateFlowDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateFlowDefinition, request);
        }

        /**
         * An Async wrapper for CreateFlowDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFlowDefinitionRequestT = Model::CreateFlowDefinitionRequest>
        void CreateFlowDefinitionAsync(const CreateFlowDefinitionRequestT& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateFlowDefinition, request, handler, context);
        }

        /**
         * <p>Create a hub.</p>  <p>Hub APIs are only callable through SageMaker
         * Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHub">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHubOutcome CreateHub(const Model::CreateHubRequest& request) const;

        /**
         * A Callable wrapper for CreateHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHubRequestT = Model::CreateHubRequest>
        Model::CreateHubOutcomeCallable CreateHubCallable(const CreateHubRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateHub, request);
        }

        /**
         * An Async wrapper for CreateHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHubRequestT = Model::CreateHubRequest>
        void CreateHubAsync(const CreateHubRequestT& request, const CreateHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateHub, request, handler, context);
        }

        /**
         * <p>Defines the settings you will use for the human review workflow user
         * interface. Reviewers will see a three-panel interface with an instruction area,
         * the item to review, and an input area.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHumanTaskUiOutcome CreateHumanTaskUi(const Model::CreateHumanTaskUiRequest& request) const;

        /**
         * A Callable wrapper for CreateHumanTaskUi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHumanTaskUiRequestT = Model::CreateHumanTaskUiRequest>
        Model::CreateHumanTaskUiOutcomeCallable CreateHumanTaskUiCallable(const CreateHumanTaskUiRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateHumanTaskUi, request);
        }

        /**
         * An Async wrapper for CreateHumanTaskUi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHumanTaskUiRequestT = Model::CreateHumanTaskUiRequest>
        void CreateHumanTaskUiAsync(const CreateHumanTaskUiRequestT& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateHumanTaskUi, request, handler, context);
        }

        /**
         * <p>Starts a hyperparameter tuning job. A hyperparameter tuning job finds the
         * best version of a model by running many training jobs on your dataset using the
         * algorithm you choose and values for hyperparameters within ranges that you
         * specify. It then chooses the hyperparameter values that result in a model that
         * performs the best, as measured by an objective metric that you choose.</p> <p>A
         * hyperparameter tuning job automatically creates Amazon SageMaker experiments,
         * trials, and trial components for each training job that it runs. You can view
         * these entities in Amazon SageMaker Studio. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/experiments-view-compare.html#experiments-view">View
         * Experiments, Trials, and Trial Components</a>.</p>  <p>Do not include
         * any security-sensitive information including account access IDs, secrets or
         * tokens in any hyperparameter field. If the use of security-sensitive credentials
         * are detected, SageMaker will reject your training job request and return an
         * exception error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHyperParameterTuningJobOutcome CreateHyperParameterTuningJob(const Model::CreateHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for CreateHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHyperParameterTuningJobRequestT = Model::CreateHyperParameterTuningJobRequest>
        Model::CreateHyperParameterTuningJobOutcomeCallable CreateHyperParameterTuningJobCallable(const CreateHyperParameterTuningJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateHyperParameterTuningJob, request);
        }

        /**
         * An Async wrapper for CreateHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHyperParameterTuningJobRequestT = Model::CreateHyperParameterTuningJobRequest>
        void CreateHyperParameterTuningJobAsync(const CreateHyperParameterTuningJobRequestT& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateHyperParameterTuningJob, request, handler, context);
        }

        /**
         * <p>Creates a custom SageMaker image. A SageMaker image is a set of image
         * versions. Each image version represents a container image stored in Amazon ECR.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-byoi.html">Bring
         * your own SageMaker image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageOutcome CreateImage(const Model::CreateImageRequest& request) const;

        /**
         * A Callable wrapper for CreateImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImageRequestT = Model::CreateImageRequest>
        Model::CreateImageOutcomeCallable CreateImageCallable(const CreateImageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateImage, request);
        }

        /**
         * An Async wrapper for CreateImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImageRequestT = Model::CreateImageRequest>
        void CreateImageAsync(const CreateImageRequestT& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateImage, request, handler, context);
        }

        /**
         * <p>Creates a version of the SageMaker image specified by <code>ImageName</code>.
         * The version represents the Amazon ECR container image specified by
         * <code>BaseImage</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageVersionOutcome CreateImageVersion(const Model::CreateImageVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateImageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImageVersionRequestT = Model::CreateImageVersionRequest>
        Model::CreateImageVersionOutcomeCallable CreateImageVersionCallable(const CreateImageVersionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateImageVersion, request);
        }

        /**
         * An Async wrapper for CreateImageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImageVersionRequestT = Model::CreateImageVersionRequest>
        void CreateImageVersionAsync(const CreateImageVersionRequestT& request, const CreateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateImageVersion, request, handler, context);
        }

        /**
         * <p>Creates an inference component, which is a SageMaker hosting object that you
         * can use to deploy a model to an endpoint. In the inference component settings,
         * you specify the model, the endpoint, and how the model utilizes the resources
         * that the endpoint hosts. You can optimize resource utilization by tailoring how
         * the required CPU cores, accelerators, and memory are allocated. You can deploy
         * multiple inference components to an endpoint, where each inference component
         * contains one model and the resource utilization needs for that individual model.
         * After you deploy an inference component, you can directly invoke the associated
         * model when you use the InvokeEndpoint API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateInferenceComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInferenceComponentOutcome CreateInferenceComponent(const Model::CreateInferenceComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateInferenceComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInferenceComponentRequestT = Model::CreateInferenceComponentRequest>
        Model::CreateInferenceComponentOutcomeCallable CreateInferenceComponentCallable(const CreateInferenceComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateInferenceComponent, request);
        }

        /**
         * An Async wrapper for CreateInferenceComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInferenceComponentRequestT = Model::CreateInferenceComponentRequest>
        void CreateInferenceComponentAsync(const CreateInferenceComponentRequestT& request, const CreateInferenceComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateInferenceComponent, request, handler, context);
        }

        /**
         * <p> Creates an inference experiment using the configurations specified in the
         * request. </p> <p> Use this API to setup and schedule an experiment to compare
         * model variants on a Amazon SageMaker inference endpoint. For more information
         * about inference experiments, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
         * tests</a>. </p> <p> Amazon SageMaker begins your experiment at the scheduled
         * time and routes traffic to your endpoint's model variants based on your
         * specified configuration. </p> <p> While the experiment is in progress or after
         * it has concluded, you can view metrics that compare your model variants. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests-view-monitor-edit.html">View,
         * monitor, and edit shadow tests</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInferenceExperimentOutcome CreateInferenceExperiment(const Model::CreateInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for CreateInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInferenceExperimentRequestT = Model::CreateInferenceExperimentRequest>
        Model::CreateInferenceExperimentOutcomeCallable CreateInferenceExperimentCallable(const CreateInferenceExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateInferenceExperiment, request);
        }

        /**
         * An Async wrapper for CreateInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInferenceExperimentRequestT = Model::CreateInferenceExperimentRequest>
        void CreateInferenceExperimentAsync(const CreateInferenceExperimentRequestT& request, const CreateInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateInferenceExperiment, request, handler, context);
        }

        /**
         * <p>Starts a recommendation job. You can create either an instance recommendation
         * or load test job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateInferenceRecommendationsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInferenceRecommendationsJobOutcome CreateInferenceRecommendationsJob(const Model::CreateInferenceRecommendationsJobRequest& request) const;

        /**
         * A Callable wrapper for CreateInferenceRecommendationsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInferenceRecommendationsJobRequestT = Model::CreateInferenceRecommendationsJobRequest>
        Model::CreateInferenceRecommendationsJobOutcomeCallable CreateInferenceRecommendationsJobCallable(const CreateInferenceRecommendationsJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateInferenceRecommendationsJob, request);
        }

        /**
         * An Async wrapper for CreateInferenceRecommendationsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInferenceRecommendationsJobRequestT = Model::CreateInferenceRecommendationsJobRequest>
        void CreateInferenceRecommendationsJobAsync(const CreateInferenceRecommendationsJobRequestT& request, const CreateInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateInferenceRecommendationsJob, request, handler, context);
        }

        /**
         * <p>Creates a job that uses workers to label the data objects in your input
         * dataset. You can use the labeled data to train machine learning models. </p>
         * <p>You can select your workforce from one of three providers:</p> <ul> <li> <p>A
         * private workforce that you create. It can include employees, contractors, and
         * outside experts. Use a private workforce when want the data to stay within your
         * organization or when a specific set of skills is required.</p> </li> <li> <p>One
         * or more vendors that you select from the Amazon Web Services Marketplace.
         * Vendors provide expertise in specific areas. </p> </li> <li> <p>The Amazon
         * Mechanical Turk workforce. This is the largest workforce, but it should only be
         * used for public data or data that has been stripped of any personally
         * identifiable information.</p> </li> </ul> <p>You can also use <i>automated data
         * labeling</i> to reduce the number of data objects that need to be labeled by a
         * human. Automated data labeling uses <i>active learning</i> to determine if a
         * data object can be labeled by machine or if it needs to be sent to a human
         * worker. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using
         * Automated Data Labeling</a>.</p> <p>The data objects to be labeled are contained
         * in an Amazon S3 bucket. You create a <i>manifest file</i> that describes the
         * location of each object. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input
         * and Output Data</a>.</p> <p>The output can be used as the manifest file for
         * another labeling job or as training data for your machine learning models.</p>
         * <p>You can use this operation to create a static labeling job or a streaming
         * labeling job. A static labeling job stops if all data objects in the input
         * manifest file identified in <code>ManifestS3Uri</code> have been labeled. A
         * streaming labeling job runs perpetually until it is manually stopped, or remains
         * idle for 10 days. You can send new data objects to an active
         * (<code>InProgress</code>) streaming labeling job in real time. To learn how to
         * create a static labeling job, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-create-labeling-job-api.html">Create
         * a Labeling Job (API) </a> in the Amazon SageMaker Developer Guide. To learn how
         * to create a streaming labeling job, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-create-job.html">Create
         * a Streaming Labeling Job</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelingJobOutcome CreateLabelingJob(const Model::CreateLabelingJobRequest& request) const;

        /**
         * A Callable wrapper for CreateLabelingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLabelingJobRequestT = Model::CreateLabelingJobRequest>
        Model::CreateLabelingJobOutcomeCallable CreateLabelingJobCallable(const CreateLabelingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateLabelingJob, request);
        }

        /**
         * An Async wrapper for CreateLabelingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLabelingJobRequestT = Model::CreateLabelingJobRequest>
        void CreateLabelingJobAsync(const CreateLabelingJobRequestT& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateLabelingJob, request, handler, context);
        }

        /**
         * <p>Creates a model in SageMaker. In the request, you name the model and describe
         * a primary container. For the primary container, you specify the Docker image
         * that contains inference code, artifacts (from prior training), and a custom
         * environment map that the inference code uses when you deploy the model for
         * predictions.</p> <p>Use this API to create a model if you want to use SageMaker
         * hosting services or run a batch transform job.</p> <p>To host your model, you
         * create an endpoint configuration with the <code>CreateEndpointConfig</code> API,
         * and then create an endpoint with the <code>CreateEndpoint</code> API. SageMaker
         * then deploys all of the containers that you defined for the model in the hosting
         * environment. </p> <p>To run a batch transform using your model, you start a job
         * with the <code>CreateTransformJob</code> API. SageMaker uses your model and your
         * dataset to get inferences which are then saved to a specified S3 location.</p>
         * <p>In the request, you also provide an IAM role that SageMaker can assume to
         * access model artifacts and docker image for deployment on ML compute hosting
         * instances or for batch transform jobs. In addition, you also use the IAM role to
         * manage permissions the inference code needs. For example, if the inference code
         * access any other Amazon Web Services resources, you grant necessary permissions
         * via this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * A Callable wrapper for CreateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        Model::CreateModelOutcomeCallable CreateModelCallable(const CreateModelRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateModel, request);
        }

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        void CreateModelAsync(const CreateModelRequestT& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateModel, request, handler, context);
        }

        /**
         * <p>Creates the definition for a model bias job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelBiasJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelBiasJobDefinitionOutcome CreateModelBiasJobDefinition(const Model::CreateModelBiasJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateModelBiasJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelBiasJobDefinitionRequestT = Model::CreateModelBiasJobDefinitionRequest>
        Model::CreateModelBiasJobDefinitionOutcomeCallable CreateModelBiasJobDefinitionCallable(const CreateModelBiasJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateModelBiasJobDefinition, request);
        }

        /**
         * An Async wrapper for CreateModelBiasJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelBiasJobDefinitionRequestT = Model::CreateModelBiasJobDefinitionRequest>
        void CreateModelBiasJobDefinitionAsync(const CreateModelBiasJobDefinitionRequestT& request, const CreateModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateModelBiasJobDefinition, request, handler, context);
        }

        /**
         * <p>Creates an Amazon SageMaker Model Card.</p> <p>For information about how to
         * use model cards, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards.html">Amazon
         * SageMaker Model Card</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelCard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelCardOutcome CreateModelCard(const Model::CreateModelCardRequest& request) const;

        /**
         * A Callable wrapper for CreateModelCard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelCardRequestT = Model::CreateModelCardRequest>
        Model::CreateModelCardOutcomeCallable CreateModelCardCallable(const CreateModelCardRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateModelCard, request);
        }

        /**
         * An Async wrapper for CreateModelCard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelCardRequestT = Model::CreateModelCardRequest>
        void CreateModelCardAsync(const CreateModelCardRequestT& request, const CreateModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateModelCard, request, handler, context);
        }

        /**
         * <p>Creates an Amazon SageMaker Model Card export job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelCardExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelCardExportJobOutcome CreateModelCardExportJob(const Model::CreateModelCardExportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateModelCardExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelCardExportJobRequestT = Model::CreateModelCardExportJobRequest>
        Model::CreateModelCardExportJobOutcomeCallable CreateModelCardExportJobCallable(const CreateModelCardExportJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateModelCardExportJob, request);
        }

        /**
         * An Async wrapper for CreateModelCardExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelCardExportJobRequestT = Model::CreateModelCardExportJobRequest>
        void CreateModelCardExportJobAsync(const CreateModelCardExportJobRequestT& request, const CreateModelCardExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateModelCardExportJob, request, handler, context);
        }

        /**
         * <p>Creates the definition for a model explainability job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelExplainabilityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelExplainabilityJobDefinitionOutcome CreateModelExplainabilityJobDefinition(const Model::CreateModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateModelExplainabilityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelExplainabilityJobDefinitionRequestT = Model::CreateModelExplainabilityJobDefinitionRequest>
        Model::CreateModelExplainabilityJobDefinitionOutcomeCallable CreateModelExplainabilityJobDefinitionCallable(const CreateModelExplainabilityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateModelExplainabilityJobDefinition, request);
        }

        /**
         * An Async wrapper for CreateModelExplainabilityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelExplainabilityJobDefinitionRequestT = Model::CreateModelExplainabilityJobDefinitionRequest>
        void CreateModelExplainabilityJobDefinitionAsync(const CreateModelExplainabilityJobDefinitionRequestT& request, const CreateModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateModelExplainabilityJobDefinition, request, handler, context);
        }

        /**
         * <p>Creates a model package that you can use to create SageMaker models or list
         * on Amazon Web Services Marketplace, or a versioned model that is part of a model
         * group. Buyers can subscribe to model packages listed on Amazon Web Services
         * Marketplace to create models in SageMaker.</p> <p>To create a model package by
         * specifying a Docker container that contains your inference code and the Amazon
         * S3 location of your model artifacts, provide values for
         * <code>InferenceSpecification</code>. To create a model from an algorithm
         * resource that you created or subscribed to in Amazon Web Services Marketplace,
         * provide a value for <code>SourceAlgorithmSpecification</code>.</p> 
         * <p>There are two types of model packages:</p> <ul> <li> <p>Versioned - a model
         * that is part of a model group in the model registry.</p> </li> <li>
         * <p>Unversioned - a model package that is not part of a model group.</p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelPackageOutcome CreateModelPackage(const Model::CreateModelPackageRequest& request) const;

        /**
         * A Callable wrapper for CreateModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelPackageRequestT = Model::CreateModelPackageRequest>
        Model::CreateModelPackageOutcomeCallable CreateModelPackageCallable(const CreateModelPackageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateModelPackage, request);
        }

        /**
         * An Async wrapper for CreateModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelPackageRequestT = Model::CreateModelPackageRequest>
        void CreateModelPackageAsync(const CreateModelPackageRequestT& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateModelPackage, request, handler, context);
        }

        /**
         * <p>Creates a model group. A model group contains a group of model
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelPackageGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelPackageGroupOutcome CreateModelPackageGroup(const Model::CreateModelPackageGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateModelPackageGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelPackageGroupRequestT = Model::CreateModelPackageGroupRequest>
        Model::CreateModelPackageGroupOutcomeCallable CreateModelPackageGroupCallable(const CreateModelPackageGroupRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateModelPackageGroup, request);
        }

        /**
         * An Async wrapper for CreateModelPackageGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelPackageGroupRequestT = Model::CreateModelPackageGroupRequest>
        void CreateModelPackageGroupAsync(const CreateModelPackageGroupRequestT& request, const CreateModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateModelPackageGroup, request, handler, context);
        }

        /**
         * <p>Creates a definition for a job that monitors model quality and drift. For
         * information about model monitor, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
         * SageMaker Model Monitor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelQualityJobDefinitionOutcome CreateModelQualityJobDefinition(const Model::CreateModelQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateModelQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelQualityJobDefinitionRequestT = Model::CreateModelQualityJobDefinitionRequest>
        Model::CreateModelQualityJobDefinitionOutcomeCallable CreateModelQualityJobDefinitionCallable(const CreateModelQualityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateModelQualityJobDefinition, request);
        }

        /**
         * An Async wrapper for CreateModelQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelQualityJobDefinitionRequestT = Model::CreateModelQualityJobDefinitionRequest>
        void CreateModelQualityJobDefinitionAsync(const CreateModelQualityJobDefinitionRequestT& request, const CreateModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateModelQualityJobDefinition, request, handler, context);
        }

        /**
         * <p>Creates a schedule that regularly starts Amazon SageMaker Processing Jobs to
         * monitor the data captured for an Amazon SageMaker Endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitoringScheduleOutcome CreateMonitoringSchedule(const Model::CreateMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreateMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMonitoringScheduleRequestT = Model::CreateMonitoringScheduleRequest>
        Model::CreateMonitoringScheduleOutcomeCallable CreateMonitoringScheduleCallable(const CreateMonitoringScheduleRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateMonitoringSchedule, request);
        }

        /**
         * An Async wrapper for CreateMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMonitoringScheduleRequestT = Model::CreateMonitoringScheduleRequest>
        void CreateMonitoringScheduleAsync(const CreateMonitoringScheduleRequestT& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateMonitoringSchedule, request, handler, context);
        }

        /**
         * <p>Creates an SageMaker notebook instance. A notebook instance is a machine
         * learning (ML) compute instance running on a Jupyter notebook. </p> <p>In a
         * <code>CreateNotebookInstance</code> request, specify the type of ML compute
         * instance that you want to run. SageMaker launches the instance, installs common
         * libraries that you can use to explore datasets for model training, and attaches
         * an ML storage volume to the notebook instance. </p> <p>SageMaker also provides a
         * set of example notebooks. Each notebook demonstrates how to use SageMaker with a
         * specific algorithm or with a machine learning framework. </p> <p>After receiving
         * the request, SageMaker does the following:</p> <ol> <li> <p>Creates a network
         * interface in the SageMaker VPC.</p> </li> <li> <p>(Option) If you specified
         * <code>SubnetId</code>, SageMaker creates a network interface in your own VPC,
         * which is inferred from the subnet ID that you provide in the input. When
         * creating this network interface, SageMaker attaches the security group that you
         * specified in the request to the network interface that it creates in your
         * VPC.</p> </li> <li> <p>Launches an EC2 instance of the type specified in the
         * request in the SageMaker VPC. If you specified <code>SubnetId</code> of your
         * VPC, SageMaker specifies both network interfaces when launching this instance.
         * This enables inbound traffic from your own VPC to the notebook instance,
         * assuming that the security groups allow it.</p> </li> </ol> <p>After creating
         * the notebook instance, SageMaker returns its Amazon Resource Name (ARN). You
         * can't change the name of a notebook instance after you create it.</p> <p>After
         * SageMaker creates the notebook instance, you can connect to the Jupyter server
         * and work in Jupyter notebooks. For example, you can write code to explore a
         * dataset that you can use for model training, train a model, host models by
         * creating SageMaker endpoints, and validate hosted models. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookInstanceOutcome CreateNotebookInstance(const Model::CreateNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNotebookInstanceRequestT = Model::CreateNotebookInstanceRequest>
        Model::CreateNotebookInstanceOutcomeCallable CreateNotebookInstanceCallable(const CreateNotebookInstanceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateNotebookInstance, request);
        }

        /**
         * An Async wrapper for CreateNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNotebookInstanceRequestT = Model::CreateNotebookInstanceRequest>
        void CreateNotebookInstanceAsync(const CreateNotebookInstanceRequestT& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateNotebookInstance, request, handler, context);
        }

        /**
         * <p>Creates a lifecycle configuration that you can associate with a notebook
         * instance. A <i>lifecycle configuration</i> is a collection of shell scripts that
         * run when you create or start a notebook instance.</p> <p>Each lifecycle
         * configuration script has a limit of 16384 characters.</p> <p>The value of the
         * <code>$PATH</code> environment variable that is available to both scripts is
         * <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View Amazon CloudWatch Logs
         * for notebook instance lifecycle configurations in log group
         * <code>/aws/sagemaker/NotebookInstances</code> in log stream
         * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
         * configuration scripts cannot run for longer than 5 minutes. If a script runs for
         * longer than 5 minutes, it fails and the notebook instance is not created or
         * started.</p> <p>For information about notebook instance lifestyle
         * configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookInstanceLifecycleConfigOutcome CreateNotebookInstanceLifecycleConfig(const Model::CreateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateNotebookInstanceLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNotebookInstanceLifecycleConfigRequestT = Model::CreateNotebookInstanceLifecycleConfigRequest>
        Model::CreateNotebookInstanceLifecycleConfigOutcomeCallable CreateNotebookInstanceLifecycleConfigCallable(const CreateNotebookInstanceLifecycleConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateNotebookInstanceLifecycleConfig, request);
        }

        /**
         * An Async wrapper for CreateNotebookInstanceLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNotebookInstanceLifecycleConfigRequestT = Model::CreateNotebookInstanceLifecycleConfigRequest>
        void CreateNotebookInstanceLifecycleConfigAsync(const CreateNotebookInstanceLifecycleConfigRequestT& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateNotebookInstanceLifecycleConfig, request, handler, context);
        }

        /**
         * <p>Creates a pipeline using a JSON pipeline definition.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePipelineRequestT = Model::CreatePipelineRequest>
        Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const CreatePipelineRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreatePipeline, request);
        }

        /**
         * An Async wrapper for CreatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePipelineRequestT = Model::CreatePipelineRequest>
        void CreatePipelineAsync(const CreatePipelineRequestT& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreatePipeline, request, handler, context);
        }

        /**
         * <p>Creates a URL for a specified UserProfile in a Domain. When accessed in a web
         * browser, the user will be automatically signed in to the domain, and granted
         * access to all of the Apps and files associated with the Domain's Amazon Elastic
         * File System volume. This operation can only be called when the authentication
         * mode equals IAM. </p> <p>The IAM role or user passed to this API defines the
         * permissions to access the app. Once the presigned URL is created, no additional
         * permission is required to access this URL. IAM authorization policies for this
         * API are also enforced for every HTTP request and WebSocket frame that attempts
         * to connect to the app.</p> <p>You can restrict access to this API and to the URL
         * that it returns to a list of IP addresses, Amazon VPCs or Amazon VPC Endpoints
         * that you specify. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-interface-endpoint.html">Connect
         * to Amazon SageMaker Studio Through an Interface VPC Endpoint</a> .</p> 
         * <p>The URL that you get from a call to <code>CreatePresignedDomainUrl</code> has
         * a default timeout of 5 minutes. You can configure this value using
         * <code>ExpiresInSeconds</code>. If you try to use the URL after the timeout limit
         * expires, you are directed to the Amazon Web Services console sign-in page.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedDomainUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedDomainUrlOutcome CreatePresignedDomainUrl(const Model::CreatePresignedDomainUrlRequest& request) const;

        /**
         * A Callable wrapper for CreatePresignedDomainUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePresignedDomainUrlRequestT = Model::CreatePresignedDomainUrlRequest>
        Model::CreatePresignedDomainUrlOutcomeCallable CreatePresignedDomainUrlCallable(const CreatePresignedDomainUrlRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreatePresignedDomainUrl, request);
        }

        /**
         * An Async wrapper for CreatePresignedDomainUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePresignedDomainUrlRequestT = Model::CreatePresignedDomainUrlRequest>
        void CreatePresignedDomainUrlAsync(const CreatePresignedDomainUrlRequestT& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreatePresignedDomainUrl, request, handler, context);
        }

        /**
         * <p>Returns a URL that you can use to connect to the Jupyter server from a
         * notebook instance. In the SageMaker console, when you choose <code>Open</code>
         * next to a notebook instance, SageMaker opens a new tab showing the Jupyter
         * server home page from the notebook instance. The console uses this API to get
         * the URL and show the page.</p> <p> The IAM role or user used to call this API
         * defines the permissions to access the notebook instance. Once the presigned URL
         * is created, no additional permission is required to access this URL. IAM
         * authorization policies for this API are also enforced for every HTTP request and
         * WebSocket frame that attempts to connect to the notebook instance.</p> <p>You
         * can restrict access to this API and to the URL that it returns to a list of IP
         * addresses that you specify. Use the <code>NotIpAddress</code> condition operator
         * and the <code>aws:SourceIP</code> condition context key to specify the list of
         * IP addresses that you want to have access to the notebook instance. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security_iam_id-based-policy-examples.html#nbi-ip-filter">Limit
         * Access to a Notebook Instance by IP Address</a>.</p>  <p>The URL that you
         * get from a call to <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreatePresignedNotebookInstanceUrl.html">CreatePresignedNotebookInstanceUrl</a>
         * is valid only for 5 minutes. If you try to use the URL after the 5-minute limit
         * expires, you are directed to the Amazon Web Services console sign-in page.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedNotebookInstanceUrlOutcome CreatePresignedNotebookInstanceUrl(const Model::CreatePresignedNotebookInstanceUrlRequest& request) const;

        /**
         * A Callable wrapper for CreatePresignedNotebookInstanceUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePresignedNotebookInstanceUrlRequestT = Model::CreatePresignedNotebookInstanceUrlRequest>
        Model::CreatePresignedNotebookInstanceUrlOutcomeCallable CreatePresignedNotebookInstanceUrlCallable(const CreatePresignedNotebookInstanceUrlRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreatePresignedNotebookInstanceUrl, request);
        }

        /**
         * An Async wrapper for CreatePresignedNotebookInstanceUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePresignedNotebookInstanceUrlRequestT = Model::CreatePresignedNotebookInstanceUrlRequest>
        void CreatePresignedNotebookInstanceUrlAsync(const CreatePresignedNotebookInstanceUrlRequestT& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreatePresignedNotebookInstanceUrl, request, handler, context);
        }

        /**
         * <p>Creates a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProcessingJobOutcome CreateProcessingJob(const Model::CreateProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for CreateProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProcessingJobRequestT = Model::CreateProcessingJobRequest>
        Model::CreateProcessingJobOutcomeCallable CreateProcessingJobCallable(const CreateProcessingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateProcessingJob, request);
        }

        /**
         * An Async wrapper for CreateProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProcessingJobRequestT = Model::CreateProcessingJobRequest>
        void CreateProcessingJobAsync(const CreateProcessingJobRequestT& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateProcessingJob, request, handler, context);
        }

        /**
         * <p>Creates a machine learning (ML) project that can contain one or more
         * templates that set up an ML pipeline from training to deploying an approved
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateProject, request, handler, context);
        }

        /**
         * <p>Creates a space used for real time collaboration in a domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSpaceOutcome CreateSpace(const Model::CreateSpaceRequest& request) const;

        /**
         * A Callable wrapper for CreateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSpaceRequestT = Model::CreateSpaceRequest>
        Model::CreateSpaceOutcomeCallable CreateSpaceCallable(const CreateSpaceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateSpace, request);
        }

        /**
         * An Async wrapper for CreateSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSpaceRequestT = Model::CreateSpaceRequest>
        void CreateSpaceAsync(const CreateSpaceRequestT& request, const CreateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateSpace, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon SageMaker Studio Lifecycle Configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateStudioLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioLifecycleConfigOutcome CreateStudioLifecycleConfig(const Model::CreateStudioLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateStudioLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStudioLifecycleConfigRequestT = Model::CreateStudioLifecycleConfigRequest>
        Model::CreateStudioLifecycleConfigOutcomeCallable CreateStudioLifecycleConfigCallable(const CreateStudioLifecycleConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateStudioLifecycleConfig, request);
        }

        /**
         * An Async wrapper for CreateStudioLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStudioLifecycleConfigRequestT = Model::CreateStudioLifecycleConfigRequest>
        void CreateStudioLifecycleConfigAsync(const CreateStudioLifecycleConfigRequestT& request, const CreateStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateStudioLifecycleConfig, request, handler, context);
        }

        /**
         * <p>Starts a model training job. After training completes, SageMaker saves the
         * resulting model artifacts to an Amazon S3 location that you specify. </p> <p>If
         * you choose to host your model using SageMaker hosting services, you can use the
         * resulting model artifacts as part of the model. You can also use the artifacts
         * in a machine learning service other than SageMaker, provided that you know how
         * to use them for inference. </p> <p>In the request body, you provide the
         * following: </p> <ul> <li> <p> <code>AlgorithmSpecification</code> - Identifies
         * the training algorithm to use. </p> </li> <li> <p> <code>HyperParameters</code>
         * - Specify these algorithm-specific parameters to enable the estimation of model
         * parameters during training. Hyperparameters can be tuned to optimize this
         * learning process. For a list of hyperparameters for each training algorithm
         * provided by SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
         * </p>  <p>Do not include any security-sensitive information including
         * account access IDs, secrets or tokens in any hyperparameter field. If the use of
         * security-sensitive credentials are detected, SageMaker will reject your training
         * job request and return an exception error.</p>  </li> <li> <p>
         * <code>InputDataConfig</code> - Describes the input required by the training job
         * and the Amazon S3, EFS, or FSx location where it is stored.</p> </li> <li> <p>
         * <code>OutputDataConfig</code> - Identifies the Amazon S3 bucket where you want
         * SageMaker to save the results of model training. </p> </li> <li> <p>
         * <code>ResourceConfig</code> - Identifies the resources, ML compute instances,
         * and ML storage volumes to deploy for model training. In distributed training,
         * you specify more than one instance. </p> </li> <li> <p>
         * <code>EnableManagedSpotTraining</code> - Optimize the cost of training machine
         * learning models by up to 80% by using Amazon EC2 Spot instances. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-managed-spot-training.html">Managed
         * Spot Training</a>. </p> </li> <li> <p> <code>RoleArn</code> - The Amazon
         * Resource Name (ARN) that SageMaker assumes to perform tasks on your behalf
         * during model training. You must grant this role the necessary permissions so
         * that SageMaker can successfully complete model training. </p> </li> <li> <p>
         * <code>StoppingCondition</code> - To help cap training costs, use
         * <code>MaxRuntimeInSeconds</code> to set a time limit for training. Use
         * <code>MaxWaitTimeInSeconds</code> to specify how long a managed spot training
         * job has to complete. </p> </li> <li> <p> <code>Environment</code> - The
         * environment variables to set in the Docker container.</p> </li> <li> <p>
         * <code>RetryStrategy</code> - The number of times to retry the job when the job
         * fails due to an <code>InternalServerError</code>.</p> </li> </ul> <p> For more
         * information about SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrainingJobOutcome CreateTrainingJob(const Model::CreateTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for CreateTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrainingJobRequestT = Model::CreateTrainingJobRequest>
        Model::CreateTrainingJobOutcomeCallable CreateTrainingJobCallable(const CreateTrainingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateTrainingJob, request);
        }

        /**
         * An Async wrapper for CreateTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrainingJobRequestT = Model::CreateTrainingJobRequest>
        void CreateTrainingJobAsync(const CreateTrainingJobRequestT& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateTrainingJob, request, handler, context);
        }

        /**
         * <p>Starts a transform job. A transform job uses a trained model to get
         * inferences on a dataset and saves these results to an Amazon S3 location that
         * you specify.</p> <p>To perform batch transformations, you create a transform job
         * and use the data that you have readily available.</p> <p>In the request body,
         * you provide the following:</p> <ul> <li> <p> <code>TransformJobName</code> -
         * Identifies the transform job. The name must be unique within an Amazon Web
         * Services Region in an Amazon Web Services account.</p> </li> <li> <p>
         * <code>ModelName</code> - Identifies the model to use. <code>ModelName</code>
         * must be the name of an existing Amazon SageMaker model in the same Amazon Web
         * Services Region and Amazon Web Services account. For information on creating a
         * model, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateModel.html">CreateModel</a>.</p>
         * </li> <li> <p> <code>TransformInput</code> - Describes the dataset to be
         * transformed and the Amazon S3 location where it is stored.</p> </li> <li> <p>
         * <code>TransformOutput</code> - Identifies the Amazon S3 location where you want
         * Amazon SageMaker to save the results from the transform job.</p> </li> <li> <p>
         * <code>TransformResources</code> - Identifies the ML compute instances for the
         * transform job.</p> </li> </ul> <p>For more information about how batch
         * transformation works, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">Batch
         * Transform</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransformJobOutcome CreateTransformJob(const Model::CreateTransformJobRequest& request) const;

        /**
         * A Callable wrapper for CreateTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTransformJobRequestT = Model::CreateTransformJobRequest>
        Model::CreateTransformJobOutcomeCallable CreateTransformJobCallable(const CreateTransformJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateTransformJob, request);
        }

        /**
         * An Async wrapper for CreateTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTransformJobRequestT = Model::CreateTransformJobRequest>
        void CreateTransformJobAsync(const CreateTransformJobRequestT& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateTransformJob, request, handler, context);
        }

        /**
         * <p>Creates an SageMaker <i>trial</i>. A trial is a set of steps called <i>trial
         * components</i> that produce a machine learning model. A trial is part of a
         * single SageMaker <i>experiment</i>.</p> <p>When you use SageMaker Studio or the
         * SageMaker Python SDK, all experiments, trials, and trial components are
         * automatically tracked, logged, and indexed. When you use the Amazon Web Services
         * SDK for Python (Boto), you must use the logging APIs provided by the SDK.</p>
         * <p>You can add tags to a trial and then use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
         * API to search for the tags.</p> <p>To get a list of all your trials, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListTrials.html">ListTrials</a>
         * API. To view a trial's properties, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeTrial.html">DescribeTrial</a>
         * API. To create a trial component, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrialComponent.html">CreateTrialComponent</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrialOutcome CreateTrial(const Model::CreateTrialRequest& request) const;

        /**
         * A Callable wrapper for CreateTrial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrialRequestT = Model::CreateTrialRequest>
        Model::CreateTrialOutcomeCallable CreateTrialCallable(const CreateTrialRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateTrial, request);
        }

        /**
         * An Async wrapper for CreateTrial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrialRequestT = Model::CreateTrialRequest>
        void CreateTrialAsync(const CreateTrialRequestT& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateTrial, request, handler, context);
        }

        /**
         * <p>Creates a <i>trial component</i>, which is a stage of a machine learning
         * <i>trial</i>. A trial is composed of one or more trial components. A trial
         * component can be used in multiple trials.</p> <p>Trial components include
         * pre-processing jobs, training jobs, and batch transform jobs.</p> <p>When you
         * use SageMaker Studio or the SageMaker Python SDK, all experiments, trials, and
         * trial components are automatically tracked, logged, and indexed. When you use
         * the Amazon Web Services SDK for Python (Boto), you must use the logging APIs
         * provided by the SDK.</p> <p>You can add tags to a trial component and then use
         * the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
         * API to search for the tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrialComponentOutcome CreateTrialComponent(const Model::CreateTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrialComponentRequestT = Model::CreateTrialComponentRequest>
        Model::CreateTrialComponentOutcomeCallable CreateTrialComponentCallable(const CreateTrialComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateTrialComponent, request);
        }

        /**
         * An Async wrapper for CreateTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrialComponentRequestT = Model::CreateTrialComponentRequest>
        void CreateTrialComponentAsync(const CreateTrialComponentRequestT& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateTrialComponent, request, handler, context);
        }

        /**
         * <p>Creates a user profile. A user profile represents a single user within a
         * domain, and is the main way to reference a "person" for the purposes of sharing,
         * reporting, and other user-oriented features. This entity is created when a user
         * onboards to a domain. If an administrator invites a person by email or imports
         * them from IAM Identity Center, a user profile is automatically created. A user
         * profile is the primary holder of settings for an individual user and has a
         * reference to the user's private Amazon Elastic File System home directory.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserProfileOutcome CreateUserProfile(const Model::CreateUserProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserProfileRequestT = Model::CreateUserProfileRequest>
        Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const CreateUserProfileRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateUserProfile, request);
        }

        /**
         * An Async wrapper for CreateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserProfileRequestT = Model::CreateUserProfileRequest>
        void CreateUserProfileAsync(const CreateUserProfileRequestT& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateUserProfile, request, handler, context);
        }

        /**
         * <p>Use this operation to create a workforce. This operation will return an error
         * if a workforce already exists in the Amazon Web Services Region that you
         * specify. You can only create one workforce in each Amazon Web Services Region
         * per Amazon Web Services account.</p> <p>If you want to create a new workforce in
         * an Amazon Web Services Region where a workforce already exists, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteWorkforce.html">DeleteWorkforce</a>
         * API operation to delete the existing workforce and then use
         * <code>CreateWorkforce</code> to create a new workforce.</p> <p>To create a
         * private workforce using Amazon Cognito, you must specify a Cognito user pool in
         * <code>CognitoConfig</code>. You can also create an Amazon Cognito workforce
         * using the Amazon SageMaker console. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">
         * Create a Private Workforce (Amazon Cognito)</a>.</p> <p>To create a private
         * workforce using your own OIDC Identity Provider (IdP), specify your IdP
         * configuration in <code>OidcConfig</code>. Your OIDC IdP must support
         * <i>groups</i> because groups are used by Ground Truth and Amazon A2I to create
         * work teams. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private-oidc.html">
         * Create a Private Workforce (OIDC IdP)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkforceOutcome CreateWorkforce(const Model::CreateWorkforceRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkforce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkforceRequestT = Model::CreateWorkforceRequest>
        Model::CreateWorkforceOutcomeCallable CreateWorkforceCallable(const CreateWorkforceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateWorkforce, request);
        }

        /**
         * An Async wrapper for CreateWorkforce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkforceRequestT = Model::CreateWorkforceRequest>
        void CreateWorkforceAsync(const CreateWorkforceRequestT& request, const CreateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateWorkforce, request, handler, context);
        }

        /**
         * <p>Creates a new work team for labeling your data. A work team is defined by one
         * or more Amazon Cognito user pools. You must first create the user pools before
         * you can create a work team.</p> <p>You cannot create more than 25 work teams in
         * an account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkteamOutcome CreateWorkteam(const Model::CreateWorkteamRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkteamRequestT = Model::CreateWorkteamRequest>
        Model::CreateWorkteamOutcomeCallable CreateWorkteamCallable(const CreateWorkteamRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::CreateWorkteam, request);
        }

        /**
         * An Async wrapper for CreateWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkteamRequestT = Model::CreateWorkteamRequest>
        void CreateWorkteamAsync(const CreateWorkteamRequestT& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::CreateWorkteam, request, handler, context);
        }

        /**
         * <p>Deletes an action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActionOutcome DeleteAction(const Model::DeleteActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteActionRequestT = Model::DeleteActionRequest>
        Model::DeleteActionOutcomeCallable DeleteActionCallable(const DeleteActionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteAction, request);
        }

        /**
         * An Async wrapper for DeleteAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteActionRequestT = Model::DeleteActionRequest>
        void DeleteActionAsync(const DeleteActionRequestT& request, const DeleteActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteAction, request, handler, context);
        }

        /**
         * <p>Removes the specified algorithm from your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlgorithmOutcome DeleteAlgorithm(const Model::DeleteAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAlgorithmRequestT = Model::DeleteAlgorithmRequest>
        Model::DeleteAlgorithmOutcomeCallable DeleteAlgorithmCallable(const DeleteAlgorithmRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteAlgorithm, request);
        }

        /**
         * An Async wrapper for DeleteAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAlgorithmRequestT = Model::DeleteAlgorithmRequest>
        void DeleteAlgorithmAsync(const DeleteAlgorithmRequestT& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteAlgorithm, request, handler, context);
        }

        /**
         * <p>Used to stop and delete an app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        Model::DeleteAppOutcomeCallable DeleteAppCallable(const DeleteAppRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteApp, request);
        }

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        void DeleteAppAsync(const DeleteAppRequestT& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteApp, request, handler, context);
        }

        /**
         * <p>Deletes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppImageConfigOutcome DeleteAppImageConfig(const Model::DeleteAppImageConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppImageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppImageConfigRequestT = Model::DeleteAppImageConfigRequest>
        Model::DeleteAppImageConfigOutcomeCallable DeleteAppImageConfigCallable(const DeleteAppImageConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteAppImageConfig, request);
        }

        /**
         * An Async wrapper for DeleteAppImageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppImageConfigRequestT = Model::DeleteAppImageConfigRequest>
        void DeleteAppImageConfigAsync(const DeleteAppImageConfigRequestT& request, const DeleteAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteAppImageConfig, request, handler, context);
        }

        /**
         * <p>Deletes an artifact. Either <code>ArtifactArn</code> or <code>Source</code>
         * must be specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArtifactOutcome DeleteArtifact(const Model::DeleteArtifactRequest& request) const;

        /**
         * A Callable wrapper for DeleteArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteArtifactRequestT = Model::DeleteArtifactRequest>
        Model::DeleteArtifactOutcomeCallable DeleteArtifactCallable(const DeleteArtifactRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteArtifact, request);
        }

        /**
         * An Async wrapper for DeleteArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteArtifactRequestT = Model::DeleteArtifactRequest>
        void DeleteArtifactAsync(const DeleteArtifactRequestT& request, const DeleteArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteArtifact, request, handler, context);
        }

        /**
         * <p>Deletes an association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssociationOutcome DeleteAssociation(const Model::DeleteAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssociationRequestT = Model::DeleteAssociationRequest>
        Model::DeleteAssociationOutcomeCallable DeleteAssociationCallable(const DeleteAssociationRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteAssociation, request);
        }

        /**
         * An Async wrapper for DeleteAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssociationRequestT = Model::DeleteAssociationRequest>
        void DeleteAssociationAsync(const DeleteAssociationRequestT& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteAssociation, request, handler, context);
        }

        /**
         * <p>Delete a SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteCluster, request, handler, context);
        }

        /**
         * <p>Deletes the specified Git repository from your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCodeRepositoryOutcome DeleteCodeRepository(const Model::DeleteCodeRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteCodeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCodeRepositoryRequestT = Model::DeleteCodeRepositoryRequest>
        Model::DeleteCodeRepositoryOutcomeCallable DeleteCodeRepositoryCallable(const DeleteCodeRepositoryRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteCodeRepository, request);
        }

        /**
         * An Async wrapper for DeleteCodeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCodeRepositoryRequestT = Model::DeleteCodeRepositoryRequest>
        void DeleteCodeRepositoryAsync(const DeleteCodeRepositoryRequestT& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteCodeRepository, request, handler, context);
        }

        /**
         * <p>Deletes the specified compilation job. This action deletes only the
         * compilation job resource in Amazon SageMaker. It doesn't delete other resources
         * that are related to that job, such as the model artifacts that the job creates,
         * the compilation logs in CloudWatch, the compiled model, or the IAM role.</p>
         * <p>You can delete a compilation job only if its current status is
         * <code>COMPLETED</code>, <code>FAILED</code>, or <code>STOPPED</code>. If the job
         * status is <code>STARTING</code> or <code>INPROGRESS</code>, stop the job, and
         * then delete it after its status becomes <code>STOPPED</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCompilationJobOutcome DeleteCompilationJob(const Model::DeleteCompilationJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteCompilationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCompilationJobRequestT = Model::DeleteCompilationJobRequest>
        Model::DeleteCompilationJobOutcomeCallable DeleteCompilationJobCallable(const DeleteCompilationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteCompilationJob, request);
        }

        /**
         * An Async wrapper for DeleteCompilationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCompilationJobRequestT = Model::DeleteCompilationJobRequest>
        void DeleteCompilationJobAsync(const DeleteCompilationJobRequestT& request, const DeleteCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteCompilationJob, request, handler, context);
        }

        /**
         * <p>Deletes an context.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteContext">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContextOutcome DeleteContext(const Model::DeleteContextRequest& request) const;

        /**
         * A Callable wrapper for DeleteContext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContextRequestT = Model::DeleteContextRequest>
        Model::DeleteContextOutcomeCallable DeleteContextCallable(const DeleteContextRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteContext, request);
        }

        /**
         * An Async wrapper for DeleteContext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContextRequestT = Model::DeleteContextRequest>
        void DeleteContextAsync(const DeleteContextRequestT& request, const DeleteContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteContext, request, handler, context);
        }

        /**
         * <p>Deletes a data quality monitoring job definition.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDataQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataQualityJobDefinitionOutcome DeleteDataQualityJobDefinition(const Model::DeleteDataQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataQualityJobDefinitionRequestT = Model::DeleteDataQualityJobDefinitionRequest>
        Model::DeleteDataQualityJobDefinitionOutcomeCallable DeleteDataQualityJobDefinitionCallable(const DeleteDataQualityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteDataQualityJobDefinition, request);
        }

        /**
         * An Async wrapper for DeleteDataQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataQualityJobDefinitionRequestT = Model::DeleteDataQualityJobDefinitionRequest>
        void DeleteDataQualityJobDefinitionAsync(const DeleteDataQualityJobDefinitionRequestT& request, const DeleteDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteDataQualityJobDefinition, request, handler, context);
        }

        /**
         * <p>Deletes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDeviceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceFleetOutcome DeleteDeviceFleet(const Model::DeleteDeviceFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeviceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeviceFleetRequestT = Model::DeleteDeviceFleetRequest>
        Model::DeleteDeviceFleetOutcomeCallable DeleteDeviceFleetCallable(const DeleteDeviceFleetRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteDeviceFleet, request);
        }

        /**
         * An Async wrapper for DeleteDeviceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeviceFleetRequestT = Model::DeleteDeviceFleetRequest>
        void DeleteDeviceFleetAsync(const DeleteDeviceFleetRequestT& request, const DeleteDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteDeviceFleet, request, handler, context);
        }

        /**
         * <p>Used to delete a domain. If you onboarded with IAM mode, you will need to
         * delete your domain to onboard again using IAM Identity Center. Use with caution.
         * All of the members of the domain will lose access to their EFS volume, including
         * data, notebooks, and other artifacts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteDomain, request, handler, context);
        }

        /**
         * <p>Deletes an edge deployment plan if (and only if) all the stages in the plan
         * are inactive or there are no stages in the plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEdgeDeploymentPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEdgeDeploymentPlanOutcome DeleteEdgeDeploymentPlan(const Model::DeleteEdgeDeploymentPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteEdgeDeploymentPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEdgeDeploymentPlanRequestT = Model::DeleteEdgeDeploymentPlanRequest>
        Model::DeleteEdgeDeploymentPlanOutcomeCallable DeleteEdgeDeploymentPlanCallable(const DeleteEdgeDeploymentPlanRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteEdgeDeploymentPlan, request);
        }

        /**
         * An Async wrapper for DeleteEdgeDeploymentPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEdgeDeploymentPlanRequestT = Model::DeleteEdgeDeploymentPlanRequest>
        void DeleteEdgeDeploymentPlanAsync(const DeleteEdgeDeploymentPlanRequestT& request, const DeleteEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteEdgeDeploymentPlan, request, handler, context);
        }

        /**
         * <p>Delete a stage in an edge deployment plan if (and only if) the stage is
         * inactive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEdgeDeploymentStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEdgeDeploymentStageOutcome DeleteEdgeDeploymentStage(const Model::DeleteEdgeDeploymentStageRequest& request) const;

        /**
         * A Callable wrapper for DeleteEdgeDeploymentStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEdgeDeploymentStageRequestT = Model::DeleteEdgeDeploymentStageRequest>
        Model::DeleteEdgeDeploymentStageOutcomeCallable DeleteEdgeDeploymentStageCallable(const DeleteEdgeDeploymentStageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteEdgeDeploymentStage, request);
        }

        /**
         * An Async wrapper for DeleteEdgeDeploymentStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEdgeDeploymentStageRequestT = Model::DeleteEdgeDeploymentStageRequest>
        void DeleteEdgeDeploymentStageAsync(const DeleteEdgeDeploymentStageRequestT& request, const DeleteEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteEdgeDeploymentStage, request, handler, context);
        }

        /**
         * <p>Deletes an endpoint. SageMaker frees up all of the resources that were
         * deployed when the endpoint was created. </p> <p>SageMaker retires any custom KMS
         * key grants associated with the endpoint, meaning you don't need to use the <a
         * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a>
         * API call.</p> <p>When you delete your endpoint, SageMaker asynchronously deletes
         * associated endpoint resources such as KMS key grants. You might still see these
         * resources in your account for a few minutes after deleting your endpoint. Do not
         * delete or revoke the permissions for your <code> <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateModel.html#sagemaker-CreateModel-request-ExecutionRoleArn">ExecutionRoleArn</a>
         * </code>, otherwise SageMaker cannot delete these resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const DeleteEndpointRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        void DeleteEndpointAsync(const DeleteEndpointRequestT& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p> <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. If you delete the <code>EndpointConfig</code> of an
         * endpoint that is active or being created or updated you may lose visibility into
         * the instance type the endpoint is using. The endpoint must be deleted in order
         * to stop incurring charges.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointConfigOutcome DeleteEndpointConfig(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpointConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEndpointConfigRequestT = Model::DeleteEndpointConfigRequest>
        Model::DeleteEndpointConfigOutcomeCallable DeleteEndpointConfigCallable(const DeleteEndpointConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteEndpointConfig, request);
        }

        /**
         * An Async wrapper for DeleteEndpointConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointConfigRequestT = Model::DeleteEndpointConfigRequest>
        void DeleteEndpointConfigAsync(const DeleteEndpointConfigRequestT& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteEndpointConfig, request, handler, context);
        }

        /**
         * <p>Deletes an SageMaker experiment. All trials associated with the experiment
         * must be deleted first. Use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListTrials.html">ListTrials</a>
         * API to get a list of the trials associated with the experiment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperimentOutcome DeleteExperiment(const Model::DeleteExperimentRequest& request) const;

        /**
         * A Callable wrapper for DeleteExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteExperimentRequestT = Model::DeleteExperimentRequest>
        Model::DeleteExperimentOutcomeCallable DeleteExperimentCallable(const DeleteExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteExperiment, request);
        }

        /**
         * An Async wrapper for DeleteExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExperimentRequestT = Model::DeleteExperimentRequest>
        void DeleteExperimentAsync(const DeleteExperimentRequestT& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteExperiment, request, handler, context);
        }

        /**
         * <p>Delete the <code>FeatureGroup</code> and any data that was written to the
         * <code>OnlineStore</code> of the <code>FeatureGroup</code>. Data cannot be
         * accessed from the <code>OnlineStore</code> immediately after
         * <code>DeleteFeatureGroup</code> is called. </p> <p>Data written into the
         * <code>OfflineStore</code> will not be deleted. The Amazon Web Services Glue
         * database and tables that are automatically created for your
         * <code>OfflineStore</code> are not deleted. </p> <p>Note that it can take
         * approximately 10-15 minutes to delete an <code>OnlineStore</code>
         * <code>FeatureGroup</code> with the <code>InMemory</code>
         * <code>StorageType</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteFeatureGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFeatureGroupOutcome DeleteFeatureGroup(const Model::DeleteFeatureGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteFeatureGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFeatureGroupRequestT = Model::DeleteFeatureGroupRequest>
        Model::DeleteFeatureGroupOutcomeCallable DeleteFeatureGroupCallable(const DeleteFeatureGroupRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteFeatureGroup, request);
        }

        /**
         * An Async wrapper for DeleteFeatureGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFeatureGroupRequestT = Model::DeleteFeatureGroupRequest>
        void DeleteFeatureGroupAsync(const DeleteFeatureGroupRequestT& request, const DeleteFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteFeatureGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowDefinitionOutcome DeleteFlowDefinition(const Model::DeleteFlowDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlowDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFlowDefinitionRequestT = Model::DeleteFlowDefinitionRequest>
        Model::DeleteFlowDefinitionOutcomeCallable DeleteFlowDefinitionCallable(const DeleteFlowDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteFlowDefinition, request);
        }

        /**
         * An Async wrapper for DeleteFlowDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFlowDefinitionRequestT = Model::DeleteFlowDefinitionRequest>
        void DeleteFlowDefinitionAsync(const DeleteFlowDefinitionRequestT& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteFlowDefinition, request, handler, context);
        }

        /**
         * <p>Delete a hub.</p>  <p>Hub APIs are only callable through SageMaker
         * Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHubOutcome DeleteHub(const Model::DeleteHubRequest& request) const;

        /**
         * A Callable wrapper for DeleteHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHubRequestT = Model::DeleteHubRequest>
        Model::DeleteHubOutcomeCallable DeleteHubCallable(const DeleteHubRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteHub, request);
        }

        /**
         * An Async wrapper for DeleteHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHubRequestT = Model::DeleteHubRequest>
        void DeleteHubAsync(const DeleteHubRequestT& request, const DeleteHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteHub, request, handler, context);
        }

        /**
         * <p>Delete the contents of a hub.</p>  <p>Hub APIs are only callable
         * through SageMaker Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHubContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHubContentOutcome DeleteHubContent(const Model::DeleteHubContentRequest& request) const;

        /**
         * A Callable wrapper for DeleteHubContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHubContentRequestT = Model::DeleteHubContentRequest>
        Model::DeleteHubContentOutcomeCallable DeleteHubContentCallable(const DeleteHubContentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteHubContent, request);
        }

        /**
         * An Async wrapper for DeleteHubContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHubContentRequestT = Model::DeleteHubContentRequest>
        void DeleteHubContentAsync(const DeleteHubContentRequestT& request, const DeleteHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteHubContent, request, handler, context);
        }

        /**
         * <p>Use this operation to delete a human task user interface (worker task
         * template).</p> <p> To see a list of human task user interfaces (work task
         * templates) in your account, use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListHumanTaskUis.html">ListHumanTaskUis</a>.
         * When you delete a worker task template, it no longer appears when you call
         * <code>ListHumanTaskUis</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHumanTaskUiOutcome DeleteHumanTaskUi(const Model::DeleteHumanTaskUiRequest& request) const;

        /**
         * A Callable wrapper for DeleteHumanTaskUi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHumanTaskUiRequestT = Model::DeleteHumanTaskUiRequest>
        Model::DeleteHumanTaskUiOutcomeCallable DeleteHumanTaskUiCallable(const DeleteHumanTaskUiRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteHumanTaskUi, request);
        }

        /**
         * An Async wrapper for DeleteHumanTaskUi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHumanTaskUiRequestT = Model::DeleteHumanTaskUiRequest>
        void DeleteHumanTaskUiAsync(const DeleteHumanTaskUiRequestT& request, const DeleteHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteHumanTaskUi, request, handler, context);
        }

        /**
         * <p>Deletes a hyperparameter tuning job. The
         * <code>DeleteHyperParameterTuningJob</code> API deletes only the tuning job entry
         * that was created in SageMaker when you called the
         * <code>CreateHyperParameterTuningJob</code> API. It does not delete training
         * jobs, artifacts, or the IAM role that you specified when creating the
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHyperParameterTuningJobOutcome DeleteHyperParameterTuningJob(const Model::DeleteHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHyperParameterTuningJobRequestT = Model::DeleteHyperParameterTuningJobRequest>
        Model::DeleteHyperParameterTuningJobOutcomeCallable DeleteHyperParameterTuningJobCallable(const DeleteHyperParameterTuningJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteHyperParameterTuningJob, request);
        }

        /**
         * An Async wrapper for DeleteHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHyperParameterTuningJobRequestT = Model::DeleteHyperParameterTuningJobRequest>
        void DeleteHyperParameterTuningJobAsync(const DeleteHyperParameterTuningJobRequestT& request, const DeleteHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteHyperParameterTuningJob, request, handler, context);
        }

        /**
         * <p>Deletes a SageMaker image and all versions of the image. The container images
         * aren't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImageRequestT = Model::DeleteImageRequest>
        Model::DeleteImageOutcomeCallable DeleteImageCallable(const DeleteImageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteImage, request);
        }

        /**
         * An Async wrapper for DeleteImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImageRequestT = Model::DeleteImageRequest>
        void DeleteImageAsync(const DeleteImageRequestT& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteImage, request, handler, context);
        }

        /**
         * <p>Deletes a version of a SageMaker image. The container image the version
         * represents isn't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageVersionOutcome DeleteImageVersion(const Model::DeleteImageVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteImageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImageVersionRequestT = Model::DeleteImageVersionRequest>
        Model::DeleteImageVersionOutcomeCallable DeleteImageVersionCallable(const DeleteImageVersionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteImageVersion, request);
        }

        /**
         * An Async wrapper for DeleteImageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImageVersionRequestT = Model::DeleteImageVersionRequest>
        void DeleteImageVersionAsync(const DeleteImageVersionRequestT& request, const DeleteImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteImageVersion, request, handler, context);
        }

        /**
         * <p>Deletes an inference component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteInferenceComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInferenceComponentOutcome DeleteInferenceComponent(const Model::DeleteInferenceComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteInferenceComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInferenceComponentRequestT = Model::DeleteInferenceComponentRequest>
        Model::DeleteInferenceComponentOutcomeCallable DeleteInferenceComponentCallable(const DeleteInferenceComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteInferenceComponent, request);
        }

        /**
         * An Async wrapper for DeleteInferenceComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInferenceComponentRequestT = Model::DeleteInferenceComponentRequest>
        void DeleteInferenceComponentAsync(const DeleteInferenceComponentRequestT& request, const DeleteInferenceComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteInferenceComponent, request, handler, context);
        }

        /**
         * <p>Deletes an inference experiment.</p>  <p> This operation does not
         * delete your endpoint, variants, or any underlying resources. This operation only
         * deletes the metadata of your experiment. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInferenceExperimentOutcome DeleteInferenceExperiment(const Model::DeleteInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for DeleteInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInferenceExperimentRequestT = Model::DeleteInferenceExperimentRequest>
        Model::DeleteInferenceExperimentOutcomeCallable DeleteInferenceExperimentCallable(const DeleteInferenceExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteInferenceExperiment, request);
        }

        /**
         * An Async wrapper for DeleteInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInferenceExperimentRequestT = Model::DeleteInferenceExperimentRequest>
        void DeleteInferenceExperimentAsync(const DeleteInferenceExperimentRequestT& request, const DeleteInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteInferenceExperiment, request, handler, context);
        }

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in SageMaker when you called the <code>CreateModel</code>
         * API. It does not delete model artifacts, inference code, or the IAM role that
         * you specified when creating the model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        Model::DeleteModelOutcomeCallable DeleteModelCallable(const DeleteModelRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteModel, request);
        }

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        void DeleteModelAsync(const DeleteModelRequestT& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteModel, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon SageMaker model bias job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelBiasJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelBiasJobDefinitionOutcome DeleteModelBiasJobDefinition(const Model::DeleteModelBiasJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelBiasJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelBiasJobDefinitionRequestT = Model::DeleteModelBiasJobDefinitionRequest>
        Model::DeleteModelBiasJobDefinitionOutcomeCallable DeleteModelBiasJobDefinitionCallable(const DeleteModelBiasJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteModelBiasJobDefinition, request);
        }

        /**
         * An Async wrapper for DeleteModelBiasJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelBiasJobDefinitionRequestT = Model::DeleteModelBiasJobDefinitionRequest>
        void DeleteModelBiasJobDefinitionAsync(const DeleteModelBiasJobDefinitionRequestT& request, const DeleteModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteModelBiasJobDefinition, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon SageMaker Model Card.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelCard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelCardOutcome DeleteModelCard(const Model::DeleteModelCardRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelCard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelCardRequestT = Model::DeleteModelCardRequest>
        Model::DeleteModelCardOutcomeCallable DeleteModelCardCallable(const DeleteModelCardRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteModelCard, request);
        }

        /**
         * An Async wrapper for DeleteModelCard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelCardRequestT = Model::DeleteModelCardRequest>
        void DeleteModelCardAsync(const DeleteModelCardRequestT& request, const DeleteModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteModelCard, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon SageMaker model explainability job
         * definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelExplainabilityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelExplainabilityJobDefinitionOutcome DeleteModelExplainabilityJobDefinition(const Model::DeleteModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelExplainabilityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelExplainabilityJobDefinitionRequestT = Model::DeleteModelExplainabilityJobDefinitionRequest>
        Model::DeleteModelExplainabilityJobDefinitionOutcomeCallable DeleteModelExplainabilityJobDefinitionCallable(const DeleteModelExplainabilityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteModelExplainabilityJobDefinition, request);
        }

        /**
         * An Async wrapper for DeleteModelExplainabilityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelExplainabilityJobDefinitionRequestT = Model::DeleteModelExplainabilityJobDefinitionRequest>
        void DeleteModelExplainabilityJobDefinitionAsync(const DeleteModelExplainabilityJobDefinitionRequestT& request, const DeleteModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteModelExplainabilityJobDefinition, request, handler, context);
        }

        /**
         * <p>Deletes a model package.</p> <p>A model package is used to create SageMaker
         * models or list on Amazon Web Services Marketplace. Buyers can subscribe to model
         * packages listed on Amazon Web Services Marketplace to create models in
         * SageMaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelPackageOutcome DeleteModelPackage(const Model::DeleteModelPackageRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelPackageRequestT = Model::DeleteModelPackageRequest>
        Model::DeleteModelPackageOutcomeCallable DeleteModelPackageCallable(const DeleteModelPackageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteModelPackage, request);
        }

        /**
         * An Async wrapper for DeleteModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelPackageRequestT = Model::DeleteModelPackageRequest>
        void DeleteModelPackageAsync(const DeleteModelPackageRequestT& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteModelPackage, request, handler, context);
        }

        /**
         * <p>Deletes the specified model group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackageGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelPackageGroupOutcome DeleteModelPackageGroup(const Model::DeleteModelPackageGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelPackageGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelPackageGroupRequestT = Model::DeleteModelPackageGroupRequest>
        Model::DeleteModelPackageGroupOutcomeCallable DeleteModelPackageGroupCallable(const DeleteModelPackageGroupRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteModelPackageGroup, request);
        }

        /**
         * An Async wrapper for DeleteModelPackageGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelPackageGroupRequestT = Model::DeleteModelPackageGroupRequest>
        void DeleteModelPackageGroupAsync(const DeleteModelPackageGroupRequestT& request, const DeleteModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteModelPackageGroup, request, handler, context);
        }

        /**
         * <p>Deletes a model group resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackageGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelPackageGroupPolicyOutcome DeleteModelPackageGroupPolicy(const Model::DeleteModelPackageGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelPackageGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelPackageGroupPolicyRequestT = Model::DeleteModelPackageGroupPolicyRequest>
        Model::DeleteModelPackageGroupPolicyOutcomeCallable DeleteModelPackageGroupPolicyCallable(const DeleteModelPackageGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteModelPackageGroupPolicy, request);
        }

        /**
         * An Async wrapper for DeleteModelPackageGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelPackageGroupPolicyRequestT = Model::DeleteModelPackageGroupPolicyRequest>
        void DeleteModelPackageGroupPolicyAsync(const DeleteModelPackageGroupPolicyRequestT& request, const DeleteModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteModelPackageGroupPolicy, request, handler, context);
        }

        /**
         * <p>Deletes the secified model quality monitoring job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelQualityJobDefinitionOutcome DeleteModelQualityJobDefinition(const Model::DeleteModelQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelQualityJobDefinitionRequestT = Model::DeleteModelQualityJobDefinitionRequest>
        Model::DeleteModelQualityJobDefinitionOutcomeCallable DeleteModelQualityJobDefinitionCallable(const DeleteModelQualityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteModelQualityJobDefinition, request);
        }

        /**
         * An Async wrapper for DeleteModelQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelQualityJobDefinitionRequestT = Model::DeleteModelQualityJobDefinitionRequest>
        void DeleteModelQualityJobDefinitionAsync(const DeleteModelQualityJobDefinitionRequestT& request, const DeleteModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteModelQualityJobDefinition, request, handler, context);
        }

        /**
         * <p>Deletes a monitoring schedule. Also stops the schedule had not already been
         * stopped. This does not delete the job execution history of the monitoring
         * schedule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitoringScheduleOutcome DeleteMonitoringSchedule(const Model::DeleteMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMonitoringScheduleRequestT = Model::DeleteMonitoringScheduleRequest>
        Model::DeleteMonitoringScheduleOutcomeCallable DeleteMonitoringScheduleCallable(const DeleteMonitoringScheduleRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteMonitoringSchedule, request);
        }

        /**
         * An Async wrapper for DeleteMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMonitoringScheduleRequestT = Model::DeleteMonitoringScheduleRequest>
        void DeleteMonitoringScheduleAsync(const DeleteMonitoringScheduleRequestT& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteMonitoringSchedule, request, handler, context);
        }

        /**
         * <p> Deletes an SageMaker notebook instance. Before you can delete a notebook
         * instance, you must call the <code>StopNotebookInstance</code> API. </p>
         *  <p>When you delete a notebook instance, you lose all of your data.
         * SageMaker removes the ML compute instance, and deletes the ML storage volume and
         * the network interface associated with the notebook instance. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceOutcome DeleteNotebookInstance(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotebookInstanceRequestT = Model::DeleteNotebookInstanceRequest>
        Model::DeleteNotebookInstanceOutcomeCallable DeleteNotebookInstanceCallable(const DeleteNotebookInstanceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteNotebookInstance, request);
        }

        /**
         * An Async wrapper for DeleteNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotebookInstanceRequestT = Model::DeleteNotebookInstanceRequest>
        void DeleteNotebookInstanceAsync(const DeleteNotebookInstanceRequestT& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteNotebookInstance, request, handler, context);
        }

        /**
         * <p>Deletes a notebook instance lifecycle configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceLifecycleConfigOutcome DeleteNotebookInstanceLifecycleConfig(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotebookInstanceLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotebookInstanceLifecycleConfigRequestT = Model::DeleteNotebookInstanceLifecycleConfigRequest>
        Model::DeleteNotebookInstanceLifecycleConfigOutcomeCallable DeleteNotebookInstanceLifecycleConfigCallable(const DeleteNotebookInstanceLifecycleConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteNotebookInstanceLifecycleConfig, request);
        }

        /**
         * An Async wrapper for DeleteNotebookInstanceLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotebookInstanceLifecycleConfigRequestT = Model::DeleteNotebookInstanceLifecycleConfigRequest>
        void DeleteNotebookInstanceLifecycleConfigAsync(const DeleteNotebookInstanceLifecycleConfigRequestT& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteNotebookInstanceLifecycleConfig, request, handler, context);
        }

        /**
         * <p>Deletes a pipeline if there are no running instances of the pipeline. To
         * delete a pipeline, you must stop all running instances of the pipeline using the
         * <code>StopPipelineExecution</code> API. When you delete a pipeline, all
         * instances of the pipeline are deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeletePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePipelineRequestT = Model::DeletePipelineRequest>
        Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const DeletePipelineRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeletePipeline, request);
        }

        /**
         * An Async wrapper for DeletePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePipelineRequestT = Model::DeletePipelineRequest>
        void DeletePipelineAsync(const DeletePipelineRequestT& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeletePipeline, request, handler, context);
        }

        /**
         * <p>Delete the specified project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteProject, request, handler, context);
        }

        /**
         * <p>Used to delete a space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpaceOutcome DeleteSpace(const Model::DeleteSpaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
        Model::DeleteSpaceOutcomeCallable DeleteSpaceCallable(const DeleteSpaceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteSpace, request);
        }

        /**
         * An Async wrapper for DeleteSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
        void DeleteSpaceAsync(const DeleteSpaceRequestT& request, const DeleteSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteSpace, request, handler, context);
        }

        /**
         * <p>Deletes the Amazon SageMaker Studio Lifecycle Configuration. In order to
         * delete the Lifecycle Configuration, there must be no running apps using the
         * Lifecycle Configuration. You must also remove the Lifecycle Configuration from
         * UserSettings in all Domains and UserProfiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteStudioLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioLifecycleConfigOutcome DeleteStudioLifecycleConfig(const Model::DeleteStudioLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudioLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStudioLifecycleConfigRequestT = Model::DeleteStudioLifecycleConfigRequest>
        Model::DeleteStudioLifecycleConfigOutcomeCallable DeleteStudioLifecycleConfigCallable(const DeleteStudioLifecycleConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteStudioLifecycleConfig, request);
        }

        /**
         * An Async wrapper for DeleteStudioLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStudioLifecycleConfigRequestT = Model::DeleteStudioLifecycleConfigRequest>
        void DeleteStudioLifecycleConfigAsync(const DeleteStudioLifecycleConfigRequestT& request, const DeleteStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteStudioLifecycleConfig, request, handler, context);
        }

        /**
         * <p>Deletes the specified tags from an SageMaker resource.</p> <p>To list a
         * resource's tags, use the <code>ListTags</code> API. </p>  <p>When you call
         * this API to delete tags from a hyperparameter tuning job, the deleted tags are
         * not removed from training jobs that the hyperparameter tuning job launched
         * before you called this API.</p>   <p>When you call this API to
         * delete tags from a SageMaker Domain or User Profile, the deleted tags are not
         * removed from Apps that the SageMaker Domain or User Profile launched before you
         * called this API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const DeleteTagsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteTags, request);
        }

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        void DeleteTagsAsync(const DeleteTagsRequestT& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteTags, request, handler, context);
        }

        /**
         * <p>Deletes the specified trial. All trial components that make up the trial must
         * be deleted first. Use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeTrialComponent.html">DescribeTrialComponent</a>
         * API to get the list of trial components.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrialOutcome DeleteTrial(const Model::DeleteTrialRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrialRequestT = Model::DeleteTrialRequest>
        Model::DeleteTrialOutcomeCallable DeleteTrialCallable(const DeleteTrialRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteTrial, request);
        }

        /**
         * An Async wrapper for DeleteTrial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrialRequestT = Model::DeleteTrialRequest>
        void DeleteTrialAsync(const DeleteTrialRequestT& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteTrial, request, handler, context);
        }

        /**
         * <p>Deletes the specified trial component. A trial component must be
         * disassociated from all trials before the trial component can be deleted. To
         * disassociate a trial component from a trial, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DisassociateTrialComponent.html">DisassociateTrialComponent</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrialComponentOutcome DeleteTrialComponent(const Model::DeleteTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrialComponentRequestT = Model::DeleteTrialComponentRequest>
        Model::DeleteTrialComponentOutcomeCallable DeleteTrialComponentCallable(const DeleteTrialComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteTrialComponent, request);
        }

        /**
         * An Async wrapper for DeleteTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrialComponentRequestT = Model::DeleteTrialComponentRequest>
        void DeleteTrialComponentAsync(const DeleteTrialComponentRequestT& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteTrialComponent, request, handler, context);
        }

        /**
         * <p>Deletes a user profile. When a user profile is deleted, the user loses access
         * to their EFS volume, including data, notebooks, and other
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserProfileOutcome DeleteUserProfile(const Model::DeleteUserProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserProfileRequestT = Model::DeleteUserProfileRequest>
        Model::DeleteUserProfileOutcomeCallable DeleteUserProfileCallable(const DeleteUserProfileRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteUserProfile, request);
        }

        /**
         * An Async wrapper for DeleteUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserProfileRequestT = Model::DeleteUserProfileRequest>
        void DeleteUserProfileAsync(const DeleteUserProfileRequestT& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteUserProfile, request, handler, context);
        }

        /**
         * <p>Use this operation to delete a workforce.</p> <p>If you want to create a new
         * workforce in an Amazon Web Services Region where a workforce already exists, use
         * this operation to delete the existing workforce and then use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateWorkforce.html">CreateWorkforce</a>
         * to create a new workforce.</p>  <p>If a private workforce contains
         * one or more work teams, you must use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteWorkteam.html">DeleteWorkteam</a>
         * operation to delete all work teams before you delete the workforce. If you try
         * to delete a workforce that contains one or more work teams, you will recieve a
         * <code>ResourceInUse</code> error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkforceOutcome DeleteWorkforce(const Model::DeleteWorkforceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkforce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkforceRequestT = Model::DeleteWorkforceRequest>
        Model::DeleteWorkforceOutcomeCallable DeleteWorkforceCallable(const DeleteWorkforceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteWorkforce, request);
        }

        /**
         * An Async wrapper for DeleteWorkforce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkforceRequestT = Model::DeleteWorkforceRequest>
        void DeleteWorkforceAsync(const DeleteWorkforceRequestT& request, const DeleteWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteWorkforce, request, handler, context);
        }

        /**
         * <p>Deletes an existing work team. This operation can't be undone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkteamOutcome DeleteWorkteam(const Model::DeleteWorkteamRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkteamRequestT = Model::DeleteWorkteamRequest>
        Model::DeleteWorkteamOutcomeCallable DeleteWorkteamCallable(const DeleteWorkteamRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeleteWorkteam, request);
        }

        /**
         * An Async wrapper for DeleteWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkteamRequestT = Model::DeleteWorkteamRequest>
        void DeleteWorkteamAsync(const DeleteWorkteamRequestT& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeleteWorkteam, request, handler, context);
        }

        /**
         * <p>Deregisters the specified devices. After you deregister a device, you will
         * need to re-register the devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeregisterDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDevicesOutcome DeregisterDevices(const Model::DeregisterDevicesRequest& request) const;

        /**
         * A Callable wrapper for DeregisterDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterDevicesRequestT = Model::DeregisterDevicesRequest>
        Model::DeregisterDevicesOutcomeCallable DeregisterDevicesCallable(const DeregisterDevicesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DeregisterDevices, request);
        }

        /**
         * An Async wrapper for DeregisterDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterDevicesRequestT = Model::DeregisterDevicesRequest>
        void DeregisterDevicesAsync(const DeregisterDevicesRequestT& request, const DeregisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DeregisterDevices, request, handler, context);
        }

        /**
         * <p>Describes an action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActionOutcome DescribeAction(const Model::DescribeActionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeActionRequestT = Model::DescribeActionRequest>
        Model::DescribeActionOutcomeCallable DescribeActionCallable(const DescribeActionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeAction, request);
        }

        /**
         * An Async wrapper for DescribeAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeActionRequestT = Model::DescribeActionRequest>
        void DescribeActionAsync(const DescribeActionRequestT& request, const DescribeActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeAction, request, handler, context);
        }

        /**
         * <p>Returns a description of the specified algorithm that is in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlgorithmOutcome DescribeAlgorithm(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAlgorithmRequestT = Model::DescribeAlgorithmRequest>
        Model::DescribeAlgorithmOutcomeCallable DescribeAlgorithmCallable(const DescribeAlgorithmRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeAlgorithm, request);
        }

        /**
         * An Async wrapper for DescribeAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlgorithmRequestT = Model::DescribeAlgorithmRequest>
        void DescribeAlgorithmAsync(const DescribeAlgorithmRequestT& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeAlgorithm, request, handler, context);
        }

        /**
         * <p>Describes the app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest& request) const;

        /**
         * A Callable wrapper for DescribeApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppRequestT = Model::DescribeAppRequest>
        Model::DescribeAppOutcomeCallable DescribeAppCallable(const DescribeAppRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeApp, request);
        }

        /**
         * An Async wrapper for DescribeApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppRequestT = Model::DescribeAppRequest>
        void DescribeAppAsync(const DescribeAppRequestT& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeApp, request, handler, context);
        }

        /**
         * <p>Describes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppImageConfigOutcome DescribeAppImageConfig(const Model::DescribeAppImageConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppImageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppImageConfigRequestT = Model::DescribeAppImageConfigRequest>
        Model::DescribeAppImageConfigOutcomeCallable DescribeAppImageConfigCallable(const DescribeAppImageConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeAppImageConfig, request);
        }

        /**
         * An Async wrapper for DescribeAppImageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppImageConfigRequestT = Model::DescribeAppImageConfigRequest>
        void DescribeAppImageConfigAsync(const DescribeAppImageConfigRequestT& request, const DescribeAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeAppImageConfig, request, handler, context);
        }

        /**
         * <p>Describes an artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeArtifactOutcome DescribeArtifact(const Model::DescribeArtifactRequest& request) const;

        /**
         * A Callable wrapper for DescribeArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeArtifactRequestT = Model::DescribeArtifactRequest>
        Model::DescribeArtifactOutcomeCallable DescribeArtifactCallable(const DescribeArtifactRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeArtifact, request);
        }

        /**
         * An Async wrapper for DescribeArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeArtifactRequestT = Model::DescribeArtifactRequest>
        void DescribeArtifactAsync(const DescribeArtifactRequestT& request, const DescribeArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeArtifact, request, handler, context);
        }

        /**
         * <p>Returns information about an AutoML job created by calling <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJob.html">CreateAutoMLJob</a>.</p>
         *  <p>AutoML jobs created by calling <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJobV2.html">CreateAutoMLJobV2</a>
         * cannot be described by <code>DescribeAutoMLJob</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoMLJobOutcome DescribeAutoMLJob(const Model::DescribeAutoMLJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutoMLJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAutoMLJobRequestT = Model::DescribeAutoMLJobRequest>
        Model::DescribeAutoMLJobOutcomeCallable DescribeAutoMLJobCallable(const DescribeAutoMLJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeAutoMLJob, request);
        }

        /**
         * An Async wrapper for DescribeAutoMLJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAutoMLJobRequestT = Model::DescribeAutoMLJobRequest>
        void DescribeAutoMLJobAsync(const DescribeAutoMLJobRequestT& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeAutoMLJob, request, handler, context);
        }

        /**
         * <p>Returns information about an AutoML job created by calling <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJobV2.html">CreateAutoMLJobV2</a>
         * or <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJob.html">CreateAutoMLJob</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAutoMLJobV2">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoMLJobV2Outcome DescribeAutoMLJobV2(const Model::DescribeAutoMLJobV2Request& request) const;

        /**
         * A Callable wrapper for DescribeAutoMLJobV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAutoMLJobV2RequestT = Model::DescribeAutoMLJobV2Request>
        Model::DescribeAutoMLJobV2OutcomeCallable DescribeAutoMLJobV2Callable(const DescribeAutoMLJobV2RequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeAutoMLJobV2, request);
        }

        /**
         * An Async wrapper for DescribeAutoMLJobV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAutoMLJobV2RequestT = Model::DescribeAutoMLJobV2Request>
        void DescribeAutoMLJobV2Async(const DescribeAutoMLJobV2RequestT& request, const DescribeAutoMLJobV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeAutoMLJobV2, request, handler, context);
        }

        /**
         * <p>Retrieves information of a SageMaker HyperPod cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const DescribeClusterRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeCluster, request);
        }

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        void DescribeClusterAsync(const DescribeClusterRequestT& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeCluster, request, handler, context);
        }

        /**
         * <p>Retrieves information of an instance (also called a <i>node</i>
         * interchangeably) of a SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeClusterNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterNodeOutcome DescribeClusterNode(const Model::DescribeClusterNodeRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClusterNodeRequestT = Model::DescribeClusterNodeRequest>
        Model::DescribeClusterNodeOutcomeCallable DescribeClusterNodeCallable(const DescribeClusterNodeRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeClusterNode, request);
        }

        /**
         * An Async wrapper for DescribeClusterNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterNodeRequestT = Model::DescribeClusterNodeRequest>
        void DescribeClusterNodeAsync(const DescribeClusterNodeRequestT& request, const DescribeClusterNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeClusterNode, request, handler, context);
        }

        /**
         * <p>Gets details about the specified Git repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeRepositoryOutcome DescribeCodeRepository(const Model::DescribeCodeRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeCodeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCodeRepositoryRequestT = Model::DescribeCodeRepositoryRequest>
        Model::DescribeCodeRepositoryOutcomeCallable DescribeCodeRepositoryCallable(const DescribeCodeRepositoryRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeCodeRepository, request);
        }

        /**
         * An Async wrapper for DescribeCodeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCodeRepositoryRequestT = Model::DescribeCodeRepositoryRequest>
        void DescribeCodeRepositoryAsync(const DescribeCodeRepositoryRequestT& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeCodeRepository, request, handler, context);
        }

        /**
         * <p>Returns information about a model compilation job.</p> <p>To create a model
         * compilation job, use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateCompilationJob.html">CreateCompilationJob</a>.
         * To get information about multiple model compilation jobs, use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListCompilationJobs.html">ListCompilationJobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCompilationJobOutcome DescribeCompilationJob(const Model::DescribeCompilationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeCompilationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCompilationJobRequestT = Model::DescribeCompilationJobRequest>
        Model::DescribeCompilationJobOutcomeCallable DescribeCompilationJobCallable(const DescribeCompilationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeCompilationJob, request);
        }

        /**
         * An Async wrapper for DescribeCompilationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCompilationJobRequestT = Model::DescribeCompilationJobRequest>
        void DescribeCompilationJobAsync(const DescribeCompilationJobRequestT& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeCompilationJob, request, handler, context);
        }

        /**
         * <p>Describes a context.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeContext">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContextOutcome DescribeContext(const Model::DescribeContextRequest& request) const;

        /**
         * A Callable wrapper for DescribeContext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContextRequestT = Model::DescribeContextRequest>
        Model::DescribeContextOutcomeCallable DescribeContextCallable(const DescribeContextRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeContext, request);
        }

        /**
         * An Async wrapper for DescribeContext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContextRequestT = Model::DescribeContextRequest>
        void DescribeContextAsync(const DescribeContextRequestT& request, const DescribeContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeContext, request, handler, context);
        }

        /**
         * <p>Gets the details of a data quality monitoring job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDataQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataQualityJobDefinitionOutcome DescribeDataQualityJobDefinition(const Model::DescribeDataQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataQualityJobDefinitionRequestT = Model::DescribeDataQualityJobDefinitionRequest>
        Model::DescribeDataQualityJobDefinitionOutcomeCallable DescribeDataQualityJobDefinitionCallable(const DescribeDataQualityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeDataQualityJobDefinition, request);
        }

        /**
         * An Async wrapper for DescribeDataQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataQualityJobDefinitionRequestT = Model::DescribeDataQualityJobDefinitionRequest>
        void DescribeDataQualityJobDefinitionAsync(const DescribeDataQualityJobDefinitionRequestT& request, const DescribeDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeDataQualityJobDefinition, request, handler, context);
        }

        /**
         * <p>Describes the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest& request) const;

        /**
         * A Callable wrapper for DescribeDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDeviceRequestT = Model::DescribeDeviceRequest>
        Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const DescribeDeviceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeDevice, request);
        }

        /**
         * An Async wrapper for DescribeDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDeviceRequestT = Model::DescribeDeviceRequest>
        void DescribeDeviceAsync(const DescribeDeviceRequestT& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeDevice, request, handler, context);
        }

        /**
         * <p>A description of the fleet the device belongs to.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDeviceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceFleetOutcome DescribeDeviceFleet(const Model::DescribeDeviceFleetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeviceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDeviceFleetRequestT = Model::DescribeDeviceFleetRequest>
        Model::DescribeDeviceFleetOutcomeCallable DescribeDeviceFleetCallable(const DescribeDeviceFleetRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeDeviceFleet, request);
        }

        /**
         * An Async wrapper for DescribeDeviceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDeviceFleetRequestT = Model::DescribeDeviceFleetRequest>
        void DescribeDeviceFleetAsync(const DescribeDeviceFleetRequestT& request, const DescribeDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeDeviceFleet, request, handler, context);
        }

        /**
         * <p>The description of the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const DescribeDomainRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeDomain, request);
        }

        /**
         * An Async wrapper for DescribeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        void DescribeDomainAsync(const DescribeDomainRequestT& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeDomain, request, handler, context);
        }

        /**
         * <p>Describes an edge deployment plan with deployment status per
         * stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEdgeDeploymentPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEdgeDeploymentPlanOutcome DescribeEdgeDeploymentPlan(const Model::DescribeEdgeDeploymentPlanRequest& request) const;

        /**
         * A Callable wrapper for DescribeEdgeDeploymentPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEdgeDeploymentPlanRequestT = Model::DescribeEdgeDeploymentPlanRequest>
        Model::DescribeEdgeDeploymentPlanOutcomeCallable DescribeEdgeDeploymentPlanCallable(const DescribeEdgeDeploymentPlanRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeEdgeDeploymentPlan, request);
        }

        /**
         * An Async wrapper for DescribeEdgeDeploymentPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEdgeDeploymentPlanRequestT = Model::DescribeEdgeDeploymentPlanRequest>
        void DescribeEdgeDeploymentPlanAsync(const DescribeEdgeDeploymentPlanRequestT& request, const DescribeEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeEdgeDeploymentPlan, request, handler, context);
        }

        /**
         * <p>A description of edge packaging jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEdgePackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEdgePackagingJobOutcome DescribeEdgePackagingJob(const Model::DescribeEdgePackagingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeEdgePackagingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEdgePackagingJobRequestT = Model::DescribeEdgePackagingJobRequest>
        Model::DescribeEdgePackagingJobOutcomeCallable DescribeEdgePackagingJobCallable(const DescribeEdgePackagingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeEdgePackagingJob, request);
        }

        /**
         * An Async wrapper for DescribeEdgePackagingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEdgePackagingJobRequestT = Model::DescribeEdgePackagingJobRequest>
        void DescribeEdgePackagingJobAsync(const DescribeEdgePackagingJobRequestT& request, const DescribeEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeEdgePackagingJob, request, handler, context);
        }

        /**
         * <p>Returns the description of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEndpointRequestT = Model::DescribeEndpointRequest>
        Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const DescribeEndpointRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeEndpoint, request);
        }

        /**
         * An Async wrapper for DescribeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointRequestT = Model::DescribeEndpointRequest>
        void DescribeEndpointAsync(const DescribeEndpointRequestT& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeEndpoint, request, handler, context);
        }

        /**
         * <p>Returns the description of an endpoint configuration created using the
         * <code>CreateEndpointConfig</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointConfigOutcome DescribeEndpointConfig(const Model::DescribeEndpointConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpointConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEndpointConfigRequestT = Model::DescribeEndpointConfigRequest>
        Model::DescribeEndpointConfigOutcomeCallable DescribeEndpointConfigCallable(const DescribeEndpointConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeEndpointConfig, request);
        }

        /**
         * An Async wrapper for DescribeEndpointConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointConfigRequestT = Model::DescribeEndpointConfigRequest>
        void DescribeEndpointConfigAsync(const DescribeEndpointConfigRequestT& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeEndpointConfig, request, handler, context);
        }

        /**
         * <p>Provides a list of an experiment's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExperimentOutcome DescribeExperiment(const Model::DescribeExperimentRequest& request) const;

        /**
         * A Callable wrapper for DescribeExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExperimentRequestT = Model::DescribeExperimentRequest>
        Model::DescribeExperimentOutcomeCallable DescribeExperimentCallable(const DescribeExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeExperiment, request);
        }

        /**
         * An Async wrapper for DescribeExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExperimentRequestT = Model::DescribeExperimentRequest>
        void DescribeExperimentAsync(const DescribeExperimentRequestT& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeExperiment, request, handler, context);
        }

        /**
         * <p>Use this operation to describe a <code>FeatureGroup</code>. The response
         * includes information on the creation time, <code>FeatureGroup</code> name, the
         * unique identifier for each <code>FeatureGroup</code>, and more.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFeatureGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeatureGroupOutcome DescribeFeatureGroup(const Model::DescribeFeatureGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeFeatureGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFeatureGroupRequestT = Model::DescribeFeatureGroupRequest>
        Model::DescribeFeatureGroupOutcomeCallable DescribeFeatureGroupCallable(const DescribeFeatureGroupRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeFeatureGroup, request);
        }

        /**
         * An Async wrapper for DescribeFeatureGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFeatureGroupRequestT = Model::DescribeFeatureGroupRequest>
        void DescribeFeatureGroupAsync(const DescribeFeatureGroupRequestT& request, const DescribeFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeFeatureGroup, request, handler, context);
        }

        /**
         * <p>Shows the metadata for a feature within a feature group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFeatureMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeatureMetadataOutcome DescribeFeatureMetadata(const Model::DescribeFeatureMetadataRequest& request) const;

        /**
         * A Callable wrapper for DescribeFeatureMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFeatureMetadataRequestT = Model::DescribeFeatureMetadataRequest>
        Model::DescribeFeatureMetadataOutcomeCallable DescribeFeatureMetadataCallable(const DescribeFeatureMetadataRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeFeatureMetadata, request);
        }

        /**
         * An Async wrapper for DescribeFeatureMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFeatureMetadataRequestT = Model::DescribeFeatureMetadataRequest>
        void DescribeFeatureMetadataAsync(const DescribeFeatureMetadataRequestT& request, const DescribeFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeFeatureMetadata, request, handler, context);
        }

        /**
         * <p>Returns information about the specified flow definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowDefinitionOutcome DescribeFlowDefinition(const Model::DescribeFlowDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlowDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFlowDefinitionRequestT = Model::DescribeFlowDefinitionRequest>
        Model::DescribeFlowDefinitionOutcomeCallable DescribeFlowDefinitionCallable(const DescribeFlowDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeFlowDefinition, request);
        }

        /**
         * An Async wrapper for DescribeFlowDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFlowDefinitionRequestT = Model::DescribeFlowDefinitionRequest>
        void DescribeFlowDefinitionAsync(const DescribeFlowDefinitionRequestT& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeFlowDefinition, request, handler, context);
        }

        /**
         * <p>Describe a hub.</p>  <p>Hub APIs are only callable through SageMaker
         * Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHubOutcome DescribeHub(const Model::DescribeHubRequest& request) const;

        /**
         * A Callable wrapper for DescribeHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHubRequestT = Model::DescribeHubRequest>
        Model::DescribeHubOutcomeCallable DescribeHubCallable(const DescribeHubRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeHub, request);
        }

        /**
         * An Async wrapper for DescribeHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHubRequestT = Model::DescribeHubRequest>
        void DescribeHubAsync(const DescribeHubRequestT& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeHub, request, handler, context);
        }

        /**
         * <p>Describe the content of a hub.</p>  <p>Hub APIs are only callable
         * through SageMaker Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHubContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHubContentOutcome DescribeHubContent(const Model::DescribeHubContentRequest& request) const;

        /**
         * A Callable wrapper for DescribeHubContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHubContentRequestT = Model::DescribeHubContentRequest>
        Model::DescribeHubContentOutcomeCallable DescribeHubContentCallable(const DescribeHubContentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeHubContent, request);
        }

        /**
         * An Async wrapper for DescribeHubContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHubContentRequestT = Model::DescribeHubContentRequest>
        void DescribeHubContentAsync(const DescribeHubContentRequestT& request, const DescribeHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeHubContent, request, handler, context);
        }

        /**
         * <p>Returns information about the requested human task user interface (worker
         * task template).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHumanTaskUiOutcome DescribeHumanTaskUi(const Model::DescribeHumanTaskUiRequest& request) const;

        /**
         * A Callable wrapper for DescribeHumanTaskUi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHumanTaskUiRequestT = Model::DescribeHumanTaskUiRequest>
        Model::DescribeHumanTaskUiOutcomeCallable DescribeHumanTaskUiCallable(const DescribeHumanTaskUiRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeHumanTaskUi, request);
        }

        /**
         * An Async wrapper for DescribeHumanTaskUi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHumanTaskUiRequestT = Model::DescribeHumanTaskUiRequest>
        void DescribeHumanTaskUiAsync(const DescribeHumanTaskUiRequestT& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeHumanTaskUi, request, handler, context);
        }

        /**
         * <p>Returns a description of a hyperparameter tuning job, depending on the fields
         * selected. These fields can include the name, Amazon Resource Name (ARN), job
         * status of your tuning job and more.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHyperParameterTuningJobOutcome DescribeHyperParameterTuningJob(const Model::DescribeHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHyperParameterTuningJobRequestT = Model::DescribeHyperParameterTuningJobRequest>
        Model::DescribeHyperParameterTuningJobOutcomeCallable DescribeHyperParameterTuningJobCallable(const DescribeHyperParameterTuningJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeHyperParameterTuningJob, request);
        }

        /**
         * An Async wrapper for DescribeHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHyperParameterTuningJobRequestT = Model::DescribeHyperParameterTuningJobRequest>
        void DescribeHyperParameterTuningJobAsync(const DescribeHyperParameterTuningJobRequestT& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeHyperParameterTuningJob, request, handler, context);
        }

        /**
         * <p>Describes a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest& request) const;

        /**
         * A Callable wrapper for DescribeImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImageRequestT = Model::DescribeImageRequest>
        Model::DescribeImageOutcomeCallable DescribeImageCallable(const DescribeImageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeImage, request);
        }

        /**
         * An Async wrapper for DescribeImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImageRequestT = Model::DescribeImageRequest>
        void DescribeImageAsync(const DescribeImageRequestT& request, const DescribeImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeImage, request, handler, context);
        }

        /**
         * <p>Describes a version of a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageVersionOutcome DescribeImageVersion(const Model::DescribeImageVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribeImageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImageVersionRequestT = Model::DescribeImageVersionRequest>
        Model::DescribeImageVersionOutcomeCallable DescribeImageVersionCallable(const DescribeImageVersionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeImageVersion, request);
        }

        /**
         * An Async wrapper for DescribeImageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImageVersionRequestT = Model::DescribeImageVersionRequest>
        void DescribeImageVersionAsync(const DescribeImageVersionRequestT& request, const DescribeImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeImageVersion, request, handler, context);
        }

        /**
         * <p>Returns information about an inference component.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeInferenceComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInferenceComponentOutcome DescribeInferenceComponent(const Model::DescribeInferenceComponentRequest& request) const;

        /**
         * A Callable wrapper for DescribeInferenceComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInferenceComponentRequestT = Model::DescribeInferenceComponentRequest>
        Model::DescribeInferenceComponentOutcomeCallable DescribeInferenceComponentCallable(const DescribeInferenceComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeInferenceComponent, request);
        }

        /**
         * An Async wrapper for DescribeInferenceComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInferenceComponentRequestT = Model::DescribeInferenceComponentRequest>
        void DescribeInferenceComponentAsync(const DescribeInferenceComponentRequestT& request, const DescribeInferenceComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeInferenceComponent, request, handler, context);
        }

        /**
         * <p>Returns details about an inference experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInferenceExperimentOutcome DescribeInferenceExperiment(const Model::DescribeInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for DescribeInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInferenceExperimentRequestT = Model::DescribeInferenceExperimentRequest>
        Model::DescribeInferenceExperimentOutcomeCallable DescribeInferenceExperimentCallable(const DescribeInferenceExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeInferenceExperiment, request);
        }

        /**
         * An Async wrapper for DescribeInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInferenceExperimentRequestT = Model::DescribeInferenceExperimentRequest>
        void DescribeInferenceExperimentAsync(const DescribeInferenceExperimentRequestT& request, const DescribeInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeInferenceExperiment, request, handler, context);
        }

        /**
         * <p>Provides the results of the Inference Recommender job. One or more
         * recommendation jobs are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeInferenceRecommendationsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInferenceRecommendationsJobOutcome DescribeInferenceRecommendationsJob(const Model::DescribeInferenceRecommendationsJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeInferenceRecommendationsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInferenceRecommendationsJobRequestT = Model::DescribeInferenceRecommendationsJobRequest>
        Model::DescribeInferenceRecommendationsJobOutcomeCallable DescribeInferenceRecommendationsJobCallable(const DescribeInferenceRecommendationsJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeInferenceRecommendationsJob, request);
        }

        /**
         * An Async wrapper for DescribeInferenceRecommendationsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInferenceRecommendationsJobRequestT = Model::DescribeInferenceRecommendationsJobRequest>
        void DescribeInferenceRecommendationsJobAsync(const DescribeInferenceRecommendationsJobRequestT& request, const DescribeInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeInferenceRecommendationsJob, request, handler, context);
        }

        /**
         * <p>Gets information about a labeling job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelingJobOutcome DescribeLabelingJob(const Model::DescribeLabelingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeLabelingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLabelingJobRequestT = Model::DescribeLabelingJobRequest>
        Model::DescribeLabelingJobOutcomeCallable DescribeLabelingJobCallable(const DescribeLabelingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeLabelingJob, request);
        }

        /**
         * An Async wrapper for DescribeLabelingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLabelingJobRequestT = Model::DescribeLabelingJobRequest>
        void DescribeLabelingJobAsync(const DescribeLabelingJobRequestT& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeLabelingJob, request, handler, context);
        }

        /**
         * <p>Provides a list of properties for the requested lineage group. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/xaccount-lineage-tracking.html">
         * Cross-Account Lineage Tracking </a> in the <i>Amazon SageMaker Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeLineageGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLineageGroupOutcome DescribeLineageGroup(const Model::DescribeLineageGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeLineageGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLineageGroupRequestT = Model::DescribeLineageGroupRequest>
        Model::DescribeLineageGroupOutcomeCallable DescribeLineageGroupCallable(const DescribeLineageGroupRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeLineageGroup, request);
        }

        /**
         * An Async wrapper for DescribeLineageGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLineageGroupRequestT = Model::DescribeLineageGroupRequest>
        void DescribeLineageGroupAsync(const DescribeLineageGroupRequestT& request, const DescribeLineageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeLineageGroup, request, handler, context);
        }

        /**
         * <p>Describes a model that you created using the <code>CreateModel</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;

        /**
         * A Callable wrapper for DescribeModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelRequestT = Model::DescribeModelRequest>
        Model::DescribeModelOutcomeCallable DescribeModelCallable(const DescribeModelRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeModel, request);
        }

        /**
         * An Async wrapper for DescribeModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelRequestT = Model::DescribeModelRequest>
        void DescribeModelAsync(const DescribeModelRequestT& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeModel, request, handler, context);
        }

        /**
         * <p>Returns a description of a model bias job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelBiasJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelBiasJobDefinitionOutcome DescribeModelBiasJobDefinition(const Model::DescribeModelBiasJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelBiasJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelBiasJobDefinitionRequestT = Model::DescribeModelBiasJobDefinitionRequest>
        Model::DescribeModelBiasJobDefinitionOutcomeCallable DescribeModelBiasJobDefinitionCallable(const DescribeModelBiasJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeModelBiasJobDefinition, request);
        }

        /**
         * An Async wrapper for DescribeModelBiasJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelBiasJobDefinitionRequestT = Model::DescribeModelBiasJobDefinitionRequest>
        void DescribeModelBiasJobDefinitionAsync(const DescribeModelBiasJobDefinitionRequestT& request, const DescribeModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeModelBiasJobDefinition, request, handler, context);
        }

        /**
         * <p>Describes the content, creation time, and security configuration of an Amazon
         * SageMaker Model Card.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelCard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelCardOutcome DescribeModelCard(const Model::DescribeModelCardRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelCard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelCardRequestT = Model::DescribeModelCardRequest>
        Model::DescribeModelCardOutcomeCallable DescribeModelCardCallable(const DescribeModelCardRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeModelCard, request);
        }

        /**
         * An Async wrapper for DescribeModelCard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelCardRequestT = Model::DescribeModelCardRequest>
        void DescribeModelCardAsync(const DescribeModelCardRequestT& request, const DescribeModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeModelCard, request, handler, context);
        }

        /**
         * <p>Describes an Amazon SageMaker Model Card export job.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelCardExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelCardExportJobOutcome DescribeModelCardExportJob(const Model::DescribeModelCardExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelCardExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelCardExportJobRequestT = Model::DescribeModelCardExportJobRequest>
        Model::DescribeModelCardExportJobOutcomeCallable DescribeModelCardExportJobCallable(const DescribeModelCardExportJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeModelCardExportJob, request);
        }

        /**
         * An Async wrapper for DescribeModelCardExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelCardExportJobRequestT = Model::DescribeModelCardExportJobRequest>
        void DescribeModelCardExportJobAsync(const DescribeModelCardExportJobRequestT& request, const DescribeModelCardExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeModelCardExportJob, request, handler, context);
        }

        /**
         * <p>Returns a description of a model explainability job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelExplainabilityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelExplainabilityJobDefinitionOutcome DescribeModelExplainabilityJobDefinition(const Model::DescribeModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelExplainabilityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelExplainabilityJobDefinitionRequestT = Model::DescribeModelExplainabilityJobDefinitionRequest>
        Model::DescribeModelExplainabilityJobDefinitionOutcomeCallable DescribeModelExplainabilityJobDefinitionCallable(const DescribeModelExplainabilityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeModelExplainabilityJobDefinition, request);
        }

        /**
         * An Async wrapper for DescribeModelExplainabilityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelExplainabilityJobDefinitionRequestT = Model::DescribeModelExplainabilityJobDefinitionRequest>
        void DescribeModelExplainabilityJobDefinitionAsync(const DescribeModelExplainabilityJobDefinitionRequestT& request, const DescribeModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeModelExplainabilityJobDefinition, request, handler, context);
        }

        /**
         * <p>Returns a description of the specified model package, which is used to create
         * SageMaker models or list them on Amazon Web Services Marketplace.</p> <p>To
         * create models in SageMaker, buyers can subscribe to model packages listed on
         * Amazon Web Services Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelPackageOutcome DescribeModelPackage(const Model::DescribeModelPackageRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelPackageRequestT = Model::DescribeModelPackageRequest>
        Model::DescribeModelPackageOutcomeCallable DescribeModelPackageCallable(const DescribeModelPackageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeModelPackage, request);
        }

        /**
         * An Async wrapper for DescribeModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelPackageRequestT = Model::DescribeModelPackageRequest>
        void DescribeModelPackageAsync(const DescribeModelPackageRequestT& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeModelPackage, request, handler, context);
        }

        /**
         * <p>Gets a description for the specified model group.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelPackageGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelPackageGroupOutcome DescribeModelPackageGroup(const Model::DescribeModelPackageGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelPackageGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelPackageGroupRequestT = Model::DescribeModelPackageGroupRequest>
        Model::DescribeModelPackageGroupOutcomeCallable DescribeModelPackageGroupCallable(const DescribeModelPackageGroupRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeModelPackageGroup, request);
        }

        /**
         * An Async wrapper for DescribeModelPackageGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelPackageGroupRequestT = Model::DescribeModelPackageGroupRequest>
        void DescribeModelPackageGroupAsync(const DescribeModelPackageGroupRequestT& request, const DescribeModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeModelPackageGroup, request, handler, context);
        }

        /**
         * <p>Returns a description of a model quality job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelQualityJobDefinitionOutcome DescribeModelQualityJobDefinition(const Model::DescribeModelQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelQualityJobDefinitionRequestT = Model::DescribeModelQualityJobDefinitionRequest>
        Model::DescribeModelQualityJobDefinitionOutcomeCallable DescribeModelQualityJobDefinitionCallable(const DescribeModelQualityJobDefinitionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeModelQualityJobDefinition, request);
        }

        /**
         * An Async wrapper for DescribeModelQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelQualityJobDefinitionRequestT = Model::DescribeModelQualityJobDefinitionRequest>
        void DescribeModelQualityJobDefinitionAsync(const DescribeModelQualityJobDefinitionRequestT& request, const DescribeModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeModelQualityJobDefinition, request, handler, context);
        }

        /**
         * <p>Describes the schedule for a monitoring job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMonitoringScheduleOutcome DescribeMonitoringSchedule(const Model::DescribeMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMonitoringScheduleRequestT = Model::DescribeMonitoringScheduleRequest>
        Model::DescribeMonitoringScheduleOutcomeCallable DescribeMonitoringScheduleCallable(const DescribeMonitoringScheduleRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeMonitoringSchedule, request);
        }

        /**
         * An Async wrapper for DescribeMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMonitoringScheduleRequestT = Model::DescribeMonitoringScheduleRequest>
        void DescribeMonitoringScheduleAsync(const DescribeMonitoringScheduleRequestT& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeMonitoringSchedule, request, handler, context);
        }

        /**
         * <p>Returns information about a notebook instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookInstanceOutcome DescribeNotebookInstance(const Model::DescribeNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNotebookInstanceRequestT = Model::DescribeNotebookInstanceRequest>
        Model::DescribeNotebookInstanceOutcomeCallable DescribeNotebookInstanceCallable(const DescribeNotebookInstanceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeNotebookInstance, request);
        }

        /**
         * An Async wrapper for DescribeNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNotebookInstanceRequestT = Model::DescribeNotebookInstanceRequest>
        void DescribeNotebookInstanceAsync(const DescribeNotebookInstanceRequestT& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeNotebookInstance, request, handler, context);
        }

        /**
         * <p>Returns a description of a notebook instance lifecycle configuration.</p>
         * <p>For information about notebook instance lifestyle configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookInstanceLifecycleConfigOutcome DescribeNotebookInstanceLifecycleConfig(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotebookInstanceLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNotebookInstanceLifecycleConfigRequestT = Model::DescribeNotebookInstanceLifecycleConfigRequest>
        Model::DescribeNotebookInstanceLifecycleConfigOutcomeCallable DescribeNotebookInstanceLifecycleConfigCallable(const DescribeNotebookInstanceLifecycleConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeNotebookInstanceLifecycleConfig, request);
        }

        /**
         * An Async wrapper for DescribeNotebookInstanceLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNotebookInstanceLifecycleConfigRequestT = Model::DescribeNotebookInstanceLifecycleConfigRequest>
        void DescribeNotebookInstanceLifecycleConfigAsync(const DescribeNotebookInstanceLifecycleConfigRequestT& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeNotebookInstanceLifecycleConfig, request, handler, context);
        }

        /**
         * <p>Describes the details of a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineOutcome DescribePipeline(const Model::DescribePipelineRequest& request) const;

        /**
         * A Callable wrapper for DescribePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePipelineRequestT = Model::DescribePipelineRequest>
        Model::DescribePipelineOutcomeCallable DescribePipelineCallable(const DescribePipelineRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribePipeline, request);
        }

        /**
         * An Async wrapper for DescribePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePipelineRequestT = Model::DescribePipelineRequest>
        void DescribePipelineAsync(const DescribePipelineRequestT& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribePipeline, request, handler, context);
        }

        /**
         * <p>Describes the details of an execution's pipeline definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribePipelineDefinitionForExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineDefinitionForExecutionOutcome DescribePipelineDefinitionForExecution(const Model::DescribePipelineDefinitionForExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribePipelineDefinitionForExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePipelineDefinitionForExecutionRequestT = Model::DescribePipelineDefinitionForExecutionRequest>
        Model::DescribePipelineDefinitionForExecutionOutcomeCallable DescribePipelineDefinitionForExecutionCallable(const DescribePipelineDefinitionForExecutionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribePipelineDefinitionForExecution, request);
        }

        /**
         * An Async wrapper for DescribePipelineDefinitionForExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePipelineDefinitionForExecutionRequestT = Model::DescribePipelineDefinitionForExecutionRequest>
        void DescribePipelineDefinitionForExecutionAsync(const DescribePipelineDefinitionForExecutionRequestT& request, const DescribePipelineDefinitionForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribePipelineDefinitionForExecution, request, handler, context);
        }

        /**
         * <p>Describes the details of a pipeline execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribePipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineExecutionOutcome DescribePipelineExecution(const Model::DescribePipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribePipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePipelineExecutionRequestT = Model::DescribePipelineExecutionRequest>
        Model::DescribePipelineExecutionOutcomeCallable DescribePipelineExecutionCallable(const DescribePipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribePipelineExecution, request);
        }

        /**
         * An Async wrapper for DescribePipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePipelineExecutionRequestT = Model::DescribePipelineExecutionRequest>
        void DescribePipelineExecutionAsync(const DescribePipelineExecutionRequestT& request, const DescribePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribePipelineExecution, request, handler, context);
        }

        /**
         * <p>Returns a description of a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProcessingJobOutcome DescribeProcessingJob(const Model::DescribeProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProcessingJobRequestT = Model::DescribeProcessingJobRequest>
        Model::DescribeProcessingJobOutcomeCallable DescribeProcessingJobCallable(const DescribeProcessingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeProcessingJob, request);
        }

        /**
         * An Async wrapper for DescribeProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProcessingJobRequestT = Model::DescribeProcessingJobRequest>
        void DescribeProcessingJobAsync(const DescribeProcessingJobRequestT& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeProcessingJob, request, handler, context);
        }

        /**
         * <p>Describes the details of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const DescribeProjectRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeProject, request);
        }

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        void DescribeProjectAsync(const DescribeProjectRequestT& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeProject, request, handler, context);
        }

        /**
         * <p>Describes the space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpaceOutcome DescribeSpace(const Model::DescribeSpaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSpaceRequestT = Model::DescribeSpaceRequest>
        Model::DescribeSpaceOutcomeCallable DescribeSpaceCallable(const DescribeSpaceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeSpace, request);
        }

        /**
         * An Async wrapper for DescribeSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSpaceRequestT = Model::DescribeSpaceRequest>
        void DescribeSpaceAsync(const DescribeSpaceRequestT& request, const DescribeSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeSpace, request, handler, context);
        }

        /**
         * <p>Describes the Amazon SageMaker Studio Lifecycle Configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeStudioLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStudioLifecycleConfigOutcome DescribeStudioLifecycleConfig(const Model::DescribeStudioLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeStudioLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStudioLifecycleConfigRequestT = Model::DescribeStudioLifecycleConfigRequest>
        Model::DescribeStudioLifecycleConfigOutcomeCallable DescribeStudioLifecycleConfigCallable(const DescribeStudioLifecycleConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeStudioLifecycleConfig, request);
        }

        /**
         * An Async wrapper for DescribeStudioLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStudioLifecycleConfigRequestT = Model::DescribeStudioLifecycleConfigRequest>
        void DescribeStudioLifecycleConfigAsync(const DescribeStudioLifecycleConfigRequestT& request, const DescribeStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeStudioLifecycleConfig, request, handler, context);
        }

        /**
         * <p>Gets information about a work team provided by a vendor. It returns details
         * about the subscription with a vendor in the Amazon Web Services
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeSubscribedWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscribedWorkteamOutcome DescribeSubscribedWorkteam(const Model::DescribeSubscribedWorkteamRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubscribedWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSubscribedWorkteamRequestT = Model::DescribeSubscribedWorkteamRequest>
        Model::DescribeSubscribedWorkteamOutcomeCallable DescribeSubscribedWorkteamCallable(const DescribeSubscribedWorkteamRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeSubscribedWorkteam, request);
        }

        /**
         * An Async wrapper for DescribeSubscribedWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSubscribedWorkteamRequestT = Model::DescribeSubscribedWorkteamRequest>
        void DescribeSubscribedWorkteamAsync(const DescribeSubscribedWorkteamRequestT& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeSubscribedWorkteam, request, handler, context);
        }

        /**
         * <p>Returns information about a training job. </p> <p>Some of the attributes
         * below only appear if the training job successfully starts. If the training job
         * fails, <code>TrainingJobStatus</code> is <code>Failed</code> and, depending on
         * the <code>FailureReason</code>, attributes like <code>TrainingStartTime</code>,
         * <code>TrainingTimeInSeconds</code>, <code>TrainingEndTime</code>, and
         * <code>BillableTimeInSeconds</code> may not be present in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrainingJobOutcome DescribeTrainingJob(const Model::DescribeTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrainingJobRequestT = Model::DescribeTrainingJobRequest>
        Model::DescribeTrainingJobOutcomeCallable DescribeTrainingJobCallable(const DescribeTrainingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeTrainingJob, request);
        }

        /**
         * An Async wrapper for DescribeTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrainingJobRequestT = Model::DescribeTrainingJobRequest>
        void DescribeTrainingJobAsync(const DescribeTrainingJobRequestT& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeTrainingJob, request, handler, context);
        }

        /**
         * <p>Returns information about a transform job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransformJobOutcome DescribeTransformJob(const Model::DescribeTransformJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTransformJobRequestT = Model::DescribeTransformJobRequest>
        Model::DescribeTransformJobOutcomeCallable DescribeTransformJobCallable(const DescribeTransformJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeTransformJob, request);
        }

        /**
         * An Async wrapper for DescribeTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTransformJobRequestT = Model::DescribeTransformJobRequest>
        void DescribeTransformJobAsync(const DescribeTransformJobRequestT& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeTransformJob, request, handler, context);
        }

        /**
         * <p>Provides a list of a trial's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrialOutcome DescribeTrial(const Model::DescribeTrialRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrialRequestT = Model::DescribeTrialRequest>
        Model::DescribeTrialOutcomeCallable DescribeTrialCallable(const DescribeTrialRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeTrial, request);
        }

        /**
         * An Async wrapper for DescribeTrial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrialRequestT = Model::DescribeTrialRequest>
        void DescribeTrialAsync(const DescribeTrialRequestT& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeTrial, request, handler, context);
        }

        /**
         * <p>Provides a list of a trials component's properties.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrialComponentOutcome DescribeTrialComponent(const Model::DescribeTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrialComponentRequestT = Model::DescribeTrialComponentRequest>
        Model::DescribeTrialComponentOutcomeCallable DescribeTrialComponentCallable(const DescribeTrialComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeTrialComponent, request);
        }

        /**
         * An Async wrapper for DescribeTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrialComponentRequestT = Model::DescribeTrialComponentRequest>
        void DescribeTrialComponentAsync(const DescribeTrialComponentRequestT& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeTrialComponent, request, handler, context);
        }

        /**
         * <p>Describes a user profile. For more information, see
         * <code>CreateUserProfile</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserProfileOutcome DescribeUserProfile(const Model::DescribeUserProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserProfileRequestT = Model::DescribeUserProfileRequest>
        Model::DescribeUserProfileOutcomeCallable DescribeUserProfileCallable(const DescribeUserProfileRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeUserProfile, request);
        }

        /**
         * An Async wrapper for DescribeUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserProfileRequestT = Model::DescribeUserProfileRequest>
        void DescribeUserProfileAsync(const DescribeUserProfileRequestT& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeUserProfile, request, handler, context);
        }

        /**
         * <p>Lists private workforce information, including workforce name, Amazon
         * Resource Name (ARN), and, if applicable, allowed IP address ranges (<a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>).
         * Allowable IP address ranges are the IP addresses that workers can use to access
         * tasks. </p>  <p>This operation applies only to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkforceOutcome DescribeWorkforce(const Model::DescribeWorkforceRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkforce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkforceRequestT = Model::DescribeWorkforceRequest>
        Model::DescribeWorkforceOutcomeCallable DescribeWorkforceCallable(const DescribeWorkforceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeWorkforce, request);
        }

        /**
         * An Async wrapper for DescribeWorkforce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkforceRequestT = Model::DescribeWorkforceRequest>
        void DescribeWorkforceAsync(const DescribeWorkforceRequestT& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeWorkforce, request, handler, context);
        }

        /**
         * <p>Gets information about a specific work team. You can see information such as
         * the create date, the last updated date, membership information, and the work
         * team's Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkteamOutcome DescribeWorkteam(const Model::DescribeWorkteamRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkteamRequestT = Model::DescribeWorkteamRequest>
        Model::DescribeWorkteamOutcomeCallable DescribeWorkteamCallable(const DescribeWorkteamRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DescribeWorkteam, request);
        }

        /**
         * An Async wrapper for DescribeWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkteamRequestT = Model::DescribeWorkteamRequest>
        void DescribeWorkteamAsync(const DescribeWorkteamRequestT& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DescribeWorkteam, request, handler, context);
        }

        /**
         * <p>Disables using Service Catalog in SageMaker. Service Catalog is used to
         * create SageMaker projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DisableSagemakerServicecatalogPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSagemakerServicecatalogPortfolioOutcome DisableSagemakerServicecatalogPortfolio(const Model::DisableSagemakerServicecatalogPortfolioRequest& request) const;

        /**
         * A Callable wrapper for DisableSagemakerServicecatalogPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableSagemakerServicecatalogPortfolioRequestT = Model::DisableSagemakerServicecatalogPortfolioRequest>
        Model::DisableSagemakerServicecatalogPortfolioOutcomeCallable DisableSagemakerServicecatalogPortfolioCallable(const DisableSagemakerServicecatalogPortfolioRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DisableSagemakerServicecatalogPortfolio, request);
        }

        /**
         * An Async wrapper for DisableSagemakerServicecatalogPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableSagemakerServicecatalogPortfolioRequestT = Model::DisableSagemakerServicecatalogPortfolioRequest>
        void DisableSagemakerServicecatalogPortfolioAsync(const DisableSagemakerServicecatalogPortfolioRequestT& request, const DisableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DisableSagemakerServicecatalogPortfolio, request, handler, context);
        }

        /**
         * <p>Disassociates a trial component from a trial. This doesn't effect other
         * trials the component is associated with. Before you can delete a component, you
         * must disassociate the component from all trials it is associated with. To
         * associate a trial component with a trial, call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AssociateTrialComponent.html">AssociateTrialComponent</a>
         * API.</p> <p>To get a list of the trials a component is associated with, use the
         * <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
         * API. Specify <code>ExperimentTrialComponent</code> for the <code>Resource</code>
         * parameter. The list appears in the response under
         * <code>Results.TrialComponent.Parents</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DisassociateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrialComponentOutcome DisassociateTrialComponent(const Model::DisassociateTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateTrialComponentRequestT = Model::DisassociateTrialComponentRequest>
        Model::DisassociateTrialComponentOutcomeCallable DisassociateTrialComponentCallable(const DisassociateTrialComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::DisassociateTrialComponent, request);
        }

        /**
         * An Async wrapper for DisassociateTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateTrialComponentRequestT = Model::DisassociateTrialComponentRequest>
        void DisassociateTrialComponentAsync(const DisassociateTrialComponentRequestT& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::DisassociateTrialComponent, request, handler, context);
        }

        /**
         * <p>Enables using Service Catalog in SageMaker. Service Catalog is used to create
         * SageMaker projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EnableSagemakerServicecatalogPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSagemakerServicecatalogPortfolioOutcome EnableSagemakerServicecatalogPortfolio(const Model::EnableSagemakerServicecatalogPortfolioRequest& request) const;

        /**
         * A Callable wrapper for EnableSagemakerServicecatalogPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableSagemakerServicecatalogPortfolioRequestT = Model::EnableSagemakerServicecatalogPortfolioRequest>
        Model::EnableSagemakerServicecatalogPortfolioOutcomeCallable EnableSagemakerServicecatalogPortfolioCallable(const EnableSagemakerServicecatalogPortfolioRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::EnableSagemakerServicecatalogPortfolio, request);
        }

        /**
         * An Async wrapper for EnableSagemakerServicecatalogPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableSagemakerServicecatalogPortfolioRequestT = Model::EnableSagemakerServicecatalogPortfolioRequest>
        void EnableSagemakerServicecatalogPortfolioAsync(const EnableSagemakerServicecatalogPortfolioRequestT& request, const EnableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::EnableSagemakerServicecatalogPortfolio, request, handler, context);
        }

        /**
         * <p>Describes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetDeviceFleetReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceFleetReportOutcome GetDeviceFleetReport(const Model::GetDeviceFleetReportRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceFleetReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceFleetReportRequestT = Model::GetDeviceFleetReportRequest>
        Model::GetDeviceFleetReportOutcomeCallable GetDeviceFleetReportCallable(const GetDeviceFleetReportRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::GetDeviceFleetReport, request);
        }

        /**
         * An Async wrapper for GetDeviceFleetReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceFleetReportRequestT = Model::GetDeviceFleetReportRequest>
        void GetDeviceFleetReportAsync(const GetDeviceFleetReportRequestT& request, const GetDeviceFleetReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::GetDeviceFleetReport, request, handler, context);
        }

        /**
         * <p>The resource policy for the lineage group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetLineageGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLineageGroupPolicyOutcome GetLineageGroupPolicy(const Model::GetLineageGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetLineageGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLineageGroupPolicyRequestT = Model::GetLineageGroupPolicyRequest>
        Model::GetLineageGroupPolicyOutcomeCallable GetLineageGroupPolicyCallable(const GetLineageGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::GetLineageGroupPolicy, request);
        }

        /**
         * An Async wrapper for GetLineageGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLineageGroupPolicyRequestT = Model::GetLineageGroupPolicyRequest>
        void GetLineageGroupPolicyAsync(const GetLineageGroupPolicyRequestT& request, const GetLineageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::GetLineageGroupPolicy, request, handler, context);
        }

        /**
         * <p>Gets a resource policy that manages access for a model group. For information
         * about resource policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
         * policies and resource-based policies</a> in the <i>Amazon Web Services Identity
         * and Access Management User Guide.</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetModelPackageGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelPackageGroupPolicyOutcome GetModelPackageGroupPolicy(const Model::GetModelPackageGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetModelPackageGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelPackageGroupPolicyRequestT = Model::GetModelPackageGroupPolicyRequest>
        Model::GetModelPackageGroupPolicyOutcomeCallable GetModelPackageGroupPolicyCallable(const GetModelPackageGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::GetModelPackageGroupPolicy, request);
        }

        /**
         * An Async wrapper for GetModelPackageGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelPackageGroupPolicyRequestT = Model::GetModelPackageGroupPolicyRequest>
        void GetModelPackageGroupPolicyAsync(const GetModelPackageGroupPolicyRequestT& request, const GetModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::GetModelPackageGroupPolicy, request, handler, context);
        }

        /**
         * <p>Gets the status of Service Catalog in SageMaker. Service Catalog is used to
         * create SageMaker projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetSagemakerServicecatalogPortfolioStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSagemakerServicecatalogPortfolioStatusOutcome GetSagemakerServicecatalogPortfolioStatus(const Model::GetSagemakerServicecatalogPortfolioStatusRequest& request) const;

        /**
         * A Callable wrapper for GetSagemakerServicecatalogPortfolioStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSagemakerServicecatalogPortfolioStatusRequestT = Model::GetSagemakerServicecatalogPortfolioStatusRequest>
        Model::GetSagemakerServicecatalogPortfolioStatusOutcomeCallable GetSagemakerServicecatalogPortfolioStatusCallable(const GetSagemakerServicecatalogPortfolioStatusRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::GetSagemakerServicecatalogPortfolioStatus, request);
        }

        /**
         * An Async wrapper for GetSagemakerServicecatalogPortfolioStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSagemakerServicecatalogPortfolioStatusRequestT = Model::GetSagemakerServicecatalogPortfolioStatusRequest>
        void GetSagemakerServicecatalogPortfolioStatusAsync(const GetSagemakerServicecatalogPortfolioStatusRequestT& request, const GetSagemakerServicecatalogPortfolioStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::GetSagemakerServicecatalogPortfolioStatus, request, handler, context);
        }

        /**
         * <p>Starts an Amazon SageMaker Inference Recommender autoscaling recommendation
         * job. Returns recommendations for autoscaling policies that you can apply to your
         * SageMaker endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetScalingConfigurationRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScalingConfigurationRecommendationOutcome GetScalingConfigurationRecommendation(const Model::GetScalingConfigurationRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetScalingConfigurationRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetScalingConfigurationRecommendationRequestT = Model::GetScalingConfigurationRecommendationRequest>
        Model::GetScalingConfigurationRecommendationOutcomeCallable GetScalingConfigurationRecommendationCallable(const GetScalingConfigurationRecommendationRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::GetScalingConfigurationRecommendation, request);
        }

        /**
         * An Async wrapper for GetScalingConfigurationRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetScalingConfigurationRecommendationRequestT = Model::GetScalingConfigurationRecommendationRequest>
        void GetScalingConfigurationRecommendationAsync(const GetScalingConfigurationRecommendationRequestT& request, const GetScalingConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::GetScalingConfigurationRecommendation, request, handler, context);
        }

        /**
         * <p>An auto-complete API for the search functionality in the SageMaker console.
         * It returns suggestions of possible matches for the property name to use in
         * <code>Search</code> queries. Provides suggestions for
         * <code>HyperParameters</code>, <code>Tags</code>, and
         * <code>Metrics</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetSearchSuggestions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSearchSuggestionsOutcome GetSearchSuggestions(const Model::GetSearchSuggestionsRequest& request) const;

        /**
         * A Callable wrapper for GetSearchSuggestions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSearchSuggestionsRequestT = Model::GetSearchSuggestionsRequest>
        Model::GetSearchSuggestionsOutcomeCallable GetSearchSuggestionsCallable(const GetSearchSuggestionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::GetSearchSuggestions, request);
        }

        /**
         * An Async wrapper for GetSearchSuggestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSearchSuggestionsRequestT = Model::GetSearchSuggestionsRequest>
        void GetSearchSuggestionsAsync(const GetSearchSuggestionsRequestT& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::GetSearchSuggestions, request, handler, context);
        }

        /**
         * <p>Import hub content.</p>  <p>Hub APIs are only callable through
         * SageMaker Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ImportHubContent">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportHubContentOutcome ImportHubContent(const Model::ImportHubContentRequest& request) const;

        /**
         * A Callable wrapper for ImportHubContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportHubContentRequestT = Model::ImportHubContentRequest>
        Model::ImportHubContentOutcomeCallable ImportHubContentCallable(const ImportHubContentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ImportHubContent, request);
        }

        /**
         * An Async wrapper for ImportHubContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportHubContentRequestT = Model::ImportHubContentRequest>
        void ImportHubContentAsync(const ImportHubContentRequestT& request, const ImportHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ImportHubContent, request, handler, context);
        }

        /**
         * <p>Lists the actions in your account and their properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActionsOutcome ListActions(const Model::ListActionsRequest& request) const;

        /**
         * A Callable wrapper for ListActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListActionsRequestT = Model::ListActionsRequest>
        Model::ListActionsOutcomeCallable ListActionsCallable(const ListActionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListActions, request);
        }

        /**
         * An Async wrapper for ListActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListActionsRequestT = Model::ListActionsRequest>
        void ListActionsAsync(const ListActionsRequestT& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListActions, request, handler, context);
        }

        /**
         * <p>Lists the machine learning algorithms that have been created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAlgorithms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlgorithmsOutcome ListAlgorithms(const Model::ListAlgorithmsRequest& request) const;

        /**
         * A Callable wrapper for ListAlgorithms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAlgorithmsRequestT = Model::ListAlgorithmsRequest>
        Model::ListAlgorithmsOutcomeCallable ListAlgorithmsCallable(const ListAlgorithmsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListAlgorithms, request);
        }

        /**
         * An Async wrapper for ListAlgorithms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAlgorithmsRequestT = Model::ListAlgorithmsRequest>
        void ListAlgorithmsAsync(const ListAlgorithmsRequestT& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListAlgorithms, request, handler, context);
        }

        /**
         * <p>Lists the aliases of a specified image or image version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAliasesRequestT = Model::ListAliasesRequest>
        Model::ListAliasesOutcomeCallable ListAliasesCallable(const ListAliasesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListAliases, request);
        }

        /**
         * An Async wrapper for ListAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAliasesRequestT = Model::ListAliasesRequest>
        void ListAliasesAsync(const ListAliasesRequestT& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListAliases, request, handler, context);
        }

        /**
         * <p>Lists the AppImageConfigs in your account and their properties. The list can
         * be filtered by creation time or modified time, and whether the AppImageConfig
         * name contains a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAppImageConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppImageConfigsOutcome ListAppImageConfigs(const Model::ListAppImageConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListAppImageConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppImageConfigsRequestT = Model::ListAppImageConfigsRequest>
        Model::ListAppImageConfigsOutcomeCallable ListAppImageConfigsCallable(const ListAppImageConfigsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListAppImageConfigs, request);
        }

        /**
         * An Async wrapper for ListAppImageConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppImageConfigsRequestT = Model::ListAppImageConfigsRequest>
        void ListAppImageConfigsAsync(const ListAppImageConfigsRequestT& request, const ListAppImageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListAppImageConfigs, request, handler, context);
        }

        /**
         * <p>Lists apps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        Model::ListAppsOutcomeCallable ListAppsCallable(const ListAppsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListApps, request);
        }

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        void ListAppsAsync(const ListAppsRequestT& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListApps, request, handler, context);
        }

        /**
         * <p>Lists the artifacts in your account and their properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListArtifactsRequestT = Model::ListArtifactsRequest>
        Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const ListArtifactsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListArtifacts, request);
        }

        /**
         * An Async wrapper for ListArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListArtifactsRequestT = Model::ListArtifactsRequest>
        void ListArtifactsAsync(const ListArtifactsRequestT& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListArtifacts, request, handler, context);
        }

        /**
         * <p>Lists the associations in your account and their properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssociationsRequestT = Model::ListAssociationsRequest>
        Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const ListAssociationsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListAssociations, request);
        }

        /**
         * An Async wrapper for ListAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssociationsRequestT = Model::ListAssociationsRequest>
        void ListAssociationsAsync(const ListAssociationsRequestT& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListAssociations, request, handler, context);
        }

        /**
         * <p>Request a list of jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAutoMLJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutoMLJobsOutcome ListAutoMLJobs(const Model::ListAutoMLJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAutoMLJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutoMLJobsRequestT = Model::ListAutoMLJobsRequest>
        Model::ListAutoMLJobsOutcomeCallable ListAutoMLJobsCallable(const ListAutoMLJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListAutoMLJobs, request);
        }

        /**
         * An Async wrapper for ListAutoMLJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutoMLJobsRequestT = Model::ListAutoMLJobsRequest>
        void ListAutoMLJobsAsync(const ListAutoMLJobsRequestT& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListAutoMLJobs, request, handler, context);
        }

        /**
         * <p>List the candidates created for the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCandidatesForAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCandidatesForAutoMLJobOutcome ListCandidatesForAutoMLJob(const Model::ListCandidatesForAutoMLJobRequest& request) const;

        /**
         * A Callable wrapper for ListCandidatesForAutoMLJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCandidatesForAutoMLJobRequestT = Model::ListCandidatesForAutoMLJobRequest>
        Model::ListCandidatesForAutoMLJobOutcomeCallable ListCandidatesForAutoMLJobCallable(const ListCandidatesForAutoMLJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListCandidatesForAutoMLJob, request);
        }

        /**
         * An Async wrapper for ListCandidatesForAutoMLJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCandidatesForAutoMLJobRequestT = Model::ListCandidatesForAutoMLJobRequest>
        void ListCandidatesForAutoMLJobAsync(const ListCandidatesForAutoMLJobRequestT& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListCandidatesForAutoMLJob, request, handler, context);
        }

        /**
         * <p>Retrieves the list of instances (also called <i>nodes</i> interchangeably) in
         * a SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListClusterNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClusterNodesOutcome ListClusterNodes(const Model::ListClusterNodesRequest& request) const;

        /**
         * A Callable wrapper for ListClusterNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClusterNodesRequestT = Model::ListClusterNodesRequest>
        Model::ListClusterNodesOutcomeCallable ListClusterNodesCallable(const ListClusterNodesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListClusterNodes, request);
        }

        /**
         * An Async wrapper for ListClusterNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClusterNodesRequestT = Model::ListClusterNodesRequest>
        void ListClusterNodesAsync(const ListClusterNodesRequestT& request, const ListClusterNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListClusterNodes, request, handler, context);
        }

        /**
         * <p>Retrieves the list of SageMaker HyperPod clusters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersRequestT& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListClusters, request, handler, context);
        }

        /**
         * <p>Gets a list of the Git repositories in your account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCodeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodeRepositoriesOutcome ListCodeRepositories(const Model::ListCodeRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for ListCodeRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCodeRepositoriesRequestT = Model::ListCodeRepositoriesRequest>
        Model::ListCodeRepositoriesOutcomeCallable ListCodeRepositoriesCallable(const ListCodeRepositoriesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListCodeRepositories, request);
        }

        /**
         * An Async wrapper for ListCodeRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCodeRepositoriesRequestT = Model::ListCodeRepositoriesRequest>
        void ListCodeRepositoriesAsync(const ListCodeRepositoriesRequestT& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListCodeRepositories, request, handler, context);
        }

        /**
         * <p>Lists model compilation jobs that satisfy various filters.</p> <p>To create a
         * model compilation job, use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateCompilationJob.html">CreateCompilationJob</a>.
         * To get information about a particular model compilation job you have created,
         * use <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeCompilationJob.html">DescribeCompilationJob</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCompilationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCompilationJobsOutcome ListCompilationJobs(const Model::ListCompilationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListCompilationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCompilationJobsRequestT = Model::ListCompilationJobsRequest>
        Model::ListCompilationJobsOutcomeCallable ListCompilationJobsCallable(const ListCompilationJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListCompilationJobs, request);
        }

        /**
         * An Async wrapper for ListCompilationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCompilationJobsRequestT = Model::ListCompilationJobsRequest>
        void ListCompilationJobsAsync(const ListCompilationJobsRequestT& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListCompilationJobs, request, handler, context);
        }

        /**
         * <p>Lists the contexts in your account and their properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListContexts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContextsOutcome ListContexts(const Model::ListContextsRequest& request) const;

        /**
         * A Callable wrapper for ListContexts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContextsRequestT = Model::ListContextsRequest>
        Model::ListContextsOutcomeCallable ListContextsCallable(const ListContextsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListContexts, request);
        }

        /**
         * An Async wrapper for ListContexts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContextsRequestT = Model::ListContextsRequest>
        void ListContextsAsync(const ListContextsRequestT& request, const ListContextsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListContexts, request, handler, context);
        }

        /**
         * <p>Lists the data quality job definitions in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDataQualityJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataQualityJobDefinitionsOutcome ListDataQualityJobDefinitions(const Model::ListDataQualityJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListDataQualityJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataQualityJobDefinitionsRequestT = Model::ListDataQualityJobDefinitionsRequest>
        Model::ListDataQualityJobDefinitionsOutcomeCallable ListDataQualityJobDefinitionsCallable(const ListDataQualityJobDefinitionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListDataQualityJobDefinitions, request);
        }

        /**
         * An Async wrapper for ListDataQualityJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataQualityJobDefinitionsRequestT = Model::ListDataQualityJobDefinitionsRequest>
        void ListDataQualityJobDefinitionsAsync(const ListDataQualityJobDefinitionsRequestT& request, const ListDataQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListDataQualityJobDefinitions, request, handler, context);
        }

        /**
         * <p>Returns a list of devices in the fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDeviceFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceFleetsOutcome ListDeviceFleets(const Model::ListDeviceFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeviceFleetsRequestT = Model::ListDeviceFleetsRequest>
        Model::ListDeviceFleetsOutcomeCallable ListDeviceFleetsCallable(const ListDeviceFleetsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListDeviceFleets, request);
        }

        /**
         * An Async wrapper for ListDeviceFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceFleetsRequestT = Model::ListDeviceFleetsRequest>
        void ListDeviceFleetsAsync(const ListDeviceFleetsRequestT& request, const ListDeviceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListDeviceFleets, request, handler, context);
        }

        /**
         * <p>A list of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        Model::ListDevicesOutcomeCallable ListDevicesCallable(const ListDevicesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListDevices, request);
        }

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        void ListDevicesAsync(const ListDevicesRequestT& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListDevices, request, handler, context);
        }

        /**
         * <p>Lists the domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsRequestT& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Lists all edge deployment plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEdgeDeploymentPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEdgeDeploymentPlansOutcome ListEdgeDeploymentPlans(const Model::ListEdgeDeploymentPlansRequest& request) const;

        /**
         * A Callable wrapper for ListEdgeDeploymentPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEdgeDeploymentPlansRequestT = Model::ListEdgeDeploymentPlansRequest>
        Model::ListEdgeDeploymentPlansOutcomeCallable ListEdgeDeploymentPlansCallable(const ListEdgeDeploymentPlansRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListEdgeDeploymentPlans, request);
        }

        /**
         * An Async wrapper for ListEdgeDeploymentPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEdgeDeploymentPlansRequestT = Model::ListEdgeDeploymentPlansRequest>
        void ListEdgeDeploymentPlansAsync(const ListEdgeDeploymentPlansRequestT& request, const ListEdgeDeploymentPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListEdgeDeploymentPlans, request, handler, context);
        }

        /**
         * <p>Returns a list of edge packaging jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEdgePackagingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEdgePackagingJobsOutcome ListEdgePackagingJobs(const Model::ListEdgePackagingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListEdgePackagingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEdgePackagingJobsRequestT = Model::ListEdgePackagingJobsRequest>
        Model::ListEdgePackagingJobsOutcomeCallable ListEdgePackagingJobsCallable(const ListEdgePackagingJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListEdgePackagingJobs, request);
        }

        /**
         * An Async wrapper for ListEdgePackagingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEdgePackagingJobsRequestT = Model::ListEdgePackagingJobsRequest>
        void ListEdgePackagingJobsAsync(const ListEdgePackagingJobsRequestT& request, const ListEdgePackagingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListEdgePackagingJobs, request, handler, context);
        }

        /**
         * <p>Lists endpoint configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpointConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointConfigsOutcome ListEndpointConfigs(const Model::ListEndpointConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListEndpointConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEndpointConfigsRequestT = Model::ListEndpointConfigsRequest>
        Model::ListEndpointConfigsOutcomeCallable ListEndpointConfigsCallable(const ListEndpointConfigsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListEndpointConfigs, request);
        }

        /**
         * An Async wrapper for ListEndpointConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEndpointConfigsRequestT = Model::ListEndpointConfigsRequest>
        void ListEndpointConfigsAsync(const ListEndpointConfigsRequestT& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListEndpointConfigs, request, handler, context);
        }

        /**
         * <p>Lists endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsOutcome ListEndpoints(const Model::ListEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEndpointsRequestT = Model::ListEndpointsRequest>
        Model::ListEndpointsOutcomeCallable ListEndpointsCallable(const ListEndpointsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListEndpoints, request);
        }

        /**
         * An Async wrapper for ListEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEndpointsRequestT = Model::ListEndpointsRequest>
        void ListEndpointsAsync(const ListEndpointsRequestT& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListEndpoints, request, handler, context);
        }

        /**
         * <p>Lists all the experiments in your account. The list can be filtered to show
         * only experiments that were created in a specific time range. The list can be
         * sorted by experiment name or creation time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;

        /**
         * A Callable wrapper for ListExperiments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExperimentsRequestT = Model::ListExperimentsRequest>
        Model::ListExperimentsOutcomeCallable ListExperimentsCallable(const ListExperimentsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListExperiments, request);
        }

        /**
         * An Async wrapper for ListExperiments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExperimentsRequestT = Model::ListExperimentsRequest>
        void ListExperimentsAsync(const ListExperimentsRequestT& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListExperiments, request, handler, context);
        }

        /**
         * <p>List <code>FeatureGroup</code>s based on given filter and
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListFeatureGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFeatureGroupsOutcome ListFeatureGroups(const Model::ListFeatureGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListFeatureGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFeatureGroupsRequestT = Model::ListFeatureGroupsRequest>
        Model::ListFeatureGroupsOutcomeCallable ListFeatureGroupsCallable(const ListFeatureGroupsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListFeatureGroups, request);
        }

        /**
         * An Async wrapper for ListFeatureGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFeatureGroupsRequestT = Model::ListFeatureGroupsRequest>
        void ListFeatureGroupsAsync(const ListFeatureGroupsRequestT& request, const ListFeatureGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListFeatureGroups, request, handler, context);
        }

        /**
         * <p>Returns information about the flow definitions in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListFlowDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowDefinitionsOutcome ListFlowDefinitions(const Model::ListFlowDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListFlowDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowDefinitionsRequestT = Model::ListFlowDefinitionsRequest>
        Model::ListFlowDefinitionsOutcomeCallable ListFlowDefinitionsCallable(const ListFlowDefinitionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListFlowDefinitions, request);
        }

        /**
         * An Async wrapper for ListFlowDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowDefinitionsRequestT = Model::ListFlowDefinitionsRequest>
        void ListFlowDefinitionsAsync(const ListFlowDefinitionsRequestT& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListFlowDefinitions, request, handler, context);
        }

        /**
         * <p>List hub content versions.</p>  <p>Hub APIs are only callable through
         * SageMaker Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHubContentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHubContentVersionsOutcome ListHubContentVersions(const Model::ListHubContentVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListHubContentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHubContentVersionsRequestT = Model::ListHubContentVersionsRequest>
        Model::ListHubContentVersionsOutcomeCallable ListHubContentVersionsCallable(const ListHubContentVersionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListHubContentVersions, request);
        }

        /**
         * An Async wrapper for ListHubContentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHubContentVersionsRequestT = Model::ListHubContentVersionsRequest>
        void ListHubContentVersionsAsync(const ListHubContentVersionsRequestT& request, const ListHubContentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListHubContentVersions, request, handler, context);
        }

        /**
         * <p>List the contents of a hub.</p>  <p>Hub APIs are only callable through
         * SageMaker Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHubContents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHubContentsOutcome ListHubContents(const Model::ListHubContentsRequest& request) const;

        /**
         * A Callable wrapper for ListHubContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHubContentsRequestT = Model::ListHubContentsRequest>
        Model::ListHubContentsOutcomeCallable ListHubContentsCallable(const ListHubContentsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListHubContents, request);
        }

        /**
         * An Async wrapper for ListHubContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHubContentsRequestT = Model::ListHubContentsRequest>
        void ListHubContentsAsync(const ListHubContentsRequestT& request, const ListHubContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListHubContents, request, handler, context);
        }

        /**
         * <p>List all existing hubs.</p>  <p>Hub APIs are only callable through
         * SageMaker Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHubs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHubsOutcome ListHubs(const Model::ListHubsRequest& request) const;

        /**
         * A Callable wrapper for ListHubs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHubsRequestT = Model::ListHubsRequest>
        Model::ListHubsOutcomeCallable ListHubsCallable(const ListHubsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListHubs, request);
        }

        /**
         * An Async wrapper for ListHubs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHubsRequestT = Model::ListHubsRequest>
        void ListHubsAsync(const ListHubsRequestT& request, const ListHubsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListHubs, request, handler, context);
        }

        /**
         * <p>Returns information about the human task user interfaces in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHumanTaskUis">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHumanTaskUisOutcome ListHumanTaskUis(const Model::ListHumanTaskUisRequest& request) const;

        /**
         * A Callable wrapper for ListHumanTaskUis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHumanTaskUisRequestT = Model::ListHumanTaskUisRequest>
        Model::ListHumanTaskUisOutcomeCallable ListHumanTaskUisCallable(const ListHumanTaskUisRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListHumanTaskUis, request);
        }

        /**
         * An Async wrapper for ListHumanTaskUis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHumanTaskUisRequestT = Model::ListHumanTaskUisRequest>
        void ListHumanTaskUisAsync(const ListHumanTaskUisRequestT& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListHumanTaskUis, request, handler, context);
        }

        /**
         * <p>Gets a list of <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobSummary.html">HyperParameterTuningJobSummary</a>
         * objects that describe the hyperparameter tuning jobs launched in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHyperParameterTuningJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHyperParameterTuningJobsOutcome ListHyperParameterTuningJobs(const Model::ListHyperParameterTuningJobsRequest& request) const;

        /**
         * A Callable wrapper for ListHyperParameterTuningJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHyperParameterTuningJobsRequestT = Model::ListHyperParameterTuningJobsRequest>
        Model::ListHyperParameterTuningJobsOutcomeCallable ListHyperParameterTuningJobsCallable(const ListHyperParameterTuningJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListHyperParameterTuningJobs, request);
        }

        /**
         * An Async wrapper for ListHyperParameterTuningJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHyperParameterTuningJobsRequestT = Model::ListHyperParameterTuningJobsRequest>
        void ListHyperParameterTuningJobsAsync(const ListHyperParameterTuningJobsRequestT& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListHyperParameterTuningJobs, request, handler, context);
        }

        /**
         * <p>Lists the versions of a specified image and their properties. The list can be
         * filtered by creation time or modified time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageVersionsOutcome ListImageVersions(const Model::ListImageVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListImageVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImageVersionsRequestT = Model::ListImageVersionsRequest>
        Model::ListImageVersionsOutcomeCallable ListImageVersionsCallable(const ListImageVersionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListImageVersions, request);
        }

        /**
         * An Async wrapper for ListImageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImageVersionsRequestT = Model::ListImageVersionsRequest>
        void ListImageVersionsAsync(const ListImageVersionsRequestT& request, const ListImageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListImageVersions, request, handler, context);
        }

        /**
         * <p>Lists the images in your account and their properties. The list can be
         * filtered by creation time or modified time, and whether the image name contains
         * a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;

        /**
         * A Callable wrapper for ListImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImagesRequestT = Model::ListImagesRequest>
        Model::ListImagesOutcomeCallable ListImagesCallable(const ListImagesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListImages, request);
        }

        /**
         * An Async wrapper for ListImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImagesRequestT = Model::ListImagesRequest>
        void ListImagesAsync(const ListImagesRequestT& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListImages, request, handler, context);
        }

        /**
         * <p>Lists the inference components in your account and their
         * properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListInferenceComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceComponentsOutcome ListInferenceComponents(const Model::ListInferenceComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInferenceComponentsRequestT = Model::ListInferenceComponentsRequest>
        Model::ListInferenceComponentsOutcomeCallable ListInferenceComponentsCallable(const ListInferenceComponentsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListInferenceComponents, request);
        }

        /**
         * An Async wrapper for ListInferenceComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInferenceComponentsRequestT = Model::ListInferenceComponentsRequest>
        void ListInferenceComponentsAsync(const ListInferenceComponentsRequestT& request, const ListInferenceComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListInferenceComponents, request, handler, context);
        }

        /**
         * <p>Returns the list of all inference experiments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListInferenceExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceExperimentsOutcome ListInferenceExperiments(const Model::ListInferenceExperimentsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceExperiments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInferenceExperimentsRequestT = Model::ListInferenceExperimentsRequest>
        Model::ListInferenceExperimentsOutcomeCallable ListInferenceExperimentsCallable(const ListInferenceExperimentsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListInferenceExperiments, request);
        }

        /**
         * An Async wrapper for ListInferenceExperiments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInferenceExperimentsRequestT = Model::ListInferenceExperimentsRequest>
        void ListInferenceExperimentsAsync(const ListInferenceExperimentsRequestT& request, const ListInferenceExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListInferenceExperiments, request, handler, context);
        }

        /**
         * <p>Returns a list of the subtasks for an Inference Recommender job.</p> <p>The
         * supported subtasks are benchmarks, which evaluate the performance of your model
         * on different instance types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListInferenceRecommendationsJobSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceRecommendationsJobStepsOutcome ListInferenceRecommendationsJobSteps(const Model::ListInferenceRecommendationsJobStepsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceRecommendationsJobSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInferenceRecommendationsJobStepsRequestT = Model::ListInferenceRecommendationsJobStepsRequest>
        Model::ListInferenceRecommendationsJobStepsOutcomeCallable ListInferenceRecommendationsJobStepsCallable(const ListInferenceRecommendationsJobStepsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListInferenceRecommendationsJobSteps, request);
        }

        /**
         * An Async wrapper for ListInferenceRecommendationsJobSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInferenceRecommendationsJobStepsRequestT = Model::ListInferenceRecommendationsJobStepsRequest>
        void ListInferenceRecommendationsJobStepsAsync(const ListInferenceRecommendationsJobStepsRequestT& request, const ListInferenceRecommendationsJobStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListInferenceRecommendationsJobSteps, request, handler, context);
        }

        /**
         * <p>Lists recommendation jobs that satisfy various filters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListInferenceRecommendationsJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceRecommendationsJobsOutcome ListInferenceRecommendationsJobs(const Model::ListInferenceRecommendationsJobsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceRecommendationsJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInferenceRecommendationsJobsRequestT = Model::ListInferenceRecommendationsJobsRequest>
        Model::ListInferenceRecommendationsJobsOutcomeCallable ListInferenceRecommendationsJobsCallable(const ListInferenceRecommendationsJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListInferenceRecommendationsJobs, request);
        }

        /**
         * An Async wrapper for ListInferenceRecommendationsJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInferenceRecommendationsJobsRequestT = Model::ListInferenceRecommendationsJobsRequest>
        void ListInferenceRecommendationsJobsAsync(const ListInferenceRecommendationsJobsRequestT& request, const ListInferenceRecommendationsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListInferenceRecommendationsJobs, request, handler, context);
        }

        /**
         * <p>Gets a list of labeling jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelingJobsOutcome ListLabelingJobs(const Model::ListLabelingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListLabelingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLabelingJobsRequestT = Model::ListLabelingJobsRequest>
        Model::ListLabelingJobsOutcomeCallable ListLabelingJobsCallable(const ListLabelingJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListLabelingJobs, request);
        }

        /**
         * An Async wrapper for ListLabelingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLabelingJobsRequestT = Model::ListLabelingJobsRequest>
        void ListLabelingJobsAsync(const ListLabelingJobsRequestT& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListLabelingJobs, request, handler, context);
        }

        /**
         * <p>Gets a list of labeling jobs assigned to a specified work team.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobsForWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelingJobsForWorkteamOutcome ListLabelingJobsForWorkteam(const Model::ListLabelingJobsForWorkteamRequest& request) const;

        /**
         * A Callable wrapper for ListLabelingJobsForWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLabelingJobsForWorkteamRequestT = Model::ListLabelingJobsForWorkteamRequest>
        Model::ListLabelingJobsForWorkteamOutcomeCallable ListLabelingJobsForWorkteamCallable(const ListLabelingJobsForWorkteamRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListLabelingJobsForWorkteam, request);
        }

        /**
         * An Async wrapper for ListLabelingJobsForWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLabelingJobsForWorkteamRequestT = Model::ListLabelingJobsForWorkteamRequest>
        void ListLabelingJobsForWorkteamAsync(const ListLabelingJobsForWorkteamRequestT& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListLabelingJobsForWorkteam, request, handler, context);
        }

        /**
         * <p>A list of lineage groups shared with your Amazon Web Services account. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/xaccount-lineage-tracking.html">
         * Cross-Account Lineage Tracking </a> in the <i>Amazon SageMaker Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLineageGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLineageGroupsOutcome ListLineageGroups(const Model::ListLineageGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListLineageGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLineageGroupsRequestT = Model::ListLineageGroupsRequest>
        Model::ListLineageGroupsOutcomeCallable ListLineageGroupsCallable(const ListLineageGroupsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListLineageGroups, request);
        }

        /**
         * An Async wrapper for ListLineageGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLineageGroupsRequestT = Model::ListLineageGroupsRequest>
        void ListLineageGroupsAsync(const ListLineageGroupsRequestT& request, const ListLineageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListLineageGroups, request, handler, context);
        }

        /**
         * <p>Lists model bias jobs definitions that satisfy various filters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelBiasJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelBiasJobDefinitionsOutcome ListModelBiasJobDefinitions(const Model::ListModelBiasJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelBiasJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelBiasJobDefinitionsRequestT = Model::ListModelBiasJobDefinitionsRequest>
        Model::ListModelBiasJobDefinitionsOutcomeCallable ListModelBiasJobDefinitionsCallable(const ListModelBiasJobDefinitionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelBiasJobDefinitions, request);
        }

        /**
         * An Async wrapper for ListModelBiasJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelBiasJobDefinitionsRequestT = Model::ListModelBiasJobDefinitionsRequest>
        void ListModelBiasJobDefinitionsAsync(const ListModelBiasJobDefinitionsRequestT& request, const ListModelBiasJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelBiasJobDefinitions, request, handler, context);
        }

        /**
         * <p>List the export jobs for the Amazon SageMaker Model Card.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelCardExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelCardExportJobsOutcome ListModelCardExportJobs(const Model::ListModelCardExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListModelCardExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelCardExportJobsRequestT = Model::ListModelCardExportJobsRequest>
        Model::ListModelCardExportJobsOutcomeCallable ListModelCardExportJobsCallable(const ListModelCardExportJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelCardExportJobs, request);
        }

        /**
         * An Async wrapper for ListModelCardExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelCardExportJobsRequestT = Model::ListModelCardExportJobsRequest>
        void ListModelCardExportJobsAsync(const ListModelCardExportJobsRequestT& request, const ListModelCardExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelCardExportJobs, request, handler, context);
        }

        /**
         * <p>List existing versions of an Amazon SageMaker Model Card.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelCardVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelCardVersionsOutcome ListModelCardVersions(const Model::ListModelCardVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelCardVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelCardVersionsRequestT = Model::ListModelCardVersionsRequest>
        Model::ListModelCardVersionsOutcomeCallable ListModelCardVersionsCallable(const ListModelCardVersionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelCardVersions, request);
        }

        /**
         * An Async wrapper for ListModelCardVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelCardVersionsRequestT = Model::ListModelCardVersionsRequest>
        void ListModelCardVersionsAsync(const ListModelCardVersionsRequestT& request, const ListModelCardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelCardVersions, request, handler, context);
        }

        /**
         * <p>List existing model cards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelCards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelCardsOutcome ListModelCards(const Model::ListModelCardsRequest& request) const;

        /**
         * A Callable wrapper for ListModelCards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelCardsRequestT = Model::ListModelCardsRequest>
        Model::ListModelCardsOutcomeCallable ListModelCardsCallable(const ListModelCardsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelCards, request);
        }

        /**
         * An Async wrapper for ListModelCards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelCardsRequestT = Model::ListModelCardsRequest>
        void ListModelCardsAsync(const ListModelCardsRequestT& request, const ListModelCardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelCards, request, handler, context);
        }

        /**
         * <p>Lists model explainability job definitions that satisfy various
         * filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelExplainabilityJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelExplainabilityJobDefinitionsOutcome ListModelExplainabilityJobDefinitions(const Model::ListModelExplainabilityJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelExplainabilityJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelExplainabilityJobDefinitionsRequestT = Model::ListModelExplainabilityJobDefinitionsRequest>
        Model::ListModelExplainabilityJobDefinitionsOutcomeCallable ListModelExplainabilityJobDefinitionsCallable(const ListModelExplainabilityJobDefinitionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelExplainabilityJobDefinitions, request);
        }

        /**
         * An Async wrapper for ListModelExplainabilityJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelExplainabilityJobDefinitionsRequestT = Model::ListModelExplainabilityJobDefinitionsRequest>
        void ListModelExplainabilityJobDefinitionsAsync(const ListModelExplainabilityJobDefinitionsRequestT& request, const ListModelExplainabilityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelExplainabilityJobDefinitions, request, handler, context);
        }

        /**
         * <p>Lists the domain, framework, task, and model name of standard machine
         * learning models found in common model zoos.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelMetadataOutcome ListModelMetadata(const Model::ListModelMetadataRequest& request) const;

        /**
         * A Callable wrapper for ListModelMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelMetadataRequestT = Model::ListModelMetadataRequest>
        Model::ListModelMetadataOutcomeCallable ListModelMetadataCallable(const ListModelMetadataRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelMetadata, request);
        }

        /**
         * An Async wrapper for ListModelMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelMetadataRequestT = Model::ListModelMetadataRequest>
        void ListModelMetadataAsync(const ListModelMetadataRequestT& request, const ListModelMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelMetadata, request, handler, context);
        }

        /**
         * <p>Gets a list of the model groups in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelPackageGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelPackageGroupsOutcome ListModelPackageGroups(const Model::ListModelPackageGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListModelPackageGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelPackageGroupsRequestT = Model::ListModelPackageGroupsRequest>
        Model::ListModelPackageGroupsOutcomeCallable ListModelPackageGroupsCallable(const ListModelPackageGroupsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelPackageGroups, request);
        }

        /**
         * An Async wrapper for ListModelPackageGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelPackageGroupsRequestT = Model::ListModelPackageGroupsRequest>
        void ListModelPackageGroupsAsync(const ListModelPackageGroupsRequestT& request, const ListModelPackageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelPackageGroups, request, handler, context);
        }

        /**
         * <p>Lists the model packages that have been created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelPackagesOutcome ListModelPackages(const Model::ListModelPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListModelPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelPackagesRequestT = Model::ListModelPackagesRequest>
        Model::ListModelPackagesOutcomeCallable ListModelPackagesCallable(const ListModelPackagesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelPackages, request);
        }

        /**
         * An Async wrapper for ListModelPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelPackagesRequestT = Model::ListModelPackagesRequest>
        void ListModelPackagesAsync(const ListModelPackagesRequestT& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelPackages, request, handler, context);
        }

        /**
         * <p>Gets a list of model quality monitoring job definitions in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelQualityJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelQualityJobDefinitionsOutcome ListModelQualityJobDefinitions(const Model::ListModelQualityJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelQualityJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelQualityJobDefinitionsRequestT = Model::ListModelQualityJobDefinitionsRequest>
        Model::ListModelQualityJobDefinitionsOutcomeCallable ListModelQualityJobDefinitionsCallable(const ListModelQualityJobDefinitionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModelQualityJobDefinitions, request);
        }

        /**
         * An Async wrapper for ListModelQualityJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelQualityJobDefinitionsRequestT = Model::ListModelQualityJobDefinitionsRequest>
        void ListModelQualityJobDefinitionsAsync(const ListModelQualityJobDefinitionsRequestT& request, const ListModelQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModelQualityJobDefinitions, request, handler, context);
        }

        /**
         * <p>Lists models created with the <code>CreateModel</code> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * A Callable wrapper for ListModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelsRequestT = Model::ListModelsRequest>
        Model::ListModelsOutcomeCallable ListModelsCallable(const ListModelsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListModels, request);
        }

        /**
         * An Async wrapper for ListModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelsRequestT = Model::ListModelsRequest>
        void ListModelsAsync(const ListModelsRequestT& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListModels, request, handler, context);
        }

        /**
         * <p>Gets a list of past alerts in a model monitoring schedule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringAlertHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringAlertHistoryOutcome ListMonitoringAlertHistory(const Model::ListMonitoringAlertHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoringAlertHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitoringAlertHistoryRequestT = Model::ListMonitoringAlertHistoryRequest>
        Model::ListMonitoringAlertHistoryOutcomeCallable ListMonitoringAlertHistoryCallable(const ListMonitoringAlertHistoryRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListMonitoringAlertHistory, request);
        }

        /**
         * An Async wrapper for ListMonitoringAlertHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitoringAlertHistoryRequestT = Model::ListMonitoringAlertHistoryRequest>
        void ListMonitoringAlertHistoryAsync(const ListMonitoringAlertHistoryRequestT& request, const ListMonitoringAlertHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListMonitoringAlertHistory, request, handler, context);
        }

        /**
         * <p>Gets the alerts for a single monitoring schedule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringAlerts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringAlertsOutcome ListMonitoringAlerts(const Model::ListMonitoringAlertsRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoringAlerts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitoringAlertsRequestT = Model::ListMonitoringAlertsRequest>
        Model::ListMonitoringAlertsOutcomeCallable ListMonitoringAlertsCallable(const ListMonitoringAlertsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListMonitoringAlerts, request);
        }

        /**
         * An Async wrapper for ListMonitoringAlerts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitoringAlertsRequestT = Model::ListMonitoringAlertsRequest>
        void ListMonitoringAlertsAsync(const ListMonitoringAlertsRequestT& request, const ListMonitoringAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListMonitoringAlerts, request, handler, context);
        }

        /**
         * <p>Returns list of all monitoring job executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringExecutionsOutcome ListMonitoringExecutions(const Model::ListMonitoringExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoringExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitoringExecutionsRequestT = Model::ListMonitoringExecutionsRequest>
        Model::ListMonitoringExecutionsOutcomeCallable ListMonitoringExecutionsCallable(const ListMonitoringExecutionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListMonitoringExecutions, request);
        }

        /**
         * An Async wrapper for ListMonitoringExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitoringExecutionsRequestT = Model::ListMonitoringExecutionsRequest>
        void ListMonitoringExecutionsAsync(const ListMonitoringExecutionsRequestT& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListMonitoringExecutions, request, handler, context);
        }

        /**
         * <p>Returns list of all monitoring schedules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringSchedulesOutcome ListMonitoringSchedules(const Model::ListMonitoringSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoringSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitoringSchedulesRequestT = Model::ListMonitoringSchedulesRequest>
        Model::ListMonitoringSchedulesOutcomeCallable ListMonitoringSchedulesCallable(const ListMonitoringSchedulesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListMonitoringSchedules, request);
        }

        /**
         * An Async wrapper for ListMonitoringSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitoringSchedulesRequestT = Model::ListMonitoringSchedulesRequest>
        void ListMonitoringSchedulesAsync(const ListMonitoringSchedulesRequestT& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListMonitoringSchedules, request, handler, context);
        }

        /**
         * <p>Lists notebook instance lifestyle configurations created with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateNotebookInstanceLifecycleConfig.html">CreateNotebookInstanceLifecycleConfig</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstanceLifecycleConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookInstanceLifecycleConfigsOutcome ListNotebookInstanceLifecycleConfigs(const Model::ListNotebookInstanceLifecycleConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListNotebookInstanceLifecycleConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotebookInstanceLifecycleConfigsRequestT = Model::ListNotebookInstanceLifecycleConfigsRequest>
        Model::ListNotebookInstanceLifecycleConfigsOutcomeCallable ListNotebookInstanceLifecycleConfigsCallable(const ListNotebookInstanceLifecycleConfigsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListNotebookInstanceLifecycleConfigs, request);
        }

        /**
         * An Async wrapper for ListNotebookInstanceLifecycleConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotebookInstanceLifecycleConfigsRequestT = Model::ListNotebookInstanceLifecycleConfigsRequest>
        void ListNotebookInstanceLifecycleConfigsAsync(const ListNotebookInstanceLifecycleConfigsRequestT& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListNotebookInstanceLifecycleConfigs, request, handler, context);
        }

        /**
         * <p>Returns a list of the SageMaker notebook instances in the requester's account
         * in an Amazon Web Services Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookInstancesOutcome ListNotebookInstances(const Model::ListNotebookInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListNotebookInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotebookInstancesRequestT = Model::ListNotebookInstancesRequest>
        Model::ListNotebookInstancesOutcomeCallable ListNotebookInstancesCallable(const ListNotebookInstancesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListNotebookInstances, request);
        }

        /**
         * An Async wrapper for ListNotebookInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotebookInstancesRequestT = Model::ListNotebookInstancesRequest>
        void ListNotebookInstancesAsync(const ListNotebookInstancesRequestT& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListNotebookInstances, request, handler, context);
        }

        /**
         * <p>Gets a list of <code>PipeLineExecutionStep</code> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListPipelineExecutionSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineExecutionStepsOutcome ListPipelineExecutionSteps(const Model::ListPipelineExecutionStepsRequest& request) const;

        /**
         * A Callable wrapper for ListPipelineExecutionSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelineExecutionStepsRequestT = Model::ListPipelineExecutionStepsRequest>
        Model::ListPipelineExecutionStepsOutcomeCallable ListPipelineExecutionStepsCallable(const ListPipelineExecutionStepsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListPipelineExecutionSteps, request);
        }

        /**
         * An Async wrapper for ListPipelineExecutionSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelineExecutionStepsRequestT = Model::ListPipelineExecutionStepsRequest>
        void ListPipelineExecutionStepsAsync(const ListPipelineExecutionStepsRequestT& request, const ListPipelineExecutionStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListPipelineExecutionSteps, request, handler, context);
        }

        /**
         * <p>Gets a list of the pipeline executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListPipelineExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineExecutionsOutcome ListPipelineExecutions(const Model::ListPipelineExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListPipelineExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelineExecutionsRequestT = Model::ListPipelineExecutionsRequest>
        Model::ListPipelineExecutionsOutcomeCallable ListPipelineExecutionsCallable(const ListPipelineExecutionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListPipelineExecutions, request);
        }

        /**
         * An Async wrapper for ListPipelineExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelineExecutionsRequestT = Model::ListPipelineExecutionsRequest>
        void ListPipelineExecutionsAsync(const ListPipelineExecutionsRequestT& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListPipelineExecutions, request, handler, context);
        }

        /**
         * <p>Gets a list of parameters for a pipeline execution.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListPipelineParametersForExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineParametersForExecutionOutcome ListPipelineParametersForExecution(const Model::ListPipelineParametersForExecutionRequest& request) const;

        /**
         * A Callable wrapper for ListPipelineParametersForExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelineParametersForExecutionRequestT = Model::ListPipelineParametersForExecutionRequest>
        Model::ListPipelineParametersForExecutionOutcomeCallable ListPipelineParametersForExecutionCallable(const ListPipelineParametersForExecutionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListPipelineParametersForExecution, request);
        }

        /**
         * An Async wrapper for ListPipelineParametersForExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelineParametersForExecutionRequestT = Model::ListPipelineParametersForExecutionRequest>
        void ListPipelineParametersForExecutionAsync(const ListPipelineParametersForExecutionRequestT& request, const ListPipelineParametersForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListPipelineParametersForExecution, request, handler, context);
        }

        /**
         * <p>Gets a list of pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelinesRequestT = Model::ListPipelinesRequest>
        Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const ListPipelinesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListPipelines, request);
        }

        /**
         * An Async wrapper for ListPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelinesRequestT = Model::ListPipelinesRequest>
        void ListPipelinesAsync(const ListPipelinesRequestT& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListPipelines, request, handler, context);
        }

        /**
         * <p>Lists processing jobs that satisfy various filters.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListProcessingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProcessingJobsOutcome ListProcessingJobs(const Model::ListProcessingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListProcessingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProcessingJobsRequestT = Model::ListProcessingJobsRequest>
        Model::ListProcessingJobsOutcomeCallable ListProcessingJobsCallable(const ListProcessingJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListProcessingJobs, request);
        }

        /**
         * An Async wrapper for ListProcessingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProcessingJobsRequestT = Model::ListProcessingJobsRequest>
        void ListProcessingJobsAsync(const ListProcessingJobsRequestT& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListProcessingJobs, request, handler, context);
        }

        /**
         * <p>Gets a list of the projects in an Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListProjects, request, handler, context);
        }

        /**
         * <p> Lists Amazon SageMaker Catalogs based on given filters and orders. The
         * maximum number of <code>ResourceCatalog</code>s viewable is 1000. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListResourceCatalogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceCatalogsOutcome ListResourceCatalogs(const Model::ListResourceCatalogsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceCatalogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceCatalogsRequestT = Model::ListResourceCatalogsRequest>
        Model::ListResourceCatalogsOutcomeCallable ListResourceCatalogsCallable(const ListResourceCatalogsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListResourceCatalogs, request);
        }

        /**
         * An Async wrapper for ListResourceCatalogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceCatalogsRequestT = Model::ListResourceCatalogsRequest>
        void ListResourceCatalogsAsync(const ListResourceCatalogsRequestT& request, const ListResourceCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListResourceCatalogs, request, handler, context);
        }

        /**
         * <p>Lists spaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListSpaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpacesOutcome ListSpaces(const Model::ListSpacesRequest& request) const;

        /**
         * A Callable wrapper for ListSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSpacesRequestT = Model::ListSpacesRequest>
        Model::ListSpacesOutcomeCallable ListSpacesCallable(const ListSpacesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListSpaces, request);
        }

        /**
         * An Async wrapper for ListSpaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSpacesRequestT = Model::ListSpacesRequest>
        void ListSpacesAsync(const ListSpacesRequestT& request, const ListSpacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListSpaces, request, handler, context);
        }

        /**
         * <p>Lists devices allocated to the stage, containing detailed device information
         * and deployment status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListStageDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStageDevicesOutcome ListStageDevices(const Model::ListStageDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListStageDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStageDevicesRequestT = Model::ListStageDevicesRequest>
        Model::ListStageDevicesOutcomeCallable ListStageDevicesCallable(const ListStageDevicesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListStageDevices, request);
        }

        /**
         * An Async wrapper for ListStageDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStageDevicesRequestT = Model::ListStageDevicesRequest>
        void ListStageDevicesAsync(const ListStageDevicesRequestT& request, const ListStageDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListStageDevices, request, handler, context);
        }

        /**
         * <p>Lists the Amazon SageMaker Studio Lifecycle Configurations in your Amazon Web
         * Services Account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListStudioLifecycleConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioLifecycleConfigsOutcome ListStudioLifecycleConfigs(const Model::ListStudioLifecycleConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListStudioLifecycleConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStudioLifecycleConfigsRequestT = Model::ListStudioLifecycleConfigsRequest>
        Model::ListStudioLifecycleConfigsOutcomeCallable ListStudioLifecycleConfigsCallable(const ListStudioLifecycleConfigsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListStudioLifecycleConfigs, request);
        }

        /**
         * An Async wrapper for ListStudioLifecycleConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStudioLifecycleConfigsRequestT = Model::ListStudioLifecycleConfigsRequest>
        void ListStudioLifecycleConfigsAsync(const ListStudioLifecycleConfigsRequestT& request, const ListStudioLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListStudioLifecycleConfigs, request, handler, context);
        }

        /**
         * <p>Gets a list of the work teams that you are subscribed to in the Amazon Web
         * Services Marketplace. The list may be empty if no work team satisfies the filter
         * specified in the <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListSubscribedWorkteams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscribedWorkteamsOutcome ListSubscribedWorkteams(const Model::ListSubscribedWorkteamsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscribedWorkteams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscribedWorkteamsRequestT = Model::ListSubscribedWorkteamsRequest>
        Model::ListSubscribedWorkteamsOutcomeCallable ListSubscribedWorkteamsCallable(const ListSubscribedWorkteamsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListSubscribedWorkteams, request);
        }

        /**
         * An Async wrapper for ListSubscribedWorkteams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscribedWorkteamsRequestT = Model::ListSubscribedWorkteamsRequest>
        void ListSubscribedWorkteamsAsync(const ListSubscribedWorkteamsRequestT& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListSubscribedWorkteams, request, handler, context);
        }

        /**
         * <p>Returns the tags for the specified SageMaker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListTags, request);
        }

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListTags, request, handler, context);
        }

        /**
         * <p>Lists training jobs.</p>  <p>When <code>StatusEquals</code> and
         * <code>MaxResults</code> are set at the same time, the <code>MaxResults</code>
         * number of training jobs are first retrieved ignoring the
         * <code>StatusEquals</code> parameter and then they are filtered by the
         * <code>StatusEquals</code> parameter, which is returned as a response.</p> <p>For
         * example, if <code>ListTrainingJobs</code> is invoked with the following
         * parameters:</p> <p> <code>{ ... MaxResults: 100, StatusEquals: InProgress ...
         * }</code> </p> <p>First, 100 trainings jobs with any status, including those
         * other than <code>InProgress</code>, are selected (sorted according to the
         * creation time, from the most current to the oldest). Next, those with a status
         * of <code>InProgress</code> are returned.</p> <p>You can quickly test the API
         * using the following Amazon Web Services CLI code.</p> <p> <code>aws sagemaker
         * list-training-jobs --max-results 100 --status-equals InProgress</code> </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingJobsOutcome ListTrainingJobs(const Model::ListTrainingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTrainingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrainingJobsRequestT = Model::ListTrainingJobsRequest>
        Model::ListTrainingJobsOutcomeCallable ListTrainingJobsCallable(const ListTrainingJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListTrainingJobs, request);
        }

        /**
         * An Async wrapper for ListTrainingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrainingJobsRequestT = Model::ListTrainingJobsRequest>
        void ListTrainingJobsAsync(const ListTrainingJobsRequestT& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListTrainingJobs, request, handler, context);
        }

        /**
         * <p>Gets a list of <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingJobSummary.html">TrainingJobSummary</a>
         * objects that describe the training jobs that a hyperparameter tuning job
         * launched.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobsForHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingJobsForHyperParameterTuningJobOutcome ListTrainingJobsForHyperParameterTuningJob(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for ListTrainingJobsForHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrainingJobsForHyperParameterTuningJobRequestT = Model::ListTrainingJobsForHyperParameterTuningJobRequest>
        Model::ListTrainingJobsForHyperParameterTuningJobOutcomeCallable ListTrainingJobsForHyperParameterTuningJobCallable(const ListTrainingJobsForHyperParameterTuningJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListTrainingJobsForHyperParameterTuningJob, request);
        }

        /**
         * An Async wrapper for ListTrainingJobsForHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrainingJobsForHyperParameterTuningJobRequestT = Model::ListTrainingJobsForHyperParameterTuningJobRequest>
        void ListTrainingJobsForHyperParameterTuningJobAsync(const ListTrainingJobsForHyperParameterTuningJobRequestT& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListTrainingJobsForHyperParameterTuningJob, request, handler, context);
        }

        /**
         * <p>Lists transform jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTransformJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTransformJobsOutcome ListTransformJobs(const Model::ListTransformJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTransformJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTransformJobsRequestT = Model::ListTransformJobsRequest>
        Model::ListTransformJobsOutcomeCallable ListTransformJobsCallable(const ListTransformJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListTransformJobs, request);
        }

        /**
         * An Async wrapper for ListTransformJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTransformJobsRequestT = Model::ListTransformJobsRequest>
        void ListTransformJobsAsync(const ListTransformJobsRequestT& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListTransformJobs, request, handler, context);
        }

        /**
         * <p>Lists the trial components in your account. You can sort the list by trial
         * component name or creation time. You can filter the list to show only components
         * that were created in a specific time range. You can also filter on one of the
         * following:</p> <ul> <li> <p> <code>ExperimentName</code> </p> </li> <li> <p>
         * <code>SourceArn</code> </p> </li> <li> <p> <code>TrialName</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrialComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrialComponentsOutcome ListTrialComponents(const Model::ListTrialComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListTrialComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrialComponentsRequestT = Model::ListTrialComponentsRequest>
        Model::ListTrialComponentsOutcomeCallable ListTrialComponentsCallable(const ListTrialComponentsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListTrialComponents, request);
        }

        /**
         * An Async wrapper for ListTrialComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrialComponentsRequestT = Model::ListTrialComponentsRequest>
        void ListTrialComponentsAsync(const ListTrialComponentsRequestT& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListTrialComponents, request, handler, context);
        }

        /**
         * <p>Lists the trials in your account. Specify an experiment name to limit the
         * list to the trials that are part of that experiment. Specify a trial component
         * name to limit the list to the trials that associated with that trial component.
         * The list can be filtered to show only trials that were created in a specific
         * time range. The list can be sorted by trial name or creation time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrialsOutcome ListTrials(const Model::ListTrialsRequest& request) const;

        /**
         * A Callable wrapper for ListTrials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrialsRequestT = Model::ListTrialsRequest>
        Model::ListTrialsOutcomeCallable ListTrialsCallable(const ListTrialsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListTrials, request);
        }

        /**
         * An Async wrapper for ListTrials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrialsRequestT = Model::ListTrialsRequest>
        void ListTrialsAsync(const ListTrialsRequestT& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListTrials, request, handler, context);
        }

        /**
         * <p>Lists user profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListUserProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserProfilesOutcome ListUserProfiles(const Model::ListUserProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListUserProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserProfilesRequestT = Model::ListUserProfilesRequest>
        Model::ListUserProfilesOutcomeCallable ListUserProfilesCallable(const ListUserProfilesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListUserProfiles, request);
        }

        /**
         * An Async wrapper for ListUserProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserProfilesRequestT = Model::ListUserProfilesRequest>
        void ListUserProfilesAsync(const ListUserProfilesRequestT& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListUserProfiles, request, handler, context);
        }

        /**
         * <p>Use this operation to list all private and vendor workforces in an Amazon Web
         * Services Region. Note that you can only have one private workforce per Amazon
         * Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkforces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkforcesOutcome ListWorkforces(const Model::ListWorkforcesRequest& request) const;

        /**
         * A Callable wrapper for ListWorkforces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkforcesRequestT = Model::ListWorkforcesRequest>
        Model::ListWorkforcesOutcomeCallable ListWorkforcesCallable(const ListWorkforcesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListWorkforces, request);
        }

        /**
         * An Async wrapper for ListWorkforces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkforcesRequestT = Model::ListWorkforcesRequest>
        void ListWorkforcesAsync(const ListWorkforcesRequestT& request, const ListWorkforcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListWorkforces, request, handler, context);
        }

        /**
         * <p>Gets a list of private work teams that you have defined in a region. The list
         * may be empty if no work team satisfies the filter specified in the
         * <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkteams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkteamsOutcome ListWorkteams(const Model::ListWorkteamsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkteams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkteamsRequestT = Model::ListWorkteamsRequest>
        Model::ListWorkteamsOutcomeCallable ListWorkteamsCallable(const ListWorkteamsRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::ListWorkteams, request);
        }

        /**
         * An Async wrapper for ListWorkteams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkteamsRequestT = Model::ListWorkteamsRequest>
        void ListWorkteamsAsync(const ListWorkteamsRequestT& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::ListWorkteams, request, handler, context);
        }

        /**
         * <p>Adds a resouce policy to control access to a model group. For information
         * about resoure policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
         * policies and resource-based policies</a> in the <i>Amazon Web Services Identity
         * and Access Management User Guide.</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PutModelPackageGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutModelPackageGroupPolicyOutcome PutModelPackageGroupPolicy(const Model::PutModelPackageGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutModelPackageGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutModelPackageGroupPolicyRequestT = Model::PutModelPackageGroupPolicyRequest>
        Model::PutModelPackageGroupPolicyOutcomeCallable PutModelPackageGroupPolicyCallable(const PutModelPackageGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::PutModelPackageGroupPolicy, request);
        }

        /**
         * An Async wrapper for PutModelPackageGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutModelPackageGroupPolicyRequestT = Model::PutModelPackageGroupPolicyRequest>
        void PutModelPackageGroupPolicyAsync(const PutModelPackageGroupPolicyRequestT& request, const PutModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::PutModelPackageGroupPolicy, request, handler, context);
        }

        /**
         * <p>Use this action to inspect your lineage and discover relationships between
         * entities. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/querying-lineage-entities.html">
         * Querying Lineage Entities</a> in the <i>Amazon SageMaker Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/QueryLineage">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryLineageOutcome QueryLineage(const Model::QueryLineageRequest& request) const;

        /**
         * A Callable wrapper for QueryLineage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QueryLineageRequestT = Model::QueryLineageRequest>
        Model::QueryLineageOutcomeCallable QueryLineageCallable(const QueryLineageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::QueryLineage, request);
        }

        /**
         * An Async wrapper for QueryLineage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryLineageRequestT = Model::QueryLineageRequest>
        void QueryLineageAsync(const QueryLineageRequestT& request, const QueryLineageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::QueryLineage, request, handler, context);
        }

        /**
         * <p>Register devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RegisterDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDevicesOutcome RegisterDevices(const Model::RegisterDevicesRequest& request) const;

        /**
         * A Callable wrapper for RegisterDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterDevicesRequestT = Model::RegisterDevicesRequest>
        Model::RegisterDevicesOutcomeCallable RegisterDevicesCallable(const RegisterDevicesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::RegisterDevices, request);
        }

        /**
         * An Async wrapper for RegisterDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterDevicesRequestT = Model::RegisterDevicesRequest>
        void RegisterDevicesAsync(const RegisterDevicesRequestT& request, const RegisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::RegisterDevices, request, handler, context);
        }

        /**
         * <p>Renders the UI template so that you can preview the worker's experience.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RenderUiTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::RenderUiTemplateOutcome RenderUiTemplate(const Model::RenderUiTemplateRequest& request) const;

        /**
         * A Callable wrapper for RenderUiTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RenderUiTemplateRequestT = Model::RenderUiTemplateRequest>
        Model::RenderUiTemplateOutcomeCallable RenderUiTemplateCallable(const RenderUiTemplateRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::RenderUiTemplate, request);
        }

        /**
         * An Async wrapper for RenderUiTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RenderUiTemplateRequestT = Model::RenderUiTemplateRequest>
        void RenderUiTemplateAsync(const RenderUiTemplateRequestT& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::RenderUiTemplate, request, handler, context);
        }

        /**
         * <p>Retry the execution of the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RetryPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryPipelineExecutionOutcome RetryPipelineExecution(const Model::RetryPipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for RetryPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetryPipelineExecutionRequestT = Model::RetryPipelineExecutionRequest>
        Model::RetryPipelineExecutionOutcomeCallable RetryPipelineExecutionCallable(const RetryPipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::RetryPipelineExecution, request);
        }

        /**
         * An Async wrapper for RetryPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetryPipelineExecutionRequestT = Model::RetryPipelineExecutionRequest>
        void RetryPipelineExecutionAsync(const RetryPipelineExecutionRequestT& request, const RetryPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::RetryPipelineExecution, request, handler, context);
        }

        /**
         * <p>Finds SageMaker resources that match a search query. Matching resources are
         * returned as a list of <code>SearchRecord</code> objects in the response. You can
         * sort the search results by any resource property in a ascending or descending
         * order.</p> <p>You can query against the following value types: numeric, text,
         * Boolean, and timestamp.</p>  <p>The Search API may provide access to
         * otherwise restricted data. See <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/api-permissions-reference.html">Amazon
         * SageMaker API Permissions: Actions, Permissions, and Resources Reference</a> for
         * more information.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Search">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOutcome Search(const Model::SearchRequest& request) const;

        /**
         * A Callable wrapper for Search that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchRequestT = Model::SearchRequest>
        Model::SearchOutcomeCallable SearchCallable(const SearchRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::Search, request);
        }

        /**
         * An Async wrapper for Search that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchRequestT = Model::SearchRequest>
        void SearchAsync(const SearchRequestT& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::Search, request, handler, context);
        }

        /**
         * <p>Notifies the pipeline that the execution of a callback step failed, along
         * with a message describing why. When a callback step is run, the pipeline
         * generates a callback token and includes the token in a message sent to Amazon
         * Simple Queue Service (Amazon SQS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SendPipelineExecutionStepFailure">AWS
         * API Reference</a></p>
         */
        virtual Model::SendPipelineExecutionStepFailureOutcome SendPipelineExecutionStepFailure(const Model::SendPipelineExecutionStepFailureRequest& request) const;

        /**
         * A Callable wrapper for SendPipelineExecutionStepFailure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendPipelineExecutionStepFailureRequestT = Model::SendPipelineExecutionStepFailureRequest>
        Model::SendPipelineExecutionStepFailureOutcomeCallable SendPipelineExecutionStepFailureCallable(const SendPipelineExecutionStepFailureRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::SendPipelineExecutionStepFailure, request);
        }

        /**
         * An Async wrapper for SendPipelineExecutionStepFailure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendPipelineExecutionStepFailureRequestT = Model::SendPipelineExecutionStepFailureRequest>
        void SendPipelineExecutionStepFailureAsync(const SendPipelineExecutionStepFailureRequestT& request, const SendPipelineExecutionStepFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::SendPipelineExecutionStepFailure, request, handler, context);
        }

        /**
         * <p>Notifies the pipeline that the execution of a callback step succeeded and
         * provides a list of the step's output parameters. When a callback step is run,
         * the pipeline generates a callback token and includes the token in a message sent
         * to Amazon Simple Queue Service (Amazon SQS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SendPipelineExecutionStepSuccess">AWS
         * API Reference</a></p>
         */
        virtual Model::SendPipelineExecutionStepSuccessOutcome SendPipelineExecutionStepSuccess(const Model::SendPipelineExecutionStepSuccessRequest& request) const;

        /**
         * A Callable wrapper for SendPipelineExecutionStepSuccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendPipelineExecutionStepSuccessRequestT = Model::SendPipelineExecutionStepSuccessRequest>
        Model::SendPipelineExecutionStepSuccessOutcomeCallable SendPipelineExecutionStepSuccessCallable(const SendPipelineExecutionStepSuccessRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::SendPipelineExecutionStepSuccess, request);
        }

        /**
         * An Async wrapper for SendPipelineExecutionStepSuccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendPipelineExecutionStepSuccessRequestT = Model::SendPipelineExecutionStepSuccessRequest>
        void SendPipelineExecutionStepSuccessAsync(const SendPipelineExecutionStepSuccessRequestT& request, const SendPipelineExecutionStepSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::SendPipelineExecutionStepSuccess, request, handler, context);
        }

        /**
         * <p>Starts a stage in an edge deployment plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartEdgeDeploymentStage">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEdgeDeploymentStageOutcome StartEdgeDeploymentStage(const Model::StartEdgeDeploymentStageRequest& request) const;

        /**
         * A Callable wrapper for StartEdgeDeploymentStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartEdgeDeploymentStageRequestT = Model::StartEdgeDeploymentStageRequest>
        Model::StartEdgeDeploymentStageOutcomeCallable StartEdgeDeploymentStageCallable(const StartEdgeDeploymentStageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StartEdgeDeploymentStage, request);
        }

        /**
         * An Async wrapper for StartEdgeDeploymentStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEdgeDeploymentStageRequestT = Model::StartEdgeDeploymentStageRequest>
        void StartEdgeDeploymentStageAsync(const StartEdgeDeploymentStageRequestT& request, const StartEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StartEdgeDeploymentStage, request, handler, context);
        }

        /**
         * <p>Starts an inference experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInferenceExperimentOutcome StartInferenceExperiment(const Model::StartInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for StartInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartInferenceExperimentRequestT = Model::StartInferenceExperimentRequest>
        Model::StartInferenceExperimentOutcomeCallable StartInferenceExperimentCallable(const StartInferenceExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StartInferenceExperiment, request);
        }

        /**
         * An Async wrapper for StartInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInferenceExperimentRequestT = Model::StartInferenceExperimentRequest>
        void StartInferenceExperimentAsync(const StartInferenceExperimentRequestT& request, const StartInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StartInferenceExperiment, request, handler, context);
        }

        /**
         * <p>Starts a previously stopped monitoring schedule.</p>  <p>By default,
         * when you successfully create a new schedule, the status of a monitoring schedule
         * is <code>scheduled</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringScheduleOutcome StartMonitoringSchedule(const Model::StartMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for StartMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMonitoringScheduleRequestT = Model::StartMonitoringScheduleRequest>
        Model::StartMonitoringScheduleOutcomeCallable StartMonitoringScheduleCallable(const StartMonitoringScheduleRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StartMonitoringSchedule, request);
        }

        /**
         * An Async wrapper for StartMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMonitoringScheduleRequestT = Model::StartMonitoringScheduleRequest>
        void StartMonitoringScheduleAsync(const StartMonitoringScheduleRequestT& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StartMonitoringSchedule, request, handler, context);
        }

        /**
         * <p>Launches an ML compute instance with the latest version of the libraries and
         * attaches your ML storage volume. After configuring the notebook instance,
         * SageMaker sets the notebook instance status to <code>InService</code>. A
         * notebook instance's status must be <code>InService</code> before you can connect
         * to your Jupyter notebook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNotebookInstanceOutcome StartNotebookInstance(const Model::StartNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for StartNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartNotebookInstanceRequestT = Model::StartNotebookInstanceRequest>
        Model::StartNotebookInstanceOutcomeCallable StartNotebookInstanceCallable(const StartNotebookInstanceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StartNotebookInstance, request);
        }

        /**
         * An Async wrapper for StartNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartNotebookInstanceRequestT = Model::StartNotebookInstanceRequest>
        void StartNotebookInstanceAsync(const StartNotebookInstanceRequestT& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StartNotebookInstance, request, handler, context);
        }

        /**
         * <p>Starts a pipeline execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPipelineExecutionOutcome StartPipelineExecution(const Model::StartPipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPipelineExecutionRequestT = Model::StartPipelineExecutionRequest>
        Model::StartPipelineExecutionOutcomeCallable StartPipelineExecutionCallable(const StartPipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StartPipelineExecution, request);
        }

        /**
         * An Async wrapper for StartPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPipelineExecutionRequestT = Model::StartPipelineExecutionRequest>
        void StartPipelineExecutionAsync(const StartPipelineExecutionRequestT& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StartPipelineExecution, request, handler, context);
        }

        /**
         * <p>A method for forcing a running job to shut down.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAutoMLJobOutcome StopAutoMLJob(const Model::StopAutoMLJobRequest& request) const;

        /**
         * A Callable wrapper for StopAutoMLJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopAutoMLJobRequestT = Model::StopAutoMLJobRequest>
        Model::StopAutoMLJobOutcomeCallable StopAutoMLJobCallable(const StopAutoMLJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopAutoMLJob, request);
        }

        /**
         * An Async wrapper for StopAutoMLJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopAutoMLJobRequestT = Model::StopAutoMLJobRequest>
        void StopAutoMLJobAsync(const StopAutoMLJobRequestT& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopAutoMLJob, request, handler, context);
        }

        /**
         * <p>Stops a model compilation job.</p> <p> To stop a job, Amazon SageMaker sends
         * the algorithm the SIGTERM signal. This gracefully shuts the job down. If the job
         * hasn't stopped, it sends the SIGKILL signal.</p> <p>When it receives a
         * <code>StopCompilationJob</code> request, Amazon SageMaker changes the
         * <code>CompilationJobStatus</code> of the job to <code>Stopping</code>. After
         * Amazon SageMaker stops the job, it sets the <code>CompilationJobStatus</code> to
         * <code>Stopped</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCompilationJobOutcome StopCompilationJob(const Model::StopCompilationJobRequest& request) const;

        /**
         * A Callable wrapper for StopCompilationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopCompilationJobRequestT = Model::StopCompilationJobRequest>
        Model::StopCompilationJobOutcomeCallable StopCompilationJobCallable(const StopCompilationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopCompilationJob, request);
        }

        /**
         * An Async wrapper for StopCompilationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopCompilationJobRequestT = Model::StopCompilationJobRequest>
        void StopCompilationJobAsync(const StopCompilationJobRequestT& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopCompilationJob, request, handler, context);
        }

        /**
         * <p>Stops a stage in an edge deployment plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopEdgeDeploymentStage">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEdgeDeploymentStageOutcome StopEdgeDeploymentStage(const Model::StopEdgeDeploymentStageRequest& request) const;

        /**
         * A Callable wrapper for StopEdgeDeploymentStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopEdgeDeploymentStageRequestT = Model::StopEdgeDeploymentStageRequest>
        Model::StopEdgeDeploymentStageOutcomeCallable StopEdgeDeploymentStageCallable(const StopEdgeDeploymentStageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopEdgeDeploymentStage, request);
        }

        /**
         * An Async wrapper for StopEdgeDeploymentStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEdgeDeploymentStageRequestT = Model::StopEdgeDeploymentStageRequest>
        void StopEdgeDeploymentStageAsync(const StopEdgeDeploymentStageRequestT& request, const StopEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopEdgeDeploymentStage, request, handler, context);
        }

        /**
         * <p>Request to stop an edge packaging job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopEdgePackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEdgePackagingJobOutcome StopEdgePackagingJob(const Model::StopEdgePackagingJobRequest& request) const;

        /**
         * A Callable wrapper for StopEdgePackagingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopEdgePackagingJobRequestT = Model::StopEdgePackagingJobRequest>
        Model::StopEdgePackagingJobOutcomeCallable StopEdgePackagingJobCallable(const StopEdgePackagingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopEdgePackagingJob, request);
        }

        /**
         * An Async wrapper for StopEdgePackagingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEdgePackagingJobRequestT = Model::StopEdgePackagingJobRequest>
        void StopEdgePackagingJobAsync(const StopEdgePackagingJobRequestT& request, const StopEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopEdgePackagingJob, request, handler, context);
        }

        /**
         * <p>Stops a running hyperparameter tuning job and all running training jobs that
         * the tuning job launched.</p> <p>All model artifacts output from the training
         * jobs are stored in Amazon Simple Storage Service (Amazon S3). All data that the
         * training jobs write to Amazon CloudWatch Logs are still available in CloudWatch.
         * After the tuning job moves to the <code>Stopped</code> state, it releases all
         * reserved resources for the tuning job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopHyperParameterTuningJobOutcome StopHyperParameterTuningJob(const Model::StopHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for StopHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopHyperParameterTuningJobRequestT = Model::StopHyperParameterTuningJobRequest>
        Model::StopHyperParameterTuningJobOutcomeCallable StopHyperParameterTuningJobCallable(const StopHyperParameterTuningJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopHyperParameterTuningJob, request);
        }

        /**
         * An Async wrapper for StopHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopHyperParameterTuningJobRequestT = Model::StopHyperParameterTuningJobRequest>
        void StopHyperParameterTuningJobAsync(const StopHyperParameterTuningJobRequestT& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopHyperParameterTuningJob, request, handler, context);
        }

        /**
         * <p>Stops an inference experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInferenceExperimentOutcome StopInferenceExperiment(const Model::StopInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for StopInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopInferenceExperimentRequestT = Model::StopInferenceExperimentRequest>
        Model::StopInferenceExperimentOutcomeCallable StopInferenceExperimentCallable(const StopInferenceExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopInferenceExperiment, request);
        }

        /**
         * An Async wrapper for StopInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopInferenceExperimentRequestT = Model::StopInferenceExperimentRequest>
        void StopInferenceExperimentAsync(const StopInferenceExperimentRequestT& request, const StopInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopInferenceExperiment, request, handler, context);
        }

        /**
         * <p>Stops an Inference Recommender job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopInferenceRecommendationsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInferenceRecommendationsJobOutcome StopInferenceRecommendationsJob(const Model::StopInferenceRecommendationsJobRequest& request) const;

        /**
         * A Callable wrapper for StopInferenceRecommendationsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopInferenceRecommendationsJobRequestT = Model::StopInferenceRecommendationsJobRequest>
        Model::StopInferenceRecommendationsJobOutcomeCallable StopInferenceRecommendationsJobCallable(const StopInferenceRecommendationsJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopInferenceRecommendationsJob, request);
        }

        /**
         * An Async wrapper for StopInferenceRecommendationsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopInferenceRecommendationsJobRequestT = Model::StopInferenceRecommendationsJobRequest>
        void StopInferenceRecommendationsJobAsync(const StopInferenceRecommendationsJobRequestT& request, const StopInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopInferenceRecommendationsJob, request, handler, context);
        }

        /**
         * <p>Stops a running labeling job. A job that is stopped cannot be restarted. Any
         * results obtained before the job is stopped are placed in the Amazon S3 output
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopLabelingJobOutcome StopLabelingJob(const Model::StopLabelingJobRequest& request) const;

        /**
         * A Callable wrapper for StopLabelingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopLabelingJobRequestT = Model::StopLabelingJobRequest>
        Model::StopLabelingJobOutcomeCallable StopLabelingJobCallable(const StopLabelingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopLabelingJob, request);
        }

        /**
         * An Async wrapper for StopLabelingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopLabelingJobRequestT = Model::StopLabelingJobRequest>
        void StopLabelingJobAsync(const StopLabelingJobRequestT& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopLabelingJob, request, handler, context);
        }

        /**
         * <p>Stops a previously started monitoring schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMonitoringScheduleOutcome StopMonitoringSchedule(const Model::StopMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for StopMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopMonitoringScheduleRequestT = Model::StopMonitoringScheduleRequest>
        Model::StopMonitoringScheduleOutcomeCallable StopMonitoringScheduleCallable(const StopMonitoringScheduleRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopMonitoringSchedule, request);
        }

        /**
         * An Async wrapper for StopMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopMonitoringScheduleRequestT = Model::StopMonitoringScheduleRequest>
        void StopMonitoringScheduleAsync(const StopMonitoringScheduleRequestT& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopMonitoringSchedule, request, handler, context);
        }

        /**
         * <p>Terminates the ML compute instance. Before terminating the instance,
         * SageMaker disconnects the ML storage volume from it. SageMaker preserves the ML
         * storage volume. SageMaker stops charging you for the ML compute instance when
         * you call <code>StopNotebookInstance</code>.</p> <p>To access data on the ML
         * storage volume for a notebook instance that has been terminated, call the
         * <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code>
         * launches another ML compute instance, configures it, and attaches the preserved
         * ML storage volume so you can continue your work. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopNotebookInstanceOutcome StopNotebookInstance(const Model::StopNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for StopNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopNotebookInstanceRequestT = Model::StopNotebookInstanceRequest>
        Model::StopNotebookInstanceOutcomeCallable StopNotebookInstanceCallable(const StopNotebookInstanceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopNotebookInstance, request);
        }

        /**
         * An Async wrapper for StopNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopNotebookInstanceRequestT = Model::StopNotebookInstanceRequest>
        void StopNotebookInstanceAsync(const StopNotebookInstanceRequestT& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopNotebookInstance, request, handler, context);
        }

        /**
         * <p>Stops a pipeline execution.</p> <p> <b>Callback Step</b> </p> <p>A pipeline
         * execution won't stop while a callback step is running. When you call
         * <code>StopPipelineExecution</code> on a pipeline execution with a running
         * callback step, SageMaker Pipelines sends an additional Amazon SQS message to the
         * specified SQS queue. The body of the SQS message contains a "Status" field which
         * is set to "Stopping".</p> <p>You should add logic to your Amazon SQS message
         * consumer to take any needed action (for example, resource cleanup) upon receipt
         * of the message followed by a call to
         * <code>SendPipelineExecutionStepSuccess</code> or
         * <code>SendPipelineExecutionStepFailure</code>.</p> <p>Only when SageMaker
         * Pipelines receives one of these calls will it stop the pipeline execution.</p>
         * <p> <b>Lambda Step</b> </p> <p>A pipeline execution can't be stopped while a
         * lambda step is running because the Lambda function invoked by the lambda step
         * can't be stopped. If you attempt to stop the execution while the Lambda function
         * is running, the pipeline waits for the Lambda function to finish or until the
         * timeout is hit, whichever occurs first, and then stops. If the Lambda function
         * finishes, the pipeline execution status is <code>Stopped</code>. If the timeout
         * is hit the pipeline execution status is <code>Failed</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPipelineExecutionOutcome StopPipelineExecution(const Model::StopPipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopPipelineExecutionRequestT = Model::StopPipelineExecutionRequest>
        Model::StopPipelineExecutionOutcomeCallable StopPipelineExecutionCallable(const StopPipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopPipelineExecution, request);
        }

        /**
         * An Async wrapper for StopPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopPipelineExecutionRequestT = Model::StopPipelineExecutionRequest>
        void StopPipelineExecutionAsync(const StopPipelineExecutionRequestT& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopPipelineExecution, request, handler, context);
        }

        /**
         * <p>Stops a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopProcessingJobOutcome StopProcessingJob(const Model::StopProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for StopProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopProcessingJobRequestT = Model::StopProcessingJobRequest>
        Model::StopProcessingJobOutcomeCallable StopProcessingJobCallable(const StopProcessingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopProcessingJob, request);
        }

        /**
         * An Async wrapper for StopProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopProcessingJobRequestT = Model::StopProcessingJobRequest>
        void StopProcessingJobAsync(const StopProcessingJobRequestT& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopProcessingJob, request, handler, context);
        }

        /**
         * <p>Stops a training job. To stop a job, SageMaker sends the algorithm the
         * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
         * Algorithms might use this 120-second window to save the model artifacts, so the
         * results of the training is not lost. </p> <p>When it receives a
         * <code>StopTrainingJob</code> request, SageMaker changes the status of the job to
         * <code>Stopping</code>. After SageMaker stops the job, it sets the status to
         * <code>Stopped</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTrainingJobOutcome StopTrainingJob(const Model::StopTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for StopTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopTrainingJobRequestT = Model::StopTrainingJobRequest>
        Model::StopTrainingJobOutcomeCallable StopTrainingJobCallable(const StopTrainingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopTrainingJob, request);
        }

        /**
         * An Async wrapper for StopTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTrainingJobRequestT = Model::StopTrainingJobRequest>
        void StopTrainingJobAsync(const StopTrainingJobRequestT& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopTrainingJob, request, handler, context);
        }

        /**
         * <p>Stops a batch transform job.</p> <p>When Amazon SageMaker receives a
         * <code>StopTransformJob</code> request, the status of the job changes to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, the status is set
         * to <code>Stopped</code>. When you stop a batch transform job before it is
         * completed, Amazon SageMaker doesn't store the job's output in Amazon
         * S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTransformJobOutcome StopTransformJob(const Model::StopTransformJobRequest& request) const;

        /**
         * A Callable wrapper for StopTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopTransformJobRequestT = Model::StopTransformJobRequest>
        Model::StopTransformJobOutcomeCallable StopTransformJobCallable(const StopTransformJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::StopTransformJob, request);
        }

        /**
         * An Async wrapper for StopTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTransformJobRequestT = Model::StopTransformJobRequest>
        void StopTransformJobAsync(const StopTransformJobRequestT& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::StopTransformJob, request, handler, context);
        }

        /**
         * <p>Updates an action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateActionOutcome UpdateAction(const Model::UpdateActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateActionRequestT = Model::UpdateActionRequest>
        Model::UpdateActionOutcomeCallable UpdateActionCallable(const UpdateActionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateAction, request);
        }

        /**
         * An Async wrapper for UpdateAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateActionRequestT = Model::UpdateActionRequest>
        void UpdateActionAsync(const UpdateActionRequestT& request, const UpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateAction, request, handler, context);
        }

        /**
         * <p>Updates the properties of an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppImageConfigOutcome UpdateAppImageConfig(const Model::UpdateAppImageConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppImageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppImageConfigRequestT = Model::UpdateAppImageConfigRequest>
        Model::UpdateAppImageConfigOutcomeCallable UpdateAppImageConfigCallable(const UpdateAppImageConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateAppImageConfig, request);
        }

        /**
         * An Async wrapper for UpdateAppImageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppImageConfigRequestT = Model::UpdateAppImageConfigRequest>
        void UpdateAppImageConfigAsync(const UpdateAppImageConfigRequestT& request, const UpdateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateAppImageConfig, request, handler, context);
        }

        /**
         * <p>Updates an artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateArtifactOutcome UpdateArtifact(const Model::UpdateArtifactRequest& request) const;

        /**
         * A Callable wrapper for UpdateArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateArtifactRequestT = Model::UpdateArtifactRequest>
        Model::UpdateArtifactOutcomeCallable UpdateArtifactCallable(const UpdateArtifactRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateArtifact, request);
        }

        /**
         * An Async wrapper for UpdateArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateArtifactRequestT = Model::UpdateArtifactRequest>
        void UpdateArtifactAsync(const UpdateArtifactRequestT& request, const UpdateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateArtifact, request, handler, context);
        }

        /**
         * <p>Updates a SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for UpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const UpdateClusterRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateCluster, request);
        }

        /**
         * An Async wrapper for UpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        void UpdateClusterAsync(const UpdateClusterRequestT& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateCluster, request, handler, context);
        }

        /**
         * <p>Updates the platform software of a SageMaker HyperPod cluster for security
         * patching. To learn how to use this API, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod-operate.html#sagemaker-hyperpod-operate-cli-command-update-cluster-software">Update
         * the SageMaker HyperPod platform software of a cluster</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateClusterSoftware">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterSoftwareOutcome UpdateClusterSoftware(const Model::UpdateClusterSoftwareRequest& request) const;

        /**
         * A Callable wrapper for UpdateClusterSoftware that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterSoftwareRequestT = Model::UpdateClusterSoftwareRequest>
        Model::UpdateClusterSoftwareOutcomeCallable UpdateClusterSoftwareCallable(const UpdateClusterSoftwareRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateClusterSoftware, request);
        }

        /**
         * An Async wrapper for UpdateClusterSoftware that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterSoftwareRequestT = Model::UpdateClusterSoftwareRequest>
        void UpdateClusterSoftwareAsync(const UpdateClusterSoftwareRequestT& request, const UpdateClusterSoftwareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateClusterSoftware, request, handler, context);
        }

        /**
         * <p>Updates the specified Git repository with the specified values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCodeRepositoryOutcome UpdateCodeRepository(const Model::UpdateCodeRepositoryRequest& request) const;

        /**
         * A Callable wrapper for UpdateCodeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCodeRepositoryRequestT = Model::UpdateCodeRepositoryRequest>
        Model::UpdateCodeRepositoryOutcomeCallable UpdateCodeRepositoryCallable(const UpdateCodeRepositoryRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateCodeRepository, request);
        }

        /**
         * An Async wrapper for UpdateCodeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCodeRepositoryRequestT = Model::UpdateCodeRepositoryRequest>
        void UpdateCodeRepositoryAsync(const UpdateCodeRepositoryRequestT& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateCodeRepository, request, handler, context);
        }

        /**
         * <p>Updates a context.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateContext">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContextOutcome UpdateContext(const Model::UpdateContextRequest& request) const;

        /**
         * A Callable wrapper for UpdateContext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContextRequestT = Model::UpdateContextRequest>
        Model::UpdateContextOutcomeCallable UpdateContextCallable(const UpdateContextRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateContext, request);
        }

        /**
         * An Async wrapper for UpdateContext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContextRequestT = Model::UpdateContextRequest>
        void UpdateContextAsync(const UpdateContextRequestT& request, const UpdateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateContext, request, handler, context);
        }

        /**
         * <p>Updates a fleet of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDeviceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceFleetOutcome UpdateDeviceFleet(const Model::UpdateDeviceFleetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeviceFleetRequestT = Model::UpdateDeviceFleetRequest>
        Model::UpdateDeviceFleetOutcomeCallable UpdateDeviceFleetCallable(const UpdateDeviceFleetRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateDeviceFleet, request);
        }

        /**
         * An Async wrapper for UpdateDeviceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceFleetRequestT = Model::UpdateDeviceFleetRequest>
        void UpdateDeviceFleetAsync(const UpdateDeviceFleetRequestT& request, const UpdateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateDeviceFleet, request, handler, context);
        }

        /**
         * <p>Updates one or more devices in a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevicesOutcome UpdateDevices(const Model::UpdateDevicesRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDevicesRequestT = Model::UpdateDevicesRequest>
        Model::UpdateDevicesOutcomeCallable UpdateDevicesCallable(const UpdateDevicesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateDevices, request);
        }

        /**
         * An Async wrapper for UpdateDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDevicesRequestT = Model::UpdateDevicesRequest>
        void UpdateDevicesAsync(const UpdateDevicesRequestT& request, const UpdateDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateDevices, request, handler, context);
        }

        /**
         * <p>Updates the default settings for new user profiles in the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainRequestT = Model::UpdateDomainRequest>
        Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const UpdateDomainRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateDomain, request);
        }

        /**
         * An Async wrapper for UpdateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainRequestT = Model::UpdateDomainRequest>
        void UpdateDomainAsync(const UpdateDomainRequestT& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateDomain, request, handler, context);
        }

        /**
         * <p>Deploys the <code>EndpointConfig</code> specified in the request to a new
         * fleet of instances. SageMaker shifts endpoint traffic to the new instances with
         * the updated endpoint configuration and then deletes the old instances using the
         * previous <code>EndpointConfig</code> (there is no availability loss). For more
         * information about how to control the update and traffic shifting process, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/deployment-guardrails.html">
         * Update models in production</a>.</p> <p>When SageMaker receives the request, it
         * sets the endpoint status to <code>Updating</code>. After updating the endpoint,
         * it sets the status to <code>InService</code>. To check the status of an
         * endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p>  <p>You must not delete an <code>EndpointConfig</code> in use by
         * an endpoint that is live or while the <code>UpdateEndpoint</code> or
         * <code>CreateEndpoint</code> operations are being performed on the endpoint. To
         * update an endpoint, you must create a new <code>EndpointConfig</code>.</p> <p>If
         * you delete the <code>EndpointConfig</code> of an endpoint that is active or
         * being created or updated you may lose visibility into the instance type the
         * endpoint is using. The endpoint must be deleted in order to stop incurring
         * charges.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEndpointRequestT = Model::UpdateEndpointRequest>
        Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const UpdateEndpointRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEndpointRequestT = Model::UpdateEndpointRequest>
        void UpdateEndpointAsync(const UpdateEndpointRequestT& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateEndpoint, request, handler, context);
        }

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointWeightsAndCapacitiesOutcome UpdateEndpointWeightsAndCapacities(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpointWeightsAndCapacities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEndpointWeightsAndCapacitiesRequestT = Model::UpdateEndpointWeightsAndCapacitiesRequest>
        Model::UpdateEndpointWeightsAndCapacitiesOutcomeCallable UpdateEndpointWeightsAndCapacitiesCallable(const UpdateEndpointWeightsAndCapacitiesRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateEndpointWeightsAndCapacities, request);
        }

        /**
         * An Async wrapper for UpdateEndpointWeightsAndCapacities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEndpointWeightsAndCapacitiesRequestT = Model::UpdateEndpointWeightsAndCapacitiesRequest>
        void UpdateEndpointWeightsAndCapacitiesAsync(const UpdateEndpointWeightsAndCapacitiesRequestT& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateEndpointWeightsAndCapacities, request, handler, context);
        }

        /**
         * <p>Adds, updates, or removes the description of an experiment. Updates the
         * display name of an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperimentOutcome UpdateExperiment(const Model::UpdateExperimentRequest& request) const;

        /**
         * A Callable wrapper for UpdateExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateExperimentRequestT = Model::UpdateExperimentRequest>
        Model::UpdateExperimentOutcomeCallable UpdateExperimentCallable(const UpdateExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateExperiment, request);
        }

        /**
         * An Async wrapper for UpdateExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExperimentRequestT = Model::UpdateExperimentRequest>
        void UpdateExperimentAsync(const UpdateExperimentRequestT& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateExperiment, request, handler, context);
        }

        /**
         * <p>Updates the feature group by either adding features or updating the online
         * store configuration. Use one of the following request parameters at a time while
         * using the <code>UpdateFeatureGroup</code> API.</p> <p>You can add features for
         * your feature group using the <code>FeatureAdditions</code> request parameter.
         * Features cannot be removed from a feature group.</p> <p>You can update the
         * online store configuration by using the <code>OnlineStoreConfig</code> request
         * parameter. If a <code>TtlDuration</code> is specified, the default
         * <code>TtlDuration</code> applies for all records added to the feature group
         * <i>after the feature group is updated</i>. If a record level
         * <code>TtlDuration</code> exists from using the <code>PutRecord</code> API, the
         * record level <code>TtlDuration</code> applies to that record instead of the
         * default <code>TtlDuration</code>. To remove the default <code>TtlDuration</code>
         * from an existing feature group, use the <code>UpdateFeatureGroup</code> API and
         * set the <code>TtlDuration</code> <code>Unit</code> and <code>Value</code> to
         * <code>null</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateFeatureGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFeatureGroupOutcome UpdateFeatureGroup(const Model::UpdateFeatureGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateFeatureGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFeatureGroupRequestT = Model::UpdateFeatureGroupRequest>
        Model::UpdateFeatureGroupOutcomeCallable UpdateFeatureGroupCallable(const UpdateFeatureGroupRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateFeatureGroup, request);
        }

        /**
         * An Async wrapper for UpdateFeatureGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFeatureGroupRequestT = Model::UpdateFeatureGroupRequest>
        void UpdateFeatureGroupAsync(const UpdateFeatureGroupRequestT& request, const UpdateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateFeatureGroup, request, handler, context);
        }

        /**
         * <p>Updates the description and parameters of the feature group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateFeatureMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFeatureMetadataOutcome UpdateFeatureMetadata(const Model::UpdateFeatureMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateFeatureMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFeatureMetadataRequestT = Model::UpdateFeatureMetadataRequest>
        Model::UpdateFeatureMetadataOutcomeCallable UpdateFeatureMetadataCallable(const UpdateFeatureMetadataRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateFeatureMetadata, request);
        }

        /**
         * An Async wrapper for UpdateFeatureMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFeatureMetadataRequestT = Model::UpdateFeatureMetadataRequest>
        void UpdateFeatureMetadataAsync(const UpdateFeatureMetadataRequestT& request, const UpdateFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateFeatureMetadata, request, handler, context);
        }

        /**
         * <p>Update a hub.</p>  <p>Hub APIs are only callable through SageMaker
         * Studio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateHub">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHubOutcome UpdateHub(const Model::UpdateHubRequest& request) const;

        /**
         * A Callable wrapper for UpdateHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateHubRequestT = Model::UpdateHubRequest>
        Model::UpdateHubOutcomeCallable UpdateHubCallable(const UpdateHubRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateHub, request);
        }

        /**
         * An Async wrapper for UpdateHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateHubRequestT = Model::UpdateHubRequest>
        void UpdateHubAsync(const UpdateHubRequestT& request, const UpdateHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateHub, request, handler, context);
        }

        /**
         * <p>Updates the properties of a SageMaker image. To change the image's tags, use
         * the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AddTags.html">AddTags</a>
         * and <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteTags.html">DeleteTags</a>
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateImage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImageOutcome UpdateImage(const Model::UpdateImageRequest& request) const;

        /**
         * A Callable wrapper for UpdateImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateImageRequestT = Model::UpdateImageRequest>
        Model::UpdateImageOutcomeCallable UpdateImageCallable(const UpdateImageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateImage, request);
        }

        /**
         * An Async wrapper for UpdateImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateImageRequestT = Model::UpdateImageRequest>
        void UpdateImageAsync(const UpdateImageRequestT& request, const UpdateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateImage, request, handler, context);
        }

        /**
         * <p>Updates the properties of a SageMaker image version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImageVersionOutcome UpdateImageVersion(const Model::UpdateImageVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateImageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateImageVersionRequestT = Model::UpdateImageVersionRequest>
        Model::UpdateImageVersionOutcomeCallable UpdateImageVersionCallable(const UpdateImageVersionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateImageVersion, request);
        }

        /**
         * An Async wrapper for UpdateImageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateImageVersionRequestT = Model::UpdateImageVersionRequest>
        void UpdateImageVersionAsync(const UpdateImageVersionRequestT& request, const UpdateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateImageVersion, request, handler, context);
        }

        /**
         * <p>Updates an inference component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateInferenceComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInferenceComponentOutcome UpdateInferenceComponent(const Model::UpdateInferenceComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateInferenceComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInferenceComponentRequestT = Model::UpdateInferenceComponentRequest>
        Model::UpdateInferenceComponentOutcomeCallable UpdateInferenceComponentCallable(const UpdateInferenceComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateInferenceComponent, request);
        }

        /**
         * An Async wrapper for UpdateInferenceComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInferenceComponentRequestT = Model::UpdateInferenceComponentRequest>
        void UpdateInferenceComponentAsync(const UpdateInferenceComponentRequestT& request, const UpdateInferenceComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateInferenceComponent, request, handler, context);
        }

        /**
         * <p>Runtime settings for a model that is deployed with an inference
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateInferenceComponentRuntimeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInferenceComponentRuntimeConfigOutcome UpdateInferenceComponentRuntimeConfig(const Model::UpdateInferenceComponentRuntimeConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateInferenceComponentRuntimeConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInferenceComponentRuntimeConfigRequestT = Model::UpdateInferenceComponentRuntimeConfigRequest>
        Model::UpdateInferenceComponentRuntimeConfigOutcomeCallable UpdateInferenceComponentRuntimeConfigCallable(const UpdateInferenceComponentRuntimeConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateInferenceComponentRuntimeConfig, request);
        }

        /**
         * An Async wrapper for UpdateInferenceComponentRuntimeConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInferenceComponentRuntimeConfigRequestT = Model::UpdateInferenceComponentRuntimeConfigRequest>
        void UpdateInferenceComponentRuntimeConfigAsync(const UpdateInferenceComponentRuntimeConfigRequestT& request, const UpdateInferenceComponentRuntimeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateInferenceComponentRuntimeConfig, request, handler, context);
        }

        /**
         * <p> Updates an inference experiment that you created. The status of the
         * inference experiment has to be either <code>Created</code>,
         * <code>Running</code>. For more information on the status of an inference
         * experiment, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeInferenceExperiment.html">DescribeInferenceExperiment</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInferenceExperimentOutcome UpdateInferenceExperiment(const Model::UpdateInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for UpdateInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInferenceExperimentRequestT = Model::UpdateInferenceExperimentRequest>
        Model::UpdateInferenceExperimentOutcomeCallable UpdateInferenceExperimentCallable(const UpdateInferenceExperimentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateInferenceExperiment, request);
        }

        /**
         * An Async wrapper for UpdateInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInferenceExperimentRequestT = Model::UpdateInferenceExperimentRequest>
        void UpdateInferenceExperimentAsync(const UpdateInferenceExperimentRequestT& request, const UpdateInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateInferenceExperiment, request, handler, context);
        }

        /**
         * <p>Update an Amazon SageMaker Model Card.</p>  <p>You cannot update
         * both model card content and model card status in a single call.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateModelCard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelCardOutcome UpdateModelCard(const Model::UpdateModelCardRequest& request) const;

        /**
         * A Callable wrapper for UpdateModelCard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateModelCardRequestT = Model::UpdateModelCardRequest>
        Model::UpdateModelCardOutcomeCallable UpdateModelCardCallable(const UpdateModelCardRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateModelCard, request);
        }

        /**
         * An Async wrapper for UpdateModelCard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelCardRequestT = Model::UpdateModelCardRequest>
        void UpdateModelCardAsync(const UpdateModelCardRequestT& request, const UpdateModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateModelCard, request, handler, context);
        }

        /**
         * <p>Updates a versioned model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelPackageOutcome UpdateModelPackage(const Model::UpdateModelPackageRequest& request) const;

        /**
         * A Callable wrapper for UpdateModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateModelPackageRequestT = Model::UpdateModelPackageRequest>
        Model::UpdateModelPackageOutcomeCallable UpdateModelPackageCallable(const UpdateModelPackageRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateModelPackage, request);
        }

        /**
         * An Async wrapper for UpdateModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelPackageRequestT = Model::UpdateModelPackageRequest>
        void UpdateModelPackageAsync(const UpdateModelPackageRequestT& request, const UpdateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateModelPackage, request, handler, context);
        }

        /**
         * <p>Update the parameters of a model monitor alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateMonitoringAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitoringAlertOutcome UpdateMonitoringAlert(const Model::UpdateMonitoringAlertRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitoringAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMonitoringAlertRequestT = Model::UpdateMonitoringAlertRequest>
        Model::UpdateMonitoringAlertOutcomeCallable UpdateMonitoringAlertCallable(const UpdateMonitoringAlertRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateMonitoringAlert, request);
        }

        /**
         * An Async wrapper for UpdateMonitoringAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMonitoringAlertRequestT = Model::UpdateMonitoringAlertRequest>
        void UpdateMonitoringAlertAsync(const UpdateMonitoringAlertRequestT& request, const UpdateMonitoringAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateMonitoringAlert, request, handler, context);
        }

        /**
         * <p>Updates a previously created schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitoringScheduleOutcome UpdateMonitoringSchedule(const Model::UpdateMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMonitoringScheduleRequestT = Model::UpdateMonitoringScheduleRequest>
        Model::UpdateMonitoringScheduleOutcomeCallable UpdateMonitoringScheduleCallable(const UpdateMonitoringScheduleRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateMonitoringSchedule, request);
        }

        /**
         * An Async wrapper for UpdateMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMonitoringScheduleRequestT = Model::UpdateMonitoringScheduleRequest>
        void UpdateMonitoringScheduleAsync(const UpdateMonitoringScheduleRequestT& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateMonitoringSchedule, request, handler, context);
        }

        /**
         * <p>Updates a notebook instance. NotebookInstance updates include upgrading or
         * downgrading the ML compute instance used for your notebook instance to
         * accommodate changes in your workload requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookInstanceOutcome UpdateNotebookInstance(const Model::UpdateNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotebookInstanceRequestT = Model::UpdateNotebookInstanceRequest>
        Model::UpdateNotebookInstanceOutcomeCallable UpdateNotebookInstanceCallable(const UpdateNotebookInstanceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateNotebookInstance, request);
        }

        /**
         * An Async wrapper for UpdateNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotebookInstanceRequestT = Model::UpdateNotebookInstanceRequest>
        void UpdateNotebookInstanceAsync(const UpdateNotebookInstanceRequestT& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateNotebookInstance, request, handler, context);
        }

        /**
         * <p>Updates a notebook instance lifecycle configuration created with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateNotebookInstanceLifecycleConfig.html">CreateNotebookInstanceLifecycleConfig</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookInstanceLifecycleConfigOutcome UpdateNotebookInstanceLifecycleConfig(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotebookInstanceLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotebookInstanceLifecycleConfigRequestT = Model::UpdateNotebookInstanceLifecycleConfigRequest>
        Model::UpdateNotebookInstanceLifecycleConfigOutcomeCallable UpdateNotebookInstanceLifecycleConfigCallable(const UpdateNotebookInstanceLifecycleConfigRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateNotebookInstanceLifecycleConfig, request);
        }

        /**
         * An Async wrapper for UpdateNotebookInstanceLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotebookInstanceLifecycleConfigRequestT = Model::UpdateNotebookInstanceLifecycleConfigRequest>
        void UpdateNotebookInstanceLifecycleConfigAsync(const UpdateNotebookInstanceLifecycleConfigRequestT& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateNotebookInstanceLifecycleConfig, request, handler, context);
        }

        /**
         * <p>Updates a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
        Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const UpdatePipelineRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdatePipeline, request);
        }

        /**
         * An Async wrapper for UpdatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
        void UpdatePipelineAsync(const UpdatePipelineRequestT& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdatePipeline, request, handler, context);
        }

        /**
         * <p>Updates a pipeline execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdatePipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineExecutionOutcome UpdatePipelineExecution(const Model::UpdatePipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePipelineExecutionRequestT = Model::UpdatePipelineExecutionRequest>
        Model::UpdatePipelineExecutionOutcomeCallable UpdatePipelineExecutionCallable(const UpdatePipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdatePipelineExecution, request);
        }

        /**
         * An Async wrapper for UpdatePipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePipelineExecutionRequestT = Model::UpdatePipelineExecutionRequest>
        void UpdatePipelineExecutionAsync(const UpdatePipelineExecutionRequestT& request, const UpdatePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdatePipelineExecution, request, handler, context);
        }

        /**
         * <p>Updates a machine learning (ML) project that is created from a template that
         * sets up an ML pipeline from training to deploying an approved model.</p> 
         * <p>You must not update a project that is in use. If you update the
         * <code>ServiceCatalogProvisioningUpdateDetails</code> of a project that is active
         * or being created, or updated, you may lose resources already created by the
         * project.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateProject, request, handler, context);
        }

        /**
         * <p>Updates the settings of a space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSpaceOutcome UpdateSpace(const Model::UpdateSpaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
        Model::UpdateSpaceOutcomeCallable UpdateSpaceCallable(const UpdateSpaceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateSpace, request);
        }

        /**
         * An Async wrapper for UpdateSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
        void UpdateSpaceAsync(const UpdateSpaceRequestT& request, const UpdateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateSpace, request, handler, context);
        }

        /**
         * <p>Update a model training job to request a new Debugger profiling configuration
         * or to change warm pool retention length.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrainingJobOutcome UpdateTrainingJob(const Model::UpdateTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrainingJobRequestT = Model::UpdateTrainingJobRequest>
        Model::UpdateTrainingJobOutcomeCallable UpdateTrainingJobCallable(const UpdateTrainingJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateTrainingJob, request);
        }

        /**
         * An Async wrapper for UpdateTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrainingJobRequestT = Model::UpdateTrainingJobRequest>
        void UpdateTrainingJobAsync(const UpdateTrainingJobRequestT& request, const UpdateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateTrainingJob, request, handler, context);
        }

        /**
         * <p>Updates the display name of a trial.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrialOutcome UpdateTrial(const Model::UpdateTrialRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrialRequestT = Model::UpdateTrialRequest>
        Model::UpdateTrialOutcomeCallable UpdateTrialCallable(const UpdateTrialRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateTrial, request);
        }

        /**
         * An Async wrapper for UpdateTrial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrialRequestT = Model::UpdateTrialRequest>
        void UpdateTrialAsync(const UpdateTrialRequestT& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateTrial, request, handler, context);
        }

        /**
         * <p>Updates one or more properties of a trial component.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrialComponentOutcome UpdateTrialComponent(const Model::UpdateTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrialComponentRequestT = Model::UpdateTrialComponentRequest>
        Model::UpdateTrialComponentOutcomeCallable UpdateTrialComponentCallable(const UpdateTrialComponentRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateTrialComponent, request);
        }

        /**
         * An Async wrapper for UpdateTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrialComponentRequestT = Model::UpdateTrialComponentRequest>
        void UpdateTrialComponentAsync(const UpdateTrialComponentRequestT& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateTrialComponent, request, handler, context);
        }

        /**
         * <p>Updates a user profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserProfileOutcome UpdateUserProfile(const Model::UpdateUserProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserProfileRequestT = Model::UpdateUserProfileRequest>
        Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const UpdateUserProfileRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateUserProfile, request);
        }

        /**
         * An Async wrapper for UpdateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserProfileRequestT = Model::UpdateUserProfileRequest>
        void UpdateUserProfileAsync(const UpdateUserProfileRequestT& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateUserProfile, request, handler, context);
        }

        /**
         * <p>Use this operation to update your workforce. You can use this operation to
         * require that workers use specific IP addresses to work on tasks and to update
         * your OpenID Connect (OIDC) Identity Provider (IdP) workforce configuration.</p>
         * <p>The worker portal is now supported in VPC and public internet.</p> <p> Use
         * <code>SourceIpConfig</code> to restrict worker access to tasks to a specific
         * range of IP addresses. You specify allowed IP addresses by creating a list of up
         * to ten <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>.
         * By default, a workforce isn't restricted to specific IP addresses. If you
         * specify a range of IP addresses, workers who attempt to access tasks using any
         * IP address outside the specified range are denied and get a <code>Not
         * Found</code> error message on the worker portal.</p> <p>To restrict access to
         * all the workers in public internet, add the <code>SourceIpConfig</code> CIDR
         * value as "10.0.0.0/16".</p>  <p>Amazon SageMaker does not support
         * Source Ip restriction for worker portals in VPC.</p>  <p>Use
         * <code>OidcConfig</code> to update the configuration of a workforce created using
         * your own OIDC IdP. </p>  <p>You can only update your OIDC IdP
         * configuration when there are no work teams associated with your workforce. You
         * can delete work teams using the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteWorkteam.html">DeleteWorkteam</a>
         * operation.</p>  <p>After restricting access to a range of IP
         * addresses or updating your OIDC IdP configuration with this operation, you can
         * view details about your update workforce using the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeWorkforce.html">DescribeWorkforce</a>
         * operation.</p>  <p>This operation only applies to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkforceOutcome UpdateWorkforce(const Model::UpdateWorkforceRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkforce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkforceRequestT = Model::UpdateWorkforceRequest>
        Model::UpdateWorkforceOutcomeCallable UpdateWorkforceCallable(const UpdateWorkforceRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateWorkforce, request);
        }

        /**
         * An Async wrapper for UpdateWorkforce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkforceRequestT = Model::UpdateWorkforceRequest>
        void UpdateWorkforceAsync(const UpdateWorkforceRequestT& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateWorkforce, request, handler, context);
        }

        /**
         * <p>Updates an existing work team with new member definitions or
         * description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkteamOutcome UpdateWorkteam(const Model::UpdateWorkteamRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkteamRequestT = Model::UpdateWorkteamRequest>
        Model::UpdateWorkteamOutcomeCallable UpdateWorkteamCallable(const UpdateWorkteamRequestT& request) const
        {
            return SubmitCallable(&SageMakerClient::UpdateWorkteam, request);
        }

        /**
         * An Async wrapper for UpdateWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkteamRequestT = Model::UpdateWorkteamRequest>
        void UpdateWorkteamAsync(const UpdateWorkteamRequestT& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerClient::UpdateWorkteam, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerClient>;
      void init(const SageMakerClientConfiguration& clientConfiguration);

      SageMakerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SageMakerEndpointProviderBase> m_endpointProvider;
  };

} // namespace SageMaker
} // namespace Aws
