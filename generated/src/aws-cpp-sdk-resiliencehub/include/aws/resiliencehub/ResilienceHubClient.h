/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehub/ResilienceHubServiceClientModel.h>

namespace Aws
{
namespace ResilienceHub
{
  /**
   * <p>Resilience Hub helps you proactively prepare and protect your Amazon Web
   * Services applications from disruptions. It offers continual resiliency
   * assessment and validation that integrates into your software development
   * lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery
   * time objective (RTO) and recovery point objective (RPO) targets for your
   * applications are met, and resolve issues before they are released into
   * production. </p>
   */
  class AWS_RESILIENCEHUB_API ResilienceHubClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ResilienceHubClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ResilienceHubClientConfiguration ClientConfigurationType;
      typedef ResilienceHubEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration = Aws::ResilienceHub::ResilienceHubClientConfiguration(),
                            std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration = Aws::ResilienceHub::ResilienceHubClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResilienceHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration = Aws::ResilienceHub::ResilienceHubClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResilienceHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ResilienceHubClient();

        /**
         * <p>Adds the source of resource-maps to the draft version of an application.
         * During assessment, Resilience Hub will use these resource-maps to resolve the
         * latest physical ID for each resource in the application template. For more
         * information about different types of resources suported by Resilience Hub and
         * how to add them in your application, see <a
         * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/how-app-manage.html">Step
         * 2: How is your application managed?</a> in the Resilience Hub User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AddDraftAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::AddDraftAppVersionResourceMappingsOutcome AddDraftAppVersionResourceMappings(const Model::AddDraftAppVersionResourceMappingsRequest& request) const;

        /**
         * A Callable wrapper for AddDraftAppVersionResourceMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddDraftAppVersionResourceMappingsRequestT = Model::AddDraftAppVersionResourceMappingsRequest>
        Model::AddDraftAppVersionResourceMappingsOutcomeCallable AddDraftAppVersionResourceMappingsCallable(const AddDraftAppVersionResourceMappingsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::AddDraftAppVersionResourceMappings, request);
        }

        /**
         * An Async wrapper for AddDraftAppVersionResourceMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddDraftAppVersionResourceMappingsRequestT = Model::AddDraftAppVersionResourceMappingsRequest>
        void AddDraftAppVersionResourceMappingsAsync(const AddDraftAppVersionResourceMappingsRequestT& request, const AddDraftAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::AddDraftAppVersionResourceMappings, request, handler, context);
        }

        /**
         * <p>Enables you to include or exclude one or more operational
         * recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/BatchUpdateRecommendationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateRecommendationStatusOutcome BatchUpdateRecommendationStatus(const Model::BatchUpdateRecommendationStatusRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateRecommendationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateRecommendationStatusRequestT = Model::BatchUpdateRecommendationStatusRequest>
        Model::BatchUpdateRecommendationStatusOutcomeCallable BatchUpdateRecommendationStatusCallable(const BatchUpdateRecommendationStatusRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::BatchUpdateRecommendationStatus, request);
        }

        /**
         * An Async wrapper for BatchUpdateRecommendationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateRecommendationStatusRequestT = Model::BatchUpdateRecommendationStatusRequest>
        void BatchUpdateRecommendationStatusAsync(const BatchUpdateRecommendationStatusRequestT& request, const BatchUpdateRecommendationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::BatchUpdateRecommendationStatus, request, handler, context);
        }

        /**
         * <p>Creates an Resilience Hub application. An Resilience Hub application is a
         * collection of Amazon Web Services resources structured to prevent and recover
         * Amazon Web Services application disruptions. To describe a Resilience Hub
         * application, you provide an application name, resources from one or more
         * CloudFormation stacks, Resource Groups, Terraform state files, AppRegistry
         * applications, and an appropriate resiliency policy. In addition, you can also
         * add resources that are located on Amazon Elastic Kubernetes Service (Amazon EKS)
         * clusters as optional resources. For more information about the number of
         * resources supported per application, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/resiliencehub.html#limits_resiliencehub">Service
         * quotas</a>.</p> <p>After you create an Resilience Hub application, you publish
         * it so that you can run a resiliency assessment on it. You can then use
         * recommendations from the assessment to improve resiliency by running another
         * assessment, comparing results, and then iterating the process until you achieve
         * your goals for recovery time objective (RTO) and recovery point objective
         * (RPO).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        Model::CreateAppOutcomeCallable CreateAppCallable(const CreateAppRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::CreateApp, request);
        }

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        void CreateAppAsync(const CreateAppRequestT& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::CreateApp, request, handler, context);
        }

        /**
         * <p>Creates a new Application Component in the Resilience Hub application.</p>
         *  <p>This API updates the Resilience Hub application draft version. To use
         * this Application Component for running assessments, you must publish the
         * Resilience Hub application using the <code>PublishAppVersion</code> API.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateAppVersionAppComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppVersionAppComponentOutcome CreateAppVersionAppComponent(const Model::CreateAppVersionAppComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateAppVersionAppComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppVersionAppComponentRequestT = Model::CreateAppVersionAppComponentRequest>
        Model::CreateAppVersionAppComponentOutcomeCallable CreateAppVersionAppComponentCallable(const CreateAppVersionAppComponentRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::CreateAppVersionAppComponent, request);
        }

        /**
         * An Async wrapper for CreateAppVersionAppComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppVersionAppComponentRequestT = Model::CreateAppVersionAppComponentRequest>
        void CreateAppVersionAppComponentAsync(const CreateAppVersionAppComponentRequestT& request, const CreateAppVersionAppComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::CreateAppVersionAppComponent, request, handler, context);
        }

        /**
         * <p>Adds a resource to the Resilience Hub application and assigns it to the
         * specified Application Components. If you specify a new Application Component,
         * Resilience Hub will automatically create the Application Component.</p> 
         * <ul> <li> <p>This action has no effect outside Resilience Hub.</p> </li> <li>
         * <p>This API updates the Resilience Hub application draft version. To use this
         * resource for running resiliency assessments, you must publish the Resilience Hub
         * application using the <code>PublishAppVersion</code> API.</p> </li> <li> <p>To
         * update application version with new <code>physicalResourceID</code>, you must
         * call <code>ResolveAppVersionResources</code> API.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateAppVersionResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppVersionResourceOutcome CreateAppVersionResource(const Model::CreateAppVersionResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateAppVersionResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppVersionResourceRequestT = Model::CreateAppVersionResourceRequest>
        Model::CreateAppVersionResourceOutcomeCallable CreateAppVersionResourceCallable(const CreateAppVersionResourceRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::CreateAppVersionResource, request);
        }

        /**
         * An Async wrapper for CreateAppVersionResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppVersionResourceRequestT = Model::CreateAppVersionResourceRequest>
        void CreateAppVersionResourceAsync(const CreateAppVersionResourceRequestT& request, const CreateAppVersionResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::CreateAppVersionResource, request, handler, context);
        }

        /**
         * <p>Creates a new recommendation template for the Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateRecommendationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecommendationTemplateOutcome CreateRecommendationTemplate(const Model::CreateRecommendationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateRecommendationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRecommendationTemplateRequestT = Model::CreateRecommendationTemplateRequest>
        Model::CreateRecommendationTemplateOutcomeCallable CreateRecommendationTemplateCallable(const CreateRecommendationTemplateRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::CreateRecommendationTemplate, request);
        }

        /**
         * An Async wrapper for CreateRecommendationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRecommendationTemplateRequestT = Model::CreateRecommendationTemplateRequest>
        void CreateRecommendationTemplateAsync(const CreateRecommendationTemplateRequestT& request, const CreateRecommendationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::CreateRecommendationTemplate, request, handler, context);
        }

        /**
         * <p>Creates a resiliency policy for an application.</p>  <p>Resilience Hub
         * allows you to provide a value of zero for <code>rtoInSecs</code> and
         * <code>rpoInSecs</code> of your resiliency policy. But, while assessing your
         * application, the lowest possible assessment result is near zero. Hence, if you
         * provide value zero for <code>rtoInSecs</code> and <code>rpoInSecs</code>, the
         * estimated workload RTO and estimated workload RPO result will be near zero and
         * the <b>Compliance status</b> for your application will be set to <b>Policy
         * breached</b>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResiliencyPolicyOutcome CreateResiliencyPolicy(const Model::CreateResiliencyPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateResiliencyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResiliencyPolicyRequestT = Model::CreateResiliencyPolicyRequest>
        Model::CreateResiliencyPolicyOutcomeCallable CreateResiliencyPolicyCallable(const CreateResiliencyPolicyRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::CreateResiliencyPolicy, request);
        }

        /**
         * An Async wrapper for CreateResiliencyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResiliencyPolicyRequestT = Model::CreateResiliencyPolicyRequest>
        void CreateResiliencyPolicyAsync(const CreateResiliencyPolicyRequestT& request, const CreateResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::CreateResiliencyPolicy, request, handler, context);
        }

        /**
         * <p>Deletes an Resilience Hub application. This is a destructive action that
         * can't be undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        Model::DeleteAppOutcomeCallable DeleteAppCallable(const DeleteAppRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DeleteApp, request);
        }

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        void DeleteAppAsync(const DeleteAppRequestT& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DeleteApp, request, handler, context);
        }

        /**
         * <p>Deletes an Resilience Hub application assessment. This is a destructive
         * action that can't be undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppAssessmentOutcome DeleteAppAssessment(const Model::DeleteAppAssessmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppAssessmentRequestT = Model::DeleteAppAssessmentRequest>
        Model::DeleteAppAssessmentOutcomeCallable DeleteAppAssessmentCallable(const DeleteAppAssessmentRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DeleteAppAssessment, request);
        }

        /**
         * An Async wrapper for DeleteAppAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppAssessmentRequestT = Model::DeleteAppAssessmentRequest>
        void DeleteAppAssessmentAsync(const DeleteAppAssessmentRequestT& request, const DeleteAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DeleteAppAssessment, request, handler, context);
        }

        /**
         * <p>Deletes the input source and all of its imported resources from the
         * Resilience Hub application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteAppInputSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInputSourceOutcome DeleteAppInputSource(const Model::DeleteAppInputSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppInputSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppInputSourceRequestT = Model::DeleteAppInputSourceRequest>
        Model::DeleteAppInputSourceOutcomeCallable DeleteAppInputSourceCallable(const DeleteAppInputSourceRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DeleteAppInputSource, request);
        }

        /**
         * An Async wrapper for DeleteAppInputSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppInputSourceRequestT = Model::DeleteAppInputSourceRequest>
        void DeleteAppInputSourceAsync(const DeleteAppInputSourceRequestT& request, const DeleteAppInputSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DeleteAppInputSource, request, handler, context);
        }

        /**
         * <p>Deletes an Application Component from the Resilience Hub application.</p>
         *  <ul> <li> <p>This API updates the Resilience Hub application draft
         * version. To use this Application Component for running assessments, you must
         * publish the Resilience Hub application using the <code>PublishAppVersion</code>
         * API.</p> </li> <li> <p>You will not be able to delete an Application Component
         * if it has resources associated with it.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteAppVersionAppComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppVersionAppComponentOutcome DeleteAppVersionAppComponent(const Model::DeleteAppVersionAppComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppVersionAppComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppVersionAppComponentRequestT = Model::DeleteAppVersionAppComponentRequest>
        Model::DeleteAppVersionAppComponentOutcomeCallable DeleteAppVersionAppComponentCallable(const DeleteAppVersionAppComponentRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DeleteAppVersionAppComponent, request);
        }

        /**
         * An Async wrapper for DeleteAppVersionAppComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppVersionAppComponentRequestT = Model::DeleteAppVersionAppComponentRequest>
        void DeleteAppVersionAppComponentAsync(const DeleteAppVersionAppComponentRequestT& request, const DeleteAppVersionAppComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DeleteAppVersionAppComponent, request, handler, context);
        }

        /**
         * <p>Deletes a resource from the Resilience Hub application.</p>  <ul> <li>
         * <p>You can only delete a manually added resource. To exclude non-manually added
         * resources, use the <code>UpdateAppVersionResource</code> API.</p> </li> <li>
         * <p>This action has no effect outside Resilience Hub.</p> </li> <li> <p>This API
         * updates the Resilience Hub application draft version. To use this resource for
         * running resiliency assessments, you must publish the Resilience Hub application
         * using the <code>PublishAppVersion</code> API.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteAppVersionResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppVersionResourceOutcome DeleteAppVersionResource(const Model::DeleteAppVersionResourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppVersionResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppVersionResourceRequestT = Model::DeleteAppVersionResourceRequest>
        Model::DeleteAppVersionResourceOutcomeCallable DeleteAppVersionResourceCallable(const DeleteAppVersionResourceRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DeleteAppVersionResource, request);
        }

        /**
         * An Async wrapper for DeleteAppVersionResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppVersionResourceRequestT = Model::DeleteAppVersionResourceRequest>
        void DeleteAppVersionResourceAsync(const DeleteAppVersionResourceRequestT& request, const DeleteAppVersionResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DeleteAppVersionResource, request, handler, context);
        }

        /**
         * <p>Deletes a recommendation template. This is a destructive action that can't be
         * undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteRecommendationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecommendationTemplateOutcome DeleteRecommendationTemplate(const Model::DeleteRecommendationTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecommendationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRecommendationTemplateRequestT = Model::DeleteRecommendationTemplateRequest>
        Model::DeleteRecommendationTemplateOutcomeCallable DeleteRecommendationTemplateCallable(const DeleteRecommendationTemplateRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DeleteRecommendationTemplate, request);
        }

        /**
         * An Async wrapper for DeleteRecommendationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecommendationTemplateRequestT = Model::DeleteRecommendationTemplateRequest>
        void DeleteRecommendationTemplateAsync(const DeleteRecommendationTemplateRequestT& request, const DeleteRecommendationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DeleteRecommendationTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a resiliency policy. This is a destructive action that can't be
         * undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResiliencyPolicyOutcome DeleteResiliencyPolicy(const Model::DeleteResiliencyPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResiliencyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResiliencyPolicyRequestT = Model::DeleteResiliencyPolicyRequest>
        Model::DeleteResiliencyPolicyOutcomeCallable DeleteResiliencyPolicyCallable(const DeleteResiliencyPolicyRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DeleteResiliencyPolicy, request);
        }

        /**
         * An Async wrapper for DeleteResiliencyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResiliencyPolicyRequestT = Model::DeleteResiliencyPolicyRequest>
        void DeleteResiliencyPolicyAsync(const DeleteResiliencyPolicyRequestT& request, const DeleteResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DeleteResiliencyPolicy, request, handler, context);
        }

        /**
         * <p>Describes an Resilience Hub application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest& request) const;

        /**
         * A Callable wrapper for DescribeApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppRequestT = Model::DescribeAppRequest>
        Model::DescribeAppOutcomeCallable DescribeAppCallable(const DescribeAppRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeApp, request);
        }

        /**
         * An Async wrapper for DescribeApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppRequestT = Model::DescribeAppRequest>
        void DescribeAppAsync(const DescribeAppRequestT& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeApp, request, handler, context);
        }

        /**
         * <p>Describes an assessment for an Resilience Hub application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppAssessmentOutcome DescribeAppAssessment(const Model::DescribeAppAssessmentRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppAssessmentRequestT = Model::DescribeAppAssessmentRequest>
        Model::DescribeAppAssessmentOutcomeCallable DescribeAppAssessmentCallable(const DescribeAppAssessmentRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeAppAssessment, request);
        }

        /**
         * An Async wrapper for DescribeAppAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppAssessmentRequestT = Model::DescribeAppAssessmentRequest>
        void DescribeAppAssessmentAsync(const DescribeAppAssessmentRequestT& request, const DescribeAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeAppAssessment, request, handler, context);
        }

        /**
         * <p>Describes the Resilience Hub application version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionOutcome DescribeAppVersion(const Model::DescribeAppVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppVersionRequestT = Model::DescribeAppVersionRequest>
        Model::DescribeAppVersionOutcomeCallable DescribeAppVersionCallable(const DescribeAppVersionRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeAppVersion, request);
        }

        /**
         * An Async wrapper for DescribeAppVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppVersionRequestT = Model::DescribeAppVersionRequest>
        void DescribeAppVersionAsync(const DescribeAppVersionRequestT& request, const DescribeAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeAppVersion, request, handler, context);
        }

        /**
         * <p>Describes an Application Component in the Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersionAppComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionAppComponentOutcome DescribeAppVersionAppComponent(const Model::DescribeAppVersionAppComponentRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppVersionAppComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppVersionAppComponentRequestT = Model::DescribeAppVersionAppComponentRequest>
        Model::DescribeAppVersionAppComponentOutcomeCallable DescribeAppVersionAppComponentCallable(const DescribeAppVersionAppComponentRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeAppVersionAppComponent, request);
        }

        /**
         * An Async wrapper for DescribeAppVersionAppComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppVersionAppComponentRequestT = Model::DescribeAppVersionAppComponentRequest>
        void DescribeAppVersionAppComponentAsync(const DescribeAppVersionAppComponentRequestT& request, const DescribeAppVersionAppComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeAppVersionAppComponent, request, handler, context);
        }

        /**
         * <p>Describes a resource of the Resilience Hub application.</p>  <p>This
         * API accepts only one of the following parameters to descibe the resource:</p>
         * <ul> <li> <p> <code>resourceName</code> </p> </li> <li> <p>
         * <code>logicalResourceId</code> </p> </li> <li> <p>
         * <code>physicalResourceId</code> (Along with <code>physicalResourceId</code>, you
         * can also provide <code>awsAccountId</code>, and <code>awsRegion</code>)</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersionResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionResourceOutcome DescribeAppVersionResource(const Model::DescribeAppVersionResourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppVersionResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppVersionResourceRequestT = Model::DescribeAppVersionResourceRequest>
        Model::DescribeAppVersionResourceOutcomeCallable DescribeAppVersionResourceCallable(const DescribeAppVersionResourceRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeAppVersionResource, request);
        }

        /**
         * An Async wrapper for DescribeAppVersionResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppVersionResourceRequestT = Model::DescribeAppVersionResourceRequest>
        void DescribeAppVersionResourceAsync(const DescribeAppVersionResourceRequestT& request, const DescribeAppVersionResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeAppVersionResource, request, handler, context);
        }

        /**
         * <p>Returns the resolution status for the specified resolution identifier for an
         * application version. If <code>resolutionId</code> is not specified, the current
         * resolution status is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersionResourcesResolutionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionResourcesResolutionStatusOutcome DescribeAppVersionResourcesResolutionStatus(const Model::DescribeAppVersionResourcesResolutionStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppVersionResourcesResolutionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppVersionResourcesResolutionStatusRequestT = Model::DescribeAppVersionResourcesResolutionStatusRequest>
        Model::DescribeAppVersionResourcesResolutionStatusOutcomeCallable DescribeAppVersionResourcesResolutionStatusCallable(const DescribeAppVersionResourcesResolutionStatusRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeAppVersionResourcesResolutionStatus, request);
        }

        /**
         * An Async wrapper for DescribeAppVersionResourcesResolutionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppVersionResourcesResolutionStatusRequestT = Model::DescribeAppVersionResourcesResolutionStatusRequest>
        void DescribeAppVersionResourcesResolutionStatusAsync(const DescribeAppVersionResourcesResolutionStatusRequestT& request, const DescribeAppVersionResourcesResolutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeAppVersionResourcesResolutionStatus, request, handler, context);
        }

        /**
         * <p>Describes details about an Resilience Hub application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersionTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionTemplateOutcome DescribeAppVersionTemplate(const Model::DescribeAppVersionTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppVersionTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppVersionTemplateRequestT = Model::DescribeAppVersionTemplateRequest>
        Model::DescribeAppVersionTemplateOutcomeCallable DescribeAppVersionTemplateCallable(const DescribeAppVersionTemplateRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeAppVersionTemplate, request);
        }

        /**
         * An Async wrapper for DescribeAppVersionTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppVersionTemplateRequestT = Model::DescribeAppVersionTemplateRequest>
        void DescribeAppVersionTemplateAsync(const DescribeAppVersionTemplateRequestT& request, const DescribeAppVersionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeAppVersionTemplate, request, handler, context);
        }

        /**
         * <p>Describes the status of importing resources to an application version.</p>
         *  <p>If you get a 404 error with
         * <code>ResourceImportStatusNotFoundAppMetadataException</code>, you must call
         * <code>importResourcesToDraftAppVersion</code> after creating the application and
         * before calling <code>describeDraftAppVersionResourcesImportStatus</code> to
         * obtain the status.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeDraftAppVersionResourcesImportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDraftAppVersionResourcesImportStatusOutcome DescribeDraftAppVersionResourcesImportStatus(const Model::DescribeDraftAppVersionResourcesImportStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeDraftAppVersionResourcesImportStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDraftAppVersionResourcesImportStatusRequestT = Model::DescribeDraftAppVersionResourcesImportStatusRequest>
        Model::DescribeDraftAppVersionResourcesImportStatusOutcomeCallable DescribeDraftAppVersionResourcesImportStatusCallable(const DescribeDraftAppVersionResourcesImportStatusRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeDraftAppVersionResourcesImportStatus, request);
        }

        /**
         * An Async wrapper for DescribeDraftAppVersionResourcesImportStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDraftAppVersionResourcesImportStatusRequestT = Model::DescribeDraftAppVersionResourcesImportStatusRequest>
        void DescribeDraftAppVersionResourcesImportStatusAsync(const DescribeDraftAppVersionResourcesImportStatusRequestT& request, const DescribeDraftAppVersionResourcesImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeDraftAppVersionResourcesImportStatus, request, handler, context);
        }

        /**
         * <p>Describes a specified resiliency policy for an Resilience Hub application.
         * The returned policy object includes creation time, data location constraints,
         * the Amazon Resource Name (ARN) for the policy, tags, tier, and
         * more.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResiliencyPolicyOutcome DescribeResiliencyPolicy(const Model::DescribeResiliencyPolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeResiliencyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResiliencyPolicyRequestT = Model::DescribeResiliencyPolicyRequest>
        Model::DescribeResiliencyPolicyOutcomeCallable DescribeResiliencyPolicyCallable(const DescribeResiliencyPolicyRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::DescribeResiliencyPolicy, request);
        }

        /**
         * An Async wrapper for DescribeResiliencyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResiliencyPolicyRequestT = Model::DescribeResiliencyPolicyRequest>
        void DescribeResiliencyPolicyAsync(const DescribeResiliencyPolicyRequestT& request, const DescribeResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::DescribeResiliencyPolicy, request, handler, context);
        }

        /**
         * <p>Imports resources to Resilience Hub application draft version from different
         * input sources. For more information about the input sources supported by
         * Resilience Hub, see <a
         * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/discover-structure.html">Discover
         * the structure and describe your Resilience Hub application</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ImportResourcesToDraftAppVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportResourcesToDraftAppVersionOutcome ImportResourcesToDraftAppVersion(const Model::ImportResourcesToDraftAppVersionRequest& request) const;

        /**
         * A Callable wrapper for ImportResourcesToDraftAppVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportResourcesToDraftAppVersionRequestT = Model::ImportResourcesToDraftAppVersionRequest>
        Model::ImportResourcesToDraftAppVersionOutcomeCallable ImportResourcesToDraftAppVersionCallable(const ImportResourcesToDraftAppVersionRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ImportResourcesToDraftAppVersion, request);
        }

        /**
         * An Async wrapper for ImportResourcesToDraftAppVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportResourcesToDraftAppVersionRequestT = Model::ImportResourcesToDraftAppVersionRequest>
        void ImportResourcesToDraftAppVersionAsync(const ImportResourcesToDraftAppVersionRequestT& request, const ImportResourcesToDraftAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ImportResourcesToDraftAppVersion, request, handler, context);
        }

        /**
         * <p>Lists the alarm recommendations for an Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAlarmRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmRecommendationsOutcome ListAlarmRecommendations(const Model::ListAlarmRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListAlarmRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAlarmRecommendationsRequestT = Model::ListAlarmRecommendationsRequest>
        Model::ListAlarmRecommendationsOutcomeCallable ListAlarmRecommendationsCallable(const ListAlarmRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAlarmRecommendations, request);
        }

        /**
         * An Async wrapper for ListAlarmRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAlarmRecommendationsRequestT = Model::ListAlarmRecommendationsRequest>
        void ListAlarmRecommendationsAsync(const ListAlarmRecommendationsRequestT& request, const ListAlarmRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAlarmRecommendations, request, handler, context);
        }

        /**
         * <p>List of compliance drifts that were detected while running an
         * assessment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppAssessmentComplianceDrifts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppAssessmentComplianceDriftsOutcome ListAppAssessmentComplianceDrifts(const Model::ListAppAssessmentComplianceDriftsRequest& request) const;

        /**
         * A Callable wrapper for ListAppAssessmentComplianceDrifts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppAssessmentComplianceDriftsRequestT = Model::ListAppAssessmentComplianceDriftsRequest>
        Model::ListAppAssessmentComplianceDriftsOutcomeCallable ListAppAssessmentComplianceDriftsCallable(const ListAppAssessmentComplianceDriftsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppAssessmentComplianceDrifts, request);
        }

        /**
         * An Async wrapper for ListAppAssessmentComplianceDrifts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppAssessmentComplianceDriftsRequestT = Model::ListAppAssessmentComplianceDriftsRequest>
        void ListAppAssessmentComplianceDriftsAsync(const ListAppAssessmentComplianceDriftsRequestT& request, const ListAppAssessmentComplianceDriftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppAssessmentComplianceDrifts, request, handler, context);
        }

        /**
         * <p>Lists the assessments for an Resilience Hub application. You can use request
         * parameters to refine the results for the response object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppAssessments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppAssessmentsOutcome ListAppAssessments(const Model::ListAppAssessmentsRequest& request) const;

        /**
         * A Callable wrapper for ListAppAssessments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppAssessmentsRequestT = Model::ListAppAssessmentsRequest>
        Model::ListAppAssessmentsOutcomeCallable ListAppAssessmentsCallable(const ListAppAssessmentsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppAssessments, request);
        }

        /**
         * An Async wrapper for ListAppAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppAssessmentsRequestT = Model::ListAppAssessmentsRequest>
        void ListAppAssessmentsAsync(const ListAppAssessmentsRequestT& request, const ListAppAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppAssessments, request, handler, context);
        }

        /**
         * <p>Lists the compliances for an Resilience Hub Application
         * Component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppComponentCompliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppComponentCompliancesOutcome ListAppComponentCompliances(const Model::ListAppComponentCompliancesRequest& request) const;

        /**
         * A Callable wrapper for ListAppComponentCompliances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppComponentCompliancesRequestT = Model::ListAppComponentCompliancesRequest>
        Model::ListAppComponentCompliancesOutcomeCallable ListAppComponentCompliancesCallable(const ListAppComponentCompliancesRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppComponentCompliances, request);
        }

        /**
         * An Async wrapper for ListAppComponentCompliances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppComponentCompliancesRequestT = Model::ListAppComponentCompliancesRequest>
        void ListAppComponentCompliancesAsync(const ListAppComponentCompliancesRequestT& request, const ListAppComponentCompliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppComponentCompliances, request, handler, context);
        }

        /**
         * <p>Lists the recommendations for an Resilience Hub Application
         * Component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppComponentRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppComponentRecommendationsOutcome ListAppComponentRecommendations(const Model::ListAppComponentRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListAppComponentRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppComponentRecommendationsRequestT = Model::ListAppComponentRecommendationsRequest>
        Model::ListAppComponentRecommendationsOutcomeCallable ListAppComponentRecommendationsCallable(const ListAppComponentRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppComponentRecommendations, request);
        }

        /**
         * An Async wrapper for ListAppComponentRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppComponentRecommendationsRequestT = Model::ListAppComponentRecommendationsRequest>
        void ListAppComponentRecommendationsAsync(const ListAppComponentRecommendationsRequestT& request, const ListAppComponentRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppComponentRecommendations, request, handler, context);
        }

        /**
         * <p>Lists all the input sources of the Resilience Hub application. For more
         * information about the input sources supported by Resilience Hub, see <a
         * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/discover-structure.html">Discover
         * the structure and describe your Resilience Hub application</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppInputSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInputSourcesOutcome ListAppInputSources(const Model::ListAppInputSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListAppInputSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppInputSourcesRequestT = Model::ListAppInputSourcesRequest>
        Model::ListAppInputSourcesOutcomeCallable ListAppInputSourcesCallable(const ListAppInputSourcesRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppInputSources, request);
        }

        /**
         * An Async wrapper for ListAppInputSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppInputSourcesRequestT = Model::ListAppInputSourcesRequest>
        void ListAppInputSourcesAsync(const ListAppInputSourcesRequestT& request, const ListAppInputSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppInputSources, request, handler, context);
        }

        /**
         * <p>Lists all the Application Components in the Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersionAppComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionAppComponentsOutcome ListAppVersionAppComponents(const Model::ListAppVersionAppComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListAppVersionAppComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppVersionAppComponentsRequestT = Model::ListAppVersionAppComponentsRequest>
        Model::ListAppVersionAppComponentsOutcomeCallable ListAppVersionAppComponentsCallable(const ListAppVersionAppComponentsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppVersionAppComponents, request);
        }

        /**
         * An Async wrapper for ListAppVersionAppComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppVersionAppComponentsRequestT = Model::ListAppVersionAppComponentsRequest>
        void ListAppVersionAppComponentsAsync(const ListAppVersionAppComponentsRequestT& request, const ListAppVersionAppComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppVersionAppComponents, request, handler, context);
        }

        /**
         * <p>Lists how the resources in an application version are mapped/sourced from.
         * Mappings can be physical resource identifiers, CloudFormation stacks,
         * resource-groups, or an application registry app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionResourceMappingsOutcome ListAppVersionResourceMappings(const Model::ListAppVersionResourceMappingsRequest& request) const;

        /**
         * A Callable wrapper for ListAppVersionResourceMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppVersionResourceMappingsRequestT = Model::ListAppVersionResourceMappingsRequest>
        Model::ListAppVersionResourceMappingsOutcomeCallable ListAppVersionResourceMappingsCallable(const ListAppVersionResourceMappingsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppVersionResourceMappings, request);
        }

        /**
         * An Async wrapper for ListAppVersionResourceMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppVersionResourceMappingsRequestT = Model::ListAppVersionResourceMappingsRequest>
        void ListAppVersionResourceMappingsAsync(const ListAppVersionResourceMappingsRequestT& request, const ListAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppVersionResourceMappings, request, handler, context);
        }

        /**
         * <p>Lists all the resources in an Resilience Hub application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionResourcesOutcome ListAppVersionResources(const Model::ListAppVersionResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListAppVersionResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppVersionResourcesRequestT = Model::ListAppVersionResourcesRequest>
        Model::ListAppVersionResourcesOutcomeCallable ListAppVersionResourcesCallable(const ListAppVersionResourcesRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppVersionResources, request);
        }

        /**
         * An Async wrapper for ListAppVersionResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppVersionResourcesRequestT = Model::ListAppVersionResourcesRequest>
        void ListAppVersionResourcesAsync(const ListAppVersionResourcesRequestT& request, const ListAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppVersionResources, request, handler, context);
        }

        /**
         * <p>Lists the different versions for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionsOutcome ListAppVersions(const Model::ListAppVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAppVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppVersionsRequestT = Model::ListAppVersionsRequest>
        Model::ListAppVersionsOutcomeCallable ListAppVersionsCallable(const ListAppVersionsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListAppVersions, request);
        }

        /**
         * An Async wrapper for ListAppVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppVersionsRequestT = Model::ListAppVersionsRequest>
        void ListAppVersionsAsync(const ListAppVersionsRequestT& request, const ListAppVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListAppVersions, request, handler, context);
        }

        /**
         * <p>Lists your Resilience Hub applications.</p>  <p>You can filter
         * applications using only one filter at a time or without using any filter. If you
         * try to filter applications using multiple filters, you will get the following
         * error:</p> <p> <code>An error occurred (ValidationException) when calling the
         * ListApps operation: Only one filter is supported for this operation.</code> </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        Model::ListAppsOutcomeCallable ListAppsCallable(const ListAppsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListApps, request);
        }

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        void ListAppsAsync(const ListAppsRequestT& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListApps, request, handler, context);
        }

        /**
         * <p>Lists the recommendation templates for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListRecommendationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationTemplatesOutcome ListRecommendationTemplates(const Model::ListRecommendationTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendationTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationTemplatesRequestT = Model::ListRecommendationTemplatesRequest>
        Model::ListRecommendationTemplatesOutcomeCallable ListRecommendationTemplatesCallable(const ListRecommendationTemplatesRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListRecommendationTemplates, request);
        }

        /**
         * An Async wrapper for ListRecommendationTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationTemplatesRequestT = Model::ListRecommendationTemplatesRequest>
        void ListRecommendationTemplatesAsync(const ListRecommendationTemplatesRequestT& request, const ListRecommendationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListRecommendationTemplates, request, handler, context);
        }

        /**
         * <p>Lists the resiliency policies for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListResiliencyPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResiliencyPoliciesOutcome ListResiliencyPolicies(const Model::ListResiliencyPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListResiliencyPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResiliencyPoliciesRequestT = Model::ListResiliencyPoliciesRequest>
        Model::ListResiliencyPoliciesOutcomeCallable ListResiliencyPoliciesCallable(const ListResiliencyPoliciesRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListResiliencyPolicies, request);
        }

        /**
         * An Async wrapper for ListResiliencyPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResiliencyPoliciesRequestT = Model::ListResiliencyPoliciesRequest>
        void ListResiliencyPoliciesAsync(const ListResiliencyPoliciesRequestT& request, const ListResiliencyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListResiliencyPolicies, request, handler, context);
        }

        /**
         * <p>Lists the standard operating procedure (SOP) recommendations for the
         * Resilience Hub applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListSopRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSopRecommendationsOutcome ListSopRecommendations(const Model::ListSopRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListSopRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSopRecommendationsRequestT = Model::ListSopRecommendationsRequest>
        Model::ListSopRecommendationsOutcomeCallable ListSopRecommendationsCallable(const ListSopRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListSopRecommendations, request);
        }

        /**
         * An Async wrapper for ListSopRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSopRecommendationsRequestT = Model::ListSopRecommendationsRequest>
        void ListSopRecommendationsAsync(const ListSopRecommendationsRequestT& request, const ListSopRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListSopRecommendations, request, handler, context);
        }

        /**
         * <p>Lists the suggested resiliency policies for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListSuggestedResiliencyPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuggestedResiliencyPoliciesOutcome ListSuggestedResiliencyPolicies(const Model::ListSuggestedResiliencyPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListSuggestedResiliencyPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSuggestedResiliencyPoliciesRequestT = Model::ListSuggestedResiliencyPoliciesRequest>
        Model::ListSuggestedResiliencyPoliciesOutcomeCallable ListSuggestedResiliencyPoliciesCallable(const ListSuggestedResiliencyPoliciesRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListSuggestedResiliencyPolicies, request);
        }

        /**
         * An Async wrapper for ListSuggestedResiliencyPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSuggestedResiliencyPoliciesRequestT = Model::ListSuggestedResiliencyPoliciesRequest>
        void ListSuggestedResiliencyPoliciesAsync(const ListSuggestedResiliencyPoliciesRequestT& request, const ListSuggestedResiliencyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListSuggestedResiliencyPolicies, request, handler, context);
        }

        /**
         * <p>Lists the tags for your resources in your Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the test recommendations for the Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListTestRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestRecommendationsOutcome ListTestRecommendations(const Model::ListTestRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListTestRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestRecommendationsRequestT = Model::ListTestRecommendationsRequest>
        Model::ListTestRecommendationsOutcomeCallable ListTestRecommendationsCallable(const ListTestRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListTestRecommendations, request);
        }

        /**
         * An Async wrapper for ListTestRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestRecommendationsRequestT = Model::ListTestRecommendationsRequest>
        void ListTestRecommendationsAsync(const ListTestRecommendationsRequestT& request, const ListTestRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListTestRecommendations, request, handler, context);
        }

        /**
         * <p>Lists the resources that are not currently supported in Resilience Hub. An
         * unsupported resource is a resource that exists in the object that was used to
         * create an app, but is not supported by Resilience Hub.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListUnsupportedAppVersionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUnsupportedAppVersionResourcesOutcome ListUnsupportedAppVersionResources(const Model::ListUnsupportedAppVersionResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListUnsupportedAppVersionResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUnsupportedAppVersionResourcesRequestT = Model::ListUnsupportedAppVersionResourcesRequest>
        Model::ListUnsupportedAppVersionResourcesOutcomeCallable ListUnsupportedAppVersionResourcesCallable(const ListUnsupportedAppVersionResourcesRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ListUnsupportedAppVersionResources, request);
        }

        /**
         * An Async wrapper for ListUnsupportedAppVersionResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUnsupportedAppVersionResourcesRequestT = Model::ListUnsupportedAppVersionResourcesRequest>
        void ListUnsupportedAppVersionResourcesAsync(const ListUnsupportedAppVersionResourcesRequestT& request, const ListUnsupportedAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ListUnsupportedAppVersionResources, request, handler, context);
        }

        /**
         * <p>Publishes a new version of a specific Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PublishAppVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishAppVersionOutcome PublishAppVersion(const Model::PublishAppVersionRequest& request) const;

        /**
         * A Callable wrapper for PublishAppVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PublishAppVersionRequestT = Model::PublishAppVersionRequest>
        Model::PublishAppVersionOutcomeCallable PublishAppVersionCallable(const PublishAppVersionRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::PublishAppVersion, request);
        }

        /**
         * An Async wrapper for PublishAppVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PublishAppVersionRequestT = Model::PublishAppVersionRequest>
        void PublishAppVersionAsync(const PublishAppVersionRequestT& request, const PublishAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::PublishAppVersion, request, handler, context);
        }

        /**
         * <p>Adds or updates the app template for an Resilience Hub application draft
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PutDraftAppVersionTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDraftAppVersionTemplateOutcome PutDraftAppVersionTemplate(const Model::PutDraftAppVersionTemplateRequest& request) const;

        /**
         * A Callable wrapper for PutDraftAppVersionTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDraftAppVersionTemplateRequestT = Model::PutDraftAppVersionTemplateRequest>
        Model::PutDraftAppVersionTemplateOutcomeCallable PutDraftAppVersionTemplateCallable(const PutDraftAppVersionTemplateRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::PutDraftAppVersionTemplate, request);
        }

        /**
         * An Async wrapper for PutDraftAppVersionTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDraftAppVersionTemplateRequestT = Model::PutDraftAppVersionTemplateRequest>
        void PutDraftAppVersionTemplateAsync(const PutDraftAppVersionTemplateRequestT& request, const PutDraftAppVersionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::PutDraftAppVersionTemplate, request, handler, context);
        }

        /**
         * <p>Removes resource mappings from a draft application version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RemoveDraftAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveDraftAppVersionResourceMappingsOutcome RemoveDraftAppVersionResourceMappings(const Model::RemoveDraftAppVersionResourceMappingsRequest& request) const;

        /**
         * A Callable wrapper for RemoveDraftAppVersionResourceMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveDraftAppVersionResourceMappingsRequestT = Model::RemoveDraftAppVersionResourceMappingsRequest>
        Model::RemoveDraftAppVersionResourceMappingsOutcomeCallable RemoveDraftAppVersionResourceMappingsCallable(const RemoveDraftAppVersionResourceMappingsRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::RemoveDraftAppVersionResourceMappings, request);
        }

        /**
         * An Async wrapper for RemoveDraftAppVersionResourceMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveDraftAppVersionResourceMappingsRequestT = Model::RemoveDraftAppVersionResourceMappingsRequest>
        void RemoveDraftAppVersionResourceMappingsAsync(const RemoveDraftAppVersionResourceMappingsRequestT& request, const RemoveDraftAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::RemoveDraftAppVersionResourceMappings, request, handler, context);
        }

        /**
         * <p>Resolves the resources for an application version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResolveAppVersionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveAppVersionResourcesOutcome ResolveAppVersionResources(const Model::ResolveAppVersionResourcesRequest& request) const;

        /**
         * A Callable wrapper for ResolveAppVersionResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResolveAppVersionResourcesRequestT = Model::ResolveAppVersionResourcesRequest>
        Model::ResolveAppVersionResourcesOutcomeCallable ResolveAppVersionResourcesCallable(const ResolveAppVersionResourcesRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::ResolveAppVersionResources, request);
        }

        /**
         * An Async wrapper for ResolveAppVersionResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResolveAppVersionResourcesRequestT = Model::ResolveAppVersionResourcesRequest>
        void ResolveAppVersionResourcesAsync(const ResolveAppVersionResourcesRequestT& request, const ResolveAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::ResolveAppVersionResources, request, handler, context);
        }

        /**
         * <p>Creates a new application assessment for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/StartAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppAssessmentOutcome StartAppAssessment(const Model::StartAppAssessmentRequest& request) const;

        /**
         * A Callable wrapper for StartAppAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAppAssessmentRequestT = Model::StartAppAssessmentRequest>
        Model::StartAppAssessmentOutcomeCallable StartAppAssessmentCallable(const StartAppAssessmentRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::StartAppAssessment, request);
        }

        /**
         * An Async wrapper for StartAppAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAppAssessmentRequestT = Model::StartAppAssessmentRequest>
        void StartAppAssessmentAsync(const StartAppAssessmentRequestT& request, const StartAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::StartAppAssessment, request, handler, context);
        }

        /**
         * <p>Applies one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * A Callable wrapper for UpdateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppRequestT = Model::UpdateAppRequest>
        Model::UpdateAppOutcomeCallable UpdateAppCallable(const UpdateAppRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::UpdateApp, request);
        }

        /**
         * An Async wrapper for UpdateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppRequestT = Model::UpdateAppRequest>
        void UpdateAppAsync(const UpdateAppRequestT& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::UpdateApp, request, handler, context);
        }

        /**
         * <p>Updates the Resilience Hub application version.</p>  <p>This API
         * updates the Resilience Hub application draft version. To use this information
         * for running resiliency assessments, you must publish the Resilience Hub
         * application using the <code>PublishAppVersion</code> API.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateAppVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppVersionOutcome UpdateAppVersion(const Model::UpdateAppVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppVersionRequestT = Model::UpdateAppVersionRequest>
        Model::UpdateAppVersionOutcomeCallable UpdateAppVersionCallable(const UpdateAppVersionRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::UpdateAppVersion, request);
        }

        /**
         * An Async wrapper for UpdateAppVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppVersionRequestT = Model::UpdateAppVersionRequest>
        void UpdateAppVersionAsync(const UpdateAppVersionRequestT& request, const UpdateAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::UpdateAppVersion, request, handler, context);
        }

        /**
         * <p>Updates an existing Application Component in the Resilience Hub
         * application.</p>  <p>This API updates the Resilience Hub application draft
         * version. To use this Application Component for running assessments, you must
         * publish the Resilience Hub application using the <code>PublishAppVersion</code>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateAppVersionAppComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppVersionAppComponentOutcome UpdateAppVersionAppComponent(const Model::UpdateAppVersionAppComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppVersionAppComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppVersionAppComponentRequestT = Model::UpdateAppVersionAppComponentRequest>
        Model::UpdateAppVersionAppComponentOutcomeCallable UpdateAppVersionAppComponentCallable(const UpdateAppVersionAppComponentRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::UpdateAppVersionAppComponent, request);
        }

        /**
         * An Async wrapper for UpdateAppVersionAppComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppVersionAppComponentRequestT = Model::UpdateAppVersionAppComponentRequest>
        void UpdateAppVersionAppComponentAsync(const UpdateAppVersionAppComponentRequestT& request, const UpdateAppVersionAppComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::UpdateAppVersionAppComponent, request, handler, context);
        }

        /**
         * <p>Updates the resource details in the Resilience Hub application.</p> 
         * <ul> <li> <p>This action has no effect outside Resilience Hub.</p> </li> <li>
         * <p>This API updates the Resilience Hub application draft version. To use this
         * resource for running resiliency assessments, you must publish the Resilience Hub
         * application using the <code>PublishAppVersion</code> API.</p> </li> <li> <p>To
         * update application version with new <code>physicalResourceID</code>, you must
         * call <code>ResolveAppVersionResources</code> API.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateAppVersionResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppVersionResourceOutcome UpdateAppVersionResource(const Model::UpdateAppVersionResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppVersionResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppVersionResourceRequestT = Model::UpdateAppVersionResourceRequest>
        Model::UpdateAppVersionResourceOutcomeCallable UpdateAppVersionResourceCallable(const UpdateAppVersionResourceRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::UpdateAppVersionResource, request);
        }

        /**
         * An Async wrapper for UpdateAppVersionResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppVersionResourceRequestT = Model::UpdateAppVersionResourceRequest>
        void UpdateAppVersionResourceAsync(const UpdateAppVersionResourceRequestT& request, const UpdateAppVersionResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::UpdateAppVersionResource, request, handler, context);
        }

        /**
         * <p>Updates a resiliency policy.</p>  <p>Resilience Hub allows you to
         * provide a value of zero for <code>rtoInSecs</code> and <code>rpoInSecs</code> of
         * your resiliency policy. But, while assessing your application, the lowest
         * possible assessment result is near zero. Hence, if you provide value zero for
         * <code>rtoInSecs</code> and <code>rpoInSecs</code>, the estimated workload RTO
         * and estimated workload RPO result will be near zero and the <b>Compliance
         * status</b> for your application will be set to <b>Policy breached</b>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResiliencyPolicyOutcome UpdateResiliencyPolicy(const Model::UpdateResiliencyPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateResiliencyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResiliencyPolicyRequestT = Model::UpdateResiliencyPolicyRequest>
        Model::UpdateResiliencyPolicyOutcomeCallable UpdateResiliencyPolicyCallable(const UpdateResiliencyPolicyRequestT& request) const
        {
            return SubmitCallable(&ResilienceHubClient::UpdateResiliencyPolicy, request);
        }

        /**
         * An Async wrapper for UpdateResiliencyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResiliencyPolicyRequestT = Model::UpdateResiliencyPolicyRequest>
        void UpdateResiliencyPolicyAsync(const UpdateResiliencyPolicyRequestT& request, const UpdateResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ResilienceHubClient::UpdateResiliencyPolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ResilienceHubEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ResilienceHubClient>;
      void init(const ResilienceHubClientConfiguration& clientConfiguration);

      ResilienceHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ResilienceHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace ResilienceHub
} // namespace Aws
