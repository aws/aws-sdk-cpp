/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/MWAAServerlessPaginationBase.h>
#include <aws/mwaa-serverless/MWAAServerlessServiceClientModel.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

namespace Aws {
namespace MWAAServerless {
/**
 * <p>Amazon Managed Workflows for Apache Airflow Serverless provides a managed
 * workflow orchestration platform for running Apache Airflow workflows in a
 * serverless environment. You can use Amazon Managed Workflows for Apache Airflow
 * Serverless to create, manage, and run data processing workflows without managing
 * the underlying infrastructure, Airflow clusters, metadata databases, or
 * scheduling overhead. The service provides secure multi-tenant run environments
 * with automatic scaling, comprehensive logging, and integration with multiple
 * Amazon Web Services services for orchestrating complex analytics workloads.</p>
 */
class AWS_MWAASERVERLESS_API MWAAServerlessClient : public Aws::Client::AWSJsonClient,
                                                    public Aws::Client::ClientWithAsyncTemplateMethods<MWAAServerlessClient>,
                                                    public MWAAServerlessPaginationBase<MWAAServerlessClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef MWAAServerlessClientConfiguration ClientConfigurationType;
  typedef MWAAServerlessEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MWAAServerlessClient(const Aws::MWAAServerless::MWAAServerlessClientConfiguration& clientConfiguration =
                           Aws::MWAAServerless::MWAAServerlessClientConfiguration(),
                       std::shared_ptr<MWAAServerlessEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MWAAServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<MWAAServerlessEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::MWAAServerless::MWAAServerlessClientConfiguration& clientConfiguration =
                           Aws::MWAAServerless::MWAAServerlessClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MWAAServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<MWAAServerlessEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::MWAAServerless::MWAAServerlessClientConfiguration& clientConfiguration =
                           Aws::MWAAServerless::MWAAServerlessClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MWAAServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MWAAServerlessClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MWAAServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~MWAAServerlessClient();

  /**
   * <p>Creates a new workflow in Amazon Managed Workflows for Apache Airflow
   * Serverless. This operation initializes a workflow with the specified
   * configuration including the workflow definition, execution role, and optional
   * settings for encryption, logging, and networking. You must provide the workflow
   * definition as a YAML file stored in Amazon S3 that defines the DAG structure
   * using supported Amazon Web Services operators. Amazon Managed Workflows for
   * Apache Airflow Serverless automatically creates the first version of the
   * workflow and sets up the necessary execution environment with multi-tenant
   * isolation and security controls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/CreateWorkflow">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;

  /**
   * A Callable wrapper for CreateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
  Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const CreateWorkflowRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::CreateWorkflow, request);
  }

  /**
   * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
  void CreateWorkflowAsync(const CreateWorkflowRequestT& request, const CreateWorkflowResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::CreateWorkflow, request, handler, context);
  }

  /**
   * <p>Deletes a workflow and all its versions. This operation permanently removes
   * the workflow and cannot be undone. Amazon Managed Workflows for Apache Airflow
   * Serverless ensures that all associated resources are properly cleaned up,
   * including stopping any running executions, removing scheduled triggers, and
   * cleaning up execution history. The deletion process respects the multi-tenant
   * isolation boundaries and ensures that no residual data or configurations remain
   * that could affect other customers or workflows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/DeleteWorkflow">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
  Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const DeleteWorkflowRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::DeleteWorkflow, request);
  }

  /**
   * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
  void DeleteWorkflowAsync(const DeleteWorkflowRequestT& request, const DeleteWorkflowResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::DeleteWorkflow, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific task instance within a
   * workflow run. Task instances represent individual tasks that are executed as
   * part of a workflow in the Amazon Managed Workflows for Apache Airflow Serverless
   * environment. Each task instance runs in an isolated ECS container with dedicated
   * resources and security boundaries. The service tracks task execution state,
   * retry attempts, and provides detailed timing and error information for
   * troubleshooting and monitoring purposes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/GetTaskInstance">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTaskInstanceOutcome GetTaskInstance(const Model::GetTaskInstanceRequest& request) const;

  /**
   * A Callable wrapper for GetTaskInstance that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetTaskInstanceRequestT = Model::GetTaskInstanceRequest>
  Model::GetTaskInstanceOutcomeCallable GetTaskInstanceCallable(const GetTaskInstanceRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::GetTaskInstance, request);
  }

  /**
   * An Async wrapper for GetTaskInstance that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetTaskInstanceRequestT = Model::GetTaskInstanceRequest>
  void GetTaskInstanceAsync(const GetTaskInstanceRequestT& request, const GetTaskInstanceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::GetTaskInstance, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a workflow, including its configuration,
   * status, and metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/GetWorkflow">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

  /**
   * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetWorkflowRequestT = Model::GetWorkflowRequest>
  Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const GetWorkflowRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::GetWorkflow, request);
  }

  /**
   * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetWorkflowRequestT = Model::GetWorkflowRequest>
  void GetWorkflowAsync(const GetWorkflowRequestT& request, const GetWorkflowResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::GetWorkflow, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific workflow run, including its
   * status, execution details, and task instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/GetWorkflowRun">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest& request) const;

  /**
   * A Callable wrapper for GetWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetWorkflowRunRequestT = Model::GetWorkflowRunRequest>
  Model::GetWorkflowRunOutcomeCallable GetWorkflowRunCallable(const GetWorkflowRunRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::GetWorkflowRun, request);
  }

  /**
   * An Async wrapper for GetWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetWorkflowRunRequestT = Model::GetWorkflowRunRequest>
  void GetWorkflowRunAsync(const GetWorkflowRunRequestT& request, const GetWorkflowRunResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::GetWorkflowRun, request, handler, context);
  }

  /**
   * <p>Lists all tags that are associated with a specified Amazon Managed Workflows
   * for Apache Airflow Serverless resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Lists all task instances for a specific workflow run, with optional
   * pagination support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/ListTaskInstances">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTaskInstancesOutcome ListTaskInstances(const Model::ListTaskInstancesRequest& request) const;

  /**
   * A Callable wrapper for ListTaskInstances that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTaskInstancesRequestT = Model::ListTaskInstancesRequest>
  Model::ListTaskInstancesOutcomeCallable ListTaskInstancesCallable(const ListTaskInstancesRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::ListTaskInstances, request);
  }

  /**
   * An Async wrapper for ListTaskInstances that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTaskInstancesRequestT = Model::ListTaskInstancesRequest>
  void ListTaskInstancesAsync(const ListTaskInstancesRequestT& request, const ListTaskInstancesResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::ListTaskInstances, request, handler, context);
  }

  /**
   * <p>Lists all runs for a specified workflow, with optional pagination and
   * filtering support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/ListWorkflowRuns">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkflowRunsOutcome ListWorkflowRuns(const Model::ListWorkflowRunsRequest& request) const;

  /**
   * A Callable wrapper for ListWorkflowRuns that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWorkflowRunsRequestT = Model::ListWorkflowRunsRequest>
  Model::ListWorkflowRunsOutcomeCallable ListWorkflowRunsCallable(const ListWorkflowRunsRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::ListWorkflowRuns, request);
  }

  /**
   * An Async wrapper for ListWorkflowRuns that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListWorkflowRunsRequestT = Model::ListWorkflowRunsRequest>
  void ListWorkflowRunsAsync(const ListWorkflowRunsRequestT& request, const ListWorkflowRunsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::ListWorkflowRuns, request, handler, context);
  }

  /**
   * <p>Lists all versions of a specified workflow, with optional pagination
   * support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/ListWorkflowVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkflowVersionsOutcome ListWorkflowVersions(const Model::ListWorkflowVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListWorkflowVersions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWorkflowVersionsRequestT = Model::ListWorkflowVersionsRequest>
  Model::ListWorkflowVersionsOutcomeCallable ListWorkflowVersionsCallable(const ListWorkflowVersionsRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::ListWorkflowVersions, request);
  }

  /**
   * An Async wrapper for ListWorkflowVersions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWorkflowVersionsRequestT = Model::ListWorkflowVersionsRequest>
  void ListWorkflowVersionsAsync(const ListWorkflowVersionsRequestT& request, const ListWorkflowVersionsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::ListWorkflowVersions, request, handler, context);
  }

  /**
   * <p>Lists all workflows in your account, with optional pagination support. This
   * operation returns summary information for workflows, showing only the most
   * recently created version of each workflow. Amazon Managed Workflows for Apache
   * Airflow Serverless maintains workflow metadata in a highly available,
   * distributed storage system that enables efficient querying and filtering. The
   * service implements proper access controls to ensure you can only view workflows
   * that you have permissions to access, supporting both individual and team-based
   * workflow management scenarios.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/ListWorkflows">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
  Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request = {}) const {
    return SubmitCallable(&MWAAServerlessClient::ListWorkflows, request);
  }

  /**
   * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
  void ListWorkflowsAsync(const ListWorkflowsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const ListWorkflowsRequestT& request = {}) const {
    return SubmitAsync(&MWAAServerlessClient::ListWorkflows, request, handler, context);
  }

  /**
   * <p>Starts a new execution of a workflow. This operation creates a workflow run
   * that executes the tasks that are defined in the workflow. Amazon Managed
   * Workflows for Apache Airflow Serverless schedules the workflow execution across
   * its managed Airflow environment, automatically scaling ECS worker tasks based on
   * the workload. The service handles task isolation, dependency resolution, and
   * provides comprehensive monitoring and logging throughout the execution
   * lifecycle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/StartWorkflowRun">AWS
   * API Reference</a></p>
   */
  virtual Model::StartWorkflowRunOutcome StartWorkflowRun(const Model::StartWorkflowRunRequest& request) const;

  /**
   * A Callable wrapper for StartWorkflowRun that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartWorkflowRunRequestT = Model::StartWorkflowRunRequest>
  Model::StartWorkflowRunOutcomeCallable StartWorkflowRunCallable(const StartWorkflowRunRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::StartWorkflowRun, request);
  }

  /**
   * An Async wrapper for StartWorkflowRun that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartWorkflowRunRequestT = Model::StartWorkflowRunRequest>
  void StartWorkflowRunAsync(const StartWorkflowRunRequestT& request, const StartWorkflowRunResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::StartWorkflowRun, request, handler, context);
  }

  /**
   * <p>Stops a running workflow execution. This operation terminates all running
   * tasks and prevents new tasks from starting. Amazon Managed Workflows for Apache
   * Airflow Serverless gracefully shuts down the workflow execution by stopping task
   * scheduling and terminating active ECS worker containers. The operation
   * transitions the workflow run to a <code>STOPPING</code> state and then to
   * <code>STOPPED</code> once all cleanup is complete. In-flight tasks may complete
   * or be terminated depending on their current execution state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/StopWorkflowRun">AWS
   * API Reference</a></p>
   */
  virtual Model::StopWorkflowRunOutcome StopWorkflowRun(const Model::StopWorkflowRunRequest& request) const;

  /**
   * A Callable wrapper for StopWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StopWorkflowRunRequestT = Model::StopWorkflowRunRequest>
  Model::StopWorkflowRunOutcomeCallable StopWorkflowRunCallable(const StopWorkflowRunRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::StopWorkflowRun, request);
  }

  /**
   * An Async wrapper for StopWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StopWorkflowRunRequestT = Model::StopWorkflowRunRequest>
  void StopWorkflowRunAsync(const StopWorkflowRunRequestT& request, const StopWorkflowRunResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::StopWorkflowRun, request, handler, context);
  }

  /**
   * <p>Adds tags to an Amazon Managed Workflows for Apache Airflow Serverless
   * resource. Tags are key-value pairs that help you organize and categorize your
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from an Amazon Managed Workflows for Apache Airflow Serverless
   * resource. This operation removes the specified tags from the
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an existing workflow with new configuration settings. This operation
   * allows you to modify the workflow definition, role, and other settings. When you
   * update a workflow, Amazon Managed Workflows for Apache Airflow Serverless
   * automatically creates a new version with the updated configuration and disables
   * scheduling on all previous versions to ensure only one version is actively
   * scheduled at a time. The update operation maintains workflow history while
   * providing a clean transition to the new configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/UpdateWorkflow">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;

  /**
   * A Callable wrapper for UpdateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateWorkflowRequestT = Model::UpdateWorkflowRequest>
  Model::UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const UpdateWorkflowRequestT& request) const {
    return SubmitCallable(&MWAAServerlessClient::UpdateWorkflow, request);
  }

  /**
   * An Async wrapper for UpdateWorkflow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateWorkflowRequestT = Model::UpdateWorkflowRequest>
  void UpdateWorkflowAsync(const UpdateWorkflowRequestT& request, const UpdateWorkflowResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MWAAServerlessClient::UpdateWorkflow, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<MWAAServerlessEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<MWAAServerlessClient>;
  void init(const MWAAServerlessClientConfiguration& clientConfiguration);

  MWAAServerlessClientConfiguration m_clientConfiguration;
  std::shared_ptr<MWAAServerlessEndpointProviderBase> m_endpointProvider;
};

}  // namespace MWAAServerless
}  // namespace Aws
