/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/ObservabilityAdminServiceClientModel.h>

namespace Aws
{
namespace ObservabilityAdmin
{
  /**
   * <p> You can use Amazon CloudWatch Observability Admin to discover and understand
   * the state of telemetry configuration in CloudWatch for your Amazon Web Services
   * Organization or account. This simplifies the process of auditing your telemetry
   * collection configurations across multiple resource types within your Amazon Web
   * Services Organization or account. By providing a consolidated view, it allows
   * you to easily review and manage telemetry settings, helping you ensure proper
   * monitoring and data collection across your Amazon Web Services environment. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/telemetry-config-cloudwatch.html">Auditing
   * CloudWatch telemetry conﬁgurations</a> in the CloudWatch User Guide.</p> <p>For
   * information on the permissions you need to use this API, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/auth-and-access-control-cw.html">Identity
   * and access management for Amazon CloudWatch</a> in the CloudWatch User
   * Guide.</p>
   */
  class AWS_OBSERVABILITYADMIN_API ObservabilityAdminClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ObservabilityAdminClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ObservabilityAdminClientConfiguration ClientConfigurationType;
      typedef ObservabilityAdminEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ObservabilityAdminClient(const Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration = Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration(),
                                 std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ObservabilityAdminClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration = Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ObservabilityAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration = Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ObservabilityAdminClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ObservabilityAdminClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ObservabilityAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ObservabilityAdminClient();

        /**
         * <p>Creates a centralization rule that applies across an Amazon Web Services
         * Organization. This operation can only be called by the organization's management
         * account or a delegated administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CreateCentralizationRuleForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCentralizationRuleForOrganizationOutcome CreateCentralizationRuleForOrganization(const Model::CreateCentralizationRuleForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for CreateCentralizationRuleForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCentralizationRuleForOrganizationRequestT = Model::CreateCentralizationRuleForOrganizationRequest>
        Model::CreateCentralizationRuleForOrganizationOutcomeCallable CreateCentralizationRuleForOrganizationCallable(const CreateCentralizationRuleForOrganizationRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::CreateCentralizationRuleForOrganization, request);
        }

        /**
         * An Async wrapper for CreateCentralizationRuleForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCentralizationRuleForOrganizationRequestT = Model::CreateCentralizationRuleForOrganizationRequest>
        void CreateCentralizationRuleForOrganizationAsync(const CreateCentralizationRuleForOrganizationRequestT& request, const CreateCentralizationRuleForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::CreateCentralizationRuleForOrganization, request, handler, context);
        }

        /**
         * <p> Creates a telemetry rule that defines how telemetry should be configured for
         * Amazon Web Services resources in your account. The rule specifies which
         * resources should have telemetry enabled and how that telemetry data should be
         * collected based on resource type, telemetry type, and selection criteria.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CreateTelemetryRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTelemetryRuleOutcome CreateTelemetryRule(const Model::CreateTelemetryRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateTelemetryRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTelemetryRuleRequestT = Model::CreateTelemetryRuleRequest>
        Model::CreateTelemetryRuleOutcomeCallable CreateTelemetryRuleCallable(const CreateTelemetryRuleRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::CreateTelemetryRule, request);
        }

        /**
         * An Async wrapper for CreateTelemetryRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTelemetryRuleRequestT = Model::CreateTelemetryRuleRequest>
        void CreateTelemetryRuleAsync(const CreateTelemetryRuleRequestT& request, const CreateTelemetryRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::CreateTelemetryRule, request, handler, context);
        }

        /**
         * <p> Creates a telemetry rule that applies across an Amazon Web Services
         * Organization. This operation can only be called by the organization's management
         * account or a delegated administrator account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CreateTelemetryRuleForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTelemetryRuleForOrganizationOutcome CreateTelemetryRuleForOrganization(const Model::CreateTelemetryRuleForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for CreateTelemetryRuleForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTelemetryRuleForOrganizationRequestT = Model::CreateTelemetryRuleForOrganizationRequest>
        Model::CreateTelemetryRuleForOrganizationOutcomeCallable CreateTelemetryRuleForOrganizationCallable(const CreateTelemetryRuleForOrganizationRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::CreateTelemetryRuleForOrganization, request);
        }

        /**
         * An Async wrapper for CreateTelemetryRuleForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTelemetryRuleForOrganizationRequestT = Model::CreateTelemetryRuleForOrganizationRequest>
        void CreateTelemetryRuleForOrganizationAsync(const CreateTelemetryRuleForOrganizationRequestT& request, const CreateTelemetryRuleForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::CreateTelemetryRuleForOrganization, request, handler, context);
        }

        /**
         * <p>Deletes an organization-wide centralization rule. This operation can only be
         * called by the organization's management account or a delegated administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DeleteCentralizationRuleForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCentralizationRuleForOrganizationOutcome DeleteCentralizationRuleForOrganization(const Model::DeleteCentralizationRuleForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteCentralizationRuleForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCentralizationRuleForOrganizationRequestT = Model::DeleteCentralizationRuleForOrganizationRequest>
        Model::DeleteCentralizationRuleForOrganizationOutcomeCallable DeleteCentralizationRuleForOrganizationCallable(const DeleteCentralizationRuleForOrganizationRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::DeleteCentralizationRuleForOrganization, request);
        }

        /**
         * An Async wrapper for DeleteCentralizationRuleForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCentralizationRuleForOrganizationRequestT = Model::DeleteCentralizationRuleForOrganizationRequest>
        void DeleteCentralizationRuleForOrganizationAsync(const DeleteCentralizationRuleForOrganizationRequestT& request, const DeleteCentralizationRuleForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::DeleteCentralizationRuleForOrganization, request, handler, context);
        }

        /**
         * <p> Deletes a telemetry rule from your account. Any telemetry configurations
         * previously created by the rule will remain but no new resources will be
         * configured by this rule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DeleteTelemetryRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTelemetryRuleOutcome DeleteTelemetryRule(const Model::DeleteTelemetryRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteTelemetryRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTelemetryRuleRequestT = Model::DeleteTelemetryRuleRequest>
        Model::DeleteTelemetryRuleOutcomeCallable DeleteTelemetryRuleCallable(const DeleteTelemetryRuleRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::DeleteTelemetryRule, request);
        }

        /**
         * An Async wrapper for DeleteTelemetryRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTelemetryRuleRequestT = Model::DeleteTelemetryRuleRequest>
        void DeleteTelemetryRuleAsync(const DeleteTelemetryRuleRequestT& request, const DeleteTelemetryRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::DeleteTelemetryRule, request, handler, context);
        }

        /**
         * <p> Deletes an organization-wide telemetry rule. This operation can only be
         * called by the organization's management account or a delegated administrator
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DeleteTelemetryRuleForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTelemetryRuleForOrganizationOutcome DeleteTelemetryRuleForOrganization(const Model::DeleteTelemetryRuleForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteTelemetryRuleForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTelemetryRuleForOrganizationRequestT = Model::DeleteTelemetryRuleForOrganizationRequest>
        Model::DeleteTelemetryRuleForOrganizationOutcomeCallable DeleteTelemetryRuleForOrganizationCallable(const DeleteTelemetryRuleForOrganizationRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::DeleteTelemetryRuleForOrganization, request);
        }

        /**
         * An Async wrapper for DeleteTelemetryRuleForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTelemetryRuleForOrganizationRequestT = Model::DeleteTelemetryRuleForOrganizationRequest>
        void DeleteTelemetryRuleForOrganizationAsync(const DeleteTelemetryRuleForOrganizationRequestT& request, const DeleteTelemetryRuleForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::DeleteTelemetryRuleForOrganization, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a specific organization centralization rule. This
         * operation can only be called by the organization's management account or a
         * delegated administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetCentralizationRuleForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCentralizationRuleForOrganizationOutcome GetCentralizationRuleForOrganization(const Model::GetCentralizationRuleForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for GetCentralizationRuleForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCentralizationRuleForOrganizationRequestT = Model::GetCentralizationRuleForOrganizationRequest>
        Model::GetCentralizationRuleForOrganizationOutcomeCallable GetCentralizationRuleForOrganizationCallable(const GetCentralizationRuleForOrganizationRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::GetCentralizationRuleForOrganization, request);
        }

        /**
         * An Async wrapper for GetCentralizationRuleForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCentralizationRuleForOrganizationRequestT = Model::GetCentralizationRuleForOrganizationRequest>
        void GetCentralizationRuleForOrganizationAsync(const GetCentralizationRuleForOrganizationRequestT& request, const GetCentralizationRuleForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::GetCentralizationRuleForOrganization, request, handler, context);
        }

        /**
         * <p> Returns the current onboarding status of the telemetry config feature,
         * including the status of the feature and reason the feature failed to start or
         * stop. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryEvaluationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTelemetryEvaluationStatusOutcome GetTelemetryEvaluationStatus(const Model::GetTelemetryEvaluationStatusRequest& request = {}) const;

        /**
         * A Callable wrapper for GetTelemetryEvaluationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTelemetryEvaluationStatusRequestT = Model::GetTelemetryEvaluationStatusRequest>
        Model::GetTelemetryEvaluationStatusOutcomeCallable GetTelemetryEvaluationStatusCallable(const GetTelemetryEvaluationStatusRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::GetTelemetryEvaluationStatus, request);
        }

        /**
         * An Async wrapper for GetTelemetryEvaluationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTelemetryEvaluationStatusRequestT = Model::GetTelemetryEvaluationStatusRequest>
        void GetTelemetryEvaluationStatusAsync(const GetTelemetryEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetTelemetryEvaluationStatusRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::GetTelemetryEvaluationStatus, request, handler, context);
        }

        /**
         * <p> This returns the onboarding status of the telemetry configuration feature
         * for the organization. It can only be called by a Management Account of an Amazon
         * Web Services Organization or an assigned Delegated Admin Account of Amazon
         * CloudWatch telemetry config. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryEvaluationStatusForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTelemetryEvaluationStatusForOrganizationOutcome GetTelemetryEvaluationStatusForOrganization(const Model::GetTelemetryEvaluationStatusForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetTelemetryEvaluationStatusForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTelemetryEvaluationStatusForOrganizationRequestT = Model::GetTelemetryEvaluationStatusForOrganizationRequest>
        Model::GetTelemetryEvaluationStatusForOrganizationOutcomeCallable GetTelemetryEvaluationStatusForOrganizationCallable(const GetTelemetryEvaluationStatusForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::GetTelemetryEvaluationStatusForOrganization, request);
        }

        /**
         * An Async wrapper for GetTelemetryEvaluationStatusForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTelemetryEvaluationStatusForOrganizationRequestT = Model::GetTelemetryEvaluationStatusForOrganizationRequest>
        void GetTelemetryEvaluationStatusForOrganizationAsync(const GetTelemetryEvaluationStatusForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetTelemetryEvaluationStatusForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::GetTelemetryEvaluationStatusForOrganization, request, handler, context);
        }

        /**
         * <p> Retrieves the details of a specific telemetry rule in your account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTelemetryRuleOutcome GetTelemetryRule(const Model::GetTelemetryRuleRequest& request) const;

        /**
         * A Callable wrapper for GetTelemetryRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTelemetryRuleRequestT = Model::GetTelemetryRuleRequest>
        Model::GetTelemetryRuleOutcomeCallable GetTelemetryRuleCallable(const GetTelemetryRuleRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::GetTelemetryRule, request);
        }

        /**
         * An Async wrapper for GetTelemetryRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTelemetryRuleRequestT = Model::GetTelemetryRuleRequest>
        void GetTelemetryRuleAsync(const GetTelemetryRuleRequestT& request, const GetTelemetryRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::GetTelemetryRule, request, handler, context);
        }

        /**
         * <p> Retrieves the details of a specific organization telemetry rule. This
         * operation can only be called by the organization's management account or a
         * delegated administrator account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryRuleForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTelemetryRuleForOrganizationOutcome GetTelemetryRuleForOrganization(const Model::GetTelemetryRuleForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for GetTelemetryRuleForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTelemetryRuleForOrganizationRequestT = Model::GetTelemetryRuleForOrganizationRequest>
        Model::GetTelemetryRuleForOrganizationOutcomeCallable GetTelemetryRuleForOrganizationCallable(const GetTelemetryRuleForOrganizationRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::GetTelemetryRuleForOrganization, request);
        }

        /**
         * An Async wrapper for GetTelemetryRuleForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTelemetryRuleForOrganizationRequestT = Model::GetTelemetryRuleForOrganizationRequest>
        void GetTelemetryRuleForOrganizationAsync(const GetTelemetryRuleForOrganizationRequestT& request, const GetTelemetryRuleForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::GetTelemetryRuleForOrganization, request, handler, context);
        }

        /**
         * <p>Lists all centralization rules in your organization. This operation can only
         * be called by the organization's management account or a delegated administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListCentralizationRulesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCentralizationRulesForOrganizationOutcome ListCentralizationRulesForOrganization(const Model::ListCentralizationRulesForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCentralizationRulesForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCentralizationRulesForOrganizationRequestT = Model::ListCentralizationRulesForOrganizationRequest>
        Model::ListCentralizationRulesForOrganizationOutcomeCallable ListCentralizationRulesForOrganizationCallable(const ListCentralizationRulesForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::ListCentralizationRulesForOrganization, request);
        }

        /**
         * An Async wrapper for ListCentralizationRulesForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCentralizationRulesForOrganizationRequestT = Model::ListCentralizationRulesForOrganizationRequest>
        void ListCentralizationRulesForOrganizationAsync(const ListCentralizationRulesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCentralizationRulesForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::ListCentralizationRulesForOrganization, request, handler, context);
        }

        /**
         * <p> Returns a list of telemetry configurations for Amazon Web Services resources
         * supported by telemetry config. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/telemetry-config-cloudwatch.html">Auditing
         * CloudWatch telemetry configurations</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListResourceTelemetry">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceTelemetryOutcome ListResourceTelemetry(const Model::ListResourceTelemetryRequest& request = {}) const;

        /**
         * A Callable wrapper for ListResourceTelemetry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceTelemetryRequestT = Model::ListResourceTelemetryRequest>
        Model::ListResourceTelemetryOutcomeCallable ListResourceTelemetryCallable(const ListResourceTelemetryRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::ListResourceTelemetry, request);
        }

        /**
         * An Async wrapper for ListResourceTelemetry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceTelemetryRequestT = Model::ListResourceTelemetryRequest>
        void ListResourceTelemetryAsync(const ListResourceTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListResourceTelemetryRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::ListResourceTelemetry, request, handler, context);
        }

        /**
         * <p> Returns a list of telemetry configurations for Amazon Web Services resources
         * supported by telemetry config in the organization. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListResourceTelemetryForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceTelemetryForOrganizationOutcome ListResourceTelemetryForOrganization(const Model::ListResourceTelemetryForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for ListResourceTelemetryForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceTelemetryForOrganizationRequestT = Model::ListResourceTelemetryForOrganizationRequest>
        Model::ListResourceTelemetryForOrganizationOutcomeCallable ListResourceTelemetryForOrganizationCallable(const ListResourceTelemetryForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::ListResourceTelemetryForOrganization, request);
        }

        /**
         * An Async wrapper for ListResourceTelemetryForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceTelemetryForOrganizationRequestT = Model::ListResourceTelemetryForOrganizationRequest>
        void ListResourceTelemetryForOrganizationAsync(const ListResourceTelemetryForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListResourceTelemetryForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::ListResourceTelemetryForOrganization, request, handler, context);
        }

        /**
         * <p> Lists all tags attached to the specified telemetry rule resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> Lists all telemetry rules in your account. You can filter the results by
         * specifying a rule name prefix. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListTelemetryRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTelemetryRulesOutcome ListTelemetryRules(const Model::ListTelemetryRulesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTelemetryRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTelemetryRulesRequestT = Model::ListTelemetryRulesRequest>
        Model::ListTelemetryRulesOutcomeCallable ListTelemetryRulesCallable(const ListTelemetryRulesRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::ListTelemetryRules, request);
        }

        /**
         * An Async wrapper for ListTelemetryRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTelemetryRulesRequestT = Model::ListTelemetryRulesRequest>
        void ListTelemetryRulesAsync(const ListTelemetryRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTelemetryRulesRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::ListTelemetryRules, request, handler, context);
        }

        /**
         * <p> Lists all telemetry rules in your organization. This operation can only be
         * called by the organization's management account or a delegated administrator
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListTelemetryRulesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTelemetryRulesForOrganizationOutcome ListTelemetryRulesForOrganization(const Model::ListTelemetryRulesForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTelemetryRulesForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTelemetryRulesForOrganizationRequestT = Model::ListTelemetryRulesForOrganizationRequest>
        Model::ListTelemetryRulesForOrganizationOutcomeCallable ListTelemetryRulesForOrganizationCallable(const ListTelemetryRulesForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::ListTelemetryRulesForOrganization, request);
        }

        /**
         * An Async wrapper for ListTelemetryRulesForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTelemetryRulesForOrganizationRequestT = Model::ListTelemetryRulesForOrganizationRequest>
        void ListTelemetryRulesForOrganizationAsync(const ListTelemetryRulesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTelemetryRulesForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::ListTelemetryRulesForOrganization, request, handler, context);
        }

        /**
         * <p> This action begins onboarding the caller Amazon Web Services account to the
         * telemetry config feature. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StartTelemetryEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTelemetryEvaluationOutcome StartTelemetryEvaluation(const Model::StartTelemetryEvaluationRequest& request = {}) const;

        /**
         * A Callable wrapper for StartTelemetryEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTelemetryEvaluationRequestT = Model::StartTelemetryEvaluationRequest>
        Model::StartTelemetryEvaluationOutcomeCallable StartTelemetryEvaluationCallable(const StartTelemetryEvaluationRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::StartTelemetryEvaluation, request);
        }

        /**
         * An Async wrapper for StartTelemetryEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTelemetryEvaluationRequestT = Model::StartTelemetryEvaluationRequest>
        void StartTelemetryEvaluationAsync(const StartTelemetryEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const StartTelemetryEvaluationRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::StartTelemetryEvaluation, request, handler, context);
        }

        /**
         * <p> This actions begins onboarding the organization and all member accounts to
         * the telemetry config feature. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StartTelemetryEvaluationForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTelemetryEvaluationForOrganizationOutcome StartTelemetryEvaluationForOrganization(const Model::StartTelemetryEvaluationForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for StartTelemetryEvaluationForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTelemetryEvaluationForOrganizationRequestT = Model::StartTelemetryEvaluationForOrganizationRequest>
        Model::StartTelemetryEvaluationForOrganizationOutcomeCallable StartTelemetryEvaluationForOrganizationCallable(const StartTelemetryEvaluationForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::StartTelemetryEvaluationForOrganization, request);
        }

        /**
         * An Async wrapper for StartTelemetryEvaluationForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTelemetryEvaluationForOrganizationRequestT = Model::StartTelemetryEvaluationForOrganizationRequest>
        void StartTelemetryEvaluationForOrganizationAsync(const StartTelemetryEvaluationForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const StartTelemetryEvaluationForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::StartTelemetryEvaluationForOrganization, request, handler, context);
        }

        /**
         * <p> This action begins offboarding the caller Amazon Web Services account from
         * the telemetry config feature. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StopTelemetryEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTelemetryEvaluationOutcome StopTelemetryEvaluation(const Model::StopTelemetryEvaluationRequest& request = {}) const;

        /**
         * A Callable wrapper for StopTelemetryEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopTelemetryEvaluationRequestT = Model::StopTelemetryEvaluationRequest>
        Model::StopTelemetryEvaluationOutcomeCallable StopTelemetryEvaluationCallable(const StopTelemetryEvaluationRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::StopTelemetryEvaluation, request);
        }

        /**
         * An Async wrapper for StopTelemetryEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTelemetryEvaluationRequestT = Model::StopTelemetryEvaluationRequest>
        void StopTelemetryEvaluationAsync(const StopTelemetryEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const StopTelemetryEvaluationRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::StopTelemetryEvaluation, request, handler, context);
        }

        /**
         * <p> This action offboards the Organization of the caller Amazon Web Services
         * account from the telemetry config feature. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StopTelemetryEvaluationForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTelemetryEvaluationForOrganizationOutcome StopTelemetryEvaluationForOrganization(const Model::StopTelemetryEvaluationForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for StopTelemetryEvaluationForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopTelemetryEvaluationForOrganizationRequestT = Model::StopTelemetryEvaluationForOrganizationRequest>
        Model::StopTelemetryEvaluationForOrganizationOutcomeCallable StopTelemetryEvaluationForOrganizationCallable(const StopTelemetryEvaluationForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&ObservabilityAdminClient::StopTelemetryEvaluationForOrganization, request);
        }

        /**
         * An Async wrapper for StopTelemetryEvaluationForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTelemetryEvaluationForOrganizationRequestT = Model::StopTelemetryEvaluationForOrganizationRequest>
        void StopTelemetryEvaluationForOrganizationAsync(const StopTelemetryEvaluationForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const StopTelemetryEvaluationForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&ObservabilityAdminClient::StopTelemetryEvaluationForOrganization, request, handler, context);
        }

        /**
         * <p> Adds or updates tags for a telemetry rule resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::TagResource, request, handler, context);
        }

        /**
         * <p> Removes tags from a telemetry rule resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing centralization rule that applies across an Amazon Web
         * Services Organization. This operation can only be called by the organization's
         * management account or a delegated administrator account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/UpdateCentralizationRuleForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCentralizationRuleForOrganizationOutcome UpdateCentralizationRuleForOrganization(const Model::UpdateCentralizationRuleForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for UpdateCentralizationRuleForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCentralizationRuleForOrganizationRequestT = Model::UpdateCentralizationRuleForOrganizationRequest>
        Model::UpdateCentralizationRuleForOrganizationOutcomeCallable UpdateCentralizationRuleForOrganizationCallable(const UpdateCentralizationRuleForOrganizationRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::UpdateCentralizationRuleForOrganization, request);
        }

        /**
         * An Async wrapper for UpdateCentralizationRuleForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCentralizationRuleForOrganizationRequestT = Model::UpdateCentralizationRuleForOrganizationRequest>
        void UpdateCentralizationRuleForOrganizationAsync(const UpdateCentralizationRuleForOrganizationRequestT& request, const UpdateCentralizationRuleForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::UpdateCentralizationRuleForOrganization, request, handler, context);
        }

        /**
         * <p> Updates an existing telemetry rule in your account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/UpdateTelemetryRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTelemetryRuleOutcome UpdateTelemetryRule(const Model::UpdateTelemetryRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateTelemetryRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTelemetryRuleRequestT = Model::UpdateTelemetryRuleRequest>
        Model::UpdateTelemetryRuleOutcomeCallable UpdateTelemetryRuleCallable(const UpdateTelemetryRuleRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::UpdateTelemetryRule, request);
        }

        /**
         * An Async wrapper for UpdateTelemetryRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTelemetryRuleRequestT = Model::UpdateTelemetryRuleRequest>
        void UpdateTelemetryRuleAsync(const UpdateTelemetryRuleRequestT& request, const UpdateTelemetryRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::UpdateTelemetryRule, request, handler, context);
        }

        /**
         * <p> Updates an existing telemetry rule that applies across an Amazon Web
         * Services Organization. This operation can only be called by the organization's
         * management account or a delegated administrator account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/UpdateTelemetryRuleForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTelemetryRuleForOrganizationOutcome UpdateTelemetryRuleForOrganization(const Model::UpdateTelemetryRuleForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for UpdateTelemetryRuleForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTelemetryRuleForOrganizationRequestT = Model::UpdateTelemetryRuleForOrganizationRequest>
        Model::UpdateTelemetryRuleForOrganizationOutcomeCallable UpdateTelemetryRuleForOrganizationCallable(const UpdateTelemetryRuleForOrganizationRequestT& request) const
        {
            return SubmitCallable(&ObservabilityAdminClient::UpdateTelemetryRuleForOrganization, request);
        }

        /**
         * An Async wrapper for UpdateTelemetryRuleForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTelemetryRuleForOrganizationRequestT = Model::UpdateTelemetryRuleForOrganizationRequest>
        void UpdateTelemetryRuleForOrganizationAsync(const UpdateTelemetryRuleForOrganizationRequestT& request, const UpdateTelemetryRuleForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ObservabilityAdminClient::UpdateTelemetryRuleForOrganization, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ObservabilityAdminEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ObservabilityAdminClient>;
      void init(const ObservabilityAdminClientConfiguration& clientConfiguration);

      ObservabilityAdminClientConfiguration m_clientConfiguration;
      std::shared_ptr<ObservabilityAdminEndpointProviderBase> m_endpointProvider;
  };

} // namespace ObservabilityAdmin
} // namespace Aws
