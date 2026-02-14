/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/NovaActPaginationBase.h>
#include <aws/nova-act/NovaActServiceClientModel.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
/**
 * <p>The Nova Act service provides a REST API for managing AI-powered workflow
 * automation. It enables users to create workflow definitions, execute workflow
 * runs, manage sessions, and orchestrate acts (individual AI tasks) with tool
 * integrations.</p>
 */
class AWS_NOVAACT_API NovaActClient : public Aws::Client::AWSJsonClient,
                                      public Aws::Client::ClientWithAsyncTemplateMethods<NovaActClient>,
                                      public NovaActPaginationBase<NovaActClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef NovaActClientConfiguration ClientConfigurationType;
  typedef NovaActEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  NovaActClient(const Aws::NovaAct::NovaActClientConfiguration& clientConfiguration = Aws::NovaAct::NovaActClientConfiguration(),
                std::shared_ptr<NovaActEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  NovaActClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<NovaActEndpointProviderBase> endpointProvider = nullptr,
                const Aws::NovaAct::NovaActClientConfiguration& clientConfiguration = Aws::NovaAct::NovaActClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  NovaActClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                std::shared_ptr<NovaActEndpointProviderBase> endpointProvider = nullptr,
                const Aws::NovaAct::NovaActClientConfiguration& clientConfiguration = Aws::NovaAct::NovaActClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  NovaActClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  NovaActClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  NovaActClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~NovaActClient();

  /**
   * <p>Creates a new AI task (act) within a session that can interact with tools and
   * perform specific actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/CreateAct">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateActOutcome CreateAct(const Model::CreateActRequest& request) const;

  /**
   * A Callable wrapper for CreateAct that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateActRequestT = Model::CreateActRequest>
  Model::CreateActOutcomeCallable CreateActCallable(const CreateActRequestT& request) const {
    return SubmitCallable(&NovaActClient::CreateAct, request);
  }

  /**
   * An Async wrapper for CreateAct that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateActRequestT = Model::CreateActRequest>
  void CreateActAsync(const CreateActRequestT& request, const CreateActResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::CreateAct, request, handler, context);
  }

  /**
   * <p>Creates a new session context within a workflow run to manage conversation
   * state and acts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/CreateSession">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSessionOutcome CreateSession(const Model::CreateSessionRequest& request) const;

  /**
   * A Callable wrapper for CreateSession that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateSessionRequestT = Model::CreateSessionRequest>
  Model::CreateSessionOutcomeCallable CreateSessionCallable(const CreateSessionRequestT& request) const {
    return SubmitCallable(&NovaActClient::CreateSession, request);
  }

  /**
   * An Async wrapper for CreateSession that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateSessionRequestT = Model::CreateSessionRequest>
  void CreateSessionAsync(const CreateSessionRequestT& request, const CreateSessionResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::CreateSession, request, handler, context);
  }

  /**
   * <p>Creates a new workflow definition template that can be used to execute
   * multiple workflow runs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/CreateWorkflowDefinition">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWorkflowDefinitionOutcome CreateWorkflowDefinition(const Model::CreateWorkflowDefinitionRequest& request) const;

  /**
   * A Callable wrapper for CreateWorkflowDefinition that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateWorkflowDefinitionRequestT = Model::CreateWorkflowDefinitionRequest>
  Model::CreateWorkflowDefinitionOutcomeCallable CreateWorkflowDefinitionCallable(const CreateWorkflowDefinitionRequestT& request) const {
    return SubmitCallable(&NovaActClient::CreateWorkflowDefinition, request);
  }

  /**
   * An Async wrapper for CreateWorkflowDefinition that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateWorkflowDefinitionRequestT = Model::CreateWorkflowDefinitionRequest>
  void CreateWorkflowDefinitionAsync(const CreateWorkflowDefinitionRequestT& request,
                                     const CreateWorkflowDefinitionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::CreateWorkflowDefinition, request, handler, context);
  }

  /**
   * <p>Creates a new execution instance of a workflow definition with specified
   * parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/CreateWorkflowRun">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWorkflowRunOutcome CreateWorkflowRun(const Model::CreateWorkflowRunRequest& request) const;

  /**
   * A Callable wrapper for CreateWorkflowRun that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateWorkflowRunRequestT = Model::CreateWorkflowRunRequest>
  Model::CreateWorkflowRunOutcomeCallable CreateWorkflowRunCallable(const CreateWorkflowRunRequestT& request) const {
    return SubmitCallable(&NovaActClient::CreateWorkflowRun, request);
  }

  /**
   * An Async wrapper for CreateWorkflowRun that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateWorkflowRunRequestT = Model::CreateWorkflowRunRequest>
  void CreateWorkflowRunAsync(const CreateWorkflowRunRequestT& request, const CreateWorkflowRunResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::CreateWorkflowRun, request, handler, context);
  }

  /**
   * <p>Deletes a workflow definition and all associated resources. This operation
   * cannot be undone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/DeleteWorkflowDefinition">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkflowDefinitionOutcome DeleteWorkflowDefinition(const Model::DeleteWorkflowDefinitionRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkflowDefinition that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteWorkflowDefinitionRequestT = Model::DeleteWorkflowDefinitionRequest>
  Model::DeleteWorkflowDefinitionOutcomeCallable DeleteWorkflowDefinitionCallable(const DeleteWorkflowDefinitionRequestT& request) const {
    return SubmitCallable(&NovaActClient::DeleteWorkflowDefinition, request);
  }

  /**
   * An Async wrapper for DeleteWorkflowDefinition that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteWorkflowDefinitionRequestT = Model::DeleteWorkflowDefinitionRequest>
  void DeleteWorkflowDefinitionAsync(const DeleteWorkflowDefinitionRequestT& request,
                                     const DeleteWorkflowDefinitionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::DeleteWorkflowDefinition, request, handler, context);
  }

  /**
   * <p>Terminates and cleans up a workflow run, stopping all associated acts and
   * sessions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/DeleteWorkflowRun">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkflowRunOutcome DeleteWorkflowRun(const Model::DeleteWorkflowRunRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkflowRun that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteWorkflowRunRequestT = Model::DeleteWorkflowRunRequest>
  Model::DeleteWorkflowRunOutcomeCallable DeleteWorkflowRunCallable(const DeleteWorkflowRunRequestT& request) const {
    return SubmitCallable(&NovaActClient::DeleteWorkflowRun, request);
  }

  /**
   * An Async wrapper for DeleteWorkflowRun that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteWorkflowRunRequestT = Model::DeleteWorkflowRunRequest>
  void DeleteWorkflowRunAsync(const DeleteWorkflowRunRequestT& request, const DeleteWorkflowRunResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::DeleteWorkflowRun, request, handler, context);
  }

  /**
   * <p>Retrieves the details and configuration of a specific workflow
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/GetWorkflowDefinition">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWorkflowDefinitionOutcome GetWorkflowDefinition(const Model::GetWorkflowDefinitionRequest& request) const;

  /**
   * A Callable wrapper for GetWorkflowDefinition that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWorkflowDefinitionRequestT = Model::GetWorkflowDefinitionRequest>
  Model::GetWorkflowDefinitionOutcomeCallable GetWorkflowDefinitionCallable(const GetWorkflowDefinitionRequestT& request) const {
    return SubmitCallable(&NovaActClient::GetWorkflowDefinition, request);
  }

  /**
   * An Async wrapper for GetWorkflowDefinition that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWorkflowDefinitionRequestT = Model::GetWorkflowDefinitionRequest>
  void GetWorkflowDefinitionAsync(const GetWorkflowDefinitionRequestT& request, const GetWorkflowDefinitionResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::GetWorkflowDefinition, request, handler, context);
  }

  /**
   * <p>Retrieves the current state, configuration, and execution details of a
   * workflow run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/GetWorkflowRun">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest& request) const;

  /**
   * A Callable wrapper for GetWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetWorkflowRunRequestT = Model::GetWorkflowRunRequest>
  Model::GetWorkflowRunOutcomeCallable GetWorkflowRunCallable(const GetWorkflowRunRequestT& request) const {
    return SubmitCallable(&NovaActClient::GetWorkflowRun, request);
  }

  /**
   * An Async wrapper for GetWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetWorkflowRunRequestT = Model::GetWorkflowRunRequest>
  void GetWorkflowRunAsync(const GetWorkflowRunRequestT& request, const GetWorkflowRunResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::GetWorkflowRun, request, handler, context);
  }

  /**
   * <p>Executes the next step of an act, processing tool call results and returning
   * new tool calls if needed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/InvokeActStep">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeActStepOutcome InvokeActStep(const Model::InvokeActStepRequest& request) const;

  /**
   * A Callable wrapper for InvokeActStep that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename InvokeActStepRequestT = Model::InvokeActStepRequest>
  Model::InvokeActStepOutcomeCallable InvokeActStepCallable(const InvokeActStepRequestT& request) const {
    return SubmitCallable(&NovaActClient::InvokeActStep, request);
  }

  /**
   * An Async wrapper for InvokeActStep that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename InvokeActStepRequestT = Model::InvokeActStepRequest>
  void InvokeActStepAsync(const InvokeActStepRequestT& request, const InvokeActStepResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::InvokeActStep, request, handler, context);
  }

  /**
   * <p>Lists all acts within a specific session with their current status and
   * execution details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ListActs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListActsOutcome ListActs(const Model::ListActsRequest& request) const;

  /**
   * A Callable wrapper for ListActs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListActsRequestT = Model::ListActsRequest>
  Model::ListActsOutcomeCallable ListActsCallable(const ListActsRequestT& request) const {
    return SubmitCallable(&NovaActClient::ListActs, request);
  }

  /**
   * An Async wrapper for ListActs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListActsRequestT = Model::ListActsRequest>
  void ListActsAsync(const ListActsRequestT& request, const ListActsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::ListActs, request, handler, context);
  }

  /**
   * <p>Lists all available AI models that can be used for workflow execution,
   * including their status and compatibility information.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ListModels">AWS
   * API Reference</a></p>
   */
  virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

  /**
   * A Callable wrapper for ListModels that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListModelsRequestT = Model::ListModelsRequest>
  Model::ListModelsOutcomeCallable ListModelsCallable(const ListModelsRequestT& request) const {
    return SubmitCallable(&NovaActClient::ListModels, request);
  }

  /**
   * An Async wrapper for ListModels that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListModelsRequestT = Model::ListModelsRequest>
  void ListModelsAsync(const ListModelsRequestT& request, const ListModelsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::ListModels, request, handler, context);
  }

  /**
   * <p>Lists all sessions within a specific workflow run.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ListSessions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request) const;

  /**
   * A Callable wrapper for ListSessions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListSessionsRequestT = Model::ListSessionsRequest>
  Model::ListSessionsOutcomeCallable ListSessionsCallable(const ListSessionsRequestT& request) const {
    return SubmitCallable(&NovaActClient::ListSessions, request);
  }

  /**
   * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListSessionsRequestT = Model::ListSessionsRequest>
  void ListSessionsAsync(const ListSessionsRequestT& request, const ListSessionsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::ListSessions, request, handler, context);
  }

  /**
   * <p>Lists all workflow definitions in your account with optional filtering and
   * pagination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ListWorkflowDefinitions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkflowDefinitionsOutcome ListWorkflowDefinitions(const Model::ListWorkflowDefinitionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListWorkflowDefinitions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWorkflowDefinitionsRequestT = Model::ListWorkflowDefinitionsRequest>
  Model::ListWorkflowDefinitionsOutcomeCallable ListWorkflowDefinitionsCallable(const ListWorkflowDefinitionsRequestT& request = {}) const {
    return SubmitCallable(&NovaActClient::ListWorkflowDefinitions, request);
  }

  /**
   * An Async wrapper for ListWorkflowDefinitions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWorkflowDefinitionsRequestT = Model::ListWorkflowDefinitionsRequest>
  void ListWorkflowDefinitionsAsync(const ListWorkflowDefinitionsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const ListWorkflowDefinitionsRequestT& request = {}) const {
    return SubmitAsync(&NovaActClient::ListWorkflowDefinitions, request, handler, context);
  }

  /**
   * <p>Lists all workflow runs for a specific workflow definition with optional
   * filtering and pagination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ListWorkflowRuns">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkflowRunsOutcome ListWorkflowRuns(const Model::ListWorkflowRunsRequest& request) const;

  /**
   * A Callable wrapper for ListWorkflowRuns that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWorkflowRunsRequestT = Model::ListWorkflowRunsRequest>
  Model::ListWorkflowRunsOutcomeCallable ListWorkflowRunsCallable(const ListWorkflowRunsRequestT& request) const {
    return SubmitCallable(&NovaActClient::ListWorkflowRuns, request);
  }

  /**
   * An Async wrapper for ListWorkflowRuns that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListWorkflowRunsRequestT = Model::ListWorkflowRunsRequest>
  void ListWorkflowRunsAsync(const ListWorkflowRunsRequestT& request, const ListWorkflowRunsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::ListWorkflowRuns, request, handler, context);
  }

  /**
   * <p>Updates an existing act's configuration, status, or error
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/UpdateAct">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateActOutcome UpdateAct(const Model::UpdateActRequest& request) const;

  /**
   * A Callable wrapper for UpdateAct that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateActRequestT = Model::UpdateActRequest>
  Model::UpdateActOutcomeCallable UpdateActCallable(const UpdateActRequestT& request) const {
    return SubmitCallable(&NovaActClient::UpdateAct, request);
  }

  /**
   * An Async wrapper for UpdateAct that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateActRequestT = Model::UpdateActRequest>
  void UpdateActAsync(const UpdateActRequestT& request, const UpdateActResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::UpdateAct, request, handler, context);
  }

  /**
   * <p>Updates the configuration or state of an active workflow run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/UpdateWorkflowRun">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWorkflowRunOutcome UpdateWorkflowRun(const Model::UpdateWorkflowRunRequest& request) const;

  /**
   * A Callable wrapper for UpdateWorkflowRun that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateWorkflowRunRequestT = Model::UpdateWorkflowRunRequest>
  Model::UpdateWorkflowRunOutcomeCallable UpdateWorkflowRunCallable(const UpdateWorkflowRunRequestT& request) const {
    return SubmitCallable(&NovaActClient::UpdateWorkflowRun, request);
  }

  /**
   * An Async wrapper for UpdateWorkflowRun that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateWorkflowRunRequestT = Model::UpdateWorkflowRunRequest>
  void UpdateWorkflowRunAsync(const UpdateWorkflowRunRequestT& request, const UpdateWorkflowRunResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NovaActClient::UpdateWorkflowRun, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<NovaActEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<NovaActClient>;
  void init(const NovaActClientConfiguration& clientConfiguration);

  NovaActClientConfiguration m_clientConfiguration;
  std::shared_ptr<NovaActEndpointProviderBase> m_endpointProvider;
};

}  // namespace NovaAct
}  // namespace Aws
