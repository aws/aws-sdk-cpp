/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/Resiliencehubv2PaginationBase.h>
#include <aws/resiliencehubv2/Resiliencehubv2ServiceClientModel.h>
#include <aws/resiliencehubv2/Resiliencehubv2Waiter.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
/**
 * <p>The next generation of AWS Resilience Hub is the single location in AWS where
 * you assess and improve the resilience of your critical applications. It helps
 * Site Reliability Engineers (SREs) and development teams proactively reason about
 * resilience at scale — identifying failure modes, discovering hidden
 * dependencies, and report on progress across the enterprise. </p>
 */
class AWS_RESILIENCEHUBV2_API Resiliencehubv2Client : public Aws::Client::AWSJsonClient,
                                                      public Aws::Client::ClientWithAsyncTemplateMethods<Resiliencehubv2Client>,
                                                      public Resiliencehubv2PaginationBase<Resiliencehubv2Client>,
                                                      public Resiliencehubv2Waiter<Resiliencehubv2Client> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef Resiliencehubv2ClientConfiguration ClientConfigurationType;
  typedef Resiliencehubv2EndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  Resiliencehubv2Client(const Aws::resiliencehubv2::Resiliencehubv2ClientConfiguration& clientConfiguration =
                            Aws::resiliencehubv2::Resiliencehubv2ClientConfiguration(),
                        std::shared_ptr<Resiliencehubv2EndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  Resiliencehubv2Client(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<Resiliencehubv2EndpointProviderBase> endpointProvider = nullptr,
                        const Aws::resiliencehubv2::Resiliencehubv2ClientConfiguration& clientConfiguration =
                            Aws::resiliencehubv2::Resiliencehubv2ClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  Resiliencehubv2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<Resiliencehubv2EndpointProviderBase> endpointProvider = nullptr,
                        const Aws::resiliencehubv2::Resiliencehubv2ClientConfiguration& clientConfiguration =
                            Aws::resiliencehubv2::Resiliencehubv2ClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  Resiliencehubv2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  Resiliencehubv2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  Resiliencehubv2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~Resiliencehubv2Client();

  /**
   * <p>Creates a resilience assertion for a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreateAssertion">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAssertionOutcome CreateAssertion(const Model::CreateAssertionRequest& request) const;

  /**
   * A Callable wrapper for CreateAssertion that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateAssertionRequestT = Model::CreateAssertionRequest>
  Model::CreateAssertionOutcomeCallable CreateAssertionCallable(const CreateAssertionRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreateAssertion, request);
  }

  /**
   * An Async wrapper for CreateAssertion that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateAssertionRequestT = Model::CreateAssertionRequest>
  void CreateAssertionAsync(const CreateAssertionRequestT& request, const CreateAssertionResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreateAssertion, request, handler, context);
  }

  /**
   * <p>Creates an input source for a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreateInputSource">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateInputSourceOutcome CreateInputSource(const Model::CreateInputSourceRequest& request) const;

  /**
   * A Callable wrapper for CreateInputSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateInputSourceRequestT = Model::CreateInputSourceRequest>
  Model::CreateInputSourceOutcomeCallable CreateInputSourceCallable(const CreateInputSourceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreateInputSource, request);
  }

  /**
   * An Async wrapper for CreateInputSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateInputSourceRequestT = Model::CreateInputSourceRequest>
  void CreateInputSourceAsync(const CreateInputSourceRequestT& request, const CreateInputSourceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreateInputSource, request, handler, context);
  }

  /**
   * <p>Creates a resilience policy that defines availability and disaster recovery
   * requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreatePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

  /**
   * A Callable wrapper for CreatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePolicyRequestT = Model::CreatePolicyRequest>
  Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const CreatePolicyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreatePolicy, request);
  }

  /**
   * An Async wrapper for CreatePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePolicyRequestT = Model::CreatePolicyRequest>
  void CreatePolicyAsync(const CreatePolicyRequestT& request, const CreatePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreatePolicy, request, handler, context);
  }

  /**
   * <p>On-demand report creation. Idempotent — duplicate requests with same
   * clientToken return existing result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreateReport">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateReportOutcome CreateReport(const Model::CreateReportRequest& request) const;

  /**
   * A Callable wrapper for CreateReport that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateReportRequestT = Model::CreateReportRequest>
  Model::CreateReportOutcomeCallable CreateReportCallable(const CreateReportRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreateReport, request);
  }

  /**
   * An Async wrapper for CreateReport that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateReportRequestT = Model::CreateReportRequest>
  void CreateReportAsync(const CreateReportRequestT& request, const CreateReportResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreateReport, request, handler, context);
  }

  /**
   * <p>Creates a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreateService">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

  /**
   * A Callable wrapper for CreateService that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateServiceRequestT = Model::CreateServiceRequest>
  Model::CreateServiceOutcomeCallable CreateServiceCallable(const CreateServiceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreateService, request);
  }

  /**
   * An Async wrapper for CreateService that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateServiceRequestT = Model::CreateServiceRequest>
  void CreateServiceAsync(const CreateServiceRequestT& request, const CreateServiceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreateService, request, handler, context);
  }

  /**
   * <p>Creates a service function within a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreateServiceFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateServiceFunctionOutcome CreateServiceFunction(const Model::CreateServiceFunctionRequest& request) const;

  /**
   * A Callable wrapper for CreateServiceFunction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateServiceFunctionRequestT = Model::CreateServiceFunctionRequest>
  Model::CreateServiceFunctionOutcomeCallable CreateServiceFunctionCallable(const CreateServiceFunctionRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreateServiceFunction, request);
  }

  /**
   * An Async wrapper for CreateServiceFunction that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateServiceFunctionRequestT = Model::CreateServiceFunctionRequest>
  void CreateServiceFunctionAsync(const CreateServiceFunctionRequestT& request, const CreateServiceFunctionResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreateServiceFunction, request, handler, context);
  }

  /**
   * <p>Associates resources with a service function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreateServiceFunctionResources">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateServiceFunctionResourcesOutcome CreateServiceFunctionResources(
      const Model::CreateServiceFunctionResourcesRequest& request) const;

  /**
   * A Callable wrapper for CreateServiceFunctionResources that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateServiceFunctionResourcesRequestT = Model::CreateServiceFunctionResourcesRequest>
  Model::CreateServiceFunctionResourcesOutcomeCallable CreateServiceFunctionResourcesCallable(
      const CreateServiceFunctionResourcesRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreateServiceFunctionResources, request);
  }

  /**
   * An Async wrapper for CreateServiceFunctionResources that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateServiceFunctionResourcesRequestT = Model::CreateServiceFunctionResourcesRequest>
  void CreateServiceFunctionResourcesAsync(const CreateServiceFunctionResourcesRequestT& request,
                                           const CreateServiceFunctionResourcesResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreateServiceFunctionResources, request, handler, context);
  }

  /**
   * <p>Creates a system that represents a logical grouping of
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreateSystem">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSystemOutcome CreateSystem(const Model::CreateSystemRequest& request) const;

  /**
   * A Callable wrapper for CreateSystem that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateSystemRequestT = Model::CreateSystemRequest>
  Model::CreateSystemOutcomeCallable CreateSystemCallable(const CreateSystemRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreateSystem, request);
  }

  /**
   * An Async wrapper for CreateSystem that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateSystemRequestT = Model::CreateSystemRequest>
  void CreateSystemAsync(const CreateSystemRequestT& request, const CreateSystemResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreateSystem, request, handler, context);
  }

  /**
   * <p>Creates a user journey within a system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CreateUserJourney">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateUserJourneyOutcome CreateUserJourney(const Model::CreateUserJourneyRequest& request) const;

  /**
   * A Callable wrapper for CreateUserJourney that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateUserJourneyRequestT = Model::CreateUserJourneyRequest>
  Model::CreateUserJourneyOutcomeCallable CreateUserJourneyCallable(const CreateUserJourneyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::CreateUserJourney, request);
  }

  /**
   * An Async wrapper for CreateUserJourney that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateUserJourneyRequestT = Model::CreateUserJourneyRequest>
  void CreateUserJourneyAsync(const CreateUserJourneyRequestT& request, const CreateUserJourneyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::CreateUserJourney, request, handler, context);
  }

  /**
   * <p>Deletes a resilience assertion from a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DeleteAssertion">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAssertionOutcome DeleteAssertion(const Model::DeleteAssertionRequest& request) const;

  /**
   * A Callable wrapper for DeleteAssertion that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteAssertionRequestT = Model::DeleteAssertionRequest>
  Model::DeleteAssertionOutcomeCallable DeleteAssertionCallable(const DeleteAssertionRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::DeleteAssertion, request);
  }

  /**
   * An Async wrapper for DeleteAssertion that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteAssertionRequestT = Model::DeleteAssertionRequest>
  void DeleteAssertionAsync(const DeleteAssertionRequestT& request, const DeleteAssertionResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::DeleteAssertion, request, handler, context);
  }

  /**
   * <p>Deletes an input source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DeleteInputSource">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteInputSourceOutcome DeleteInputSource(const Model::DeleteInputSourceRequest& request) const;

  /**
   * A Callable wrapper for DeleteInputSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteInputSourceRequestT = Model::DeleteInputSourceRequest>
  Model::DeleteInputSourceOutcomeCallable DeleteInputSourceCallable(const DeleteInputSourceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::DeleteInputSource, request);
  }

  /**
   * An Async wrapper for DeleteInputSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteInputSourceRequestT = Model::DeleteInputSourceRequest>
  void DeleteInputSourceAsync(const DeleteInputSourceRequestT& request, const DeleteInputSourceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::DeleteInputSource, request, handler, context);
  }

  /**
   * <p>Deletes a resilience policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DeletePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

  /**
   * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeletePolicyRequestT = Model::DeletePolicyRequest>
  Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::DeletePolicy, request);
  }

  /**
   * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeletePolicyRequestT = Model::DeletePolicyRequest>
  void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::DeletePolicy, request, handler, context);
  }

  /**
   * <p>Deletes a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DeleteService">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

  /**
   * A Callable wrapper for DeleteService that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteServiceRequestT = Model::DeleteServiceRequest>
  Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const DeleteServiceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::DeleteService, request);
  }

  /**
   * An Async wrapper for DeleteService that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteServiceRequestT = Model::DeleteServiceRequest>
  void DeleteServiceAsync(const DeleteServiceRequestT& request, const DeleteServiceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::DeleteService, request, handler, context);
  }

  /**
   * <p>Deletes a service function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DeleteServiceFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteServiceFunctionOutcome DeleteServiceFunction(const Model::DeleteServiceFunctionRequest& request) const;

  /**
   * A Callable wrapper for DeleteServiceFunction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteServiceFunctionRequestT = Model::DeleteServiceFunctionRequest>
  Model::DeleteServiceFunctionOutcomeCallable DeleteServiceFunctionCallable(const DeleteServiceFunctionRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::DeleteServiceFunction, request);
  }

  /**
   * An Async wrapper for DeleteServiceFunction that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteServiceFunctionRequestT = Model::DeleteServiceFunctionRequest>
  void DeleteServiceFunctionAsync(const DeleteServiceFunctionRequestT& request, const DeleteServiceFunctionResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::DeleteServiceFunction, request, handler, context);
  }

  /**
   * <p>Removes resources from a service function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DeleteServiceFunctionResources">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteServiceFunctionResourcesOutcome DeleteServiceFunctionResources(
      const Model::DeleteServiceFunctionResourcesRequest& request) const;

  /**
   * A Callable wrapper for DeleteServiceFunctionResources that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteServiceFunctionResourcesRequestT = Model::DeleteServiceFunctionResourcesRequest>
  Model::DeleteServiceFunctionResourcesOutcomeCallable DeleteServiceFunctionResourcesCallable(
      const DeleteServiceFunctionResourcesRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::DeleteServiceFunctionResources, request);
  }

  /**
   * An Async wrapper for DeleteServiceFunctionResources that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteServiceFunctionResourcesRequestT = Model::DeleteServiceFunctionResourcesRequest>
  void DeleteServiceFunctionResourcesAsync(const DeleteServiceFunctionResourcesRequestT& request,
                                           const DeleteServiceFunctionResourcesResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::DeleteServiceFunctionResources, request, handler, context);
  }

  /**
   * <p>Deletes a system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DeleteSystem">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSystemOutcome DeleteSystem(const Model::DeleteSystemRequest& request) const;

  /**
   * A Callable wrapper for DeleteSystem that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteSystemRequestT = Model::DeleteSystemRequest>
  Model::DeleteSystemOutcomeCallable DeleteSystemCallable(const DeleteSystemRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::DeleteSystem, request);
  }

  /**
   * An Async wrapper for DeleteSystem that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteSystemRequestT = Model::DeleteSystemRequest>
  void DeleteSystemAsync(const DeleteSystemRequestT& request, const DeleteSystemResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::DeleteSystem, request, handler, context);
  }

  /**
   * <p>Deletes a user journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DeleteUserJourney">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteUserJourneyOutcome DeleteUserJourney(const Model::DeleteUserJourneyRequest& request) const;

  /**
   * A Callable wrapper for DeleteUserJourney that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteUserJourneyRequestT = Model::DeleteUserJourneyRequest>
  Model::DeleteUserJourneyOutcomeCallable DeleteUserJourneyCallable(const DeleteUserJourneyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::DeleteUserJourney, request);
  }

  /**
   * An Async wrapper for DeleteUserJourney that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteUserJourneyRequestT = Model::DeleteUserJourneyRequest>
  void DeleteUserJourneyAsync(const DeleteUserJourneyRequestT& request, const DeleteUserJourneyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::DeleteUserJourney, request, handler, context);
  }

  /**
   * <p>Retrieves a finding by findingId.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/GetFailureModeFinding">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFailureModeFindingOutcome GetFailureModeFinding(const Model::GetFailureModeFindingRequest& request) const;

  /**
   * A Callable wrapper for GetFailureModeFinding that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetFailureModeFindingRequestT = Model::GetFailureModeFindingRequest>
  Model::GetFailureModeFindingOutcomeCallable GetFailureModeFindingCallable(const GetFailureModeFindingRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::GetFailureModeFinding, request);
  }

  /**
   * An Async wrapper for GetFailureModeFinding that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetFailureModeFindingRequestT = Model::GetFailureModeFindingRequest>
  void GetFailureModeFindingAsync(const GetFailureModeFindingRequestT& request, const GetFailureModeFindingResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::GetFailureModeFinding, request, handler, context);
  }

  /**
   * <p>Retrieves a resilience policy by ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/GetPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

  /**
   * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPolicyRequestT = Model::GetPolicyRequest>
  Model::GetPolicyOutcomeCallable GetPolicyCallable(const GetPolicyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::GetPolicy, request);
  }

  /**
   * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPolicyRequestT = Model::GetPolicyRequest>
  void GetPolicyAsync(const GetPolicyRequestT& request, const GetPolicyResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::GetPolicy, request, handler, context);
  }

  /**
   * <p>Retrieves a service by ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/GetService">AWS
   * API Reference</a></p>
   */
  virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;

  /**
   * A Callable wrapper for GetService that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetServiceRequestT = Model::GetServiceRequest>
  Model::GetServiceOutcomeCallable GetServiceCallable(const GetServiceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::GetService, request);
  }

  /**
   * An Async wrapper for GetService that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetServiceRequestT = Model::GetServiceRequest>
  void GetServiceAsync(const GetServiceRequestT& request, const GetServiceResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::GetService, request, handler, context);
  }

  /**
   * <p>Retrieves a system by ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/GetSystem">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSystemOutcome GetSystem(const Model::GetSystemRequest& request) const;

  /**
   * A Callable wrapper for GetSystem that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetSystemRequestT = Model::GetSystemRequest>
  Model::GetSystemOutcomeCallable GetSystemCallable(const GetSystemRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::GetSystem, request);
  }

  /**
   * An Async wrapper for GetSystem that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetSystemRequestT = Model::GetSystemRequest>
  void GetSystemAsync(const GetSystemRequestT& request, const GetSystemResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::GetSystem, request, handler, context);
  }

  /**
   * <p>Retrieves a user journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/GetUserJourney">AWS
   * API Reference</a></p>
   */
  virtual Model::GetUserJourneyOutcome GetUserJourney(const Model::GetUserJourneyRequest& request) const;

  /**
   * A Callable wrapper for GetUserJourney that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetUserJourneyRequestT = Model::GetUserJourneyRequest>
  Model::GetUserJourneyOutcomeCallable GetUserJourneyCallable(const GetUserJourneyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::GetUserJourney, request);
  }

  /**
   * An Async wrapper for GetUserJourney that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetUserJourneyRequestT = Model::GetUserJourneyRequest>
  void GetUserJourneyAsync(const GetUserJourneyRequestT& request, const GetUserJourneyResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::GetUserJourney, request, handler, context);
  }

  /**
   * <p>Imports a V1 app into the V2 resource model, creating a service with the same
   * name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ImportApp">AWS
   * API Reference</a></p>
   */
  virtual Model::ImportAppOutcome ImportApp(const Model::ImportAppRequest& request) const;

  /**
   * A Callable wrapper for ImportApp that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ImportAppRequestT = Model::ImportAppRequest>
  Model::ImportAppOutcomeCallable ImportAppCallable(const ImportAppRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ImportApp, request);
  }

  /**
   * An Async wrapper for ImportApp that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ImportAppRequestT = Model::ImportAppRequest>
  void ImportAppAsync(const ImportAppRequestT& request, const ImportAppResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ImportApp, request, handler, context);
  }

  /**
   * <p>Imports a V1 policy into V2, mapping RTO/RPO values from V1
   * scenarios.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ImportPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::ImportPolicyOutcome ImportPolicy(const Model::ImportPolicyRequest& request) const;

  /**
   * A Callable wrapper for ImportPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ImportPolicyRequestT = Model::ImportPolicyRequest>
  Model::ImportPolicyOutcomeCallable ImportPolicyCallable(const ImportPolicyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ImportPolicy, request);
  }

  /**
   * An Async wrapper for ImportPolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ImportPolicyRequestT = Model::ImportPolicyRequest>
  void ImportPolicyAsync(const ImportPolicyRequestT& request, const ImportPolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ImportPolicy, request, handler, context);
  }

  /**
   * <p>Lists resilience assertions for a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListAssertions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAssertionsOutcome ListAssertions(const Model::ListAssertionsRequest& request) const;

  /**
   * A Callable wrapper for ListAssertions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListAssertionsRequestT = Model::ListAssertionsRequest>
  Model::ListAssertionsOutcomeCallable ListAssertionsCallable(const ListAssertionsRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListAssertions, request);
  }

  /**
   * An Async wrapper for ListAssertions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListAssertionsRequestT = Model::ListAssertionsRequest>
  void ListAssertionsAsync(const ListAssertionsRequestT& request, const ListAssertionsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListAssertions, request, handler, context);
  }

  /**
   * <p>Lists dependencies discovered for services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListDependencies">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDependenciesOutcome ListDependencies(const Model::ListDependenciesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDependencies that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDependenciesRequestT = Model::ListDependenciesRequest>
  Model::ListDependenciesOutcomeCallable ListDependenciesCallable(const ListDependenciesRequestT& request = {}) const {
    return SubmitCallable(&Resiliencehubv2Client::ListDependencies, request);
  }

  /**
   * An Async wrapper for ListDependencies that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListDependenciesRequestT = Model::ListDependenciesRequest>
  void ListDependenciesAsync(const ListDependenciesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListDependenciesRequestT& request = {}) const {
    return SubmitAsync(&Resiliencehubv2Client::ListDependencies, request, handler, context);
  }

  /**
   * <p>Lists failure mode assessments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListFailureModeAssessments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFailureModeAssessmentsOutcome ListFailureModeAssessments(
      const Model::ListFailureModeAssessmentsRequest& request) const;

  /**
   * A Callable wrapper for ListFailureModeAssessments that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListFailureModeAssessmentsRequestT = Model::ListFailureModeAssessmentsRequest>
  Model::ListFailureModeAssessmentsOutcomeCallable ListFailureModeAssessmentsCallable(
      const ListFailureModeAssessmentsRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListFailureModeAssessments, request);
  }

  /**
   * An Async wrapper for ListFailureModeAssessments that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListFailureModeAssessmentsRequestT = Model::ListFailureModeAssessmentsRequest>
  void ListFailureModeAssessmentsAsync(const ListFailureModeAssessmentsRequestT& request,
                                       const ListFailureModeAssessmentsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListFailureModeAssessments, request, handler, context);
  }

  /**
   * <p>List findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListFailureModeFindings">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFailureModeFindingsOutcome ListFailureModeFindings(const Model::ListFailureModeFindingsRequest& request) const;

  /**
   * A Callable wrapper for ListFailureModeFindings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFailureModeFindingsRequestT = Model::ListFailureModeFindingsRequest>
  Model::ListFailureModeFindingsOutcomeCallable ListFailureModeFindingsCallable(const ListFailureModeFindingsRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListFailureModeFindings, request);
  }

  /**
   * An Async wrapper for ListFailureModeFindings that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListFailureModeFindingsRequestT = Model::ListFailureModeFindingsRequest>
  void ListFailureModeFindingsAsync(const ListFailureModeFindingsRequestT& request,
                                    const ListFailureModeFindingsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListFailureModeFindings, request, handler, context);
  }

  /**
   * <p>Lists input sources for a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListInputSources">AWS
   * API Reference</a></p>
   */
  virtual Model::ListInputSourcesOutcome ListInputSources(const Model::ListInputSourcesRequest& request) const;

  /**
   * A Callable wrapper for ListInputSources that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListInputSourcesRequestT = Model::ListInputSourcesRequest>
  Model::ListInputSourcesOutcomeCallable ListInputSourcesCallable(const ListInputSourcesRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListInputSources, request);
  }

  /**
   * An Async wrapper for ListInputSources that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListInputSourcesRequestT = Model::ListInputSourcesRequest>
  void ListInputSourcesAsync(const ListInputSourcesRequestT& request, const ListInputSourcesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListInputSources, request, handler, context);
  }

  /**
   * <p>Lists resilience policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListPolicies">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPoliciesRequestT = Model::ListPoliciesRequest>
  Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const ListPoliciesRequestT& request = {}) const {
    return SubmitCallable(&Resiliencehubv2Client::ListPolicies, request);
  }

  /**
   * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPoliciesRequestT = Model::ListPoliciesRequest>
  void ListPoliciesAsync(const ListPoliciesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListPoliciesRequestT& request = {}) const {
    return SubmitAsync(&Resiliencehubv2Client::ListPolicies, request, handler, context);
  }

  /**
   * <p>List reports for a service, or all reports owned by the account if serviceArn
   * is not provided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListReports">AWS
   * API Reference</a></p>
   */
  virtual Model::ListReportsOutcome ListReports(const Model::ListReportsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListReports that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListReportsRequestT = Model::ListReportsRequest>
  Model::ListReportsOutcomeCallable ListReportsCallable(const ListReportsRequestT& request = {}) const {
    return SubmitCallable(&Resiliencehubv2Client::ListReports, request);
  }

  /**
   * An Async wrapper for ListReports that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListReportsRequestT = Model::ListReportsRequest>
  void ListReportsAsync(const ListReportsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListReportsRequestT& request = {}) const {
    return SubmitAsync(&Resiliencehubv2Client::ListReports, request, handler, context);
  }

  /**
   * <p>List resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListResources">AWS
   * API Reference</a></p>
   */
  virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

  /**
   * A Callable wrapper for ListResources that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListResourcesRequestT = Model::ListResourcesRequest>
  Model::ListResourcesOutcomeCallable ListResourcesCallable(const ListResourcesRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListResources, request);
  }

  /**
   * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListResourcesRequestT = Model::ListResourcesRequest>
  void ListResourcesAsync(const ListResourcesRequestT& request, const ListResourcesResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListResources, request, handler, context);
  }

  /**
   * <p>Lists events for a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListServiceEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServiceEventsOutcome ListServiceEvents(const Model::ListServiceEventsRequest& request) const;

  /**
   * A Callable wrapper for ListServiceEvents that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListServiceEventsRequestT = Model::ListServiceEventsRequest>
  Model::ListServiceEventsOutcomeCallable ListServiceEventsCallable(const ListServiceEventsRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListServiceEvents, request);
  }

  /**
   * An Async wrapper for ListServiceEvents that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListServiceEventsRequestT = Model::ListServiceEventsRequest>
  void ListServiceEventsAsync(const ListServiceEventsRequestT& request, const ListServiceEventsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListServiceEvents, request, handler, context);
  }

  /**
   * <p>Lists service functions for a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListServiceFunctions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServiceFunctionsOutcome ListServiceFunctions(const Model::ListServiceFunctionsRequest& request) const;

  /**
   * A Callable wrapper for ListServiceFunctions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListServiceFunctionsRequestT = Model::ListServiceFunctionsRequest>
  Model::ListServiceFunctionsOutcomeCallable ListServiceFunctionsCallable(const ListServiceFunctionsRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListServiceFunctions, request);
  }

  /**
   * An Async wrapper for ListServiceFunctions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListServiceFunctionsRequestT = Model::ListServiceFunctionsRequest>
  void ListServiceFunctionsAsync(const ListServiceFunctionsRequestT& request, const ListServiceFunctionsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListServiceFunctions, request, handler, context);
  }

  /**
   * <p>Lists topology edges for a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListServiceTopologyEdges">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServiceTopologyEdgesOutcome ListServiceTopologyEdges(const Model::ListServiceTopologyEdgesRequest& request) const;

  /**
   * A Callable wrapper for ListServiceTopologyEdges that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListServiceTopologyEdgesRequestT = Model::ListServiceTopologyEdgesRequest>
  Model::ListServiceTopologyEdgesOutcomeCallable ListServiceTopologyEdgesCallable(const ListServiceTopologyEdgesRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListServiceTopologyEdges, request);
  }

  /**
   * An Async wrapper for ListServiceTopologyEdges that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListServiceTopologyEdgesRequestT = Model::ListServiceTopologyEdgesRequest>
  void ListServiceTopologyEdgesAsync(const ListServiceTopologyEdgesRequestT& request,
                                     const ListServiceTopologyEdgesResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListServiceTopologyEdges, request, handler, context);
  }

  /**
   * <p>Lists services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListServices">AWS
   * API Reference</a></p>
   */
  virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListServicesRequestT = Model::ListServicesRequest>
  Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request = {}) const {
    return SubmitCallable(&Resiliencehubv2Client::ListServices, request);
  }

  /**
   * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListServicesRequestT = Model::ListServicesRequest>
  void ListServicesAsync(const ListServicesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListServicesRequestT& request = {}) const {
    return SubmitAsync(&Resiliencehubv2Client::ListServices, request, handler, context);
  }

  /**
   * <p>Lists events for a system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListSystemEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSystemEventsOutcome ListSystemEvents(const Model::ListSystemEventsRequest& request) const;

  /**
   * A Callable wrapper for ListSystemEvents that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSystemEventsRequestT = Model::ListSystemEventsRequest>
  Model::ListSystemEventsOutcomeCallable ListSystemEventsCallable(const ListSystemEventsRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListSystemEvents, request);
  }

  /**
   * An Async wrapper for ListSystemEvents that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListSystemEventsRequestT = Model::ListSystemEventsRequest>
  void ListSystemEventsAsync(const ListSystemEventsRequestT& request, const ListSystemEventsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListSystemEvents, request, handler, context);
  }

  /**
   * <p>Lists systems.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListSystems">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSystemsOutcome ListSystems(const Model::ListSystemsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSystems that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListSystemsRequestT = Model::ListSystemsRequest>
  Model::ListSystemsOutcomeCallable ListSystemsCallable(const ListSystemsRequestT& request = {}) const {
    return SubmitCallable(&Resiliencehubv2Client::ListSystems, request);
  }

  /**
   * An Async wrapper for ListSystems that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListSystemsRequestT = Model::ListSystemsRequest>
  void ListSystemsAsync(const ListSystemsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListSystemsRequestT& request = {}) const {
    return SubmitAsync(&Resiliencehubv2Client::ListSystems, request, handler, context);
  }

  /**
   * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Lists user journeys for a system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ListUserJourneys">AWS
   * API Reference</a></p>
   */
  virtual Model::ListUserJourneysOutcome ListUserJourneys(const Model::ListUserJourneysRequest& request) const;

  /**
   * A Callable wrapper for ListUserJourneys that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListUserJourneysRequestT = Model::ListUserJourneysRequest>
  Model::ListUserJourneysOutcomeCallable ListUserJourneysCallable(const ListUserJourneysRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::ListUserJourneys, request);
  }

  /**
   * An Async wrapper for ListUserJourneys that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListUserJourneysRequestT = Model::ListUserJourneysRequest>
  void ListUserJourneysAsync(const ListUserJourneysRequestT& request, const ListUserJourneysResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::ListUserJourneys, request, handler, context);
  }

  /**
   * <p>Start a failure mode assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/StartFailureModeAssessment">AWS
   * API Reference</a></p>
   */
  virtual Model::StartFailureModeAssessmentOutcome StartFailureModeAssessment(
      const Model::StartFailureModeAssessmentRequest& request) const;

  /**
   * A Callable wrapper for StartFailureModeAssessment that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartFailureModeAssessmentRequestT = Model::StartFailureModeAssessmentRequest>
  Model::StartFailureModeAssessmentOutcomeCallable StartFailureModeAssessmentCallable(
      const StartFailureModeAssessmentRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::StartFailureModeAssessment, request);
  }

  /**
   * An Async wrapper for StartFailureModeAssessment that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartFailureModeAssessmentRequestT = Model::StartFailureModeAssessmentRequest>
  void StartFailureModeAssessmentAsync(const StartFailureModeAssessmentRequestT& request,
                                       const StartFailureModeAssessmentResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::StartFailureModeAssessment, request, handler, context);
  }

  /**
   * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates a resilience assertion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UpdateAssertion">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAssertionOutcome UpdateAssertion(const Model::UpdateAssertionRequest& request) const;

  /**
   * A Callable wrapper for UpdateAssertion that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateAssertionRequestT = Model::UpdateAssertionRequest>
  Model::UpdateAssertionOutcomeCallable UpdateAssertionCallable(const UpdateAssertionRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UpdateAssertion, request);
  }

  /**
   * An Async wrapper for UpdateAssertion that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateAssertionRequestT = Model::UpdateAssertionRequest>
  void UpdateAssertionAsync(const UpdateAssertionRequestT& request, const UpdateAssertionResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UpdateAssertion, request, handler, context);
  }

  /**
   * <p>Updates a dependency classification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UpdateDependency">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDependencyOutcome UpdateDependency(const Model::UpdateDependencyRequest& request) const;

  /**
   * A Callable wrapper for UpdateDependency that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateDependencyRequestT = Model::UpdateDependencyRequest>
  Model::UpdateDependencyOutcomeCallable UpdateDependencyCallable(const UpdateDependencyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UpdateDependency, request);
  }

  /**
   * An Async wrapper for UpdateDependency that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateDependencyRequestT = Model::UpdateDependencyRequest>
  void UpdateDependencyAsync(const UpdateDependencyRequestT& request, const UpdateDependencyResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UpdateDependency, request, handler, context);
  }

  /**
   * <p>Updates an existing finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UpdateFailureModeFinding">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFailureModeFindingOutcome UpdateFailureModeFinding(const Model::UpdateFailureModeFindingRequest& request) const;

  /**
   * A Callable wrapper for UpdateFailureModeFinding that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateFailureModeFindingRequestT = Model::UpdateFailureModeFindingRequest>
  Model::UpdateFailureModeFindingOutcomeCallable UpdateFailureModeFindingCallable(const UpdateFailureModeFindingRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UpdateFailureModeFinding, request);
  }

  /**
   * An Async wrapper for UpdateFailureModeFinding that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateFailureModeFindingRequestT = Model::UpdateFailureModeFindingRequest>
  void UpdateFailureModeFindingAsync(const UpdateFailureModeFindingRequestT& request,
                                     const UpdateFailureModeFindingResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UpdateFailureModeFinding, request, handler, context);
  }

  /**
   * <p>Updates an existing resilience policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UpdatePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest& request) const;

  /**
   * A Callable wrapper for UpdatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
  Model::UpdatePolicyOutcomeCallable UpdatePolicyCallable(const UpdatePolicyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UpdatePolicy, request);
  }

  /**
   * An Async wrapper for UpdatePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
  void UpdatePolicyAsync(const UpdatePolicyRequestT& request, const UpdatePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UpdatePolicy, request, handler, context);
  }

  /**
   * <p>Updates an existing service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UpdateService">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

  /**
   * A Callable wrapper for UpdateService that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateServiceRequestT = Model::UpdateServiceRequest>
  Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const UpdateServiceRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UpdateService, request);
  }

  /**
   * An Async wrapper for UpdateService that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateServiceRequestT = Model::UpdateServiceRequest>
  void UpdateServiceAsync(const UpdateServiceRequestT& request, const UpdateServiceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UpdateService, request, handler, context);
  }

  /**
   * <p>Updates a service function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UpdateServiceFunction">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateServiceFunctionOutcome UpdateServiceFunction(const Model::UpdateServiceFunctionRequest& request) const;

  /**
   * A Callable wrapper for UpdateServiceFunction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateServiceFunctionRequestT = Model::UpdateServiceFunctionRequest>
  Model::UpdateServiceFunctionOutcomeCallable UpdateServiceFunctionCallable(const UpdateServiceFunctionRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UpdateServiceFunction, request);
  }

  /**
   * An Async wrapper for UpdateServiceFunction that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateServiceFunctionRequestT = Model::UpdateServiceFunctionRequest>
  void UpdateServiceFunctionAsync(const UpdateServiceFunctionRequestT& request, const UpdateServiceFunctionResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UpdateServiceFunction, request, handler, context);
  }

  /**
   * <p>Updates an existing system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UpdateSystem">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSystemOutcome UpdateSystem(const Model::UpdateSystemRequest& request) const;

  /**
   * A Callable wrapper for UpdateSystem that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateSystemRequestT = Model::UpdateSystemRequest>
  Model::UpdateSystemOutcomeCallable UpdateSystemCallable(const UpdateSystemRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UpdateSystem, request);
  }

  /**
   * An Async wrapper for UpdateSystem that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateSystemRequestT = Model::UpdateSystemRequest>
  void UpdateSystemAsync(const UpdateSystemRequestT& request, const UpdateSystemResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UpdateSystem, request, handler, context);
  }

  /**
   * <p>Updates an existing user journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UpdateUserJourney">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateUserJourneyOutcome UpdateUserJourney(const Model::UpdateUserJourneyRequest& request) const;

  /**
   * A Callable wrapper for UpdateUserJourney that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateUserJourneyRequestT = Model::UpdateUserJourneyRequest>
  Model::UpdateUserJourneyOutcomeCallable UpdateUserJourneyCallable(const UpdateUserJourneyRequestT& request) const {
    return SubmitCallable(&Resiliencehubv2Client::UpdateUserJourney, request);
  }

  /**
   * An Async wrapper for UpdateUserJourney that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateUserJourneyRequestT = Model::UpdateUserJourneyRequest>
  void UpdateUserJourneyAsync(const UpdateUserJourneyRequestT& request, const UpdateUserJourneyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Resiliencehubv2Client::UpdateUserJourney, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<Resiliencehubv2EndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<Resiliencehubv2Client>;
  void init(const Resiliencehubv2ClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, Resiliencehubv2Error> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  Resiliencehubv2ClientConfiguration m_clientConfiguration;
  std::shared_ptr<Resiliencehubv2EndpointProviderBase> m_endpointProvider;
};

}  // namespace resiliencehubv2
}  // namespace Aws
