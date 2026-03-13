/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/MgnPaginationBase.h>
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
/**
 * <p>The Application Migration Service service.</p>
 */
class AWS_MGN_API MgnClient : public Aws::Client::AWSJsonClient,
                              public Aws::Client::ClientWithAsyncTemplateMethods<MgnClient>,
                              public MgnPaginationBase<MgnClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef MgnClientConfiguration ClientConfigurationType;
  typedef MgnEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MgnClient(const Aws::mgn::MgnClientConfiguration& clientConfiguration = Aws::mgn::MgnClientConfiguration(),
            std::shared_ptr<MgnEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MgnClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<MgnEndpointProviderBase> endpointProvider = nullptr,
            const Aws::mgn::MgnClientConfiguration& clientConfiguration = Aws::mgn::MgnClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MgnClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            std::shared_ptr<MgnEndpointProviderBase> endpointProvider = nullptr,
            const Aws::mgn::MgnClientConfiguration& clientConfiguration = Aws::mgn::MgnClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MgnClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MgnClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MgnClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~MgnClient();

  /**
   * <p>Archive application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ArchiveApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::ArchiveApplicationOutcome ArchiveApplication(const Model::ArchiveApplicationRequest& request) const;

  /**
   * A Callable wrapper for ArchiveApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ArchiveApplicationRequestT = Model::ArchiveApplicationRequest>
  Model::ArchiveApplicationOutcomeCallable ArchiveApplicationCallable(const ArchiveApplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::ArchiveApplication, request);
  }

  /**
   * An Async wrapper for ArchiveApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ArchiveApplicationRequestT = Model::ArchiveApplicationRequest>
  void ArchiveApplicationAsync(const ArchiveApplicationRequestT& request, const ArchiveApplicationResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ArchiveApplication, request, handler, context);
  }

  /**
   * <p>Archive wave.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ArchiveWave">AWS API
   * Reference</a></p>
   */
  virtual Model::ArchiveWaveOutcome ArchiveWave(const Model::ArchiveWaveRequest& request) const;

  /**
   * A Callable wrapper for ArchiveWave that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ArchiveWaveRequestT = Model::ArchiveWaveRequest>
  Model::ArchiveWaveOutcomeCallable ArchiveWaveCallable(const ArchiveWaveRequestT& request) const {
    return SubmitCallable(&MgnClient::ArchiveWave, request);
  }

  /**
   * An Async wrapper for ArchiveWave that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ArchiveWaveRequestT = Model::ArchiveWaveRequest>
  void ArchiveWaveAsync(const ArchiveWaveRequestT& request, const ArchiveWaveResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ArchiveWave, request, handler, context);
  }

  /**
   * <p>Associate applications to wave.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/AssociateApplications">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateApplicationsOutcome AssociateApplications(const Model::AssociateApplicationsRequest& request) const;

  /**
   * A Callable wrapper for AssociateApplications that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateApplicationsRequestT = Model::AssociateApplicationsRequest>
  Model::AssociateApplicationsOutcomeCallable AssociateApplicationsCallable(const AssociateApplicationsRequestT& request) const {
    return SubmitCallable(&MgnClient::AssociateApplications, request);
  }

  /**
   * An Async wrapper for AssociateApplications that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AssociateApplicationsRequestT = Model::AssociateApplicationsRequest>
  void AssociateApplicationsAsync(const AssociateApplicationsRequestT& request, const AssociateApplicationsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::AssociateApplications, request, handler, context);
  }

  /**
   * <p>Associate source servers to application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/AssociateSourceServers">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateSourceServersOutcome AssociateSourceServers(const Model::AssociateSourceServersRequest& request) const;

  /**
   * A Callable wrapper for AssociateSourceServers that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateSourceServersRequestT = Model::AssociateSourceServersRequest>
  Model::AssociateSourceServersOutcomeCallable AssociateSourceServersCallable(const AssociateSourceServersRequestT& request) const {
    return SubmitCallable(&MgnClient::AssociateSourceServers, request);
  }

  /**
   * An Async wrapper for AssociateSourceServers that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AssociateSourceServersRequestT = Model::AssociateSourceServersRequest>
  void AssociateSourceServersAsync(const AssociateSourceServersRequestT& request,
                                   const AssociateSourceServersResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::AssociateSourceServers, request, handler, context);
  }

  /**
   * <p>Allows the user to set the SourceServer.LifeCycle.state property for specific
   * Source Server IDs to one of the following: READY_FOR_TEST or READY_FOR_CUTOVER.
   * This command only works if the Source Server is already launchable
   * (dataReplicationInfo.lagDuration is not null.)</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ChangeServerLifeCycleState">AWS
   * API Reference</a></p>
   */
  virtual Model::ChangeServerLifeCycleStateOutcome ChangeServerLifeCycleState(
      const Model::ChangeServerLifeCycleStateRequest& request) const;

  /**
   * A Callable wrapper for ChangeServerLifeCycleState that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ChangeServerLifeCycleStateRequestT = Model::ChangeServerLifeCycleStateRequest>
  Model::ChangeServerLifeCycleStateOutcomeCallable ChangeServerLifeCycleStateCallable(
      const ChangeServerLifeCycleStateRequestT& request) const {
    return SubmitCallable(&MgnClient::ChangeServerLifeCycleState, request);
  }

  /**
   * An Async wrapper for ChangeServerLifeCycleState that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ChangeServerLifeCycleStateRequestT = Model::ChangeServerLifeCycleStateRequest>
  void ChangeServerLifeCycleStateAsync(const ChangeServerLifeCycleStateRequestT& request,
                                       const ChangeServerLifeCycleStateResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ChangeServerLifeCycleState, request, handler, context);
  }

  /**
   * <p>Create application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

  /**
   * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateApplicationRequestT = Model::CreateApplicationRequest>
  Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::CreateApplication, request);
  }

  /**
   * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateApplicationRequestT = Model::CreateApplicationRequest>
  void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::CreateApplication, request, handler, context);
  }

  /**
   * <p>Create Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateConnector">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateConnectorOutcome CreateConnector(const Model::CreateConnectorRequest& request) const;

  /**
   * A Callable wrapper for CreateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateConnectorRequestT = Model::CreateConnectorRequest>
  Model::CreateConnectorOutcomeCallable CreateConnectorCallable(const CreateConnectorRequestT& request) const {
    return SubmitCallable(&MgnClient::CreateConnector, request);
  }

  /**
   * An Async wrapper for CreateConnector that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateConnectorRequestT = Model::CreateConnectorRequest>
  void CreateConnectorAsync(const CreateConnectorRequestT& request, const CreateConnectorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::CreateConnector, request, handler, context);
  }

  /**
   * <p>Creates a new Launch Configuration Template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateLaunchConfigurationTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateLaunchConfigurationTemplateOutcome CreateLaunchConfigurationTemplate(
      const Model::CreateLaunchConfigurationTemplateRequest& request = {}) const;

  /**
   * A Callable wrapper for CreateLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateLaunchConfigurationTemplateRequestT = Model::CreateLaunchConfigurationTemplateRequest>
  Model::CreateLaunchConfigurationTemplateOutcomeCallable CreateLaunchConfigurationTemplateCallable(
      const CreateLaunchConfigurationTemplateRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::CreateLaunchConfigurationTemplate, request);
  }

  /**
   * An Async wrapper for CreateLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateLaunchConfigurationTemplateRequestT = Model::CreateLaunchConfigurationTemplateRequest>
  void CreateLaunchConfigurationTemplateAsync(const CreateLaunchConfigurationTemplateResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                              const CreateLaunchConfigurationTemplateRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::CreateLaunchConfigurationTemplate, request, handler, context);
  }

  /**
   * <p>Creates a new network migration definition that specifies the source and
   * target network configuration for a migration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateNetworkMigrationDefinition">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateNetworkMigrationDefinitionOutcome CreateNetworkMigrationDefinition(
      const Model::CreateNetworkMigrationDefinitionRequest& request) const;

  /**
   * A Callable wrapper for CreateNetworkMigrationDefinition that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateNetworkMigrationDefinitionRequestT = Model::CreateNetworkMigrationDefinitionRequest>
  Model::CreateNetworkMigrationDefinitionOutcomeCallable CreateNetworkMigrationDefinitionCallable(
      const CreateNetworkMigrationDefinitionRequestT& request) const {
    return SubmitCallable(&MgnClient::CreateNetworkMigrationDefinition, request);
  }

  /**
   * An Async wrapper for CreateNetworkMigrationDefinition that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateNetworkMigrationDefinitionRequestT = Model::CreateNetworkMigrationDefinitionRequest>
  void CreateNetworkMigrationDefinitionAsync(const CreateNetworkMigrationDefinitionRequestT& request,
                                             const CreateNetworkMigrationDefinitionResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::CreateNetworkMigrationDefinition, request, handler, context);
  }

  /**
   * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateReplicationConfigurationTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateReplicationConfigurationTemplateOutcome CreateReplicationConfigurationTemplate(
      const Model::CreateReplicationConfigurationTemplateRequest& request) const;

  /**
   * A Callable wrapper for CreateReplicationConfigurationTemplate that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename CreateReplicationConfigurationTemplateRequestT = Model::CreateReplicationConfigurationTemplateRequest>
  Model::CreateReplicationConfigurationTemplateOutcomeCallable CreateReplicationConfigurationTemplateCallable(
      const CreateReplicationConfigurationTemplateRequestT& request) const {
    return SubmitCallable(&MgnClient::CreateReplicationConfigurationTemplate, request);
  }

  /**
   * An Async wrapper for CreateReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename CreateReplicationConfigurationTemplateRequestT = Model::CreateReplicationConfigurationTemplateRequest>
  void CreateReplicationConfigurationTemplateAsync(const CreateReplicationConfigurationTemplateRequestT& request,
                                                   const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::CreateReplicationConfigurationTemplate, request, handler, context);
  }

  /**
   * <p>Create wave.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateWave">AWS API
   * Reference</a></p>
   */
  virtual Model::CreateWaveOutcome CreateWave(const Model::CreateWaveRequest& request) const;

  /**
   * A Callable wrapper for CreateWave that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateWaveRequestT = Model::CreateWaveRequest>
  Model::CreateWaveOutcomeCallable CreateWaveCallable(const CreateWaveRequestT& request) const {
    return SubmitCallable(&MgnClient::CreateWave, request);
  }

  /**
   * An Async wrapper for CreateWave that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateWaveRequestT = Model::CreateWaveRequest>
  void CreateWaveAsync(const CreateWaveRequestT& request, const CreateWaveResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::CreateWave, request, handler, context);
  }

  /**
   * <p>Delete application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

  /**
   * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
  Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteApplication, request);
  }

  /**
   * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
  void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteApplication, request, handler, context);
  }

  /**
   * <p>Delete Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteConnector">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;

  /**
   * A Callable wrapper for DeleteConnector that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
  Model::DeleteConnectorOutcomeCallable DeleteConnectorCallable(const DeleteConnectorRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteConnector, request);
  }

  /**
   * An Async wrapper for DeleteConnector that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
  void DeleteConnectorAsync(const DeleteConnectorRequestT& request, const DeleteConnectorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteConnector, request, handler, context);
  }

  /**
   * <p>Deletes a single Job by ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteJob">AWS API
   * Reference</a></p>
   */
  virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

  /**
   * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteJobRequestT = Model::DeleteJobRequest>
  Model::DeleteJobOutcomeCallable DeleteJobCallable(const DeleteJobRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteJob, request);
  }

  /**
   * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteJobRequestT = Model::DeleteJobRequest>
  void DeleteJobAsync(const DeleteJobRequestT& request, const DeleteJobResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteJob, request, handler, context);
  }

  /**
   * <p>Deletes a single Launch Configuration Template by ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteLaunchConfigurationTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteLaunchConfigurationTemplateOutcome DeleteLaunchConfigurationTemplate(
      const Model::DeleteLaunchConfigurationTemplateRequest& request) const;

  /**
   * A Callable wrapper for DeleteLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DeleteLaunchConfigurationTemplateRequestT = Model::DeleteLaunchConfigurationTemplateRequest>
  Model::DeleteLaunchConfigurationTemplateOutcomeCallable DeleteLaunchConfigurationTemplateCallable(
      const DeleteLaunchConfigurationTemplateRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteLaunchConfigurationTemplate, request);
  }

  /**
   * An Async wrapper for DeleteLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteLaunchConfigurationTemplateRequestT = Model::DeleteLaunchConfigurationTemplateRequest>
  void DeleteLaunchConfigurationTemplateAsync(const DeleteLaunchConfigurationTemplateRequestT& request,
                                              const DeleteLaunchConfigurationTemplateResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteLaunchConfigurationTemplate, request, handler, context);
  }

  /**
   * <p>Deletes a network migration definition. This operation removes the migration
   * definition and all associated metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteNetworkMigrationDefinition">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteNetworkMigrationDefinitionOutcome DeleteNetworkMigrationDefinition(
      const Model::DeleteNetworkMigrationDefinitionRequest& request) const;

  /**
   * A Callable wrapper for DeleteNetworkMigrationDefinition that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DeleteNetworkMigrationDefinitionRequestT = Model::DeleteNetworkMigrationDefinitionRequest>
  Model::DeleteNetworkMigrationDefinitionOutcomeCallable DeleteNetworkMigrationDefinitionCallable(
      const DeleteNetworkMigrationDefinitionRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteNetworkMigrationDefinition, request);
  }

  /**
   * An Async wrapper for DeleteNetworkMigrationDefinition that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteNetworkMigrationDefinitionRequestT = Model::DeleteNetworkMigrationDefinitionRequest>
  void DeleteNetworkMigrationDefinitionAsync(const DeleteNetworkMigrationDefinitionRequestT& request,
                                             const DeleteNetworkMigrationDefinitionResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteNetworkMigrationDefinition, request, handler, context);
  }

  /**
   * <p>Deletes a single Replication Configuration Template by ID</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteReplicationConfigurationTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteReplicationConfigurationTemplateOutcome DeleteReplicationConfigurationTemplate(
      const Model::DeleteReplicationConfigurationTemplateRequest& request) const;

  /**
   * A Callable wrapper for DeleteReplicationConfigurationTemplate that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DeleteReplicationConfigurationTemplateRequestT = Model::DeleteReplicationConfigurationTemplateRequest>
  Model::DeleteReplicationConfigurationTemplateOutcomeCallable DeleteReplicationConfigurationTemplateCallable(
      const DeleteReplicationConfigurationTemplateRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteReplicationConfigurationTemplate, request);
  }

  /**
   * An Async wrapper for DeleteReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DeleteReplicationConfigurationTemplateRequestT = Model::DeleteReplicationConfigurationTemplateRequest>
  void DeleteReplicationConfigurationTemplateAsync(const DeleteReplicationConfigurationTemplateRequestT& request,
                                                   const DeleteReplicationConfigurationTemplateResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteReplicationConfigurationTemplate, request, handler, context);
  }

  /**
   * <p>Deletes a single source server by ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteSourceServer">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSourceServerOutcome DeleteSourceServer(const Model::DeleteSourceServerRequest& request) const;

  /**
   * A Callable wrapper for DeleteSourceServer that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteSourceServerRequestT = Model::DeleteSourceServerRequest>
  Model::DeleteSourceServerOutcomeCallable DeleteSourceServerCallable(const DeleteSourceServerRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteSourceServer, request);
  }

  /**
   * An Async wrapper for DeleteSourceServer that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteSourceServerRequestT = Model::DeleteSourceServerRequest>
  void DeleteSourceServerAsync(const DeleteSourceServerRequestT& request, const DeleteSourceServerResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteSourceServer, request, handler, context);
  }

  /**
   * <p>Deletes a given vCenter client by ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteVcenterClient">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteVcenterClientOutcome DeleteVcenterClient(const Model::DeleteVcenterClientRequest& request) const;

  /**
   * A Callable wrapper for DeleteVcenterClient that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteVcenterClientRequestT = Model::DeleteVcenterClientRequest>
  Model::DeleteVcenterClientOutcomeCallable DeleteVcenterClientCallable(const DeleteVcenterClientRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteVcenterClient, request);
  }

  /**
   * An Async wrapper for DeleteVcenterClient that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteVcenterClientRequestT = Model::DeleteVcenterClientRequest>
  void DeleteVcenterClientAsync(const DeleteVcenterClientRequestT& request, const DeleteVcenterClientResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteVcenterClient, request, handler, context);
  }

  /**
   * <p>Delete wave.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteWave">AWS API
   * Reference</a></p>
   */
  virtual Model::DeleteWaveOutcome DeleteWave(const Model::DeleteWaveRequest& request) const;

  /**
   * A Callable wrapper for DeleteWave that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteWaveRequestT = Model::DeleteWaveRequest>
  Model::DeleteWaveOutcomeCallable DeleteWaveCallable(const DeleteWaveRequestT& request) const {
    return SubmitCallable(&MgnClient::DeleteWave, request);
  }

  /**
   * An Async wrapper for DeleteWave that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteWaveRequestT = Model::DeleteWaveRequest>
  void DeleteWaveAsync(const DeleteWaveRequestT& request, const DeleteWaveResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DeleteWave, request, handler, context);
  }

  /**
   * <p>Retrieves detailed job log items with paging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeJobLogItems">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeJobLogItemsOutcome DescribeJobLogItems(const Model::DescribeJobLogItemsRequest& request) const;

  /**
   * A Callable wrapper for DescribeJobLogItems that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeJobLogItemsRequestT = Model::DescribeJobLogItemsRequest>
  Model::DescribeJobLogItemsOutcomeCallable DescribeJobLogItemsCallable(const DescribeJobLogItemsRequestT& request) const {
    return SubmitCallable(&MgnClient::DescribeJobLogItems, request);
  }

  /**
   * An Async wrapper for DescribeJobLogItems that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeJobLogItemsRequestT = Model::DescribeJobLogItemsRequest>
  void DescribeJobLogItemsAsync(const DescribeJobLogItemsRequestT& request, const DescribeJobLogItemsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DescribeJobLogItems, request, handler, context);
  }

  /**
   * <p>Returns a list of Jobs. Use the JobsID and fromDate and toData filters to
   * limit which jobs are returned. The response is sorted by creationDataTime -
   * latest date first. Jobs are normally created by the StartTest, StartCutover, and
   * TerminateTargetInstances APIs. Jobs are also created by DiagnosticLaunch and
   * TerminateDiagnosticInstances, which are APIs available only to *Support* and
   * only used in response to relevant support tickets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeJobs that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeJobsRequestT = Model::DescribeJobsRequest>
  Model::DescribeJobsOutcomeCallable DescribeJobsCallable(const DescribeJobsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::DescribeJobs, request);
  }

  /**
   * An Async wrapper for DescribeJobs that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeJobsRequestT = Model::DescribeJobsRequest>
  void DescribeJobsAsync(const DescribeJobsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const DescribeJobsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::DescribeJobs, request, handler, context);
  }

  /**
   * <p>Lists all Launch Configuration Templates, filtered by Launch Configuration
   * Template IDs</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeLaunchConfigurationTemplates">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeLaunchConfigurationTemplatesOutcome DescribeLaunchConfigurationTemplates(
      const Model::DescribeLaunchConfigurationTemplatesRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeLaunchConfigurationTemplates that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DescribeLaunchConfigurationTemplatesRequestT = Model::DescribeLaunchConfigurationTemplatesRequest>
  Model::DescribeLaunchConfigurationTemplatesOutcomeCallable DescribeLaunchConfigurationTemplatesCallable(
      const DescribeLaunchConfigurationTemplatesRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::DescribeLaunchConfigurationTemplates, request);
  }

  /**
   * An Async wrapper for DescribeLaunchConfigurationTemplates that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DescribeLaunchConfigurationTemplatesRequestT = Model::DescribeLaunchConfigurationTemplatesRequest>
  void DescribeLaunchConfigurationTemplatesAsync(const DescribeLaunchConfigurationTemplatesResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                 const DescribeLaunchConfigurationTemplatesRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::DescribeLaunchConfigurationTemplates, request, handler, context);
  }

  /**
   * <p>Lists all ReplicationConfigurationTemplates, filtered by Source Server
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeReplicationConfigurationTemplates">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeReplicationConfigurationTemplatesOutcome DescribeReplicationConfigurationTemplates(
      const Model::DescribeReplicationConfigurationTemplatesRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeReplicationConfigurationTemplates that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DescribeReplicationConfigurationTemplatesRequestT = Model::DescribeReplicationConfigurationTemplatesRequest>
  Model::DescribeReplicationConfigurationTemplatesOutcomeCallable DescribeReplicationConfigurationTemplatesCallable(
      const DescribeReplicationConfigurationTemplatesRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::DescribeReplicationConfigurationTemplates, request);
  }

  /**
   * An Async wrapper for DescribeReplicationConfigurationTemplates that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DescribeReplicationConfigurationTemplatesRequestT = Model::DescribeReplicationConfigurationTemplatesRequest>
  void DescribeReplicationConfigurationTemplatesAsync(const DescribeReplicationConfigurationTemplatesResponseReceivedHandler& handler,
                                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                      const DescribeReplicationConfigurationTemplatesRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::DescribeReplicationConfigurationTemplates, request, handler, context);
  }

  /**
   * <p>Retrieves all SourceServers or multiple SourceServers by ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeSourceServers">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeSourceServersOutcome DescribeSourceServers(const Model::DescribeSourceServersRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeSourceServers that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeSourceServersRequestT = Model::DescribeSourceServersRequest>
  Model::DescribeSourceServersOutcomeCallable DescribeSourceServersCallable(const DescribeSourceServersRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::DescribeSourceServers, request);
  }

  /**
   * An Async wrapper for DescribeSourceServers that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeSourceServersRequestT = Model::DescribeSourceServersRequest>
  void DescribeSourceServersAsync(const DescribeSourceServersResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const DescribeSourceServersRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::DescribeSourceServers, request, handler, context);
  }

  /**
   * <p>Returns a list of the installed vCenter clients.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeVcenterClients">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeVcenterClientsOutcome DescribeVcenterClients(const Model::DescribeVcenterClientsRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeVcenterClients that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeVcenterClientsRequestT = Model::DescribeVcenterClientsRequest>
  Model::DescribeVcenterClientsOutcomeCallable DescribeVcenterClientsCallable(const DescribeVcenterClientsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::DescribeVcenterClients, request);
  }

  /**
   * An Async wrapper for DescribeVcenterClients that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeVcenterClientsRequestT = Model::DescribeVcenterClientsRequest>
  void DescribeVcenterClientsAsync(const DescribeVcenterClientsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const DescribeVcenterClientsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::DescribeVcenterClients, request, handler, context);
  }

  /**
   * <p>Disassociate applications from wave.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DisassociateApplications">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateApplicationsOutcome DisassociateApplications(const Model::DisassociateApplicationsRequest& request) const;

  /**
   * A Callable wrapper for DisassociateApplications that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateApplicationsRequestT = Model::DisassociateApplicationsRequest>
  Model::DisassociateApplicationsOutcomeCallable DisassociateApplicationsCallable(const DisassociateApplicationsRequestT& request) const {
    return SubmitCallable(&MgnClient::DisassociateApplications, request);
  }

  /**
   * An Async wrapper for DisassociateApplications that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociateApplicationsRequestT = Model::DisassociateApplicationsRequest>
  void DisassociateApplicationsAsync(const DisassociateApplicationsRequestT& request,
                                     const DisassociateApplicationsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DisassociateApplications, request, handler, context);
  }

  /**
   * <p>Disassociate source servers from application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DisassociateSourceServers">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateSourceServersOutcome DisassociateSourceServers(const Model::DisassociateSourceServersRequest& request) const;

  /**
   * A Callable wrapper for DisassociateSourceServers that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateSourceServersRequestT = Model::DisassociateSourceServersRequest>
  Model::DisassociateSourceServersOutcomeCallable DisassociateSourceServersCallable(
      const DisassociateSourceServersRequestT& request) const {
    return SubmitCallable(&MgnClient::DisassociateSourceServers, request);
  }

  /**
   * An Async wrapper for DisassociateSourceServers that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociateSourceServersRequestT = Model::DisassociateSourceServersRequest>
  void DisassociateSourceServersAsync(const DisassociateSourceServersRequestT& request,
                                      const DisassociateSourceServersResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DisassociateSourceServers, request, handler, context);
  }

  /**
   * <p>Disconnects specific Source Servers from Application Migration Service. Data
   * replication is stopped immediately. All AWS resources created by Application
   * Migration Service for enabling the replication of these source servers will be
   * terminated / deleted within 90 minutes. Launched Test or Cutover instances will
   * NOT be terminated. If the agent on the source server has not been prevented from
   * communicating with the Application Migration Service service, then it will
   * receive a command to uninstall itself (within approximately 10 minutes). The
   * following properties of the SourceServer will be changed immediately:
   * dataReplicationInfo.dataReplicationState will be set to DISCONNECTED; The
   * totalStorageBytes property for each of dataReplicationInfo.replicatedDisks will
   * be set to zero; dataReplicationInfo.lagDuration and
   * dataReplicationInfo.lagDuration will be nullified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DisconnectFromService">AWS
   * API Reference</a></p>
   */
  virtual Model::DisconnectFromServiceOutcome DisconnectFromService(const Model::DisconnectFromServiceRequest& request) const;

  /**
   * A Callable wrapper for DisconnectFromService that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisconnectFromServiceRequestT = Model::DisconnectFromServiceRequest>
  Model::DisconnectFromServiceOutcomeCallable DisconnectFromServiceCallable(const DisconnectFromServiceRequestT& request) const {
    return SubmitCallable(&MgnClient::DisconnectFromService, request);
  }

  /**
   * An Async wrapper for DisconnectFromService that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisconnectFromServiceRequestT = Model::DisconnectFromServiceRequest>
  void DisconnectFromServiceAsync(const DisconnectFromServiceRequestT& request, const DisconnectFromServiceResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::DisconnectFromService, request, handler, context);
  }

  /**
   * <p>Finalizes the cutover immediately for specific Source Servers. All AWS
   * resources created by Application Migration Service for enabling the replication
   * of these source servers will be terminated / deleted within 90 minutes. Launched
   * Test or Cutover instances will NOT be terminated. The AWS Replication Agent will
   * receive a command to uninstall itself (within 10 minutes). The following
   * properties of the SourceServer will be changed immediately:
   * dataReplicationInfo.dataReplicationState will be changed to DISCONNECTED; The
   * SourceServer.lifeCycle.state will be changed to CUTOVER; The totalStorageBytes
   * property fo each of dataReplicationInfo.replicatedDisks will be set to zero;
   * dataReplicationInfo.lagDuration and dataReplicationInfo.lagDuration will be
   * nullified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/FinalizeCutover">AWS
   * API Reference</a></p>
   */
  virtual Model::FinalizeCutoverOutcome FinalizeCutover(const Model::FinalizeCutoverRequest& request) const;

  /**
   * A Callable wrapper for FinalizeCutover that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename FinalizeCutoverRequestT = Model::FinalizeCutoverRequest>
  Model::FinalizeCutoverOutcomeCallable FinalizeCutoverCallable(const FinalizeCutoverRequestT& request) const {
    return SubmitCallable(&MgnClient::FinalizeCutover, request);
  }

  /**
   * An Async wrapper for FinalizeCutover that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename FinalizeCutoverRequestT = Model::FinalizeCutoverRequest>
  void FinalizeCutoverAsync(const FinalizeCutoverRequestT& request, const FinalizeCutoverResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::FinalizeCutover, request, handler, context);
  }

  /**
   * <p>Lists all LaunchConfigurations available, filtered by Source Server
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/GetLaunchConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetLaunchConfigurationOutcome GetLaunchConfiguration(const Model::GetLaunchConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetLaunchConfigurationRequestT = Model::GetLaunchConfigurationRequest>
  Model::GetLaunchConfigurationOutcomeCallable GetLaunchConfigurationCallable(const GetLaunchConfigurationRequestT& request) const {
    return SubmitCallable(&MgnClient::GetLaunchConfiguration, request);
  }

  /**
   * An Async wrapper for GetLaunchConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetLaunchConfigurationRequestT = Model::GetLaunchConfigurationRequest>
  void GetLaunchConfigurationAsync(const GetLaunchConfigurationRequestT& request,
                                   const GetLaunchConfigurationResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::GetLaunchConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a network migration definition including source and
   * target configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/GetNetworkMigrationDefinition">AWS
   * API Reference</a></p>
   */
  virtual Model::GetNetworkMigrationDefinitionOutcome GetNetworkMigrationDefinition(
      const Model::GetNetworkMigrationDefinitionRequest& request) const;

  /**
   * A Callable wrapper for GetNetworkMigrationDefinition that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetNetworkMigrationDefinitionRequestT = Model::GetNetworkMigrationDefinitionRequest>
  Model::GetNetworkMigrationDefinitionOutcomeCallable GetNetworkMigrationDefinitionCallable(
      const GetNetworkMigrationDefinitionRequestT& request) const {
    return SubmitCallable(&MgnClient::GetNetworkMigrationDefinition, request);
  }

  /**
   * An Async wrapper for GetNetworkMigrationDefinition that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetNetworkMigrationDefinitionRequestT = Model::GetNetworkMigrationDefinitionRequest>
  void GetNetworkMigrationDefinitionAsync(const GetNetworkMigrationDefinitionRequestT& request,
                                          const GetNetworkMigrationDefinitionResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::GetNetworkMigrationDefinition, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific construct within a mapper
   * segment, including its properties and configuration data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/GetNetworkMigrationMapperSegmentConstruct">AWS
   * API Reference</a></p>
   */
  virtual Model::GetNetworkMigrationMapperSegmentConstructOutcome GetNetworkMigrationMapperSegmentConstruct(
      const Model::GetNetworkMigrationMapperSegmentConstructRequest& request) const;

  /**
   * A Callable wrapper for GetNetworkMigrationMapperSegmentConstruct that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetNetworkMigrationMapperSegmentConstructRequestT = Model::GetNetworkMigrationMapperSegmentConstructRequest>
  Model::GetNetworkMigrationMapperSegmentConstructOutcomeCallable GetNetworkMigrationMapperSegmentConstructCallable(
      const GetNetworkMigrationMapperSegmentConstructRequestT& request) const {
    return SubmitCallable(&MgnClient::GetNetworkMigrationMapperSegmentConstruct, request);
  }

  /**
   * An Async wrapper for GetNetworkMigrationMapperSegmentConstruct that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetNetworkMigrationMapperSegmentConstructRequestT = Model::GetNetworkMigrationMapperSegmentConstructRequest>
  void GetNetworkMigrationMapperSegmentConstructAsync(
      const GetNetworkMigrationMapperSegmentConstructRequestT& request,
      const GetNetworkMigrationMapperSegmentConstructResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::GetNetworkMigrationMapperSegmentConstruct, request, handler, context);
  }

  /**
   * <p>Lists all ReplicationConfigurations, filtered by Source Server
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/GetReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetReplicationConfigurationOutcome GetReplicationConfiguration(
      const Model::GetReplicationConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetReplicationConfigurationRequestT = Model::GetReplicationConfigurationRequest>
  Model::GetReplicationConfigurationOutcomeCallable GetReplicationConfigurationCallable(
      const GetReplicationConfigurationRequestT& request) const {
    return SubmitCallable(&MgnClient::GetReplicationConfiguration, request);
  }

  /**
   * An Async wrapper for GetReplicationConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetReplicationConfigurationRequestT = Model::GetReplicationConfigurationRequest>
  void GetReplicationConfigurationAsync(const GetReplicationConfigurationRequestT& request,
                                        const GetReplicationConfigurationResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::GetReplicationConfiguration, request, handler, context);
  }

  /**
   * <p>Initialize Application Migration Service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/InitializeService">AWS
   * API Reference</a></p>
   */
  virtual Model::InitializeServiceOutcome InitializeService(const Model::InitializeServiceRequest& request = {}) const;

  /**
   * A Callable wrapper for InitializeService that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InitializeServiceRequestT = Model::InitializeServiceRequest>
  Model::InitializeServiceOutcomeCallable InitializeServiceCallable(const InitializeServiceRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::InitializeService, request);
  }

  /**
   * An Async wrapper for InitializeService that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename InitializeServiceRequestT = Model::InitializeServiceRequest>
  void InitializeServiceAsync(const InitializeServiceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const InitializeServiceRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::InitializeService, request, handler, context);
  }

  /**
   * <p>Retrieves all applications or multiple applications by ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListApplications">AWS
   * API Reference</a></p>
   */
  virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListApplicationsRequestT = Model::ListApplicationsRequest>
  Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::ListApplications, request);
  }

  /**
   * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListApplicationsRequestT = Model::ListApplicationsRequest>
  void ListApplicationsAsync(const ListApplicationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListApplicationsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::ListApplications, request, handler, context);
  }

  /**
   * <p>List Connectors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListConnectors">AWS
   * API Reference</a></p>
   */
  virtual Model::ListConnectorsOutcome ListConnectors(const Model::ListConnectorsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListConnectorsRequestT = Model::ListConnectorsRequest>
  Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const ListConnectorsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::ListConnectors, request);
  }

  /**
   * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListConnectorsRequestT = Model::ListConnectorsRequest>
  void ListConnectorsAsync(const ListConnectorsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListConnectorsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::ListConnectors, request, handler, context);
  }

  /**
   * <p>List export errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListExportErrors">AWS
   * API Reference</a></p>
   */
  virtual Model::ListExportErrorsOutcome ListExportErrors(const Model::ListExportErrorsRequest& request) const;

  /**
   * A Callable wrapper for ListExportErrors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListExportErrorsRequestT = Model::ListExportErrorsRequest>
  Model::ListExportErrorsOutcomeCallable ListExportErrorsCallable(const ListExportErrorsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListExportErrors, request);
  }

  /**
   * An Async wrapper for ListExportErrors that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListExportErrorsRequestT = Model::ListExportErrorsRequest>
  void ListExportErrorsAsync(const ListExportErrorsRequestT& request, const ListExportErrorsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListExportErrors, request, handler, context);
  }

  /**
   * <p>List exports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListExports">AWS API
   * Reference</a></p>
   */
  virtual Model::ListExportsOutcome ListExports(const Model::ListExportsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListExports that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListExportsRequestT = Model::ListExportsRequest>
  Model::ListExportsOutcomeCallable ListExportsCallable(const ListExportsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::ListExports, request);
  }

  /**
   * An Async wrapper for ListExports that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListExportsRequestT = Model::ListExportsRequest>
  void ListExportsAsync(const ListExportsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListExportsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::ListExports, request, handler, context);
  }

  /**
   * <p>List import errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListImportErrors">AWS
   * API Reference</a></p>
   */
  virtual Model::ListImportErrorsOutcome ListImportErrors(const Model::ListImportErrorsRequest& request) const;

  /**
   * A Callable wrapper for ListImportErrors that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListImportErrorsRequestT = Model::ListImportErrorsRequest>
  Model::ListImportErrorsOutcomeCallable ListImportErrorsCallable(const ListImportErrorsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListImportErrors, request);
  }

  /**
   * An Async wrapper for ListImportErrors that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListImportErrorsRequestT = Model::ListImportErrorsRequest>
  void ListImportErrorsAsync(const ListImportErrorsRequestT& request, const ListImportErrorsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListImportErrors, request, handler, context);
  }

  /**
   * <p>Lists import file enrichment jobs with optional filtering by job
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListImportFileEnrichments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListImportFileEnrichmentsOutcome ListImportFileEnrichments(
      const Model::ListImportFileEnrichmentsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListImportFileEnrichments that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListImportFileEnrichmentsRequestT = Model::ListImportFileEnrichmentsRequest>
  Model::ListImportFileEnrichmentsOutcomeCallable ListImportFileEnrichmentsCallable(
      const ListImportFileEnrichmentsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::ListImportFileEnrichments, request);
  }

  /**
   * An Async wrapper for ListImportFileEnrichments that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListImportFileEnrichmentsRequestT = Model::ListImportFileEnrichmentsRequest>
  void ListImportFileEnrichmentsAsync(const ListImportFileEnrichmentsResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const ListImportFileEnrichmentsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::ListImportFileEnrichments, request, handler, context);
  }

  /**
   * <p>List imports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListImports">AWS API
   * Reference</a></p>
   */
  virtual Model::ListImportsOutcome ListImports(const Model::ListImportsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListImports that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListImportsRequestT = Model::ListImportsRequest>
  Model::ListImportsOutcomeCallable ListImportsCallable(const ListImportsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::ListImports, request);
  }

  /**
   * An Async wrapper for ListImports that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListImportsRequestT = Model::ListImportsRequest>
  void ListImportsAsync(const ListImportsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListImportsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::ListImports, request, handler, context);
  }

  /**
   * <p>List Managed Accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListManagedAccounts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListManagedAccountsOutcome ListManagedAccounts(const Model::ListManagedAccountsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListManagedAccounts that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListManagedAccountsRequestT = Model::ListManagedAccountsRequest>
  Model::ListManagedAccountsOutcomeCallable ListManagedAccountsCallable(const ListManagedAccountsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::ListManagedAccounts, request);
  }

  /**
   * An Async wrapper for ListManagedAccounts that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListManagedAccountsRequestT = Model::ListManagedAccountsRequest>
  void ListManagedAccountsAsync(const ListManagedAccountsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const ListManagedAccountsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::ListManagedAccounts, request, handler, context);
  }

  /**
   * <p>Lists network migration analysis jobs for a specified execution. Returns
   * information about analysis job status and results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationAnalyses">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationAnalysesOutcome ListNetworkMigrationAnalyses(
      const Model::ListNetworkMigrationAnalysesRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationAnalyses that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListNetworkMigrationAnalysesRequestT = Model::ListNetworkMigrationAnalysesRequest>
  Model::ListNetworkMigrationAnalysesOutcomeCallable ListNetworkMigrationAnalysesCallable(
      const ListNetworkMigrationAnalysesRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationAnalyses, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationAnalyses that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListNetworkMigrationAnalysesRequestT = Model::ListNetworkMigrationAnalysesRequest>
  void ListNetworkMigrationAnalysesAsync(const ListNetworkMigrationAnalysesRequestT& request,
                                         const ListNetworkMigrationAnalysesResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationAnalyses, request, handler, context);
  }

  /**
   * <p>Lists the results of network migration analyses, showing connectivity and
   * compatibility findings for migrated resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationAnalysisResults">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationAnalysisResultsOutcome ListNetworkMigrationAnalysisResults(
      const Model::ListNetworkMigrationAnalysisResultsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationAnalysisResults that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListNetworkMigrationAnalysisResultsRequestT = Model::ListNetworkMigrationAnalysisResultsRequest>
  Model::ListNetworkMigrationAnalysisResultsOutcomeCallable ListNetworkMigrationAnalysisResultsCallable(
      const ListNetworkMigrationAnalysisResultsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationAnalysisResults, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationAnalysisResults that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListNetworkMigrationAnalysisResultsRequestT = Model::ListNetworkMigrationAnalysisResultsRequest>
  void ListNetworkMigrationAnalysisResultsAsync(const ListNetworkMigrationAnalysisResultsRequestT& request,
                                                const ListNetworkMigrationAnalysisResultsResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationAnalysisResults, request, handler, context);
  }

  /**
   * <p>Lists code generation segments, which represent individual infrastructure
   * components generated as code templates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationCodeGenerationSegments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationCodeGenerationSegmentsOutcome ListNetworkMigrationCodeGenerationSegments(
      const Model::ListNetworkMigrationCodeGenerationSegmentsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationCodeGenerationSegments that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListNetworkMigrationCodeGenerationSegmentsRequestT = Model::ListNetworkMigrationCodeGenerationSegmentsRequest>
  Model::ListNetworkMigrationCodeGenerationSegmentsOutcomeCallable ListNetworkMigrationCodeGenerationSegmentsCallable(
      const ListNetworkMigrationCodeGenerationSegmentsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationCodeGenerationSegments, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationCodeGenerationSegments that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListNetworkMigrationCodeGenerationSegmentsRequestT = Model::ListNetworkMigrationCodeGenerationSegmentsRequest>
  void ListNetworkMigrationCodeGenerationSegmentsAsync(
      const ListNetworkMigrationCodeGenerationSegmentsRequestT& request,
      const ListNetworkMigrationCodeGenerationSegmentsResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationCodeGenerationSegments, request, handler, context);
  }

  /**
   * <p>Lists network migration code generation jobs, which convert network mappings
   * into infrastructure-as-code templates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationCodeGenerations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationCodeGenerationsOutcome ListNetworkMigrationCodeGenerations(
      const Model::ListNetworkMigrationCodeGenerationsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationCodeGenerations that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListNetworkMigrationCodeGenerationsRequestT = Model::ListNetworkMigrationCodeGenerationsRequest>
  Model::ListNetworkMigrationCodeGenerationsOutcomeCallable ListNetworkMigrationCodeGenerationsCallable(
      const ListNetworkMigrationCodeGenerationsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationCodeGenerations, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationCodeGenerations that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListNetworkMigrationCodeGenerationsRequestT = Model::ListNetworkMigrationCodeGenerationsRequest>
  void ListNetworkMigrationCodeGenerationsAsync(const ListNetworkMigrationCodeGenerationsRequestT& request,
                                                const ListNetworkMigrationCodeGenerationsResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationCodeGenerations, request, handler, context);
  }

  /**
   * <p>Lists all network migration definitions in the account, with optional
   * filtering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationDefinitions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationDefinitionsOutcome ListNetworkMigrationDefinitions(
      const Model::ListNetworkMigrationDefinitionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListNetworkMigrationDefinitions that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListNetworkMigrationDefinitionsRequestT = Model::ListNetworkMigrationDefinitionsRequest>
  Model::ListNetworkMigrationDefinitionsOutcomeCallable ListNetworkMigrationDefinitionsCallable(
      const ListNetworkMigrationDefinitionsRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationDefinitions, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationDefinitions that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListNetworkMigrationDefinitionsRequestT = Model::ListNetworkMigrationDefinitionsRequest>
  void ListNetworkMigrationDefinitionsAsync(const ListNetworkMigrationDefinitionsResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                            const ListNetworkMigrationDefinitionsRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationDefinitions, request, handler, context);
  }

  /**
   * <p>Lists CloudFormation stacks that have been deployed as part of the network
   * migration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationDeployedStacks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationDeployedStacksOutcome ListNetworkMigrationDeployedStacks(
      const Model::ListNetworkMigrationDeployedStacksRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationDeployedStacks that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListNetworkMigrationDeployedStacksRequestT = Model::ListNetworkMigrationDeployedStacksRequest>
  Model::ListNetworkMigrationDeployedStacksOutcomeCallable ListNetworkMigrationDeployedStacksCallable(
      const ListNetworkMigrationDeployedStacksRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationDeployedStacks, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationDeployedStacks that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListNetworkMigrationDeployedStacksRequestT = Model::ListNetworkMigrationDeployedStacksRequest>
  void ListNetworkMigrationDeployedStacksAsync(const ListNetworkMigrationDeployedStacksRequestT& request,
                                               const ListNetworkMigrationDeployedStacksResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationDeployedStacks, request, handler, context);
  }

  /**
   * <p>Lists network migration deployment jobs and their current
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationDeployments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationDeploymentsOutcome ListNetworkMigrationDeployments(
      const Model::ListNetworkMigrationDeploymentsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationDeployments that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListNetworkMigrationDeploymentsRequestT = Model::ListNetworkMigrationDeploymentsRequest>
  Model::ListNetworkMigrationDeploymentsOutcomeCallable ListNetworkMigrationDeploymentsCallable(
      const ListNetworkMigrationDeploymentsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationDeployments, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationDeployments that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListNetworkMigrationDeploymentsRequestT = Model::ListNetworkMigrationDeploymentsRequest>
  void ListNetworkMigrationDeploymentsAsync(const ListNetworkMigrationDeploymentsRequestT& request,
                                            const ListNetworkMigrationDeploymentsResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationDeployments, request, handler, context);
  }

  /**
   * <p>Lists network migration execution instances for a given definition, showing
   * the status and progress of each execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationExecutions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationExecutionsOutcome ListNetworkMigrationExecutions(
      const Model::ListNetworkMigrationExecutionsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationExecutions that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListNetworkMigrationExecutionsRequestT = Model::ListNetworkMigrationExecutionsRequest>
  Model::ListNetworkMigrationExecutionsOutcomeCallable ListNetworkMigrationExecutionsCallable(
      const ListNetworkMigrationExecutionsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationExecutions, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationExecutions that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListNetworkMigrationExecutionsRequestT = Model::ListNetworkMigrationExecutionsRequest>
  void ListNetworkMigrationExecutionsAsync(const ListNetworkMigrationExecutionsRequestT& request,
                                           const ListNetworkMigrationExecutionsResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationExecutions, request, handler, context);
  }

  /**
   * <p>Lists constructs within a mapper segment, representing individual
   * infrastructure components like VPCs, subnets, or security groups.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationMapperSegmentConstructs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationMapperSegmentConstructsOutcome ListNetworkMigrationMapperSegmentConstructs(
      const Model::ListNetworkMigrationMapperSegmentConstructsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationMapperSegmentConstructs that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListNetworkMigrationMapperSegmentConstructsRequestT = Model::ListNetworkMigrationMapperSegmentConstructsRequest>
  Model::ListNetworkMigrationMapperSegmentConstructsOutcomeCallable ListNetworkMigrationMapperSegmentConstructsCallable(
      const ListNetworkMigrationMapperSegmentConstructsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationMapperSegmentConstructs, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationMapperSegmentConstructs that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListNetworkMigrationMapperSegmentConstructsRequestT = Model::ListNetworkMigrationMapperSegmentConstructsRequest>
  void ListNetworkMigrationMapperSegmentConstructsAsync(
      const ListNetworkMigrationMapperSegmentConstructsRequestT& request,
      const ListNetworkMigrationMapperSegmentConstructsResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationMapperSegmentConstructs, request, handler, context);
  }

  /**
   * <p>Lists mapper segments, which represent logical groupings of network resources
   * to be migrated together.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationMapperSegments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationMapperSegmentsOutcome ListNetworkMigrationMapperSegments(
      const Model::ListNetworkMigrationMapperSegmentsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationMapperSegments that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListNetworkMigrationMapperSegmentsRequestT = Model::ListNetworkMigrationMapperSegmentsRequest>
  Model::ListNetworkMigrationMapperSegmentsOutcomeCallable ListNetworkMigrationMapperSegmentsCallable(
      const ListNetworkMigrationMapperSegmentsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationMapperSegments, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationMapperSegments that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListNetworkMigrationMapperSegmentsRequestT = Model::ListNetworkMigrationMapperSegmentsRequest>
  void ListNetworkMigrationMapperSegmentsAsync(const ListNetworkMigrationMapperSegmentsRequestT& request,
                                               const ListNetworkMigrationMapperSegmentsResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationMapperSegments, request, handler, context);
  }

  /**
   * <p>Lists mapping update jobs, which apply customer modifications to the
   * generated network mappings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationMappingUpdates">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationMappingUpdatesOutcome ListNetworkMigrationMappingUpdates(
      const Model::ListNetworkMigrationMappingUpdatesRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationMappingUpdates that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListNetworkMigrationMappingUpdatesRequestT = Model::ListNetworkMigrationMappingUpdatesRequest>
  Model::ListNetworkMigrationMappingUpdatesOutcomeCallable ListNetworkMigrationMappingUpdatesCallable(
      const ListNetworkMigrationMappingUpdatesRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationMappingUpdates, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationMappingUpdates that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListNetworkMigrationMappingUpdatesRequestT = Model::ListNetworkMigrationMappingUpdatesRequest>
  void ListNetworkMigrationMappingUpdatesAsync(const ListNetworkMigrationMappingUpdatesRequestT& request,
                                               const ListNetworkMigrationMappingUpdatesResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationMappingUpdates, request, handler, context);
  }

  /**
   * <p>Lists network migration mapping jobs, which analyze and create relationships
   * between source and target network resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationMappings">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworkMigrationMappingsOutcome ListNetworkMigrationMappings(
      const Model::ListNetworkMigrationMappingsRequest& request) const;

  /**
   * A Callable wrapper for ListNetworkMigrationMappings that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListNetworkMigrationMappingsRequestT = Model::ListNetworkMigrationMappingsRequest>
  Model::ListNetworkMigrationMappingsOutcomeCallable ListNetworkMigrationMappingsCallable(
      const ListNetworkMigrationMappingsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListNetworkMigrationMappings, request);
  }

  /**
   * An Async wrapper for ListNetworkMigrationMappings that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListNetworkMigrationMappingsRequestT = Model::ListNetworkMigrationMappingsRequest>
  void ListNetworkMigrationMappingsAsync(const ListNetworkMigrationMappingsRequestT& request,
                                         const ListNetworkMigrationMappingsResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListNetworkMigrationMappings, request, handler, context);
  }

  /**
   * <p>List source server post migration custom actions.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListSourceServerActions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSourceServerActionsOutcome ListSourceServerActions(const Model::ListSourceServerActionsRequest& request) const;

  /**
   * A Callable wrapper for ListSourceServerActions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSourceServerActionsRequestT = Model::ListSourceServerActionsRequest>
  Model::ListSourceServerActionsOutcomeCallable ListSourceServerActionsCallable(const ListSourceServerActionsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListSourceServerActions, request);
  }

  /**
   * An Async wrapper for ListSourceServerActions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSourceServerActionsRequestT = Model::ListSourceServerActionsRequest>
  void ListSourceServerActionsAsync(const ListSourceServerActionsRequestT& request,
                                    const ListSourceServerActionsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListSourceServerActions, request, handler, context);
  }

  /**
   * <p>List all tags for your Application Migration Service resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&MgnClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>List template post migration custom actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListTemplateActions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTemplateActionsOutcome ListTemplateActions(const Model::ListTemplateActionsRequest& request) const;

  /**
   * A Callable wrapper for ListTemplateActions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTemplateActionsRequestT = Model::ListTemplateActionsRequest>
  Model::ListTemplateActionsOutcomeCallable ListTemplateActionsCallable(const ListTemplateActionsRequestT& request) const {
    return SubmitCallable(&MgnClient::ListTemplateActions, request);
  }

  /**
   * An Async wrapper for ListTemplateActions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTemplateActionsRequestT = Model::ListTemplateActionsRequest>
  void ListTemplateActionsAsync(const ListTemplateActionsRequestT& request, const ListTemplateActionsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ListTemplateActions, request, handler, context);
  }

  /**
   * <p>Retrieves all waves or multiple waves by ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListWaves">AWS API
   * Reference</a></p>
   */
  virtual Model::ListWavesOutcome ListWaves(const Model::ListWavesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListWaves that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListWavesRequestT = Model::ListWavesRequest>
  Model::ListWavesOutcomeCallable ListWavesCallable(const ListWavesRequestT& request = {}) const {
    return SubmitCallable(&MgnClient::ListWaves, request);
  }

  /**
   * An Async wrapper for ListWaves that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListWavesRequestT = Model::ListWavesRequest>
  void ListWavesAsync(const ListWavesResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const ListWavesRequestT& request = {}) const {
    return SubmitAsync(&MgnClient::ListWaves, request, handler, context);
  }

  /**
   * <p>Archives specific Source Servers by setting the SourceServer.isArchived
   * property to true for specified SourceServers by ID. This command only works for
   * SourceServers with a lifecycle. state which equals DISCONNECTED or
   * CUTOVER.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/MarkAsArchived">AWS
   * API Reference</a></p>
   */
  virtual Model::MarkAsArchivedOutcome MarkAsArchived(const Model::MarkAsArchivedRequest& request) const;

  /**
   * A Callable wrapper for MarkAsArchived that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename MarkAsArchivedRequestT = Model::MarkAsArchivedRequest>
  Model::MarkAsArchivedOutcomeCallable MarkAsArchivedCallable(const MarkAsArchivedRequestT& request) const {
    return SubmitCallable(&MgnClient::MarkAsArchived, request);
  }

  /**
   * An Async wrapper for MarkAsArchived that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename MarkAsArchivedRequestT = Model::MarkAsArchivedRequest>
  void MarkAsArchivedAsync(const MarkAsArchivedRequestT& request, const MarkAsArchivedResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::MarkAsArchived, request, handler, context);
  }

  /**
   * <p>Pause Replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/PauseReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::PauseReplicationOutcome PauseReplication(const Model::PauseReplicationRequest& request) const;

  /**
   * A Callable wrapper for PauseReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PauseReplicationRequestT = Model::PauseReplicationRequest>
  Model::PauseReplicationOutcomeCallable PauseReplicationCallable(const PauseReplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::PauseReplication, request);
  }

  /**
   * An Async wrapper for PauseReplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PauseReplicationRequestT = Model::PauseReplicationRequest>
  void PauseReplicationAsync(const PauseReplicationRequestT& request, const PauseReplicationResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::PauseReplication, request, handler, context);
  }

  /**
   * <p>Put source server post migration custom action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/PutSourceServerAction">AWS
   * API Reference</a></p>
   */
  virtual Model::PutSourceServerActionOutcome PutSourceServerAction(const Model::PutSourceServerActionRequest& request) const;

  /**
   * A Callable wrapper for PutSourceServerAction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutSourceServerActionRequestT = Model::PutSourceServerActionRequest>
  Model::PutSourceServerActionOutcomeCallable PutSourceServerActionCallable(const PutSourceServerActionRequestT& request) const {
    return SubmitCallable(&MgnClient::PutSourceServerAction, request);
  }

  /**
   * An Async wrapper for PutSourceServerAction that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutSourceServerActionRequestT = Model::PutSourceServerActionRequest>
  void PutSourceServerActionAsync(const PutSourceServerActionRequestT& request, const PutSourceServerActionResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::PutSourceServerAction, request, handler, context);
  }

  /**
   * <p>Put template post migration custom action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/PutTemplateAction">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTemplateActionOutcome PutTemplateAction(const Model::PutTemplateActionRequest& request) const;

  /**
   * A Callable wrapper for PutTemplateAction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutTemplateActionRequestT = Model::PutTemplateActionRequest>
  Model::PutTemplateActionOutcomeCallable PutTemplateActionCallable(const PutTemplateActionRequestT& request) const {
    return SubmitCallable(&MgnClient::PutTemplateAction, request);
  }

  /**
   * An Async wrapper for PutTemplateAction that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutTemplateActionRequestT = Model::PutTemplateActionRequest>
  void PutTemplateActionAsync(const PutTemplateActionRequestT& request, const PutTemplateActionResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::PutTemplateAction, request, handler, context);
  }

  /**
   * <p>Remove source server post migration custom action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RemoveSourceServerAction">AWS
   * API Reference</a></p>
   */
  virtual Model::RemoveSourceServerActionOutcome RemoveSourceServerAction(const Model::RemoveSourceServerActionRequest& request) const;

  /**
   * A Callable wrapper for RemoveSourceServerAction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RemoveSourceServerActionRequestT = Model::RemoveSourceServerActionRequest>
  Model::RemoveSourceServerActionOutcomeCallable RemoveSourceServerActionCallable(const RemoveSourceServerActionRequestT& request) const {
    return SubmitCallable(&MgnClient::RemoveSourceServerAction, request);
  }

  /**
   * An Async wrapper for RemoveSourceServerAction that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RemoveSourceServerActionRequestT = Model::RemoveSourceServerActionRequest>
  void RemoveSourceServerActionAsync(const RemoveSourceServerActionRequestT& request,
                                     const RemoveSourceServerActionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::RemoveSourceServerAction, request, handler, context);
  }

  /**
   * <p>Remove template post migration custom action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RemoveTemplateAction">AWS
   * API Reference</a></p>
   */
  virtual Model::RemoveTemplateActionOutcome RemoveTemplateAction(const Model::RemoveTemplateActionRequest& request) const;

  /**
   * A Callable wrapper for RemoveTemplateAction that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RemoveTemplateActionRequestT = Model::RemoveTemplateActionRequest>
  Model::RemoveTemplateActionOutcomeCallable RemoveTemplateActionCallable(const RemoveTemplateActionRequestT& request) const {
    return SubmitCallable(&MgnClient::RemoveTemplateAction, request);
  }

  /**
   * An Async wrapper for RemoveTemplateAction that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RemoveTemplateActionRequestT = Model::RemoveTemplateActionRequest>
  void RemoveTemplateActionAsync(const RemoveTemplateActionRequestT& request, const RemoveTemplateActionResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::RemoveTemplateAction, request, handler, context);
  }

  /**
   * <p>Resume Replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ResumeReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::ResumeReplicationOutcome ResumeReplication(const Model::ResumeReplicationRequest& request) const;

  /**
   * A Callable wrapper for ResumeReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ResumeReplicationRequestT = Model::ResumeReplicationRequest>
  Model::ResumeReplicationOutcomeCallable ResumeReplicationCallable(const ResumeReplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::ResumeReplication, request);
  }

  /**
   * An Async wrapper for ResumeReplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ResumeReplicationRequestT = Model::ResumeReplicationRequest>
  void ResumeReplicationAsync(const ResumeReplicationRequestT& request, const ResumeReplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::ResumeReplication, request, handler, context);
  }

  /**
   * <p>Causes the data replication initiation sequence to begin immediately upon
   * next Handshake for specified SourceServer IDs, regardless of when the previous
   * initiation started. This command will not work if the SourceServer is not
   * stalled or is in a DISCONNECTED or STOPPED state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RetryDataReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::RetryDataReplicationOutcome RetryDataReplication(const Model::RetryDataReplicationRequest& request) const;

  /**
   * A Callable wrapper for RetryDataReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RetryDataReplicationRequestT = Model::RetryDataReplicationRequest>
  Model::RetryDataReplicationOutcomeCallable RetryDataReplicationCallable(const RetryDataReplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::RetryDataReplication, request);
  }

  /**
   * An Async wrapper for RetryDataReplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RetryDataReplicationRequestT = Model::RetryDataReplicationRequest>
  void RetryDataReplicationAsync(const RetryDataReplicationRequestT& request, const RetryDataReplicationResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::RetryDataReplication, request, handler, context);
  }

  /**
   * <p>Launches a Cutover Instance for specific Source Servers. This command starts
   * a LAUNCH job whose initiatedBy property is StartCutover and changes the
   * SourceServer.lifeCycle.state property to CUTTING_OVER.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartCutover">AWS
   * API Reference</a></p>
   */
  virtual Model::StartCutoverOutcome StartCutover(const Model::StartCutoverRequest& request) const;

  /**
   * A Callable wrapper for StartCutover that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartCutoverRequestT = Model::StartCutoverRequest>
  Model::StartCutoverOutcomeCallable StartCutoverCallable(const StartCutoverRequestT& request) const {
    return SubmitCallable(&MgnClient::StartCutover, request);
  }

  /**
   * An Async wrapper for StartCutover that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartCutoverRequestT = Model::StartCutoverRequest>
  void StartCutoverAsync(const StartCutoverRequestT& request, const StartCutoverResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartCutover, request, handler, context);
  }

  /**
   * <p>Start export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartExport">AWS API
   * Reference</a></p>
   */
  virtual Model::StartExportOutcome StartExport(const Model::StartExportRequest& request) const;

  /**
   * A Callable wrapper for StartExport that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartExportRequestT = Model::StartExportRequest>
  Model::StartExportOutcomeCallable StartExportCallable(const StartExportRequestT& request) const {
    return SubmitCallable(&MgnClient::StartExport, request);
  }

  /**
   * An Async wrapper for StartExport that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartExportRequestT = Model::StartExportRequest>
  void StartExportAsync(const StartExportRequestT& request, const StartExportResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartExport, request, handler, context);
  }

  /**
   * <p>Start import.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartImport">AWS API
   * Reference</a></p>
   */
  virtual Model::StartImportOutcome StartImport(const Model::StartImportRequest& request) const;

  /**
   * A Callable wrapper for StartImport that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartImportRequestT = Model::StartImportRequest>
  Model::StartImportOutcomeCallable StartImportCallable(const StartImportRequestT& request) const {
    return SubmitCallable(&MgnClient::StartImport, request);
  }

  /**
   * An Async wrapper for StartImport that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartImportRequestT = Model::StartImportRequest>
  void StartImportAsync(const StartImportRequestT& request, const StartImportResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartImport, request, handler, context);
  }

  /**
   * <p>Starts an import file enrichment job to process and enrich network migration
   * import files with additional metadata and IP assignment
   * strategies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartImportFileEnrichment">AWS
   * API Reference</a></p>
   */
  virtual Model::StartImportFileEnrichmentOutcome StartImportFileEnrichment(const Model::StartImportFileEnrichmentRequest& request) const;

  /**
   * A Callable wrapper for StartImportFileEnrichment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartImportFileEnrichmentRequestT = Model::StartImportFileEnrichmentRequest>
  Model::StartImportFileEnrichmentOutcomeCallable StartImportFileEnrichmentCallable(
      const StartImportFileEnrichmentRequestT& request) const {
    return SubmitCallable(&MgnClient::StartImportFileEnrichment, request);
  }

  /**
   * An Async wrapper for StartImportFileEnrichment that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartImportFileEnrichmentRequestT = Model::StartImportFileEnrichmentRequest>
  void StartImportFileEnrichmentAsync(const StartImportFileEnrichmentRequestT& request,
                                      const StartImportFileEnrichmentResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartImportFileEnrichment, request, handler, context);
  }

  /**
   * <p>Starts a network migration analysis job to evaluate connectivity and
   * compatibility of the migration mappings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartNetworkMigrationAnalysis">AWS
   * API Reference</a></p>
   */
  virtual Model::StartNetworkMigrationAnalysisOutcome StartNetworkMigrationAnalysis(
      const Model::StartNetworkMigrationAnalysisRequest& request) const;

  /**
   * A Callable wrapper for StartNetworkMigrationAnalysis that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartNetworkMigrationAnalysisRequestT = Model::StartNetworkMigrationAnalysisRequest>
  Model::StartNetworkMigrationAnalysisOutcomeCallable StartNetworkMigrationAnalysisCallable(
      const StartNetworkMigrationAnalysisRequestT& request) const {
    return SubmitCallable(&MgnClient::StartNetworkMigrationAnalysis, request);
  }

  /**
   * An Async wrapper for StartNetworkMigrationAnalysis that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartNetworkMigrationAnalysisRequestT = Model::StartNetworkMigrationAnalysisRequest>
  void StartNetworkMigrationAnalysisAsync(const StartNetworkMigrationAnalysisRequestT& request,
                                          const StartNetworkMigrationAnalysisResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartNetworkMigrationAnalysis, request, handler, context);
  }

  /**
   * <p>Starts a code generation job to convert network migration mappings into
   * infrastructure-as-code templates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartNetworkMigrationCodeGeneration">AWS
   * API Reference</a></p>
   */
  virtual Model::StartNetworkMigrationCodeGenerationOutcome StartNetworkMigrationCodeGeneration(
      const Model::StartNetworkMigrationCodeGenerationRequest& request) const;

  /**
   * A Callable wrapper for StartNetworkMigrationCodeGeneration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename StartNetworkMigrationCodeGenerationRequestT = Model::StartNetworkMigrationCodeGenerationRequest>
  Model::StartNetworkMigrationCodeGenerationOutcomeCallable StartNetworkMigrationCodeGenerationCallable(
      const StartNetworkMigrationCodeGenerationRequestT& request) const {
    return SubmitCallable(&MgnClient::StartNetworkMigrationCodeGeneration, request);
  }

  /**
   * An Async wrapper for StartNetworkMigrationCodeGeneration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename StartNetworkMigrationCodeGenerationRequestT = Model::StartNetworkMigrationCodeGenerationRequest>
  void StartNetworkMigrationCodeGenerationAsync(const StartNetworkMigrationCodeGenerationRequestT& request,
                                                const StartNetworkMigrationCodeGenerationResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartNetworkMigrationCodeGeneration, request, handler, context);
  }

  /**
   * <p>Starts a deployment job to create the target network infrastructure based on
   * the generated code templates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartNetworkMigrationDeployment">AWS
   * API Reference</a></p>
   */
  virtual Model::StartNetworkMigrationDeploymentOutcome StartNetworkMigrationDeployment(
      const Model::StartNetworkMigrationDeploymentRequest& request) const;

  /**
   * A Callable wrapper for StartNetworkMigrationDeployment that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartNetworkMigrationDeploymentRequestT = Model::StartNetworkMigrationDeploymentRequest>
  Model::StartNetworkMigrationDeploymentOutcomeCallable StartNetworkMigrationDeploymentCallable(
      const StartNetworkMigrationDeploymentRequestT& request) const {
    return SubmitCallable(&MgnClient::StartNetworkMigrationDeployment, request);
  }

  /**
   * An Async wrapper for StartNetworkMigrationDeployment that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename StartNetworkMigrationDeploymentRequestT = Model::StartNetworkMigrationDeploymentRequest>
  void StartNetworkMigrationDeploymentAsync(const StartNetworkMigrationDeploymentRequestT& request,
                                            const StartNetworkMigrationDeploymentResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartNetworkMigrationDeployment, request, handler, context);
  }

  /**
   * <p>Starts the network migration mapping process for a given network migration
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartNetworkMigrationMapping">AWS
   * API Reference</a></p>
   */
  virtual Model::StartNetworkMigrationMappingOutcome StartNetworkMigrationMapping(
      const Model::StartNetworkMigrationMappingRequest& request) const;

  /**
   * A Callable wrapper for StartNetworkMigrationMapping that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartNetworkMigrationMappingRequestT = Model::StartNetworkMigrationMappingRequest>
  Model::StartNetworkMigrationMappingOutcomeCallable StartNetworkMigrationMappingCallable(
      const StartNetworkMigrationMappingRequestT& request) const {
    return SubmitCallable(&MgnClient::StartNetworkMigrationMapping, request);
  }

  /**
   * An Async wrapper for StartNetworkMigrationMapping that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartNetworkMigrationMappingRequestT = Model::StartNetworkMigrationMappingRequest>
  void StartNetworkMigrationMappingAsync(const StartNetworkMigrationMappingRequestT& request,
                                         const StartNetworkMigrationMappingResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartNetworkMigrationMapping, request, handler, context);
  }

  /**
   * <p>Starts a job to apply customer modifications to network migration mappings,
   * such as changing properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartNetworkMigrationMappingUpdate">AWS
   * API Reference</a></p>
   */
  virtual Model::StartNetworkMigrationMappingUpdateOutcome StartNetworkMigrationMappingUpdate(
      const Model::StartNetworkMigrationMappingUpdateRequest& request) const;

  /**
   * A Callable wrapper for StartNetworkMigrationMappingUpdate that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename StartNetworkMigrationMappingUpdateRequestT = Model::StartNetworkMigrationMappingUpdateRequest>
  Model::StartNetworkMigrationMappingUpdateOutcomeCallable StartNetworkMigrationMappingUpdateCallable(
      const StartNetworkMigrationMappingUpdateRequestT& request) const {
    return SubmitCallable(&MgnClient::StartNetworkMigrationMappingUpdate, request);
  }

  /**
   * An Async wrapper for StartNetworkMigrationMappingUpdate that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename StartNetworkMigrationMappingUpdateRequestT = Model::StartNetworkMigrationMappingUpdateRequest>
  void StartNetworkMigrationMappingUpdateAsync(const StartNetworkMigrationMappingUpdateRequestT& request,
                                               const StartNetworkMigrationMappingUpdateResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartNetworkMigrationMappingUpdate, request, handler, context);
  }

  /**
   * <p>Start replication for source server irrespective of its replication
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::StartReplicationOutcome StartReplication(const Model::StartReplicationRequest& request) const;

  /**
   * A Callable wrapper for StartReplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartReplicationRequestT = Model::StartReplicationRequest>
  Model::StartReplicationOutcomeCallable StartReplicationCallable(const StartReplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::StartReplication, request);
  }

  /**
   * An Async wrapper for StartReplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartReplicationRequestT = Model::StartReplicationRequest>
  void StartReplicationAsync(const StartReplicationRequestT& request, const StartReplicationResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartReplication, request, handler, context);
  }

  /**
   * <p>Launches a Test Instance for specific Source Servers. This command starts a
   * LAUNCH job whose initiatedBy property is StartTest and changes the
   * SourceServer.lifeCycle.state property to TESTING.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartTest">AWS API
   * Reference</a></p>
   */
  virtual Model::StartTestOutcome StartTest(const Model::StartTestRequest& request) const;

  /**
   * A Callable wrapper for StartTest that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartTestRequestT = Model::StartTestRequest>
  Model::StartTestOutcomeCallable StartTestCallable(const StartTestRequestT& request) const {
    return SubmitCallable(&MgnClient::StartTest, request);
  }

  /**
   * An Async wrapper for StartTest that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartTestRequestT = Model::StartTestRequest>
  void StartTestAsync(const StartTestRequestT& request, const StartTestResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StartTest, request, handler, context);
  }

  /**
   * <p>Stop Replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StopReplication">AWS
   * API Reference</a></p>
   */
  virtual Model::StopReplicationOutcome StopReplication(const Model::StopReplicationRequest& request) const;

  /**
   * A Callable wrapper for StopReplication that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StopReplicationRequestT = Model::StopReplicationRequest>
  Model::StopReplicationOutcomeCallable StopReplicationCallable(const StopReplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::StopReplication, request);
  }

  /**
   * An Async wrapper for StopReplication that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StopReplicationRequestT = Model::StopReplicationRequest>
  void StopReplicationAsync(const StopReplicationRequestT& request, const StopReplicationResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::StopReplication, request, handler, context);
  }

  /**
   * <p>Adds or overwrites only the specified tags for the specified Application
   * Migration Service resource or resources. When you specify an existing tag key,
   * the value is overwritten with the new value. Each resource can have a maximum of
   * 50 tags. Each tag consists of a key and optional value.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&MgnClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::TagResource, request, handler, context);
  }

  /**
   * <p>Starts a job that terminates specific launched EC2 Test and Cutover
   * instances. This command will not work for any Source Server with a
   * lifecycle.state of TESTING, CUTTING_OVER, or CUTOVER.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/TerminateTargetInstances">AWS
   * API Reference</a></p>
   */
  virtual Model::TerminateTargetInstancesOutcome TerminateTargetInstances(const Model::TerminateTargetInstancesRequest& request) const;

  /**
   * A Callable wrapper for TerminateTargetInstances that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename TerminateTargetInstancesRequestT = Model::TerminateTargetInstancesRequest>
  Model::TerminateTargetInstancesOutcomeCallable TerminateTargetInstancesCallable(const TerminateTargetInstancesRequestT& request) const {
    return SubmitCallable(&MgnClient::TerminateTargetInstances, request);
  }

  /**
   * An Async wrapper for TerminateTargetInstances that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename TerminateTargetInstancesRequestT = Model::TerminateTargetInstancesRequest>
  void TerminateTargetInstancesAsync(const TerminateTargetInstancesRequestT& request,
                                     const TerminateTargetInstancesResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::TerminateTargetInstances, request, handler, context);
  }

  /**
   * <p>Unarchive application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UnarchiveApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::UnarchiveApplicationOutcome UnarchiveApplication(const Model::UnarchiveApplicationRequest& request) const;

  /**
   * A Callable wrapper for UnarchiveApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UnarchiveApplicationRequestT = Model::UnarchiveApplicationRequest>
  Model::UnarchiveApplicationOutcomeCallable UnarchiveApplicationCallable(const UnarchiveApplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::UnarchiveApplication, request);
  }

  /**
   * An Async wrapper for UnarchiveApplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UnarchiveApplicationRequestT = Model::UnarchiveApplicationRequest>
  void UnarchiveApplicationAsync(const UnarchiveApplicationRequestT& request, const UnarchiveApplicationResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UnarchiveApplication, request, handler, context);
  }

  /**
   * <p>Unarchive wave.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UnarchiveWave">AWS
   * API Reference</a></p>
   */
  virtual Model::UnarchiveWaveOutcome UnarchiveWave(const Model::UnarchiveWaveRequest& request) const;

  /**
   * A Callable wrapper for UnarchiveWave that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UnarchiveWaveRequestT = Model::UnarchiveWaveRequest>
  Model::UnarchiveWaveOutcomeCallable UnarchiveWaveCallable(const UnarchiveWaveRequestT& request) const {
    return SubmitCallable(&MgnClient::UnarchiveWave, request);
  }

  /**
   * An Async wrapper for UnarchiveWave that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UnarchiveWaveRequestT = Model::UnarchiveWaveRequest>
  void UnarchiveWaveAsync(const UnarchiveWaveRequestT& request, const UnarchiveWaveResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UnarchiveWave, request, handler, context);
  }

  /**
   * <p>Deletes the specified set of tags from the specified set of Application
   * Migration Service resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&MgnClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Update application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

  /**
   * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
  Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateApplication, request);
  }

  /**
   * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
  void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateApplication, request, handler, context);
  }

  /**
   * <p>Update Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateConnector">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateConnectorOutcome UpdateConnector(const Model::UpdateConnectorRequest& request) const;

  /**
   * A Callable wrapper for UpdateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateConnectorRequestT = Model::UpdateConnectorRequest>
  Model::UpdateConnectorOutcomeCallable UpdateConnectorCallable(const UpdateConnectorRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateConnector, request);
  }

  /**
   * An Async wrapper for UpdateConnector that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateConnectorRequestT = Model::UpdateConnectorRequest>
  void UpdateConnectorAsync(const UpdateConnectorRequestT& request, const UpdateConnectorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateConnector, request, handler, context);
  }

  /**
   * <p>Updates multiple LaunchConfigurations by Source Server ID.</p>
   * <p>bootMode valid values are <code>LEGACY_BIOS | UEFI</code> </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateLaunchConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateLaunchConfigurationOutcome UpdateLaunchConfiguration(const Model::UpdateLaunchConfigurationRequest& request) const;

  /**
   * A Callable wrapper for UpdateLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateLaunchConfigurationRequestT = Model::UpdateLaunchConfigurationRequest>
  Model::UpdateLaunchConfigurationOutcomeCallable UpdateLaunchConfigurationCallable(
      const UpdateLaunchConfigurationRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateLaunchConfiguration, request);
  }

  /**
   * An Async wrapper for UpdateLaunchConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateLaunchConfigurationRequestT = Model::UpdateLaunchConfigurationRequest>
  void UpdateLaunchConfigurationAsync(const UpdateLaunchConfigurationRequestT& request,
                                      const UpdateLaunchConfigurationResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateLaunchConfiguration, request, handler, context);
  }

  /**
   * <p>Updates an existing Launch Configuration Template by ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateLaunchConfigurationTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateLaunchConfigurationTemplateOutcome UpdateLaunchConfigurationTemplate(
      const Model::UpdateLaunchConfigurationTemplateRequest& request) const;

  /**
   * A Callable wrapper for UpdateLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename UpdateLaunchConfigurationTemplateRequestT = Model::UpdateLaunchConfigurationTemplateRequest>
  Model::UpdateLaunchConfigurationTemplateOutcomeCallable UpdateLaunchConfigurationTemplateCallable(
      const UpdateLaunchConfigurationTemplateRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateLaunchConfigurationTemplate, request);
  }

  /**
   * An Async wrapper for UpdateLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateLaunchConfigurationTemplateRequestT = Model::UpdateLaunchConfigurationTemplateRequest>
  void UpdateLaunchConfigurationTemplateAsync(const UpdateLaunchConfigurationTemplateRequestT& request,
                                              const UpdateLaunchConfigurationTemplateResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateLaunchConfigurationTemplate, request, handler, context);
  }

  /**
   * <p>Updates an existing network migration definition with new source or target
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateNetworkMigrationDefinition">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateNetworkMigrationDefinitionOutcome UpdateNetworkMigrationDefinition(
      const Model::UpdateNetworkMigrationDefinitionRequest& request) const;

  /**
   * A Callable wrapper for UpdateNetworkMigrationDefinition that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename UpdateNetworkMigrationDefinitionRequestT = Model::UpdateNetworkMigrationDefinitionRequest>
  Model::UpdateNetworkMigrationDefinitionOutcomeCallable UpdateNetworkMigrationDefinitionCallable(
      const UpdateNetworkMigrationDefinitionRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateNetworkMigrationDefinition, request);
  }

  /**
   * An Async wrapper for UpdateNetworkMigrationDefinition that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateNetworkMigrationDefinitionRequestT = Model::UpdateNetworkMigrationDefinitionRequest>
  void UpdateNetworkMigrationDefinitionAsync(const UpdateNetworkMigrationDefinitionRequestT& request,
                                             const UpdateNetworkMigrationDefinitionResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateNetworkMigrationDefinition, request, handler, context);
  }

  /**
   * <p>Updates a mapper segment's configuration, such as changing its scope
   * tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateNetworkMigrationMapperSegment">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateNetworkMigrationMapperSegmentOutcome UpdateNetworkMigrationMapperSegment(
      const Model::UpdateNetworkMigrationMapperSegmentRequest& request) const;

  /**
   * A Callable wrapper for UpdateNetworkMigrationMapperSegment that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename UpdateNetworkMigrationMapperSegmentRequestT = Model::UpdateNetworkMigrationMapperSegmentRequest>
  Model::UpdateNetworkMigrationMapperSegmentOutcomeCallable UpdateNetworkMigrationMapperSegmentCallable(
      const UpdateNetworkMigrationMapperSegmentRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateNetworkMigrationMapperSegment, request);
  }

  /**
   * An Async wrapper for UpdateNetworkMigrationMapperSegment that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename UpdateNetworkMigrationMapperSegmentRequestT = Model::UpdateNetworkMigrationMapperSegmentRequest>
  void UpdateNetworkMigrationMapperSegmentAsync(const UpdateNetworkMigrationMapperSegmentRequestT& request,
                                                const UpdateNetworkMigrationMapperSegmentResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateNetworkMigrationMapperSegment, request, handler, context);
  }

  /**
   * <p>Allows you to update multiple ReplicationConfigurations by Source Server
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateReplicationConfigurationOutcome UpdateReplicationConfiguration(
      const Model::UpdateReplicationConfigurationRequest& request) const;

  /**
   * A Callable wrapper for UpdateReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateReplicationConfigurationRequestT = Model::UpdateReplicationConfigurationRequest>
  Model::UpdateReplicationConfigurationOutcomeCallable UpdateReplicationConfigurationCallable(
      const UpdateReplicationConfigurationRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateReplicationConfiguration, request);
  }

  /**
   * An Async wrapper for UpdateReplicationConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateReplicationConfigurationRequestT = Model::UpdateReplicationConfigurationRequest>
  void UpdateReplicationConfigurationAsync(const UpdateReplicationConfigurationRequestT& request,
                                           const UpdateReplicationConfigurationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateReplicationConfiguration, request, handler, context);
  }

  /**
   * <p>Updates multiple ReplicationConfigurationTemplates by ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateReplicationConfigurationTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateReplicationConfigurationTemplateOutcome UpdateReplicationConfigurationTemplate(
      const Model::UpdateReplicationConfigurationTemplateRequest& request) const;

  /**
   * A Callable wrapper for UpdateReplicationConfigurationTemplate that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename UpdateReplicationConfigurationTemplateRequestT = Model::UpdateReplicationConfigurationTemplateRequest>
  Model::UpdateReplicationConfigurationTemplateOutcomeCallable UpdateReplicationConfigurationTemplateCallable(
      const UpdateReplicationConfigurationTemplateRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateReplicationConfigurationTemplate, request);
  }

  /**
   * An Async wrapper for UpdateReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename UpdateReplicationConfigurationTemplateRequestT = Model::UpdateReplicationConfigurationTemplateRequest>
  void UpdateReplicationConfigurationTemplateAsync(const UpdateReplicationConfigurationTemplateRequestT& request,
                                                   const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateReplicationConfigurationTemplate, request, handler, context);
  }

  /**
   * <p>Update Source Server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateSourceServer">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSourceServerOutcome UpdateSourceServer(const Model::UpdateSourceServerRequest& request) const;

  /**
   * A Callable wrapper for UpdateSourceServer that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateSourceServerRequestT = Model::UpdateSourceServerRequest>
  Model::UpdateSourceServerOutcomeCallable UpdateSourceServerCallable(const UpdateSourceServerRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateSourceServer, request);
  }

  /**
   * An Async wrapper for UpdateSourceServer that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateSourceServerRequestT = Model::UpdateSourceServerRequest>
  void UpdateSourceServerAsync(const UpdateSourceServerRequestT& request, const UpdateSourceServerResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateSourceServer, request, handler, context);
  }

  /**
   * <p>Allows you to change between the AGENT_BASED replication type and the
   * SNAPSHOT_SHIPPING replication type. </p> <p>SNAPSHOT_SHIPPING should be used for
   * agentless replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateSourceServerReplicationType">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSourceServerReplicationTypeOutcome UpdateSourceServerReplicationType(
      const Model::UpdateSourceServerReplicationTypeRequest& request) const;

  /**
   * A Callable wrapper for UpdateSourceServerReplicationType that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename UpdateSourceServerReplicationTypeRequestT = Model::UpdateSourceServerReplicationTypeRequest>
  Model::UpdateSourceServerReplicationTypeOutcomeCallable UpdateSourceServerReplicationTypeCallable(
      const UpdateSourceServerReplicationTypeRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateSourceServerReplicationType, request);
  }

  /**
   * An Async wrapper for UpdateSourceServerReplicationType that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateSourceServerReplicationTypeRequestT = Model::UpdateSourceServerReplicationTypeRequest>
  void UpdateSourceServerReplicationTypeAsync(const UpdateSourceServerReplicationTypeRequestT& request,
                                              const UpdateSourceServerReplicationTypeResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateSourceServerReplicationType, request, handler, context);
  }

  /**
   * <p>Update wave.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateWave">AWS API
   * Reference</a></p>
   */
  virtual Model::UpdateWaveOutcome UpdateWave(const Model::UpdateWaveRequest& request) const;

  /**
   * A Callable wrapper for UpdateWave that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateWaveRequestT = Model::UpdateWaveRequest>
  Model::UpdateWaveOutcomeCallable UpdateWaveCallable(const UpdateWaveRequestT& request) const {
    return SubmitCallable(&MgnClient::UpdateWave, request);
  }

  /**
   * An Async wrapper for UpdateWave that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateWaveRequestT = Model::UpdateWaveRequest>
  void UpdateWaveAsync(const UpdateWaveRequestT& request, const UpdateWaveResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MgnClient::UpdateWave, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<MgnEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<MgnClient>;
  void init(const MgnClientConfiguration& clientConfiguration);

  MgnClientConfiguration m_clientConfiguration;
  std::shared_ptr<MgnEndpointProviderBase> m_endpointProvider;
};

}  // namespace mgn
}  // namespace Aws
