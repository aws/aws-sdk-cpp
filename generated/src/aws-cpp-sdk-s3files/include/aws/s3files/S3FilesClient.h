/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/S3FilesPaginationBase.h>
#include <aws/s3files/S3FilesServiceClientModel.h>
#include <aws/s3files/S3FilesWaiter.h>
#include <aws/s3files/S3Files_EXPORTS.h>

namespace Aws {
namespace S3Files {
/**
 * <p>S3 Files makes S3 buckets accessible as high-performance file systems powered
 * by EFS. This service enables file system interface access to S3 data with
 * sub-millisecond latencies through mount targets, supporting AI/ML workloads,
 * media processing, and hybrid storage workflows that require both file system and
 * object storage access to the same data.</p>
 */
class AWS_S3FILES_API S3FilesClient : public Aws::Client::AWSJsonClient,
                                      public Aws::Client::ClientWithAsyncTemplateMethods<S3FilesClient>,
                                      public S3FilesPaginationBase<S3FilesClient>,
                                      public S3FilesWaiter<S3FilesClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef S3FilesClientConfiguration ClientConfigurationType;
  typedef S3FilesEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  S3FilesClient(const Aws::S3Files::S3FilesClientConfiguration& clientConfiguration = Aws::S3Files::S3FilesClientConfiguration(),
                std::shared_ptr<S3FilesEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  S3FilesClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<S3FilesEndpointProviderBase> endpointProvider = nullptr,
                const Aws::S3Files::S3FilesClientConfiguration& clientConfiguration = Aws::S3Files::S3FilesClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  S3FilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                std::shared_ptr<S3FilesEndpointProviderBase> endpointProvider = nullptr,
                const Aws::S3Files::S3FilesClientConfiguration& clientConfiguration = Aws::S3Files::S3FilesClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  S3FilesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  S3FilesClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  S3FilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~S3FilesClient();

  /**
   * <p>Creates an S3 File System Access Point for application-specific access with
   * POSIX user identity and root directory enforcement. Access points provide a way
   * to manage access to shared datasets in multi-tenant scenarios.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/CreateAccessPoint">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAccessPointOutcome CreateAccessPoint(const Model::CreateAccessPointRequest& request) const;

  /**
   * A Callable wrapper for CreateAccessPoint that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAccessPointRequestT = Model::CreateAccessPointRequest>
  Model::CreateAccessPointOutcomeCallable CreateAccessPointCallable(const CreateAccessPointRequestT& request) const {
    return SubmitCallable(&S3FilesClient::CreateAccessPoint, request);
  }

  /**
   * An Async wrapper for CreateAccessPoint that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAccessPointRequestT = Model::CreateAccessPointRequest>
  void CreateAccessPointAsync(const CreateAccessPointRequestT& request, const CreateAccessPointResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::CreateAccessPoint, request, handler, context);
  }

  /**
   * <p>Creates an S3 File System resource scoped to a bucket or prefix within a
   * bucket, enabling file system access to S3 data. To create a file system, you
   * need an S3 bucket and an IAM role that grants the service permission to access
   * the bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/CreateFileSystem">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest& request) const;

  /**
   * A Callable wrapper for CreateFileSystem that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateFileSystemRequestT = Model::CreateFileSystemRequest>
  Model::CreateFileSystemOutcomeCallable CreateFileSystemCallable(const CreateFileSystemRequestT& request) const {
    return SubmitCallable(&S3FilesClient::CreateFileSystem, request);
  }

  /**
   * An Async wrapper for CreateFileSystem that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateFileSystemRequestT = Model::CreateFileSystemRequest>
  void CreateFileSystemAsync(const CreateFileSystemRequestT& request, const CreateFileSystemResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::CreateFileSystem, request, handler, context);
  }

  /**
   * <p>Creates a mount target resource as an endpoint for mounting the S3 File
   * System from compute resources in a specific Availability Zone and VPC. Mount
   * targets provide network access to the file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/CreateMountTarget">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMountTargetOutcome CreateMountTarget(const Model::CreateMountTargetRequest& request) const;

  /**
   * A Callable wrapper for CreateMountTarget that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateMountTargetRequestT = Model::CreateMountTargetRequest>
  Model::CreateMountTargetOutcomeCallable CreateMountTargetCallable(const CreateMountTargetRequestT& request) const {
    return SubmitCallable(&S3FilesClient::CreateMountTarget, request);
  }

  /**
   * An Async wrapper for CreateMountTarget that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateMountTargetRequestT = Model::CreateMountTargetRequest>
  void CreateMountTargetAsync(const CreateMountTargetRequestT& request, const CreateMountTargetResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::CreateMountTarget, request, handler, context);
  }

  /**
   * <p>Deletes an S3 File System Access Point. This operation is
   * irreversible.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/DeleteAccessPoint">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAccessPointOutcome DeleteAccessPoint(const Model::DeleteAccessPointRequest& request) const;

  /**
   * A Callable wrapper for DeleteAccessPoint that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAccessPointRequestT = Model::DeleteAccessPointRequest>
  Model::DeleteAccessPointOutcomeCallable DeleteAccessPointCallable(const DeleteAccessPointRequestT& request) const {
    return SubmitCallable(&S3FilesClient::DeleteAccessPoint, request);
  }

  /**
   * An Async wrapper for DeleteAccessPoint that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAccessPointRequestT = Model::DeleteAccessPointRequest>
  void DeleteAccessPointAsync(const DeleteAccessPointRequestT& request, const DeleteAccessPointResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::DeleteAccessPoint, request, handler, context);
  }

  /**
   * <p>Deletes an S3 File System. You can optionally force deletion of a file system
   * that has pending export data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/DeleteFileSystem">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFileSystemOutcome DeleteFileSystem(const Model::DeleteFileSystemRequest& request) const;

  /**
   * A Callable wrapper for DeleteFileSystem that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteFileSystemRequestT = Model::DeleteFileSystemRequest>
  Model::DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const DeleteFileSystemRequestT& request) const {
    return SubmitCallable(&S3FilesClient::DeleteFileSystem, request);
  }

  /**
   * An Async wrapper for DeleteFileSystem that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteFileSystemRequestT = Model::DeleteFileSystemRequest>
  void DeleteFileSystemAsync(const DeleteFileSystemRequestT& request, const DeleteFileSystemResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::DeleteFileSystem, request, handler, context);
  }

  /**
   * <p>Deletes the IAM resource policy of an S3 File System.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/DeleteFileSystemPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFileSystemPolicyOutcome DeleteFileSystemPolicy(const Model::DeleteFileSystemPolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteFileSystemPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteFileSystemPolicyRequestT = Model::DeleteFileSystemPolicyRequest>
  Model::DeleteFileSystemPolicyOutcomeCallable DeleteFileSystemPolicyCallable(const DeleteFileSystemPolicyRequestT& request) const {
    return SubmitCallable(&S3FilesClient::DeleteFileSystemPolicy, request);
  }

  /**
   * An Async wrapper for DeleteFileSystemPolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteFileSystemPolicyRequestT = Model::DeleteFileSystemPolicyRequest>
  void DeleteFileSystemPolicyAsync(const DeleteFileSystemPolicyRequestT& request,
                                   const DeleteFileSystemPolicyResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::DeleteFileSystemPolicy, request, handler, context);
  }

  /**
   * <p>Deletes the specified mount target. This operation is
   * irreversible.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/DeleteMountTarget">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteMountTargetOutcome DeleteMountTarget(const Model::DeleteMountTargetRequest& request) const;

  /**
   * A Callable wrapper for DeleteMountTarget that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteMountTargetRequestT = Model::DeleteMountTargetRequest>
  Model::DeleteMountTargetOutcomeCallable DeleteMountTargetCallable(const DeleteMountTargetRequestT& request) const {
    return SubmitCallable(&S3FilesClient::DeleteMountTarget, request);
  }

  /**
   * An Async wrapper for DeleteMountTarget that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteMountTargetRequestT = Model::DeleteMountTargetRequest>
  void DeleteMountTargetAsync(const DeleteMountTargetRequestT& request, const DeleteMountTargetResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::DeleteMountTarget, request, handler, context);
  }

  /**
   * <p>Returns resource information for an S3 File System Access
   * Point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/GetAccessPoint">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccessPointOutcome GetAccessPoint(const Model::GetAccessPointRequest& request) const;

  /**
   * A Callable wrapper for GetAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAccessPointRequestT = Model::GetAccessPointRequest>
  Model::GetAccessPointOutcomeCallable GetAccessPointCallable(const GetAccessPointRequestT& request) const {
    return SubmitCallable(&S3FilesClient::GetAccessPoint, request);
  }

  /**
   * An Async wrapper for GetAccessPoint that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAccessPointRequestT = Model::GetAccessPointRequest>
  void GetAccessPointAsync(const GetAccessPointRequestT& request, const GetAccessPointResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::GetAccessPoint, request, handler, context);
  }

  /**
   * <p>Returns resource information for the specified S3 File System including
   * status, configuration, and metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/GetFileSystem">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFileSystemOutcome GetFileSystem(const Model::GetFileSystemRequest& request) const;

  /**
   * A Callable wrapper for GetFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetFileSystemRequestT = Model::GetFileSystemRequest>
  Model::GetFileSystemOutcomeCallable GetFileSystemCallable(const GetFileSystemRequestT& request) const {
    return SubmitCallable(&S3FilesClient::GetFileSystem, request);
  }

  /**
   * An Async wrapper for GetFileSystem that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetFileSystemRequestT = Model::GetFileSystemRequest>
  void GetFileSystemAsync(const GetFileSystemRequestT& request, const GetFileSystemResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::GetFileSystem, request, handler, context);
  }

  /**
   * <p>Returns the IAM resource policy of an S3 File System.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/GetFileSystemPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFileSystemPolicyOutcome GetFileSystemPolicy(const Model::GetFileSystemPolicyRequest& request) const;

  /**
   * A Callable wrapper for GetFileSystemPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetFileSystemPolicyRequestT = Model::GetFileSystemPolicyRequest>
  Model::GetFileSystemPolicyOutcomeCallable GetFileSystemPolicyCallable(const GetFileSystemPolicyRequestT& request) const {
    return SubmitCallable(&S3FilesClient::GetFileSystemPolicy, request);
  }

  /**
   * An Async wrapper for GetFileSystemPolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetFileSystemPolicyRequestT = Model::GetFileSystemPolicyRequest>
  void GetFileSystemPolicyAsync(const GetFileSystemPolicyRequestT& request, const GetFileSystemPolicyResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::GetFileSystemPolicy, request, handler, context);
  }

  /**
   * <p>Returns detailed resource information for the specified mount target
   * including network configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/GetMountTarget">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMountTargetOutcome GetMountTarget(const Model::GetMountTargetRequest& request) const;

  /**
   * A Callable wrapper for GetMountTarget that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetMountTargetRequestT = Model::GetMountTargetRequest>
  Model::GetMountTargetOutcomeCallable GetMountTargetCallable(const GetMountTargetRequestT& request) const {
    return SubmitCallable(&S3FilesClient::GetMountTarget, request);
  }

  /**
   * An Async wrapper for GetMountTarget that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetMountTargetRequestT = Model::GetMountTargetRequest>
  void GetMountTargetAsync(const GetMountTargetRequestT& request, const GetMountTargetResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::GetMountTarget, request, handler, context);
  }

  /**
   * <p>Returns the synchronization configuration for the specified S3 File System,
   * including import data rules and expiration data rules.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/GetSynchronizationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSynchronizationConfigurationOutcome GetSynchronizationConfiguration(
      const Model::GetSynchronizationConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetSynchronizationConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetSynchronizationConfigurationRequestT = Model::GetSynchronizationConfigurationRequest>
  Model::GetSynchronizationConfigurationOutcomeCallable GetSynchronizationConfigurationCallable(
      const GetSynchronizationConfigurationRequestT& request) const {
    return SubmitCallable(&S3FilesClient::GetSynchronizationConfiguration, request);
  }

  /**
   * An Async wrapper for GetSynchronizationConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetSynchronizationConfigurationRequestT = Model::GetSynchronizationConfigurationRequest>
  void GetSynchronizationConfigurationAsync(const GetSynchronizationConfigurationRequestT& request,
                                            const GetSynchronizationConfigurationResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::GetSynchronizationConfiguration, request, handler, context);
  }

  /**
   * <p>Returns resource information for all S3 File System Access Points associated
   * with the specified S3 File System.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ListAccessPoints">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAccessPointsOutcome ListAccessPoints(const Model::ListAccessPointsRequest& request) const;

  /**
   * A Callable wrapper for ListAccessPoints that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAccessPointsRequestT = Model::ListAccessPointsRequest>
  Model::ListAccessPointsOutcomeCallable ListAccessPointsCallable(const ListAccessPointsRequestT& request) const {
    return SubmitCallable(&S3FilesClient::ListAccessPoints, request);
  }

  /**
   * An Async wrapper for ListAccessPoints that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAccessPointsRequestT = Model::ListAccessPointsRequest>
  void ListAccessPointsAsync(const ListAccessPointsRequestT& request, const ListAccessPointsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::ListAccessPoints, request, handler, context);
  }

  /**
   * <p>Returns a list of all S3 File Systems owned by the account with optional
   * filtering by bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ListFileSystems">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFileSystemsOutcome ListFileSystems(const Model::ListFileSystemsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListFileSystems that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListFileSystemsRequestT = Model::ListFileSystemsRequest>
  Model::ListFileSystemsOutcomeCallable ListFileSystemsCallable(const ListFileSystemsRequestT& request = {}) const {
    return SubmitCallable(&S3FilesClient::ListFileSystems, request);
  }

  /**
   * An Async wrapper for ListFileSystems that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListFileSystemsRequestT = Model::ListFileSystemsRequest>
  void ListFileSystemsAsync(const ListFileSystemsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListFileSystemsRequestT& request = {}) const {
    return SubmitAsync(&S3FilesClient::ListFileSystems, request, handler, context);
  }

  /**
   * <p>Returns resource information for all mount targets with optional filtering by
   * file system, access point, and VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ListMountTargets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMountTargetsOutcome ListMountTargets(const Model::ListMountTargetsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListMountTargets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListMountTargetsRequestT = Model::ListMountTargetsRequest>
  Model::ListMountTargetsOutcomeCallable ListMountTargetsCallable(const ListMountTargetsRequestT& request = {}) const {
    return SubmitCallable(&S3FilesClient::ListMountTargets, request);
  }

  /**
   * An Async wrapper for ListMountTargets that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListMountTargetsRequestT = Model::ListMountTargetsRequest>
  void ListMountTargetsAsync(const ListMountTargetsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListMountTargetsRequestT& request = {}) const {
    return SubmitAsync(&S3FilesClient::ListMountTargets, request, handler, context);
  }

  /**
   * <p>Lists all tags for S3 Files resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&S3FilesClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Creates or replaces the IAM resource policy for an S3 File System to control
   * access permissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/PutFileSystemPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutFileSystemPolicyOutcome PutFileSystemPolicy(const Model::PutFileSystemPolicyRequest& request) const;

  /**
   * A Callable wrapper for PutFileSystemPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutFileSystemPolicyRequestT = Model::PutFileSystemPolicyRequest>
  Model::PutFileSystemPolicyOutcomeCallable PutFileSystemPolicyCallable(const PutFileSystemPolicyRequestT& request) const {
    return SubmitCallable(&S3FilesClient::PutFileSystemPolicy, request);
  }

  /**
   * An Async wrapper for PutFileSystemPolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutFileSystemPolicyRequestT = Model::PutFileSystemPolicyRequest>
  void PutFileSystemPolicyAsync(const PutFileSystemPolicyRequestT& request, const PutFileSystemPolicyResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::PutFileSystemPolicy, request, handler, context);
  }

  /**
   * <p>Creates or updates the synchronization configuration for the specified S3
   * File System, including import data rules and expiration data
   * rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/PutSynchronizationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutSynchronizationConfigurationOutcome PutSynchronizationConfiguration(
      const Model::PutSynchronizationConfigurationRequest& request) const;

  /**
   * A Callable wrapper for PutSynchronizationConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename PutSynchronizationConfigurationRequestT = Model::PutSynchronizationConfigurationRequest>
  Model::PutSynchronizationConfigurationOutcomeCallable PutSynchronizationConfigurationCallable(
      const PutSynchronizationConfigurationRequestT& request) const {
    return SubmitCallable(&S3FilesClient::PutSynchronizationConfiguration, request);
  }

  /**
   * An Async wrapper for PutSynchronizationConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename PutSynchronizationConfigurationRequestT = Model::PutSynchronizationConfigurationRequest>
  void PutSynchronizationConfigurationAsync(const PutSynchronizationConfigurationRequestT& request,
                                            const PutSynchronizationConfigurationResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::PutSynchronizationConfiguration, request, handler, context);
  }

  /**
   * <p>Creates tags for S3 Files resources using standard Amazon Web Services
   * tagging APIs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&S3FilesClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from S3 Files resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&S3FilesClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the mount target resource, specifically security group
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/UpdateMountTarget">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateMountTargetOutcome UpdateMountTarget(const Model::UpdateMountTargetRequest& request) const;

  /**
   * A Callable wrapper for UpdateMountTarget that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateMountTargetRequestT = Model::UpdateMountTargetRequest>
  Model::UpdateMountTargetOutcomeCallable UpdateMountTargetCallable(const UpdateMountTargetRequestT& request) const {
    return SubmitCallable(&S3FilesClient::UpdateMountTarget, request);
  }

  /**
   * An Async wrapper for UpdateMountTarget that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateMountTargetRequestT = Model::UpdateMountTargetRequest>
  void UpdateMountTargetAsync(const UpdateMountTargetRequestT& request, const UpdateMountTargetResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&S3FilesClient::UpdateMountTarget, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<S3FilesEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<S3FilesClient>;
  void init(const S3FilesClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, S3FilesError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  S3FilesClientConfiguration m_clientConfiguration;
  std::shared_ptr<S3FilesEndpointProviderBase> m_endpointProvider;
};

}  // namespace S3Files
}  // namespace Aws
