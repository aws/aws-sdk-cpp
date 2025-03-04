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
   * <p> Amazon CloudWatch Obsersavability Admin to control temletry config for your
   * AWS Organization or account. Telemetry config conﬁg to discover and understand
   * the state of telemetry conﬁguration for your AWS resources from a central view
   * in the CloudWatch console. Telemetry conﬁg simpliﬁes the process of auditing
   * your telemetry collection conﬁgurations across multiple resource types across
   * your AWS Organization or account. For more information, see <a
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
         * for the organization. It can only be called by a Management Account of an AWS
         * Organization or an assigned Delegated Admin Account of AWS CloudWatch telemetry
         * config. </p><p><h3>See Also:</h3>   <a
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
         * <p> Returns a list of telemetry configurations for AWS resources supported by
         * telemetry config. For more information, see <a
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
         * <p> Returns a list of telemetry configurations for AWS resources supported by
         * telemetry config in the organization. </p><p><h3>See Also:</h3>   <a
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
         * <p> This action begins onboarding onboarding the caller AWS account to the
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
         * <p> This action begins offboarding the caller AWS account from the telemetry
         * config feature. </p><p><h3>See Also:</h3>   <a
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
         * <p> This action offboards the Organization of the caller AWS account from thef
         * telemetry config feature. </p><p><h3>See Also:</h3>   <a
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
