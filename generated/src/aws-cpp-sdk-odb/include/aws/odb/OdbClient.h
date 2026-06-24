/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/OdbPaginationBase.h>
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/OdbWaiter.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
/**
 * <p>Oracle Database@Amazon Web Services is an offering that enables you to access
 * Oracle Exadata infrastructure managed by Oracle Cloud Infrastructure (OCI)
 * inside Amazon Web Services data centers. You can migrate your Oracle Exadata
 * workloads, establish low-latency connectivity with applications running on
 * Amazon Web Services, and integrate with Amazon Web Services services. For
 * example, you can run application servers in a Virtual Private Cloud (VPC) and
 * access an Oracle Exadata system running in Oracle Database@Amazon Web Services.
 * You can get started with Oracle Database@Amazon Web Services by using the
 * familiar Amazon Web Services Management Console, APIs, or CLI.</p> <p>This
 * interface reference for Oracle Database@Amazon Web Services contains
 * documentation for a programming or command line interface that you can use to
 * manage Oracle Database@Amazon Web Services. Oracle Database@Amazon Web Services
 * is asynchronous, which means that some interfaces might require techniques such
 * as polling or callback functions to determine when a command has been applied.
 * The reference structure is as follows.</p> <p> <b>Oracle Database@Amazon Web
 * Services API Reference</b> </p> <ul> <li> <p>For the alphabetical list of API
 * actions, see <a
 * href="https://docs.aws.amazon.com/odb/latest/APIReference/API_Operations.html">API
 * Actions</a>.</p> </li> <li> <p>For the alphabetical list of data types, see <a
 * href="https://docs.aws.amazon.com/odb/latest/APIReference/API_Types.html">Data
 * Types</a>.</p> </li> <li> <p>For a list of common query parameters, see <a
 * href="https://docs.aws.amazon.com/odb/latest/APIReference/CommonParameters.html">Common
 * Parameters</a>.</p> </li> <li> <p>For descriptions of the error codes, see <a
 * href="https://docs.aws.amazon.com/odb/latest/APIReference/CommonErrors.html">Common
 * Errors</a>.</p> </li> </ul>
 */
class AWS_ODB_API OdbClient : public Aws::Client::AWSJsonClient,
                              public Aws::Client::ClientWithAsyncTemplateMethods<OdbClient>,
                              public OdbPaginationBase<OdbClient>,
                              public OdbWaiter<OdbClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef OdbClientConfiguration ClientConfigurationType;
  typedef OdbEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  OdbClient(const Aws::odb::OdbClientConfiguration& clientConfiguration = Aws::odb::OdbClientConfiguration(),
            std::shared_ptr<OdbEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  OdbClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<OdbEndpointProviderBase> endpointProvider = nullptr,
            const Aws::odb::OdbClientConfiguration& clientConfiguration = Aws::odb::OdbClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  OdbClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            std::shared_ptr<OdbEndpointProviderBase> endpointProvider = nullptr,
            const Aws::odb::OdbClientConfiguration& clientConfiguration = Aws::odb::OdbClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  OdbClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  OdbClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  OdbClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~OdbClient();

  /**
   * <p>Registers the Amazon Web Services Marketplace token for your Amazon Web
   * Services account to activate your Oracle Database@Amazon Web Services
   * subscription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AcceptMarketplaceRegistration">AWS
   * API Reference</a></p>
   */
  virtual Model::AcceptMarketplaceRegistrationOutcome AcceptMarketplaceRegistration(
      const Model::AcceptMarketplaceRegistrationRequest& request) const;

  /**
   * A Callable wrapper for AcceptMarketplaceRegistration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename AcceptMarketplaceRegistrationRequestT = Model::AcceptMarketplaceRegistrationRequest>
  Model::AcceptMarketplaceRegistrationOutcomeCallable AcceptMarketplaceRegistrationCallable(
      const AcceptMarketplaceRegistrationRequestT& request) const {
    return SubmitCallable(&OdbClient::AcceptMarketplaceRegistration, request);
  }

  /**
   * An Async wrapper for AcceptMarketplaceRegistration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AcceptMarketplaceRegistrationRequestT = Model::AcceptMarketplaceRegistrationRequest>
  void AcceptMarketplaceRegistrationAsync(const AcceptMarketplaceRegistrationRequestT& request,
                                          const AcceptMarketplaceRegistrationResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::AcceptMarketplaceRegistration, request, handler, context);
  }

  /**
   * <p>Associates an Amazon Web Services Identity and Access Management (IAM)
   * service role with a specified resource to enable Amazon Web Services service
   * integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AssociateIamRoleToResource">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateIamRoleToResourceOutcome AssociateIamRoleToResource(
      const Model::AssociateIamRoleToResourceRequest& request) const;

  /**
   * A Callable wrapper for AssociateIamRoleToResource that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename AssociateIamRoleToResourceRequestT = Model::AssociateIamRoleToResourceRequest>
  Model::AssociateIamRoleToResourceOutcomeCallable AssociateIamRoleToResourceCallable(
      const AssociateIamRoleToResourceRequestT& request) const {
    return SubmitCallable(&OdbClient::AssociateIamRoleToResource, request);
  }

  /**
   * An Async wrapper for AssociateIamRoleToResource that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AssociateIamRoleToResourceRequestT = Model::AssociateIamRoleToResourceRequest>
  void AssociateIamRoleToResourceAsync(const AssociateIamRoleToResourceRequestT& request,
                                       const AssociateIamRoleToResourceResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::AssociateIamRoleToResource, request, handler, context);
  }

  /**
   * <p>Creates a new Autonomous Database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAutonomousDatabaseOutcome CreateAutonomousDatabase(const Model::CreateAutonomousDatabaseRequest& request = {}) const;

  /**
   * A Callable wrapper for CreateAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAutonomousDatabaseRequestT = Model::CreateAutonomousDatabaseRequest>
  Model::CreateAutonomousDatabaseOutcomeCallable CreateAutonomousDatabaseCallable(
      const CreateAutonomousDatabaseRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::CreateAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for CreateAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateAutonomousDatabaseRequestT = Model::CreateAutonomousDatabaseRequest>
  void CreateAutonomousDatabaseAsync(const CreateAutonomousDatabaseResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                     const CreateAutonomousDatabaseRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::CreateAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Creates a new backup of the specified Autonomous Database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateAutonomousDatabaseBackup">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAutonomousDatabaseBackupOutcome CreateAutonomousDatabaseBackup(
      const Model::CreateAutonomousDatabaseBackupRequest& request) const;

  /**
   * A Callable wrapper for CreateAutonomousDatabaseBackup that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateAutonomousDatabaseBackupRequestT = Model::CreateAutonomousDatabaseBackupRequest>
  Model::CreateAutonomousDatabaseBackupOutcomeCallable CreateAutonomousDatabaseBackupCallable(
      const CreateAutonomousDatabaseBackupRequestT& request) const {
    return SubmitCallable(&OdbClient::CreateAutonomousDatabaseBackup, request);
  }

  /**
   * An Async wrapper for CreateAutonomousDatabaseBackup that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateAutonomousDatabaseBackupRequestT = Model::CreateAutonomousDatabaseBackupRequest>
  void CreateAutonomousDatabaseBackupAsync(const CreateAutonomousDatabaseBackupRequestT& request,
                                           const CreateAutonomousDatabaseBackupResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::CreateAutonomousDatabaseBackup, request, handler, context);
  }

  /**
   * <p>Creates a new wallet for the specified Autonomous Database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateAutonomousDatabaseWallet">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAutonomousDatabaseWalletOutcome CreateAutonomousDatabaseWallet(
      const Model::CreateAutonomousDatabaseWalletRequest& request) const;

  /**
   * A Callable wrapper for CreateAutonomousDatabaseWallet that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateAutonomousDatabaseWalletRequestT = Model::CreateAutonomousDatabaseWalletRequest>
  Model::CreateAutonomousDatabaseWalletOutcomeCallable CreateAutonomousDatabaseWalletCallable(
      const CreateAutonomousDatabaseWalletRequestT& request) const {
    return SubmitCallable(&OdbClient::CreateAutonomousDatabaseWallet, request);
  }

  /**
   * An Async wrapper for CreateAutonomousDatabaseWallet that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateAutonomousDatabaseWalletRequestT = Model::CreateAutonomousDatabaseWalletRequest>
  void CreateAutonomousDatabaseWalletAsync(const CreateAutonomousDatabaseWalletRequestT& request,
                                           const CreateAutonomousDatabaseWalletResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::CreateAutonomousDatabaseWallet, request, handler, context);
  }

  /**
   * <p>Creates a new Autonomous VM cluster in the specified Exadata
   * infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateCloudAutonomousVmCluster">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCloudAutonomousVmClusterOutcome CreateCloudAutonomousVmCluster(
      const Model::CreateCloudAutonomousVmClusterRequest& request) const;

  /**
   * A Callable wrapper for CreateCloudAutonomousVmCluster that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateCloudAutonomousVmClusterRequestT = Model::CreateCloudAutonomousVmClusterRequest>
  Model::CreateCloudAutonomousVmClusterOutcomeCallable CreateCloudAutonomousVmClusterCallable(
      const CreateCloudAutonomousVmClusterRequestT& request) const {
    return SubmitCallable(&OdbClient::CreateCloudAutonomousVmCluster, request);
  }

  /**
   * An Async wrapper for CreateCloudAutonomousVmCluster that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateCloudAutonomousVmClusterRequestT = Model::CreateCloudAutonomousVmClusterRequest>
  void CreateCloudAutonomousVmClusterAsync(const CreateCloudAutonomousVmClusterRequestT& request,
                                           const CreateCloudAutonomousVmClusterResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::CreateCloudAutonomousVmCluster, request, handler, context);
  }

  /**
   * <p>Creates an Exadata infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateCloudExadataInfrastructure">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCloudExadataInfrastructureOutcome CreateCloudExadataInfrastructure(
      const Model::CreateCloudExadataInfrastructureRequest& request) const;

  /**
   * A Callable wrapper for CreateCloudExadataInfrastructure that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateCloudExadataInfrastructureRequestT = Model::CreateCloudExadataInfrastructureRequest>
  Model::CreateCloudExadataInfrastructureOutcomeCallable CreateCloudExadataInfrastructureCallable(
      const CreateCloudExadataInfrastructureRequestT& request) const {
    return SubmitCallable(&OdbClient::CreateCloudExadataInfrastructure, request);
  }

  /**
   * An Async wrapper for CreateCloudExadataInfrastructure that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateCloudExadataInfrastructureRequestT = Model::CreateCloudExadataInfrastructureRequest>
  void CreateCloudExadataInfrastructureAsync(const CreateCloudExadataInfrastructureRequestT& request,
                                             const CreateCloudExadataInfrastructureResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::CreateCloudExadataInfrastructure, request, handler, context);
  }

  /**
   * <p>Creates a VM cluster on the specified Exadata infrastructure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateCloudVmCluster">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCloudVmClusterOutcome CreateCloudVmCluster(const Model::CreateCloudVmClusterRequest& request) const;

  /**
   * A Callable wrapper for CreateCloudVmCluster that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateCloudVmClusterRequestT = Model::CreateCloudVmClusterRequest>
  Model::CreateCloudVmClusterOutcomeCallable CreateCloudVmClusterCallable(const CreateCloudVmClusterRequestT& request) const {
    return SubmitCallable(&OdbClient::CreateCloudVmCluster, request);
  }

  /**
   * An Async wrapper for CreateCloudVmCluster that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateCloudVmClusterRequestT = Model::CreateCloudVmClusterRequest>
  void CreateCloudVmClusterAsync(const CreateCloudVmClusterRequestT& request, const CreateCloudVmClusterResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::CreateCloudVmCluster, request, handler, context);
  }

  /**
   * <p>Creates an ODB network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateOdbNetwork">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOdbNetworkOutcome CreateOdbNetwork(const Model::CreateOdbNetworkRequest& request) const;

  /**
   * A Callable wrapper for CreateOdbNetwork that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateOdbNetworkRequestT = Model::CreateOdbNetworkRequest>
  Model::CreateOdbNetworkOutcomeCallable CreateOdbNetworkCallable(const CreateOdbNetworkRequestT& request) const {
    return SubmitCallable(&OdbClient::CreateOdbNetwork, request);
  }

  /**
   * An Async wrapper for CreateOdbNetwork that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateOdbNetworkRequestT = Model::CreateOdbNetworkRequest>
  void CreateOdbNetworkAsync(const CreateOdbNetworkRequestT& request, const CreateOdbNetworkResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::CreateOdbNetwork, request, handler, context);
  }

  /**
   * <p>Creates a peering connection between an ODB network and a VPC.</p> <p>A
   * peering connection enables private connectivity between the networks for
   * application-tier communication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateOdbPeeringConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOdbPeeringConnectionOutcome CreateOdbPeeringConnection(
      const Model::CreateOdbPeeringConnectionRequest& request) const;

  /**
   * A Callable wrapper for CreateOdbPeeringConnection that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateOdbPeeringConnectionRequestT = Model::CreateOdbPeeringConnectionRequest>
  Model::CreateOdbPeeringConnectionOutcomeCallable CreateOdbPeeringConnectionCallable(
      const CreateOdbPeeringConnectionRequestT& request) const {
    return SubmitCallable(&OdbClient::CreateOdbPeeringConnection, request);
  }

  /**
   * An Async wrapper for CreateOdbPeeringConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateOdbPeeringConnectionRequestT = Model::CreateOdbPeeringConnectionRequest>
  void CreateOdbPeeringConnectionAsync(const CreateOdbPeeringConnectionRequestT& request,
                                       const CreateOdbPeeringConnectionResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::CreateOdbPeeringConnection, request, handler, context);
  }

  /**
   * <p>Deletes the specified Autonomous Database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAutonomousDatabaseOutcome DeleteAutonomousDatabase(const Model::DeleteAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for DeleteAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAutonomousDatabaseRequestT = Model::DeleteAutonomousDatabaseRequest>
  Model::DeleteAutonomousDatabaseOutcomeCallable DeleteAutonomousDatabaseCallable(const DeleteAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::DeleteAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for DeleteAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteAutonomousDatabaseRequestT = Model::DeleteAutonomousDatabaseRequest>
  void DeleteAutonomousDatabaseAsync(const DeleteAutonomousDatabaseRequestT& request,
                                     const DeleteAutonomousDatabaseResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::DeleteAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Deletes the specified Autonomous Database backup.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteAutonomousDatabaseBackup">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAutonomousDatabaseBackupOutcome DeleteAutonomousDatabaseBackup(
      const Model::DeleteAutonomousDatabaseBackupRequest& request) const;

  /**
   * A Callable wrapper for DeleteAutonomousDatabaseBackup that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteAutonomousDatabaseBackupRequestT = Model::DeleteAutonomousDatabaseBackupRequest>
  Model::DeleteAutonomousDatabaseBackupOutcomeCallable DeleteAutonomousDatabaseBackupCallable(
      const DeleteAutonomousDatabaseBackupRequestT& request) const {
    return SubmitCallable(&OdbClient::DeleteAutonomousDatabaseBackup, request);
  }

  /**
   * An Async wrapper for DeleteAutonomousDatabaseBackup that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteAutonomousDatabaseBackupRequestT = Model::DeleteAutonomousDatabaseBackupRequest>
  void DeleteAutonomousDatabaseBackupAsync(const DeleteAutonomousDatabaseBackupRequestT& request,
                                           const DeleteAutonomousDatabaseBackupResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::DeleteAutonomousDatabaseBackup, request, handler, context);
  }

  /**
   * <p>Deletes an Autonomous VM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteCloudAutonomousVmCluster">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteCloudAutonomousVmClusterOutcome DeleteCloudAutonomousVmCluster(
      const Model::DeleteCloudAutonomousVmClusterRequest& request) const;

  /**
   * A Callable wrapper for DeleteCloudAutonomousVmCluster that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteCloudAutonomousVmClusterRequestT = Model::DeleteCloudAutonomousVmClusterRequest>
  Model::DeleteCloudAutonomousVmClusterOutcomeCallable DeleteCloudAutonomousVmClusterCallable(
      const DeleteCloudAutonomousVmClusterRequestT& request) const {
    return SubmitCallable(&OdbClient::DeleteCloudAutonomousVmCluster, request);
  }

  /**
   * An Async wrapper for DeleteCloudAutonomousVmCluster that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteCloudAutonomousVmClusterRequestT = Model::DeleteCloudAutonomousVmClusterRequest>
  void DeleteCloudAutonomousVmClusterAsync(const DeleteCloudAutonomousVmClusterRequestT& request,
                                           const DeleteCloudAutonomousVmClusterResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::DeleteCloudAutonomousVmCluster, request, handler, context);
  }

  /**
   * <p>Deletes the specified Exadata infrastructure. Before you use this operation,
   * make sure to delete all of the VM clusters that are hosted on this Exadata
   * infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteCloudExadataInfrastructure">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteCloudExadataInfrastructureOutcome DeleteCloudExadataInfrastructure(
      const Model::DeleteCloudExadataInfrastructureRequest& request) const;

  /**
   * A Callable wrapper for DeleteCloudExadataInfrastructure that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DeleteCloudExadataInfrastructureRequestT = Model::DeleteCloudExadataInfrastructureRequest>
  Model::DeleteCloudExadataInfrastructureOutcomeCallable DeleteCloudExadataInfrastructureCallable(
      const DeleteCloudExadataInfrastructureRequestT& request) const {
    return SubmitCallable(&OdbClient::DeleteCloudExadataInfrastructure, request);
  }

  /**
   * An Async wrapper for DeleteCloudExadataInfrastructure that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteCloudExadataInfrastructureRequestT = Model::DeleteCloudExadataInfrastructureRequest>
  void DeleteCloudExadataInfrastructureAsync(const DeleteCloudExadataInfrastructureRequestT& request,
                                             const DeleteCloudExadataInfrastructureResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::DeleteCloudExadataInfrastructure, request, handler, context);
  }

  /**
   * <p>Deletes the specified VM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteCloudVmCluster">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteCloudVmClusterOutcome DeleteCloudVmCluster(const Model::DeleteCloudVmClusterRequest& request) const;

  /**
   * A Callable wrapper for DeleteCloudVmCluster that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteCloudVmClusterRequestT = Model::DeleteCloudVmClusterRequest>
  Model::DeleteCloudVmClusterOutcomeCallable DeleteCloudVmClusterCallable(const DeleteCloudVmClusterRequestT& request) const {
    return SubmitCallable(&OdbClient::DeleteCloudVmCluster, request);
  }

  /**
   * An Async wrapper for DeleteCloudVmCluster that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteCloudVmClusterRequestT = Model::DeleteCloudVmClusterRequest>
  void DeleteCloudVmClusterAsync(const DeleteCloudVmClusterRequestT& request, const DeleteCloudVmClusterResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::DeleteCloudVmCluster, request, handler, context);
  }

  /**
   * <p>Deletes the specified ODB network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteOdbNetwork">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteOdbNetworkOutcome DeleteOdbNetwork(const Model::DeleteOdbNetworkRequest& request) const;

  /**
   * A Callable wrapper for DeleteOdbNetwork that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteOdbNetworkRequestT = Model::DeleteOdbNetworkRequest>
  Model::DeleteOdbNetworkOutcomeCallable DeleteOdbNetworkCallable(const DeleteOdbNetworkRequestT& request) const {
    return SubmitCallable(&OdbClient::DeleteOdbNetwork, request);
  }

  /**
   * An Async wrapper for DeleteOdbNetwork that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteOdbNetworkRequestT = Model::DeleteOdbNetworkRequest>
  void DeleteOdbNetworkAsync(const DeleteOdbNetworkRequestT& request, const DeleteOdbNetworkResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::DeleteOdbNetwork, request, handler, context);
  }

  /**
   * <p>Deletes an ODB peering connection.</p> <p>When you delete an ODB peering
   * connection, the underlying VPC peering connection is also deleted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteOdbPeeringConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteOdbPeeringConnectionOutcome DeleteOdbPeeringConnection(
      const Model::DeleteOdbPeeringConnectionRequest& request) const;

  /**
   * A Callable wrapper for DeleteOdbPeeringConnection that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteOdbPeeringConnectionRequestT = Model::DeleteOdbPeeringConnectionRequest>
  Model::DeleteOdbPeeringConnectionOutcomeCallable DeleteOdbPeeringConnectionCallable(
      const DeleteOdbPeeringConnectionRequestT& request) const {
    return SubmitCallable(&OdbClient::DeleteOdbPeeringConnection, request);
  }

  /**
   * An Async wrapper for DeleteOdbPeeringConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteOdbPeeringConnectionRequestT = Model::DeleteOdbPeeringConnectionRequest>
  void DeleteOdbPeeringConnectionAsync(const DeleteOdbPeeringConnectionRequestT& request,
                                       const DeleteOdbPeeringConnectionResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::DeleteOdbPeeringConnection, request, handler, context);
  }

  /**
   * <p>Disassociates an Amazon Web Services Identity and Access Management (IAM)
   * service role from a specified resource to disable Amazon Web Services service
   * integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DisassociateIamRoleFromResource">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateIamRoleFromResourceOutcome DisassociateIamRoleFromResource(
      const Model::DisassociateIamRoleFromResourceRequest& request) const;

  /**
   * A Callable wrapper for DisassociateIamRoleFromResource that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DisassociateIamRoleFromResourceRequestT = Model::DisassociateIamRoleFromResourceRequest>
  Model::DisassociateIamRoleFromResourceOutcomeCallable DisassociateIamRoleFromResourceCallable(
      const DisassociateIamRoleFromResourceRequestT& request) const {
    return SubmitCallable(&OdbClient::DisassociateIamRoleFromResource, request);
  }

  /**
   * An Async wrapper for DisassociateIamRoleFromResource that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DisassociateIamRoleFromResourceRequestT = Model::DisassociateIamRoleFromResourceRequest>
  void DisassociateIamRoleFromResourceAsync(const DisassociateIamRoleFromResourceRequestT& request,
                                            const DisassociateIamRoleFromResourceResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::DisassociateIamRoleFromResource, request, handler, context);
  }

  /**
   * <p>Initiates a failover of the specified Autonomous Database to a standby peer
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/FailoverAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::FailoverAutonomousDatabaseOutcome FailoverAutonomousDatabase(
      const Model::FailoverAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for FailoverAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename FailoverAutonomousDatabaseRequestT = Model::FailoverAutonomousDatabaseRequest>
  Model::FailoverAutonomousDatabaseOutcomeCallable FailoverAutonomousDatabaseCallable(
      const FailoverAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::FailoverAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for FailoverAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename FailoverAutonomousDatabaseRequestT = Model::FailoverAutonomousDatabaseRequest>
  void FailoverAutonomousDatabaseAsync(const FailoverAutonomousDatabaseRequestT& request,
                                       const FailoverAutonomousDatabaseResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::FailoverAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Gets information about a specific Autonomous Database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAutonomousDatabaseOutcome GetAutonomousDatabase(const Model::GetAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for GetAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAutonomousDatabaseRequestT = Model::GetAutonomousDatabaseRequest>
  Model::GetAutonomousDatabaseOutcomeCallable GetAutonomousDatabaseCallable(const GetAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::GetAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for GetAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAutonomousDatabaseRequestT = Model::GetAutonomousDatabaseRequest>
  void GetAutonomousDatabaseAsync(const GetAutonomousDatabaseRequestT& request, const GetAutonomousDatabaseResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Gets information about a specific Autonomous Database backup.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetAutonomousDatabaseBackup">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAutonomousDatabaseBackupOutcome GetAutonomousDatabaseBackup(
      const Model::GetAutonomousDatabaseBackupRequest& request) const;

  /**
   * A Callable wrapper for GetAutonomousDatabaseBackup that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetAutonomousDatabaseBackupRequestT = Model::GetAutonomousDatabaseBackupRequest>
  Model::GetAutonomousDatabaseBackupOutcomeCallable GetAutonomousDatabaseBackupCallable(
      const GetAutonomousDatabaseBackupRequestT& request) const {
    return SubmitCallable(&OdbClient::GetAutonomousDatabaseBackup, request);
  }

  /**
   * An Async wrapper for GetAutonomousDatabaseBackup that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAutonomousDatabaseBackupRequestT = Model::GetAutonomousDatabaseBackupRequest>
  void GetAutonomousDatabaseBackupAsync(const GetAutonomousDatabaseBackupRequestT& request,
                                        const GetAutonomousDatabaseBackupResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetAutonomousDatabaseBackup, request, handler, context);
  }

  /**
   * <p>Gets the wallet details for the specified Autonomous Database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetAutonomousDatabaseWalletDetails">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAutonomousDatabaseWalletDetailsOutcome GetAutonomousDatabaseWalletDetails(
      const Model::GetAutonomousDatabaseWalletDetailsRequest& request) const;

  /**
   * A Callable wrapper for GetAutonomousDatabaseWalletDetails that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename GetAutonomousDatabaseWalletDetailsRequestT = Model::GetAutonomousDatabaseWalletDetailsRequest>
  Model::GetAutonomousDatabaseWalletDetailsOutcomeCallable GetAutonomousDatabaseWalletDetailsCallable(
      const GetAutonomousDatabaseWalletDetailsRequestT& request) const {
    return SubmitCallable(&OdbClient::GetAutonomousDatabaseWalletDetails, request);
  }

  /**
   * An Async wrapper for GetAutonomousDatabaseWalletDetails that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetAutonomousDatabaseWalletDetailsRequestT = Model::GetAutonomousDatabaseWalletDetailsRequest>
  void GetAutonomousDatabaseWalletDetailsAsync(const GetAutonomousDatabaseWalletDetailsRequestT& request,
                                               const GetAutonomousDatabaseWalletDetailsResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetAutonomousDatabaseWalletDetails, request, handler, context);
  }

  /**
   * <p>Gets information about a specific Autonomous VM cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetCloudAutonomousVmCluster">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCloudAutonomousVmClusterOutcome GetCloudAutonomousVmCluster(
      const Model::GetCloudAutonomousVmClusterRequest& request) const;

  /**
   * A Callable wrapper for GetCloudAutonomousVmCluster that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetCloudAutonomousVmClusterRequestT = Model::GetCloudAutonomousVmClusterRequest>
  Model::GetCloudAutonomousVmClusterOutcomeCallable GetCloudAutonomousVmClusterCallable(
      const GetCloudAutonomousVmClusterRequestT& request) const {
    return SubmitCallable(&OdbClient::GetCloudAutonomousVmCluster, request);
  }

  /**
   * An Async wrapper for GetCloudAutonomousVmCluster that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetCloudAutonomousVmClusterRequestT = Model::GetCloudAutonomousVmClusterRequest>
  void GetCloudAutonomousVmClusterAsync(const GetCloudAutonomousVmClusterRequestT& request,
                                        const GetCloudAutonomousVmClusterResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetCloudAutonomousVmCluster, request, handler, context);
  }

  /**
   * <p>Returns information about the specified Exadata infrastructure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetCloudExadataInfrastructure">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCloudExadataInfrastructureOutcome GetCloudExadataInfrastructure(
      const Model::GetCloudExadataInfrastructureRequest& request) const;

  /**
   * A Callable wrapper for GetCloudExadataInfrastructure that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetCloudExadataInfrastructureRequestT = Model::GetCloudExadataInfrastructureRequest>
  Model::GetCloudExadataInfrastructureOutcomeCallable GetCloudExadataInfrastructureCallable(
      const GetCloudExadataInfrastructureRequestT& request) const {
    return SubmitCallable(&OdbClient::GetCloudExadataInfrastructure, request);
  }

  /**
   * An Async wrapper for GetCloudExadataInfrastructure that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetCloudExadataInfrastructureRequestT = Model::GetCloudExadataInfrastructureRequest>
  void GetCloudExadataInfrastructureAsync(const GetCloudExadataInfrastructureRequestT& request,
                                          const GetCloudExadataInfrastructureResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetCloudExadataInfrastructure, request, handler, context);
  }

  /**
   * <p>Retrieves information about unallocated resources in a specified Cloud
   * Exadata Infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetCloudExadataInfrastructureUnallocatedResources">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCloudExadataInfrastructureUnallocatedResourcesOutcome GetCloudExadataInfrastructureUnallocatedResources(
      const Model::GetCloudExadataInfrastructureUnallocatedResourcesRequest& request) const;

  /**
   * A Callable wrapper for GetCloudExadataInfrastructureUnallocatedResources that returns a future to the operation so that it can be
   * executed in parallel to other requests.
   */
  template <
      typename GetCloudExadataInfrastructureUnallocatedResourcesRequestT = Model::GetCloudExadataInfrastructureUnallocatedResourcesRequest>
  Model::GetCloudExadataInfrastructureUnallocatedResourcesOutcomeCallable GetCloudExadataInfrastructureUnallocatedResourcesCallable(
      const GetCloudExadataInfrastructureUnallocatedResourcesRequestT& request) const {
    return SubmitCallable(&OdbClient::GetCloudExadataInfrastructureUnallocatedResources, request);
  }

  /**
   * An Async wrapper for GetCloudExadataInfrastructureUnallocatedResources that queues the request into a thread executor and triggers
   * associated callback when operation has finished.
   */
  template <
      typename GetCloudExadataInfrastructureUnallocatedResourcesRequestT = Model::GetCloudExadataInfrastructureUnallocatedResourcesRequest>
  void GetCloudExadataInfrastructureUnallocatedResourcesAsync(
      const GetCloudExadataInfrastructureUnallocatedResourcesRequestT& request,
      const GetCloudExadataInfrastructureUnallocatedResourcesResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetCloudExadataInfrastructureUnallocatedResources, request, handler, context);
  }

  /**
   * <p>Returns information about the specified VM cluster.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetCloudVmCluster">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCloudVmClusterOutcome GetCloudVmCluster(const Model::GetCloudVmClusterRequest& request) const;

  /**
   * A Callable wrapper for GetCloudVmCluster that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetCloudVmClusterRequestT = Model::GetCloudVmClusterRequest>
  Model::GetCloudVmClusterOutcomeCallable GetCloudVmClusterCallable(const GetCloudVmClusterRequestT& request) const {
    return SubmitCallable(&OdbClient::GetCloudVmCluster, request);
  }

  /**
   * An Async wrapper for GetCloudVmCluster that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetCloudVmClusterRequestT = Model::GetCloudVmClusterRequest>
  void GetCloudVmClusterAsync(const GetCloudVmClusterRequestT& request, const GetCloudVmClusterResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetCloudVmCluster, request, handler, context);
  }

  /**
   * <p>Returns information about the specified DB node.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetDbNode">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDbNodeOutcome GetDbNode(const Model::GetDbNodeRequest& request) const;

  /**
   * A Callable wrapper for GetDbNode that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetDbNodeRequestT = Model::GetDbNodeRequest>
  Model::GetDbNodeOutcomeCallable GetDbNodeCallable(const GetDbNodeRequestT& request) const {
    return SubmitCallable(&OdbClient::GetDbNode, request);
  }

  /**
   * An Async wrapper for GetDbNode that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetDbNodeRequestT = Model::GetDbNodeRequest>
  void GetDbNodeAsync(const GetDbNodeRequestT& request, const GetDbNodeResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetDbNode, request, handler, context);
  }

  /**
   * <p>Returns information about the specified database server.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetDbServer">AWS API
   * Reference</a></p>
   */
  virtual Model::GetDbServerOutcome GetDbServer(const Model::GetDbServerRequest& request) const;

  /**
   * A Callable wrapper for GetDbServer that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetDbServerRequestT = Model::GetDbServerRequest>
  Model::GetDbServerOutcomeCallable GetDbServerCallable(const GetDbServerRequestT& request) const {
    return SubmitCallable(&OdbClient::GetDbServer, request);
  }

  /**
   * An Async wrapper for GetDbServer that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetDbServerRequestT = Model::GetDbServerRequest>
  void GetDbServerAsync(const GetDbServerRequestT& request, const GetDbServerResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetDbServer, request, handler, context);
  }

  /**
   * <p>Returns the tenancy activation link and onboarding status for your Amazon Web
   * Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetOciOnboardingStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOciOnboardingStatusOutcome GetOciOnboardingStatus(const Model::GetOciOnboardingStatusRequest& request = {}) const;

  /**
   * A Callable wrapper for GetOciOnboardingStatus that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetOciOnboardingStatusRequestT = Model::GetOciOnboardingStatusRequest>
  Model::GetOciOnboardingStatusOutcomeCallable GetOciOnboardingStatusCallable(const GetOciOnboardingStatusRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::GetOciOnboardingStatus, request);
  }

  /**
   * An Async wrapper for GetOciOnboardingStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetOciOnboardingStatusRequestT = Model::GetOciOnboardingStatusRequest>
  void GetOciOnboardingStatusAsync(const GetOciOnboardingStatusResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const GetOciOnboardingStatusRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::GetOciOnboardingStatus, request, handler, context);
  }

  /**
   * <p>Returns information about the specified ODB network.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetOdbNetwork">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOdbNetworkOutcome GetOdbNetwork(const Model::GetOdbNetworkRequest& request) const;

  /**
   * A Callable wrapper for GetOdbNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetOdbNetworkRequestT = Model::GetOdbNetworkRequest>
  Model::GetOdbNetworkOutcomeCallable GetOdbNetworkCallable(const GetOdbNetworkRequestT& request) const {
    return SubmitCallable(&OdbClient::GetOdbNetwork, request);
  }

  /**
   * An Async wrapper for GetOdbNetwork that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetOdbNetworkRequestT = Model::GetOdbNetworkRequest>
  void GetOdbNetworkAsync(const GetOdbNetworkRequestT& request, const GetOdbNetworkResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetOdbNetwork, request, handler, context);
  }

  /**
   * <p>Retrieves information about an ODB peering connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetOdbPeeringConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOdbPeeringConnectionOutcome GetOdbPeeringConnection(const Model::GetOdbPeeringConnectionRequest& request) const;

  /**
   * A Callable wrapper for GetOdbPeeringConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetOdbPeeringConnectionRequestT = Model::GetOdbPeeringConnectionRequest>
  Model::GetOdbPeeringConnectionOutcomeCallable GetOdbPeeringConnectionCallable(const GetOdbPeeringConnectionRequestT& request) const {
    return SubmitCallable(&OdbClient::GetOdbPeeringConnection, request);
  }

  /**
   * An Async wrapper for GetOdbPeeringConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetOdbPeeringConnectionRequestT = Model::GetOdbPeeringConnectionRequest>
  void GetOdbPeeringConnectionAsync(const GetOdbPeeringConnectionRequestT& request,
                                    const GetOdbPeeringConnectionResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::GetOdbPeeringConnection, request, handler, context);
  }

  /**
   * <p>Initializes the ODB service for the first time in an account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/InitializeService">AWS
   * API Reference</a></p>
   */
  virtual Model::InitializeServiceOutcome InitializeService(const Model::InitializeServiceRequest& request = {}) const;

  /**
   * A Callable wrapper for InitializeService that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InitializeServiceRequestT = Model::InitializeServiceRequest>
  Model::InitializeServiceOutcomeCallable InitializeServiceCallable(const InitializeServiceRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::InitializeService, request);
  }

  /**
   * An Async wrapper for InitializeService that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename InitializeServiceRequestT = Model::InitializeServiceRequest>
  void InitializeServiceAsync(const InitializeServiceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const InitializeServiceRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::InitializeService, request, handler, context);
  }

  /**
   * <p>Lists the backups of the specified Autonomous Database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListAutonomousDatabaseBackups">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutonomousDatabaseBackupsOutcome ListAutonomousDatabaseBackups(
      const Model::ListAutonomousDatabaseBackupsRequest& request) const;

  /**
   * A Callable wrapper for ListAutonomousDatabaseBackups that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAutonomousDatabaseBackupsRequestT = Model::ListAutonomousDatabaseBackupsRequest>
  Model::ListAutonomousDatabaseBackupsOutcomeCallable ListAutonomousDatabaseBackupsCallable(
      const ListAutonomousDatabaseBackupsRequestT& request) const {
    return SubmitCallable(&OdbClient::ListAutonomousDatabaseBackups, request);
  }

  /**
   * An Async wrapper for ListAutonomousDatabaseBackups that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutonomousDatabaseBackupsRequestT = Model::ListAutonomousDatabaseBackupsRequest>
  void ListAutonomousDatabaseBackupsAsync(const ListAutonomousDatabaseBackupsRequestT& request,
                                          const ListAutonomousDatabaseBackupsResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ListAutonomousDatabaseBackups, request, handler, context);
  }

  /**
   * <p>Lists the available character sets for Autonomous Databases.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListAutonomousDatabaseCharacterSets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutonomousDatabaseCharacterSetsOutcome ListAutonomousDatabaseCharacterSets(
      const Model::ListAutonomousDatabaseCharacterSetsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAutonomousDatabaseCharacterSets that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListAutonomousDatabaseCharacterSetsRequestT = Model::ListAutonomousDatabaseCharacterSetsRequest>
  Model::ListAutonomousDatabaseCharacterSetsOutcomeCallable ListAutonomousDatabaseCharacterSetsCallable(
      const ListAutonomousDatabaseCharacterSetsRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListAutonomousDatabaseCharacterSets, request);
  }

  /**
   * An Async wrapper for ListAutonomousDatabaseCharacterSets that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListAutonomousDatabaseCharacterSetsRequestT = Model::ListAutonomousDatabaseCharacterSetsRequest>
  void ListAutonomousDatabaseCharacterSetsAsync(const ListAutonomousDatabaseCharacterSetsResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                const ListAutonomousDatabaseCharacterSetsRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListAutonomousDatabaseCharacterSets, request, handler, context);
  }

  /**
   * <p>Lists the clones of the specified Autonomous Database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListAutonomousDatabaseClones">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutonomousDatabaseClonesOutcome ListAutonomousDatabaseClones(
      const Model::ListAutonomousDatabaseClonesRequest& request) const;

  /**
   * A Callable wrapper for ListAutonomousDatabaseClones that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAutonomousDatabaseClonesRequestT = Model::ListAutonomousDatabaseClonesRequest>
  Model::ListAutonomousDatabaseClonesOutcomeCallable ListAutonomousDatabaseClonesCallable(
      const ListAutonomousDatabaseClonesRequestT& request) const {
    return SubmitCallable(&OdbClient::ListAutonomousDatabaseClones, request);
  }

  /**
   * An Async wrapper for ListAutonomousDatabaseClones that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutonomousDatabaseClonesRequestT = Model::ListAutonomousDatabaseClonesRequest>
  void ListAutonomousDatabaseClonesAsync(const ListAutonomousDatabaseClonesRequestT& request,
                                         const ListAutonomousDatabaseClonesResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ListAutonomousDatabaseClones, request, handler, context);
  }

  /**
   * <p>Lists the peer databases of the specified Autonomous Database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListAutonomousDatabasePeers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutonomousDatabasePeersOutcome ListAutonomousDatabasePeers(
      const Model::ListAutonomousDatabasePeersRequest& request) const;

  /**
   * A Callable wrapper for ListAutonomousDatabasePeers that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAutonomousDatabasePeersRequestT = Model::ListAutonomousDatabasePeersRequest>
  Model::ListAutonomousDatabasePeersOutcomeCallable ListAutonomousDatabasePeersCallable(
      const ListAutonomousDatabasePeersRequestT& request) const {
    return SubmitCallable(&OdbClient::ListAutonomousDatabasePeers, request);
  }

  /**
   * An Async wrapper for ListAutonomousDatabasePeers that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutonomousDatabasePeersRequestT = Model::ListAutonomousDatabasePeersRequest>
  void ListAutonomousDatabasePeersAsync(const ListAutonomousDatabasePeersRequestT& request,
                                        const ListAutonomousDatabasePeersResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ListAutonomousDatabasePeers, request, handler, context);
  }

  /**
   * <p>Lists the available Oracle Database software versions for Autonomous
   * Databases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListAutonomousDatabaseVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutonomousDatabaseVersionsOutcome ListAutonomousDatabaseVersions(
      const Model::ListAutonomousDatabaseVersionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAutonomousDatabaseVersions that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAutonomousDatabaseVersionsRequestT = Model::ListAutonomousDatabaseVersionsRequest>
  Model::ListAutonomousDatabaseVersionsOutcomeCallable ListAutonomousDatabaseVersionsCallable(
      const ListAutonomousDatabaseVersionsRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListAutonomousDatabaseVersions, request);
  }

  /**
   * An Async wrapper for ListAutonomousDatabaseVersions that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListAutonomousDatabaseVersionsRequestT = Model::ListAutonomousDatabaseVersionsRequest>
  void ListAutonomousDatabaseVersionsAsync(const ListAutonomousDatabaseVersionsResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                           const ListAutonomousDatabaseVersionsRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListAutonomousDatabaseVersions, request, handler, context);
  }

  /**
   * <p>Returns information about the Autonomous Databases owned by your Amazon Web
   * Services account in the current Amazon Web Services Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListAutonomousDatabases">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutonomousDatabasesOutcome ListAutonomousDatabases(const Model::ListAutonomousDatabasesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAutonomousDatabases that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAutonomousDatabasesRequestT = Model::ListAutonomousDatabasesRequest>
  Model::ListAutonomousDatabasesOutcomeCallable ListAutonomousDatabasesCallable(const ListAutonomousDatabasesRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListAutonomousDatabases, request);
  }

  /**
   * An Async wrapper for ListAutonomousDatabases that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutonomousDatabasesRequestT = Model::ListAutonomousDatabasesRequest>
  void ListAutonomousDatabasesAsync(const ListAutonomousDatabasesResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const ListAutonomousDatabasesRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListAutonomousDatabases, request, handler, context);
  }

  /**
   * <p>Lists all Autonomous VMs in an Autonomous VM cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListAutonomousVirtualMachines">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutonomousVirtualMachinesOutcome ListAutonomousVirtualMachines(
      const Model::ListAutonomousVirtualMachinesRequest& request) const;

  /**
   * A Callable wrapper for ListAutonomousVirtualMachines that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAutonomousVirtualMachinesRequestT = Model::ListAutonomousVirtualMachinesRequest>
  Model::ListAutonomousVirtualMachinesOutcomeCallable ListAutonomousVirtualMachinesCallable(
      const ListAutonomousVirtualMachinesRequestT& request) const {
    return SubmitCallable(&OdbClient::ListAutonomousVirtualMachines, request);
  }

  /**
   * An Async wrapper for ListAutonomousVirtualMachines that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutonomousVirtualMachinesRequestT = Model::ListAutonomousVirtualMachinesRequest>
  void ListAutonomousVirtualMachinesAsync(const ListAutonomousVirtualMachinesRequestT& request,
                                          const ListAutonomousVirtualMachinesResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ListAutonomousVirtualMachines, request, handler, context);
  }

  /**
   * <p>Lists all Autonomous VM clusters in a specified Cloud Exadata
   * infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListCloudAutonomousVmClusters">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCloudAutonomousVmClustersOutcome ListCloudAutonomousVmClusters(
      const Model::ListCloudAutonomousVmClustersRequest& request = {}) const;

  /**
   * A Callable wrapper for ListCloudAutonomousVmClusters that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListCloudAutonomousVmClustersRequestT = Model::ListCloudAutonomousVmClustersRequest>
  Model::ListCloudAutonomousVmClustersOutcomeCallable ListCloudAutonomousVmClustersCallable(
      const ListCloudAutonomousVmClustersRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListCloudAutonomousVmClusters, request);
  }

  /**
   * An Async wrapper for ListCloudAutonomousVmClusters that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListCloudAutonomousVmClustersRequestT = Model::ListCloudAutonomousVmClustersRequest>
  void ListCloudAutonomousVmClustersAsync(const ListCloudAutonomousVmClustersResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                          const ListCloudAutonomousVmClustersRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListCloudAutonomousVmClusters, request, handler, context);
  }

  /**
   * <p>Returns information about the Exadata infrastructures owned by your Amazon
   * Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListCloudExadataInfrastructures">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCloudExadataInfrastructuresOutcome ListCloudExadataInfrastructures(
      const Model::ListCloudExadataInfrastructuresRequest& request = {}) const;

  /**
   * A Callable wrapper for ListCloudExadataInfrastructures that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListCloudExadataInfrastructuresRequestT = Model::ListCloudExadataInfrastructuresRequest>
  Model::ListCloudExadataInfrastructuresOutcomeCallable ListCloudExadataInfrastructuresCallable(
      const ListCloudExadataInfrastructuresRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListCloudExadataInfrastructures, request);
  }

  /**
   * An Async wrapper for ListCloudExadataInfrastructures that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListCloudExadataInfrastructuresRequestT = Model::ListCloudExadataInfrastructuresRequest>
  void ListCloudExadataInfrastructuresAsync(const ListCloudExadataInfrastructuresResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                            const ListCloudExadataInfrastructuresRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListCloudExadataInfrastructures, request, handler, context);
  }

  /**
   * <p>Returns information about the VM clusters owned by your Amazon Web Services
   * account or only the ones on the specified Exadata infrastructure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListCloudVmClusters">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCloudVmClustersOutcome ListCloudVmClusters(const Model::ListCloudVmClustersRequest& request = {}) const;

  /**
   * A Callable wrapper for ListCloudVmClusters that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListCloudVmClustersRequestT = Model::ListCloudVmClustersRequest>
  Model::ListCloudVmClustersOutcomeCallable ListCloudVmClustersCallable(const ListCloudVmClustersRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListCloudVmClusters, request);
  }

  /**
   * An Async wrapper for ListCloudVmClusters that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListCloudVmClustersRequestT = Model::ListCloudVmClustersRequest>
  void ListCloudVmClustersAsync(const ListCloudVmClustersResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const ListCloudVmClustersRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListCloudVmClusters, request, handler, context);
  }

  /**
   * <p>Returns information about the DB nodes for the specified VM
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListDbNodes">AWS API
   * Reference</a></p>
   */
  virtual Model::ListDbNodesOutcome ListDbNodes(const Model::ListDbNodesRequest& request) const;

  /**
   * A Callable wrapper for ListDbNodes that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListDbNodesRequestT = Model::ListDbNodesRequest>
  Model::ListDbNodesOutcomeCallable ListDbNodesCallable(const ListDbNodesRequestT& request) const {
    return SubmitCallable(&OdbClient::ListDbNodes, request);
  }

  /**
   * An Async wrapper for ListDbNodes that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDbNodesRequestT = Model::ListDbNodesRequest>
  void ListDbNodesAsync(const ListDbNodesRequestT& request, const ListDbNodesResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ListDbNodes, request, handler, context);
  }

  /**
   * <p>Returns information about the database servers that belong to the specified
   * Exadata infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListDbServers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDbServersOutcome ListDbServers(const Model::ListDbServersRequest& request) const;

  /**
   * A Callable wrapper for ListDbServers that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListDbServersRequestT = Model::ListDbServersRequest>
  Model::ListDbServersOutcomeCallable ListDbServersCallable(const ListDbServersRequestT& request) const {
    return SubmitCallable(&OdbClient::ListDbServers, request);
  }

  /**
   * An Async wrapper for ListDbServers that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDbServersRequestT = Model::ListDbServersRequest>
  void ListDbServersAsync(const ListDbServersRequestT& request, const ListDbServersResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ListDbServers, request, handler, context);
  }

  /**
   * <p>Returns information about the shapes that are available for an Exadata
   * infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListDbSystemShapes">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDbSystemShapesOutcome ListDbSystemShapes(const Model::ListDbSystemShapesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDbSystemShapes that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDbSystemShapesRequestT = Model::ListDbSystemShapesRequest>
  Model::ListDbSystemShapesOutcomeCallable ListDbSystemShapesCallable(const ListDbSystemShapesRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListDbSystemShapes, request);
  }

  /**
   * An Async wrapper for ListDbSystemShapes that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListDbSystemShapesRequestT = Model::ListDbSystemShapesRequest>
  void ListDbSystemShapesAsync(const ListDbSystemShapesResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const ListDbSystemShapesRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListDbSystemShapes, request, handler, context);
  }

  /**
   * <p>Returns information about Oracle Grid Infrastructure (GI) software versions
   * that are available for a VM cluster for the specified shape.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListGiVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGiVersionsOutcome ListGiVersions(const Model::ListGiVersionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListGiVersions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListGiVersionsRequestT = Model::ListGiVersionsRequest>
  Model::ListGiVersionsOutcomeCallable ListGiVersionsCallable(const ListGiVersionsRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListGiVersions, request);
  }

  /**
   * An Async wrapper for ListGiVersions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListGiVersionsRequestT = Model::ListGiVersionsRequest>
  void ListGiVersionsAsync(const ListGiVersionsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListGiVersionsRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListGiVersions, request, handler, context);
  }

  /**
   * <p>Returns information about the ODB networks owned by your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListOdbNetworks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListOdbNetworksOutcome ListOdbNetworks(const Model::ListOdbNetworksRequest& request = {}) const;

  /**
   * A Callable wrapper for ListOdbNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListOdbNetworksRequestT = Model::ListOdbNetworksRequest>
  Model::ListOdbNetworksOutcomeCallable ListOdbNetworksCallable(const ListOdbNetworksRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListOdbNetworks, request);
  }

  /**
   * An Async wrapper for ListOdbNetworks that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListOdbNetworksRequestT = Model::ListOdbNetworksRequest>
  void ListOdbNetworksAsync(const ListOdbNetworksResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListOdbNetworksRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListOdbNetworks, request, handler, context);
  }

  /**
   * <p>Lists all ODB peering connections or those associated with a specific ODB
   * network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListOdbPeeringConnections">AWS
   * API Reference</a></p>
   */
  virtual Model::ListOdbPeeringConnectionsOutcome ListOdbPeeringConnections(
      const Model::ListOdbPeeringConnectionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListOdbPeeringConnections that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListOdbPeeringConnectionsRequestT = Model::ListOdbPeeringConnectionsRequest>
  Model::ListOdbPeeringConnectionsOutcomeCallable ListOdbPeeringConnectionsCallable(
      const ListOdbPeeringConnectionsRequestT& request = {}) const {
    return SubmitCallable(&OdbClient::ListOdbPeeringConnections, request);
  }

  /**
   * An Async wrapper for ListOdbPeeringConnections that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListOdbPeeringConnectionsRequestT = Model::ListOdbPeeringConnectionsRequest>
  void ListOdbPeeringConnectionsAsync(const ListOdbPeeringConnectionsResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const ListOdbPeeringConnectionsRequestT& request = {}) const {
    return SubmitAsync(&OdbClient::ListOdbPeeringConnections, request, handler, context);
  }

  /**
   * <p>Returns information about the system versions that are available for a VM
   * cluster for the specified <code>giVersion</code> and
   * <code>shape</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListSystemVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSystemVersionsOutcome ListSystemVersions(const Model::ListSystemVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListSystemVersions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSystemVersionsRequestT = Model::ListSystemVersionsRequest>
  Model::ListSystemVersionsOutcomeCallable ListSystemVersionsCallable(const ListSystemVersionsRequestT& request) const {
    return SubmitCallable(&OdbClient::ListSystemVersions, request);
  }

  /**
   * An Async wrapper for ListSystemVersions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListSystemVersionsRequestT = Model::ListSystemVersionsRequest>
  void ListSystemVersionsAsync(const ListSystemVersionsRequestT& request, const ListSystemVersionsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ListSystemVersions, request, handler, context);
  }

  /**
   * <p>Returns information about the tags applied to this resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&OdbClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Reboots the specified Autonomous Database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/RebootAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::RebootAutonomousDatabaseOutcome RebootAutonomousDatabase(const Model::RebootAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for RebootAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RebootAutonomousDatabaseRequestT = Model::RebootAutonomousDatabaseRequest>
  Model::RebootAutonomousDatabaseOutcomeCallable RebootAutonomousDatabaseCallable(const RebootAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::RebootAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for RebootAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RebootAutonomousDatabaseRequestT = Model::RebootAutonomousDatabaseRequest>
  void RebootAutonomousDatabaseAsync(const RebootAutonomousDatabaseRequestT& request,
                                     const RebootAutonomousDatabaseResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::RebootAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Reboots the specified DB node in a VM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/RebootDbNode">AWS
   * API Reference</a></p>
   */
  virtual Model::RebootDbNodeOutcome RebootDbNode(const Model::RebootDbNodeRequest& request) const;

  /**
   * A Callable wrapper for RebootDbNode that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RebootDbNodeRequestT = Model::RebootDbNodeRequest>
  Model::RebootDbNodeOutcomeCallable RebootDbNodeCallable(const RebootDbNodeRequestT& request) const {
    return SubmitCallable(&OdbClient::RebootDbNode, request);
  }

  /**
   * An Async wrapper for RebootDbNode that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RebootDbNodeRequestT = Model::RebootDbNodeRequest>
  void RebootDbNodeAsync(const RebootDbNodeRequestT& request, const RebootDbNodeResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::RebootDbNode, request, handler, context);
  }

  /**
   * <p>Restores the specified Autonomous Database to a point in time.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/RestoreAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::RestoreAutonomousDatabaseOutcome RestoreAutonomousDatabase(const Model::RestoreAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for RestoreAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RestoreAutonomousDatabaseRequestT = Model::RestoreAutonomousDatabaseRequest>
  Model::RestoreAutonomousDatabaseOutcomeCallable RestoreAutonomousDatabaseCallable(
      const RestoreAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::RestoreAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for RestoreAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RestoreAutonomousDatabaseRequestT = Model::RestoreAutonomousDatabaseRequest>
  void RestoreAutonomousDatabaseAsync(const RestoreAutonomousDatabaseRequestT& request,
                                      const RestoreAutonomousDatabaseResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::RestoreAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Shrinks the storage of the specified Autonomous Database to reclaim unused
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ShrinkAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::ShrinkAutonomousDatabaseOutcome ShrinkAutonomousDatabase(const Model::ShrinkAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for ShrinkAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ShrinkAutonomousDatabaseRequestT = Model::ShrinkAutonomousDatabaseRequest>
  Model::ShrinkAutonomousDatabaseOutcomeCallable ShrinkAutonomousDatabaseCallable(const ShrinkAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::ShrinkAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for ShrinkAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ShrinkAutonomousDatabaseRequestT = Model::ShrinkAutonomousDatabaseRequest>
  void ShrinkAutonomousDatabaseAsync(const ShrinkAutonomousDatabaseRequestT& request,
                                     const ShrinkAutonomousDatabaseResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::ShrinkAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Starts the specified Autonomous Database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/StartAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::StartAutonomousDatabaseOutcome StartAutonomousDatabase(const Model::StartAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for StartAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartAutonomousDatabaseRequestT = Model::StartAutonomousDatabaseRequest>
  Model::StartAutonomousDatabaseOutcomeCallable StartAutonomousDatabaseCallable(const StartAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::StartAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for StartAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartAutonomousDatabaseRequestT = Model::StartAutonomousDatabaseRequest>
  void StartAutonomousDatabaseAsync(const StartAutonomousDatabaseRequestT& request,
                                    const StartAutonomousDatabaseResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::StartAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Starts the specified DB node in a VM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/StartDbNode">AWS API
   * Reference</a></p>
   */
  virtual Model::StartDbNodeOutcome StartDbNode(const Model::StartDbNodeRequest& request) const;

  /**
   * A Callable wrapper for StartDbNode that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartDbNodeRequestT = Model::StartDbNodeRequest>
  Model::StartDbNodeOutcomeCallable StartDbNodeCallable(const StartDbNodeRequestT& request) const {
    return SubmitCallable(&OdbClient::StartDbNode, request);
  }

  /**
   * An Async wrapper for StartDbNode that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartDbNodeRequestT = Model::StartDbNodeRequest>
  void StartDbNodeAsync(const StartDbNodeRequestT& request, const StartDbNodeResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::StartDbNode, request, handler, context);
  }

  /**
   * <p>Stops the specified Autonomous Database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/StopAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::StopAutonomousDatabaseOutcome StopAutonomousDatabase(const Model::StopAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for StopAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopAutonomousDatabaseRequestT = Model::StopAutonomousDatabaseRequest>
  Model::StopAutonomousDatabaseOutcomeCallable StopAutonomousDatabaseCallable(const StopAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::StopAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for StopAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StopAutonomousDatabaseRequestT = Model::StopAutonomousDatabaseRequest>
  void StopAutonomousDatabaseAsync(const StopAutonomousDatabaseRequestT& request,
                                   const StopAutonomousDatabaseResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::StopAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Stops the specified DB node in a VM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/StopDbNode">AWS API
   * Reference</a></p>
   */
  virtual Model::StopDbNodeOutcome StopDbNode(const Model::StopDbNodeRequest& request) const;

  /**
   * A Callable wrapper for StopDbNode that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StopDbNodeRequestT = Model::StopDbNodeRequest>
  Model::StopDbNodeOutcomeCallable StopDbNodeCallable(const StopDbNodeRequestT& request) const {
    return SubmitCallable(&OdbClient::StopDbNode, request);
  }

  /**
   * An Async wrapper for StopDbNode that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StopDbNodeRequestT = Model::StopDbNodeRequest>
  void StopDbNodeAsync(const StopDbNodeRequestT& request, const StopDbNodeResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::StopDbNode, request, handler, context);
  }

  /**
   * <p>Performs a switchover of the specified Autonomous Database to a standby peer
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/SwitchoverAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::SwitchoverAutonomousDatabaseOutcome SwitchoverAutonomousDatabase(
      const Model::SwitchoverAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for SwitchoverAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename SwitchoverAutonomousDatabaseRequestT = Model::SwitchoverAutonomousDatabaseRequest>
  Model::SwitchoverAutonomousDatabaseOutcomeCallable SwitchoverAutonomousDatabaseCallable(
      const SwitchoverAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::SwitchoverAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for SwitchoverAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SwitchoverAutonomousDatabaseRequestT = Model::SwitchoverAutonomousDatabaseRequest>
  void SwitchoverAutonomousDatabaseAsync(const SwitchoverAutonomousDatabaseRequestT& request,
                                         const SwitchoverAutonomousDatabaseResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::SwitchoverAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Applies tags to the specified resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/TagResource">AWS API
   * Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&OdbClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&OdbClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the properties of an Autonomous Database.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UpdateAutonomousDatabase">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAutonomousDatabaseOutcome UpdateAutonomousDatabase(const Model::UpdateAutonomousDatabaseRequest& request) const;

  /**
   * A Callable wrapper for UpdateAutonomousDatabase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAutonomousDatabaseRequestT = Model::UpdateAutonomousDatabaseRequest>
  Model::UpdateAutonomousDatabaseOutcomeCallable UpdateAutonomousDatabaseCallable(const UpdateAutonomousDatabaseRequestT& request) const {
    return SubmitCallable(&OdbClient::UpdateAutonomousDatabase, request);
  }

  /**
   * An Async wrapper for UpdateAutonomousDatabase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateAutonomousDatabaseRequestT = Model::UpdateAutonomousDatabaseRequest>
  void UpdateAutonomousDatabaseAsync(const UpdateAutonomousDatabaseRequestT& request,
                                     const UpdateAutonomousDatabaseResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::UpdateAutonomousDatabase, request, handler, context);
  }

  /**
   * <p>Updates the properties of an Autonomous Database backup.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UpdateAutonomousDatabaseBackup">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAutonomousDatabaseBackupOutcome UpdateAutonomousDatabaseBackup(
      const Model::UpdateAutonomousDatabaseBackupRequest& request) const;

  /**
   * A Callable wrapper for UpdateAutonomousDatabaseBackup that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateAutonomousDatabaseBackupRequestT = Model::UpdateAutonomousDatabaseBackupRequest>
  Model::UpdateAutonomousDatabaseBackupOutcomeCallable UpdateAutonomousDatabaseBackupCallable(
      const UpdateAutonomousDatabaseBackupRequestT& request) const {
    return SubmitCallable(&OdbClient::UpdateAutonomousDatabaseBackup, request);
  }

  /**
   * An Async wrapper for UpdateAutonomousDatabaseBackup that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateAutonomousDatabaseBackupRequestT = Model::UpdateAutonomousDatabaseBackupRequest>
  void UpdateAutonomousDatabaseBackupAsync(const UpdateAutonomousDatabaseBackupRequestT& request,
                                           const UpdateAutonomousDatabaseBackupResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::UpdateAutonomousDatabaseBackup, request, handler, context);
  }

  /**
   * <p>Updates the properties of an Exadata infrastructure resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UpdateCloudExadataInfrastructure">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateCloudExadataInfrastructureOutcome UpdateCloudExadataInfrastructure(
      const Model::UpdateCloudExadataInfrastructureRequest& request) const;

  /**
   * A Callable wrapper for UpdateCloudExadataInfrastructure that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename UpdateCloudExadataInfrastructureRequestT = Model::UpdateCloudExadataInfrastructureRequest>
  Model::UpdateCloudExadataInfrastructureOutcomeCallable UpdateCloudExadataInfrastructureCallable(
      const UpdateCloudExadataInfrastructureRequestT& request) const {
    return SubmitCallable(&OdbClient::UpdateCloudExadataInfrastructure, request);
  }

  /**
   * An Async wrapper for UpdateCloudExadataInfrastructure that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateCloudExadataInfrastructureRequestT = Model::UpdateCloudExadataInfrastructureRequest>
  void UpdateCloudExadataInfrastructureAsync(const UpdateCloudExadataInfrastructureRequestT& request,
                                             const UpdateCloudExadataInfrastructureResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::UpdateCloudExadataInfrastructure, request, handler, context);
  }

  /**
   * <p>Updates properties of a specified ODB network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UpdateOdbNetwork">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateOdbNetworkOutcome UpdateOdbNetwork(const Model::UpdateOdbNetworkRequest& request) const;

  /**
   * A Callable wrapper for UpdateOdbNetwork that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateOdbNetworkRequestT = Model::UpdateOdbNetworkRequest>
  Model::UpdateOdbNetworkOutcomeCallable UpdateOdbNetworkCallable(const UpdateOdbNetworkRequestT& request) const {
    return SubmitCallable(&OdbClient::UpdateOdbNetwork, request);
  }

  /**
   * An Async wrapper for UpdateOdbNetwork that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateOdbNetworkRequestT = Model::UpdateOdbNetworkRequest>
  void UpdateOdbNetworkAsync(const UpdateOdbNetworkRequestT& request, const UpdateOdbNetworkResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::UpdateOdbNetwork, request, handler, context);
  }

  /**
   * <p>Modifies the settings of an Oracle Database@Amazon Web Services peering
   * connection. You can update the display name and add or remove CIDR blocks from
   * the peering connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UpdateOdbPeeringConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateOdbPeeringConnectionOutcome UpdateOdbPeeringConnection(
      const Model::UpdateOdbPeeringConnectionRequest& request) const;

  /**
   * A Callable wrapper for UpdateOdbPeeringConnection that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateOdbPeeringConnectionRequestT = Model::UpdateOdbPeeringConnectionRequest>
  Model::UpdateOdbPeeringConnectionOutcomeCallable UpdateOdbPeeringConnectionCallable(
      const UpdateOdbPeeringConnectionRequestT& request) const {
    return SubmitCallable(&OdbClient::UpdateOdbPeeringConnection, request);
  }

  /**
   * An Async wrapper for UpdateOdbPeeringConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateOdbPeeringConnectionRequestT = Model::UpdateOdbPeeringConnectionRequest>
  void UpdateOdbPeeringConnectionAsync(const UpdateOdbPeeringConnectionRequestT& request,
                                       const UpdateOdbPeeringConnectionResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OdbClient::UpdateOdbPeeringConnection, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<OdbEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<OdbClient>;
  void init(const OdbClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, OdbError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  OdbClientConfiguration m_clientConfiguration;
  std::shared_ptr<OdbEndpointProviderBase> m_endpointProvider;
};

}  // namespace odb
}  // namespace Aws
