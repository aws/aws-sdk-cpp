/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/ObservabilityAdminPaginationBase.h>
#include <aws/observabilityadmin/ObservabilityAdminServiceClientModel.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
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
class AWS_OBSERVABILITYADMIN_API ObservabilityAdminClient : public Aws::Client::AWSJsonClient,
                                                            public Aws::Client::ClientWithAsyncTemplateMethods<ObservabilityAdminClient>,
                                                            public ObservabilityAdminPaginationBase<ObservabilityAdminClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ObservabilityAdminClientConfiguration ClientConfigurationType;
  typedef ObservabilityAdminEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ObservabilityAdminClient(const Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration =
                               Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration(),
                           std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ObservabilityAdminClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration =
                               Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ObservabilityAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration =
                               Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ObservabilityAdminClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ObservabilityAdminClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

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
  virtual Model::CreateCentralizationRuleForOrganizationOutcome CreateCentralizationRuleForOrganization(
      const Model::CreateCentralizationRuleForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for CreateCentralizationRuleForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename CreateCentralizationRuleForOrganizationRequestT = Model::CreateCentralizationRuleForOrganizationRequest>
  Model::CreateCentralizationRuleForOrganizationOutcomeCallable CreateCentralizationRuleForOrganizationCallable(
      const CreateCentralizationRuleForOrganizationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::CreateCentralizationRuleForOrganization, request);
  }

  /**
   * An Async wrapper for CreateCentralizationRuleForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename CreateCentralizationRuleForOrganizationRequestT = Model::CreateCentralizationRuleForOrganizationRequest>
  void CreateCentralizationRuleForOrganizationAsync(const CreateCentralizationRuleForOrganizationRequestT& request,
                                                    const CreateCentralizationRuleForOrganizationResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::CreateCentralizationRuleForOrganization, request, handler, context);
  }

  /**
   * <p>Creates an integration between CloudWatch and S3 Tables for analytics. This
   * integration enables querying CloudWatch telemetry data using analytics engines
   * like Amazon Athena, Amazon Redshift, and Apache Spark.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CreateS3TableIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateS3TableIntegrationOutcome CreateS3TableIntegration(const Model::CreateS3TableIntegrationRequest& request) const;

  /**
   * A Callable wrapper for CreateS3TableIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateS3TableIntegrationRequestT = Model::CreateS3TableIntegrationRequest>
  Model::CreateS3TableIntegrationOutcomeCallable CreateS3TableIntegrationCallable(const CreateS3TableIntegrationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::CreateS3TableIntegration, request);
  }

  /**
   * An Async wrapper for CreateS3TableIntegration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateS3TableIntegrationRequestT = Model::CreateS3TableIntegrationRequest>
  void CreateS3TableIntegrationAsync(const CreateS3TableIntegrationRequestT& request,
                                     const CreateS3TableIntegrationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::CreateS3TableIntegration, request, handler, context);
  }

  /**
   * <p>Creates a telemetry pipeline for processing and transforming telemetry data.
   * The pipeline defines how data flows from sources through processors to
   * destinations, enabling data transformation and delivering capabilities.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CreateTelemetryPipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTelemetryPipelineOutcome CreateTelemetryPipeline(const Model::CreateTelemetryPipelineRequest& request) const;

  /**
   * A Callable wrapper for CreateTelemetryPipeline that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateTelemetryPipelineRequestT = Model::CreateTelemetryPipelineRequest>
  Model::CreateTelemetryPipelineOutcomeCallable CreateTelemetryPipelineCallable(const CreateTelemetryPipelineRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::CreateTelemetryPipeline, request);
  }

  /**
   * An Async wrapper for CreateTelemetryPipeline that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateTelemetryPipelineRequestT = Model::CreateTelemetryPipelineRequest>
  void CreateTelemetryPipelineAsync(const CreateTelemetryPipelineRequestT& request,
                                    const CreateTelemetryPipelineResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::CreateTelemetryPipeline, request, handler, context);
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
   * A Callable wrapper for CreateTelemetryRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateTelemetryRuleRequestT = Model::CreateTelemetryRuleRequest>
  Model::CreateTelemetryRuleOutcomeCallable CreateTelemetryRuleCallable(const CreateTelemetryRuleRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::CreateTelemetryRule, request);
  }

  /**
   * An Async wrapper for CreateTelemetryRule that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateTelemetryRuleRequestT = Model::CreateTelemetryRuleRequest>
  void CreateTelemetryRuleAsync(const CreateTelemetryRuleRequestT& request, const CreateTelemetryRuleResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::CreateTelemetryRule, request, handler, context);
  }

  /**
   * <p> Creates a telemetry rule that applies across an Amazon Web Services
   * Organization. This operation can only be called by the organization's management
   * account or a delegated administrator account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CreateTelemetryRuleForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTelemetryRuleForOrganizationOutcome CreateTelemetryRuleForOrganization(
      const Model::CreateTelemetryRuleForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for CreateTelemetryRuleForOrganization that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateTelemetryRuleForOrganizationRequestT = Model::CreateTelemetryRuleForOrganizationRequest>
  Model::CreateTelemetryRuleForOrganizationOutcomeCallable CreateTelemetryRuleForOrganizationCallable(
      const CreateTelemetryRuleForOrganizationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::CreateTelemetryRuleForOrganization, request);
  }

  /**
   * An Async wrapper for CreateTelemetryRuleForOrganization that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateTelemetryRuleForOrganizationRequestT = Model::CreateTelemetryRuleForOrganizationRequest>
  void CreateTelemetryRuleForOrganizationAsync(const CreateTelemetryRuleForOrganizationRequestT& request,
                                               const CreateTelemetryRuleForOrganizationResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::CreateTelemetryRuleForOrganization, request, handler, context);
  }

  /**
   * <p>Deletes an organization-wide centralization rule. This operation can only be
   * called by the organization's management account or a delegated administrator
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DeleteCentralizationRuleForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteCentralizationRuleForOrganizationOutcome DeleteCentralizationRuleForOrganization(
      const Model::DeleteCentralizationRuleForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for DeleteCentralizationRuleForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DeleteCentralizationRuleForOrganizationRequestT = Model::DeleteCentralizationRuleForOrganizationRequest>
  Model::DeleteCentralizationRuleForOrganizationOutcomeCallable DeleteCentralizationRuleForOrganizationCallable(
      const DeleteCentralizationRuleForOrganizationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::DeleteCentralizationRuleForOrganization, request);
  }

  /**
   * An Async wrapper for DeleteCentralizationRuleForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DeleteCentralizationRuleForOrganizationRequestT = Model::DeleteCentralizationRuleForOrganizationRequest>
  void DeleteCentralizationRuleForOrganizationAsync(const DeleteCentralizationRuleForOrganizationRequestT& request,
                                                    const DeleteCentralizationRuleForOrganizationResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::DeleteCentralizationRuleForOrganization, request, handler, context);
  }

  /**
   * <p>Deletes an S3 Table integration and its associated data. This operation
   * removes the connection between CloudWatch Observability Admin and S3
   * Tables.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DeleteS3TableIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteS3TableIntegrationOutcome DeleteS3TableIntegration(const Model::DeleteS3TableIntegrationRequest& request) const;

  /**
   * A Callable wrapper for DeleteS3TableIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteS3TableIntegrationRequestT = Model::DeleteS3TableIntegrationRequest>
  Model::DeleteS3TableIntegrationOutcomeCallable DeleteS3TableIntegrationCallable(const DeleteS3TableIntegrationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::DeleteS3TableIntegration, request);
  }

  /**
   * An Async wrapper for DeleteS3TableIntegration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteS3TableIntegrationRequestT = Model::DeleteS3TableIntegrationRequest>
  void DeleteS3TableIntegrationAsync(const DeleteS3TableIntegrationRequestT& request,
                                     const DeleteS3TableIntegrationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::DeleteS3TableIntegration, request, handler, context);
  }

  /**
   * <p>Deletes a telemetry pipeline and its associated resources. This operation
   * stops data processing and removes the pipeline configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DeleteTelemetryPipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTelemetryPipelineOutcome DeleteTelemetryPipeline(const Model::DeleteTelemetryPipelineRequest& request) const;

  /**
   * A Callable wrapper for DeleteTelemetryPipeline that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteTelemetryPipelineRequestT = Model::DeleteTelemetryPipelineRequest>
  Model::DeleteTelemetryPipelineOutcomeCallable DeleteTelemetryPipelineCallable(const DeleteTelemetryPipelineRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::DeleteTelemetryPipeline, request);
  }

  /**
   * An Async wrapper for DeleteTelemetryPipeline that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteTelemetryPipelineRequestT = Model::DeleteTelemetryPipelineRequest>
  void DeleteTelemetryPipelineAsync(const DeleteTelemetryPipelineRequestT& request,
                                    const DeleteTelemetryPipelineResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::DeleteTelemetryPipeline, request, handler, context);
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
   * A Callable wrapper for DeleteTelemetryRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteTelemetryRuleRequestT = Model::DeleteTelemetryRuleRequest>
  Model::DeleteTelemetryRuleOutcomeCallable DeleteTelemetryRuleCallable(const DeleteTelemetryRuleRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::DeleteTelemetryRule, request);
  }

  /**
   * An Async wrapper for DeleteTelemetryRule that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteTelemetryRuleRequestT = Model::DeleteTelemetryRuleRequest>
  void DeleteTelemetryRuleAsync(const DeleteTelemetryRuleRequestT& request, const DeleteTelemetryRuleResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::DeleteTelemetryRule, request, handler, context);
  }

  /**
   * <p> Deletes an organization-wide telemetry rule. This operation can only be
   * called by the organization's management account or a delegated administrator
   * account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DeleteTelemetryRuleForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTelemetryRuleForOrganizationOutcome DeleteTelemetryRuleForOrganization(
      const Model::DeleteTelemetryRuleForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for DeleteTelemetryRuleForOrganization that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DeleteTelemetryRuleForOrganizationRequestT = Model::DeleteTelemetryRuleForOrganizationRequest>
  Model::DeleteTelemetryRuleForOrganizationOutcomeCallable DeleteTelemetryRuleForOrganizationCallable(
      const DeleteTelemetryRuleForOrganizationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::DeleteTelemetryRuleForOrganization, request);
  }

  /**
   * An Async wrapper for DeleteTelemetryRuleForOrganization that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteTelemetryRuleForOrganizationRequestT = Model::DeleteTelemetryRuleForOrganizationRequest>
  void DeleteTelemetryRuleForOrganizationAsync(const DeleteTelemetryRuleForOrganizationRequestT& request,
                                               const DeleteTelemetryRuleForOrganizationResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::DeleteTelemetryRuleForOrganization, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a specific organization centralization rule. This
   * operation can only be called by the organization's management account or a
   * delegated administrator account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetCentralizationRuleForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCentralizationRuleForOrganizationOutcome GetCentralizationRuleForOrganization(
      const Model::GetCentralizationRuleForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for GetCentralizationRuleForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetCentralizationRuleForOrganizationRequestT = Model::GetCentralizationRuleForOrganizationRequest>
  Model::GetCentralizationRuleForOrganizationOutcomeCallable GetCentralizationRuleForOrganizationCallable(
      const GetCentralizationRuleForOrganizationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::GetCentralizationRuleForOrganization, request);
  }

  /**
   * An Async wrapper for GetCentralizationRuleForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetCentralizationRuleForOrganizationRequestT = Model::GetCentralizationRuleForOrganizationRequest>
  void GetCentralizationRuleForOrganizationAsync(const GetCentralizationRuleForOrganizationRequestT& request,
                                                 const GetCentralizationRuleForOrganizationResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::GetCentralizationRuleForOrganization, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific S3 Table integration, including its
   * configuration, status, and metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetS3TableIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetS3TableIntegrationOutcome GetS3TableIntegration(const Model::GetS3TableIntegrationRequest& request) const;

  /**
   * A Callable wrapper for GetS3TableIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetS3TableIntegrationRequestT = Model::GetS3TableIntegrationRequest>
  Model::GetS3TableIntegrationOutcomeCallable GetS3TableIntegrationCallable(const GetS3TableIntegrationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::GetS3TableIntegration, request);
  }

  /**
   * An Async wrapper for GetS3TableIntegration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetS3TableIntegrationRequestT = Model::GetS3TableIntegrationRequest>
  void GetS3TableIntegrationAsync(const GetS3TableIntegrationRequestT& request, const GetS3TableIntegrationResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::GetS3TableIntegration, request, handler, context);
  }

  /**
   * <p> Returns the current status of the resource tags for telemetry feature, which
   * enhances telemetry data with additional resource metadata from Resource
   * Explorer. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryEnrichmentStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTelemetryEnrichmentStatusOutcome GetTelemetryEnrichmentStatus(
      const Model::GetTelemetryEnrichmentStatusRequest& request = {}) const;

  /**
   * A Callable wrapper for GetTelemetryEnrichmentStatus that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetTelemetryEnrichmentStatusRequestT = Model::GetTelemetryEnrichmentStatusRequest>
  Model::GetTelemetryEnrichmentStatusOutcomeCallable GetTelemetryEnrichmentStatusCallable(
      const GetTelemetryEnrichmentStatusRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::GetTelemetryEnrichmentStatus, request);
  }

  /**
   * An Async wrapper for GetTelemetryEnrichmentStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTelemetryEnrichmentStatusRequestT = Model::GetTelemetryEnrichmentStatusRequest>
  void GetTelemetryEnrichmentStatusAsync(const GetTelemetryEnrichmentStatusResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const GetTelemetryEnrichmentStatusRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::GetTelemetryEnrichmentStatus, request, handler, context);
  }

  /**
   * <p> Returns the current onboarding status of the telemetry config feature,
   * including the status of the feature and reason the feature failed to start or
   * stop. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryEvaluationStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTelemetryEvaluationStatusOutcome GetTelemetryEvaluationStatus(
      const Model::GetTelemetryEvaluationStatusRequest& request = {}) const;

  /**
   * A Callable wrapper for GetTelemetryEvaluationStatus that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetTelemetryEvaluationStatusRequestT = Model::GetTelemetryEvaluationStatusRequest>
  Model::GetTelemetryEvaluationStatusOutcomeCallable GetTelemetryEvaluationStatusCallable(
      const GetTelemetryEvaluationStatusRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::GetTelemetryEvaluationStatus, request);
  }

  /**
   * An Async wrapper for GetTelemetryEvaluationStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTelemetryEvaluationStatusRequestT = Model::GetTelemetryEvaluationStatusRequest>
  void GetTelemetryEvaluationStatusAsync(const GetTelemetryEvaluationStatusResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const GetTelemetryEvaluationStatusRequestT& request = {}) const {
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
  virtual Model::GetTelemetryEvaluationStatusForOrganizationOutcome GetTelemetryEvaluationStatusForOrganization(
      const Model::GetTelemetryEvaluationStatusForOrganizationRequest& request = {}) const;

  /**
   * A Callable wrapper for GetTelemetryEvaluationStatusForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetTelemetryEvaluationStatusForOrganizationRequestT = Model::GetTelemetryEvaluationStatusForOrganizationRequest>
  Model::GetTelemetryEvaluationStatusForOrganizationOutcomeCallable GetTelemetryEvaluationStatusForOrganizationCallable(
      const GetTelemetryEvaluationStatusForOrganizationRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::GetTelemetryEvaluationStatusForOrganization, request);
  }

  /**
   * An Async wrapper for GetTelemetryEvaluationStatusForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetTelemetryEvaluationStatusForOrganizationRequestT = Model::GetTelemetryEvaluationStatusForOrganizationRequest>
  void GetTelemetryEvaluationStatusForOrganizationAsync(const GetTelemetryEvaluationStatusForOrganizationResponseReceivedHandler& handler,
                                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                        const GetTelemetryEvaluationStatusForOrganizationRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::GetTelemetryEvaluationStatusForOrganization, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific telemetry pipeline, including its
   * configuration, status, and metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryPipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTelemetryPipelineOutcome GetTelemetryPipeline(const Model::GetTelemetryPipelineRequest& request) const;

  /**
   * A Callable wrapper for GetTelemetryPipeline that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTelemetryPipelineRequestT = Model::GetTelemetryPipelineRequest>
  Model::GetTelemetryPipelineOutcomeCallable GetTelemetryPipelineCallable(const GetTelemetryPipelineRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::GetTelemetryPipeline, request);
  }

  /**
   * An Async wrapper for GetTelemetryPipeline that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTelemetryPipelineRequestT = Model::GetTelemetryPipelineRequest>
  void GetTelemetryPipelineAsync(const GetTelemetryPipelineRequestT& request, const GetTelemetryPipelineResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::GetTelemetryPipeline, request, handler, context);
  }

  /**
   * <p> Retrieves the details of a specific telemetry rule in your account.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryRule">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTelemetryRuleOutcome GetTelemetryRule(const Model::GetTelemetryRuleRequest& request) const;

  /**
   * A Callable wrapper for GetTelemetryRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTelemetryRuleRequestT = Model::GetTelemetryRuleRequest>
  Model::GetTelemetryRuleOutcomeCallable GetTelemetryRuleCallable(const GetTelemetryRuleRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::GetTelemetryRule, request);
  }

  /**
   * An Async wrapper for GetTelemetryRule that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetTelemetryRuleRequestT = Model::GetTelemetryRuleRequest>
  void GetTelemetryRuleAsync(const GetTelemetryRuleRequestT& request, const GetTelemetryRuleResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::GetTelemetryRule, request, handler, context);
  }

  /**
   * <p> Retrieves the details of a specific organization telemetry rule. This
   * operation can only be called by the organization's management account or a
   * delegated administrator account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/GetTelemetryRuleForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTelemetryRuleForOrganizationOutcome GetTelemetryRuleForOrganization(
      const Model::GetTelemetryRuleForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for GetTelemetryRuleForOrganization that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetTelemetryRuleForOrganizationRequestT = Model::GetTelemetryRuleForOrganizationRequest>
  Model::GetTelemetryRuleForOrganizationOutcomeCallable GetTelemetryRuleForOrganizationCallable(
      const GetTelemetryRuleForOrganizationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::GetTelemetryRuleForOrganization, request);
  }

  /**
   * An Async wrapper for GetTelemetryRuleForOrganization that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetTelemetryRuleForOrganizationRequestT = Model::GetTelemetryRuleForOrganizationRequest>
  void GetTelemetryRuleForOrganizationAsync(const GetTelemetryRuleForOrganizationRequestT& request,
                                            const GetTelemetryRuleForOrganizationResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::GetTelemetryRuleForOrganization, request, handler, context);
  }

  /**
   * <p>Lists all centralization rules in your organization. This operation can only
   * be called by the organization's management account or a delegated administrator
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListCentralizationRulesForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCentralizationRulesForOrganizationOutcome ListCentralizationRulesForOrganization(
      const Model::ListCentralizationRulesForOrganizationRequest& request = {}) const;

  /**
   * A Callable wrapper for ListCentralizationRulesForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListCentralizationRulesForOrganizationRequestT = Model::ListCentralizationRulesForOrganizationRequest>
  Model::ListCentralizationRulesForOrganizationOutcomeCallable ListCentralizationRulesForOrganizationCallable(
      const ListCentralizationRulesForOrganizationRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::ListCentralizationRulesForOrganization, request);
  }

  /**
   * An Async wrapper for ListCentralizationRulesForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListCentralizationRulesForOrganizationRequestT = Model::ListCentralizationRulesForOrganizationRequest>
  void ListCentralizationRulesForOrganizationAsync(const ListCentralizationRulesForOrganizationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                   const ListCentralizationRulesForOrganizationRequestT& request = {}) const {
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
   * A Callable wrapper for ListResourceTelemetry that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListResourceTelemetryRequestT = Model::ListResourceTelemetryRequest>
  Model::ListResourceTelemetryOutcomeCallable ListResourceTelemetryCallable(const ListResourceTelemetryRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::ListResourceTelemetry, request);
  }

  /**
   * An Async wrapper for ListResourceTelemetry that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListResourceTelemetryRequestT = Model::ListResourceTelemetryRequest>
  void ListResourceTelemetryAsync(const ListResourceTelemetryResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ListResourceTelemetryRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::ListResourceTelemetry, request, handler, context);
  }

  /**
   * <p> Returns a list of telemetry configurations for Amazon Web Services resources
   * supported by telemetry config in the organization. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListResourceTelemetryForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::ListResourceTelemetryForOrganizationOutcome ListResourceTelemetryForOrganization(
      const Model::ListResourceTelemetryForOrganizationRequest& request = {}) const;

  /**
   * A Callable wrapper for ListResourceTelemetryForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListResourceTelemetryForOrganizationRequestT = Model::ListResourceTelemetryForOrganizationRequest>
  Model::ListResourceTelemetryForOrganizationOutcomeCallable ListResourceTelemetryForOrganizationCallable(
      const ListResourceTelemetryForOrganizationRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::ListResourceTelemetryForOrganization, request);
  }

  /**
   * An Async wrapper for ListResourceTelemetryForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListResourceTelemetryForOrganizationRequestT = Model::ListResourceTelemetryForOrganizationRequest>
  void ListResourceTelemetryForOrganizationAsync(const ListResourceTelemetryForOrganizationResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                 const ListResourceTelemetryForOrganizationRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::ListResourceTelemetryForOrganization, request, handler, context);
  }

  /**
   * <p>Lists all S3 Table integrations in your account. We recommend using
   * pagination to ensure that the operation returns quickly and
   * successfully.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListS3TableIntegrations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListS3TableIntegrationsOutcome ListS3TableIntegrations(const Model::ListS3TableIntegrationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListS3TableIntegrations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListS3TableIntegrationsRequestT = Model::ListS3TableIntegrationsRequest>
  Model::ListS3TableIntegrationsOutcomeCallable ListS3TableIntegrationsCallable(const ListS3TableIntegrationsRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::ListS3TableIntegrations, request);
  }

  /**
   * An Async wrapper for ListS3TableIntegrations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListS3TableIntegrationsRequestT = Model::ListS3TableIntegrationsRequest>
  void ListS3TableIntegrationsAsync(const ListS3TableIntegrationsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const ListS3TableIntegrationsRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::ListS3TableIntegrations, request, handler, context);
  }

  /**
   * <p> Lists all tags attached to the specified resource. Supports telemetry rule
   * resources and telemetry pipeline resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Returns a list of telemetry pipelines in your account. Returns up to 100
   * results. If more than 100 telemetry pipelines exist, include the
   * <code>NextToken</code> value from the response to retrieve the next set of
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListTelemetryPipelines">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTelemetryPipelinesOutcome ListTelemetryPipelines(const Model::ListTelemetryPipelinesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListTelemetryPipelines that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTelemetryPipelinesRequestT = Model::ListTelemetryPipelinesRequest>
  Model::ListTelemetryPipelinesOutcomeCallable ListTelemetryPipelinesCallable(const ListTelemetryPipelinesRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::ListTelemetryPipelines, request);
  }

  /**
   * An Async wrapper for ListTelemetryPipelines that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListTelemetryPipelinesRequestT = Model::ListTelemetryPipelinesRequest>
  void ListTelemetryPipelinesAsync(const ListTelemetryPipelinesResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const ListTelemetryPipelinesRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::ListTelemetryPipelines, request, handler, context);
  }

  /**
   * <p> Lists all telemetry rules in your account. You can filter the results by
   * specifying a rule name prefix. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListTelemetryRules">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTelemetryRulesOutcome ListTelemetryRules(const Model::ListTelemetryRulesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListTelemetryRules that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTelemetryRulesRequestT = Model::ListTelemetryRulesRequest>
  Model::ListTelemetryRulesOutcomeCallable ListTelemetryRulesCallable(const ListTelemetryRulesRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::ListTelemetryRules, request);
  }

  /**
   * An Async wrapper for ListTelemetryRules that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTelemetryRulesRequestT = Model::ListTelemetryRulesRequest>
  void ListTelemetryRulesAsync(const ListTelemetryRulesResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const ListTelemetryRulesRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::ListTelemetryRules, request, handler, context);
  }

  /**
   * <p> Lists all telemetry rules in your organization. This operation can only be
   * called by the organization's management account or a delegated administrator
   * account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ListTelemetryRulesForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTelemetryRulesForOrganizationOutcome ListTelemetryRulesForOrganization(
      const Model::ListTelemetryRulesForOrganizationRequest& request = {}) const;

  /**
   * A Callable wrapper for ListTelemetryRulesForOrganization that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListTelemetryRulesForOrganizationRequestT = Model::ListTelemetryRulesForOrganizationRequest>
  Model::ListTelemetryRulesForOrganizationOutcomeCallable ListTelemetryRulesForOrganizationCallable(
      const ListTelemetryRulesForOrganizationRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::ListTelemetryRulesForOrganization, request);
  }

  /**
   * An Async wrapper for ListTelemetryRulesForOrganization that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListTelemetryRulesForOrganizationRequestT = Model::ListTelemetryRulesForOrganizationRequest>
  void ListTelemetryRulesForOrganizationAsync(const ListTelemetryRulesForOrganizationResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                              const ListTelemetryRulesForOrganizationRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::ListTelemetryRulesForOrganization, request, handler, context);
  }

  /**
   * <p> Enables the resource tags for telemetry feature for your account, which
   * enhances telemetry data with additional resource metadata from Resource Explorer
   * to provide richer context for monitoring and observability. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StartTelemetryEnrichment">AWS
   * API Reference</a></p>
   */
  virtual Model::StartTelemetryEnrichmentOutcome StartTelemetryEnrichment(const Model::StartTelemetryEnrichmentRequest& request = {}) const;

  /**
   * A Callable wrapper for StartTelemetryEnrichment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartTelemetryEnrichmentRequestT = Model::StartTelemetryEnrichmentRequest>
  Model::StartTelemetryEnrichmentOutcomeCallable StartTelemetryEnrichmentCallable(
      const StartTelemetryEnrichmentRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::StartTelemetryEnrichment, request);
  }

  /**
   * An Async wrapper for StartTelemetryEnrichment that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartTelemetryEnrichmentRequestT = Model::StartTelemetryEnrichmentRequest>
  void StartTelemetryEnrichmentAsync(const StartTelemetryEnrichmentResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const StartTelemetryEnrichmentRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::StartTelemetryEnrichment, request, handler, context);
  }

  /**
   * <p> This action begins onboarding the caller Amazon Web Services account to the
   * telemetry config feature. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StartTelemetryEvaluation">AWS
   * API Reference</a></p>
   */
  virtual Model::StartTelemetryEvaluationOutcome StartTelemetryEvaluation(const Model::StartTelemetryEvaluationRequest& request = {}) const;

  /**
   * A Callable wrapper for StartTelemetryEvaluation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartTelemetryEvaluationRequestT = Model::StartTelemetryEvaluationRequest>
  Model::StartTelemetryEvaluationOutcomeCallable StartTelemetryEvaluationCallable(
      const StartTelemetryEvaluationRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::StartTelemetryEvaluation, request);
  }

  /**
   * An Async wrapper for StartTelemetryEvaluation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartTelemetryEvaluationRequestT = Model::StartTelemetryEvaluationRequest>
  void StartTelemetryEvaluationAsync(const StartTelemetryEvaluationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const StartTelemetryEvaluationRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::StartTelemetryEvaluation, request, handler, context);
  }

  /**
   * <p> This actions begins onboarding the organization and all member accounts to
   * the telemetry config feature. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StartTelemetryEvaluationForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::StartTelemetryEvaluationForOrganizationOutcome StartTelemetryEvaluationForOrganization(
      const Model::StartTelemetryEvaluationForOrganizationRequest& request = {}) const;

  /**
   * A Callable wrapper for StartTelemetryEvaluationForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename StartTelemetryEvaluationForOrganizationRequestT = Model::StartTelemetryEvaluationForOrganizationRequest>
  Model::StartTelemetryEvaluationForOrganizationOutcomeCallable StartTelemetryEvaluationForOrganizationCallable(
      const StartTelemetryEvaluationForOrganizationRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::StartTelemetryEvaluationForOrganization, request);
  }

  /**
   * An Async wrapper for StartTelemetryEvaluationForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename StartTelemetryEvaluationForOrganizationRequestT = Model::StartTelemetryEvaluationForOrganizationRequest>
  void StartTelemetryEvaluationForOrganizationAsync(const StartTelemetryEvaluationForOrganizationResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                    const StartTelemetryEvaluationForOrganizationRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::StartTelemetryEvaluationForOrganization, request, handler, context);
  }

  /**
   * <p> Disables the resource tags for telemetry feature for your account, stopping
   * the enhancement of telemetry data with additional resource metadata.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StopTelemetryEnrichment">AWS
   * API Reference</a></p>
   */
  virtual Model::StopTelemetryEnrichmentOutcome StopTelemetryEnrichment(const Model::StopTelemetryEnrichmentRequest& request = {}) const;

  /**
   * A Callable wrapper for StopTelemetryEnrichment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopTelemetryEnrichmentRequestT = Model::StopTelemetryEnrichmentRequest>
  Model::StopTelemetryEnrichmentOutcomeCallable StopTelemetryEnrichmentCallable(const StopTelemetryEnrichmentRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::StopTelemetryEnrichment, request);
  }

  /**
   * An Async wrapper for StopTelemetryEnrichment that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StopTelemetryEnrichmentRequestT = Model::StopTelemetryEnrichmentRequest>
  void StopTelemetryEnrichmentAsync(const StopTelemetryEnrichmentResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const StopTelemetryEnrichmentRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::StopTelemetryEnrichment, request, handler, context);
  }

  /**
   * <p> This action begins offboarding the caller Amazon Web Services account from
   * the telemetry config feature. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StopTelemetryEvaluation">AWS
   * API Reference</a></p>
   */
  virtual Model::StopTelemetryEvaluationOutcome StopTelemetryEvaluation(const Model::StopTelemetryEvaluationRequest& request = {}) const;

  /**
   * A Callable wrapper for StopTelemetryEvaluation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopTelemetryEvaluationRequestT = Model::StopTelemetryEvaluationRequest>
  Model::StopTelemetryEvaluationOutcomeCallable StopTelemetryEvaluationCallable(const StopTelemetryEvaluationRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::StopTelemetryEvaluation, request);
  }

  /**
   * An Async wrapper for StopTelemetryEvaluation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StopTelemetryEvaluationRequestT = Model::StopTelemetryEvaluationRequest>
  void StopTelemetryEvaluationAsync(const StopTelemetryEvaluationResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const StopTelemetryEvaluationRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::StopTelemetryEvaluation, request, handler, context);
  }

  /**
   * <p> This action offboards the Organization of the caller Amazon Web Services
   * account from the telemetry config feature. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/StopTelemetryEvaluationForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::StopTelemetryEvaluationForOrganizationOutcome StopTelemetryEvaluationForOrganization(
      const Model::StopTelemetryEvaluationForOrganizationRequest& request = {}) const;

  /**
   * A Callable wrapper for StopTelemetryEvaluationForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename StopTelemetryEvaluationForOrganizationRequestT = Model::StopTelemetryEvaluationForOrganizationRequest>
  Model::StopTelemetryEvaluationForOrganizationOutcomeCallable StopTelemetryEvaluationForOrganizationCallable(
      const StopTelemetryEvaluationForOrganizationRequestT& request = {}) const {
    return SubmitCallable(&ObservabilityAdminClient::StopTelemetryEvaluationForOrganization, request);
  }

  /**
   * An Async wrapper for StopTelemetryEvaluationForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename StopTelemetryEvaluationForOrganizationRequestT = Model::StopTelemetryEvaluationForOrganizationRequest>
  void StopTelemetryEvaluationForOrganizationAsync(const StopTelemetryEvaluationForOrganizationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                   const StopTelemetryEvaluationForOrganizationRequestT& request = {}) const {
    return SubmitAsync(&ObservabilityAdminClient::StopTelemetryEvaluationForOrganization, request, handler, context);
  }

  /**
   * <p> Adds or updates tags for a resource. Supports telemetry rule resources and
   * telemetry pipeline resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::TagResource, request, handler, context);
  }

  /**
   * <p>Tests a pipeline configuration with sample records to validate data
   * processing before deployment. This operation helps ensure your pipeline
   * configuration works as expected. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TestTelemetryPipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::TestTelemetryPipelineOutcome TestTelemetryPipeline(const Model::TestTelemetryPipelineRequest& request) const;

  /**
   * A Callable wrapper for TestTelemetryPipeline that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TestTelemetryPipelineRequestT = Model::TestTelemetryPipelineRequest>
  Model::TestTelemetryPipelineOutcomeCallable TestTelemetryPipelineCallable(const TestTelemetryPipelineRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::TestTelemetryPipeline, request);
  }

  /**
   * An Async wrapper for TestTelemetryPipeline that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename TestTelemetryPipelineRequestT = Model::TestTelemetryPipelineRequest>
  void TestTelemetryPipelineAsync(const TestTelemetryPipelineRequestT& request, const TestTelemetryPipelineResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::TestTelemetryPipeline, request, handler, context);
  }

  /**
   * <p> Removes tags from a resource. Supports telemetry rule resources and
   * telemetry pipeline resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
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
  virtual Model::UpdateCentralizationRuleForOrganizationOutcome UpdateCentralizationRuleForOrganization(
      const Model::UpdateCentralizationRuleForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for UpdateCentralizationRuleForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename UpdateCentralizationRuleForOrganizationRequestT = Model::UpdateCentralizationRuleForOrganizationRequest>
  Model::UpdateCentralizationRuleForOrganizationOutcomeCallable UpdateCentralizationRuleForOrganizationCallable(
      const UpdateCentralizationRuleForOrganizationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::UpdateCentralizationRuleForOrganization, request);
  }

  /**
   * An Async wrapper for UpdateCentralizationRuleForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename UpdateCentralizationRuleForOrganizationRequestT = Model::UpdateCentralizationRuleForOrganizationRequest>
  void UpdateCentralizationRuleForOrganizationAsync(const UpdateCentralizationRuleForOrganizationRequestT& request,
                                                    const UpdateCentralizationRuleForOrganizationResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::UpdateCentralizationRuleForOrganization, request, handler, context);
  }

  /**
   * <p>Updates the configuration of an existing telemetry pipeline.</p>
   * <p>The following attributes cannot be updated after pipeline creation:</p> <ul>
   * <li> <p> <b>Pipeline name</b> - The pipeline name is immutable</p> </li> <li>
   * <p> <b>Pipeline ARN</b> - The ARN is automatically generated and cannot be
   * changed</p> </li> <li> <p> <b>Source type</b> - Once a pipeline is created with
   * a specific source type (such as S3, CloudWatch Logs, GitHub, or third-party
   * sources), it cannot be changed to a different source type</p> </li> </ul>
   * <p>Processors can be added, removed, or modified. However, some processors are
   * not supported for third-party pipelines and cannot be added through updates.</p>
   *  <p> <b>Source-Specific Update Rules</b> </p> <dl> <dt>CloudWatch Logs
   * Sources (Vended and Custom)</dt> <dd> <p> <b>Updatable:</b>
   * <code>sts_role_arn</code> </p> <p> <b>Fixed:</b> <code>data_source_name</code>,
   * <code>data_source_type</code>, sink (must remain <code>@original</code>)</p>
   * </dd> <dt>S3 Sources (Crowdstrike, Zscaler, SentinelOne, Custom)</dt> <dd> <p>
   * <b>Updatable:</b> All SQS configuration parameters, <code>sts_role_arn</code>,
   * codec settings, compression type, bucket ownership settings, sink log group</p>
   * <p> <b>Fixed:</b> <code>notification_type</code>, <code>aws.region</code> </p>
   * </dd> <dt>GitHub Audit Logs</dt> <dd> <p> <b>Updatable:</b> All Amazon Web
   * Services Secrets Manager attributes, <code>scope</code> (can switch between
   * ORGANIZATION/ENTERPRISE), <code>organization</code> or <code>enterprise</code>
   * name, <code>range</code>, authentication credentials (PAT or GitHub App)</p>
   * </dd> <dt>Microsoft Sources (Entra ID, Office365, Windows)</dt> <dd> <p>
   * <b>Updatable:</b> All Amazon Web Services Secrets Manager attributes,
   * <code>tenant_id</code>, <code>workspace_id</code> (Windows only), OAuth2
   * credentials (<code>client_id</code>, <code>client_secret</code>)</p> </dd>
   * <dt>Okta Sources (SSO, Auth0)</dt> <dd> <p> <b>Updatable:</b> All Amazon Web
   * Services Secrets Manager attributes, <code>domain</code>, <code>range</code>
   * (SSO only), OAuth2 credentials (<code>client_id</code>,
   * <code>client_secret</code>)</p> </dd> <dt>Palo Alto Networks</dt> <dd> <p>
   * <b>Updatable:</b> All Amazon Web Services Secrets Manager attributes,
   * <code>hostname</code>, basic authentication credentials (<code>username</code>,
   * <code>password</code>)</p> </dd> <dt>ServiceNow CMDB</dt> <dd> <p>
   * <b>Updatable:</b> All Amazon Web Services Secrets Manager attributes,
   * <code>instance_url</code>, <code>range</code>, OAuth2 credentials
   * (<code>client_id</code>, <code>client_secret</code>)</p> </dd> <dt>Wiz
   * CNAPP</dt> <dd> <p> <b>Updatable:</b> All Amazon Web Services Secrets Manager
   * attributes, <code>region</code>, <code>range</code>, OAuth2 credentials
   * (<code>client_id</code>, <code>client_secret</code>)</p> </dd> </dl><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/UpdateTelemetryPipeline">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateTelemetryPipelineOutcome UpdateTelemetryPipeline(const Model::UpdateTelemetryPipelineRequest& request) const;

  /**
   * A Callable wrapper for UpdateTelemetryPipeline that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateTelemetryPipelineRequestT = Model::UpdateTelemetryPipelineRequest>
  Model::UpdateTelemetryPipelineOutcomeCallable UpdateTelemetryPipelineCallable(const UpdateTelemetryPipelineRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::UpdateTelemetryPipeline, request);
  }

  /**
   * An Async wrapper for UpdateTelemetryPipeline that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateTelemetryPipelineRequestT = Model::UpdateTelemetryPipelineRequest>
  void UpdateTelemetryPipelineAsync(const UpdateTelemetryPipelineRequestT& request,
                                    const UpdateTelemetryPipelineResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::UpdateTelemetryPipeline, request, handler, context);
  }

  /**
   * <p> Updates an existing telemetry rule in your account. If multiple users
   * attempt to modify the same telemetry rule simultaneously, a ConflictException is
   * returned to provide specific error information for concurrent modification
   * scenarios. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/UpdateTelemetryRule">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateTelemetryRuleOutcome UpdateTelemetryRule(const Model::UpdateTelemetryRuleRequest& request) const;

  /**
   * A Callable wrapper for UpdateTelemetryRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateTelemetryRuleRequestT = Model::UpdateTelemetryRuleRequest>
  Model::UpdateTelemetryRuleOutcomeCallable UpdateTelemetryRuleCallable(const UpdateTelemetryRuleRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::UpdateTelemetryRule, request);
  }

  /**
   * An Async wrapper for UpdateTelemetryRule that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateTelemetryRuleRequestT = Model::UpdateTelemetryRuleRequest>
  void UpdateTelemetryRuleAsync(const UpdateTelemetryRuleRequestT& request, const UpdateTelemetryRuleResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
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
  virtual Model::UpdateTelemetryRuleForOrganizationOutcome UpdateTelemetryRuleForOrganization(
      const Model::UpdateTelemetryRuleForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for UpdateTelemetryRuleForOrganization that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename UpdateTelemetryRuleForOrganizationRequestT = Model::UpdateTelemetryRuleForOrganizationRequest>
  Model::UpdateTelemetryRuleForOrganizationOutcomeCallable UpdateTelemetryRuleForOrganizationCallable(
      const UpdateTelemetryRuleForOrganizationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::UpdateTelemetryRuleForOrganization, request);
  }

  /**
   * An Async wrapper for UpdateTelemetryRuleForOrganization that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateTelemetryRuleForOrganizationRequestT = Model::UpdateTelemetryRuleForOrganizationRequest>
  void UpdateTelemetryRuleForOrganizationAsync(const UpdateTelemetryRuleForOrganizationRequestT& request,
                                               const UpdateTelemetryRuleForOrganizationResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::UpdateTelemetryRuleForOrganization, request, handler, context);
  }

  /**
   * <p>Validates a pipeline configuration without creating the pipeline. This
   * operation checks the configuration for syntax errors and compatibility
   * issues.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ValidateTelemetryPipelineConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::ValidateTelemetryPipelineConfigurationOutcome ValidateTelemetryPipelineConfiguration(
      const Model::ValidateTelemetryPipelineConfigurationRequest& request) const;

  /**
   * A Callable wrapper for ValidateTelemetryPipelineConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ValidateTelemetryPipelineConfigurationRequestT = Model::ValidateTelemetryPipelineConfigurationRequest>
  Model::ValidateTelemetryPipelineConfigurationOutcomeCallable ValidateTelemetryPipelineConfigurationCallable(
      const ValidateTelemetryPipelineConfigurationRequestT& request) const {
    return SubmitCallable(&ObservabilityAdminClient::ValidateTelemetryPipelineConfiguration, request);
  }

  /**
   * An Async wrapper for ValidateTelemetryPipelineConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ValidateTelemetryPipelineConfigurationRequestT = Model::ValidateTelemetryPipelineConfigurationRequest>
  void ValidateTelemetryPipelineConfigurationAsync(const ValidateTelemetryPipelineConfigurationRequestT& request,
                                                   const ValidateTelemetryPipelineConfigurationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ObservabilityAdminClient::ValidateTelemetryPipelineConfiguration, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ObservabilityAdminEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ObservabilityAdminClient>;
  void init(const ObservabilityAdminClientConfiguration& clientConfiguration);

  ObservabilityAdminClientConfiguration m_clientConfiguration;
  std::shared_ptr<ObservabilityAdminEndpointProviderBase> m_endpointProvider;
};

}  // namespace ObservabilityAdmin
}  // namespace Aws
