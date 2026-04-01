/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/SecurityAgentPaginationBase.h>
#include <aws/securityagent/SecurityAgentServiceClientModel.h>
#include <aws/securityagent/SecurityAgentWaiter.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
/**
 * <p>AWS Security Agent service documentation.</p>
 */
class AWS_SECURITYAGENT_API SecurityAgentClient : public Aws::Client::AWSJsonClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<SecurityAgentClient>,
                                                  public SecurityAgentPaginationBase<SecurityAgentClient>,
                                                  public SecurityAgentWaiter<SecurityAgentClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SecurityAgentClientConfiguration ClientConfigurationType;
  typedef SecurityAgentEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SecurityAgentClient(const Aws::SecurityAgent::SecurityAgentClientConfiguration& clientConfiguration =
                          Aws::SecurityAgent::SecurityAgentClientConfiguration(),
                      std::shared_ptr<SecurityAgentEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SecurityAgentClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<SecurityAgentEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::SecurityAgent::SecurityAgentClientConfiguration& clientConfiguration =
                          Aws::SecurityAgent::SecurityAgentClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SecurityAgentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<SecurityAgentEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::SecurityAgent::SecurityAgentClientConfiguration& clientConfiguration =
                          Aws::SecurityAgent::SecurityAgentClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SecurityAgentClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SecurityAgentClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SecurityAgentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SecurityAgentClient();

  /**
   * <p>Adds an Artifact for the given agent space</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/AddArtifact">AWS
   * API Reference</a></p>
   */
  virtual Model::AddArtifactOutcome AddArtifact(const Model::AddArtifactRequest& request) const;

  /**
   * A Callable wrapper for AddArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename AddArtifactRequestT = Model::AddArtifactRequest>
  Model::AddArtifactOutcomeCallable AddArtifactCallable(const AddArtifactRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::AddArtifact, request);
  }

  /**
   * An Async wrapper for AddArtifact that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename AddArtifactRequestT = Model::AddArtifactRequest>
  void AddArtifactAsync(const AddArtifactRequestT& request, const AddArtifactResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::AddArtifact, request, handler, context);
  }

  /**
   * <p>Deletes multiple pentests in a single request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchDeletePentests">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDeletePentestsOutcome BatchDeletePentests(const Model::BatchDeletePentestsRequest& request) const;

  /**
   * A Callable wrapper for BatchDeletePentests that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchDeletePentestsRequestT = Model::BatchDeletePentestsRequest>
  Model::BatchDeletePentestsOutcomeCallable BatchDeletePentestsCallable(const BatchDeletePentestsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchDeletePentests, request);
  }

  /**
   * An Async wrapper for BatchDeletePentests that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename BatchDeletePentestsRequestT = Model::BatchDeletePentestsRequest>
  void BatchDeletePentestsAsync(const BatchDeletePentestsRequestT& request, const BatchDeletePentestsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchDeletePentests, request, handler, context);
  }

  /**
   * <p>Retrieves multiple agent spaces in a single request</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetAgentSpaces">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetAgentSpacesOutcome BatchGetAgentSpaces(const Model::BatchGetAgentSpacesRequest& request) const;

  /**
   * A Callable wrapper for BatchGetAgentSpaces that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetAgentSpacesRequestT = Model::BatchGetAgentSpacesRequest>
  Model::BatchGetAgentSpacesOutcomeCallable BatchGetAgentSpacesCallable(const BatchGetAgentSpacesRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetAgentSpaces, request);
  }

  /**
   * An Async wrapper for BatchGetAgentSpaces that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename BatchGetAgentSpacesRequestT = Model::BatchGetAgentSpacesRequest>
  void BatchGetAgentSpacesAsync(const BatchGetAgentSpacesRequestT& request, const BatchGetAgentSpacesResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetAgentSpaces, request, handler, context);
  }

  /**
   * <p>Retrieve the list of artifact metadata for the given agent
   * space</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetArtifactMetadata">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetArtifactMetadataOutcome BatchGetArtifactMetadata(const Model::BatchGetArtifactMetadataRequest& request) const;

  /**
   * A Callable wrapper for BatchGetArtifactMetadata that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetArtifactMetadataRequestT = Model::BatchGetArtifactMetadataRequest>
  Model::BatchGetArtifactMetadataOutcomeCallable BatchGetArtifactMetadataCallable(const BatchGetArtifactMetadataRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetArtifactMetadata, request);
  }

  /**
   * An Async wrapper for BatchGetArtifactMetadata that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetArtifactMetadataRequestT = Model::BatchGetArtifactMetadataRequest>
  void BatchGetArtifactMetadataAsync(const BatchGetArtifactMetadataRequestT& request,
                                     const BatchGetArtifactMetadataResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetArtifactMetadata, request, handler, context);
  }

  /**
   * <p>Retrieves multiple findings in a single request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetFindings">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetFindingsOutcome BatchGetFindings(const Model::BatchGetFindingsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetFindings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetFindingsRequestT = Model::BatchGetFindingsRequest>
  Model::BatchGetFindingsOutcomeCallable BatchGetFindingsCallable(const BatchGetFindingsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetFindings, request);
  }

  /**
   * An Async wrapper for BatchGetFindings that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename BatchGetFindingsRequestT = Model::BatchGetFindingsRequest>
  void BatchGetFindingsAsync(const BatchGetFindingsRequestT& request, const BatchGetFindingsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetFindings, request, handler, context);
  }

  /**
   * <p>Retrieves multiple tasks for a pentest job in a single request</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetPentestJobTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetPentestJobTasksOutcome BatchGetPentestJobTasks(const Model::BatchGetPentestJobTasksRequest& request) const;

  /**
   * A Callable wrapper for BatchGetPentestJobTasks that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetPentestJobTasksRequestT = Model::BatchGetPentestJobTasksRequest>
  Model::BatchGetPentestJobTasksOutcomeCallable BatchGetPentestJobTasksCallable(const BatchGetPentestJobTasksRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetPentestJobTasks, request);
  }

  /**
   * An Async wrapper for BatchGetPentestJobTasks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetPentestJobTasksRequestT = Model::BatchGetPentestJobTasksRequest>
  void BatchGetPentestJobTasksAsync(const BatchGetPentestJobTasksRequestT& request,
                                    const BatchGetPentestJobTasksResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetPentestJobTasks, request, handler, context);
  }

  /**
   * <p>Retrieves multiple pentest jobs in a single request</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetPentestJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetPentestJobsOutcome BatchGetPentestJobs(const Model::BatchGetPentestJobsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetPentestJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetPentestJobsRequestT = Model::BatchGetPentestJobsRequest>
  Model::BatchGetPentestJobsOutcomeCallable BatchGetPentestJobsCallable(const BatchGetPentestJobsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetPentestJobs, request);
  }

  /**
   * An Async wrapper for BatchGetPentestJobs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename BatchGetPentestJobsRequestT = Model::BatchGetPentestJobsRequest>
  void BatchGetPentestJobsAsync(const BatchGetPentestJobsRequestT& request, const BatchGetPentestJobsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetPentestJobs, request, handler, context);
  }

  /**
   * <p>Retrieves multiple pentests in a single request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetPentests">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetPentestsOutcome BatchGetPentests(const Model::BatchGetPentestsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetPentests that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetPentestsRequestT = Model::BatchGetPentestsRequest>
  Model::BatchGetPentestsOutcomeCallable BatchGetPentestsCallable(const BatchGetPentestsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetPentests, request);
  }

  /**
   * An Async wrapper for BatchGetPentests that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename BatchGetPentestsRequestT = Model::BatchGetPentestsRequest>
  void BatchGetPentestsAsync(const BatchGetPentestsRequestT& request, const BatchGetPentestsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetPentests, request, handler, context);
  }

  /**
   * <p>Retrieves multiple target domains in a single request</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetTargetDomains">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetTargetDomainsOutcome BatchGetTargetDomains(const Model::BatchGetTargetDomainsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetTargetDomains that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetTargetDomainsRequestT = Model::BatchGetTargetDomainsRequest>
  Model::BatchGetTargetDomainsOutcomeCallable BatchGetTargetDomainsCallable(const BatchGetTargetDomainsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetTargetDomains, request);
  }

  /**
   * An Async wrapper for BatchGetTargetDomains that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetTargetDomainsRequestT = Model::BatchGetTargetDomainsRequest>
  void BatchGetTargetDomainsAsync(const BatchGetTargetDomainsRequestT& request, const BatchGetTargetDomainsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetTargetDomains, request, handler, context);
  }

  /**
   * <p>Creates an agent space record</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateAgentSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAgentSpaceOutcome CreateAgentSpace(const Model::CreateAgentSpaceRequest& request) const;

  /**
   * A Callable wrapper for CreateAgentSpace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAgentSpaceRequestT = Model::CreateAgentSpaceRequest>
  Model::CreateAgentSpaceOutcomeCallable CreateAgentSpaceCallable(const CreateAgentSpaceRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreateAgentSpace, request);
  }

  /**
   * An Async wrapper for CreateAgentSpace that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAgentSpaceRequestT = Model::CreateAgentSpaceRequest>
  void CreateAgentSpaceAsync(const CreateAgentSpaceRequestT& request, const CreateAgentSpaceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreateAgentSpace, request, handler, context);
  }

  /**
   * <p>Creates a new application</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request = {}) const;

  /**
   * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateApplicationRequestT = Model::CreateApplicationRequest>
  Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request = {}) const {
    return SubmitCallable(&SecurityAgentClient::CreateApplication, request);
  }

  /**
   * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateApplicationRequestT = Model::CreateApplicationRequest>
  void CreateApplicationAsync(const CreateApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const CreateApplicationRequestT& request = {}) const {
    return SubmitAsync(&SecurityAgentClient::CreateApplication, request, handler, context);
  }

  /**
   * <p>Creates the Integration of the Security Agent App with an external
   * Provider</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateIntegrationOutcome CreateIntegration(const Model::CreateIntegrationRequest& request) const;

  /**
   * A Callable wrapper for CreateIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
  Model::CreateIntegrationOutcomeCallable CreateIntegrationCallable(const CreateIntegrationRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreateIntegration, request);
  }

  /**
   * An Async wrapper for CreateIntegration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
  void CreateIntegrationAsync(const CreateIntegrationRequestT& request, const CreateIntegrationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreateIntegration, request, handler, context);
  }

  /**
   * <p>Adds a single member to an agent space with specified role</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateMembership">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMembershipOutcome CreateMembership(const Model::CreateMembershipRequest& request) const;

  /**
   * A Callable wrapper for CreateMembership that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateMembershipRequestT = Model::CreateMembershipRequest>
  Model::CreateMembershipOutcomeCallable CreateMembershipCallable(const CreateMembershipRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreateMembership, request);
  }

  /**
   * An Async wrapper for CreateMembership that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateMembershipRequestT = Model::CreateMembershipRequest>
  void CreateMembershipAsync(const CreateMembershipRequestT& request, const CreateMembershipResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreateMembership, request, handler, context);
  }

  /**
   * <p>Creates a new pentest configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreatePentest">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePentestOutcome CreatePentest(const Model::CreatePentestRequest& request) const;

  /**
   * A Callable wrapper for CreatePentest that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePentestRequestT = Model::CreatePentestRequest>
  Model::CreatePentestOutcomeCallable CreatePentestCallable(const CreatePentestRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreatePentest, request);
  }

  /**
   * An Async wrapper for CreatePentest that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePentestRequestT = Model::CreatePentestRequest>
  void CreatePentestAsync(const CreatePentestRequestT& request, const CreatePentestResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreatePentest, request, handler, context);
  }

  /**
   * <p>Creates a target domain record</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateTargetDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTargetDomainOutcome CreateTargetDomain(const Model::CreateTargetDomainRequest& request) const;

  /**
   * A Callable wrapper for CreateTargetDomain that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateTargetDomainRequestT = Model::CreateTargetDomainRequest>
  Model::CreateTargetDomainOutcomeCallable CreateTargetDomainCallable(const CreateTargetDomainRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreateTargetDomain, request);
  }

  /**
   * An Async wrapper for CreateTargetDomain that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateTargetDomainRequestT = Model::CreateTargetDomainRequest>
  void CreateTargetDomainAsync(const CreateTargetDomainRequestT& request, const CreateTargetDomainResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreateTargetDomain, request, handler, context);
  }

  /**
   * <p>Deletes an agent space record</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeleteAgentSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAgentSpaceOutcome DeleteAgentSpace(const Model::DeleteAgentSpaceRequest& request) const;

  /**
   * A Callable wrapper for DeleteAgentSpace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAgentSpaceRequestT = Model::DeleteAgentSpaceRequest>
  Model::DeleteAgentSpaceOutcomeCallable DeleteAgentSpaceCallable(const DeleteAgentSpaceRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DeleteAgentSpace, request);
  }

  /**
   * An Async wrapper for DeleteAgentSpace that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAgentSpaceRequestT = Model::DeleteAgentSpaceRequest>
  void DeleteAgentSpaceAsync(const DeleteAgentSpaceRequestT& request, const DeleteAgentSpaceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DeleteAgentSpace, request, handler, context);
  }

  /**
   * <p>Deletes an application</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeleteApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

  /**
   * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
  Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DeleteApplication, request);
  }

  /**
   * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
  void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DeleteApplication, request, handler, context);
  }

  /**
   * <p>Delete an Artifact from the given agent space</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeleteArtifact">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteArtifactOutcome DeleteArtifact(const Model::DeleteArtifactRequest& request) const;

  /**
   * A Callable wrapper for DeleteArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteArtifactRequestT = Model::DeleteArtifactRequest>
  Model::DeleteArtifactOutcomeCallable DeleteArtifactCallable(const DeleteArtifactRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DeleteArtifact, request);
  }

  /**
   * An Async wrapper for DeleteArtifact that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteArtifactRequestT = Model::DeleteArtifactRequest>
  void DeleteArtifactAsync(const DeleteArtifactRequestT& request, const DeleteArtifactResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DeleteArtifact, request, handler, context);
  }

  /**
   * <p>Deletes the Integration of the Security Agent App with an external
   * Provider</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeleteIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

  /**
   * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
  Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const DeleteIntegrationRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DeleteIntegration, request);
  }

  /**
   * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
  void DeleteIntegrationAsync(const DeleteIntegrationRequestT& request, const DeleteIntegrationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DeleteIntegration, request, handler, context);
  }

  /**
   * <p>Removes a single member associated to an agent space</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeleteMembership">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteMembershipOutcome DeleteMembership(const Model::DeleteMembershipRequest& request) const;

  /**
   * A Callable wrapper for DeleteMembership that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteMembershipRequestT = Model::DeleteMembershipRequest>
  Model::DeleteMembershipOutcomeCallable DeleteMembershipCallable(const DeleteMembershipRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DeleteMembership, request);
  }

  /**
   * An Async wrapper for DeleteMembership that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteMembershipRequestT = Model::DeleteMembershipRequest>
  void DeleteMembershipAsync(const DeleteMembershipRequestT& request, const DeleteMembershipResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DeleteMembership, request, handler, context);
  }

  /**
   * <p>Deletes a target domain record</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeleteTargetDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTargetDomainOutcome DeleteTargetDomain(const Model::DeleteTargetDomainRequest& request) const;

  /**
   * A Callable wrapper for DeleteTargetDomain that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteTargetDomainRequestT = Model::DeleteTargetDomainRequest>
  Model::DeleteTargetDomainOutcomeCallable DeleteTargetDomainCallable(const DeleteTargetDomainRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DeleteTargetDomain, request);
  }

  /**
   * An Async wrapper for DeleteTargetDomain that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteTargetDomainRequestT = Model::DeleteTargetDomainRequest>
  void DeleteTargetDomainAsync(const DeleteTargetDomainRequestT& request, const DeleteTargetDomainResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DeleteTargetDomain, request, handler, context);
  }

  /**
   * <p>Retrieves application details by application ID</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GetApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

  /**
   * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetApplicationRequestT = Model::GetApplicationRequest>
  Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::GetApplication, request);
  }

  /**
   * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetApplicationRequestT = Model::GetApplicationRequest>
  void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::GetApplication, request, handler, context);
  }

  /**
   * <p>Retrieve an Artifact for the given agent space</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GetArtifact">AWS
   * API Reference</a></p>
   */
  virtual Model::GetArtifactOutcome GetArtifact(const Model::GetArtifactRequest& request) const;

  /**
   * A Callable wrapper for GetArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetArtifactRequestT = Model::GetArtifactRequest>
  Model::GetArtifactOutcomeCallable GetArtifactCallable(const GetArtifactRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::GetArtifact, request);
  }

  /**
   * An Async wrapper for GetArtifact that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetArtifactRequestT = Model::GetArtifactRequest>
  void GetArtifactAsync(const GetArtifactRequestT& request, const GetArtifactResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::GetArtifact, request, handler, context);
  }

  /**
   * <p>Gets Integration metadata from the provided id</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GetIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

  /**
   * A Callable wrapper for GetIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetIntegrationRequestT = Model::GetIntegrationRequest>
  Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const GetIntegrationRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::GetIntegration, request);
  }

  /**
   * An Async wrapper for GetIntegration that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetIntegrationRequestT = Model::GetIntegrationRequest>
  void GetIntegrationAsync(const GetIntegrationRequestT& request, const GetIntegrationResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::GetIntegration, request, handler, context);
  }

  /**
   * <p>Initiates the registration of Security Agent App for an external
   * Provider</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/InitiateProviderRegistration">AWS
   * API Reference</a></p>
   */
  virtual Model::InitiateProviderRegistrationOutcome InitiateProviderRegistration(
      const Model::InitiateProviderRegistrationRequest& request) const;

  /**
   * A Callable wrapper for InitiateProviderRegistration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename InitiateProviderRegistrationRequestT = Model::InitiateProviderRegistrationRequest>
  Model::InitiateProviderRegistrationOutcomeCallable InitiateProviderRegistrationCallable(
      const InitiateProviderRegistrationRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::InitiateProviderRegistration, request);
  }

  /**
   * An Async wrapper for InitiateProviderRegistration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InitiateProviderRegistrationRequestT = Model::InitiateProviderRegistrationRequest>
  void InitiateProviderRegistrationAsync(const InitiateProviderRegistrationRequestT& request,
                                         const InitiateProviderRegistrationResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::InitiateProviderRegistration, request, handler, context);
  }

  /**
   * <p>Lists agent spaces</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListAgentSpaces">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAgentSpacesOutcome ListAgentSpaces(const Model::ListAgentSpacesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAgentSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListAgentSpacesRequestT = Model::ListAgentSpacesRequest>
  Model::ListAgentSpacesOutcomeCallable ListAgentSpacesCallable(const ListAgentSpacesRequestT& request = {}) const {
    return SubmitCallable(&SecurityAgentClient::ListAgentSpaces, request);
  }

  /**
   * An Async wrapper for ListAgentSpaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListAgentSpacesRequestT = Model::ListAgentSpacesRequest>
  void ListAgentSpacesAsync(const ListAgentSpacesResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListAgentSpacesRequestT& request = {}) const {
    return SubmitAsync(&SecurityAgentClient::ListAgentSpaces, request, handler, context);
  }

  /**
   * <p>Lists all applications in the account</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListApplications">AWS
   * API Reference</a></p>
   */
  virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListApplicationsRequestT = Model::ListApplicationsRequest>
  Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request = {}) const {
    return SubmitCallable(&SecurityAgentClient::ListApplications, request);
  }

  /**
   * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListApplicationsRequestT = Model::ListApplicationsRequest>
  void ListApplicationsAsync(const ListApplicationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListApplicationsRequestT& request = {}) const {
    return SubmitAsync(&SecurityAgentClient::ListApplications, request, handler, context);
  }

  /**
   * <p>Lists the artifacts for the associated agent space</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListArtifacts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

  /**
   * A Callable wrapper for ListArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListArtifactsRequestT = Model::ListArtifactsRequest>
  Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const ListArtifactsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListArtifacts, request);
  }

  /**
   * An Async wrapper for ListArtifacts that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListArtifactsRequestT = Model::ListArtifactsRequest>
  void ListArtifactsAsync(const ListArtifactsRequestT& request, const ListArtifactsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListArtifacts, request, handler, context);
  }

  /**
   * <p>Lists discovered endpoints associated with a pentest job with optional URI
   * prefix filtering</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListDiscoveredEndpoints">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDiscoveredEndpointsOutcome ListDiscoveredEndpoints(const Model::ListDiscoveredEndpointsRequest& request) const;

  /**
   * A Callable wrapper for ListDiscoveredEndpoints that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDiscoveredEndpointsRequestT = Model::ListDiscoveredEndpointsRequest>
  Model::ListDiscoveredEndpointsOutcomeCallable ListDiscoveredEndpointsCallable(const ListDiscoveredEndpointsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListDiscoveredEndpoints, request);
  }

  /**
   * An Async wrapper for ListDiscoveredEndpoints that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListDiscoveredEndpointsRequestT = Model::ListDiscoveredEndpointsRequest>
  void ListDiscoveredEndpointsAsync(const ListDiscoveredEndpointsRequestT& request,
                                    const ListDiscoveredEndpointsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListDiscoveredEndpoints, request, handler, context);
  }

  /**
   * <p>Lists findings with filtering and pagination support. When filters are
   * applied, the actual number of results returned may be less than the specified
   * limit</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListFindings">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

  /**
   * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListFindingsRequestT = Model::ListFindingsRequest>
  Model::ListFindingsOutcomeCallable ListFindingsCallable(const ListFindingsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListFindings, request);
  }

  /**
   * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListFindingsRequestT = Model::ListFindingsRequest>
  void ListFindingsAsync(const ListFindingsRequestT& request, const ListFindingsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListFindings, request, handler, context);
  }

  /**
   * <p>Lists the integrated resources for an agent space</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListIntegratedResources">AWS
   * API Reference</a></p>
   */
  virtual Model::ListIntegratedResourcesOutcome ListIntegratedResources(const Model::ListIntegratedResourcesRequest& request) const;

  /**
   * A Callable wrapper for ListIntegratedResources that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListIntegratedResourcesRequestT = Model::ListIntegratedResourcesRequest>
  Model::ListIntegratedResourcesOutcomeCallable ListIntegratedResourcesCallable(const ListIntegratedResourcesRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListIntegratedResources, request);
  }

  /**
   * An Async wrapper for ListIntegratedResources that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListIntegratedResourcesRequestT = Model::ListIntegratedResourcesRequest>
  void ListIntegratedResourcesAsync(const ListIntegratedResourcesRequestT& request,
                                    const ListIntegratedResourcesResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListIntegratedResources, request, handler, context);
  }

  /**
   * <p>Retrieves the Integrations associated with the user's account</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListIntegrations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListIntegrationsOutcome ListIntegrations(const Model::ListIntegrationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListIntegrations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListIntegrationsRequestT = Model::ListIntegrationsRequest>
  Model::ListIntegrationsOutcomeCallable ListIntegrationsCallable(const ListIntegrationsRequestT& request = {}) const {
    return SubmitCallable(&SecurityAgentClient::ListIntegrations, request);
  }

  /**
   * An Async wrapper for ListIntegrations that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListIntegrationsRequestT = Model::ListIntegrationsRequest>
  void ListIntegrationsAsync(const ListIntegrationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListIntegrationsRequestT& request = {}) const {
    return SubmitAsync(&SecurityAgentClient::ListIntegrations, request, handler, context);
  }

  /**
   * <p>Lists all members associated to an agent space with pagination
   * support</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListMemberships">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMembershipsOutcome ListMemberships(const Model::ListMembershipsRequest& request) const;

  /**
   * A Callable wrapper for ListMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListMembershipsRequestT = Model::ListMembershipsRequest>
  Model::ListMembershipsOutcomeCallable ListMembershipsCallable(const ListMembershipsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListMemberships, request);
  }

  /**
   * An Async wrapper for ListMemberships that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListMembershipsRequestT = Model::ListMembershipsRequest>
  void ListMembershipsAsync(const ListMembershipsRequestT& request, const ListMembershipsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListMemberships, request, handler, context);
  }

  /**
   * <p>Lists tasks associated with a specific pentest job</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListPentestJobTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPentestJobTasksOutcome ListPentestJobTasks(const Model::ListPentestJobTasksRequest& request) const;

  /**
   * A Callable wrapper for ListPentestJobTasks that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPentestJobTasksRequestT = Model::ListPentestJobTasksRequest>
  Model::ListPentestJobTasksOutcomeCallable ListPentestJobTasksCallable(const ListPentestJobTasksRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListPentestJobTasks, request);
  }

  /**
   * An Async wrapper for ListPentestJobTasks that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListPentestJobTasksRequestT = Model::ListPentestJobTasksRequest>
  void ListPentestJobTasksAsync(const ListPentestJobTasksRequestT& request, const ListPentestJobTasksResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListPentestJobTasks, request, handler, context);
  }

  /**
   * <p>Lists pentest jobs associated with a pentest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListPentestJobsForPentest">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPentestJobsForPentestOutcome ListPentestJobsForPentest(const Model::ListPentestJobsForPentestRequest& request) const;

  /**
   * A Callable wrapper for ListPentestJobsForPentest that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPentestJobsForPentestRequestT = Model::ListPentestJobsForPentestRequest>
  Model::ListPentestJobsForPentestOutcomeCallable ListPentestJobsForPentestCallable(
      const ListPentestJobsForPentestRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListPentestJobsForPentest, request);
  }

  /**
   * An Async wrapper for ListPentestJobsForPentest that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPentestJobsForPentestRequestT = Model::ListPentestJobsForPentestRequest>
  void ListPentestJobsForPentestAsync(const ListPentestJobsForPentestRequestT& request,
                                      const ListPentestJobsForPentestResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListPentestJobsForPentest, request, handler, context);
  }

  /**
   * <p>Lists pentests with optional filtering by status</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListPentests">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPentestsOutcome ListPentests(const Model::ListPentestsRequest& request) const;

  /**
   * A Callable wrapper for ListPentests that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPentestsRequestT = Model::ListPentestsRequest>
  Model::ListPentestsOutcomeCallable ListPentestsCallable(const ListPentestsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListPentests, request);
  }

  /**
   * An Async wrapper for ListPentests that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPentestsRequestT = Model::ListPentestsRequest>
  void ListPentestsAsync(const ListPentestsRequestT& request, const ListPentestsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListPentests, request, handler, context);
  }

  /**
   * <p>Lists tags for a Security Agent resource</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Lists target domains</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListTargetDomains">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTargetDomainsOutcome ListTargetDomains(const Model::ListTargetDomainsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListTargetDomains that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTargetDomainsRequestT = Model::ListTargetDomainsRequest>
  Model::ListTargetDomainsOutcomeCallable ListTargetDomainsCallable(const ListTargetDomainsRequestT& request = {}) const {
    return SubmitCallable(&SecurityAgentClient::ListTargetDomains, request);
  }

  /**
   * An Async wrapper for ListTargetDomains that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTargetDomainsRequestT = Model::ListTargetDomainsRequest>
  void ListTargetDomainsAsync(const ListTargetDomainsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListTargetDomainsRequestT& request = {}) const {
    return SubmitAsync(&SecurityAgentClient::ListTargetDomains, request, handler, context);
  }

  /**
   * <p>Starts code remediation for the specified findings</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StartCodeRemediation">AWS
   * API Reference</a></p>
   */
  virtual Model::StartCodeRemediationOutcome StartCodeRemediation(const Model::StartCodeRemediationRequest& request) const;

  /**
   * A Callable wrapper for StartCodeRemediation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartCodeRemediationRequestT = Model::StartCodeRemediationRequest>
  Model::StartCodeRemediationOutcomeCallable StartCodeRemediationCallable(const StartCodeRemediationRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::StartCodeRemediation, request);
  }

  /**
   * An Async wrapper for StartCodeRemediation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartCodeRemediationRequestT = Model::StartCodeRemediationRequest>
  void StartCodeRemediationAsync(const StartCodeRemediationRequestT& request, const StartCodeRemediationResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::StartCodeRemediation, request, handler, context);
  }

  /**
   * <p>Initiates the execution of a pentest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StartPentestJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartPentestJobOutcome StartPentestJob(const Model::StartPentestJobRequest& request) const;

  /**
   * A Callable wrapper for StartPentestJob that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartPentestJobRequestT = Model::StartPentestJobRequest>
  Model::StartPentestJobOutcomeCallable StartPentestJobCallable(const StartPentestJobRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::StartPentestJob, request);
  }

  /**
   * An Async wrapper for StartPentestJob that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartPentestJobRequestT = Model::StartPentestJobRequest>
  void StartPentestJobAsync(const StartPentestJobRequestT& request, const StartPentestJobResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::StartPentestJob, request, handler, context);
  }

  /**
   * <p>Stops the execution of a running pentest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StopPentestJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StopPentestJobOutcome StopPentestJob(const Model::StopPentestJobRequest& request) const;

  /**
   * A Callable wrapper for StopPentestJob that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StopPentestJobRequestT = Model::StopPentestJobRequest>
  Model::StopPentestJobOutcomeCallable StopPentestJobCallable(const StopPentestJobRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::StopPentestJob, request);
  }

  /**
   * An Async wrapper for StopPentestJob that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StopPentestJobRequestT = Model::StopPentestJobRequest>
  void StopPentestJobAsync(const StopPentestJobRequestT& request, const StopPentestJobResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::StopPentestJob, request, handler, context);
  }

  /**
   * <p>Adds tags to a Security Agent resource</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from a Security Agent resource</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an agent space record</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateAgentSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAgentSpaceOutcome UpdateAgentSpace(const Model::UpdateAgentSpaceRequest& request) const;

  /**
   * A Callable wrapper for UpdateAgentSpace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAgentSpaceRequestT = Model::UpdateAgentSpaceRequest>
  Model::UpdateAgentSpaceOutcomeCallable UpdateAgentSpaceCallable(const UpdateAgentSpaceRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateAgentSpace, request);
  }

  /**
   * An Async wrapper for UpdateAgentSpace that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAgentSpaceRequestT = Model::UpdateAgentSpaceRequest>
  void UpdateAgentSpaceAsync(const UpdateAgentSpaceRequestT& request, const UpdateAgentSpaceResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateAgentSpace, request, handler, context);
  }

  /**
   * <p>Updates application configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

  /**
   * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
  Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateApplication, request);
  }

  /**
   * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
  void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateApplication, request, handler, context);
  }

  /**
   * <p>Updates an existing security finding with new details or status</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateFinding">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFindingOutcome UpdateFinding(const Model::UpdateFindingRequest& request) const;

  /**
   * A Callable wrapper for UpdateFinding that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateFindingRequestT = Model::UpdateFindingRequest>
  Model::UpdateFindingOutcomeCallable UpdateFindingCallable(const UpdateFindingRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateFinding, request);
  }

  /**
   * An Async wrapper for UpdateFinding that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateFindingRequestT = Model::UpdateFindingRequest>
  void UpdateFindingAsync(const UpdateFindingRequestT& request, const UpdateFindingResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateFinding, request, handler, context);
  }

  /**
   * <p>Updates the integrated resources for an agent space</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateIntegratedResources">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateIntegratedResourcesOutcome UpdateIntegratedResources(const Model::UpdateIntegratedResourcesRequest& request) const;

  /**
   * A Callable wrapper for UpdateIntegratedResources that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateIntegratedResourcesRequestT = Model::UpdateIntegratedResourcesRequest>
  Model::UpdateIntegratedResourcesOutcomeCallable UpdateIntegratedResourcesCallable(
      const UpdateIntegratedResourcesRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateIntegratedResources, request);
  }

  /**
   * An Async wrapper for UpdateIntegratedResources that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateIntegratedResourcesRequestT = Model::UpdateIntegratedResourcesRequest>
  void UpdateIntegratedResourcesAsync(const UpdateIntegratedResourcesRequestT& request,
                                      const UpdateIntegratedResourcesResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateIntegratedResources, request, handler, context);
  }

  /**
   * <p>Updates an existing pentest with new configuration or settings</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdatePentest">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePentestOutcome UpdatePentest(const Model::UpdatePentestRequest& request) const;

  /**
   * A Callable wrapper for UpdatePentest that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdatePentestRequestT = Model::UpdatePentestRequest>
  Model::UpdatePentestOutcomeCallable UpdatePentestCallable(const UpdatePentestRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdatePentest, request);
  }

  /**
   * An Async wrapper for UpdatePentest that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdatePentestRequestT = Model::UpdatePentestRequest>
  void UpdatePentestAsync(const UpdatePentestRequestT& request, const UpdatePentestResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdatePentest, request, handler, context);
  }

  /**
   * <p>Updates a target domain record</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateTargetDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateTargetDomainOutcome UpdateTargetDomain(const Model::UpdateTargetDomainRequest& request) const;

  /**
   * A Callable wrapper for UpdateTargetDomain that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateTargetDomainRequestT = Model::UpdateTargetDomainRequest>
  Model::UpdateTargetDomainOutcomeCallable UpdateTargetDomainCallable(const UpdateTargetDomainRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateTargetDomain, request);
  }

  /**
   * An Async wrapper for UpdateTargetDomain that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateTargetDomainRequestT = Model::UpdateTargetDomainRequest>
  void UpdateTargetDomainAsync(const UpdateTargetDomainRequestT& request, const UpdateTargetDomainResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateTargetDomain, request, handler, context);
  }

  /**
   * <p>Verifies ownership for a registered target domain</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/VerifyTargetDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::VerifyTargetDomainOutcome VerifyTargetDomain(const Model::VerifyTargetDomainRequest& request) const;

  /**
   * A Callable wrapper for VerifyTargetDomain that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename VerifyTargetDomainRequestT = Model::VerifyTargetDomainRequest>
  Model::VerifyTargetDomainOutcomeCallable VerifyTargetDomainCallable(const VerifyTargetDomainRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::VerifyTargetDomain, request);
  }

  /**
   * An Async wrapper for VerifyTargetDomain that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename VerifyTargetDomainRequestT = Model::VerifyTargetDomainRequest>
  void VerifyTargetDomainAsync(const VerifyTargetDomainRequestT& request, const VerifyTargetDomainResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::VerifyTargetDomain, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SecurityAgentEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SecurityAgentClient>;
  void init(const SecurityAgentClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SecurityAgentError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SecurityAgentClientConfiguration m_clientConfiguration;
  std::shared_ptr<SecurityAgentEndpointProviderBase> m_endpointProvider;
};

}  // namespace SecurityAgent
}  // namespace Aws
