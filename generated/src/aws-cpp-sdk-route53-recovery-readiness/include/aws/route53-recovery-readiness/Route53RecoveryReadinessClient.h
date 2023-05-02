﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessServiceClientModel.h>

namespace Aws
{
namespace Route53RecoveryReadiness
{
  /**
   * <p>Recovery readiness</p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API Route53RecoveryReadinessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Route53RecoveryReadinessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef Route53RecoveryReadinessClientConfiguration ClientConfigurationType;
      typedef Route53RecoveryReadinessEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration = Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration(),
                                       std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Auth::AWSCredentials& credentials,
                                       std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG),
                                       const Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration = Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryReadinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG),
                                       const Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration = Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53RecoveryReadinessClient(const Aws::Auth::AWSCredentials& credentials,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53RecoveryReadinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Route53RecoveryReadinessClient();

        /**
         * <p>Creates a cell in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateCell">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCellOutcome CreateCell(const Model::CreateCellRequest& request) const;

        /**
         * A Callable wrapper for CreateCell that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCellRequestT = Model::CreateCellRequest>
        Model::CreateCellOutcomeCallable CreateCellCallable(const CreateCellRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::CreateCell, request);
        }

        /**
         * An Async wrapper for CreateCell that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCellRequestT = Model::CreateCellRequest>
        void CreateCellAsync(const CreateCellRequestT& request, const CreateCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::CreateCell, request, handler, context);
        }

        /**
         * <p>Creates a cross-account readiness authorization. This lets you authorize
         * another account to work with Route 53 Application Recovery Controller, for
         * example, to check the readiness status of resources in a separate
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateCrossAccountAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCrossAccountAuthorizationOutcome CreateCrossAccountAuthorization(const Model::CreateCrossAccountAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for CreateCrossAccountAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCrossAccountAuthorizationRequestT = Model::CreateCrossAccountAuthorizationRequest>
        Model::CreateCrossAccountAuthorizationOutcomeCallable CreateCrossAccountAuthorizationCallable(const CreateCrossAccountAuthorizationRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::CreateCrossAccountAuthorization, request);
        }

        /**
         * An Async wrapper for CreateCrossAccountAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCrossAccountAuthorizationRequestT = Model::CreateCrossAccountAuthorizationRequest>
        void CreateCrossAccountAuthorizationAsync(const CreateCrossAccountAuthorizationRequestT& request, const CreateCrossAccountAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::CreateCrossAccountAuthorization, request, handler, context);
        }

        /**
         * <p>Creates a readiness check in an account. A readiness check monitors a
         * resource set in your application, such as a set of Amazon Aurora instances, that
         * Application Recovery Controller is auditing recovery readiness for. The audits
         * run once every minute on every resource that's associated with a readiness
         * check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReadinessCheckOutcome CreateReadinessCheck(const Model::CreateReadinessCheckRequest& request) const;

        /**
         * A Callable wrapper for CreateReadinessCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReadinessCheckRequestT = Model::CreateReadinessCheckRequest>
        Model::CreateReadinessCheckOutcomeCallable CreateReadinessCheckCallable(const CreateReadinessCheckRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::CreateReadinessCheck, request);
        }

        /**
         * An Async wrapper for CreateReadinessCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReadinessCheckRequestT = Model::CreateReadinessCheckRequest>
        void CreateReadinessCheckAsync(const CreateReadinessCheckRequestT& request, const CreateReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::CreateReadinessCheck, request, handler, context);
        }

        /**
         * <p>Creates a recovery group in an account. A recovery group corresponds to an
         * application and includes a list of the cells that make up the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecoveryGroupOutcome CreateRecoveryGroup(const Model::CreateRecoveryGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateRecoveryGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRecoveryGroupRequestT = Model::CreateRecoveryGroupRequest>
        Model::CreateRecoveryGroupOutcomeCallable CreateRecoveryGroupCallable(const CreateRecoveryGroupRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::CreateRecoveryGroup, request);
        }

        /**
         * An Async wrapper for CreateRecoveryGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRecoveryGroupRequestT = Model::CreateRecoveryGroupRequest>
        void CreateRecoveryGroupAsync(const CreateRecoveryGroupRequestT& request, const CreateRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::CreateRecoveryGroup, request, handler, context);
        }

        /**
         * <p>Creates a resource set. A resource set is a set of resources of one type that
         * span multiple cells. You can associate a resource set with a readiness check to
         * monitor the resources for failover readiness.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceSetOutcome CreateResourceSet(const Model::CreateResourceSetRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceSetRequestT = Model::CreateResourceSetRequest>
        Model::CreateResourceSetOutcomeCallable CreateResourceSetCallable(const CreateResourceSetRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::CreateResourceSet, request);
        }

        /**
         * An Async wrapper for CreateResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceSetRequestT = Model::CreateResourceSetRequest>
        void CreateResourceSetAsync(const CreateResourceSetRequestT& request, const CreateResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::CreateResourceSet, request, handler, context);
        }

        /**
         * <p>Delete a cell. When successful, the response code is 204, with no response
         * body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteCell">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCellOutcome DeleteCell(const Model::DeleteCellRequest& request) const;

        /**
         * A Callable wrapper for DeleteCell that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCellRequestT = Model::DeleteCellRequest>
        Model::DeleteCellOutcomeCallable DeleteCellCallable(const DeleteCellRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::DeleteCell, request);
        }

        /**
         * An Async wrapper for DeleteCell that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCellRequestT = Model::DeleteCellRequest>
        void DeleteCellAsync(const DeleteCellRequestT& request, const DeleteCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::DeleteCell, request, handler, context);
        }

        /**
         * <p>Deletes cross account readiness authorization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteCrossAccountAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrossAccountAuthorizationOutcome DeleteCrossAccountAuthorization(const Model::DeleteCrossAccountAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteCrossAccountAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCrossAccountAuthorizationRequestT = Model::DeleteCrossAccountAuthorizationRequest>
        Model::DeleteCrossAccountAuthorizationOutcomeCallable DeleteCrossAccountAuthorizationCallable(const DeleteCrossAccountAuthorizationRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::DeleteCrossAccountAuthorization, request);
        }

        /**
         * An Async wrapper for DeleteCrossAccountAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCrossAccountAuthorizationRequestT = Model::DeleteCrossAccountAuthorizationRequest>
        void DeleteCrossAccountAuthorizationAsync(const DeleteCrossAccountAuthorizationRequestT& request, const DeleteCrossAccountAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::DeleteCrossAccountAuthorization, request, handler, context);
        }

        /**
         * <p>Deletes a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReadinessCheckOutcome DeleteReadinessCheck(const Model::DeleteReadinessCheckRequest& request) const;

        /**
         * A Callable wrapper for DeleteReadinessCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReadinessCheckRequestT = Model::DeleteReadinessCheckRequest>
        Model::DeleteReadinessCheckOutcomeCallable DeleteReadinessCheckCallable(const DeleteReadinessCheckRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::DeleteReadinessCheck, request);
        }

        /**
         * An Async wrapper for DeleteReadinessCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReadinessCheckRequestT = Model::DeleteReadinessCheckRequest>
        void DeleteReadinessCheckAsync(const DeleteReadinessCheckRequestT& request, const DeleteReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::DeleteReadinessCheck, request, handler, context);
        }

        /**
         * <p>Deletes a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecoveryGroupOutcome DeleteRecoveryGroup(const Model::DeleteRecoveryGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecoveryGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRecoveryGroupRequestT = Model::DeleteRecoveryGroupRequest>
        Model::DeleteRecoveryGroupOutcomeCallable DeleteRecoveryGroupCallable(const DeleteRecoveryGroupRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::DeleteRecoveryGroup, request);
        }

        /**
         * An Async wrapper for DeleteRecoveryGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecoveryGroupRequestT = Model::DeleteRecoveryGroupRequest>
        void DeleteRecoveryGroupAsync(const DeleteRecoveryGroupRequestT& request, const DeleteRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::DeleteRecoveryGroup, request, handler, context);
        }

        /**
         * <p>Deletes a resource set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DeleteResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceSetOutcome DeleteResourceSet(const Model::DeleteResourceSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceSetRequestT = Model::DeleteResourceSetRequest>
        Model::DeleteResourceSetOutcomeCallable DeleteResourceSetCallable(const DeleteResourceSetRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::DeleteResourceSet, request);
        }

        /**
         * An Async wrapper for DeleteResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceSetRequestT = Model::DeleteResourceSetRequest>
        void DeleteResourceSetAsync(const DeleteResourceSetRequestT& request, const DeleteResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::DeleteResourceSet, request, handler, context);
        }

        /**
         * <p>Gets recommendations about architecture designs for improving resiliency for
         * an application, based on a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetArchitectureRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchitectureRecommendationsOutcome GetArchitectureRecommendations(const Model::GetArchitectureRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetArchitectureRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArchitectureRecommendationsRequestT = Model::GetArchitectureRecommendationsRequest>
        Model::GetArchitectureRecommendationsOutcomeCallable GetArchitectureRecommendationsCallable(const GetArchitectureRecommendationsRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetArchitectureRecommendations, request);
        }

        /**
         * An Async wrapper for GetArchitectureRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArchitectureRecommendationsRequestT = Model::GetArchitectureRecommendationsRequest>
        void GetArchitectureRecommendationsAsync(const GetArchitectureRecommendationsRequestT& request, const GetArchitectureRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetArchitectureRecommendations, request, handler, context);
        }

        /**
         * <p>Gets information about a cell including cell name, cell Amazon Resource Name
         * (ARN), ARNs of nested cells for this cell, and a list of those cell ARNs with
         * their associated recovery group ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetCell">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCellOutcome GetCell(const Model::GetCellRequest& request) const;

        /**
         * A Callable wrapper for GetCell that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCellRequestT = Model::GetCellRequest>
        Model::GetCellOutcomeCallable GetCellCallable(const GetCellRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetCell, request);
        }

        /**
         * An Async wrapper for GetCell that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCellRequestT = Model::GetCellRequest>
        void GetCellAsync(const GetCellRequestT& request, const GetCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetCell, request, handler, context);
        }

        /**
         * <p>Gets readiness for a cell. Aggregates the readiness of all the resources that
         * are associated with the cell into a single value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetCellReadinessSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCellReadinessSummaryOutcome GetCellReadinessSummary(const Model::GetCellReadinessSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetCellReadinessSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCellReadinessSummaryRequestT = Model::GetCellReadinessSummaryRequest>
        Model::GetCellReadinessSummaryOutcomeCallable GetCellReadinessSummaryCallable(const GetCellReadinessSummaryRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetCellReadinessSummary, request);
        }

        /**
         * An Async wrapper for GetCellReadinessSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCellReadinessSummaryRequestT = Model::GetCellReadinessSummaryRequest>
        void GetCellReadinessSummaryAsync(const GetCellReadinessSummaryRequestT& request, const GetCellReadinessSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetCellReadinessSummary, request, handler, context);
        }

        /**
         * <p>Gets details about a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadinessCheckOutcome GetReadinessCheck(const Model::GetReadinessCheckRequest& request) const;

        /**
         * A Callable wrapper for GetReadinessCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReadinessCheckRequestT = Model::GetReadinessCheckRequest>
        Model::GetReadinessCheckOutcomeCallable GetReadinessCheckCallable(const GetReadinessCheckRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetReadinessCheck, request);
        }

        /**
         * An Async wrapper for GetReadinessCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReadinessCheckRequestT = Model::GetReadinessCheckRequest>
        void GetReadinessCheckAsync(const GetReadinessCheckRequestT& request, const GetReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetReadinessCheck, request, handler, context);
        }

        /**
         * <p>Gets individual readiness status for a readiness check. To see the overall
         * readiness status for a recovery group, that considers the readiness status for
         * all the readiness checks in the recovery group, use
         * GetRecoveryGroupReadinessSummary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetReadinessCheckResourceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadinessCheckResourceStatusOutcome GetReadinessCheckResourceStatus(const Model::GetReadinessCheckResourceStatusRequest& request) const;

        /**
         * A Callable wrapper for GetReadinessCheckResourceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReadinessCheckResourceStatusRequestT = Model::GetReadinessCheckResourceStatusRequest>
        Model::GetReadinessCheckResourceStatusOutcomeCallable GetReadinessCheckResourceStatusCallable(const GetReadinessCheckResourceStatusRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetReadinessCheckResourceStatus, request);
        }

        /**
         * An Async wrapper for GetReadinessCheckResourceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReadinessCheckResourceStatusRequestT = Model::GetReadinessCheckResourceStatusRequest>
        void GetReadinessCheckResourceStatusAsync(const GetReadinessCheckResourceStatusRequestT& request, const GetReadinessCheckResourceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetReadinessCheckResourceStatus, request, handler, context);
        }

        /**
         * <p>Gets the readiness status for an individual readiness check. To see the
         * overall readiness status for a recovery group, that considers the readiness
         * status for all the readiness checks in a recovery group, use
         * GetRecoveryGroupReadinessSummary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetReadinessCheckStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadinessCheckStatusOutcome GetReadinessCheckStatus(const Model::GetReadinessCheckStatusRequest& request) const;

        /**
         * A Callable wrapper for GetReadinessCheckStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReadinessCheckStatusRequestT = Model::GetReadinessCheckStatusRequest>
        Model::GetReadinessCheckStatusOutcomeCallable GetReadinessCheckStatusCallable(const GetReadinessCheckStatusRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetReadinessCheckStatus, request);
        }

        /**
         * An Async wrapper for GetReadinessCheckStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReadinessCheckStatusRequestT = Model::GetReadinessCheckStatusRequest>
        void GetReadinessCheckStatusAsync(const GetReadinessCheckStatusRequestT& request, const GetReadinessCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetReadinessCheckStatus, request, handler, context);
        }

        /**
         * <p>Gets details about a recovery group, including a list of the cells that are
         * included in it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryGroupOutcome GetRecoveryGroup(const Model::GetRecoveryGroupRequest& request) const;

        /**
         * A Callable wrapper for GetRecoveryGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecoveryGroupRequestT = Model::GetRecoveryGroupRequest>
        Model::GetRecoveryGroupOutcomeCallable GetRecoveryGroupCallable(const GetRecoveryGroupRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetRecoveryGroup, request);
        }

        /**
         * An Async wrapper for GetRecoveryGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecoveryGroupRequestT = Model::GetRecoveryGroupRequest>
        void GetRecoveryGroupAsync(const GetRecoveryGroupRequestT& request, const GetRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetRecoveryGroup, request, handler, context);
        }

        /**
         * <p>Displays a summary of information about a recovery group's readiness status.
         * Includes the readiness checks for resources in the recovery group and the
         * readiness status of each one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetRecoveryGroupReadinessSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryGroupReadinessSummaryOutcome GetRecoveryGroupReadinessSummary(const Model::GetRecoveryGroupReadinessSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetRecoveryGroupReadinessSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecoveryGroupReadinessSummaryRequestT = Model::GetRecoveryGroupReadinessSummaryRequest>
        Model::GetRecoveryGroupReadinessSummaryOutcomeCallable GetRecoveryGroupReadinessSummaryCallable(const GetRecoveryGroupReadinessSummaryRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummary, request);
        }

        /**
         * An Async wrapper for GetRecoveryGroupReadinessSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecoveryGroupReadinessSummaryRequestT = Model::GetRecoveryGroupReadinessSummaryRequest>
        void GetRecoveryGroupReadinessSummaryAsync(const GetRecoveryGroupReadinessSummaryRequestT& request, const GetRecoveryGroupReadinessSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummary, request, handler, context);
        }

        /**
         * <p>Displays the details about a resource set, including a list of the resources
         * in the set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/GetResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSetOutcome GetResourceSet(const Model::GetResourceSetRequest& request) const;

        /**
         * A Callable wrapper for GetResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceSetRequestT = Model::GetResourceSetRequest>
        Model::GetResourceSetOutcomeCallable GetResourceSetCallable(const GetResourceSetRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::GetResourceSet, request);
        }

        /**
         * An Async wrapper for GetResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceSetRequestT = Model::GetResourceSetRequest>
        void GetResourceSetAsync(const GetResourceSetRequestT& request, const GetResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::GetResourceSet, request, handler, context);
        }

        /**
         * <p>Lists the cells for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListCells">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCellsOutcome ListCells(const Model::ListCellsRequest& request) const;

        /**
         * A Callable wrapper for ListCells that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCellsRequestT = Model::ListCellsRequest>
        Model::ListCellsOutcomeCallable ListCellsCallable(const ListCellsRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::ListCells, request);
        }

        /**
         * An Async wrapper for ListCells that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCellsRequestT = Model::ListCellsRequest>
        void ListCellsAsync(const ListCellsRequestT& request, const ListCellsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::ListCells, request, handler, context);
        }

        /**
         * <p>Lists the cross-account readiness authorizations that are in place for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListCrossAccountAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrossAccountAuthorizationsOutcome ListCrossAccountAuthorizations(const Model::ListCrossAccountAuthorizationsRequest& request) const;

        /**
         * A Callable wrapper for ListCrossAccountAuthorizations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCrossAccountAuthorizationsRequestT = Model::ListCrossAccountAuthorizationsRequest>
        Model::ListCrossAccountAuthorizationsOutcomeCallable ListCrossAccountAuthorizationsCallable(const ListCrossAccountAuthorizationsRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::ListCrossAccountAuthorizations, request);
        }

        /**
         * An Async wrapper for ListCrossAccountAuthorizations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCrossAccountAuthorizationsRequestT = Model::ListCrossAccountAuthorizationsRequest>
        void ListCrossAccountAuthorizationsAsync(const ListCrossAccountAuthorizationsRequestT& request, const ListCrossAccountAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::ListCrossAccountAuthorizations, request, handler, context);
        }

        /**
         * <p>Lists the readiness checks for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListReadinessChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadinessChecksOutcome ListReadinessChecks(const Model::ListReadinessChecksRequest& request) const;

        /**
         * A Callable wrapper for ListReadinessChecks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReadinessChecksRequestT = Model::ListReadinessChecksRequest>
        Model::ListReadinessChecksOutcomeCallable ListReadinessChecksCallable(const ListReadinessChecksRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::ListReadinessChecks, request);
        }

        /**
         * An Async wrapper for ListReadinessChecks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReadinessChecksRequestT = Model::ListReadinessChecksRequest>
        void ListReadinessChecksAsync(const ListReadinessChecksRequestT& request, const ListReadinessChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::ListReadinessChecks, request, handler, context);
        }

        /**
         * <p>Lists the recovery groups in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListRecoveryGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryGroupsOutcome ListRecoveryGroups(const Model::ListRecoveryGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListRecoveryGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecoveryGroupsRequestT = Model::ListRecoveryGroupsRequest>
        Model::ListRecoveryGroupsOutcomeCallable ListRecoveryGroupsCallable(const ListRecoveryGroupsRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::ListRecoveryGroups, request);
        }

        /**
         * An Async wrapper for ListRecoveryGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecoveryGroupsRequestT = Model::ListRecoveryGroupsRequest>
        void ListRecoveryGroupsAsync(const ListRecoveryGroupsRequestT& request, const ListRecoveryGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::ListRecoveryGroups, request, handler, context);
        }

        /**
         * <p>Lists the resource sets in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListResourceSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSetsOutcome ListResourceSets(const Model::ListResourceSetsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceSetsRequestT = Model::ListResourceSetsRequest>
        Model::ListResourceSetsOutcomeCallable ListResourceSetsCallable(const ListResourceSetsRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::ListResourceSets, request);
        }

        /**
         * An Async wrapper for ListResourceSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceSetsRequestT = Model::ListResourceSetsRequest>
        void ListResourceSetsAsync(const ListResourceSetsRequestT& request, const ListResourceSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::ListResourceSets, request, handler, context);
        }

        /**
         * <p>Lists all readiness rules, or lists the readiness rules for a specific
         * resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        Model::ListRulesOutcomeCallable ListRulesCallable(const ListRulesRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::ListRules, request);
        }

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        void ListRulesAsync(const ListRulesRequestT& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::ListRules, request, handler, context);
        }

        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListTagsForResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourcesOutcome ListTagsForResources(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourcesRequestT = Model::ListTagsForResourcesRequest>
        Model::ListTagsForResourcesOutcomeCallable ListTagsForResourcesCallable(const ListTagsForResourcesRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::ListTagsForResources, request);
        }

        /**
         * An Async wrapper for ListTagsForResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourcesRequestT = Model::ListTagsForResourcesRequest>
        void ListTagsForResourcesAsync(const ListTagsForResourcesRequestT& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::ListTagsForResources, request, handler, context);
        }

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a cell to replace the list of nested cells with a new list of nested
         * cells.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateCell">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCellOutcome UpdateCell(const Model::UpdateCellRequest& request) const;

        /**
         * A Callable wrapper for UpdateCell that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCellRequestT = Model::UpdateCellRequest>
        Model::UpdateCellOutcomeCallable UpdateCellCallable(const UpdateCellRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::UpdateCell, request);
        }

        /**
         * An Async wrapper for UpdateCell that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCellRequestT = Model::UpdateCellRequest>
        void UpdateCellAsync(const UpdateCellRequestT& request, const UpdateCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::UpdateCell, request, handler, context);
        }

        /**
         * <p>Updates a readiness check.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateReadinessCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReadinessCheckOutcome UpdateReadinessCheck(const Model::UpdateReadinessCheckRequest& request) const;

        /**
         * A Callable wrapper for UpdateReadinessCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReadinessCheckRequestT = Model::UpdateReadinessCheckRequest>
        Model::UpdateReadinessCheckOutcomeCallable UpdateReadinessCheckCallable(const UpdateReadinessCheckRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::UpdateReadinessCheck, request);
        }

        /**
         * An Async wrapper for UpdateReadinessCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReadinessCheckRequestT = Model::UpdateReadinessCheckRequest>
        void UpdateReadinessCheckAsync(const UpdateReadinessCheckRequestT& request, const UpdateReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::UpdateReadinessCheck, request, handler, context);
        }

        /**
         * <p>Updates a recovery group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateRecoveryGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecoveryGroupOutcome UpdateRecoveryGroup(const Model::UpdateRecoveryGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecoveryGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRecoveryGroupRequestT = Model::UpdateRecoveryGroupRequest>
        Model::UpdateRecoveryGroupOutcomeCallable UpdateRecoveryGroupCallable(const UpdateRecoveryGroupRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::UpdateRecoveryGroup, request);
        }

        /**
         * An Async wrapper for UpdateRecoveryGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRecoveryGroupRequestT = Model::UpdateRecoveryGroupRequest>
        void UpdateRecoveryGroupAsync(const UpdateRecoveryGroupRequestT& request, const UpdateRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::UpdateRecoveryGroup, request, handler, context);
        }

        /**
         * <p>Updates a resource set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceSetOutcome UpdateResourceSet(const Model::UpdateResourceSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceSetRequestT = Model::UpdateResourceSetRequest>
        Model::UpdateResourceSetOutcomeCallable UpdateResourceSetCallable(const UpdateResourceSetRequestT& request) const
        {
            return SubmitCallable(&Route53RecoveryReadinessClient::UpdateResourceSet, request);
        }

        /**
         * An Async wrapper for UpdateResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceSetRequestT = Model::UpdateResourceSetRequest>
        void UpdateResourceSetAsync(const UpdateResourceSetRequestT& request, const UpdateResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53RecoveryReadinessClient::UpdateResourceSet, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Route53RecoveryReadinessClient>;
      void init(const Route53RecoveryReadinessClientConfiguration& clientConfiguration);

      Route53RecoveryReadinessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53RecoveryReadiness
} // namespace Aws
