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
 * <p>AWS Security Agent is a frontier agent that proactively secures your
 * applications throughout the development lifecycle. It conducts automated
 * security reviews tailored to your organizational requirements and delivers
 * context-aware penetration testing on demand. By continuously validating security
 * from design to deployment, AWS Security Agent helps prevent vulnerabilities
 * early across all your environments. Key capabilities include design security
 * review for architecture documents, code security review for pull requests in
 * connected repositories, and on-demand penetration testing that discovers,
 * validates, and remediates security vulnerabilities through tailored multi-step
 * attack scenarios. For more information, see the <a
 * href="https://docs.aws.amazon.com/securityagent/latest/userguide/what-is.html">AWS
 * Security Agent User Guide</a>.</p>
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
   * <p>Uploads an artifact to an agent space. Artifacts provide additional context
   * for security testing, such as architecture diagrams, API specifications, or
   * configuration files.</p><p><h3>See Also:</h3>   <a
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
   * <p>Batch creates security requirements in a customer managed pack.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchCreateSecurityRequirements">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchCreateSecurityRequirementsOutcome BatchCreateSecurityRequirements(
      const Model::BatchCreateSecurityRequirementsRequest& request) const;

  /**
   * A Callable wrapper for BatchCreateSecurityRequirements that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchCreateSecurityRequirementsRequestT = Model::BatchCreateSecurityRequirementsRequest>
  Model::BatchCreateSecurityRequirementsOutcomeCallable BatchCreateSecurityRequirementsCallable(
      const BatchCreateSecurityRequirementsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchCreateSecurityRequirements, request);
  }

  /**
   * An Async wrapper for BatchCreateSecurityRequirements that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchCreateSecurityRequirementsRequestT = Model::BatchCreateSecurityRequirementsRequest>
  void BatchCreateSecurityRequirementsAsync(const BatchCreateSecurityRequirementsRequestT& request,
                                            const BatchCreateSecurityRequirementsResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchCreateSecurityRequirements, request, handler, context);
  }

  /**
   * <p>Deletes one or more code reviews from an agent space.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchDeleteCodeReviews">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDeleteCodeReviewsOutcome BatchDeleteCodeReviews(const Model::BatchDeleteCodeReviewsRequest& request) const;

  /**
   * A Callable wrapper for BatchDeleteCodeReviews that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchDeleteCodeReviewsRequestT = Model::BatchDeleteCodeReviewsRequest>
  Model::BatchDeleteCodeReviewsOutcomeCallable BatchDeleteCodeReviewsCallable(const BatchDeleteCodeReviewsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchDeleteCodeReviews, request);
  }

  /**
   * An Async wrapper for BatchDeleteCodeReviews that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchDeleteCodeReviewsRequestT = Model::BatchDeleteCodeReviewsRequest>
  void BatchDeleteCodeReviewsAsync(const BatchDeleteCodeReviewsRequestT& request,
                                   const BatchDeleteCodeReviewsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchDeleteCodeReviews, request, handler, context);
  }

  /**
   * <p>Deletes one or more pentests from an agent space.</p><p><h3>See Also:</h3>
   * <a
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
   * <p>Batch deletes security requirements from a customer managed
   * pack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchDeleteSecurityRequirements">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDeleteSecurityRequirementsOutcome BatchDeleteSecurityRequirements(
      const Model::BatchDeleteSecurityRequirementsRequest& request) const;

  /**
   * A Callable wrapper for BatchDeleteSecurityRequirements that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchDeleteSecurityRequirementsRequestT = Model::BatchDeleteSecurityRequirementsRequest>
  Model::BatchDeleteSecurityRequirementsOutcomeCallable BatchDeleteSecurityRequirementsCallable(
      const BatchDeleteSecurityRequirementsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchDeleteSecurityRequirements, request);
  }

  /**
   * An Async wrapper for BatchDeleteSecurityRequirements that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchDeleteSecurityRequirementsRequestT = Model::BatchDeleteSecurityRequirementsRequest>
  void BatchDeleteSecurityRequirementsAsync(const BatchDeleteSecurityRequirementsRequestT& request,
                                            const BatchDeleteSecurityRequirementsResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchDeleteSecurityRequirements, request, handler, context);
  }

  /**
   * <p>Deletes one or more threat models from an agent space.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchDeleteThreatModels">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDeleteThreatModelsOutcome BatchDeleteThreatModels(const Model::BatchDeleteThreatModelsRequest& request) const;

  /**
   * A Callable wrapper for BatchDeleteThreatModels that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchDeleteThreatModelsRequestT = Model::BatchDeleteThreatModelsRequest>
  Model::BatchDeleteThreatModelsOutcomeCallable BatchDeleteThreatModelsCallable(const BatchDeleteThreatModelsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchDeleteThreatModels, request);
  }

  /**
   * An Async wrapper for BatchDeleteThreatModels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchDeleteThreatModelsRequestT = Model::BatchDeleteThreatModelsRequest>
  void BatchDeleteThreatModelsAsync(const BatchDeleteThreatModelsRequestT& request,
                                    const BatchDeleteThreatModelsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchDeleteThreatModels, request, handler, context);
  }

  /**
   * <p>Retrieves information about one or more agent spaces.</p><p><h3>See
   * Also:</h3>   <a
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
   * <p>Retrieves metadata for one or more artifacts in an agent space.</p><p><h3>See
   * Also:</h3>   <a
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
   * <p>Retrieves information about one or more tasks within a code review
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetCodeReviewJobTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetCodeReviewJobTasksOutcome BatchGetCodeReviewJobTasks(
      const Model::BatchGetCodeReviewJobTasksRequest& request) const;

  /**
   * A Callable wrapper for BatchGetCodeReviewJobTasks that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchGetCodeReviewJobTasksRequestT = Model::BatchGetCodeReviewJobTasksRequest>
  Model::BatchGetCodeReviewJobTasksOutcomeCallable BatchGetCodeReviewJobTasksCallable(
      const BatchGetCodeReviewJobTasksRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetCodeReviewJobTasks, request);
  }

  /**
   * An Async wrapper for BatchGetCodeReviewJobTasks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetCodeReviewJobTasksRequestT = Model::BatchGetCodeReviewJobTasksRequest>
  void BatchGetCodeReviewJobTasksAsync(const BatchGetCodeReviewJobTasksRequestT& request,
                                       const BatchGetCodeReviewJobTasksResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetCodeReviewJobTasks, request, handler, context);
  }

  /**
   * <p>Retrieves information about one or more code review jobs in an agent
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetCodeReviewJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetCodeReviewJobsOutcome BatchGetCodeReviewJobs(const Model::BatchGetCodeReviewJobsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetCodeReviewJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetCodeReviewJobsRequestT = Model::BatchGetCodeReviewJobsRequest>
  Model::BatchGetCodeReviewJobsOutcomeCallable BatchGetCodeReviewJobsCallable(const BatchGetCodeReviewJobsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetCodeReviewJobs, request);
  }

  /**
   * An Async wrapper for BatchGetCodeReviewJobs that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetCodeReviewJobsRequestT = Model::BatchGetCodeReviewJobsRequest>
  void BatchGetCodeReviewJobsAsync(const BatchGetCodeReviewJobsRequestT& request,
                                   const BatchGetCodeReviewJobsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetCodeReviewJobs, request, handler, context);
  }

  /**
   * <p>Retrieves information about one or more code reviews in an agent
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetCodeReviews">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetCodeReviewsOutcome BatchGetCodeReviews(const Model::BatchGetCodeReviewsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetCodeReviews that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetCodeReviewsRequestT = Model::BatchGetCodeReviewsRequest>
  Model::BatchGetCodeReviewsOutcomeCallable BatchGetCodeReviewsCallable(const BatchGetCodeReviewsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetCodeReviews, request);
  }

  /**
   * An Async wrapper for BatchGetCodeReviews that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename BatchGetCodeReviewsRequestT = Model::BatchGetCodeReviewsRequest>
  void BatchGetCodeReviewsAsync(const BatchGetCodeReviewsRequestT& request, const BatchGetCodeReviewsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetCodeReviews, request, handler, context);
  }

  /**
   * <p>Retrieves information about one or more security findings in an agent
   * space.</p><p><h3>See Also:</h3>   <a
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
   * <p>Retrieves information about one or more tasks within a pentest
   * job.</p><p><h3>See Also:</h3>   <a
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
   * <p>Retrieves information about one or more pentest jobs in an agent
   * space.</p><p><h3>See Also:</h3>   <a
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
   * <p>Retrieves information about one or more pentests in an agent
   * space.</p><p><h3>See Also:</h3>   <a
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
   * <p>Batch retrieves security requirements from a pack.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetSecurityRequirements">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetSecurityRequirementsOutcome BatchGetSecurityRequirements(
      const Model::BatchGetSecurityRequirementsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetSecurityRequirements that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchGetSecurityRequirementsRequestT = Model::BatchGetSecurityRequirementsRequest>
  Model::BatchGetSecurityRequirementsOutcomeCallable BatchGetSecurityRequirementsCallable(
      const BatchGetSecurityRequirementsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetSecurityRequirements, request);
  }

  /**
   * An Async wrapper for BatchGetSecurityRequirements that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetSecurityRequirementsRequestT = Model::BatchGetSecurityRequirementsRequest>
  void BatchGetSecurityRequirementsAsync(const BatchGetSecurityRequirementsRequestT& request,
                                         const BatchGetSecurityRequirementsResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetSecurityRequirements, request, handler, context);
  }

  /**
   * <p>Retrieves information about one or more target domains.</p><p><h3>See
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
   * <p>Retrieves information about one or more tasks within a threat model
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreatModelJobTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetThreatModelJobTasksOutcome BatchGetThreatModelJobTasks(
      const Model::BatchGetThreatModelJobTasksRequest& request) const;

  /**
   * A Callable wrapper for BatchGetThreatModelJobTasks that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchGetThreatModelJobTasksRequestT = Model::BatchGetThreatModelJobTasksRequest>
  Model::BatchGetThreatModelJobTasksOutcomeCallable BatchGetThreatModelJobTasksCallable(
      const BatchGetThreatModelJobTasksRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetThreatModelJobTasks, request);
  }

  /**
   * An Async wrapper for BatchGetThreatModelJobTasks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetThreatModelJobTasksRequestT = Model::BatchGetThreatModelJobTasksRequest>
  void BatchGetThreatModelJobTasksAsync(const BatchGetThreatModelJobTasksRequestT& request,
                                        const BatchGetThreatModelJobTasksResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetThreatModelJobTasks, request, handler, context);
  }

  /**
   * <p>Retrieves information about one or more threat model jobs in an agent
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreatModelJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetThreatModelJobsOutcome BatchGetThreatModelJobs(const Model::BatchGetThreatModelJobsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetThreatModelJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetThreatModelJobsRequestT = Model::BatchGetThreatModelJobsRequest>
  Model::BatchGetThreatModelJobsOutcomeCallable BatchGetThreatModelJobsCallable(const BatchGetThreatModelJobsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetThreatModelJobs, request);
  }

  /**
   * An Async wrapper for BatchGetThreatModelJobs that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetThreatModelJobsRequestT = Model::BatchGetThreatModelJobsRequest>
  void BatchGetThreatModelJobsAsync(const BatchGetThreatModelJobsRequestT& request,
                                    const BatchGetThreatModelJobsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetThreatModelJobs, request, handler, context);
  }

  /**
   * <p>Retrieves information about one or more threat models in an agent
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreatModels">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetThreatModelsOutcome BatchGetThreatModels(const Model::BatchGetThreatModelsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetThreatModels that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchGetThreatModelsRequestT = Model::BatchGetThreatModelsRequest>
  Model::BatchGetThreatModelsOutcomeCallable BatchGetThreatModelsCallable(const BatchGetThreatModelsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetThreatModels, request);
  }

  /**
   * An Async wrapper for BatchGetThreatModels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchGetThreatModelsRequestT = Model::BatchGetThreatModelsRequest>
  void BatchGetThreatModelsAsync(const BatchGetThreatModelsRequestT& request, const BatchGetThreatModelsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetThreatModels, request, handler, context);
  }

  /**
   * <p>Retrieves information about one or more threats.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreats">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetThreatsOutcome BatchGetThreats(const Model::BatchGetThreatsRequest& request) const;

  /**
   * A Callable wrapper for BatchGetThreats that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename BatchGetThreatsRequestT = Model::BatchGetThreatsRequest>
  Model::BatchGetThreatsOutcomeCallable BatchGetThreatsCallable(const BatchGetThreatsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchGetThreats, request);
  }

  /**
   * An Async wrapper for BatchGetThreats that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename BatchGetThreatsRequestT = Model::BatchGetThreatsRequest>
  void BatchGetThreatsAsync(const BatchGetThreatsRequestT& request, const BatchGetThreatsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchGetThreats, request, handler, context);
  }

  /**
   * <p>Batch updates security requirements within a customer managed
   * pack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchUpdateSecurityRequirements">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchUpdateSecurityRequirementsOutcome BatchUpdateSecurityRequirements(
      const Model::BatchUpdateSecurityRequirementsRequest& request) const;

  /**
   * A Callable wrapper for BatchUpdateSecurityRequirements that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchUpdateSecurityRequirementsRequestT = Model::BatchUpdateSecurityRequirementsRequest>
  Model::BatchUpdateSecurityRequirementsOutcomeCallable BatchUpdateSecurityRequirementsCallable(
      const BatchUpdateSecurityRequirementsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::BatchUpdateSecurityRequirements, request);
  }

  /**
   * An Async wrapper for BatchUpdateSecurityRequirements that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename BatchUpdateSecurityRequirementsRequestT = Model::BatchUpdateSecurityRequirementsRequest>
  void BatchUpdateSecurityRequirementsAsync(const BatchUpdateSecurityRequirementsRequestT& request,
                                            const BatchUpdateSecurityRequirementsResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::BatchUpdateSecurityRequirements, request, handler, context);
  }

  /**
   * <p>Creates a new agent space. An agent space is a dedicated workspace for
   * securing a specific application.</p><p><h3>See Also:</h3>   <a
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
   * <p>Creates a new application. An application is the top-level organizational
   * unit that supports IAM Identity Center integration.</p><p><h3>See Also:</h3>
   * <a
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
   * <p>Creates a new code review configuration in an agent space. A code review
   * defines the parameters for automated security-focused code
   * analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateCodeReview">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCodeReviewOutcome CreateCodeReview(const Model::CreateCodeReviewRequest& request) const;

  /**
   * A Callable wrapper for CreateCodeReview that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateCodeReviewRequestT = Model::CreateCodeReviewRequest>
  Model::CreateCodeReviewOutcomeCallable CreateCodeReviewCallable(const CreateCodeReviewRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreateCodeReview, request);
  }

  /**
   * An Async wrapper for CreateCodeReview that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateCodeReviewRequestT = Model::CreateCodeReviewRequest>
  void CreateCodeReviewAsync(const CreateCodeReviewRequestT& request, const CreateCodeReviewResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreateCodeReview, request, handler, context);
  }

  /**
   * <p>Creates a new integration with a third-party provider, such as GitHub, for
   * code review and remediation.</p><p><h3>See Also:</h3>   <a
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
   * <p>Creates a new membership, granting a user access to an agent space within an
   * application.</p><p><h3>See Also:</h3>   <a
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
   * <p>Creates a new pentest configuration in an agent space. A pentest defines the
   * security test parameters, including target assets, risk type exclusions, and
   * logging configuration.</p><p><h3>See Also:</h3>   <a
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
   * <p>Creates a private connection for reaching a self-hosted provider instance
   * over private networking using Amazon VPC Lattice.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreatePrivateConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePrivateConnectionOutcome CreatePrivateConnection(const Model::CreatePrivateConnectionRequest& request) const;

  /**
   * A Callable wrapper for CreatePrivateConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreatePrivateConnectionRequestT = Model::CreatePrivateConnectionRequest>
  Model::CreatePrivateConnectionOutcomeCallable CreatePrivateConnectionCallable(const CreatePrivateConnectionRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreatePrivateConnection, request);
  }

  /**
   * An Async wrapper for CreatePrivateConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreatePrivateConnectionRequestT = Model::CreatePrivateConnectionRequest>
  void CreatePrivateConnectionAsync(const CreatePrivateConnectionRequestT& request,
                                    const CreatePrivateConnectionResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreatePrivateConnection, request, handler, context);
  }

  /**
   * <p>Creates a customer managed security requirement pack.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateSecurityRequirementPack">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSecurityRequirementPackOutcome CreateSecurityRequirementPack(
      const Model::CreateSecurityRequirementPackRequest& request) const;

  /**
   * A Callable wrapper for CreateSecurityRequirementPack that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateSecurityRequirementPackRequestT = Model::CreateSecurityRequirementPackRequest>
  Model::CreateSecurityRequirementPackOutcomeCallable CreateSecurityRequirementPackCallable(
      const CreateSecurityRequirementPackRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreateSecurityRequirementPack, request);
  }

  /**
   * An Async wrapper for CreateSecurityRequirementPack that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateSecurityRequirementPackRequestT = Model::CreateSecurityRequirementPackRequest>
  void CreateSecurityRequirementPackAsync(const CreateSecurityRequirementPackRequestT& request,
                                          const CreateSecurityRequirementPackResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreateSecurityRequirementPack, request, handler, context);
  }

  /**
   * <p>Creates a new target domain for penetration testing. A target domain is a web
   * domain that must be registered and verified before it can be
   * tested.</p><p><h3>See Also:</h3>   <a
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
   * <p>Creates a new threat under a threat model job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateThreat">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateThreatOutcome CreateThreat(const Model::CreateThreatRequest& request) const;

  /**
   * A Callable wrapper for CreateThreat that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateThreatRequestT = Model::CreateThreatRequest>
  Model::CreateThreatOutcomeCallable CreateThreatCallable(const CreateThreatRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreateThreat, request);
  }

  /**
   * An Async wrapper for CreateThreat that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateThreatRequestT = Model::CreateThreatRequest>
  void CreateThreatAsync(const CreateThreatRequestT& request, const CreateThreatResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreateThreat, request, handler, context);
  }

  /**
   * <p>Creates a new threat model configuration in an agent space. A threat model
   * defines the parameters for automated threat analysis.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateThreatModel">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateThreatModelOutcome CreateThreatModel(const Model::CreateThreatModelRequest& request) const;

  /**
   * A Callable wrapper for CreateThreatModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateThreatModelRequestT = Model::CreateThreatModelRequest>
  Model::CreateThreatModelOutcomeCallable CreateThreatModelCallable(const CreateThreatModelRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::CreateThreatModel, request);
  }

  /**
   * An Async wrapper for CreateThreatModel that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateThreatModelRequestT = Model::CreateThreatModelRequest>
  void CreateThreatModelAsync(const CreateThreatModelRequestT& request, const CreateThreatModelResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::CreateThreatModel, request, handler, context);
  }

  /**
   * <p>Deletes an agent space and all of its associated resources, including
   * pentests, findings, and artifacts.</p><p><h3>See Also:</h3>   <a
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
   * <p>Deletes an application and its associated configuration, including IAM
   * Identity Center settings.</p><p><h3>See Also:</h3>   <a
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
   * <p>Deletes an artifact from an agent space.</p><p><h3>See Also:</h3>   <a
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
   * <p>Deletes an integration with a third-party provider.</p><p><h3>See Also:</h3>
   * <a
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
   * <p>Deletes a membership, revoking a user's access to an agent
   * space.</p><p><h3>See Also:</h3>   <a
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
   * <p>Deletes a private connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeletePrivateConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePrivateConnectionOutcome DeletePrivateConnection(const Model::DeletePrivateConnectionRequest& request) const;

  /**
   * A Callable wrapper for DeletePrivateConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeletePrivateConnectionRequestT = Model::DeletePrivateConnectionRequest>
  Model::DeletePrivateConnectionOutcomeCallable DeletePrivateConnectionCallable(const DeletePrivateConnectionRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DeletePrivateConnection, request);
  }

  /**
   * An Async wrapper for DeletePrivateConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeletePrivateConnectionRequestT = Model::DeletePrivateConnectionRequest>
  void DeletePrivateConnectionAsync(const DeletePrivateConnectionRequestT& request,
                                    const DeletePrivateConnectionResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DeletePrivateConnection, request, handler, context);
  }

  /**
   * <p>Deletes a customer managed security requirement pack and all its associated
   * security requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeleteSecurityRequirementPack">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSecurityRequirementPackOutcome DeleteSecurityRequirementPack(
      const Model::DeleteSecurityRequirementPackRequest& request) const;

  /**
   * A Callable wrapper for DeleteSecurityRequirementPack that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteSecurityRequirementPackRequestT = Model::DeleteSecurityRequirementPackRequest>
  Model::DeleteSecurityRequirementPackOutcomeCallable DeleteSecurityRequirementPackCallable(
      const DeleteSecurityRequirementPackRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DeleteSecurityRequirementPack, request);
  }

  /**
   * An Async wrapper for DeleteSecurityRequirementPack that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteSecurityRequirementPackRequestT = Model::DeleteSecurityRequirementPackRequest>
  void DeleteSecurityRequirementPackAsync(const DeleteSecurityRequirementPackRequestT& request,
                                          const DeleteSecurityRequirementPackResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DeleteSecurityRequirementPack, request, handler, context);
  }

  /**
   * <p>Deletes a target domain registration. After deletion, the domain can no
   * longer be used for penetration testing.</p><p><h3>See Also:</h3>   <a
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
   * <p>Retrieves the details of a private connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DescribePrivateConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribePrivateConnectionOutcome DescribePrivateConnection(const Model::DescribePrivateConnectionRequest& request) const;

  /**
   * A Callable wrapper for DescribePrivateConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribePrivateConnectionRequestT = Model::DescribePrivateConnectionRequest>
  Model::DescribePrivateConnectionOutcomeCallable DescribePrivateConnectionCallable(
      const DescribePrivateConnectionRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::DescribePrivateConnection, request);
  }

  /**
   * An Async wrapper for DescribePrivateConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribePrivateConnectionRequestT = Model::DescribePrivateConnectionRequest>
  void DescribePrivateConnectionAsync(const DescribePrivateConnectionRequestT& request,
                                      const DescribePrivateConnectionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::DescribePrivateConnection, request, handler, context);
  }

  /**
   * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
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
   * <p>Retrieves an artifact from an agent space.</p><p><h3>See Also:</h3>   <a
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
   * <p>Retrieves information about an integration.</p><p><h3>See Also:</h3>   <a
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
   * <p>Retrieves information about a security requirement pack.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GetSecurityRequirementPack">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSecurityRequirementPackOutcome GetSecurityRequirementPack(
      const Model::GetSecurityRequirementPackRequest& request) const;

  /**
   * A Callable wrapper for GetSecurityRequirementPack that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetSecurityRequirementPackRequestT = Model::GetSecurityRequirementPackRequest>
  Model::GetSecurityRequirementPackOutcomeCallable GetSecurityRequirementPackCallable(
      const GetSecurityRequirementPackRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::GetSecurityRequirementPack, request);
  }

  /**
   * An Async wrapper for GetSecurityRequirementPack that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetSecurityRequirementPackRequestT = Model::GetSecurityRequirementPackRequest>
  void GetSecurityRequirementPackAsync(const GetSecurityRequirementPackRequestT& request,
                                       const GetSecurityRequirementPackResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::GetSecurityRequirementPack, request, handler, context);
  }

  /**
   * <p>Imports security requirements from uploaded documents into a customer managed
   * security requirement pack. The import process asynchronously extracts and
   * generates structured security requirements from the provided source
   * files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ImportSecurityRequirements">AWS
   * API Reference</a></p>
   */
  virtual Model::ImportSecurityRequirementsOutcome ImportSecurityRequirements(
      const Model::ImportSecurityRequirementsRequest& request) const;

  /**
   * A Callable wrapper for ImportSecurityRequirements that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ImportSecurityRequirementsRequestT = Model::ImportSecurityRequirementsRequest>
  Model::ImportSecurityRequirementsOutcomeCallable ImportSecurityRequirementsCallable(
      const ImportSecurityRequirementsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ImportSecurityRequirements, request);
  }

  /**
   * An Async wrapper for ImportSecurityRequirements that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ImportSecurityRequirementsRequestT = Model::ImportSecurityRequirementsRequest>
  void ImportSecurityRequirementsAsync(const ImportSecurityRequirementsRequestT& request,
                                       const ImportSecurityRequirementsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ImportSecurityRequirements, request, handler, context);
  }

  /**
   * <p>Initiates the OAuth registration flow with a third-party provider. Returns a
   * redirect URL and CSRF state token for completing the
   * authorization.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of agent space summaries in your
   * account.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of application summaries in your
   * account.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of artifact summaries for the specified agent
   * space.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of task summaries for the specified code review job,
   * optionally filtered by step name or category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListCodeReviewJobTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeReviewJobTasksOutcome ListCodeReviewJobTasks(const Model::ListCodeReviewJobTasksRequest& request) const;

  /**
   * A Callable wrapper for ListCodeReviewJobTasks that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListCodeReviewJobTasksRequestT = Model::ListCodeReviewJobTasksRequest>
  Model::ListCodeReviewJobTasksOutcomeCallable ListCodeReviewJobTasksCallable(const ListCodeReviewJobTasksRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListCodeReviewJobTasks, request);
  }

  /**
   * An Async wrapper for ListCodeReviewJobTasks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListCodeReviewJobTasksRequestT = Model::ListCodeReviewJobTasksRequest>
  void ListCodeReviewJobTasksAsync(const ListCodeReviewJobTasksRequestT& request,
                                   const ListCodeReviewJobTasksResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListCodeReviewJobTasks, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of code review job summaries for the specified code
   * review configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListCodeReviewJobsForCodeReview">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeReviewJobsForCodeReviewOutcome ListCodeReviewJobsForCodeReview(
      const Model::ListCodeReviewJobsForCodeReviewRequest& request) const;

  /**
   * A Callable wrapper for ListCodeReviewJobsForCodeReview that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListCodeReviewJobsForCodeReviewRequestT = Model::ListCodeReviewJobsForCodeReviewRequest>
  Model::ListCodeReviewJobsForCodeReviewOutcomeCallable ListCodeReviewJobsForCodeReviewCallable(
      const ListCodeReviewJobsForCodeReviewRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListCodeReviewJobsForCodeReview, request);
  }

  /**
   * An Async wrapper for ListCodeReviewJobsForCodeReview that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListCodeReviewJobsForCodeReviewRequestT = Model::ListCodeReviewJobsForCodeReviewRequest>
  void ListCodeReviewJobsForCodeReviewAsync(const ListCodeReviewJobsForCodeReviewRequestT& request,
                                            const ListCodeReviewJobsForCodeReviewResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListCodeReviewJobsForCodeReview, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of code review summaries for the specified agent
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListCodeReviews">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeReviewsOutcome ListCodeReviews(const Model::ListCodeReviewsRequest& request) const;

  /**
   * A Callable wrapper for ListCodeReviews that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListCodeReviewsRequestT = Model::ListCodeReviewsRequest>
  Model::ListCodeReviewsOutcomeCallable ListCodeReviewsCallable(const ListCodeReviewsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListCodeReviews, request);
  }

  /**
   * An Async wrapper for ListCodeReviews that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListCodeReviewsRequestT = Model::ListCodeReviewsRequest>
  void ListCodeReviewsAsync(const ListCodeReviewsRequestT& request, const ListCodeReviewsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListCodeReviews, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of endpoints discovered during a pentest job
   * execution.</p><p><h3>See Also:</h3>   <a
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
   * <p>Lists the security findings for a pentest job.</p><p><h3>See Also:</h3>   <a
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
   * <p>Lists the integrated resources for an agent space, optionally filtered by
   * integration or resource type.</p><p><h3>See Also:</h3>   <a
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
   * <p>Lists the integrations in your account, optionally filtered by provider or
   * provider type.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of membership summaries for the specified agent
   * space within an application.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of task summaries for the specified pentest job,
   * optionally filtered by step name or category.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of pentest job summaries for the specified pentest
   * configuration.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of pentest summaries for the specified agent
   * space.</p><p><h3>See Also:</h3>   <a
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
   * <p>Lists the private connections in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListPrivateConnections">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPrivateConnectionsOutcome ListPrivateConnections(const Model::ListPrivateConnectionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPrivateConnections that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPrivateConnectionsRequestT = Model::ListPrivateConnectionsRequest>
  Model::ListPrivateConnectionsOutcomeCallable ListPrivateConnectionsCallable(const ListPrivateConnectionsRequestT& request = {}) const {
    return SubmitCallable(&SecurityAgentClient::ListPrivateConnections, request);
  }

  /**
   * An Async wrapper for ListPrivateConnections that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPrivateConnectionsRequestT = Model::ListPrivateConnectionsRequest>
  void ListPrivateConnectionsAsync(const ListPrivateConnectionsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const ListPrivateConnectionsRequestT& request = {}) const {
    return SubmitAsync(&SecurityAgentClient::ListPrivateConnections, request, handler, context);
  }

  /**
   * <p>Lists all security requirement packs in the caller's account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListSecurityRequirementPacks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSecurityRequirementPacksOutcome ListSecurityRequirementPacks(
      const Model::ListSecurityRequirementPacksRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSecurityRequirementPacks that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListSecurityRequirementPacksRequestT = Model::ListSecurityRequirementPacksRequest>
  Model::ListSecurityRequirementPacksOutcomeCallable ListSecurityRequirementPacksCallable(
      const ListSecurityRequirementPacksRequestT& request = {}) const {
    return SubmitCallable(&SecurityAgentClient::ListSecurityRequirementPacks, request);
  }

  /**
   * An Async wrapper for ListSecurityRequirementPacks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSecurityRequirementPacksRequestT = Model::ListSecurityRequirementPacksRequest>
  void ListSecurityRequirementPacksAsync(const ListSecurityRequirementPacksResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const ListSecurityRequirementPacksRequestT& request = {}) const {
    return SubmitAsync(&SecurityAgentClient::ListSecurityRequirementPacks, request, handler, context);
  }

  /**
   * <p>Lists security requirements within a pack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListSecurityRequirements">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSecurityRequirementsOutcome ListSecurityRequirements(const Model::ListSecurityRequirementsRequest& request) const;

  /**
   * A Callable wrapper for ListSecurityRequirements that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSecurityRequirementsRequestT = Model::ListSecurityRequirementsRequest>
  Model::ListSecurityRequirementsOutcomeCallable ListSecurityRequirementsCallable(const ListSecurityRequirementsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListSecurityRequirements, request);
  }

  /**
   * An Async wrapper for ListSecurityRequirements that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSecurityRequirementsRequestT = Model::ListSecurityRequirementsRequest>
  void ListSecurityRequirementsAsync(const ListSecurityRequirementsRequestT& request,
                                     const ListSecurityRequirementsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListSecurityRequirements, request, handler, context);
  }

  /**
   * <p>Returns the tags associated with the specified resource.</p><p><h3>See
   * Also:</h3>   <a
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
   * <p>Returns a paginated list of target domain summaries in your
   * account.</p><p><h3>See Also:</h3>   <a
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
   * <p>Returns a paginated list of task summaries for the specified threat model
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListThreatModelJobTasks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListThreatModelJobTasksOutcome ListThreatModelJobTasks(const Model::ListThreatModelJobTasksRequest& request) const;

  /**
   * A Callable wrapper for ListThreatModelJobTasks that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListThreatModelJobTasksRequestT = Model::ListThreatModelJobTasksRequest>
  Model::ListThreatModelJobTasksOutcomeCallable ListThreatModelJobTasksCallable(const ListThreatModelJobTasksRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListThreatModelJobTasks, request);
  }

  /**
   * An Async wrapper for ListThreatModelJobTasks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListThreatModelJobTasksRequestT = Model::ListThreatModelJobTasksRequest>
  void ListThreatModelJobTasksAsync(const ListThreatModelJobTasksRequestT& request,
                                    const ListThreatModelJobTasksResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListThreatModelJobTasks, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of threat model job summaries for the specified
   * threat model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListThreatModelJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListThreatModelJobsOutcome ListThreatModelJobs(const Model::ListThreatModelJobsRequest& request) const;

  /**
   * A Callable wrapper for ListThreatModelJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListThreatModelJobsRequestT = Model::ListThreatModelJobsRequest>
  Model::ListThreatModelJobsOutcomeCallable ListThreatModelJobsCallable(const ListThreatModelJobsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListThreatModelJobs, request);
  }

  /**
   * An Async wrapper for ListThreatModelJobs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListThreatModelJobsRequestT = Model::ListThreatModelJobsRequest>
  void ListThreatModelJobsAsync(const ListThreatModelJobsRequestT& request, const ListThreatModelJobsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListThreatModelJobs, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of threat model summaries for the specified agent
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListThreatModels">AWS
   * API Reference</a></p>
   */
  virtual Model::ListThreatModelsOutcome ListThreatModels(const Model::ListThreatModelsRequest& request) const;

  /**
   * A Callable wrapper for ListThreatModels that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListThreatModelsRequestT = Model::ListThreatModelsRequest>
  Model::ListThreatModelsOutcomeCallable ListThreatModelsCallable(const ListThreatModelsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListThreatModels, request);
  }

  /**
   * An Async wrapper for ListThreatModels that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListThreatModelsRequestT = Model::ListThreatModelsRequest>
  void ListThreatModelsAsync(const ListThreatModelsRequestT& request, const ListThreatModelsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListThreatModels, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of threats for a threat model job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListThreats">AWS
   * API Reference</a></p>
   */
  virtual Model::ListThreatsOutcome ListThreats(const Model::ListThreatsRequest& request) const;

  /**
   * A Callable wrapper for ListThreats that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListThreatsRequestT = Model::ListThreatsRequest>
  Model::ListThreatsOutcomeCallable ListThreatsCallable(const ListThreatsRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::ListThreats, request);
  }

  /**
   * An Async wrapper for ListThreats that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListThreatsRequestT = Model::ListThreatsRequest>
  void ListThreatsAsync(const ListThreatsRequestT& request, const ListThreatsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::ListThreats, request, handler, context);
  }

  /**
   * <p>Initiates code remediation for one or more security findings. This creates
   * pull requests in integrated repositories to fix the identified
   * vulnerabilities.</p><p><h3>See Also:</h3>   <a
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
   * <p>Starts a new code review job for a code review configuration. The job
   * executes the security-focused code analysis defined in the code
   * review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StartCodeReviewJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartCodeReviewJobOutcome StartCodeReviewJob(const Model::StartCodeReviewJobRequest& request) const;

  /**
   * A Callable wrapper for StartCodeReviewJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartCodeReviewJobRequestT = Model::StartCodeReviewJobRequest>
  Model::StartCodeReviewJobOutcomeCallable StartCodeReviewJobCallable(const StartCodeReviewJobRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::StartCodeReviewJob, request);
  }

  /**
   * An Async wrapper for StartCodeReviewJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartCodeReviewJobRequestT = Model::StartCodeReviewJobRequest>
  void StartCodeReviewJobAsync(const StartCodeReviewJobRequestT& request, const StartCodeReviewJobResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::StartCodeReviewJob, request, handler, context);
  }

  /**
   * <p>Starts a new pentest job for a pentest configuration. The job executes the
   * security tests defined in the pentest.</p><p><h3>See Also:</h3>   <a
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
   * <p>Starts a new threat model job for a threat model configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StartThreatModelJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartThreatModelJobOutcome StartThreatModelJob(const Model::StartThreatModelJobRequest& request) const;

  /**
   * A Callable wrapper for StartThreatModelJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartThreatModelJobRequestT = Model::StartThreatModelJobRequest>
  Model::StartThreatModelJobOutcomeCallable StartThreatModelJobCallable(const StartThreatModelJobRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::StartThreatModelJob, request);
  }

  /**
   * An Async wrapper for StartThreatModelJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartThreatModelJobRequestT = Model::StartThreatModelJobRequest>
  void StartThreatModelJobAsync(const StartThreatModelJobRequestT& request, const StartThreatModelJobResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::StartThreatModelJob, request, handler, context);
  }

  /**
   * <p>Stops a running code review job. The job transitions to a stopping state and
   * then to stopped after cleanup completes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StopCodeReviewJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StopCodeReviewJobOutcome StopCodeReviewJob(const Model::StopCodeReviewJobRequest& request) const;

  /**
   * A Callable wrapper for StopCodeReviewJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopCodeReviewJobRequestT = Model::StopCodeReviewJobRequest>
  Model::StopCodeReviewJobOutcomeCallable StopCodeReviewJobCallable(const StopCodeReviewJobRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::StopCodeReviewJob, request);
  }

  /**
   * An Async wrapper for StopCodeReviewJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StopCodeReviewJobRequestT = Model::StopCodeReviewJobRequest>
  void StopCodeReviewJobAsync(const StopCodeReviewJobRequestT& request, const StopCodeReviewJobResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::StopCodeReviewJob, request, handler, context);
  }

  /**
   * <p>Stops a running pentest job. The job transitions to a stopping state and then
   * to stopped after cleanup completes.</p><p><h3>See Also:</h3>   <a
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
   * <p>Stops a running threat model job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StopThreatModelJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StopThreatModelJobOutcome StopThreatModelJob(const Model::StopThreatModelJobRequest& request) const;

  /**
   * A Callable wrapper for StopThreatModelJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopThreatModelJobRequestT = Model::StopThreatModelJobRequest>
  Model::StopThreatModelJobOutcomeCallable StopThreatModelJobCallable(const StopThreatModelJobRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::StopThreatModelJob, request);
  }

  /**
   * An Async wrapper for StopThreatModelJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StopThreatModelJobRequestT = Model::StopThreatModelJobRequest>
  void StopThreatModelJobAsync(const StopThreatModelJobRequestT& request, const StopThreatModelJobResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::StopThreatModelJob, request, handler, context);
  }

  /**
   * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
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
   * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
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
   * <p>Updates the configuration of an existing agent space, including its name,
   * description, AWS resources, target domains, and code review
   * settings.</p><p><h3>See Also:</h3>   <a
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
   * <p>Updates the configuration of an existing application, including the IAM role
   * and default KMS key.</p><p><h3>See Also:</h3>   <a
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
   * <p>Updates an existing code review configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateCodeReview">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateCodeReviewOutcome UpdateCodeReview(const Model::UpdateCodeReviewRequest& request) const;

  /**
   * A Callable wrapper for UpdateCodeReview that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateCodeReviewRequestT = Model::UpdateCodeReviewRequest>
  Model::UpdateCodeReviewOutcomeCallable UpdateCodeReviewCallable(const UpdateCodeReviewRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateCodeReview, request);
  }

  /**
   * An Async wrapper for UpdateCodeReview that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateCodeReviewRequestT = Model::UpdateCodeReviewRequest>
  void UpdateCodeReviewAsync(const UpdateCodeReviewRequestT& request, const UpdateCodeReviewResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateCodeReview, request, handler, context);
  }

  /**
   * <p>Updates the status or risk level of a security finding.</p><p><h3>See
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
   * <p>Updates the integrated resources for an agent space, including their
   * capabilities.</p><p><h3>See Also:</h3>   <a
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
   * <p>Updates an existing pentest configuration.</p><p><h3>See Also:</h3>   <a
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
   * <p>Updates the certificate associated with a private connection. Certificates
   * can be added or replaced but not removed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdatePrivateConnectionCertificate">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePrivateConnectionCertificateOutcome UpdatePrivateConnectionCertificate(
      const Model::UpdatePrivateConnectionCertificateRequest& request) const;

  /**
   * A Callable wrapper for UpdatePrivateConnectionCertificate that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename UpdatePrivateConnectionCertificateRequestT = Model::UpdatePrivateConnectionCertificateRequest>
  Model::UpdatePrivateConnectionCertificateOutcomeCallable UpdatePrivateConnectionCertificateCallable(
      const UpdatePrivateConnectionCertificateRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdatePrivateConnectionCertificate, request);
  }

  /**
   * An Async wrapper for UpdatePrivateConnectionCertificate that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdatePrivateConnectionCertificateRequestT = Model::UpdatePrivateConnectionCertificateRequest>
  void UpdatePrivateConnectionCertificateAsync(const UpdatePrivateConnectionCertificateRequestT& request,
                                               const UpdatePrivateConnectionCertificateResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdatePrivateConnectionCertificate, request, handler, context);
  }

  /**
   * <p>Updates a security requirement pack. For customer managed packs, both
   * metadata and status can be updated. For AWS managed packs, only status can be
   * updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateSecurityRequirementPack">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSecurityRequirementPackOutcome UpdateSecurityRequirementPack(
      const Model::UpdateSecurityRequirementPackRequest& request) const;

  /**
   * A Callable wrapper for UpdateSecurityRequirementPack that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateSecurityRequirementPackRequestT = Model::UpdateSecurityRequirementPackRequest>
  Model::UpdateSecurityRequirementPackOutcomeCallable UpdateSecurityRequirementPackCallable(
      const UpdateSecurityRequirementPackRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateSecurityRequirementPack, request);
  }

  /**
   * An Async wrapper for UpdateSecurityRequirementPack that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateSecurityRequirementPackRequestT = Model::UpdateSecurityRequirementPackRequest>
  void UpdateSecurityRequirementPackAsync(const UpdateSecurityRequirementPackRequestT& request,
                                          const UpdateSecurityRequirementPackResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateSecurityRequirementPack, request, handler, context);
  }

  /**
   * <p>Updates the verification method for a target domain.</p><p><h3>See Also:</h3>
   * <a
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
   * <p>Updates a threat.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateThreat">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateThreatOutcome UpdateThreat(const Model::UpdateThreatRequest& request) const;

  /**
   * A Callable wrapper for UpdateThreat that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateThreatRequestT = Model::UpdateThreatRequest>
  Model::UpdateThreatOutcomeCallable UpdateThreatCallable(const UpdateThreatRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateThreat, request);
  }

  /**
   * An Async wrapper for UpdateThreat that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateThreatRequestT = Model::UpdateThreatRequest>
  void UpdateThreatAsync(const UpdateThreatRequestT& request, const UpdateThreatResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateThreat, request, handler, context);
  }

  /**
   * <p>Updates an existing threat model configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateThreatModel">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateThreatModelOutcome UpdateThreatModel(const Model::UpdateThreatModelRequest& request) const;

  /**
   * A Callable wrapper for UpdateThreatModel that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateThreatModelRequestT = Model::UpdateThreatModelRequest>
  Model::UpdateThreatModelOutcomeCallable UpdateThreatModelCallable(const UpdateThreatModelRequestT& request) const {
    return SubmitCallable(&SecurityAgentClient::UpdateThreatModel, request);
  }

  /**
   * An Async wrapper for UpdateThreatModel that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateThreatModelRequestT = Model::UpdateThreatModelRequest>
  void UpdateThreatModelAsync(const UpdateThreatModelRequestT& request, const UpdateThreatModelResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SecurityAgentClient::UpdateThreatModel, request, handler, context);
  }

  /**
   * <p>Initiates verification of a target domain. This checks whether the domain
   * ownership verification token has been properly configured.</p><p><h3>See
   * Also:</h3>   <a
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
